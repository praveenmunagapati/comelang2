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
struct sReturnNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sLineNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sSNameNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sFuncNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sCallerFuncNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sCallerLineNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sCallerSNameNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sParentReturnNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sParentBreakNode
{
    int sline;
    char* sname;
};
struct sParentContinueNode
{
    int sline;
    char* sname;
};
struct sDerefferenceNode
{
    struct sNode* value;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sRefferenceNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sReverseNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sFunCallNode
{
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    int sline;
    char* sname;
};
struct map$2charphCVALUEph
{
    char** keys;
    _Bool* item_existance;
    struct CVALUE** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sCastNode
{
    struct sType* mType;
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sParenNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sLogicalDenial
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sMinusNode2
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sPlusPlusNode2
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sMinusMinusNode2
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sComplement
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sNormalBlock
{
    struct sBlock* mBlock;
    int sline;
    char* sname;
};
struct list_item$1tuple2$2sTypephcharphph
{
    struct tuple2$2sTypephcharph* item;
    struct list_item$1tuple2$2sTypephcharphph* prev;
    struct list_item$1tuple2$2sTypephcharphph* next;
};
struct list$1tuple2$2sTypephcharphph
{
    struct list_item$1tuple2$2sTypephcharphph* head;
    struct list_item$1tuple2$2sTypephcharphph* tail;
    int len;
    struct list_item$1tuple2$2sTypephcharphph* it;
};
struct sGlobalVariable
{
    struct sType* type;
    char* name;
    struct sNode* right_node;
    int sline;
    char* sname;
    char* array_initializer;
    struct list$1tuple2$2sTypephcharphph* multiple_declare;
    char* mDeclareSName;
};
struct sExternalGlobalVariable
{
    struct sType* type;
    char* name;
    int sline;
    char* sname;
    struct list$1tuple2$2sTypephcharphph* multiple_declare;
    char* mDeclareSName;
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

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

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

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

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

void come_init_v5();

void come_final_v5();

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

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
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);

int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info);

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info);

char* sReturnNode_kind();

_Bool sReturnNode_terminated();

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);

int sLineNode_sline(struct sLineNode* self, struct sInfo* info);

char* sLineNode_sname(struct sLineNode* self, struct sInfo* info);

_Bool sLineNode_terminated();

char* sLineNode_kind();

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);

int sSNameNode_sline(struct sSNameNode* self, struct sInfo* info);

char* sSNameNode_sname(struct sSNameNode* self, struct sInfo* info);

_Bool sSNameNode_terminated();

char* sSNameNode_kind();

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);

int sFuncNode_sline(struct sFuncNode* self, struct sInfo* info);

char* sFuncNode_sname(struct sFuncNode* self, struct sInfo* info);

_Bool sFuncNode_terminated();

char* sFuncNode_kind();

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);

int sCallerFuncNode_sline(struct sCallerFuncNode* self, struct sInfo* info);

char* sCallerFuncNode_sname(struct sCallerFuncNode* self, struct sInfo* info);

_Bool sCallerFuncNode_terminated();

char* sCallerFuncNode_kind();

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);

int sCallerLineNode_sline(struct sCallerLineNode* self, struct sInfo* info);

char* sCallerLineNode_sname(struct sCallerLineNode* self, struct sInfo* info);

_Bool sCallerLineNode_terminated();

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);

char* sCallerLineNode_kind();

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);

int sCallerSNameNode_sline(struct sCallerSNameNode* self, struct sInfo* info);

char* sCallerSNameNode_sname(struct sCallerSNameNode* self, struct sInfo* info);

_Bool sCallerSNameNode_terminated();

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);

char* sCallerSNameNode_kind();

struct sParentReturnNode* sParentReturnNode_initialize(struct sParentReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);

int sParentReturnNode_sline(struct sParentReturnNode* self, struct sInfo* info);

char* sParentReturnNode_sname(struct sParentReturnNode* self, struct sInfo* info);

_Bool sParentReturnNode_terminated();

char* sParentReturnNode_kind();

_Bool sParentReturnNode_compile(struct sParentReturnNode* self, struct sInfo* info);

struct sParentBreakNode* sParentBreakNode_initialize(struct sParentBreakNode* self, struct sInfo* info);

int sParentBreakNode_sline(struct sParentBreakNode* self, struct sInfo* info);

char* sParentBreakNode_sname(struct sParentBreakNode* self, struct sInfo* info);

_Bool sParentBreakNode_terminated();

char* sParentBreakNode_kind();

_Bool sParentBreakNode_compile(struct sParentBreakNode* self, struct sInfo* info);

struct sParentContinueNode* sParentContinueNode_initialize(struct sParentContinueNode* self, struct sInfo* info);

int sParentContinueNode_sline(struct sParentContinueNode* self, struct sInfo* info);

char* sParentContinueNode_sname(struct sParentContinueNode* self, struct sInfo* info);

_Bool sParentContinueNode_terminated();

char* sParentContinueNode_kind();

_Bool sParentContinueNode_compile(struct sParentContinueNode* self, struct sInfo* info);

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);

int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info);

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info);

_Bool sDerefferenceNode_terminated();

char* sDerefferenceNode_kind();

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);

int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info);

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info);

_Bool sRefferenceNode_terminated();

char* sRefferenceNode_kind();

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);

int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info);

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info);

_Bool sReverseNode_terminated();

char* sReverseNode_kind();

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
int sFunCallNode_sline(struct sFunCallNode* self, struct sInfo* info);

char* sFunCallNode_sname(struct sFunCallNode* self, struct sInfo* info);

_Bool sFunCallNode_terminated();

char* sFunCallNode_kind();

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item);
static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self);
static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self);
static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key);
static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);

int sCastNode_sline(struct sCastNode* self, struct sInfo* info);

char* sCastNode_sname(struct sCastNode* self, struct sInfo* info);

_Bool sCastNode_terminated();

char* sCastNode_kind();

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);

int sParenNode_sline(struct sParenNode* self, struct sInfo* info);

char* sParenNode_sname(struct sParenNode* self, struct sInfo* info);

_Bool sParenNode_terminated();

char* sParenNode_kind();

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);

struct sNode* parse_function_call(char* fun_name, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);

_Bool sLogicalDenial_terminated();

char* sLogicalDenial_kind();

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);

int sLogicalDenial_sline(struct sLogicalDenial* self, struct sInfo* info);

char* sLogicalDenial_sname(struct sLogicalDenial* self, struct sInfo* info);

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sMinusNode2_terminated();

char* sMinusNode2_kind();

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);

int sMinusNode2_sline(struct sMinusNode2* self, struct sInfo* info);

char* sMinusNode2_sname(struct sMinusNode2* self, struct sInfo* info);

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sPlusPlusNode2_terminated();

char* sPlusPlusNode2_kind();

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);

int sPlusPlusNode2_sline(struct sPlusPlusNode2* self, struct sInfo* info);

char* sPlusPlusNode2_sname(struct sPlusPlusNode2* self, struct sInfo* info);

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sMinusMinusNode2_terminated();

char* sMinusMinusNode2_kind();

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info);

int sMinusMinusNode2_sline(struct sMinusMinusNode2* self, struct sInfo* info);

char* sMinusMinusNode2_sname(struct sMinusMinusNode2* self, struct sInfo* info);

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info);

_Bool sComplement_terminated();

char* sComplement_kind();

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);

int sComplement_sline(struct sComplement* self, struct sInfo* info);

char* sComplement_sname(struct sComplement* self, struct sInfo* info);

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info);

static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool sNormalBlock_terminated();

char* sNormalBlock_kind();

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info);

int sNormalBlock_sline(struct sNormalBlock* self, struct sInfo* info);

char* sNormalBlock_sname(struct sNormalBlock* self, struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

static void sNormalBlock_finalize(struct sNormalBlock* self);
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
void backtrace_parse_type(struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

static void sLogicalDenial_finalize(struct sLogicalDenial* self);
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static void sMinusNode2_finalize(struct sMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static void sComplement_finalize(struct sComplement* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
static void sParentReturnNode_finalize(struct sParentReturnNode* self);
static struct sParentReturnNode* sParentReturnNode_clone(struct sParentReturnNode* self);
static void sParentBreakNode_finalize(struct sParentBreakNode* self);
static struct sParentBreakNode* sParentBreakNode_clone(struct sParentBreakNode* self);
static void sParentContinueNode_finalize(struct sParentContinueNode* self);
static struct sParentContinueNode* sParentContinueNode_clone(struct sParentContinueNode* self);
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
static void sReverseNode_finalize(struct sReverseNode* self);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
static void sFuncNode_finalize(struct sFuncNode* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static void sLineNode_finalize(struct sLineNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static void sSNameNode_finalize(struct sSNameNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sCastNode_finalize(struct sCastNode* self);
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
static void sParenNode_finalize(struct sParenNode* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_v5(struct sInfo* info);

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);

struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info);

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self);
static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self);
static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self);
static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self);
int sGlobalVariable_sline(struct sGlobalVariable* self, struct sInfo* info);

char* sGlobalVariable_sname(struct sGlobalVariable* self, struct sInfo* info);

_Bool sGlobalVariable_terminated();

char* sGlobalVariable_kind();

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info);

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self);
static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self);
static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self);
struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info);

int sExternalGlobalVariable_sline(struct sExternalGlobalVariable* self, struct sInfo* info);

char* sExternalGlobalVariable_sname(struct sExternalGlobalVariable* self, struct sInfo* info);

_Bool sExternalGlobalVariable_terminated();

char* sExternalGlobalVariable_kind();

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sNode* parse_global_variable(struct sInfo* info);

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self);
static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self);
static void sGlobalVariable_finalize(struct sGlobalVariable* self);
static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1985, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "smart_pointer$1long"))));
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2208, "smart_pointer$1char")))),self,sizeof(char)*len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2213, "smart_pointer$1short")))),self,sizeof(short short)*len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2218, "smart_pointer$1int")))),self,sizeof(int)*len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2223, "smart_pointer$1long")))),self,sizeof(long)*len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2228, "smart_pointer$1float")))),self,sizeof(float)*len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2233, "smart_pointer$1double")))),self,sizeof(double)*len)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
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










void come_init_v5(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void come_final_v5(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info){
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
void* right_value102;
char* __dec_obj41;
void* right_value103;
struct sType* type2_65;
void* right_value104;
struct sType* type3_66;
void* right_value105;
struct sType* __dec_obj42;
_Bool _if_conditional147;
void* right_value106;
char* __dec_obj43;
void* right_value107;
char* __dec_obj44;
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
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&type2_65, 0, sizeof(struct sType*));
right_value104 = (void*)0;
memset(&type3_66, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
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
    if(_if_conditional100=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional100) {
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
            if(_if_conditional116=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(fun_name2_39)))),generics_fun_45,obj_type_41,info),            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional116) {
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
            if(_if_conditional136=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional136) {
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
                if(_if_conditional138=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional138) {
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
        if(_if_conditional140=operator_fun_38==((void*)0),        _if_conditional140) {
            operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_39);
        }
    }
    result_59=(_Bool)0;
    if(operator_fun_38) {
        come_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 85, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value99=xsprintf("\%s is assigned to",((char*)(right_value98=string_to_string(fun_name2_39)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0), "05function.c", 87, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional146=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0), "05function.c", 88, 1))->mHeap&&left_value->type->mHeap,        _if_conditional146) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0), "05function.c", 89, 2)),left_value->type,left_value,info);
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
        __dec_obj41=come_value_60->c_value;
        come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value102=xsprintf("%s(%s)",fun_name2_39,left_value2_61))));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type2_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(operator_fun_38->mResultType))));
        come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type3_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=solve_generics(type2_65,generics_type_35,info))));
        come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj42=come_value_60->type;
        come_value_60->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(type3_66))));
        come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_60->var=((void*)0);
        if(type3_66->mHeap) {
            __dec_obj43=come_value_60->c_value;
            come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value106=append_object_to_right_values(come_value_60->c_value,(struct sType*)come_increment_ref_count(type3_66),info))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj44=come_value_60->c_value;
        come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value107=append_stackframe(come_value_60->c_value,come_value_60->type,info))));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value_60->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_60));
        result_59=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value2_61 = come_decrement_ref_count2(left_value2_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type3_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_11->mGuardValue=self->mGuardValue;
        }
        if(_if_conditional95=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional95) {
            __dec_obj34=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value83=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
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
_Bool _if_conditional99;
int __result52__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional99=self==((void*)0),        _if_conditional99) {
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
            hash_43=string_get_hash_key(((char*)key))%self->size;
            it_44=hash_43;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional101=self->item_existance[it_44],                _if_conditional101) {
                    if(_if_conditional102=string_equals(self->keys[it_44],key),                    _if_conditional102) {
                        __result54__ = __result_obj__ = self->items[it_44];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result54__;
                    }
                    it_44++;
                    if(_if_conditional113=it_44>=self->size,                    _if_conditional113) {
                        it_44=0;
                    }
                    else {
                        if(_if_conditional114=it_44==hash_43,                        _if_conditional114) {
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
                            if(_if_conditional103=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional103) {
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional104) {
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional105=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional105) {
                                come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional106=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional106) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional107=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional107) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional108=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional108) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional109=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional109) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional110=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional110) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional111=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional111) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional112=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional112) {
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
                memset(&default_value_46,0,sizeof(struct sFun*));
                hash_47=string_get_hash_key(((char*)key))%self->size;
                it_48=hash_47;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional117=self->item_existance[it_48],                    _if_conditional117) {
                        if(_if_conditional118=string_equals(self->keys[it_48],key),                        _if_conditional118) {
                            __result59__ = __result_obj__ = self->items[it_48];
                            come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result59__;
                        }
                        it_48++;
                        if(_if_conditional134=it_48>=self->size,                        _if_conditional134) {
                            it_48=0;
                        }
                        else {
                            if(_if_conditional135=it_48==hash_47,                            _if_conditional135) {
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
                                if(_if_conditional119=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional119) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional120=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional120) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional121=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional121) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional122=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional122) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional123=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional123) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional124=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional124) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional125=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional125) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional128=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional128) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional129=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional129) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional130=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional130) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional131=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional131) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional132=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional132) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional133=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional133) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional126;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional126=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional126) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional127=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional127) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional137=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional137) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional142;
_Bool _if_conditional143;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional142=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional142) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional143=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional143) {
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
            if(_if_conditional144=position<0,            _if_conditional144) {
                position+=self->len;
            }
            it_62=self->head;
            i_63=0;
            while(_while_condtional9=it_62!=((void*)0),            _while_condtional9) {
                if(_if_conditional145=position==i_63,                _if_conditional145) {
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
void* right_value108;
struct list_item$1CVALUEph* litem_67;
struct CVALUE* __dec_obj45;
_Bool _if_conditional150;
void* right_value109;
struct list_item$1CVALUEph* litem_68;
struct CVALUE* __dec_obj46;
void* right_value110;
struct list_item$1CVALUEph* litem_69;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1CVALUEph*));
right_value109 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1CVALUEph*));
right_value110 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional148=self->len==0,            _if_conditional148) {
                litem_67=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value108=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_67->prev=((void*)0);
                litem_67->next=((void*)0);
                __dec_obj45=litem_67->item;
                litem_67->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_67;
                self->head=litem_67;
            }
            else {
                if(_if_conditional150=self->len==1,                _if_conditional150) {
                    litem_68=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value109=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_68->prev=self->head;
                    litem_68->next=((void*)0);
                    __dec_obj46=litem_68->item;
                    litem_68->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_68;
                    self->head->next=litem_68;
                }
                else {
                    litem_69=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value110=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_69->prev=self->tail;
                    litem_69->next=((void*)0);
                    __dec_obj47=litem_69->item;
                    litem_69->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_69;
                    self->tail=litem_69;
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

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj48;
void* right_value111;
char* __dec_obj49;
void* right_value112;
char* __dec_obj50;
struct sReturnNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
right_value112 = (void*)0;
    __dec_obj48=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj49=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value111=string_clone(value_source))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj50=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value112=__builtin_string(info->sname))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result67__ = __result_obj__ = self;
    come_call_finalizer2(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result67__;
    come_call_finalizer2(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = self->sline;
    return __result68__;
}

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value113;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
    __result69__ = __result_obj__ = ((char*)(right_value113=__builtin_string(self->sname)));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}

char* sReturnNode_kind(){
void* __result_obj__;
void* right_value114;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(right_value114=__builtin_string("sReturnNode")));
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sReturnNode_terminated(){
void* __result_obj__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = (_Bool)0;
    return __result71__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional154;
struct sFun* come_fun_70;
void* right_value115;
struct sType* result_type_71;
void* right_value116;
struct sType* result_type2_72;
struct sType* result_type3_73;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool __result72__;
void* right_value117;
struct CVALUE* come_value_74;
_Bool _if_conditional157;
int right_value_id_75;
_Bool _if_conditional158;
void* right_value118;
struct sType* come_value_type_76;
void* right_value119;
struct sType* __dec_obj51;
static int num_result_77=0;
void* right_value120;
char* var_name_78;
int num_result_stack_79;
_Bool _if_conditional159;
void* right_value121;
void* right_value122;
_Bool _if_conditional160;
void* right_value123;
struct sFun* come_fun_80;
_Bool _if_conditional161;
void* right_value124;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_70, 0, sizeof(struct sFun*));
right_value115 = (void*)0;
memset(&result_type_71, 0, sizeof(struct sType*));
right_value116 = (void*)0;
memset(&result_type2_72, 0, sizeof(struct sType*));
memset(&result_type3_73, 0, sizeof(struct sType*));
right_value117 = (void*)0;
memset(&come_value_74, 0, sizeof(struct CVALUE*));
memset(&right_value_id_75, 0, sizeof(int));
right_value118 = (void*)0;
memset(&come_value_type_76, 0, sizeof(struct sType*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&var_name_78, 0, sizeof(char*));
memset(&num_result_stack_79, 0, sizeof(int));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&come_fun_80, 0, sizeof(struct sFun*));
right_value124 = (void*)0;
    if(self->value) {
        come_fun_70=info->come_fun;
        result_type_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(come_fun_70->mResultType))));
        come_call_finalizer2(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type2_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(result_type_71,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type3_73=result_type2_72->mNoSolvedGenericsType->v1;
        if(result_type2_72->mNoSolvedGenericsType->v1) {
            result_type3_73=result_type2_72->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_73=result_type2_72;
        }
        if(_if_conditional156=!node_compile(self->value,info),        _if_conditional156) {
            __result72__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result72__;
        }
        come_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(_if_conditional157=come_value_74->type->mHeap&&come_value_74->var==((void*)0),        _if_conditional157) {
            right_value_id_75=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_74->c_value));
            if(_if_conditional158=right_value_id_75!=-1,            _if_conditional158) {
                remove_object_from_right_values(right_value_id_75,info);
            }
        }
        come_value_type_76=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=solve_generics(come_value_74->type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj51=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(come_value_74->type))));
        come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        var_name_78=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("__result%d__",++num_result_77))));
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        num_result_stack_79=num_result_77;
        if(_if_conditional159=result_type2_72->mPointerNum>0,        _if_conditional159) {
            check_assign_type("result type",result_type2_72,come_value_74->type,come_value_74,(_Bool)0,(_Bool)1,info);
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value121=make_define_var(result_type2_72,var_name_78,(_Bool)0,info))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_78,come_value_74->c_value);
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value122=make_define_var(result_type2_72,var_name_78,(_Bool)0,info))));
            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s = %s;\n",var_name_78,come_value_74->c_value);
        }
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_70->mBlock,info,come_value_74->var,(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        caller_end(info);
        if(_if_conditional160=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional160) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value123=xsprintf("come_heap_final();\n"))));
            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_code(info,"return __result%d__;\n",num_result_stack_79);
        come_call_finalizer2(sType_finalize,result_type_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,come_value_type_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_78 = come_decrement_ref_count2(var_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_80=info->come_fun;
        caller_end(info);
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_80->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(_if_conditional161=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional161) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value124=xsprintf("come_heap_final();\n"))));
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    __result73__ = (_Bool)1;
    return __result73__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value125;
char* __dec_obj52;
struct sLineNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result74__ = __result_obj__ = self;
    come_call_finalizer2(sLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result74__;
    come_call_finalizer2(sLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sLineNode_sline(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    __result75__ = self->sline;
    return __result75__;
}

char* sLineNode_sname(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value126;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    __result76__ = __result_obj__ = ((char*)(right_value126=__builtin_string(self->sname)));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result76__;
}

_Bool sLineNode_terminated(){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = (_Bool)0;
    return __result77__;
}

char* sLineNode_kind(){
void* __result_obj__;
void* right_value127;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
    __result78__ = __result_obj__ = ((char*)(right_value127=__builtin_string("sLineNode")));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value128;
struct CVALUE* come_value_81;
void* right_value129;
char* __dec_obj53;
void* right_value130;
void* right_value131;
struct sType* __dec_obj54;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&come_value_81, 0, sizeof(struct CVALUE*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
    come_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 281, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=come_value_81->c_value;
    come_value_81->c_value=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("%d",info->sline))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=come_value_81->type;
    come_value_81->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value130=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 284, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_81->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_81));
    add_come_last_code(info,"%s;\n",come_value_81->c_value);
    __result79__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result79__;
    come_call_finalizer2(CVALUE_finalize,come_value_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value132;
char* __dec_obj55;
struct sSNameNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
    self->sline=info->sline;
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result80__ = __result_obj__ = self;
    come_call_finalizer2(sSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result80__;
    come_call_finalizer2(sSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sSNameNode_sline(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = self->sline;
    return __result81__;
}

char* sSNameNode_sname(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value133;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
    __result82__ = __result_obj__ = ((char*)(right_value133=__builtin_string(self->sname)));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sSNameNode_terminated(){
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = (_Bool)0;
    return __result83__;
}

char* sSNameNode_kind(){
void* __result_obj__;
void* right_value134;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
    __result84__ = __result_obj__ = ((char*)(right_value134=__builtin_string("sSNameNode")));
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value135;
struct CVALUE* come_value_82;
void* right_value136;
char* __dec_obj56;
void* right_value137;
void* right_value138;
struct sType* __dec_obj57;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&come_value_82, 0, sizeof(struct CVALUE*));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
    come_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value135=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 332, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=come_value_82->c_value;
    come_value_82->c_value=(char*)come_increment_ref_count(((char*)(right_value136=xsprintf("\"%s\"",info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj57=come_value_82->type;
    come_value_82->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value137=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 335, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_82->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_82));
    add_come_last_code(info,"%s;\n",come_value_82->c_value);
    __result85__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result85__;
    come_call_finalizer2(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value139;
char* __dec_obj58;
struct sFuncNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result86__ = __result_obj__ = self;
    come_call_finalizer2(sFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result86__;
    come_call_finalizer2(sFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sFuncNode_sline(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    __result87__ = self->sline;
    return __result87__;
}

char* sFuncNode_sname(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value140;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
    __result88__ = __result_obj__ = ((char*)(right_value140=__builtin_string(self->sname)));
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result88__;
}

_Bool sFuncNode_terminated(){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = (_Bool)0;
    return __result89__;
}

char* sFuncNode_kind(){
void* __result_obj__;
void* right_value141;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
    __result90__ = __result_obj__ = ((char*)(right_value141=__builtin_string("sFuncNode")));
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value142;
struct CVALUE* come_value_83;
void* right_value143;
char* __dec_obj59;
void* right_value144;
void* right_value145;
struct sType* __dec_obj60;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
memset(&come_value_83, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
    come_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 383, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=come_value_83->c_value;
    come_value_83->c_value=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("\"%s\"",info->come_fun->mName))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj60=come_value_83->type;
    come_value_83->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 386, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_83->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_83));
    add_come_last_code(info,"%s;\n",come_value_83->c_value);
    __result91__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result91__;
    come_call_finalizer2(CVALUE_finalize,come_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value146;
char* __dec_obj61;
struct sCallerFuncNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
    self->sline=info->sline;
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result92__ = __result_obj__ = self;
    come_call_finalizer2(sCallerFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result92__;
    come_call_finalizer2(sCallerFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerFuncNode_sline(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = self->sline;
    return __result93__;
}

char* sCallerFuncNode_sname(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value147;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    __result94__ = __result_obj__ = ((char*)(right_value147=__builtin_string(self->sname)));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sCallerFuncNode_terminated(){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = (_Bool)0;
    return __result95__;
}

char* sCallerFuncNode_kind(){
void* __result_obj__;
void* right_value148;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
    __result96__ = __result_obj__ = ((char*)(right_value148=__builtin_string("sCallerFuncNode")));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value149;
struct CVALUE* come_value_84;
_Bool _if_conditional174;
void* right_value150;
char* __dec_obj62;
void* right_value151;
char* __dec_obj63;
void* right_value152;
void* right_value153;
struct sType* __dec_obj64;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
memset(&come_value_84, 0, sizeof(struct CVALUE*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
    come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 435, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(info->caller_fun) {
        __dec_obj62=come_value_84->c_value;
        come_value_84->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("\"%s\"",info->caller_fun->mName))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj63=come_value_84->c_value;
        come_value_84->c_value=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("\"\""))));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj64=come_value_84->type;
    come_value_84->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value152=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 443, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_84->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
    add_come_last_code(info,"%s;\n",come_value_84->c_value);
    __result97__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result97__;
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value154;
char* __dec_obj65;
struct sCallerLineNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
    self->sline=info->sline;
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result98__ = __result_obj__ = self;
    come_call_finalizer2(sCallerLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result98__;
    come_call_finalizer2(sCallerLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerLineNode_sline(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
int __result99__;
memset(&__result_obj__, 0, sizeof(void*));
    __result99__ = self->sline;
    return __result99__;
}

char* sCallerLineNode_sname(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value155;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result100__ = __result_obj__ = ((char*)(right_value155=__builtin_string(self->sname)));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result100__;
}

_Bool sCallerLineNode_terminated(){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = (_Bool)0;
    return __result101__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value156;
struct CVALUE* come_value_85;
void* right_value157;
char* __dec_obj66;
void* right_value158;
void* right_value159;
struct sType* __dec_obj67;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&come_value_85, 0, sizeof(struct CVALUE*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
    come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value156=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 487, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj66=come_value_85->c_value;
    come_value_85->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%d",info->caller_line))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj67=come_value_85->type;
    come_value_85->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value158=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 490, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_85->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_85));
    add_come_last_code(info,"%s;\n",come_value_85->c_value);
    __result102__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result102__;
    come_call_finalizer2(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(){
void* __result_obj__;
void* right_value160;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    __result103__ = __result_obj__ = ((char*)(right_value160=__builtin_string("sCallerLineNode")));
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
char* __dec_obj68;
struct sCallerSNameNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    self->sline=info->sline;
    __dec_obj68=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string(info->sname))));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result104__ = __result_obj__ = self;
    come_call_finalizer2(sCallerSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result104__;
    come_call_finalizer2(sCallerSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerSNameNode_sline(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
int __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = self->sline;
    return __result105__;
}

char* sCallerSNameNode_sname(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    __result106__ = __result_obj__ = ((char*)(right_value162=__builtin_string(self->sname)));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sCallerSNameNode_terminated(){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    __result107__ = (_Bool)0;
    return __result107__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value163;
struct CVALUE* come_value_86;
void* right_value164;
char* __dec_obj69;
void* right_value165;
void* right_value166;
struct sType* __dec_obj70;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
memset(&come_value_86, 0, sizeof(struct CVALUE*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
    come_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 538, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj69=come_value_86->c_value;
    come_value_86->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("\"%s\"",info->caller_sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj70=come_value_86->type;
    come_value_86->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 541, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_86->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_86));
    add_come_last_code(info,"%s;\n",come_value_86->c_value);
    __result108__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result108__;
    come_call_finalizer2(CVALUE_finalize,come_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(){
void* __result_obj__;
void* right_value167;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    __result109__ = __result_obj__ = ((char*)(right_value167=__builtin_string("sCallerSNameNode")));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
}

struct sParentReturnNode* sParentReturnNode_initialize(struct sParentReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj71;
void* right_value168;
char* __dec_obj72;
void* right_value169;
char* __dec_obj73;
struct sParentReturnNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    __dec_obj71=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj72=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value168=string_clone(value_source))));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj73=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value169=__builtin_string(info->sname))));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result110__ = __result_obj__ = self;
    come_call_finalizer2(sParentReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result110__;
    come_call_finalizer2(sParentReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sParentReturnNode_sline(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    __result111__ = self->sline;
    return __result111__;
}

char* sParentReturnNode_sname(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value170;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
    __result112__ = __result_obj__ = ((char*)(right_value170=__builtin_string(self->sname)));
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result112__;
}

_Bool sParentReturnNode_terminated(){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    __result113__ = (_Bool)0;
    return __result113__;
}

char* sParentReturnNode_kind(){
void* __result_obj__;
void* right_value171;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    __result114__ = __result_obj__ = ((char*)(right_value171=__builtin_string("sParentReturnNode")));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

_Bool sParentReturnNode_compile(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional184;
_Bool __result115__;
struct sFun* come_fun_87;
void* right_value172;
struct sType* result_type_88;
void* right_value173;
struct sType* result_type2_89;
struct sType* result_type3_90;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool __result116__;
void* right_value174;
struct CVALUE* come_value_91;
_Bool _if_conditional188;
int right_value_id_92;
_Bool _if_conditional189;
void* right_value175;
char* __dec_obj74;
void* right_value176;
char* var_name2_93;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
_Bool _if_conditional190;
struct sFun* come_fun_94;
void* right_value181;
char* var_name2_95;
void* right_value182;
void* right_value183;
void* right_value184;
_Bool _if_conditional191;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_87, 0, sizeof(struct sFun*));
right_value172 = (void*)0;
memset(&result_type_88, 0, sizeof(struct sType*));
right_value173 = (void*)0;
memset(&result_type2_89, 0, sizeof(struct sType*));
memset(&result_type3_90, 0, sizeof(struct sType*));
right_value174 = (void*)0;
memset(&come_value_91, 0, sizeof(struct CVALUE*));
memset(&right_value_id_92, 0, sizeof(int));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&var_name2_93, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&come_fun_94, 0, sizeof(struct sFun*));
right_value181 = (void*)0;
memset(&var_name2_95, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
    if(_if_conditional184=info->current_stack_frame_struct==((void*)0),    _if_conditional184) {
        err_msg(info,"not in method block");
        __result115__ = (_Bool)0;
        return __result115__;
    }
    come_fun_87=info->come_fun;
    result_type_88=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_clone(come_fun_87->mResultType))));
    come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_89=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=solve_generics(result_type_88,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_90=result_type2_89->mNoSolvedGenericsType->v1;
    if(result_type2_89->mNoSolvedGenericsType->v1) {
        result_type3_90=result_type2_89->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_90=result_type2_89;
    }
    if(self->value) {
        if(_if_conditional187=!node_compile(self->value,info),        _if_conditional187) {
            __result116__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result116__;
        }
        come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(_if_conditional188=come_value_91->type->mHeap&&come_value_91->var==((void*)0),        _if_conditional188) {
            right_value_id_92=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_91->c_value));
            if(_if_conditional189=right_value_id_92!=-1,            _if_conditional189) {
                remove_object_from_right_values(right_value_id_92,info);
            }
        }
        __dec_obj74=come_value_91->c_value;
        come_value_91->c_value=(char*)come_increment_ref_count(((char*)(right_value175=increment_ref_count_object(come_value_91->type,come_value_91->c_value,info))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        free_objects_on_return(come_fun_87->mBlock,info,come_value_91->var,(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        var_name2_93=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,((char*)(right_value180=xsprintf("            \%s->__method_block_result_kind__ = 3;\n            \%s->__method_block_return_value__ = \%s;\n",((char*)(right_value177=string_to_string(var_name2_93))),((char*)(right_value178=string_to_string(var_name2_93))),((char*)(right_value179=string_to_string(come_value_91->c_value)))))));
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional190=string_operator_equals(result_type3_90->mClass->mName,"void")&&result_type3_90->mPointerNum==0,        _if_conditional190) {
            add_come_code(info,"return;");
        }
        else {
            add_come_code(info,"return (void*)0;");
        }
        come_call_finalizer2(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name2_93 = come_decrement_ref_count2(var_name2_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_94=info->come_fun;
        free_objects_on_return(come_fun_94->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        var_name2_95=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,((char*)(right_value184=xsprintf("            \%s->__method_block_result_kind__ = 4;\n            \%s->__method_block_return_value__ = 0;\n",((char*)(right_value182=string_to_string(var_name2_95))),((char*)(right_value183=string_to_string(var_name2_95)))))));
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional191=string_operator_equals(result_type3_90->mClass->mName,"void")&&result_type3_90->mPointerNum==0,        _if_conditional191) {
            add_come_code(info,"return;");
        }
        else {
            add_come_code(info,"return (void*)0;");
        }
        var_name2_95 = come_decrement_ref_count2(var_name2_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->last_statment_is_return=(_Bool)1;
    __result117__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result117__;
    come_call_finalizer2(sType_finalize,result_type_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sParentBreakNode* sParentBreakNode_initialize(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value185;
char* __dec_obj75;
struct sParentBreakNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
    self->sline=info->sline;
    __dec_obj75=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(info->sname))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result118__ = __result_obj__ = self;
    come_call_finalizer2(sParentBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result118__;
    come_call_finalizer2(sParentBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParentBreakNode_sline(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __result119__ = self->sline;
    return __result119__;
}

char* sParentBreakNode_sname(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value186;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
    __result120__ = __result_obj__ = ((char*)(right_value186=__builtin_string(self->sname)));
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sParentBreakNode_terminated(){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = (_Bool)0;
    return __result121__;
}

char* sParentBreakNode_kind(){
void* __result_obj__;
void* right_value187;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
    __result122__ = __result_obj__ = ((char*)(right_value187=__builtin_string("sParentBreakNode")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result122__;
}

_Bool sParentBreakNode_compile(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional193;
_Bool __result123__;
struct sFun* come_fun_96;
void* right_value188;
struct sType* result_type_97;
void* right_value189;
struct sType* result_type2_98;
struct sType* result_type3_99;
_Bool _if_conditional194;
void* right_value190;
char* var_name2_100;
void* right_value191;
void* right_value192;
void* right_value193;
_Bool _if_conditional195;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_96, 0, sizeof(struct sFun*));
right_value188 = (void*)0;
memset(&result_type_97, 0, sizeof(struct sType*));
right_value189 = (void*)0;
memset(&result_type2_98, 0, sizeof(struct sType*));
memset(&result_type3_99, 0, sizeof(struct sType*));
right_value190 = (void*)0;
memset(&var_name2_100, 0, sizeof(char*));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
    if(_if_conditional193=info->current_stack_frame_struct==((void*)0),    _if_conditional193) {
        err_msg(info,"not in method block");
        __result123__ = (_Bool)0;
        return __result123__;
    }
    come_fun_96=info->come_fun;
    result_type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(come_fun_96->mResultType))));
    come_call_finalizer2(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=solve_generics(result_type_97,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_99=result_type2_98->mNoSolvedGenericsType->v1;
    if(result_type2_98->mNoSolvedGenericsType->v1) {
        result_type3_99=result_type2_98->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_99=result_type2_98;
    }
    free_objects_on_return(come_fun_96->mBlock,info,((void*)0),(_Bool)0);
    free_right_value_objects(info,(_Bool)0);
    var_name2_100=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,((char*)(right_value193=xsprintf("        \%s->__method_block_result_kind__ = 1;\n        \%s->__method_block_return_value__ = 0;\n",((char*)(right_value191=string_to_string(var_name2_100))),((char*)(right_value192=string_to_string(var_name2_100)))))));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional195=string_operator_equals(result_type3_99->mClass->mName,"void")&&result_type3_99->mPointerNum==0,    _if_conditional195) {
        add_come_code(info,"return;");
    }
    else {
        add_come_code(info,"return (void*)0;");
    }
    info->last_statment_is_return=(_Bool)1;
    __result124__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_100 = come_decrement_ref_count2(var_name2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result124__;
    come_call_finalizer2(sType_finalize,result_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_100 = come_decrement_ref_count2(var_name2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sParentContinueNode* sParentContinueNode_initialize(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value194;
char* __dec_obj76;
struct sParentContinueNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    self->sline=info->sline;
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result125__ = __result_obj__ = self;
    come_call_finalizer2(sParentContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result125__;
    come_call_finalizer2(sParentContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParentContinueNode_sline(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = self->sline;
    return __result126__;
}

char* sParentContinueNode_sname(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value195;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
    __result127__ = __result_obj__ = ((char*)(right_value195=__builtin_string(self->sname)));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
}

_Bool sParentContinueNode_terminated(){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = (_Bool)0;
    return __result128__;
}

char* sParentContinueNode_kind(){
void* __result_obj__;
void* right_value196;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
    __result129__ = __result_obj__ = ((char*)(right_value196=__builtin_string("sParentContinueNode")));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

_Bool sParentContinueNode_compile(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional197;
_Bool __result130__;
struct sFun* come_fun_101;
void* right_value197;
struct sType* result_type_102;
void* right_value198;
struct sType* result_type2_103;
struct sType* result_type3_104;
_Bool _if_conditional198;
void* right_value199;
char* var_name2_105;
void* right_value200;
void* right_value201;
void* right_value202;
_Bool _if_conditional199;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_101, 0, sizeof(struct sFun*));
right_value197 = (void*)0;
memset(&result_type_102, 0, sizeof(struct sType*));
right_value198 = (void*)0;
memset(&result_type2_103, 0, sizeof(struct sType*));
memset(&result_type3_104, 0, sizeof(struct sType*));
right_value199 = (void*)0;
memset(&var_name2_105, 0, sizeof(char*));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
    if(_if_conditional197=info->current_stack_frame_struct==((void*)0),    _if_conditional197) {
        err_msg(info,"not in method block");
        __result130__ = (_Bool)0;
        return __result130__;
    }
    come_fun_101=info->come_fun;
    result_type_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_clone(come_fun_101->mResultType))));
    come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=solve_generics(result_type_102,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_104=result_type2_103->mNoSolvedGenericsType->v1;
    if(result_type2_103->mNoSolvedGenericsType->v1) {
        result_type3_104=result_type2_103->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_104=result_type2_103;
    }
    free_objects_on_return(come_fun_101->mBlock,info,((void*)0),(_Bool)0);
    free_right_value_objects(info,(_Bool)0);
    var_name2_105=(char*)come_increment_ref_count(((char*)(right_value199=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,((char*)(right_value202=xsprintf("        \%s->__method_block_result_kind__ = 2;\n        \%s->__method_block_return_value__ = 0;\n",((char*)(right_value200=string_to_string(var_name2_105))),((char*)(right_value201=string_to_string(var_name2_105)))))));
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional199=string_operator_equals(result_type3_104->mClass->mName,"void")&&result_type3_104->mPointerNum==0,    _if_conditional199) {
        add_come_code(info,"return;");
    }
    else {
        add_come_code(info,"return (void*)0;");
    }
    info->last_statment_is_return=(_Bool)1;
    __result131__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_105 = come_decrement_ref_count2(var_name2_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result131__;
    come_call_finalizer2(sType_finalize,result_type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_105 = come_decrement_ref_count2(var_name2_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj77;
void* right_value203;
char* __dec_obj78;
struct sDerefferenceNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
    __dec_obj77=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(info->sname))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __result132__ = __result_obj__ = self;
    come_call_finalizer2(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result132__;
    come_call_finalizer2(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = self->sline;
    return __result133__;
}

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value204;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    __result134__ = __result_obj__ = ((char*)(right_value204=__builtin_string(self->sname)));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sDerefferenceNode_terminated(){
void* __result_obj__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    __result135__ = (_Bool)0;
    return __result135__;
}

char* sDerefferenceNode_kind(){
void* __result_obj__;
void* right_value205;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    __result136__ = __result_obj__ = ((char*)(right_value205=__builtin_string("sDerefferenceNode")));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result136__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_106;
_Bool _if_conditional202;
_Bool __result137__;
void* right_value206;
struct CVALUE* left_value_107;
_Bool _if_conditional203;
void* right_value207;
_Bool _if_conditional204;
void* right_value208;
void* right_value209;
char* __dec_obj79;
char* p_108;
char* p2_109;
_Bool _while_condtional10;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value210;
void* right_value211;
struct buffer* buf_110;
void* right_value212;
void* right_value213;
struct buffer* buf2_111;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
char* __dec_obj80;
struct sType* type_112;
char* fun_name_113;
_Bool calling_fun_114;
_Bool _if_conditional207;
_Bool _if_conditional208;
void* right_value218;
struct CVALUE* come_value_115;
void* right_value219;
char* __dec_obj81;
void* right_value220;
struct sType* __dec_obj82;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_106, 0, sizeof(struct sNode*));
right_value206 = (void*)0;
memset(&left_value_107, 0, sizeof(struct CVALUE*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&p_108, 0, sizeof(char*));
memset(&p2_109, 0, sizeof(char*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&buf_110, 0, sizeof(struct buffer*));
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&buf2_111, 0, sizeof(struct buffer*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&type_112, 0, sizeof(struct sType*));
memset(&fun_name_113, 0, sizeof(char*));
memset(&calling_fun_114, 0, sizeof(_Bool));
right_value218 = (void*)0;
memset(&come_value_115, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
    value_106=self->value;
    if(_if_conditional202=!node_compile(value_106,info),    _if_conditional202) {
        __result137__ = (_Bool)0;
        return __result137__;
    }
    left_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(gComeDebug) {
        if(_if_conditional204=string_operator_not_equals(((char*)(right_value207=value_106->kind(value_106->_protocol_obj))),"sExpEqualNode"),        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional204) {
            __dec_obj79=left_value_107->c_value;
            left_value_107->c_value=(char*)come_increment_ref_count(((char*)(right_value209=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value208=make_type_name_string(left_value_107->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_107->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            p_108=left_value_107->c_value;
            p2_109=((void*)0);
            while(_while_condtional10=*p_108,            _while_condtional10) {
                if(_if_conditional205=*p_108==61,                _if_conditional205) {
                    p2_109=p_108;
                    break;
                }
                else {
                    p_108++;
                }
            }
            if(_if_conditional206=p2_109==((void*)0),            _if_conditional206) {
                err_msg(info,"unexpected error in debugging to dereffrence and to assign");
                exit(2);
            }
            p_108=left_value_107->c_value;
            buf_110=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value211=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value210=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 903, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append(buf_110,p_108,p2_109-p_108);
            buf2_111=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value213=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value212=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 906, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append(buf2_111,p2_109,p_108+strlen(p_108)-p2_109);
            __dec_obj80=left_value_107->c_value;
            left_value_107->c_value=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))%s",((char*)(right_value214=make_type_name_string(left_value_107->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),((char*)(right_value215=buffer_to_string(buf_110))),info->sname,info->sline,gComeDebugStackFrameID++,((char*)(right_value216=buffer_to_string(buf2_111)))))));
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,buf_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf2_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    type_112=(struct sType*)come_increment_ref_count(left_value_107->type);
    fun_name_113="operator_derefference";
    if(self->mQuote) {
        calling_fun_114=(_Bool)0;
    }
    else {
        calling_fun_114=operator_overload_fun_self(type_112,fun_name_113,left_value_107,info);
    }
    if(_if_conditional208=!calling_fun_114,    _if_conditional208) {
        come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 926, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj81=come_value_115->c_value;
        come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("*%s",left_value_107->c_value))));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj82=come_value_115->type;
        come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(left_value_107->type))));
        come_call_finalizer2(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_115->type->mPointerNum--;
        come_value_115->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_115->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
        come_call_finalizer2(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result138__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result138__;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj83;
void* right_value221;
char* __dec_obj84;
struct sRefferenceNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
    __dec_obj83=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(info->sname))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result139__ = __result_obj__ = self;
    come_call_finalizer2(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result139__;
    come_call_finalizer2(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = self->sline;
    return __result140__;
}

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value222;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
    __result141__ = __result_obj__ = ((char*)(right_value222=__builtin_string(self->sname)));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sRefferenceNode_terminated(){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = (_Bool)0;
    return __result142__;
}

char* sRefferenceNode_kind(){
void* __result_obj__;
void* right_value223;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
    __result143__ = __result_obj__ = ((char*)(right_value223=__builtin_string("sRefferenceNode")));
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_116;
_Bool _if_conditional211;
_Bool __result144__;
void* right_value224;
struct CVALUE* left_value_117;
void* right_value225;
struct CVALUE* come_value_118;
void* right_value226;
char* __dec_obj85;
void* right_value227;
struct sType* __dec_obj86;
_Bool __result145__;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_116, 0, sizeof(struct sNode*));
right_value224 = (void*)0;
memset(&left_value_117, 0, sizeof(struct CVALUE*));
right_value225 = (void*)0;
memset(&come_value_118, 0, sizeof(struct CVALUE*));
right_value226 = (void*)0;
right_value227 = (void*)0;
    value_116=self->value;
    if(_if_conditional211=!node_compile(value_116,info),    _if_conditional211) {
        __result144__ = (_Bool)0;
        return __result144__;
    }
    left_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value225=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 989, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj85=come_value_118->c_value;
    come_value_118->c_value=(char*)come_increment_ref_count(((char*)(right_value226=xsprintf("&%s",left_value_117->c_value))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj86=come_value_118->type;
    come_value_118->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_clone(left_value_117->type))));
    come_call_finalizer2(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_118->type->mPointerNum++;
    come_value_118->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_118->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_118));
    __result145__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result145__;
    __result146__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result146__;
    come_call_finalizer2(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj87;
void* right_value228;
char* __dec_obj88;
struct sReverseNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
    __dec_obj87=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string(info->sname))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result147__ = __result_obj__ = self;
    come_call_finalizer2(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result147__;
    come_call_finalizer2(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = self->sline;
    return __result148__;
}

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value229;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value229 = (void*)0;
    __result149__ = __result_obj__ = ((char*)(right_value229=__builtin_string(self->sname)));
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sReverseNode_terminated(){
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    __result150__ = (_Bool)0;
    return __result150__;
}

char* sReverseNode_kind(){
void* __result_obj__;
void* right_value230;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
    __result151__ = __result_obj__ = ((char*)(right_value230=__builtin_string("sReverseNode")));
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_119;
_Bool _if_conditional214;
_Bool __result152__;
void* right_value231;
struct CVALUE* left_value_120;
void* right_value232;
struct CVALUE* come_value_121;
void* right_value233;
char* __dec_obj89;
void* right_value234;
struct sType* __dec_obj90;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_119, 0, sizeof(struct sNode*));
right_value231 = (void*)0;
memset(&left_value_120, 0, sizeof(struct CVALUE*));
right_value232 = (void*)0;
memset(&come_value_121, 0, sizeof(struct CVALUE*));
right_value233 = (void*)0;
right_value234 = (void*)0;
    value_119=self->value;
    if(_if_conditional214=!node_compile(value_119,info),    _if_conditional214) {
        __result152__ = (_Bool)0;
        return __result152__;
    }
    left_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1052, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=come_value_121->c_value;
    come_value_121->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("!%s",left_value_120->c_value))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj90=come_value_121->type;
    come_value_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(left_value_120->type))));
    come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_121->type->mPointerNum--;
    come_value_121->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_121->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_121));
    __result153__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result153__;
    come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__;
struct sNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    stackframe();
    exit(3);
    __result154__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result154__;
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct sInfo* info){
void* __result_obj__;
void* right_value235;
char* __dec_obj91;
void* right_value245;
struct list$1tuple2$2charphsNodephph* __dec_obj97;
void* right_value246;
char* __dec_obj98;
struct sFunCallNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
    __dec_obj91=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(fun_name))));
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj97=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value245=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->guard_break=guard_break;
    self->sline=info->sline;
    __dec_obj98=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(info->sname))));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result161__ = __result_obj__ = self;
    come_call_finalizer2(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result161__;
    come_call_finalizer2(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional215;
struct list$1tuple2$2charphsNodephph* __result155__;
void* right_value236;
void* right_value237;
struct list$1tuple2$2charphsNodephph* result_124;
struct list_item$1tuple2$2charphsNodephph* it_125;
_Bool _while_condtional12;
void* right_value244;
struct list$1tuple2$2charphsNodephph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&result_124, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_125, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value244 = (void*)0;
        if(_if_conditional215=self==((void*)0),        _if_conditional215) {
            __result155__ = __result_obj__ = ((void*)0);
            return __result155__;
        }
        result_124=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value237=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value236=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_125=self->head;
        while(_while_condtional12=it_125!=((void*)0),        _while_condtional12) {
            list$1tuple2$2charphsNodephph_add(result_124,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value244=tuple2$2charphsNodephp_clone(it_125->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_125=it_125->next;
        }
        __result160__ = __result_obj__ = result_124;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_124, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result160__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result156__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result156__;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_122;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsNodephph* prev_it_123;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_122, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_123, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_122=self->head;
                while(_while_condtional11=it_122!=((void*)0),                _while_condtional11) {
                    prev_it_123=it_122;
                    it_122=it_122->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional216=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional216) {
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional217;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional217=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional217) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional218=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional218) {
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional219;
void* right_value238;
struct list_item$1tuple2$2charphsNodephph* litem_126;
struct tuple2$2charphsNodeph* __dec_obj92;
_Bool _if_conditional222;
void* right_value239;
struct list_item$1tuple2$2charphsNodephph* litem_127;
struct tuple2$2charphsNodeph* __dec_obj93;
void* right_value240;
struct list_item$1tuple2$2charphsNodephph* litem_128;
struct tuple2$2charphsNodeph* __dec_obj94;
struct list$1tuple2$2charphsNodephph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value239 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value240 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional219=self->len==0,                _if_conditional219) {
                    litem_126=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value238=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_126->prev=((void*)0);
                    litem_126->next=((void*)0);
                    __dec_obj92=litem_126->item;
                    litem_126->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_126;
                    self->head=litem_126;
                }
                else {
                    if(_if_conditional222=self->len==1,                    _if_conditional222) {
                        litem_127=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value239=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_127->prev=self->head;
                        litem_127->next=((void*)0);
                        __dec_obj93=litem_127->item;
                        litem_127->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_127;
                        self->head->next=litem_127;
                    }
                    else {
                        litem_128=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value240=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_128->prev=self->tail;
                        litem_128->next=((void*)0);
                        __dec_obj94=litem_128->item;
                        litem_128->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_128;
                        self->tail=litem_128;
                    }
                }
                self->len++;
                __result157__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result157__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional220;
_Bool _if_conditional221;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional220=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional220) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional221=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional221) {
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional223;
struct tuple2$2charphsNodeph* __result158__;
void* right_value241;
struct tuple2$2charphsNodeph* result_129;
_Bool _if_conditional224;
void* right_value242;
char* __dec_obj95;
_Bool _if_conditional225;
void* right_value243;
struct sNode* __dec_obj96;
struct tuple2$2charphsNodeph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
memset(&result_129, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value242 = (void*)0;
right_value243 = (void*)0;
                if(_if_conditional223=self==(void*)0,                _if_conditional223) {
                    __result158__ = __result_obj__ = (void*)0;
                    return __result158__;
                }
                result_129=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value241=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional224=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional224) {
                    __dec_obj95=result_129->v1;
                    result_129->v1=(char*)come_increment_ref_count(((char*)(right_value242=string_clone(self->v1))));
                    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional225=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional225) {
                    __dec_obj96=result_129->v2;
                    result_129->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value243=sNode_clone(self->v2))));
                    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value243) { right_value243 = come_decrement_ref_count2(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result159__ = __result_obj__ = result_129;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_129, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result159__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sFunCallNode_sline(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = self->sline;
    return __result162__;
}

char* sFunCallNode_sname(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value247;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
    __result163__ = __result_obj__ = ((char*)(right_value247=__builtin_string(self->sname)));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

_Bool sFunCallNode_terminated(){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = (_Bool)0;
    return __result164__;
}

char* sFunCallNode_kind(){
void* __result_obj__;
void* right_value248;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
    __result165__ = __result_obj__ = ((char*)(right_value248=__builtin_string("sFunCallNode")));
    right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result165__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_130;
struct list$1tuple2$2charphsNodephph* params_131;
struct sVar* var__132;
_Bool _if_conditional229;
_Bool _if_conditional230;
struct sType* lambda_type_133;
void* right_value249;
struct sType* result_type_134;
void* right_value250;
void* right_value251;
struct list$1CVALUEph* come_params_137;
_Bool _if_conditional232;
_Bool __result169__;
int i_138;
struct list$1tuple2$2charphsNodephph* o2_saved_139;
struct tuple2$2charphsNodeph* it_142;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_145;
struct sNode* node_146;
_Bool _if_conditional237;
_Bool __result177__;
void* right_value252;
struct CVALUE* come_value_147;
_Bool _if_conditional238;
void* right_value253;
void* right_value254;
void* right_value255;
_Bool _if_conditional239;
void* right_value256;
void* right_value257;
struct buffer* buf_148;
int j_149;
struct list$1CVALUEph* o2_saved_150;
struct CVALUE* it_153;
_Bool _if_conditional245;
void* right_value258;
struct CVALUE* come_value_156;
void* right_value259;
char* __dec_obj99;
_Bool _if_conditional246;
void* right_value260;
char* __dec_obj100;
void* right_value261;
struct sType* __dec_obj101;
_Bool _if_conditional247;
void* right_value262;
void* right_value263;
struct list$1CVALUEph* come_params_157;
struct list$1tuple2$2charphsNodephph* o2_saved_158;
struct tuple2$2charphsNodeph* it_159;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_160;
struct sNode* node_161;
_Bool _if_conditional248;
_Bool __result187__;
void* right_value264;
struct CVALUE* come_value_162;
void* right_value265;
void* right_value266;
struct buffer* buf_163;
int j_164;
struct list$1CVALUEph* o2_saved_165;
struct CVALUE* it_166;
_Bool _if_conditional249;
void* right_value267;
struct CVALUE* come_value_167;
void* right_value268;
char* __dec_obj102;
_Bool _if_conditional250;
void* right_value269;
void* right_value270;
struct sType* __dec_obj103;
_Bool _if_conditional251;
void* right_value271;
void* right_value272;
struct sType* __dec_obj104;
_Bool _if_conditional252;
void* right_value273;
void* right_value274;
struct sType* __dec_obj105;
_Bool _if_conditional253;
void* right_value275;
void* right_value276;
struct sType* __dec_obj106;
_Bool __result188__;
_Bool _if_conditional254;
void* right_value277;
char* __dec_obj107;
_Bool _if_conditional255;
void* right_value278;
char* __dec_obj108;
_Bool _if_conditional256;
char* p_168;
int version_169;
_Bool _while_condtional14;
_Bool _if_conditional257;
char* p2_170;
_Bool _while_condtional15;
int i_172;
void* right_value279;
char* new_fun_name_173;
_Bool _if_conditional258;
void* right_value280;
char* __dec_obj109;
_Bool _if_conditional259;
void* right_value281;
char* new_fun_name_174;
_Bool _if_conditional260;
void* right_value282;
char* __dec_obj110;
_Bool _if_conditional261;
_Bool __result189__;
int i_175;
void* right_value283;
char* new_fun_name_176;
_Bool _if_conditional262;
void* right_value284;
char* __dec_obj111;
struct sFun* fun_179;
_Bool _if_conditional267;
_Bool __result194__;
void* right_value285;
struct sType* result_type_180;
void* right_value286;
void* right_value287;
struct list$1sTypeph* param_types_181;
struct list$1sTypeph* o2_saved_182;
struct sType* it_185;
void* right_value288;
void* right_value289;
struct sType* it2_188;
void* right_value293;
void* right_value294;
struct sType* __dec_obj115;
void* right_value295;
void* right_value296;
struct list$1CVALUEph* come_params_192;
void* right_value297;
void* right_value303;
struct map$2charphCVALUEph* label_params_198;
int i_199;
struct list$1tuple2$2charphsNodephph* o2_saved_200;
struct tuple2$2charphsNodeph* it_201;
struct tuple2$2charphsNodeph* multiple_assign_var7;
char* label_202;
struct sNode* node_203;
_Bool _if_conditional278;
_Bool __result205__;
void* right_value304;
struct CVALUE* come_value_204;
_Bool _if_conditional279;
_Bool _if_conditional280;
int n_205;
struct list$1charph* o2_saved_206;
char* it_209;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value305;
void* right_value306;
void* right_value307;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value308;
void* right_value309;
void* right_value310;
_Bool _if_conditional289;
_Bool _if_conditional290;
void* right_value317;
_Bool _if_conditional340;
void* right_value318;
char* default_param_259;
char* param_name_260;
struct CVALUE* come_value_264;
_Bool _if_conditional347;
struct buffer* source_265;
char* p_266;
char* head_267;
int sline_268;
void* right_value319;
struct buffer* __dec_obj117;
void* right_value320;
struct sNode* node_269;
_Bool _if_conditional348;
_Bool __result243__;
struct buffer* __dec_obj118;
void* right_value321;
struct CVALUE* come_value_270;
void* right_value322;
void* right_value323;
void* right_value324;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool __result244__;
_Bool _if_conditional351;
char* param_name_271;
struct CVALUE* come_value_272;
_Bool _if_conditional353;
void* right_value325;
void* right_value326;
void* right_value327;
void* right_value331;
_Bool _if_conditional361;
_Bool __result252__;
void* right_value332;
void* right_value333;
struct buffer* buf_276;
int j_277;
struct list$1CVALUEph* o2_saved_278;
struct CVALUE* it_279;
_Bool _if_conditional362;
void* right_value334;
struct CVALUE* come_value_280;
void* right_value335;
char* __dec_obj122;
void* right_value336;
struct sType* __dec_obj123;
_Bool _if_conditional363;
void* right_value337;
char* __dec_obj124;
_Bool _if_conditional364;
_Bool _if_conditional365;
void* right_value338;
char* __dec_obj125;
_Bool _if_conditional366;
void* right_value339;
void* right_value340;
char* __dec_obj126;
_Bool __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_130, 0, sizeof(char*));
memset(&params_131, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&var__132, 0, sizeof(struct sVar*));
memset(&lambda_type_133, 0, sizeof(struct sType*));
right_value249 = (void*)0;
memset(&result_type_134, 0, sizeof(struct sType*));
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&come_params_137, 0, sizeof(struct list$1CVALUEph*));
memset(&i_138, 0, sizeof(int));
memset(&o2_saved_139, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_142, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_145, 0, sizeof(char*));
memset(&node_146, 0, sizeof(struct sNode*));
memset(&label_145, 0, sizeof(char*));
memset(&node_146, 0, sizeof(struct sNode*));
right_value252 = (void*)0;
memset(&come_value_147, 0, sizeof(struct CVALUE*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&buf_148, 0, sizeof(struct buffer*));
memset(&j_149, 0, sizeof(int));
memset(&o2_saved_150, 0, sizeof(struct list$1CVALUEph*));
memset(&it_153, 0, sizeof(struct CVALUE*));
right_value258 = (void*)0;
memset(&come_value_156, 0, sizeof(struct CVALUE*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&come_params_157, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_158, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_159, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_160, 0, sizeof(char*));
memset(&node_161, 0, sizeof(struct sNode*));
memset(&label_160, 0, sizeof(char*));
memset(&node_161, 0, sizeof(struct sNode*));
right_value264 = (void*)0;
memset(&come_value_162, 0, sizeof(struct CVALUE*));
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&buf_163, 0, sizeof(struct buffer*));
memset(&j_164, 0, sizeof(int));
memset(&o2_saved_165, 0, sizeof(struct list$1CVALUEph*));
memset(&it_166, 0, sizeof(struct CVALUE*));
right_value267 = (void*)0;
memset(&come_value_167, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&p_168, 0, sizeof(char*));
memset(&version_169, 0, sizeof(int));
memset(&p2_170, 0, sizeof(char*));
memset(&i_172, 0, sizeof(int));
right_value279 = (void*)0;
memset(&new_fun_name_173, 0, sizeof(char*));
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&new_fun_name_174, 0, sizeof(char*));
right_value282 = (void*)0;
memset(&i_175, 0, sizeof(int));
right_value283 = (void*)0;
memset(&new_fun_name_176, 0, sizeof(char*));
right_value284 = (void*)0;
memset(&fun_179, 0, sizeof(struct sFun*));
right_value285 = (void*)0;
memset(&result_type_180, 0, sizeof(struct sType*));
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&param_types_181, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_182, 0, sizeof(struct list$1sTypeph*));
memset(&it_185, 0, sizeof(struct sType*));
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&it2_188, 0, sizeof(struct sType*));
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&come_params_192, 0, sizeof(struct list$1CVALUEph*));
right_value297 = (void*)0;
right_value303 = (void*)0;
memset(&label_params_198, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_199, 0, sizeof(int));
memset(&o2_saved_200, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_201, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_202, 0, sizeof(char*));
memset(&node_203, 0, sizeof(struct sNode*));
memset(&label_202, 0, sizeof(char*));
memset(&node_203, 0, sizeof(struct sNode*));
right_value304 = (void*)0;
memset(&come_value_204, 0, sizeof(struct CVALUE*));
memset(&n_205, 0, sizeof(int));
memset(&o2_saved_206, 0, sizeof(struct list$1charph*));
memset(&it_209, 0, sizeof(char*));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&default_param_259, 0, sizeof(char*));
memset(&param_name_260, 0, sizeof(char*));
memset(&come_value_264, 0, sizeof(struct CVALUE*));
memset(&source_265, 0, sizeof(struct buffer*));
memset(&p_266, 0, sizeof(char*));
memset(&head_267, 0, sizeof(char*));
memset(&sline_268, 0, sizeof(int));
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&node_269, 0, sizeof(struct sNode*));
right_value321 = (void*)0;
memset(&come_value_270, 0, sizeof(struct CVALUE*));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&param_name_271, 0, sizeof(char*));
memset(&come_value_272, 0, sizeof(struct CVALUE*));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&buf_276, 0, sizeof(struct buffer*));
memset(&j_277, 0, sizeof(int));
memset(&o2_saved_278, 0, sizeof(struct list$1CVALUEph*));
memset(&it_279, 0, sizeof(struct CVALUE*));
right_value334 = (void*)0;
memset(&come_value_280, 0, sizeof(struct CVALUE*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
    fun_name_130=(char*)come_increment_ref_count(self->fun_name);
    params_131=self->params;
    var__132=get_variable_from_table(info->lv_table,fun_name_130);
    if(_if_conditional229=var__132==((void*)0),    _if_conditional229) {
        var__132=get_variable_from_table(info->gv_table,fun_name_130);
    }
    if(var__132) {
        lambda_type_133=var__132->mType;
        result_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_clone(lambda_type_133->mResultType->v1))));
        come_call_finalizer2(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_134->mStatic=(_Bool)0;
        come_params_137=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value251=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value250=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1134, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional232=list$1sTypeph_length(lambda_type_133->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_131)&&!lambda_type_133->mVarArgs,        _if_conditional232) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_130,list$1sTypeph_length(lambda_type_133->mParamTypes),list$1tuple2$2charphsNodephph_length(params_131));
            __result169__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result169__;
        }
        i_138=0;
        for(        o2_saved_139=(params_131),it_142=list$1tuple2$2charphsNodephph_begin((o2_saved_139));        !list$1tuple2$2charphsNodephph_end((o2_saved_139));        it_142=list$1tuple2$2charphsNodephph_next((o2_saved_139))        ){
            multiple_assign_var5=it_142;
            label_145=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_146=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            if(_if_conditional237=!node_compile(node_146,info),            _if_conditional237) {
                __result177__ = (_Bool)0;
                label_145 = come_decrement_ref_count2(label_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_146) { node_146 = come_decrement_ref_count2(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,result_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result177__;
            }
            come_value_147=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional238=lambda_type_133->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_133->mParamTypes,i_138), "05function.c", 1150, 3))==((void*)0),            _if_conditional238) {
            }
            else {
                check_assign_type(((char*)(right_value255=xsprintf("\%s calling param #\%s",((char*)(right_value253=string_to_string(fun_name_130))),((char*)(right_value254=int_to_string(i_138)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_133->mParamTypes,i_138), "05function.c", 1153, 4)),come_value_147->type,come_value_147,(_Bool)0,(_Bool)1,info);
                right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional239=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_133->mParamTypes,i_138), "05function.c", 1154, 5))->mHeap&&come_value_147->type->mHeap,                _if_conditional239) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_133->mParamTypes,i_138), "05function.c", 1155, 6)),come_value_147->type,come_value_147,info);
                }
            }
            list$1CVALUEph_push_back(come_params_137,(struct CVALUE*)come_increment_ref_count(come_value_147));
            dec_stack_ptr(1,info);
            i_138++;
            label_145 = come_decrement_ref_count2(label_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_146) { node_146 = come_decrement_ref_count2(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buf_148=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value257=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value256=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1165, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_148,var__132->mCValueName);
        buffer_append_str(buf_148,"(");
        j_149=0;
        for(        o2_saved_150=(struct list$1CVALUEph*)come_increment_ref_count((come_params_137)),it_153=list$1CVALUEph_begin((o2_saved_150));        !list$1CVALUEph_end((o2_saved_150));        it_153=list$1CVALUEph_next((o2_saved_150))        ){
            buffer_append_str(buf_148,it_153->c_value);
            if(_if_conditional245=j_149!=list$1CVALUEph_length(come_params_137)-1,            _if_conditional245) {
                buffer_append_str(buf_148,",");
            }
            j_149++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_148,")");
        come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value258=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1182, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj99=come_value_156->c_value;
        come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value259=buffer_to_string(buf_148))));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(lambda_type_133->mResultType->v1->mHeap) {
            __dec_obj100=come_value_156->c_value;
            come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value260=append_object_to_right_values(come_value_156->c_value,(struct sType*)come_increment_ref_count(lambda_type_133->mResultType->v1),info))));
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj101=come_value_156->type;
        come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(result_type_134))));
        come_call_finalizer2(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_156->type->mStatic=(_Bool)0;
        come_value_156->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_156->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
        come_call_finalizer2(sType_finalize,result_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional247=string_operator_equals(fun_name_130,"__builtin_memmove")||string_operator_equals(fun_name_130,"__builtin_memset")||string_operator_equals(fun_name_130,"__builtin_ffs")||string_operator_equals(fun_name_130,"__builtin_ffsl")||string_operator_equals(fun_name_130,"__builtin_ffsll"),        _if_conditional247) {
            come_params_157=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value263=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value262=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1200, "list$1CVALUEph"))))))));
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_158=(params_131),it_159=list$1tuple2$2charphsNodephph_begin((o2_saved_158));            !list$1tuple2$2charphsNodephph_end((o2_saved_158));            it_159=list$1tuple2$2charphsNodephph_next((o2_saved_158))            ){
                multiple_assign_var6=it_159;
                label_160=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_161=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional248=!node_compile(node_161,info),                _if_conditional248) {
                    __result187__ = (_Bool)0;
                    label_160 = come_decrement_ref_count2(label_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result187__;
                }
                come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_157,(struct CVALUE*)come_increment_ref_count(come_value_162));
                label_160 = come_decrement_ref_count2(label_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            buf_163=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value266=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value265=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1214, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_163,fun_name_130);
            buffer_append_str(buf_163,"(");
            j_164=0;
            for(            o2_saved_165=(struct list$1CVALUEph*)come_increment_ref_count((come_params_157)),it_166=list$1CVALUEph_begin((o2_saved_165));            !list$1CVALUEph_end((o2_saved_165));            it_166=list$1CVALUEph_next((o2_saved_165))            ){
                buffer_append_str(buf_163,it_166->c_value);
                if(_if_conditional249=j_164!=list$1CVALUEph_length(come_params_157)-1,                _if_conditional249) {
                    buffer_append_str(buf_163,",");
                }
                j_164++;
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_163,")");
            come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1231, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj102=come_value_167->c_value;
            come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value268=buffer_to_string(buf_163))));
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional250=string_operator_equals(fun_name_130,"__builtin_memmove")||string_operator_equals(fun_name_130,"__builtin_memset"),            _if_conditional250) {
                __dec_obj103=come_value_167->type;
                come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1235, "sType")))),"void",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional251=string_operator_equals(fun_name_130,"__builtin_ffs"),                _if_conditional251) {
                    __dec_obj104=come_value_167->type;
                    come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1238, "sType")))),"int",(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional252=string_operator_equals(fun_name_130,"__builtin_ffsl"),                    _if_conditional252) {
                        __dec_obj105=come_value_167->type;
                        come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value273=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1241, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        if(_if_conditional253=string_operator_equals(fun_name_130,"__builtin_ffsll"),                        _if_conditional253) {
                            __dec_obj106=come_value_167->type;
                            come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value275=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1244, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
            }
            come_value_167->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_167->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
            __result188__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result188__;
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional254=string_operator_equals(fun_name_130,"string"),            _if_conditional254) {
                __dec_obj107=fun_name_130;
                fun_name_130=(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string("__builtin_string"))));
                __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional255=string_operator_equals(fun_name_130,"wstring"),                _if_conditional255) {
                    __dec_obj108=fun_name_130;
                    fun_name_130=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string("__builtin_wstring"))));
                    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional256=string_operator_equals(fun_name_130,"inherit"),                    _if_conditional256) {
                        p_168=info->come_fun->mName;
                        version_169=0;
                        while(_while_condtional14=*p_168,                        _while_condtional14) {
                            if(_if_conditional257=*p_168==95&&*(p_168+1)==118&&xisdigit(*(p_168+2)),                            _if_conditional257) {
                                p2_170=p_168+2;
                                version_169=0;
                                while(_while_condtional15=xisdigit(*p2_170),                                _while_condtional15) {
                                    version_169=version_169*10+(*p2_170-48);
                                    p2_170++;
                                }
                                break;
                            }
                            else {
                                p_168++;
                            }
                        }
                        char real_fun_name_171[2048];
                        memset(&real_fun_name_171, 0, sizeof(char)                        *(2048)                        );
                        memcpy(real_fun_name_171,info->come_fun->mName,p_168-info->come_fun->mName);
                        real_fun_name_171[p_168-info->come_fun->mName]=0;
                        for(                        i_172=version_169-1;                        i_172>=1;                        i_172--                        ){
                            new_fun_name_173=(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("%s_v%d",real_fun_name_171,i_172))));
                            right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional258=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_173),                            _if_conditional258) {
                                __dec_obj109=fun_name_130;
                                fun_name_130=(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string(new_fun_name_173))));
                                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_173 = come_decrement_ref_count2(new_fun_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_173 = come_decrement_ref_count2(new_fun_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional259=i_172==0,                        _if_conditional259) {
                            new_fun_name_174=(char*)come_increment_ref_count(((char*)(right_value281=xsprintf("%s",real_fun_name_171))));
                            right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional260=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_174),                            _if_conditional260) {
                                __dec_obj110=fun_name_130;
                                fun_name_130=(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(new_fun_name_174))));
                                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional261=string_operator_equals(fun_name_130,info->come_fun->mName),                            _if_conditional261) {
                                err_msg(info,"invalid inherit");
                                __result189__ = (_Bool)0;
                                new_fun_name_174 = come_decrement_ref_count2(new_fun_name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result189__;
                            }
                            new_fun_name_174 = come_decrement_ref_count2(new_fun_name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        for(                        i_175=128;                        i_175>=1;                        i_175--                        ){
                            new_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value283=xsprintf("%s_v%d",fun_name_130,i_175))));
                            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional262=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_176),                            _if_conditional262) {
                                __dec_obj111=fun_name_130;
                                fun_name_130=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(new_fun_name_176))));
                                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_176 = come_decrement_ref_count2(new_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_176 = come_decrement_ref_count2(new_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        fun_179=map$2charphsFunph_at(info->funcs,fun_name_130,((void*)0));
        if(_if_conditional267=fun_179==((void*)0),        _if_conditional267) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_130);
            __result194__ = (_Bool)1;
            fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result194__;
        }
        result_type_180=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(fun_179->mResultType))));
        come_call_finalizer2(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_180->mStatic=(_Bool)0;
        param_types_181=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value287=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value286=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1328, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_182=(struct list$1sTypeph*)come_increment_ref_count((fun_179->mParamTypes)),it_185=list$1sTypeph_begin((o2_saved_182));        !list$1sTypeph_end((o2_saved_182));        it_185=list$1sTypeph_next((o2_saved_182))        ){
            it2_188=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=solve_generics(((struct sType*)(right_value288=sType_clone(it_185))),info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(param_types_181,(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(it2_188)))));
            come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,it2_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj115=result_type_180;
        result_type_180=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=solve_generics(result_type_180,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_params_192=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value296=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value295=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1336, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        label_params_198=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value303=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value297=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "05function.c", 1338, "map$2charphCVALUEph"))))))));
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_199=0;
        for(        o2_saved_200=(params_131),it_201=list$1tuple2$2charphsNodephph_begin((o2_saved_200));        !list$1tuple2$2charphsNodephph_end((o2_saved_200));        it_201=list$1tuple2$2charphsNodephph_next((o2_saved_200))        ){
            multiple_assign_var7=it_201;
            label_202=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_203=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(_if_conditional278=!node_compile(node_203,info),            _if_conditional278) {
                __result205__ = (_Bool)0;
                label_202 = come_decrement_ref_count2(label_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_203) { node_203 = come_decrement_ref_count2(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,result_type_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result205__;
            }
            come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value304=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional279=fun_179->mVarArgs&&list$1sTypephp_operator_load_element(fun_179->mParamTypes,i_199)==((void*)0),            _if_conditional279) {
            }
            else {
                if(_if_conditional280=label_202!=((void*)0),                _if_conditional280) {
                    n_205=0;
                    for(                    o2_saved_206=(struct list$1charph*)come_increment_ref_count((fun_179->mParamNames)),it_209=list$1charph_begin((o2_saved_206));                    !list$1charph_end((o2_saved_206));                    it_209=list$1charph_next((o2_saved_206))                    ){
                        if(_if_conditional285=string_operator_equals(label_202,it_209),                        _if_conditional285) {
                            break;
                        }
                        n_205++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional286=n_205<list$1sTypeph_length(fun_179->mParamTypes),                    _if_conditional286) {
                        check_assign_type(((char*)(right_value307=xsprintf("\%s calling param(1) #\%s",((char*)(right_value305=string_to_string(fun_name_130))),((char*)(right_value306=int_to_string(n_205)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_181,n_205), "05function.c", 1363, 7)),come_value_204->type,come_value_204,(_Bool)0,(_Bool)1,info);
                        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional287=n_205<list$1sTypeph_length(fun_179->mParamTypes)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_181,n_205), "05function.c", 1365, 8))->mHeap&&come_value_204->type->mHeap,                    _if_conditional287) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_181,n_205), "05function.c", 1366, 9)),come_value_204->type,come_value_204,info);
                    }
                }
                else {
                    if(_if_conditional288=i_199<list$1sTypeph_length(fun_179->mParamTypes),                    _if_conditional288) {
                        check_assign_type(((char*)(right_value310=xsprintf("\%s calling param(2) #\%s",((char*)(right_value308=string_to_string(fun_name_130))),((char*)(right_value309=int_to_string(i_199)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_181,i_199), "05function.c", 1371, 10)),come_value_204->type,come_value_204,(_Bool)0,(_Bool)1,info);
                        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional289=i_199<list$1sTypeph_length(fun_179->mParamTypes)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_181,i_199), "05function.c", 1373, 11))->mHeap&&come_value_204->type->mHeap,                    _if_conditional289) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_181,i_199), "05function.c", 1374, 12)),come_value_204->type,come_value_204,info);
                    }
                }
            }
            if(_if_conditional290=label_202==((void*)0),            _if_conditional290) {
                list$1CVALUEph_push_back(come_params_192,(struct CVALUE*)come_increment_ref_count(come_value_204));
                i_199++;
            }
            else {
                map$2charphCVALUEph_insert(label_params_198,(char*)come_increment_ref_count(((char*)(right_value317=__builtin_string(label_202)))),(struct CVALUE*)come_increment_ref_count(come_value_204));
                right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            dec_stack_ptr(1,info);
            label_202 = come_decrement_ref_count2(label_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_203) { node_203 = come_decrement_ref_count2(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional340=list$1tuple2$2charphsNodephph_length(params_131)<list$1sTypeph_length(fun_179->mParamTypes),        _if_conditional340) {
            for(            ;            i_199<list$1sTypeph_length(fun_179->mParamTypes);            i_199++            ){
                default_param_259=(char*)come_increment_ref_count(((char*)(right_value318=string_clone(((char*)come_null_check(list$1charphp_operator_load_element(fun_179->mParamDefaultParametors,i_199), "05function.c", 1392, 13))))));
                right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_260=((char*)come_null_check(list$1charphp_operator_load_element(fun_179->mParamNames,i_199), "05function.c", 1394, 14));
                come_value_264=map$2charphCVALUEphp_operator_load_element(label_params_198,param_name_260);
                if(_if_conditional347=default_param_259&&string_operator_not_equals(default_param_259,""),                _if_conditional347) {
                    source_265=(struct buffer*)come_increment_ref_count(info->source);
                    p_266=info->p;
                    head_267=info->head;
                    sline_268=info->sline;
                    __dec_obj117=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=string_to_buffer(default_param_259))));
                    come_call_finalizer2(buffer_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=expression_v13(info))));
                    if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional348=!node_compile(node_269,info),                    _if_conditional348) {
                        __result243__ = (_Bool)0;
                        come_call_finalizer2(buffer_finalize,source_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(node_269) { node_269 = come_decrement_ref_count2(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_259 = come_decrement_ref_count2(default_param_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result243__;
                    }
                    __dec_obj118=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_265);
                    come_call_finalizer2(buffer_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    info->p=p_266;
                    info->head=head_267;
                    info->sline=sline_268;
                    come_value_270=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    check_assign_type(((char*)(right_value324=xsprintf("\%s calling param(3) #\%s",((char*)(right_value322=string_to_string(fun_name_130))),((char*)(right_value323=int_to_string(i_199)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_181,i_199), "05function.c", 1421, 15)),come_value_270->type,come_value_270,(_Bool)0,(_Bool)1,info);
                    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional349=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_181,i_199), "05function.c", 1422, 16))->mHeap&&come_value_270->type->mHeap,                    _if_conditional349) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_181,i_199), "05function.c", 1423, 17)),come_value_270->type,come_value_270,info);
                    }
                    list$1CVALUEph_push_back(come_params_192,(struct CVALUE*)come_increment_ref_count(come_value_270));
                    dec_stack_ptr(1,info);
                    come_call_finalizer2(buffer_finalize,source_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(node_269) { node_269 = come_decrement_ref_count2(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional350=come_value_264==((void*)0),                    _if_conditional350) {
                        err_msg(info,"require parametor(%s)",fun_179->mName);
                        __result244__ = (_Bool)0;
                        default_param_259 = come_decrement_ref_count2(default_param_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result244__;
                    }
                    else {
                        list$1CVALUEph_push_back(come_params_192,((void*)0));
                    }
                }
                default_param_259 = come_decrement_ref_count2(default_param_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(_if_conditional351=map$2charphCVALUEph_length(label_params_198)>0,        _if_conditional351) {
            for(            i_199=0;            i_199<list$1charph_length(fun_179->mParamNames);            i_199++            ){
                param_name_271=((char*)come_null_check(list$1charphp_operator_load_element(fun_179->mParamNames,i_199), "05function.c", 1442, 18));
                come_value_272=map$2charphCVALUEphp_operator_load_element(label_params_198,param_name_271);
                if(come_value_272) {
                    check_assign_type(((char*)(right_value327=xsprintf("\%s calling param(4) \%s",((char*)(right_value325=string_to_string(fun_name_130))),((char*)(right_value326=int_to_string(i_199)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_181,i_199), "05function.c", 1447, 19)),come_value_272->type,come_value_272,(_Bool)0,(_Bool)1,info);
                    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_replace(come_params_192,i_199,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value331=CVALUE_clone(come_value_272)))));
                    come_call_finalizer2(CVALUE_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
        }
        if(_if_conditional361=list$1sTypeph_length(fun_179->mParamTypes)!=list$1CVALUEph_length(come_params_192)&&!fun_179->mVarArgs&&string_operator_not_equals(fun_name_130,"__builtin_va_start")&&string_operator_not_equals(fun_name_130,"__builtin_va_end"),        _if_conditional361) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_130,list$1sTypeph_length(fun_179->mParamTypes),list$1tuple2$2charphsNodephph_length(params_131));
            __result252__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result252__;
        }
        buf_276=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value333=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value332=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1459, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_276,fun_name_130);
        buffer_append_str(buf_276,"(");
        j_277=0;
        for(        o2_saved_278=(struct list$1CVALUEph*)come_increment_ref_count((come_params_192)),it_279=list$1CVALUEph_begin((o2_saved_278));        !list$1CVALUEph_end((o2_saved_278));        it_279=list$1CVALUEph_next((o2_saved_278))        ){
            buffer_append_str(buf_276,it_279->c_value);
            if(_if_conditional362=j_277!=list$1CVALUEph_length(come_params_192)-1,            _if_conditional362) {
                buffer_append_str(buf_276,",");
            }
            j_277++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_276,")");
        come_value_280=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value334=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1476, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj122=come_value_280->c_value;
        come_value_280->c_value=(char*)come_increment_ref_count(((char*)(right_value335=buffer_to_string(buf_276))));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj123=come_value_280->type;
        come_value_280->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(result_type_180))));
        come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_280->type->mStatic=(_Bool)0;
        come_value_280->var=((void*)0);
        if(fun_179->mResultType->mHeap) {
            __dec_obj124=come_value_280->c_value;
            come_value_280->c_value=(char*)come_increment_ref_count(((char*)(right_value337=append_object_to_right_values(come_value_280->c_value,(struct sType*)come_increment_ref_count(result_type_180),info))));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional364=string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free"),        _if_conditional364) {
            if(_if_conditional365=string_operator_not_equals(fun_name_130,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_130,"null_check")&&string_operator_not_equals(fun_name_130,"come_push_stackframe")&&string_operator_not_equals(fun_name_130,"come_pop_stackframe"),            _if_conditional365) {
                __dec_obj125=come_value_280->c_value;
                come_value_280->c_value=(char*)come_increment_ref_count(((char*)(right_value338=append_stackframe(come_value_280->c_value,come_value_280->type,info))));
                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        if(_if_conditional366=!self->guard_break&&result_type_180->mGuardValue&&result_type_180->mPointerNum>0,        _if_conditional366) {
            __dec_obj126=come_value_280->c_value;
            come_value_280->c_value=(char*)come_increment_ref_count(((char*)(right_value340=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value339=make_type_name_string(result_type_180,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_280->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_last_code(info,"%s;\n",come_value_280->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_280));
        come_call_finalizer2(sType_finalize,result_type_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result253__ = (_Bool)1;
    fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result253__;
    fun_name_130 = come_decrement_ref_count2(fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result166__ = __result_obj__ = self;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result166__;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_135;
_Bool _while_condtional13;
struct list_item$1CVALUEph* prev_it_136;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_135, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_136, 0, sizeof(struct list_item$1CVALUEph*));
                it_135=self->head;
                while(_while_condtional13=it_135!=((void*)0),                _while_condtional13) {
                    prev_it_136=it_135;
                    it_135=it_135->next;
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional231;
int __result167__;
int __result168__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional231=self==((void*)0),            _if_conditional231) {
                __result167__ = 0;
                return __result167__;
            }
            __result168__ = self->len;
            return __result168__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional233;
struct tuple2$2charphsNodeph* result_140;
struct tuple2$2charphsNodeph* __result170__;
_Bool _if_conditional234;
struct tuple2$2charphsNodeph* __result171__;
struct tuple2$2charphsNodeph* result_141;
struct tuple2$2charphsNodeph* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_141, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional233=self==((void*)0),            _if_conditional233) {
                memset(&result_140,0,sizeof(struct tuple2$2charphsNodeph*));
                __result170__ = __result_obj__ = result_140;
                return __result170__;
            }
            self->it=self->head;
            if(self->it) {
                __result171__ = __result_obj__ = self->it->item;
                return __result171__;
            }
            memset(&result_141,0,sizeof(struct tuple2$2charphsNodeph*));
            __result172__ = __result_obj__ = result_141;
            return __result172__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
            __result173__ = self==((void*)0)||self->it==((void*)0);
            return __result173__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional235;
struct tuple2$2charphsNodeph* result_143;
struct tuple2$2charphsNodeph* __result174__;
_Bool _if_conditional236;
struct tuple2$2charphsNodeph* __result175__;
struct tuple2$2charphsNodeph* result_144;
struct tuple2$2charphsNodeph* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_143, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_144, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional235=self==((void*)0)||self->it==((void*)0),            _if_conditional235) {
                memset(&result_143,0,sizeof(struct tuple2$2charphsNodeph*));
                __result174__ = __result_obj__ = result_143;
                return __result174__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result175__ = __result_obj__ = self->it->item;
                return __result175__;
            }
            memset(&result_144,0,sizeof(struct tuple2$2charphsNodeph*));
            __result176__ = __result_obj__ = result_144;
            return __result176__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional240;
struct CVALUE* result_151;
struct CVALUE* __result178__;
_Bool _if_conditional241;
struct CVALUE* __result179__;
struct CVALUE* result_152;
struct CVALUE* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_151, 0, sizeof(struct CVALUE*));
memset(&result_152, 0, sizeof(struct CVALUE*));
            if(_if_conditional240=self==((void*)0),            _if_conditional240) {
                memset(&result_151,0,sizeof(struct CVALUE*));
                __result178__ = __result_obj__ = result_151;
                return __result178__;
            }
            self->it=self->head;
            if(self->it) {
                __result179__ = __result_obj__ = self->it->item;
                return __result179__;
            }
            memset(&result_152,0,sizeof(struct CVALUE*));
            __result180__ = __result_obj__ = result_152;
            return __result180__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
            __result181__ = self==((void*)0)||self->it==((void*)0);
            return __result181__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional242;
struct CVALUE* result_154;
struct CVALUE* __result182__;
_Bool _if_conditional243;
struct CVALUE* __result183__;
struct CVALUE* result_155;
struct CVALUE* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_154, 0, sizeof(struct CVALUE*));
memset(&result_155, 0, sizeof(struct CVALUE*));
            if(_if_conditional242=self==((void*)0)||self->it==((void*)0),            _if_conditional242) {
                memset(&result_154,0,sizeof(struct CVALUE*));
                __result182__ = __result_obj__ = result_154;
                return __result182__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result183__ = __result_obj__ = self->it->item;
                return __result183__;
            }
            memset(&result_155,0,sizeof(struct CVALUE*));
            __result184__ = __result_obj__ = result_155;
            return __result184__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional244;
int __result185__;
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional244=self==((void*)0),                _if_conditional244) {
                    __result185__ = 0;
                    return __result185__;
                }
                __result186__ = self->len;
                return __result186__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_177;
unsigned int it_178;
_Bool _while_condtional16;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct sFun* __result190__;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct sFun* __result191__;
struct sFun* __result192__;
struct sFun* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_177, 0, sizeof(unsigned int));
memset(&it_178, 0, sizeof(unsigned int));
            hash_177=string_get_hash_key(((char*)key))%self->size;
            it_178=hash_177;
            while(_while_condtional16=(_Bool)1,            _while_condtional16) {
                if(_if_conditional263=self->item_existance[it_178],                _if_conditional263) {
                    if(_if_conditional264=string_equals(self->keys[it_178],key),                    _if_conditional264) {
                        __result190__ = __result_obj__ = self->items[it_178];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result190__;
                    }
                    it_178++;
                    if(_if_conditional265=it_178>=self->size,                    _if_conditional265) {
                        it_178=0;
                    }
                    else {
                        if(_if_conditional266=it_178==hash_177,                        _if_conditional266) {
                            __result191__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result191__;
                        }
                    }
                }
                else {
                    __result192__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result192__;
                }
            }
            __result193__ = __result_obj__ = default_value;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result193__;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional268;
struct sType* result_183;
struct sType* __result195__;
_Bool _if_conditional269;
struct sType* __result196__;
struct sType* result_184;
struct sType* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_183, 0, sizeof(struct sType*));
memset(&result_184, 0, sizeof(struct sType*));
            if(_if_conditional268=self==((void*)0),            _if_conditional268) {
                memset(&result_183,0,sizeof(struct sType*));
                __result195__ = __result_obj__ = result_183;
                return __result195__;
            }
            self->it=self->head;
            if(self->it) {
                __result196__ = __result_obj__ = self->it->item;
                return __result196__;
            }
            memset(&result_184,0,sizeof(struct sType*));
            __result197__ = __result_obj__ = result_184;
            return __result197__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result198__;
memset(&__result_obj__, 0, sizeof(void*));
            __result198__ = self==((void*)0)||self->it==((void*)0);
            return __result198__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional270;
struct sType* result_186;
struct sType* __result199__;
_Bool _if_conditional271;
struct sType* __result200__;
struct sType* result_187;
struct sType* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_186, 0, sizeof(struct sType*));
memset(&result_187, 0, sizeof(struct sType*));
            if(_if_conditional270=self==((void*)0)||self->it==((void*)0),            _if_conditional270) {
                memset(&result_186,0,sizeof(struct sType*));
                __result199__ = __result_obj__ = result_186;
                return __result199__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result200__ = __result_obj__ = self->it->item;
                return __result200__;
            }
            memset(&result_187,0,sizeof(struct sType*));
            __result201__ = __result_obj__ = result_187;
            return __result201__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional272;
void* right_value290;
struct list_item$1sTypeph* litem_189;
struct sType* __dec_obj112;
_Bool _if_conditional273;
void* right_value291;
struct list_item$1sTypeph* litem_190;
struct sType* __dec_obj113;
void* right_value292;
struct list_item$1sTypeph* litem_191;
struct sType* __dec_obj114;
struct list$1sTypeph* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value290 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1sTypeph*));
right_value291 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1sTypeph*));
right_value292 = (void*)0;
memset(&litem_191, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional272=self->len==0,                _if_conditional272) {
                    litem_189=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value290=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_189->prev=((void*)0);
                    litem_189->next=((void*)0);
                    __dec_obj112=litem_189->item;
                    litem_189->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_189;
                    self->head=litem_189;
                }
                else {
                    if(_if_conditional273=self->len==1,                    _if_conditional273) {
                        litem_190=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value291=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_190->prev=self->head;
                        litem_190->next=((void*)0);
                        __dec_obj113=litem_190->item;
                        litem_190->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_190;
                        self->head->next=litem_190;
                    }
                    else {
                        litem_191=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value292=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_191->prev=self->tail;
                        litem_191->next=((void*)0);
                        __dec_obj114=litem_191->item;
                        litem_191->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_191;
                        self->tail=litem_191;
                    }
                }
                self->len++;
                __result202__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result202__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
void* right_value298;
void* right_value299;
void* right_value300;
int i_193;
void* right_value301;
void* right_value302;
struct list$1charp* __dec_obj116;
struct map$2charphCVALUEph* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&i_193, 0, sizeof(int));
right_value301 = (void*)0;
right_value302 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value298=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1087, "char*%"))));
            right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value299=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1088, "CVALUE*%"))));
            come_call_finalizer2(CVALUE_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value300=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1089, "bool"))));
            right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_193=0;            i_193<1024;            i_193++            ){
                self->item_existance[i_193]=(_Bool)0;
            }
            self->size=1024;
            self->len=0;
            __dec_obj116=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value302=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value301=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1099, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result204__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result204__;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result203__ = __result_obj__ = self;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result203__;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_194;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_195;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_194, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_195, 0, sizeof(struct list_item$1charp*));
                    it_194=self->head;
                    while(_while_condtional17=it_194!=((void*)0),                    _while_condtional17) {
                        prev_it_195=it_194;
                        it_194=it_194->next;
                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
void* __result_obj__;
int i_196;
_Bool _if_conditional274;
_Bool _if_conditional275;
int i_197;
_Bool _if_conditional276;
_Bool _if_conditional277;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_196, 0, sizeof(int));
memset(&i_197, 0, sizeof(int));
                for(                i_196=0;                i_196<self->size;                i_196++                ){
                    if(_if_conditional274=self->item_existance[i_196],                    _if_conditional274) {
                        if(_if_conditional275=1,                        _if_conditional275) {
                            come_call_finalizer2(CVALUE_finalize,self->items[i_196], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_197=0;                i_197<self->size;                i_197++                ){
                    if(_if_conditional276=self->item_existance[i_197],                    _if_conditional276) {
                        if(_if_conditional277=1,                        _if_conditional277) {
                            self->keys[i_197] = come_decrement_ref_count2(self->keys[i_197], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional281;
char* result_207;
char* __result206__;
_Bool _if_conditional282;
char* __result207__;
char* result_208;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(char*));
memset(&result_208, 0, sizeof(char*));
                        if(_if_conditional281=self==((void*)0),                        _if_conditional281) {
                            memset(&result_207,0,sizeof(char*));
                            __result206__ = __result_obj__ = result_207;
                            return __result206__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result207__ = __result_obj__ = self->it->item;
                            return __result207__;
                        }
                        memset(&result_208,0,sizeof(char*));
                        __result208__ = __result_obj__ = result_208;
                        return __result208__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result209__ = self==((void*)0)||self->it==((void*)0);
                        return __result209__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional283;
char* result_210;
char* __result210__;
_Bool _if_conditional284;
char* __result211__;
char* result_211;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_210, 0, sizeof(char*));
memset(&result_211, 0, sizeof(char*));
                        if(_if_conditional283=self==((void*)0)||self->it==((void*)0),                        _if_conditional283) {
                            memset(&result_210,0,sizeof(char*));
                            __result210__ = __result_obj__ = result_210;
                            return __result210__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result211__ = __result_obj__ = self->it->item;
                            return __result211__;
                        }
                        memset(&result_211,0,sizeof(char*));
                        __result212__ = __result_obj__ = result_211;
                        return __result212__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional291;
_Bool _if_conditional303;
_Bool _if_conditional304;
unsigned int hash_229;
unsigned int it_230;
_Bool _while_condtional20;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool same_key_exist_247;
char* it2_250;
_Bool _if_conditional336;
_Bool _if_conditional337;
struct map$2charphCVALUEph* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_229, 0, sizeof(unsigned int));
memset(&it_230, 0, sizeof(unsigned int));
memset(&same_key_exist_247, 0, sizeof(_Bool));
memset(&it2_250, 0, sizeof(char*));
                    if(_if_conditional291=self->len*10>=self->size,                    _if_conditional291) {
                        map$2charphCVALUEph_rehash(self);
                    }
                    if(_if_conditional303=1,                    _if_conditional303) {
                        if(_if_conditional304=key==((void*)0),                        _if_conditional304) {
                            stackframe();
                            puts("key is null");
                            exit(2);
                        }
                    }
                    hash_229=string_get_hash_key(key)%self->size;
                    it_230=hash_229;
                    while(_while_condtional20=(_Bool)1,                    _while_condtional20) {
                        if(_if_conditional305=self->item_existance[it_230],                        _if_conditional305) {
                            if(_if_conditional306=string_equals(self->keys[it_230],key),                            _if_conditional306) {
                                if(_if_conditional307=1,                                _if_conditional307) {
                                    list$1charp_remove(self->key_list,self->keys[it_230]);
                                    self->keys[it_230] = come_decrement_ref_count2(self->keys[it_230], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    self->keys[it_230]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    list$1charp_remove(self->key_list,self->keys[it_230]);
                                    self->keys[it_230]=key;
                                }
                                if(_if_conditional327=1,                                _if_conditional327) {
                                    come_call_finalizer2(CVALUE_finalize,self->items[it_230], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->items[it_230]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_230]=item;
                                }
                                break;
                            }
                            it_230++;
                            if(_if_conditional328=it_230>=self->size,                            _if_conditional328) {
                                it_230=0;
                            }
                            else {
                                if(_if_conditional329=it_230==hash_229,                                _if_conditional329) {
                                    printf("unexpected error in map.insert\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            self->item_existance[it_230]=(_Bool)1;
                            if(_if_conditional330=1,                            _if_conditional330) {
                                self->keys[it_230]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                self->keys[it_230]=key;
                            }
                            if(_if_conditional331=1,                            _if_conditional331) {
                                self->items[it_230]=(struct CVALUE*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_230]=item;
                            }
                            self->len++;
                            break;
                        }
                    }
                    same_key_exist_247=(_Bool)0;
                    for(                    it2_250=list$1charp_begin(self->key_list);                    !list$1charp_end(self->key_list);                    it2_250=list$1charp_next(self->key_list)                    ){
                        if(_if_conditional336=string_equals(it2_250,key),                        _if_conditional336) {
                            puts("SAME KEY");
                            same_key_exist_247=(_Bool)1;
                        }
                    }
                    if(_if_conditional337=!same_key_exist_247,                    _if_conditional337) {
                        list$1charp_push_back(self->key_list,key);
                    }
                    __result236__ = __result_obj__ = self;
                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result236__;
                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
int size_212;
void* right_value311;
char** keys_213;
void* right_value312;
struct CVALUE** items_214;
void* right_value313;
_Bool* item_existance_215;
int len_216;
char* it_219;
struct CVALUE* default_value_222;
struct CVALUE* it2_225;
unsigned int hash_226;
int n_227;
_Bool _while_condtional19;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct CVALUE* default_value_228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_212, 0, sizeof(int));
right_value311 = (void*)0;
memset(&keys_213, 0, sizeof(char**));
right_value312 = (void*)0;
memset(&items_214, 0, sizeof(struct CVALUE**));
right_value313 = (void*)0;
memset(&item_existance_215, 0, sizeof(_Bool*));
memset(&len_216, 0, sizeof(int));
memset(&it_219, 0, sizeof(char*));
memset(&default_value_222, 0, sizeof(struct CVALUE*));
memset(&it2_225, 0, sizeof(struct CVALUE*));
memset(&hash_226, 0, sizeof(unsigned int));
memset(&n_227, 0, sizeof(int));
memset(&default_value_228, 0, sizeof(struct CVALUE*));
                            size_212=self->size*10;
                            keys_213=(char**)come_increment_ref_count(((char**)(right_value311=(char**)come_calloc(1, sizeof(char*)*(1*(size_212)), "./comelang2.h", 1338, "char*%"))));
                            right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            items_214=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value312=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_212)), "./comelang2.h", 1339, "CVALUE*%"))));
                            come_call_finalizer2(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            item_existance_215=(_Bool*)come_increment_ref_count(((_Bool*)(right_value313=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_212)), "./comelang2.h", 1340, "bool"))));
                            right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            len_216=0;
                            for(                            it_219=map$2charphCVALUEph_begin(self);                            !map$2charphCVALUEph_end(self);                            it_219=map$2charphCVALUEph_next(self)                            ){
                                memset(&default_value_222,0,sizeof(struct CVALUE*));
                                it2_225=map$2charphCVALUEph_at(self,it_219,default_value_222);
                                hash_226=string_get_hash_key(it_219)%size_212;
                                n_227=hash_226;
                                while(_while_condtional19=(_Bool)1,                                _while_condtional19) {
                                    if(_if_conditional300=item_existance_215[n_227],                                    _if_conditional300) {
                                        n_227++;
                                        if(_if_conditional301=n_227>=size_212,                                        _if_conditional301) {
                                            n_227=0;
                                        }
                                        else {
                                            if(_if_conditional302=n_227==hash_226,                                            _if_conditional302) {
                                                printf("unexpected error in map.rehash(1)\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        item_existance_215[n_227]=(_Bool)1;
                                        keys_213[n_227]=it_219;
                                        items_214[n_227]=map$2charphCVALUEph_at(self,it_219,default_value_228);
                                        len_216++;
                                        break;
                                    }
                                }
                            }
                            come_free((char*)self->items);
                            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_free((char*)self->keys);
                            self->keys=keys_213;
                            self->items=items_214;
                            self->item_existance=item_existance_215;
                            self->size=size_212;
                            self->len=len_216;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional292;
char* result_217;
char* __result213__;
_Bool _if_conditional293;
char* __result214__;
char* result_218;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_217, 0, sizeof(char*));
memset(&result_218, 0, sizeof(char*));
                                if(_if_conditional292=self==((void*)0),                                _if_conditional292) {
                                    memset(&result_217,0,sizeof(char*));
                                    __result213__ = __result_obj__ = result_217;
                                    return __result213__;
                                }
                                self->key_list->it=self->key_list->head;
                                if(self->key_list->it) {
                                    __result214__ = __result_obj__ = self->key_list->it->item;
                                    return __result214__;
                                }
                                memset(&result_218,0,sizeof(char*));
                                __result215__ = __result_obj__ = result_218;
                                return __result215__;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __result216__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result216__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                return __result216__;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional294;
char* result_220;
char* __result217__;
_Bool _if_conditional295;
char* __result218__;
char* result_221;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(char*));
memset(&result_221, 0, sizeof(char*));
                                if(_if_conditional294=self==((void*)0)||self->key_list->it==((void*)0),                                _if_conditional294) {
                                    memset(&result_220,0,sizeof(char*));
                                    __result217__ = __result_obj__ = result_220;
                                    return __result217__;
                                }
                                self->key_list->it=self->key_list->it->next;
                                if(self->key_list->it) {
                                    __result218__ = __result_obj__ = self->key_list->it->item;
                                    return __result218__;
                                }
                                memset(&result_221,0,sizeof(char*));
                                __result219__ = __result_obj__ = result_221;
                                return __result219__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
unsigned int hash_223;
unsigned int it_224;
_Bool _while_condtional18;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct CVALUE* __result220__;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct CVALUE* __result221__;
struct CVALUE* __result222__;
struct CVALUE* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_223, 0, sizeof(unsigned int));
memset(&it_224, 0, sizeof(unsigned int));
                                    hash_223=string_get_hash_key(((char*)key))%self->size;
                                    it_224=hash_223;
                                    while(_while_condtional18=(_Bool)1,                                    _while_condtional18) {
                                        if(_if_conditional296=self->item_existance[it_224],                                        _if_conditional296) {
                                            if(_if_conditional297=string_equals(self->keys[it_224],key),                                            _if_conditional297) {
                                                __result220__ = __result_obj__ = self->items[it_224];
                                                come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result220__;
                                            }
                                            it_224++;
                                            if(_if_conditional298=it_224>=self->size,                                            _if_conditional298) {
                                                it_224=0;
                                            }
                                            else {
                                                if(_if_conditional299=it_224==hash_223,                                                _if_conditional299) {
                                                    __result221__ = __result_obj__ = default_value;
                                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result221__;
                                                }
                                            }
                                        }
                                        else {
                                            __result222__ = __result_obj__ = default_value;
                                            come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result222__;
                                        }
                                    }
                                    __result223__ = __result_obj__ = default_value;
                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result223__;
                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_231;
struct list_item$1charp* it_232;
_Bool _while_condtional21;
_Bool _if_conditional308;
struct list$1charp* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_231, 0, sizeof(int));
memset(&it_232, 0, sizeof(struct list_item$1charp*));
                                        it2_231=0;
                                        it_232=self->head;
                                        while(_while_condtional21=it_232!=((void*)0),                                        _while_condtional21) {
                                            if(_if_conditional308=string_equals(it_232->item,item),                                            _if_conditional308) {
                                                list$1charp_delete(self,it2_231,it2_231+1);
                                                break;
                                            }
                                            it2_231++;
                                            it_232=it_232->next;
                                        }
                                        __result227__ = __result_obj__ = self;
                                        return __result227__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
int tmp_233;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
struct list$1charp* __result224__;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct list_item$1charp* it_236;
int i_237;
_Bool _while_condtional23;
_Bool _if_conditional317;
struct list_item$1charp* prev_it_238;
_Bool _if_conditional318;
_Bool _if_conditional319;
struct list_item$1charp* it_239;
int i_240;
_Bool _while_condtional24;
_Bool _if_conditional320;
_Bool _if_conditional321;
struct list_item$1charp* prev_it_241;
struct list_item$1charp* it_242;
struct list_item$1charp* head_prev_it_243;
struct list_item$1charp* tail_it_244;
int i_245;
_Bool _while_condtional25;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
struct list_item$1charp* prev_it_246;
_Bool _if_conditional325;
_Bool _if_conditional326;
struct list$1charp* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_233, 0, sizeof(int));
memset(&it_236, 0, sizeof(struct list_item$1charp*));
memset(&i_237, 0, sizeof(int));
memset(&prev_it_238, 0, sizeof(struct list_item$1charp*));
memset(&it_239, 0, sizeof(struct list_item$1charp*));
memset(&i_240, 0, sizeof(int));
memset(&prev_it_241, 0, sizeof(struct list_item$1charp*));
memset(&it_242, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_243, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_244, 0, sizeof(struct list_item$1charp*));
memset(&i_245, 0, sizeof(int));
memset(&prev_it_246, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional309=head<0,                                                    _if_conditional309) {
                                                        head+=self->len;
                                                    }
                                                    if(_if_conditional310=tail<0,                                                    _if_conditional310) {
                                                        tail+=self->len+1;
                                                    }
                                                    if(_if_conditional311=head>tail,                                                    _if_conditional311) {
                                                        tmp_233=tail;
                                                        tail=head;
                                                        head=tmp_233;
                                                    }
                                                    if(_if_conditional312=head<0,                                                    _if_conditional312) {
                                                        head=0;
                                                    }
                                                    if(_if_conditional313=tail>self->len,                                                    _if_conditional313) {
                                                        tail=self->len;
                                                    }
                                                    if(_if_conditional314=head==tail,                                                    _if_conditional314) {
                                                        __result224__ = __result_obj__ = self;
                                                        return __result224__;
                                                    }
                                                    if(_if_conditional315=head==0&&tail==self->len,                                                    _if_conditional315) {
                                                        list$1charp_reset(self);
                                                    }
                                                    else {
                                                        if(_if_conditional316=head==0,                                                        _if_conditional316) {
                                                            it_236=self->head;
                                                            i_237=0;
                                                            while(_while_condtional23=it_236!=((void*)0),                                                            _while_condtional23) {
                                                                if(_if_conditional317=i_237<tail,                                                                _if_conditional317) {
                                                                    prev_it_238=it_236;
                                                                    it_236=it_236->next;
                                                                    i_237++;
                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    self->len--;
                                                                }
                                                                else {
                                                                    if(_if_conditional318=i_237==tail,                                                                    _if_conditional318) {
                                                                        self->head=it_236;
                                                                        self->head->prev=((void*)0);
                                                                        break;
                                                                    }
                                                                    else {
                                                                        it_236=it_236->next;
                                                                        i_237++;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional319=tail==self->len,                                                            _if_conditional319) {
                                                                it_239=self->head;
                                                                i_240=0;
                                                                while(_while_condtional24=it_239!=((void*)0),                                                                _while_condtional24) {
                                                                    if(_if_conditional320=i_240==head,                                                                    _if_conditional320) {
                                                                        self->tail=it_239->prev;
                                                                        self->tail->next=((void*)0);
                                                                    }
                                                                    if(_if_conditional321=i_240>=head,                                                                    _if_conditional321) {
                                                                        prev_it_241=it_239;
                                                                        it_239=it_239->next;
                                                                        i_240++;
                                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->len--;
                                                                    }
                                                                    else {
                                                                        it_239=it_239->next;
                                                                        i_240++;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                it_242=self->head;
                                                                head_prev_it_243=((void*)0);
                                                                tail_it_244=((void*)0);
                                                                i_245=0;
                                                                while(_while_condtional25=it_242!=((void*)0),                                                                _while_condtional25) {
                                                                    if(_if_conditional322=i_245==head,                                                                    _if_conditional322) {
                                                                        head_prev_it_243=it_242->prev;
                                                                    }
                                                                    if(_if_conditional323=i_245==tail,                                                                    _if_conditional323) {
                                                                        tail_it_244=it_242;
                                                                    }
                                                                    if(_if_conditional324=i_245>=head&&i_245<tail,                                                                    _if_conditional324) {
                                                                        prev_it_246=it_242;
                                                                        it_242=it_242->next;
                                                                        i_245++;
                                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->len--;
                                                                    }
                                                                    else {
                                                                        it_242=it_242->next;
                                                                        i_245++;
                                                                    }
                                                                }
                                                                if(_if_conditional325=head_prev_it_243!=((void*)0),                                                                _if_conditional325) {
                                                                    head_prev_it_243->next=tail_it_244;
                                                                }
                                                                if(_if_conditional326=tail_it_244!=((void*)0),                                                                _if_conditional326) {
                                                                    tail_it_244->prev=head_prev_it_243;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    __result226__ = __result_obj__ = self;
                                                    return __result226__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_234;
_Bool _while_condtional22;
struct list_item$1charp* prev_it_235;
struct list$1charp* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_234, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_235, 0, sizeof(struct list_item$1charp*));
                                                            it_234=self->head;
                                                            while(_while_condtional22=it_234!=((void*)0),                                                            _while_condtional22) {
                                                                prev_it_235=it_234;
                                                                it_234=it_234->next;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            self->head=((void*)0);
                                                            self->tail=((void*)0);
                                                            self->len=0;
                                                            __result225__ = __result_obj__ = self;
                                                            return __result225__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional332;
char* result_248;
char* __result228__;
_Bool _if_conditional333;
char* __result229__;
char* result_249;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_248, 0, sizeof(char*));
memset(&result_249, 0, sizeof(char*));
                        if(_if_conditional332=self==((void*)0),                        _if_conditional332) {
                            memset(&result_248,0,sizeof(char*));
                            __result228__ = __result_obj__ = result_248;
                            return __result228__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result229__ = __result_obj__ = self->it->item;
                            return __result229__;
                        }
                        memset(&result_249,0,sizeof(char*));
                        __result230__ = __result_obj__ = result_249;
                        return __result230__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result231__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result231__ = self==((void*)0)||self->it==((void*)0);
                        return __result231__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional334;
char* result_251;
char* __result232__;
_Bool _if_conditional335;
char* __result233__;
char* result_252;
char* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_251, 0, sizeof(char*));
memset(&result_252, 0, sizeof(char*));
                        if(_if_conditional334=self==((void*)0)||self->it==((void*)0),                        _if_conditional334) {
                            memset(&result_251,0,sizeof(char*));
                            __result232__ = __result_obj__ = result_251;
                            return __result232__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result233__ = __result_obj__ = self->it->item;
                            return __result233__;
                        }
                        memset(&result_252,0,sizeof(char*));
                        __result234__ = __result_obj__ = result_252;
                        return __result234__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional338;
void* right_value314;
struct list_item$1charp* litem_253;
_Bool _if_conditional339;
void* right_value315;
struct list_item$1charp* litem_254;
void* right_value316;
struct list_item$1charp* litem_255;
struct list$1charp* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value314 = (void*)0;
memset(&litem_253, 0, sizeof(struct list_item$1charp*));
right_value315 = (void*)0;
memset(&litem_254, 0, sizeof(struct list_item$1charp*));
right_value316 = (void*)0;
memset(&litem_255, 0, sizeof(struct list_item$1charp*));
                            if(_if_conditional338=self->len==0,                            _if_conditional338) {
                                litem_253=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value314=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                                come_call_finalizer2(list_item$1charpp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_253->prev=((void*)0);
                                litem_253->next=((void*)0);
                                litem_253->item=item;
                                self->tail=litem_253;
                                self->head=litem_253;
                            }
                            else {
                                if(_if_conditional339=self->len==1,                                _if_conditional339) {
                                    litem_254=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value315=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                                    come_call_finalizer2(list_item$1charpp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_254->prev=self->head;
                                    litem_254->next=((void*)0);
                                    litem_254->item=item;
                                    self->tail=litem_254;
                                    self->head->next=litem_254;
                                }
                                else {
                                    litem_255=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value316=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                                    come_call_finalizer2(list_item$1charpp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_255->prev=self->tail;
                                    litem_255->next=((void*)0);
                                    litem_255->item=item;
                                    self->tail->next=litem_255;
                                    self->tail=litem_255;
                                }
                            }
                            self->len++;
                            __result235__ = __result_obj__ = self;
                            return __result235__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional341;
struct list_item$1charph* it_256;
int i_257;
_Bool _while_condtional26;
_Bool _if_conditional342;
char* __result237__;
char* default_value_258;
char* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_256, 0, sizeof(struct list_item$1charph*));
memset(&i_257, 0, sizeof(int));
memset(&default_value_258, 0, sizeof(char*));
                    if(_if_conditional341=position<0,                    _if_conditional341) {
                        position+=self->len;
                    }
                    it_256=self->head;
                    i_257=0;
                    while(_while_condtional26=it_256!=((void*)0),                    _while_condtional26) {
                        if(_if_conditional342=position==i_257,                        _if_conditional342) {
                            __result237__ = __result_obj__ = it_256->item;
                            return __result237__;
                        }
                        it_256=it_256->next;
                        i_257++;
                    }
                    memset(&default_value_258,0,sizeof(char*));
                    __result238__ = __result_obj__ = default_value_258;
                    default_value_258 = come_decrement_ref_count2(default_value_258, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result238__;
                    default_value_258 = come_decrement_ref_count2(default_value_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
struct CVALUE* default_value_261;
unsigned int hash_262;
unsigned int it_263;
_Bool _while_condtional27;
_Bool _if_conditional343;
_Bool _if_conditional344;
struct CVALUE* __result239__;
_Bool _if_conditional345;
_Bool _if_conditional346;
struct CVALUE* __result240__;
struct CVALUE* __result241__;
struct CVALUE* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_261, 0, sizeof(struct CVALUE*));
memset(&hash_262, 0, sizeof(unsigned int));
memset(&it_263, 0, sizeof(unsigned int));
                    memset(&default_value_261,0,sizeof(struct CVALUE*));
                    hash_262=string_get_hash_key(((char*)key))%self->size;
                    it_263=hash_262;
                    while(_while_condtional27=(_Bool)1,                    _while_condtional27) {
                        if(_if_conditional343=self->item_existance[it_263],                        _if_conditional343) {
                            if(_if_conditional344=string_equals(self->keys[it_263],key),                            _if_conditional344) {
                                __result239__ = __result_obj__ = self->items[it_263];
                                come_call_finalizer2(CVALUE_finalize,default_value_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result239__;
                            }
                            it_263++;
                            if(_if_conditional345=it_263>=self->size,                            _if_conditional345) {
                                it_263=0;
                            }
                            else {
                                if(_if_conditional346=it_263==hash_262,                                _if_conditional346) {
                                    __result240__ = __result_obj__ = default_value_261;
                                    come_call_finalizer2(CVALUE_finalize,default_value_261, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result240__;
                                }
                            }
                        }
                        else {
                            __result241__ = __result_obj__ = default_value_261;
                            come_call_finalizer2(CVALUE_finalize,default_value_261, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result241__;
                        }
                    }
                    __result242__ = __result_obj__ = default_value_261;
                    come_call_finalizer2(CVALUE_finalize,default_value_261, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result242__;
                    come_call_finalizer2(CVALUE_finalize,default_value_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
int __result245__;
memset(&__result_obj__, 0, sizeof(void*));
            __result245__ = self->len;
            return __result245__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional352;
int __result246__;
int __result247__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional352=self==((void*)0),                _if_conditional352) {
                    __result246__ = 0;
                    return __result246__;
                }
                __result247__ = self->len;
                return __result247__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional354;
_Bool _if_conditional355;
struct list$1CVALUEph* __result248__;
struct list_item$1CVALUEph* it_273;
int i_274;
_Bool _while_condtional28;
_Bool _if_conditional356;
struct CVALUE* __dec_obj119;
struct list$1CVALUEph* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_273, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_274, 0, sizeof(int));
                        if(_if_conditional354=position<0,                        _if_conditional354) {
                            position+=self->len;
                        }
                        if(_if_conditional355=position>=self->len,                        _if_conditional355) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result248__ = __result_obj__ = self;
                            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result248__;
                        }
                        it_273=self->head;
                        i_274=0;
                        while(_while_condtional28=it_273!=((void*)0),                        _while_condtional28) {
                            if(_if_conditional356=position==i_274,                            _if_conditional356) {
                                __dec_obj119=it_273->item;
                                it_273->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer2(CVALUE_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_273=it_273->next;
                            i_274++;
                        }
                        __result249__ = __result_obj__ = self;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result249__;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional357;
struct CVALUE* __result250__;
void* right_value328;
struct CVALUE* result_275;
_Bool _if_conditional358;
void* right_value329;
char* __dec_obj120;
_Bool _if_conditional359;
void* right_value330;
struct sType* __dec_obj121;
_Bool _if_conditional360;
struct CVALUE* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
memset(&result_275, 0, sizeof(struct CVALUE*));
right_value329 = (void*)0;
right_value330 = (void*)0;
                        if(_if_conditional357=self==(void*)0,                        _if_conditional357) {
                            __result250__ = __result_obj__ = (void*)0;
                            return __result250__;
                        }
                        result_275=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value328=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional358=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional358) {
                            __dec_obj120=result_275->c_value;
                            result_275->c_value=(char*)come_increment_ref_count(((char*)(right_value329=string_clone(self->c_value))));
                            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional359=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional359) {
                            __dec_obj121=result_275->type;
                            result_275->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_clone(self->type))));
                            come_call_finalizer2(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional360=self!=((void*)0),                        _if_conditional360) {
                            result_275->var=self->var;
                        }
                        __result251__ = __result_obj__ = result_275;
                        come_call_finalizer2(CVALUE_finalize,result_275, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result251__;
                        come_call_finalizer2(CVALUE_finalize,result_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value341;
struct sType* __dec_obj127;
void* right_value342;
struct sNode* __dec_obj128;
void* right_value343;
char* __dec_obj129;
struct sCastNode* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
    __dec_obj127=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj128=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=sNode_clone(left))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj129=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string(info->sname))));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result254__ = __result_obj__ = self;
    come_call_finalizer2(sCastNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result254__;
    come_call_finalizer2(sCastNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCastNode_sline(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
int __result255__;
memset(&__result_obj__, 0, sizeof(void*));
    __result255__ = self->sline;
    return __result255__;
}

char* sCastNode_sname(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value344;
char* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
right_value344 = (void*)0;
    __result256__ = __result_obj__ = ((char*)(right_value344=__builtin_string(self->sname)));
    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result256__;
}

_Bool sCastNode_terminated(){
void* __result_obj__;
_Bool __result257__;
memset(&__result_obj__, 0, sizeof(void*));
    __result257__ = (_Bool)0;
    return __result257__;
}

char* sCastNode_kind(){
void* __result_obj__;
void* right_value345;
char* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
    __result258__ = __result_obj__ = ((char*)(right_value345=__builtin_string("sCastNode")));
    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result258__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_281;
struct sNode* left_282;
_Bool _if_conditional370;
_Bool __result259__;
void* right_value346;
struct CVALUE* left_value_283;
void* right_value347;
void* right_value348;
struct sType* type2_284;
void* right_value349;
struct CVALUE* come_value_285;
void* right_value350;
void* right_value351;
char* __dec_obj130;
void* right_value352;
struct sType* __dec_obj131;
_Bool __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_281, 0, sizeof(struct sType*));
memset(&left_282, 0, sizeof(struct sNode*));
right_value346 = (void*)0;
memset(&left_value_283, 0, sizeof(struct CVALUE*));
right_value347 = (void*)0;
right_value348 = (void*)0;
memset(&type2_284, 0, sizeof(struct sType*));
right_value349 = (void*)0;
memset(&come_value_285, 0, sizeof(struct CVALUE*));
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
    type_281=self->mType;
    left_282=self->mLeft;
    if(_if_conditional370=!node_compile(left_282,info),    _if_conditional370) {
        __result259__ = (_Bool)0;
        return __result259__;
    }
    left_value_283=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value346=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type2_284=(struct sType*)come_increment_ref_count(((struct sType*)(right_value348=solve_generics(((struct sType*)(right_value347=sType_clone(type_281))),info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_285=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value349=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1556, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    cast_type(type2_284,left_value_283->type,left_value_283,info);
    __dec_obj130=come_value_285->c_value;
    come_value_285->c_value=(char*)come_increment_ref_count(((char*)(right_value351=xsprintf("(%s)%s",((char*)(right_value350=make_type_name_string(type2_284,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_283->c_value))));
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj131=come_value_285->type;
    come_value_285->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value352=sType_clone(type2_284))));
    come_call_finalizer2(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_285->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_285->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_285));
    __result260__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result260__;
    come_call_finalizer2(CVALUE_finalize,left_value_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value353;
struct sNode* __dec_obj132;
void* right_value354;
char* __dec_obj133;
struct sParenNode* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value353 = (void*)0;
right_value354 = (void*)0;
    __dec_obj132=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=sNode_clone(left))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj133=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string(info->sname))));
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result261__ = __result_obj__ = self;
    come_call_finalizer2(sParenNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result261__;
    come_call_finalizer2(sParenNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParenNode_sline(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
int __result262__;
memset(&__result_obj__, 0, sizeof(void*));
    __result262__ = self->sline;
    return __result262__;
}

char* sParenNode_sname(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value355;
char* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value355 = (void*)0;
    __result263__ = __result_obj__ = ((char*)(right_value355=__builtin_string(self->sname)));
    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result263__;
}

_Bool sParenNode_terminated(){
void* __result_obj__;
_Bool __result264__;
memset(&__result_obj__, 0, sizeof(void*));
    __result264__ = (_Bool)0;
    return __result264__;
}

char* sParenNode_kind(){
void* __result_obj__;
void* right_value356;
char* __result265__;
memset(&__result_obj__, 0, sizeof(void*));
right_value356 = (void*)0;
    __result265__ = __result_obj__ = ((char*)(right_value356=__builtin_string("sParenNode")));
    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result265__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_286;
_Bool _if_conditional373;
_Bool __result266__;
void* right_value357;
struct CVALUE* left_value_287;
void* right_value358;
struct CVALUE* come_value_288;
void* right_value359;
char* __dec_obj134;
void* right_value360;
struct sType* __dec_obj135;
_Bool __result267__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_286, 0, sizeof(struct sNode*));
right_value357 = (void*)0;
memset(&left_value_287, 0, sizeof(struct CVALUE*));
right_value358 = (void*)0;
memset(&come_value_288, 0, sizeof(struct CVALUE*));
right_value359 = (void*)0;
right_value360 = (void*)0;
    left_286=self->mLeft;
    if(_if_conditional373=!node_compile(left_286,info),    _if_conditional373) {
        __result266__ = (_Bool)0;
        return __result266__;
    }
    left_value_287=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value357=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_288=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value358=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1617, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj134=come_value_288->c_value;
    come_value_288->c_value=(char*)come_increment_ref_count(((char*)(right_value359=xsprintf("(%s)",left_value_287->c_value))));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj135=come_value_288->type;
    come_value_288->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value360=sType_clone(left_value_287->type))));
    come_call_finalizer2(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_288->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_288->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_288));
    __result267__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result267__;
    come_call_finalizer2(CVALUE_finalize,left_value_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value361;
void* right_value362;
struct list$1tuple2$2charphsNodephph* params_289;
_Bool _while_condtional29;
_Bool _if_conditional374;
char* p_290;
int sline_291;
_Bool err_flag_292;
void* right_value363;
char* label_293;
_Bool _if_conditional375;
void* right_value364;
char* __dec_obj136;
_Bool _if_conditional376;
char* __dec_obj137;
_Bool no_comma_294;
void* right_value365;
struct sNode* node_295;
void* right_value366;
struct sNode* __dec_obj138;
void* right_value370;
void* right_value371;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool guard_break_299;
_Bool _if_conditional381;
void* right_value372;
void* right_value373;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value378;
struct sNode* node_301;
struct sNode* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&params_289, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_290, 0, sizeof(char*));
memset(&sline_291, 0, sizeof(int));
memset(&err_flag_292, 0, sizeof(_Bool));
right_value363 = (void*)0;
memset(&label_293, 0, sizeof(char*));
right_value364 = (void*)0;
memset(&no_comma_294, 0, sizeof(_Bool));
right_value365 = (void*)0;
memset(&node_295, 0, sizeof(struct sNode*));
right_value366 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
memset(&guard_break_299, 0, sizeof(_Bool));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value378 = (void*)0;
memset(&node_301, 0, sizeof(struct sNode*));
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_289=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value362=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value361=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05function.c", 1636, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional29=(_Bool)1,    _while_condtional29) {
        if(_if_conditional374=*info->p==41,        _if_conditional374) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_290=info->p;
        sline_291=info->sline;
        err_flag_292=(_Bool)0;
        label_293=(char*)come_increment_ref_count(((char*)(right_value363=__builtin_string(""))));
        right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional375=xisalpha(*info->p)||*info->p==95,        _if_conditional375) {
            __dec_obj136=label_293;
            label_293=(char*)come_increment_ref_count(((char*)(right_value364=parse_word(info))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            err_flag_292=(_Bool)1;
        }
        if(_if_conditional376=err_flag_292==(_Bool)1&&*info->p==58,        _if_conditional376) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj137=label_293;
            label_293=((void*)0);
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_290;
            info->sline=sline_291;
        }
        no_comma_294=info->no_comma;
        info->no_comma=(_Bool)1;
        node_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=expression_v13(info))));
        if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj138=node_295;
        node_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_295),info))));
        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_294;
        list$1tuple2$2charphsNodephph_push_back(params_289,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value371=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value370=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05function.c", 1675, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_293),(struct sNode*)come_increment_ref_count(node_295))))));
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional379=*info->p==44,        _if_conditional379) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional380=*info->p==41,            _if_conditional380) {
                info->p++;
                skip_spaces_and_lf(info);
                label_293 = come_decrement_ref_count2(label_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_293 = come_decrement_ref_count2(label_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    guard_break_299=(_Bool)0;
    if(_if_conditional381=*info->p==63&&*(info->p+1)==63,    _if_conditional381) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_299=(_Bool)1;
    }
    parse_sharp_v5(info);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1700, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value373=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value372=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05function.c", 1700, "sFunCallNode")))),fun_name,params_289,guard_break_299,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sFunCallNode_sline;
    _inf_value1->sname=(void*)sFunCallNode_sname;
    _inf_value1->terminated=(void*)sFunCallNode_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=_inf_value1)));
    come_call_finalizer2(sFunCallNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunCallNode_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result272__ = __result_obj__ = node_301;
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result272__;
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional377;
void* right_value367;
struct list_item$1tuple2$2charphsNodephph* litem_296;
struct tuple2$2charphsNodeph* __dec_obj139;
_Bool _if_conditional378;
void* right_value368;
struct list_item$1tuple2$2charphsNodephph* litem_297;
struct tuple2$2charphsNodeph* __dec_obj140;
void* right_value369;
struct list_item$1tuple2$2charphsNodephph* litem_298;
struct tuple2$2charphsNodeph* __dec_obj141;
struct list$1tuple2$2charphsNodephph* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
right_value367 = (void*)0;
memset(&litem_296, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value368 = (void*)0;
memset(&litem_297, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value369 = (void*)0;
memset(&litem_298, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            if(_if_conditional377=self->len==0,            _if_conditional377) {
                litem_296=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value367=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_296->prev=((void*)0);
                litem_296->next=((void*)0);
                __dec_obj139=litem_296->item;
                litem_296->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_296;
                self->head=litem_296;
            }
            else {
                if(_if_conditional378=self->len==1,                _if_conditional378) {
                    litem_297=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value368=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_297->prev=self->head;
                    litem_297->next=((void*)0);
                    __dec_obj140=litem_297->item;
                    litem_297->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_297;
                    self->head->next=litem_297;
                }
                else {
                    litem_298=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value369=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_298->prev=self->tail;
                    litem_298->next=((void*)0);
                    __dec_obj141=litem_298->item;
                    litem_298->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_298;
                    self->tail=litem_298;
                }
            }
            self->len++;
            __result268__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result268__;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj142;
struct sNode* __dec_obj143;
struct tuple2$2charphsNodeph* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj142=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj143=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
            __result269__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result269__;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional382=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional382) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional383=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional383) {
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional384=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional384) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional385;
struct sFunCallNode* __result270__;
void* right_value374;
struct sFunCallNode* result_300;
_Bool _if_conditional386;
void* right_value375;
char* __dec_obj144;
_Bool _if_conditional387;
void* right_value376;
struct list$1tuple2$2charphsNodephph* __dec_obj145;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
void* right_value377;
char* __dec_obj146;
struct sFunCallNode* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
right_value374 = (void*)0;
memset(&result_300, 0, sizeof(struct sFunCallNode*));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
        if(_if_conditional385=self==(void*)0,        _if_conditional385) {
            __result270__ = __result_obj__ = (void*)0;
            return __result270__;
        }
        result_300=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value374=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"))));
        come_call_finalizer2(sFunCallNode_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional386=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional386) {
            __dec_obj144=result_300->fun_name;
            result_300->fun_name=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(self->fun_name))));
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional387=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional387) {
            __dec_obj145=result_300->params;
            result_300->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value376=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional388=self!=((void*)0),        _if_conditional388) {
            result_300->guard_break=self->guard_break;
        }
        if(_if_conditional389=self!=((void*)0),        _if_conditional389) {
            result_300->sline=self->sline;
        }
        if(_if_conditional390=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional390) {
            __dec_obj146=result_300->sname;
            result_300->sname=(char*)come_increment_ref_count(((char*)(right_value377=string_clone(self->sname))));
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result271__ = __result_obj__ = result_300;
        come_call_finalizer2(sFunCallNode_finalize,result_300, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result271__;
        come_call_finalizer2(sFunCallNode_finalize,result_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
    __result273__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result273__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj147;
void* right_value379;
char* __dec_obj148;
struct sLogicalDenial* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
right_value379 = (void*)0;
    __dec_obj147=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj148=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value379=__builtin_string(info->sname))));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result274__ = __result_obj__ = self;
    come_call_finalizer2(sLogicalDenial_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result274__;
    come_call_finalizer2(sLogicalDenial_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLogicalDenial_terminated(){
void* __result_obj__;
_Bool __result275__;
memset(&__result_obj__, 0, sizeof(void*));
    __result275__ = (_Bool)0;
    return __result275__;
}

char* sLogicalDenial_kind(){
void* __result_obj__;
void* right_value380;
char* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
right_value380 = (void*)0;
    __result276__ = __result_obj__ = ((char*)(right_value380=__builtin_string("sLogicalDenial")));
    right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result276__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional393;
_Bool __result277__;
void* right_value381;
struct CVALUE* come_value_302;
void* right_value382;
struct CVALUE* come_value2_303;
void* right_value383;
char* __dec_obj149;
void* right_value384;
struct sType* __dec_obj150;
_Bool __result278__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&come_value_302, 0, sizeof(struct CVALUE*));
right_value382 = (void*)0;
memset(&come_value2_303, 0, sizeof(struct CVALUE*));
right_value383 = (void*)0;
right_value384 = (void*)0;
    if(_if_conditional393=!node_compile(self->value,info),    _if_conditional393) {
        __result277__ = (_Bool)0;
        return __result277__;
    }
    come_value_302=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value381=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_303=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value382=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1753, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj149=come_value2_303->c_value;
    come_value2_303->c_value=(char*)come_increment_ref_count(((char*)(right_value383=xsprintf("!%s",come_value_302->c_value))));
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj150=come_value2_303->type;
    come_value2_303->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value384=sType_clone(come_value_302->type))));
    come_call_finalizer2(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_303->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_303));
    add_come_last_code(info,"%s;\n",come_value2_303->c_value);
    __result278__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result278__;
    come_call_finalizer2(CVALUE_finalize,come_value_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLogicalDenial_sline(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
int __result279__;
memset(&__result_obj__, 0, sizeof(void*));
    __result279__ = self->sline;
    return __result279__;
}

char* sLogicalDenial_sname(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
void* right_value385;
char* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
right_value385 = (void*)0;
    __result280__ = __result_obj__ = ((char*)(right_value385=__builtin_string(self->sname)));
    right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result280__;
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj151;
void* right_value386;
char* __dec_obj152;
struct sMinusNode2* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
right_value386 = (void*)0;
    __dec_obj151=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj152=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value386=__builtin_string(info->sname))));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result281__ = __result_obj__ = self;
    come_call_finalizer2(sMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result281__;
    come_call_finalizer2(sMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusNode2_terminated(){
void* __result_obj__;
_Bool __result282__;
memset(&__result_obj__, 0, sizeof(void*));
    __result282__ = (_Bool)0;
    return __result282__;
}

char* sMinusNode2_kind(){
void* __result_obj__;
void* right_value387;
char* __result283__;
memset(&__result_obj__, 0, sizeof(void*));
right_value387 = (void*)0;
    __result283__ = __result_obj__ = ((char*)(right_value387=__builtin_string("sMinusNode2")));
    right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result283__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional396;
_Bool __result284__;
void* right_value388;
struct CVALUE* come_value_304;
void* right_value389;
struct CVALUE* come_value2_305;
void* right_value390;
char* __dec_obj153;
void* right_value391;
struct sType* __dec_obj154;
_Bool __result285__;
memset(&__result_obj__, 0, sizeof(void*));
right_value388 = (void*)0;
memset(&come_value_304, 0, sizeof(struct CVALUE*));
right_value389 = (void*)0;
memset(&come_value2_305, 0, sizeof(struct CVALUE*));
right_value390 = (void*)0;
right_value391 = (void*)0;
    if(_if_conditional396=!node_compile(self->value,info),    _if_conditional396) {
        __result284__ = (_Bool)0;
        return __result284__;
    }
    come_value_304=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value388=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_305=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value389=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1812, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj153=come_value2_305->c_value;
    come_value2_305->c_value=(char*)come_increment_ref_count(((char*)(right_value390=xsprintf("-%s",come_value_304->c_value))));
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj154=come_value2_305->type;
    come_value2_305->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value391=sType_clone(come_value_304->type))));
    come_call_finalizer2(sType_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_305->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_305));
    add_come_last_code(info,"%s;\n",come_value2_305->c_value);
    __result285__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result285__;
    come_call_finalizer2(CVALUE_finalize,come_value_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusNode2_sline(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result286__;
memset(&__result_obj__, 0, sizeof(void*));
    __result286__ = self->sline;
    return __result286__;
}

char* sMinusNode2_sname(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value392;
char* __result287__;
memset(&__result_obj__, 0, sizeof(void*));
right_value392 = (void*)0;
    __result287__ = __result_obj__ = ((char*)(right_value392=__builtin_string(self->sname)));
    right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result287__;
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj155;
void* right_value393;
char* __dec_obj156;
struct sPlusPlusNode2* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
right_value393 = (void*)0;
    __dec_obj155=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj156=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value393=__builtin_string(info->sname))));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result288__ = __result_obj__ = self;
    come_call_finalizer2(sPlusPlusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result288__;
    come_call_finalizer2(sPlusPlusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusPlusNode2_terminated(){
void* __result_obj__;
_Bool __result289__;
memset(&__result_obj__, 0, sizeof(void*));
    __result289__ = (_Bool)0;
    return __result289__;
}

char* sPlusPlusNode2_kind(){
void* __result_obj__;
void* right_value394;
char* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
right_value394 = (void*)0;
    __result290__ = __result_obj__ = ((char*)(right_value394=__builtin_string("sPlusPlusNode2")));
    right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result290__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional399;
_Bool __result291__;
void* right_value395;
struct CVALUE* come_value_306;
void* right_value396;
struct CVALUE* come_value2_307;
void* right_value397;
char* __dec_obj157;
void* right_value398;
struct sType* __dec_obj158;
_Bool __result292__;
memset(&__result_obj__, 0, sizeof(void*));
right_value395 = (void*)0;
memset(&come_value_306, 0, sizeof(struct CVALUE*));
right_value396 = (void*)0;
memset(&come_value2_307, 0, sizeof(struct CVALUE*));
right_value397 = (void*)0;
right_value398 = (void*)0;
    if(_if_conditional399=!node_compile(self->value,info),    _if_conditional399) {
        __result291__ = (_Bool)0;
        return __result291__;
    }
    come_value_306=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value395=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_307=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value396=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1871, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj157=come_value2_307->c_value;
    come_value2_307->c_value=(char*)come_increment_ref_count(((char*)(right_value397=xsprintf("++%s",come_value_306->c_value))));
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj158=come_value2_307->type;
    come_value2_307->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value398=sType_clone(come_value_306->type))));
    come_call_finalizer2(sType_finalize,__dec_obj158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_307->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_307));
    add_come_last_code(info,"%s;\n",come_value2_307->c_value);
    __result292__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result292__;
    come_call_finalizer2(CVALUE_finalize,come_value_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sPlusPlusNode2_sline(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result293__;
memset(&__result_obj__, 0, sizeof(void*));
    __result293__ = self->sline;
    return __result293__;
}

char* sPlusPlusNode2_sname(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value399;
char* __result294__;
memset(&__result_obj__, 0, sizeof(void*));
right_value399 = (void*)0;
    __result294__ = __result_obj__ = ((char*)(right_value399=__builtin_string(self->sname)));
    right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result294__;
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj159;
void* right_value400;
char* __dec_obj160;
struct sMinusMinusNode2* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
right_value400 = (void*)0;
    __dec_obj159=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj160=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value400=__builtin_string(info->sname))));
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result295__ = __result_obj__ = self;
    come_call_finalizer2(sMinusMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result295__;
    come_call_finalizer2(sMinusMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusMinusNode2_terminated(){
void* __result_obj__;
_Bool __result296__;
memset(&__result_obj__, 0, sizeof(void*));
    __result296__ = (_Bool)0;
    return __result296__;
}

char* sMinusMinusNode2_kind(){
void* __result_obj__;
void* right_value401;
char* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
right_value401 = (void*)0;
    __result297__ = __result_obj__ = ((char*)(right_value401=__builtin_string("sMinusMinusNode2")));
    right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result297__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional402;
_Bool __result298__;
void* right_value402;
struct CVALUE* come_value_308;
void* right_value403;
struct CVALUE* come_value2_309;
void* right_value404;
char* __dec_obj161;
void* right_value405;
struct sType* __dec_obj162;
_Bool __result299__;
memset(&__result_obj__, 0, sizeof(void*));
right_value402 = (void*)0;
memset(&come_value_308, 0, sizeof(struct CVALUE*));
right_value403 = (void*)0;
memset(&come_value2_309, 0, sizeof(struct CVALUE*));
right_value404 = (void*)0;
right_value405 = (void*)0;
    if(_if_conditional402=!node_compile(self->value,info),    _if_conditional402) {
        __result298__ = (_Bool)0;
        return __result298__;
    }
    come_value_308=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value402=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_309=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value403=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1930, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj161=come_value2_309->c_value;
    come_value2_309->c_value=(char*)come_increment_ref_count(((char*)(right_value404=xsprintf("--%s",come_value_308->c_value))));
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj162=come_value2_309->type;
    come_value2_309->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value405=sType_clone(come_value_308->type))));
    come_call_finalizer2(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_309->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_309));
    add_come_last_code(info,"%s;\n",come_value2_309->c_value);
    __result299__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result299__;
    come_call_finalizer2(CVALUE_finalize,come_value_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusMinusNode2_sline(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result300__;
memset(&__result_obj__, 0, sizeof(void*));
    __result300__ = self->sline;
    return __result300__;
}

char* sMinusMinusNode2_sname(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value406;
char* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value406 = (void*)0;
    __result301__ = __result_obj__ = ((char*)(right_value406=__builtin_string(self->sname)));
    right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result301__;
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj163;
void* right_value407;
char* __dec_obj164;
struct sComplement* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
right_value407 = (void*)0;
    __dec_obj163=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj164=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value407=__builtin_string(info->sname))));
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result302__ = __result_obj__ = self;
    come_call_finalizer2(sComplement_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result302__;
    come_call_finalizer2(sComplement_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sComplement_terminated(){
void* __result_obj__;
_Bool __result303__;
memset(&__result_obj__, 0, sizeof(void*));
    __result303__ = (_Bool)0;
    return __result303__;
}

char* sComplement_kind(){
void* __result_obj__;
void* right_value408;
char* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value408 = (void*)0;
    __result304__ = __result_obj__ = ((char*)(right_value408=__builtin_string("sComplement")));
    right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result304__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional405;
_Bool __result305__;
void* right_value409;
struct CVALUE* come_value_310;
void* right_value410;
struct CVALUE* come_value2_311;
void* right_value411;
char* __dec_obj165;
void* right_value412;
struct sType* __dec_obj166;
_Bool __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value409 = (void*)0;
memset(&come_value_310, 0, sizeof(struct CVALUE*));
right_value410 = (void*)0;
memset(&come_value2_311, 0, sizeof(struct CVALUE*));
right_value411 = (void*)0;
right_value412 = (void*)0;
    if(_if_conditional405=!node_compile(self->value,info),    _if_conditional405) {
        __result305__ = (_Bool)0;
        return __result305__;
    }
    come_value_310=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value409=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_311=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value410=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1989, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj165=come_value2_311->c_value;
    come_value2_311->c_value=(char*)come_increment_ref_count(((char*)(right_value411=xsprintf("~%s",come_value_310->c_value))));
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj166=come_value2_311->type;
    come_value2_311->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value412=sType_clone(come_value_310->type))));
    come_call_finalizer2(sType_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_311->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_311));
    add_come_last_code(info,"%s;\n",come_value2_311->c_value);
    __result306__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result306__;
    come_call_finalizer2(CVALUE_finalize,come_value_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sComplement_sline(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
int __result307__;
memset(&__result_obj__, 0, sizeof(void*));
    __result307__ = self->sline;
    return __result307__;
}

char* sComplement_sname(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
void* right_value413;
char* __result308__;
memset(&__result_obj__, 0, sizeof(void*));
right_value413 = (void*)0;
    __result308__ = __result_obj__ = ((char*)(right_value413=__builtin_string(self->sname)));
    right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result308__;
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value414;
char* __dec_obj167;
void* right_value432;
struct sBlock* __dec_obj173;
struct sNormalBlock* __result328__;
memset(&__result_obj__, 0, sizeof(void*));
right_value414 = (void*)0;
right_value432 = (void*)0;
    self->sline=info->sline;
    __dec_obj167=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value414=__builtin_string(info->sname))));
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj173=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value432=sBlock_clone(block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result328__ = __result_obj__ = self;
    come_call_finalizer2(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result328__;
    come_call_finalizer2(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional406;
struct sBlock* __result309__;
void* right_value415;
struct sBlock* result_312;
_Bool _if_conditional407;
void* right_value416;
struct list$1sNodeph* __dec_obj168;
_Bool _if_conditional408;
void* right_value431;
struct sVarTable* __dec_obj172;
struct sBlock* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
right_value415 = (void*)0;
memset(&result_312, 0, sizeof(struct sBlock*));
right_value416 = (void*)0;
right_value431 = (void*)0;
        if(_if_conditional406=self==(void*)0,        _if_conditional406) {
            __result309__ = __result_obj__ = (void*)0;
            return __result309__;
        }
        result_312=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value415=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional407=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional407) {
            __dec_obj168=result_312->mNodes;
            result_312->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value416=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional408=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional408) {
            __dec_obj172=result_312->mVarTable;
            result_312->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value431=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result327__ = __result_obj__ = result_312;
        come_call_finalizer2(sBlock_finalize,result_312, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result327__;
        come_call_finalizer2(sBlock_finalize,result_312, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional409;
struct sVarTable* __result310__;
void* right_value417;
struct sVarTable* result_313;
_Bool _if_conditional410;
void* right_value430;
struct map$2charphsVarph* __dec_obj171;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
struct sVarTable* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value417 = (void*)0;
memset(&result_313, 0, sizeof(struct sVarTable*));
right_value430 = (void*)0;
                if(_if_conditional409=self==(void*)0,                _if_conditional409) {
                    __result310__ = __result_obj__ = (void*)0;
                    return __result310__;
                }
                result_313=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value417=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional410=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional410) {
                    __dec_obj171=result_313->mVars;
                    result_313->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value430=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional443=self!=((void*)0),                _if_conditional443) {
                    result_313->mGlobal=self->mGlobal;
                }
                if(_if_conditional444=self!=((void*)0),                _if_conditional444) {
                    result_313->mParent=self->mParent;
                }
                if(_if_conditional445=self!=((void*)0),                _if_conditional445) {
                    result_313->mID=self->mID;
                }
                __result326__ = __result_obj__ = result_313;
                come_call_finalizer2(sVarTable_finalize,result_313, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result326__;
                come_call_finalizer2(sVarTable_finalize,result_313, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional411;
struct map$2charphsVarph* __result311__;
void* right_value418;
void* right_value424;
struct map$2charphsVarph* result_317;
void* right_value425;
void* right_value426;
struct list$1charp* __dec_obj170;
char* it_320;
struct sVar* default_value_323;
struct sVar* it2_326;
struct map$2charphsVarph* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
right_value418 = (void*)0;
right_value424 = (void*)0;
memset(&result_317, 0, sizeof(struct map$2charphsVarph*));
right_value425 = (void*)0;
right_value426 = (void*)0;
memset(&it_320, 0, sizeof(char*));
memset(&default_value_323, 0, sizeof(struct sVar*));
memset(&it2_326, 0, sizeof(struct sVar*));
                        if(_if_conditional411=self==((void*)0),                        _if_conditional411) {
                            __result311__ = __result_obj__ = ((void*)0);
                            return __result311__;
                        }
                        result_317=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value424=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value418=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1181, "map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj170=result_317->key_list;
                        result_317->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value426=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value425=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1183, "list$1charp"))))))));
                        come_call_finalizer2(list$1charp_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charpp_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charpp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(                        it_320=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_320=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_323,0,sizeof(struct sVar*));
                            it2_326=map$2charphsVarph_at(self,it_320,default_value_323);
                            map$2charphsVarph_insert2(result_317,it_320,it2_326);
                        }
                        __result325__ = __result_obj__ = result_317;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_317, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result325__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_317, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value419;
void* right_value420;
void* right_value421;
int i_314;
void* right_value422;
void* right_value423;
struct list$1charp* __dec_obj169;
struct map$2charphsVarph* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&i_314, 0, sizeof(int));
right_value422 = (void*)0;
right_value423 = (void*)0;
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value419=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1087, "char*%"))));
                            right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value420=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1088, "sVar*%"))));
                            come_call_finalizer2(sVar_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value421=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1089, "bool"))));
                            right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_314=0;                            i_314<1024;                            i_314++                            ){
                                self->item_existance[i_314]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj169=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value423=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value422=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1099, "list$1charp"))))))));
                            come_call_finalizer2(list$1charp_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charpp_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charpp_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->it=0;
                            __result312__ = __result_obj__ = self;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result312__;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional412=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional412) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional413=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional413) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional414=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional414) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional415=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional415) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_315;
_Bool _if_conditional416;
_Bool _if_conditional417;
int i_316;
_Bool _if_conditional418;
_Bool _if_conditional419;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_315, 0, sizeof(int));
memset(&i_316, 0, sizeof(int));
                                for(                                i_315=0;                                i_315<self->size;                                i_315++                                ){
                                    if(_if_conditional416=self->item_existance[i_315],                                    _if_conditional416) {
                                        if(_if_conditional417=1,                                        _if_conditional417) {
                                            come_call_finalizer2(sVar_finalize,self->items[i_315], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(                                i_316=0;                                i_316<self->size;                                i_316++                                ){
                                    if(_if_conditional418=self->item_existance[i_316],                                    _if_conditional418) {
                                        if(_if_conditional419=1,                                        _if_conditional419) {
                                            self->keys[i_316] = come_decrement_ref_count2(self->keys[i_316], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->keys);
                                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional420;
char* result_318;
char* __result313__;
_Bool _if_conditional421;
char* __result314__;
char* result_319;
char* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_318, 0, sizeof(char*));
memset(&result_319, 0, sizeof(char*));
                            if(_if_conditional420=self==((void*)0),                            _if_conditional420) {
                                memset(&result_318,0,sizeof(char*));
                                __result313__ = __result_obj__ = result_318;
                                return __result313__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result314__ = __result_obj__ = self->key_list->it->item;
                                return __result314__;
                            }
                            memset(&result_319,0,sizeof(char*));
                            __result315__ = __result_obj__ = result_319;
                            return __result315__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result316__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result316__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result316__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional422;
char* result_321;
char* __result317__;
_Bool _if_conditional423;
char* __result318__;
char* result_322;
char* __result319__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_321, 0, sizeof(char*));
memset(&result_322, 0, sizeof(char*));
                            if(_if_conditional422=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional422) {
                                memset(&result_321,0,sizeof(char*));
                                __result317__ = __result_obj__ = result_321;
                                return __result317__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result318__ = __result_obj__ = self->key_list->it->item;
                                return __result318__;
                            }
                            memset(&result_322,0,sizeof(char*));
                            __result319__ = __result_obj__ = result_322;
                            return __result319__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_324;
unsigned int it_325;
_Bool _while_condtional30;
_Bool _if_conditional424;
_Bool _if_conditional425;
struct sVar* __result320__;
_Bool _if_conditional426;
_Bool _if_conditional427;
struct sVar* __result321__;
struct sVar* __result322__;
struct sVar* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_324, 0, sizeof(unsigned int));
memset(&it_325, 0, sizeof(unsigned int));
                                hash_324=string_get_hash_key(((char*)key))%self->size;
                                it_325=hash_324;
                                while(_while_condtional30=(_Bool)1,                                _while_condtional30) {
                                    if(_if_conditional424=self->item_existance[it_325],                                    _if_conditional424) {
                                        if(_if_conditional425=string_equals(self->keys[it_325],key),                                        _if_conditional425) {
                                            __result320__ = __result_obj__ = self->items[it_325];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result320__;
                                        }
                                        it_325++;
                                        if(_if_conditional426=it_325>=self->size,                                        _if_conditional426) {
                                            it_325=0;
                                        }
                                        else {
                                            if(_if_conditional427=it_325==hash_324,                                            _if_conditional427) {
                                                __result321__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result321__;
                                            }
                                        }
                                    }
                                    else {
                                        __result322__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result322__;
                                    }
                                }
                                __result323__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result323__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional428;
unsigned int hash_338;
int it_339;
_Bool _while_condtional32;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool same_key_exist_340;
char* it2_341;
_Bool _if_conditional440;
_Bool _if_conditional441;
struct map$2charphsVarph* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_338, 0, sizeof(unsigned int));
memset(&it_339, 0, sizeof(int));
memset(&same_key_exist_340, 0, sizeof(_Bool));
memset(&it2_341, 0, sizeof(char*));
                                if(_if_conditional428=self->len*2>=self->size,                                _if_conditional428) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_338=string_get_hash_key(key)%self->size;
                                it_339=hash_338;
                                while(_while_condtional32=(_Bool)1,                                _while_condtional32) {
                                    if(_if_conditional432=self->item_existance[it_339],                                    _if_conditional432) {
                                        if(_if_conditional433=string_equals(self->keys[it_339],key),                                        _if_conditional433) {
                                            if(_if_conditional434=1,                                            _if_conditional434) {
                                                self->keys[it_339] = come_decrement_ref_count2(self->keys[it_339], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_339]);
                                                self->keys[it_339]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_339]);
                                                self->keys[it_339]=key;
                                            }
                                            if(_if_conditional435=1,                                            _if_conditional435) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_339], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->items[it_339]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_339]=item;
                                            }
                                            break;
                                        }
                                        it_339++;
                                        if(_if_conditional436=it_339>=self->size,                                        _if_conditional436) {
                                            it_339=0;
                                        }
                                        else {
                                            if(_if_conditional437=it_339==hash_338,                                            _if_conditional437) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_339]=(_Bool)1;
                                        if(_if_conditional438=1,                                        _if_conditional438) {
                                            self->keys[it_339]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_339]=key;
                                        }
                                        if(_if_conditional439=1,                                        _if_conditional439) {
                                            self->items[it_339]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_339]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_340=(_Bool)0;
                                for(                                it2_341=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_341=list$1charp_next(self->key_list)                                ){
                                    if(_if_conditional440=string_equals(it2_341,key),                                    _if_conditional440) {
                                        same_key_exist_340=(_Bool)1;
                                    }
                                }
                                if(_if_conditional441=!same_key_exist_340,                                _if_conditional441) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result324__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result324__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_327;
void* right_value427;
char** keys_328;
void* right_value428;
struct sVar** items_329;
void* right_value429;
_Bool* item_existance_330;
int len_331;
char* it_332;
struct sVar* default_value_333;
struct sVar* it2_334;
unsigned int hash_335;
int n_336;
_Bool _while_condtional31;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
struct sVar* default_value_337;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_327, 0, sizeof(int));
right_value427 = (void*)0;
memset(&keys_328, 0, sizeof(char**));
right_value428 = (void*)0;
memset(&items_329, 0, sizeof(struct sVar**));
right_value429 = (void*)0;
memset(&item_existance_330, 0, sizeof(_Bool*));
memset(&len_331, 0, sizeof(int));
memset(&it_332, 0, sizeof(char*));
memset(&default_value_333, 0, sizeof(struct sVar*));
memset(&it2_334, 0, sizeof(struct sVar*));
memset(&hash_335, 0, sizeof(unsigned int));
memset(&n_336, 0, sizeof(int));
memset(&default_value_337, 0, sizeof(struct sVar*));
                                        size_327=self->size*10;
                                        keys_328=(char**)come_increment_ref_count(((char**)(right_value427=(char**)come_calloc(1, sizeof(char*)*(1*(size_327)), "./comelang2.h", 1338, "char*%"))));
                                        right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_329=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value428=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_327)), "./comelang2.h", 1339, "sVar*%"))));
                                        come_call_finalizer2(sVar_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_330=(_Bool*)come_increment_ref_count(((_Bool*)(right_value429=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_327)), "./comelang2.h", 1340, "bool"))));
                                        right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_331=0;
                                        for(                                        it_332=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_332=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_333,0,sizeof(struct sVar*));
                                            it2_334=map$2charphsVarph_at(self,it_332,default_value_333);
                                            hash_335=string_get_hash_key(it_332)%size_327;
                                            n_336=hash_335;
                                            while(_while_condtional31=(_Bool)1,                                            _while_condtional31) {
                                                if(_if_conditional429=item_existance_330[n_336],                                                _if_conditional429) {
                                                    n_336++;
                                                    if(_if_conditional430=n_336>=size_327,                                                    _if_conditional430) {
                                                        n_336=0;
                                                    }
                                                    else {
                                                        if(_if_conditional431=n_336==hash_335,                                                        _if_conditional431) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_330[n_336]=(_Bool)1;
                                                    keys_328[n_336]=it_332;
                                                    items_329[n_336]=map$2charphsVarph_at(self,it_332,default_value_337);
                                                    len_331++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_free((char*)self->keys);
                                        self->keys=keys_328;
                                        self->items=items_329;
                                        self->item_existance=item_existance_330;
                                        self->size=size_327;
                                        self->len=len_331;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional442;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional442=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional442) {
                            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

_Bool sNormalBlock_terminated(){
void* __result_obj__;
_Bool __result329__;
memset(&__result_obj__, 0, sizeof(void*));
    __result329__ = (_Bool)1;
    return __result329__;
}

char* sNormalBlock_kind(){
void* __result_obj__;
void* right_value433;
char* __result330__;
memset(&__result_obj__, 0, sizeof(void*));
right_value433 = (void*)0;
    __result330__ = __result_obj__ = ((char*)(right_value433=__builtin_string("sNormalBlock")));
    right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result330__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* block_342;
_Bool __result331__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&block_342, 0, sizeof(struct sBlock*));
    block_342=self->mBlock;
    add_come_code(info,"{\n");
    transpile_block(block_342,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result331__ = (_Bool)1;
    return __result331__;
}

int sNormalBlock_sline(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
int __result332__;
memset(&__result_obj__, 0, sizeof(void*));
    __result332__ = self->sline;
    return __result332__;
}

char* sNormalBlock_sname(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value434;
char* __result333__;
memset(&__result_obj__, 0, sizeof(void*));
right_value434 = (void*)0;
    __result333__ = __result_obj__ = ((char*)(right_value434=__builtin_string(self->sname)));
    right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result333__;
}

struct sNode* parse_normal_block(struct sInfo* info){
void* __result_obj__;
void* right_value435;
struct sBlock* block_343;
void* right_value436;
void* right_value437;
struct sNode* _inf_value2;
struct sNormalBlock* _inf_obj_value2;
void* right_value441;
struct sNode* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
right_value435 = (void*)0;
memset(&block_343, 0, sizeof(struct sBlock*));
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value441 = (void*)0;
    block_343=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value435=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2070, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sNormalBlock*)(right_value437=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value436=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05function.c", 2070, "sNormalBlock")))),block_343,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNormalBlock_finalize;
    _inf_value2->clone=(void*)sNormalBlock_clone;
    _inf_value2->compile=(void*)sNormalBlock_compile;
    _inf_value2->sline=(void*)sNormalBlock_sline;
    _inf_value2->sname=(void*)sNormalBlock_sname;
    _inf_value2->terminated=(void*)sNormalBlock_terminated;
    _inf_value2->kind=(void*)sNormalBlock_kind;
    __result336__ = __result_obj__ = ((struct sNode*)(right_value441=_inf_value2));
    come_call_finalizer2(sBlock_finalize,block_343, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sNormalBlock_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNormalBlock_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result336__;
    come_call_finalizer2(sBlock_finalize,block_343, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional448;
_Bool _if_conditional449;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional448=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional448) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional449=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional449) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional450;
struct sNormalBlock* __result334__;
void* right_value438;
struct sNormalBlock* result_344;
_Bool _if_conditional451;
void* right_value439;
struct sBlock* __dec_obj174;
_Bool _if_conditional452;
_Bool _if_conditional453;
void* right_value440;
char* __dec_obj175;
struct sNormalBlock* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
right_value438 = (void*)0;
memset(&result_344, 0, sizeof(struct sNormalBlock*));
right_value439 = (void*)0;
right_value440 = (void*)0;
        if(_if_conditional450=self==(void*)0,        _if_conditional450) {
            __result334__ = __result_obj__ = (void*)0;
            return __result334__;
        }
        result_344=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value438=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "sNormalBlock"))));
        come_call_finalizer2(sNormalBlock_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional451=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional451) {
            __dec_obj174=result_344->mBlock;
            result_344->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value439=sBlock_clone(self->mBlock))));
            come_call_finalizer2(sBlock_finalize,__dec_obj174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional452=self!=((void*)0),        _if_conditional452) {
            result_344->sline=self->sline;
        }
        if(_if_conditional453=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional453) {
            __dec_obj175=result_344->sname;
            result_344->sname=(char*)come_increment_ref_count(((char*)(right_value440=string_clone(self->sname))));
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result335__ = __result_obj__ = result_344;
        come_call_finalizer2(sNormalBlock_finalize,result_344, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result335__;
        come_call_finalizer2(sNormalBlock_finalize,result_344, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void backtrace_parse_type(struct sInfo* info){
void* __result_obj__;
void* right_value442;
memset(&__result_obj__, 0, sizeof(void*));
right_value442 = (void*)0;
    info->no_output_err=(_Bool)1;
    ((struct tuple3$3sTypephcharphbool*)(right_value442=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional454;
_Bool _if_conditional455;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional454=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional454) {
            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional455=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional455) {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value443;
void* right_value444;
void* right_value445;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* right_value449;
struct sNode* __result339__;
memset(&__result_obj__, 0, sizeof(void*));
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value449 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2082, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sLogicalDenial*)(right_value445=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value443=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05function.c", 2082, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=sNode_clone(node)))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sLogicalDenial_finalize;
    _inf_value3->clone=(void*)sLogicalDenial_clone;
    _inf_value3->compile=(void*)sLogicalDenial_compile;
    _inf_value3->sline=(void*)sLogicalDenial_sline;
    _inf_value3->sname=(void*)sLogicalDenial_sname;
    _inf_value3->terminated=(void*)sLogicalDenial_terminated;
    _inf_value3->kind=(void*)sLogicalDenial_kind;
    __result339__ = __result_obj__ = ((struct sNode*)(right_value449=_inf_value3));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sLogicalDenial_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(sLogicalDenial_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value449) { right_value449 = come_decrement_ref_count2(right_value449, ((struct sNode*)right_value449)->finalize, ((struct sNode*)right_value449)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result339__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* expression_node_v99(struct sInfo* info){
void* __result_obj__;
_Bool refference_346;
char* p_347;
int sline_348;
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _while_condtional33;
_Bool _if_conditional465;
_Bool _if_conditional466;
void* right_value450;
struct sNode* __result340__;
_Bool _if_conditional467;
void* right_value451;
struct sNode* node_349;
void* right_value452;
void* right_value453;
struct sNode* _inf_value4;
struct sLogicalDenial* _inf_obj_value4;
void* right_value457;
struct sNode* __result343__;
_Bool _if_conditional474;
void* right_value458;
struct sNode* node_351;
void* right_value459;
void* right_value460;
struct sNode* _inf_value5;
struct sMinusMinusNode2* _inf_obj_value5;
void* right_value464;
struct sNode* __result346__;
_Bool _if_conditional481;
void* right_value465;
struct sNode* node_353;
void* right_value466;
void* right_value467;
struct sNode* _inf_value6;
struct sMinusNode2* _inf_obj_value6;
void* right_value471;
struct sNode* __result349__;
_Bool _if_conditional488;
void* right_value472;
struct sNode* node_355;
void* right_value473;
void* right_value474;
struct sNode* _inf_value7;
struct sPlusPlusNode2* _inf_obj_value7;
void* right_value478;
struct sNode* __result352__;
_Bool _if_conditional495;
void* right_value479;
struct sNode* node_357;
void* right_value480;
void* right_value481;
struct sNode* _inf_value8;
struct sComplement* _inf_obj_value8;
void* right_value485;
struct sNode* __result355__;
_Bool _if_conditional502;
void* right_value486;
struct sNode* node_359;
void* right_value487;
struct sNode* __dec_obj188;
struct sNode* __result356__;
_Bool _if_conditional503;
void* right_value488;
struct sNode* node_360;
void* right_value489;
struct sNode* __dec_obj189;
struct sNode* __result357__;
_Bool _if_conditional504;
void* right_value490;
struct sNode* node_361;
void* right_value491;
struct sNode* __dec_obj190;
struct sNode* __result358__;
_Bool _if_conditional505;
void* right_value492;
struct sNode* node_362;
void* right_value493;
struct sNode* __dec_obj191;
struct sNode* __result359__;
_Bool _if_conditional506;
_Bool _if_conditional507;
void* right_value494;
void* right_value495;
void* right_value496;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* right_value501;
struct sNode* __result362__;
char* head_364;
void* right_value502;
struct sNode* value_365;
char* tail_366;
void* right_value503;
struct sNode* __dec_obj195;
void* right_value504;
struct sNode* __dec_obj196;
void* right_value505;
void* right_value506;
void* right_value507;
struct sNode* _inf_value10;
struct sReturnNode* _inf_obj_value10;
void* right_value512;
struct sNode* __result365__;
_Bool _if_conditional524;
_Bool _if_conditional525;
void* right_value513;
void* right_value514;
void* right_value515;
struct sNode* _inf_value11;
struct sParentReturnNode* _inf_obj_value11;
void* right_value520;
struct sNode* __result368__;
char* head_370;
void* right_value521;
struct sNode* value_371;
char* tail_372;
void* right_value522;
struct sNode* __dec_obj203;
void* right_value523;
struct sNode* __dec_obj204;
void* right_value524;
void* right_value525;
void* right_value526;
struct sNode* _inf_value12;
struct sParentReturnNode* _inf_obj_value12;
void* right_value531;
struct sNode* __result371__;
_Bool _if_conditional542;
void* right_value532;
void* right_value533;
struct sNode* _inf_value13;
struct sParentBreakNode* _inf_obj_value13;
void* right_value536;
struct sNode* __result374__;
_Bool _if_conditional547;
void* right_value537;
void* right_value538;
struct sNode* _inf_value14;
struct sParentContinueNode* _inf_obj_value14;
void* right_value541;
struct sNode* __result377__;
_Bool _if_conditional552;
_Bool quote_377;
_Bool _if_conditional553;
_Bool no_assign_378;
void* right_value542;
struct sNode* value_379;
void* right_value543;
void* right_value544;
struct sNode* _inf_value15;
struct sDerefferenceNode* _inf_obj_value15;
void* right_value548;
struct sNode* __result380__;
_Bool _if_conditional561;
void* right_value549;
struct sNode* value_381;
void* right_value550;
void* right_value551;
struct sNode* _inf_value16;
struct sRefferenceNode* _inf_obj_value16;
void* right_value555;
struct sNode* __result383__;
_Bool _if_conditional568;
void* right_value556;
struct sNode* value_383;
void* right_value557;
void* right_value558;
struct sNode* _inf_value17;
struct sReverseNode* _inf_obj_value17;
void* right_value562;
struct sNode* __result386__;
_Bool _if_conditional575;
char* head_385;
int head_sline_386;
char* buf_387;
char* p_388;
int sline_389;
_Bool _if_conditional576;
void* right_value563;
char* __dec_obj216;
void* right_value564;
char* __dec_obj217;
_Bool is_type_name__390;
_Bool define_function_pointer_flag_391;
_Bool _if_conditional577;
_Bool _if_conditional578;
_Bool _if_conditional579;
_Bool lambda_flag_392;
_Bool _if_conditional580;
_Bool _if_conditional581;
void* right_value565;
char* word2_393;
_Bool _if_conditional582;
_Bool fun_name_with_type_name_394;
_Bool _if_conditional583;
_Bool _if_conditional584;
void* right_value566;
char* word2_395;
_Bool _while_condtional34;
_Bool _if_conditional585;
_Bool _if_conditional586;
void* right_value567;
char* __dec_obj218;
_Bool _if_conditional587;
void* right_value568;
struct sNode* __result387__;
_Bool _if_conditional588;
void* right_value569;
struct sNode* node_396;
void* right_value570;
struct sNode* __dec_obj219;
void* right_value571;
struct sNode* __dec_obj220;
struct sNode* __result388__;
_Bool _if_conditional589;
void* right_value572;
void* right_value573;
struct sNode* _inf_value18;
struct sFuncNode* _inf_obj_value18;
void* right_value578;
struct sNode* __result391__;
_Bool _if_conditional598;
void* right_value579;
void* right_value580;
struct sNode* _inf_value19;
struct sLineNode* _inf_obj_value19;
void* right_value585;
struct sNode* __result394__;
_Bool _if_conditional607;
void* right_value586;
void* right_value587;
struct sNode* _inf_value20;
struct sSNameNode* _inf_obj_value20;
void* right_value592;
struct sNode* __result397__;
_Bool _if_conditional616;
void* right_value593;
void* right_value594;
struct sNode* _inf_value21;
struct sCallerFuncNode* _inf_obj_value21;
void* right_value599;
struct sNode* __result400__;
_Bool _if_conditional625;
void* right_value600;
void* right_value601;
struct sNode* _inf_value22;
struct sCallerLineNode* _inf_obj_value22;
void* right_value606;
struct sNode* __result403__;
_Bool _if_conditional634;
void* right_value607;
void* right_value608;
struct sNode* _inf_value23;
struct sCallerSNameNode* _inf_obj_value23;
void* right_value613;
struct sNode* __result406__;
_Bool _if_conditional643;
void* right_value614;
struct sNode* node_403;
void* right_value615;
struct sNode* __dec_obj239;
struct sNode* __result407__;
_Bool _if_conditional644;
void* right_value616;
void* right_value617;
struct buffer* fun_name_404;
void* right_value618;
void* right_value619;
struct sType* type_408;
_Bool _if_conditional649;
void* right_value620;
struct sClass* klass_414;
_Bool _if_conditional660;
void* right_value621;
void* right_value622;
struct sType* __dec_obj240;
_Bool _while_condtional38;
_Bool _if_conditional661;
void* right_value623;
char* buf2_415;
void* right_value624;
void* right_value625;
struct sNode* node_416;
void* right_value626;
struct sNode* __dec_obj241;
void* right_value627;
struct sNode* __dec_obj242;
struct sNode* __result416__;
_Bool _if_conditional662;
void* right_value628;
void* right_value629;
struct buffer* fun_name_417;
void* right_value630;
char* buf2_418;
void* right_value631;
void* right_value632;
struct sNode* node_419;
void* right_value633;
struct sNode* __dec_obj243;
void* right_value634;
struct sNode* __dec_obj244;
struct sNode* __result417__;
_Bool _if_conditional663;
void* right_value635;
struct sNode* node_420;
void* right_value636;
struct sNode* __dec_obj245;
void* right_value637;
struct sNode* __dec_obj246;
struct sNode* __result418__;
void* right_value638;
struct sNode* node_421;
void* right_value639;
struct sNode* __dec_obj247;
struct sNode* __result419__;
_Bool _if_conditional664;
_Bool cast_expression_flag_422;
char* p_423;
int sline_424;
void* right_value640;
char* word_425;
_Bool _if_conditional665;
void* right_value641;
char* __dec_obj248;
_Bool _if_conditional666;
_Bool tuple_expression_flag_426;
char* p_427;
int sline_428;
_Bool no_comma_429;
_Bool no_output_err_430;
_Bool no_output_come_code_431;
void* right_value642;
struct sNode* node_432;
void* right_value643;
struct sNode* node2_433;
_Bool _if_conditional667;
_Bool _if_conditional668;
void* right_value644;
struct sNode* node_434;
void* right_value645;
struct sNode* __dec_obj249;
struct sNode* __result420__;
_Bool _if_conditional669;
void* right_value646;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_435;
char* name_436;
_Bool err_437;
_Bool _if_conditional670;
void* right_value647;
struct sNode* node_438;
void* right_value648;
struct sNode* __dec_obj250;
void* right_value649;
void* right_value650;
struct sNode* _inf_value24;
struct sCastNode* _inf_obj_value24;
void* right_value655;
struct sNode* __result423__;
void* right_value656;
struct sNode* node_440;
void* right_value657;
void* right_value658;
struct sNode* _inf_value25;
struct sParenNode* _inf_obj_value25;
void* right_value662;
struct sNode* __dec_obj256;
void* right_value663;
struct sNode* __dec_obj257;
struct sNode* __result426__;
void* right_value664;
struct sNode* node_442;
void* right_value665;
struct sNode* __dec_obj258;
struct sNode* __result427__;
struct sNode* __result428__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&refference_346, 0, sizeof(_Bool));
memset(&p_347, 0, sizeof(char*));
memset(&sline_348, 0, sizeof(int));
right_value450 = (void*)0;
right_value451 = (void*)0;
memset(&node_349, 0, sizeof(struct sNode*));
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
memset(&node_351, 0, sizeof(struct sNode*));
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
memset(&node_353, 0, sizeof(struct sNode*));
right_value466 = (void*)0;
right_value467 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
memset(&node_355, 0, sizeof(struct sNode*));
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
memset(&node_357, 0, sizeof(struct sNode*));
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
memset(&node_359, 0, sizeof(struct sNode*));
right_value487 = (void*)0;
right_value488 = (void*)0;
memset(&node_360, 0, sizeof(struct sNode*));
right_value489 = (void*)0;
right_value490 = (void*)0;
memset(&node_361, 0, sizeof(struct sNode*));
right_value491 = (void*)0;
right_value492 = (void*)0;
memset(&node_362, 0, sizeof(struct sNode*));
right_value493 = (void*)0;
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value496 = (void*)0;
right_value501 = (void*)0;
memset(&head_364, 0, sizeof(char*));
right_value502 = (void*)0;
memset(&value_365, 0, sizeof(struct sNode*));
memset(&tail_366, 0, sizeof(char*));
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value505 = (void*)0;
right_value506 = (void*)0;
right_value507 = (void*)0;
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value520 = (void*)0;
memset(&head_370, 0, sizeof(char*));
right_value521 = (void*)0;
memset(&value_371, 0, sizeof(struct sNode*));
memset(&tail_372, 0, sizeof(char*));
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
right_value531 = (void*)0;
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value536 = (void*)0;
right_value537 = (void*)0;
right_value538 = (void*)0;
right_value541 = (void*)0;
memset(&quote_377, 0, sizeof(_Bool));
memset(&no_assign_378, 0, sizeof(_Bool));
right_value542 = (void*)0;
memset(&value_379, 0, sizeof(struct sNode*));
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
memset(&value_381, 0, sizeof(struct sNode*));
right_value550 = (void*)0;
right_value551 = (void*)0;
right_value555 = (void*)0;
right_value556 = (void*)0;
memset(&value_383, 0, sizeof(struct sNode*));
right_value557 = (void*)0;
right_value558 = (void*)0;
right_value562 = (void*)0;
memset(&head_385, 0, sizeof(char*));
memset(&head_sline_386, 0, sizeof(int));
memset(&buf_387, 0, sizeof(char*));
memset(&p_388, 0, sizeof(char*));
memset(&sline_389, 0, sizeof(int));
right_value563 = (void*)0;
right_value564 = (void*)0;
memset(&is_type_name__390, 0, sizeof(_Bool));
memset(&define_function_pointer_flag_391, 0, sizeof(_Bool));
memset(&lambda_flag_392, 0, sizeof(_Bool));
right_value565 = (void*)0;
memset(&word2_393, 0, sizeof(char*));
memset(&fun_name_with_type_name_394, 0, sizeof(_Bool));
right_value566 = (void*)0;
memset(&word2_395, 0, sizeof(char*));
right_value567 = (void*)0;
right_value568 = (void*)0;
right_value569 = (void*)0;
memset(&node_396, 0, sizeof(struct sNode*));
right_value570 = (void*)0;
right_value571 = (void*)0;
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
right_value585 = (void*)0;
right_value586 = (void*)0;
right_value587 = (void*)0;
right_value592 = (void*)0;
right_value593 = (void*)0;
right_value594 = (void*)0;
right_value599 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
right_value606 = (void*)0;
right_value607 = (void*)0;
right_value608 = (void*)0;
right_value613 = (void*)0;
right_value614 = (void*)0;
memset(&node_403, 0, sizeof(struct sNode*));
right_value615 = (void*)0;
right_value616 = (void*)0;
right_value617 = (void*)0;
memset(&fun_name_404, 0, sizeof(struct buffer*));
right_value618 = (void*)0;
right_value619 = (void*)0;
memset(&type_408, 0, sizeof(struct sType*));
right_value620 = (void*)0;
memset(&klass_414, 0, sizeof(struct sClass*));
right_value621 = (void*)0;
right_value622 = (void*)0;
right_value623 = (void*)0;
memset(&buf2_415, 0, sizeof(char*));
right_value624 = (void*)0;
right_value625 = (void*)0;
memset(&node_416, 0, sizeof(struct sNode*));
right_value626 = (void*)0;
right_value627 = (void*)0;
right_value628 = (void*)0;
right_value629 = (void*)0;
memset(&fun_name_417, 0, sizeof(struct buffer*));
right_value630 = (void*)0;
memset(&buf2_418, 0, sizeof(char*));
right_value631 = (void*)0;
right_value632 = (void*)0;
memset(&node_419, 0, sizeof(struct sNode*));
right_value633 = (void*)0;
right_value634 = (void*)0;
right_value635 = (void*)0;
memset(&node_420, 0, sizeof(struct sNode*));
right_value636 = (void*)0;
right_value637 = (void*)0;
right_value638 = (void*)0;
memset(&node_421, 0, sizeof(struct sNode*));
right_value639 = (void*)0;
memset(&cast_expression_flag_422, 0, sizeof(_Bool));
memset(&p_423, 0, sizeof(char*));
memset(&sline_424, 0, sizeof(int));
right_value640 = (void*)0;
memset(&word_425, 0, sizeof(char*));
right_value641 = (void*)0;
memset(&tuple_expression_flag_426, 0, sizeof(_Bool));
memset(&p_427, 0, sizeof(char*));
memset(&sline_428, 0, sizeof(int));
memset(&no_comma_429, 0, sizeof(_Bool));
memset(&no_output_err_430, 0, sizeof(_Bool));
memset(&no_output_come_code_431, 0, sizeof(_Bool));
right_value642 = (void*)0;
memset(&node_432, 0, sizeof(struct sNode*));
right_value643 = (void*)0;
memset(&node2_433, 0, sizeof(struct sNode*));
right_value644 = (void*)0;
memset(&node_434, 0, sizeof(struct sNode*));
right_value645 = (void*)0;
right_value646 = (void*)0;
memset(&type_435, 0, sizeof(struct sType*));
memset(&name_436, 0, sizeof(char*));
memset(&err_437, 0, sizeof(_Bool));
memset(&type_435, 0, sizeof(struct sType*));
memset(&name_436, 0, sizeof(char*));
memset(&err_437, 0, sizeof(_Bool));
right_value647 = (void*)0;
memset(&node_438, 0, sizeof(struct sNode*));
right_value648 = (void*)0;
right_value649 = (void*)0;
right_value650 = (void*)0;
right_value655 = (void*)0;
right_value656 = (void*)0;
memset(&node_440, 0, sizeof(struct sNode*));
right_value657 = (void*)0;
right_value658 = (void*)0;
right_value662 = (void*)0;
right_value663 = (void*)0;
right_value664 = (void*)0;
memset(&node_442, 0, sizeof(struct sNode*));
right_value665 = (void*)0;
    skip_spaces_and_lf(info);
    refference_346=(_Bool)0;
    {
        p_347=info->p;
        sline_348=info->sline;
        if(_if_conditional462=*info->p==38,        _if_conditional462) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional463=xisalpha(*info->p)||*info->p==95,            _if_conditional463) {
                refference_346=(_Bool)1;
            }
            else {
                if(_if_conditional464=*info->p==40,                _if_conditional464) {
                    while(_while_condtional33=*info->p==40,                    _while_condtional33) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional465=xisalpha(*info->p)||*info->p==95,                    _if_conditional465) {
                        refference_346=(_Bool)1;
                    }
                }
            }
        }
        info->p=p_347;
        info->sline=sline_348;
    }
    parse_sharp_v5(info);
    if(_if_conditional466=*info->p==123,    _if_conditional466) {
        __result340__ = __result_obj__ = ((struct sNode*)(right_value450=parse_normal_block(info)));
        if(right_value450) { right_value450 = come_decrement_ref_count2(right_value450, ((struct sNode*)right_value450)->finalize, ((struct sNode*)right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result340__;
    }
    else {
        if(_if_conditional467=*info->p==33,        _if_conditional467) {
            info->p++;
            skip_spaces_and_lf(info);
            node_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=expression_node_v99(info))));
            if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2129, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sLogicalDenial*)(right_value453=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value452=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05function.c", 2129, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(node_349),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLogicalDenial_finalize;
            _inf_value4->clone=(void*)sLogicalDenial_clone;
            _inf_value4->compile=(void*)sLogicalDenial_compile;
            _inf_value4->sline=(void*)sLogicalDenial_sline;
            _inf_value4->sname=(void*)sLogicalDenial_sname;
            _inf_value4->terminated=(void*)sLogicalDenial_terminated;
            _inf_value4->kind=(void*)sLogicalDenial_kind;
            __result343__ = __result_obj__ = ((struct sNode*)(right_value457=_inf_value4));
            if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sLogicalDenial_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLogicalDenial_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value457) { right_value457 = come_decrement_ref_count2(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result343__;
            if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional474=*info->p==45&&*(info->p+1)==45,            _if_conditional474) {
                info->p+=2;
                skip_spaces_and_lf(info);
                node_351=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=expression_node_v99(info))));
                if(right_value458) { right_value458 = come_decrement_ref_count2(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2137, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sMinusMinusNode2*)(right_value460=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value459=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05function.c", 2137, "sMinusMinusNode2")))),(struct sNode*)come_increment_ref_count(node_351),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sMinusMinusNode2_finalize;
                _inf_value5->clone=(void*)sMinusMinusNode2_clone;
                _inf_value5->compile=(void*)sMinusMinusNode2_compile;
                _inf_value5->sline=(void*)sMinusMinusNode2_sline;
                _inf_value5->sname=(void*)sMinusMinusNode2_sname;
                _inf_value5->terminated=(void*)sMinusMinusNode2_terminated;
                _inf_value5->kind=(void*)sMinusMinusNode2_kind;
                __result346__ = __result_obj__ = ((struct sNode*)(right_value464=_inf_value5));
                if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sMinusMinusNode2_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sMinusMinusNode2_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value464) { right_value464 = come_decrement_ref_count2(right_value464, ((struct sNode*)right_value464)->finalize, ((struct sNode*)right_value464)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result346__;
                if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional481=*info->p==45,                _if_conditional481) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_353=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value465=expression_node_v99(info))));
                    if(right_value465) { right_value465 = come_decrement_ref_count2(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2145, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sMinusNode2*)(right_value467=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value466=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05function.c", 2145, "sMinusNode2")))),(struct sNode*)come_increment_ref_count(node_353),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sMinusNode2_finalize;
                    _inf_value6->clone=(void*)sMinusNode2_clone;
                    _inf_value6->compile=(void*)sMinusNode2_compile;
                    _inf_value6->sline=(void*)sMinusNode2_sline;
                    _inf_value6->sname=(void*)sMinusNode2_sname;
                    _inf_value6->terminated=(void*)sMinusNode2_terminated;
                    _inf_value6->kind=(void*)sMinusNode2_kind;
                    __result349__ = __result_obj__ = ((struct sNode*)(right_value471=_inf_value6));
                    if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sMinusNode2_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sMinusNode2_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value471) { right_value471 = come_decrement_ref_count2(right_value471, ((struct sNode*)right_value471)->finalize, ((struct sNode*)right_value471)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result349__;
                    if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional488=*info->p==43&&*(info->p+1)==43,                    _if_conditional488) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        node_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value472=expression_node_v99(info))));
                        if(right_value472) { right_value472 = come_decrement_ref_count2(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2153, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sPlusPlusNode2*)(right_value474=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value473=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05function.c", 2153, "sPlusPlusNode2")))),(struct sNode*)come_increment_ref_count(node_355),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sPlusPlusNode2_finalize;
                        _inf_value7->clone=(void*)sPlusPlusNode2_clone;
                        _inf_value7->compile=(void*)sPlusPlusNode2_compile;
                        _inf_value7->sline=(void*)sPlusPlusNode2_sline;
                        _inf_value7->sname=(void*)sPlusPlusNode2_sname;
                        _inf_value7->terminated=(void*)sPlusPlusNode2_terminated;
                        _inf_value7->kind=(void*)sPlusPlusNode2_kind;
                        __result352__ = __result_obj__ = ((struct sNode*)(right_value478=_inf_value7));
                        if(node_355) { node_355 = come_decrement_ref_count2(node_355, ((struct sNode*)node_355)->finalize, ((struct sNode*)node_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sPlusPlusNode2_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sPlusPlusNode2_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result352__;
                        if(node_355) { node_355 = come_decrement_ref_count2(node_355, ((struct sNode*)node_355)->finalize, ((struct sNode*)node_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional495=*info->p==126,                        _if_conditional495) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            node_357=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=expression_node_v99(info))));
                            if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2161, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sComplement*)(right_value481=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value480=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05function.c", 2161, "sComplement")))),(struct sNode*)come_increment_ref_count(node_357),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sComplement_finalize;
                            _inf_value8->clone=(void*)sComplement_clone;
                            _inf_value8->compile=(void*)sComplement_compile;
                            _inf_value8->sline=(void*)sComplement_sline;
                            _inf_value8->sname=(void*)sComplement_sname;
                            _inf_value8->terminated=(void*)sComplement_terminated;
                            _inf_value8->kind=(void*)sComplement_kind;
                            __result355__ = __result_obj__ = ((struct sNode*)(right_value485=_inf_value8));
                            if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sComplement_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sComplement_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result355__;
                            if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional502=*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88),                            _if_conditional502) {
                                info->p+=2;
                                node_359=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value486=get_hex_number((_Bool)0,info))));
                                if(right_value486) { right_value486 = come_decrement_ref_count2(right_value486, ((struct sNode*)right_value486)->finalize, ((struct sNode*)right_value486)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __dec_obj188=node_359;
                                node_359=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value487=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_359),info))));
                                if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value487) { right_value487 = come_decrement_ref_count2(right_value487, ((struct sNode*)right_value487)->finalize, ((struct sNode*)right_value487)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __result356__ = __result_obj__ = node_359;
                                if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result356__;
                                if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional503=*info->p==48&&xisdigit(*(info->p+1)),                                _if_conditional503) {
                                    info->p++;
                                    node_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value488=get_oct_number(info))));
                                    if(right_value488) { right_value488 = come_decrement_ref_count2(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __dec_obj189=node_360;
                                    node_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value489=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_360),info))));
                                    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value489) { right_value489 = come_decrement_ref_count2(right_value489, ((struct sNode*)right_value489)->finalize, ((struct sNode*)right_value489)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __result357__ = __result_obj__ = node_360;
                                    if(node_360) { node_360 = come_decrement_ref_count2(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    return __result357__;
                                    if(node_360) { node_360 = come_decrement_ref_count2(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional504=xisdigit(*info->p),                                    _if_conditional504) {
                                        node_361=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value490=get_number((_Bool)0,info))));
                                        if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        __dec_obj190=node_361;
                                        node_361=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value491=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_361),info))));
                                        if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value491) { right_value491 = come_decrement_ref_count2(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        __result358__ = __result_obj__ = node_361;
                                        if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        return __result358__;
                                        if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional505=*info->p==45&&xisdigit(*(info->p+1)),                                        _if_conditional505) {
                                            info->p++;
                                            node_362=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value492=get_number((_Bool)1,info))));
                                            if(right_value492) { right_value492 = come_decrement_ref_count2(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            __dec_obj191=node_362;
                                            node_362=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value493=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_362),info))));
                                            if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value493) { right_value493 = come_decrement_ref_count2(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            __result359__ = __result_obj__ = node_362;
                                            if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            return __result359__;
                                            if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional506=parsecmp("return",info),                                            _if_conditional506) {
                                                info->p+=strlen("return");
                                                skip_spaces_and_lf(info);
                                                if(_if_conditional507=*info->p==59,                                                _if_conditional507) {
                                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2205, "struct sNode");
                                                    _inf_obj_value9=come_increment_ref_count(((struct sReturnNode*)(right_value496=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value494=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05function.c", 2205, "sReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value495=__builtin_string("0")))),info))));
                                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                                    _inf_value9->finalize=(void*)sReturnNode_finalize;
                                                    _inf_value9->clone=(void*)sReturnNode_clone;
                                                    _inf_value9->compile=(void*)sReturnNode_compile;
                                                    _inf_value9->sline=(void*)sReturnNode_sline;
                                                    _inf_value9->sname=(void*)sReturnNode_sname;
                                                    _inf_value9->terminated=(void*)sReturnNode_terminated;
                                                    _inf_value9->kind=(void*)sReturnNode_kind;
                                                    __result362__ = __result_obj__ = ((struct sNode*)(right_value501=_inf_value9));
                                                    come_call_finalizer2(sReturnNode_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    right_value495 = come_decrement_ref_count2(right_value495, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sReturnNode_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value501) { right_value501 = come_decrement_ref_count2(right_value501, ((struct sNode*)right_value501)->finalize, ((struct sNode*)right_value501)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result362__;
                                                }
                                                else {
                                                    head_364=info->p;
                                                    value_365=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value502=expression_v13(info))));
                                                    if(right_value502) { right_value502 = come_decrement_ref_count2(right_value502, ((struct sNode*)right_value502)->finalize, ((struct sNode*)right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    tail_366=info->p;
                                                    __dec_obj195=value_365;
                                                    value_365=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value503=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_365),info))));
                                                    if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value503) { right_value503 = come_decrement_ref_count2(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    __dec_obj196=value_365;
                                                    value_365=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value504=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_365),info))));
                                                    if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value504) { right_value504 = come_decrement_ref_count2(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    char buf_367[tail_366-head_364+1];
                                                    memset(&buf_367, 0, sizeof(char)                                                    *(tail_366-head_364+1)                                                    );
                                                    memcpy(buf_367,head_364,tail_366-head_364);
                                                    buf_367[tail_366-head_364]=0;
                                                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2218, "struct sNode");
                                                    _inf_obj_value10=come_increment_ref_count(((struct sReturnNode*)(right_value507=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value505=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05function.c", 2218, "sReturnNode")))),(struct sNode*)come_increment_ref_count(value_365),(char*)come_increment_ref_count(((char*)(right_value506=__builtin_string(buf_367)))),info))));
                                                    _inf_value10->_protocol_obj=_inf_obj_value10;
                                                    _inf_value10->finalize=(void*)sReturnNode_finalize;
                                                    _inf_value10->clone=(void*)sReturnNode_clone;
                                                    _inf_value10->compile=(void*)sReturnNode_compile;
                                                    _inf_value10->sline=(void*)sReturnNode_sline;
                                                    _inf_value10->sname=(void*)sReturnNode_sname;
                                                    _inf_value10->terminated=(void*)sReturnNode_terminated;
                                                    _inf_value10->kind=(void*)sReturnNode_kind;
                                                    __result365__ = __result_obj__ = ((struct sNode*)(right_value512=_inf_value10));
                                                    if(value_365) { value_365 = come_decrement_ref_count2(value_365, ((struct sNode*)value_365)->finalize, ((struct sNode*)value_365)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer2(sReturnNode_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    right_value506 = come_decrement_ref_count2(right_value506, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sReturnNode_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value512) { right_value512 = come_decrement_ref_count2(right_value512, ((struct sNode*)right_value512)->finalize, ((struct sNode*)right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result365__;
                                                    if(value_365) { value_365 = come_decrement_ref_count2(value_365, ((struct sNode*)value_365)->finalize, ((struct sNode*)value_365)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                if(_if_conditional524=parsecmp("return!",info),                                                _if_conditional524) {
                                                    info->p+=strlen("return!");
                                                    skip_spaces_and_lf(info);
                                                    if(_if_conditional525=*info->p==59,                                                    _if_conditional525) {
                                                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2226, "struct sNode");
                                                        _inf_obj_value11=come_increment_ref_count(((struct sParentReturnNode*)(right_value515=sParentReturnNode_initialize((struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value513=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "05function.c", 2226, "sParentReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value514=__builtin_string("0")))),info))));
                                                        _inf_value11->_protocol_obj=_inf_obj_value11;
                                                        _inf_value11->finalize=(void*)sParentReturnNode_finalize;
                                                        _inf_value11->clone=(void*)sParentReturnNode_clone;
                                                        _inf_value11->compile=(void*)sParentReturnNode_compile;
                                                        _inf_value11->sline=(void*)sParentReturnNode_sline;
                                                        _inf_value11->sname=(void*)sParentReturnNode_sname;
                                                        _inf_value11->terminated=(void*)sParentReturnNode_terminated;
                                                        _inf_value11->kind=(void*)sParentReturnNode_kind;
                                                        __result368__ = __result_obj__ = ((struct sNode*)(right_value520=_inf_value11));
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        right_value514 = come_decrement_ref_count2(right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value520) { right_value520 = come_decrement_ref_count2(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result368__;
                                                    }
                                                    else {
                                                        head_370=info->p;
                                                        value_371=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value521=expression_v13(info))));
                                                        if(right_value521) { right_value521 = come_decrement_ref_count2(right_value521, ((struct sNode*)right_value521)->finalize, ((struct sNode*)right_value521)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        tail_372=info->p;
                                                        __dec_obj203=value_371;
                                                        value_371=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value522=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_371),info))));
                                                        if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value522) { right_value522 = come_decrement_ref_count2(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        __dec_obj204=value_371;
                                                        value_371=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value523=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_371),info))));
                                                        if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value523) { right_value523 = come_decrement_ref_count2(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        char buf_373[tail_372-head_370+1];
                                                        memset(&buf_373, 0, sizeof(char)                                                        *(tail_372-head_370+1)                                                        );
                                                        memcpy(buf_373,head_370,tail_372-head_370);
                                                        buf_373[tail_372-head_370]=0;
                                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2239, "struct sNode");
                                                        _inf_obj_value12=come_increment_ref_count(((struct sParentReturnNode*)(right_value526=sParentReturnNode_initialize((struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value524=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "05function.c", 2239, "sParentReturnNode")))),(struct sNode*)come_increment_ref_count(value_371),(char*)come_increment_ref_count(((char*)(right_value525=__builtin_string(buf_373)))),info))));
                                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                                        _inf_value12->finalize=(void*)sParentReturnNode_finalize;
                                                        _inf_value12->clone=(void*)sParentReturnNode_clone;
                                                        _inf_value12->compile=(void*)sParentReturnNode_compile;
                                                        _inf_value12->sline=(void*)sParentReturnNode_sline;
                                                        _inf_value12->sname=(void*)sParentReturnNode_sname;
                                                        _inf_value12->terminated=(void*)sParentReturnNode_terminated;
                                                        _inf_value12->kind=(void*)sParentReturnNode_kind;
                                                        __result371__ = __result_obj__ = ((struct sNode*)(right_value531=_inf_value12));
                                                        if(value_371) { value_371 = come_decrement_ref_count2(value_371, ((struct sNode*)value_371)->finalize, ((struct sNode*)value_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        right_value525 = come_decrement_ref_count2(right_value525, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value531) { right_value531 = come_decrement_ref_count2(right_value531, ((struct sNode*)right_value531)->finalize, ((struct sNode*)right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result371__;
                                                        if(value_371) { value_371 = come_decrement_ref_count2(value_371, ((struct sNode*)value_371)->finalize, ((struct sNode*)value_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional542=parsecmp("break!",info),                                                    _if_conditional542) {
                                                        info->p+=strlen("break!");
                                                        skip_spaces_and_lf(info);
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2246, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sParentBreakNode*)(right_value533=sParentBreakNode_initialize((struct sParentBreakNode*)come_increment_ref_count(((struct sParentBreakNode*)(right_value532=(struct sParentBreakNode*)come_calloc(1, sizeof(struct sParentBreakNode)*(1), "05function.c", 2246, "sParentBreakNode")))),info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sParentBreakNode_finalize;
                                                        _inf_value13->clone=(void*)sParentBreakNode_clone;
                                                        _inf_value13->compile=(void*)sParentBreakNode_compile;
                                                        _inf_value13->sline=(void*)sParentBreakNode_sline;
                                                        _inf_value13->sname=(void*)sParentBreakNode_sname;
                                                        _inf_value13->terminated=(void*)sParentBreakNode_terminated;
                                                        _inf_value13->kind=(void*)sParentBreakNode_kind;
                                                        __result374__ = __result_obj__ = ((struct sNode*)(right_value536=_inf_value13));
                                                        come_call_finalizer2(sParentBreakNode_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentBreakNode_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value536) { right_value536 = come_decrement_ref_count2(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result374__;
                                                    }
                                                    else {
                                                        if(_if_conditional547=parsecmp("continue!",info),                                                        _if_conditional547) {
                                                            info->p+=strlen("continue!");
                                                            skip_spaces_and_lf(info);
                                                            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2252, "struct sNode");
                                                            _inf_obj_value14=come_increment_ref_count(((struct sParentContinueNode*)(right_value538=sParentContinueNode_initialize((struct sParentContinueNode*)come_increment_ref_count(((struct sParentContinueNode*)(right_value537=(struct sParentContinueNode*)come_calloc(1, sizeof(struct sParentContinueNode)*(1), "05function.c", 2252, "sParentContinueNode")))),info))));
                                                            _inf_value14->_protocol_obj=_inf_obj_value14;
                                                            _inf_value14->finalize=(void*)sParentContinueNode_finalize;
                                                            _inf_value14->clone=(void*)sParentContinueNode_clone;
                                                            _inf_value14->compile=(void*)sParentContinueNode_compile;
                                                            _inf_value14->sline=(void*)sParentContinueNode_sline;
                                                            _inf_value14->sname=(void*)sParentContinueNode_sname;
                                                            _inf_value14->terminated=(void*)sParentContinueNode_terminated;
                                                            _inf_value14->kind=(void*)sParentContinueNode_kind;
                                                            __result377__ = __result_obj__ = ((struct sNode*)(right_value541=_inf_value14));
                                                            come_call_finalizer2(sParentContinueNode_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(sParentContinueNode_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value541) { right_value541 = come_decrement_ref_count2(right_value541, ((struct sNode*)right_value541)->finalize, ((struct sNode*)right_value541)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result377__;
                                                        }
                                                        else {
                                                            if(_if_conditional552=(*info->p==92&&*(info->p+1)==42)||*info->p==42,                                                            _if_conditional552) {
                                                                if(_if_conditional553=*info->p==92,                                                                _if_conditional553) {
                                                                    info->p+=2;
                                                                    skip_spaces_and_lf(info);
                                                                    quote_377=(_Bool)1;
                                                                }
                                                                else {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    quote_377=(_Bool)0;
                                                                }
                                                                no_assign_378=info->no_assign;
                                                                info->no_assign=(_Bool)1;
                                                                value_379=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value542=expression_node_v99(info))));
                                                                if(right_value542) { right_value542 = come_decrement_ref_count2(right_value542, ((struct sNode*)right_value542)->finalize, ((struct sNode*)right_value542)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                info->no_assign=no_assign_378;
                                                                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2273, "struct sNode");
                                                                _inf_obj_value15=come_increment_ref_count(((struct sDerefferenceNode*)(right_value544=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value543=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05function.c", 2272, "sDerefferenceNode")))),(struct sNode*)come_increment_ref_count(value_379),quote_377,info))));
                                                                _inf_value15->_protocol_obj=_inf_obj_value15;
                                                                _inf_value15->finalize=(void*)sDerefferenceNode_finalize;
                                                                _inf_value15->clone=(void*)sDerefferenceNode_clone;
                                                                _inf_value15->compile=(void*)sDerefferenceNode_compile;
                                                                _inf_value15->sline=(void*)sDerefferenceNode_sline;
                                                                _inf_value15->sname=(void*)sDerefferenceNode_sname;
                                                                _inf_value15->terminated=(void*)sDerefferenceNode_terminated;
                                                                _inf_value15->kind=(void*)sDerefferenceNode_kind;
                                                                __result380__ = __result_obj__ = ((struct sNode*)(right_value548=_inf_value15));
                                                                if(value_379) { value_379 = come_decrement_ref_count2(value_379, ((struct sNode*)value_379)->finalize, ((struct sNode*)value_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                come_call_finalizer2(sDerefferenceNode_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(sDerefferenceNode_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(right_value548) { right_value548 = come_decrement_ref_count2(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result380__;
                                                                if(value_379) { value_379 = come_decrement_ref_count2(value_379, ((struct sNode*)value_379)->finalize, ((struct sNode*)value_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                if(_if_conditional561=*info->p==38&&refference_346,                                                                _if_conditional561) {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    value_381=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value549=expression_node_v99(info))));
                                                                    if(right_value549) { right_value549 = come_decrement_ref_count2(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2280, "struct sNode");
                                                                    _inf_obj_value16=come_increment_ref_count(((struct sRefferenceNode*)(right_value551=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value550=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05function.c", 2280, "sRefferenceNode")))),(struct sNode*)come_increment_ref_count(value_381),info))));
                                                                    _inf_value16->_protocol_obj=_inf_obj_value16;
                                                                    _inf_value16->finalize=(void*)sRefferenceNode_finalize;
                                                                    _inf_value16->clone=(void*)sRefferenceNode_clone;
                                                                    _inf_value16->compile=(void*)sRefferenceNode_compile;
                                                                    _inf_value16->sline=(void*)sRefferenceNode_sline;
                                                                    _inf_value16->sname=(void*)sRefferenceNode_sname;
                                                                    _inf_value16->terminated=(void*)sRefferenceNode_terminated;
                                                                    _inf_value16->kind=(void*)sRefferenceNode_kind;
                                                                    __result383__ = __result_obj__ = ((struct sNode*)(right_value555=_inf_value16));
                                                                    if(value_381) { value_381 = come_decrement_ref_count2(value_381, ((struct sNode*)value_381)->finalize, ((struct sNode*)value_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    come_call_finalizer2(sRefferenceNode_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(sRefferenceNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(right_value555) { right_value555 = come_decrement_ref_count2(right_value555, ((struct sNode*)right_value555)->finalize, ((struct sNode*)right_value555)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    return __result383__;
                                                                    if(value_381) { value_381 = come_decrement_ref_count2(value_381, ((struct sNode*)value_381)->finalize, ((struct sNode*)value_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                                else {
                                                                    if(_if_conditional568=*info->p==33,                                                                    _if_conditional568) {
                                                                        info->p++;
                                                                        skip_spaces_and_lf(info);
                                                                        value_383=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=expression_node_v99(info))));
                                                                        if(right_value556) { right_value556 = come_decrement_ref_count2(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2288, "struct sNode");
                                                                        _inf_obj_value17=come_increment_ref_count(((struct sReverseNode*)(right_value558=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value557=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05function.c", 2288, "sReverseNode")))),(struct sNode*)come_increment_ref_count(value_383),info))));
                                                                        _inf_value17->_protocol_obj=_inf_obj_value17;
                                                                        _inf_value17->finalize=(void*)sReverseNode_finalize;
                                                                        _inf_value17->clone=(void*)sReverseNode_clone;
                                                                        _inf_value17->compile=(void*)sReverseNode_compile;
                                                                        _inf_value17->sline=(void*)sReverseNode_sline;
                                                                        _inf_value17->sname=(void*)sReverseNode_sname;
                                                                        _inf_value17->terminated=(void*)sReverseNode_terminated;
                                                                        _inf_value17->kind=(void*)sReverseNode_kind;
                                                                        __result386__ = __result_obj__ = ((struct sNode*)(right_value562=_inf_value17));
                                                                        if(value_383) { value_383 = come_decrement_ref_count2(value_383, ((struct sNode*)value_383)->finalize, ((struct sNode*)value_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        come_call_finalizer2(sReverseNode_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sReverseNode_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value562) { right_value562 = come_decrement_ref_count2(right_value562, ((struct sNode*)right_value562)->finalize, ((struct sNode*)right_value562)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result386__;
                                                                        if(value_383) { value_383 = come_decrement_ref_count2(value_383, ((struct sNode*)value_383)->finalize, ((struct sNode*)value_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                    else {
                                                                        if(_if_conditional575=(xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34),                                                                        _if_conditional575) {
                                                                            head_385=info->p;
                                                                            head_sline_386=info->sline;
                                                                            {
                                                                                p_388=info->p;
                                                                                sline_389=info->sline;
                                                                                if(_if_conditional576=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional576) {
                                                                                    __dec_obj216=buf_387;
                                                                                    buf_387=(char*)come_increment_ref_count(((char*)(right_value563=parse_word(info))));
                                                                                    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value563 = come_decrement_ref_count2(right_value563, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    __dec_obj217=buf_387;
                                                                                    buf_387=(char*)come_increment_ref_count(((char*)(right_value564=__builtin_string(""))));
                                                                                    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value564 = come_decrement_ref_count2(right_value564, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                info->p=p_388;
                                                                                info->sline=sline_389;
                                                                            }
                                                                            is_type_name__390=is_type_name(buf_387,info);
                                                                            define_function_pointer_flag_391=(_Bool)0;
                                                                            if(_if_conditional577=string_operator_not_equals(buf_387,"if")&&string_operator_not_equals(buf_387,"while")&&string_operator_not_equals(buf_387,"for")&&string_operator_not_equals(buf_387,"switch")&&string_operator_not_equals(buf_387,"return")&&string_operator_not_equals(buf_387,"sizeof")&&string_operator_not_equals(buf_387,"isheap")&&string_operator_not_equals(buf_387,"guard")&&string_operator_not_equals(buf_387,"ispointer")&&string_operator_not_equals(buf_387,"__typeof__")&&string_operator_not_equals(buf_387,"dynamic_typeof")&&string_operator_not_equals(buf_387,"typeof")&&string_operator_not_equals(buf_387,"gc_inc")&&string_operator_not_equals(buf_387,"gc_dec")&&string_operator_not_equals(buf_387,"case")&&string_operator_not_equals(buf_387,"_Alignof")&&string_operator_not_equals(buf_387,"_Alignas")&&string_operator_not_equals(buf_387,"__alignof__")&&*info->p==40&&*(info->p+1)!=42,                                                                            _if_conditional577) {
                                                                                backtrace_parse_type(info);
                                                                                if(_if_conditional578=*info->p==40,                                                                                _if_conditional578) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                    if(_if_conditional579=*info->p==42,                                                                                    _if_conditional579) {
                                                                                        info->p++;
                                                                                        skip_spaces_and_lf(info);
                                                                                        define_function_pointer_flag_391=(_Bool)1;
                                                                                    }
                                                                                }
                                                                                info->p=head_385;
                                                                                info->sline=head_sline_386;
                                                                            }
                                                                            lambda_flag_392=(_Bool)0;
                                                                            if(_if_conditional580=string_operator_not_equals(buf_387,"if")&&string_operator_not_equals(buf_387,"while")&&string_operator_not_equals(buf_387,"for")&&string_operator_not_equals(buf_387,"switch")&&string_operator_not_equals(buf_387,"return")&&string_operator_not_equals(buf_387,"sizeof")&&string_operator_not_equals(buf_387,"_Alignof")&&string_operator_not_equals(buf_387,"__alignof__")&&string_operator_not_equals(buf_387,"_Alignas")&&string_operator_not_equals(buf_387,"isheap")&&string_operator_not_equals(buf_387,"guard")&&string_operator_not_equals(buf_387,"ispointer")&&string_operator_not_equals(buf_387,"__typeof__")&&string_operator_not_equals(buf_387,"dynamic_typeof")&&string_operator_not_equals(buf_387,"typeof")&&string_operator_not_equals(buf_387,"gc_inc")&&string_operator_not_equals(buf_387,"gc_dec")&&string_operator_not_equals(buf_387,"case")&&is_type_name__390,                                                                            _if_conditional580) {
                                                                                info->p=head_385;
                                                                                info->sline=head_sline_386;
                                                                                backtrace_parse_type(info);
                                                                                if(_if_conditional581=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional581) {
                                                                                    word2_393=(char*)come_increment_ref_count(((char*)(right_value565=parse_word(info))));
                                                                                    right_value565 = come_decrement_ref_count2(right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional582=string_operator_equals(word2_393,"lambda"),                                                                                    _if_conditional582) {
                                                                                        lambda_flag_392=(_Bool)1;
                                                                                    }
                                                                                    word2_393 = come_decrement_ref_count2(word2_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                info->p=head_385;
                                                                                info->sline=head_sline_386;
                                                                            }
                                                                            fun_name_with_type_name_394=(_Bool)0;
                                                                            if(_if_conditional583=string_operator_not_equals(buf_387,"if")&&string_operator_not_equals(buf_387,"while")&&string_operator_not_equals(buf_387,"for")&&string_operator_not_equals(buf_387,"switch")&&string_operator_not_equals(buf_387,"return")&&string_operator_not_equals(buf_387,"sizeof")&&string_operator_not_equals(buf_387,"_Alignof")&&string_operator_not_equals(buf_387,"__alignof__")&&string_operator_not_equals(buf_387,"_Alignas")&&string_operator_not_equals(buf_387,"isheap")&&string_operator_not_equals(buf_387,"guard")&&string_operator_not_equals(buf_387,"ispointer")&&string_operator_not_equals(buf_387,"dynamic_typeof")&&string_operator_not_equals(buf_387,"__typeof__")&&string_operator_not_equals(buf_387,"typeof")&&string_operator_not_equals(buf_387,"gc_inc")&&string_operator_not_equals(buf_387,"gc_dec")&&string_operator_not_equals(buf_387,"case"),                                                                            _if_conditional583) {
                                                                                info->p=head_385;
                                                                                info->sline=head_sline_386;
                                                                                info->no_output_err=(_Bool)1;
                                                                                if(_if_conditional584=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional584) {
                                                                                    word2_395=(char*)come_increment_ref_count(((char*)(right_value566=parse_word(info))));
                                                                                    right_value566 = come_decrement_ref_count2(right_value566, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    word2_395 = come_decrement_ref_count2(word2_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                while(_while_condtional34=*info->p==42,                                                                                _while_condtional34) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                }
                                                                                if(_if_conditional585=*info->p==58&&*(info->p+1)==58,                                                                                _if_conditional585) {
                                                                                    info->p+=2;
                                                                                    skip_spaces_and_lf(info);
                                                                                    if(_if_conditional586=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional586) {
                                                                                        fun_name_with_type_name_394=(_Bool)1;
                                                                                    }
                                                                                }
                                                                                info->no_output_err=(_Bool)0;
                                                                                info->p=head_385;
                                                                                info->sline=head_sline_386;
                                                                            }
                                                                            __dec_obj218=buf_387;
                                                                            buf_387=(char*)come_increment_ref_count(((char*)(right_value567=parse_word(info))));
                                                                            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value567 = come_decrement_ref_count2(right_value567, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(lambda_flag_392) {
                                                                                info->p=head_385;
                                                                                info->sline=head_sline_386;
                                                                                __result387__ = __result_obj__ = ((struct sNode*)(right_value568=parse_function(info)));
                                                                                buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                if(right_value568) { right_value568 = come_decrement_ref_count2(right_value568, ((struct sNode*)right_value568)->finalize, ((struct sNode*)right_value568)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result387__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional588=(string_operator_equals(buf_387,"string")||string_operator_equals(buf_387,"wstring"))&&*info->p==40,                                                                                _if_conditional588) {
                                                                                    node_396=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value569=parse_function_call(buf_387,info))));
                                                                                    if(right_value569) { right_value569 = come_decrement_ref_count2(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj219=node_396;
                                                                                    node_396=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value570=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_396),info))));
                                                                                    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value570) { right_value570 = come_decrement_ref_count2(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj220=node_396;
                                                                                    node_396=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value571=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_396),info))));
                                                                                    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value571) { right_value571 = come_decrement_ref_count2(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __result388__ = __result_obj__ = node_396;
                                                                                    if(node_396) { node_396 = come_decrement_ref_count2(node_396, ((struct sNode*)node_396)->finalize, ((struct sNode*)node_396)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                    buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    return __result388__;
                                                                                    if(node_396) { node_396 = come_decrement_ref_count2(node_396, ((struct sNode*)node_396)->finalize, ((struct sNode*)node_396)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional589=string_operator_equals(buf_387,"__func__"),                                                                                    _if_conditional589) {
                                                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2402, "struct sNode");
                                                                                        _inf_obj_value18=come_increment_ref_count(((struct sFuncNode*)(right_value573=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value572=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05function.c", 2402, "sFuncNode")))),info))));
                                                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                                                        _inf_value18->finalize=(void*)sFuncNode_finalize;
                                                                                        _inf_value18->clone=(void*)sFuncNode_clone;
                                                                                        _inf_value18->compile=(void*)sFuncNode_compile;
                                                                                        _inf_value18->sline=(void*)sFuncNode_sline;
                                                                                        _inf_value18->sname=(void*)sFuncNode_sname;
                                                                                        _inf_value18->terminated=(void*)sFuncNode_terminated;
                                                                                        _inf_value18->kind=(void*)sFuncNode_kind;
                                                                                        __result391__ = __result_obj__ = ((struct sNode*)(right_value578=_inf_value18));
                                                                                        buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sFuncNode_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sFuncNode_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value578) { right_value578 = come_decrement_ref_count2(right_value578, ((struct sNode*)right_value578)->finalize, ((struct sNode*)right_value578)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result391__;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional598=string_operator_equals(buf_387,"__line__"),                                                                                        _if_conditional598) {
                                                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2405, "struct sNode");
                                                                                            _inf_obj_value19=come_increment_ref_count(((struct sLineNode*)(right_value580=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value579=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05function.c", 2405, "sLineNode")))),info))));
                                                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                                                            _inf_value19->finalize=(void*)sLineNode_finalize;
                                                                                            _inf_value19->clone=(void*)sLineNode_clone;
                                                                                            _inf_value19->compile=(void*)sLineNode_compile;
                                                                                            _inf_value19->sline=(void*)sLineNode_sline;
                                                                                            _inf_value19->sname=(void*)sLineNode_sname;
                                                                                            _inf_value19->terminated=(void*)sLineNode_terminated;
                                                                                            _inf_value19->kind=(void*)sLineNode_kind;
                                                                                            __result394__ = __result_obj__ = ((struct sNode*)(right_value585=_inf_value19));
                                                                                            buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sLineNode_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sLineNode_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value585) { right_value585 = come_decrement_ref_count2(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result394__;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional607=string_operator_equals(buf_387,"__sname__"),                                                                                            _if_conditional607) {
                                                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2408, "struct sNode");
                                                                                                _inf_obj_value20=come_increment_ref_count(((struct sSNameNode*)(right_value587=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value586=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05function.c", 2408, "sSNameNode")))),info))));
                                                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                                                _inf_value20->finalize=(void*)sSNameNode_finalize;
                                                                                                _inf_value20->clone=(void*)sSNameNode_clone;
                                                                                                _inf_value20->compile=(void*)sSNameNode_compile;
                                                                                                _inf_value20->sline=(void*)sSNameNode_sline;
                                                                                                _inf_value20->sname=(void*)sSNameNode_sname;
                                                                                                _inf_value20->terminated=(void*)sSNameNode_terminated;
                                                                                                _inf_value20->kind=(void*)sSNameNode_kind;
                                                                                                __result397__ = __result_obj__ = ((struct sNode*)(right_value592=_inf_value20));
                                                                                                buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sSNameNode_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                come_call_finalizer2(sSNameNode_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(right_value592) { right_value592 = come_decrement_ref_count2(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                return __result397__;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional616=string_operator_equals(buf_387,"__caller_func__"),                                                                                                _if_conditional616) {
                                                                                                    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2411, "struct sNode");
                                                                                                    _inf_obj_value21=come_increment_ref_count(((struct sCallerFuncNode*)(right_value594=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value593=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05function.c", 2411, "sCallerFuncNode")))),info))));
                                                                                                    _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                                                    _inf_value21->finalize=(void*)sCallerFuncNode_finalize;
                                                                                                    _inf_value21->clone=(void*)sCallerFuncNode_clone;
                                                                                                    _inf_value21->compile=(void*)sCallerFuncNode_compile;
                                                                                                    _inf_value21->sline=(void*)sCallerFuncNode_sline;
                                                                                                    _inf_value21->sname=(void*)sCallerFuncNode_sname;
                                                                                                    _inf_value21->terminated=(void*)sCallerFuncNode_terminated;
                                                                                                    _inf_value21->kind=(void*)sCallerFuncNode_kind;
                                                                                                    __result400__ = __result_obj__ = ((struct sNode*)(right_value599=_inf_value21));
                                                                                                    buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer2(sCallerFuncNode_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    come_call_finalizer2(sCallerFuncNode_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(right_value599) { right_value599 = come_decrement_ref_count2(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    return __result400__;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional625=string_operator_equals(buf_387,"__caller_line__"),                                                                                                    _if_conditional625) {
                                                                                                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2414, "struct sNode");
                                                                                                        _inf_obj_value22=come_increment_ref_count(((struct sCallerLineNode*)(right_value601=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value600=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05function.c", 2414, "sCallerLineNode")))),info))));
                                                                                                        _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                                        _inf_value22->finalize=(void*)sCallerLineNode_finalize;
                                                                                                        _inf_value22->clone=(void*)sCallerLineNode_clone;
                                                                                                        _inf_value22->compile=(void*)sCallerLineNode_compile;
                                                                                                        _inf_value22->sline=(void*)sCallerLineNode_sline;
                                                                                                        _inf_value22->sname=(void*)sCallerLineNode_sname;
                                                                                                        _inf_value22->terminated=(void*)sCallerLineNode_terminated;
                                                                                                        _inf_value22->kind=(void*)sCallerLineNode_kind;
                                                                                                        __result403__ = __result_obj__ = ((struct sNode*)(right_value606=_inf_value22));
                                                                                                        buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        come_call_finalizer2(sCallerLineNode_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        come_call_finalizer2(sCallerLineNode_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(right_value606) { right_value606 = come_decrement_ref_count2(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        return __result403__;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(_if_conditional634=string_operator_equals(buf_387,"__caller_sname__"),                                                                                                        _if_conditional634) {
                                                                                                            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2417, "struct sNode");
                                                                                                            _inf_obj_value23=come_increment_ref_count(((struct sCallerSNameNode*)(right_value608=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value607=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05function.c", 2417, "sCallerSNameNode")))),info))));
                                                                                                            _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                                            _inf_value23->finalize=(void*)sCallerSNameNode_finalize;
                                                                                                            _inf_value23->clone=(void*)sCallerSNameNode_clone;
                                                                                                            _inf_value23->compile=(void*)sCallerSNameNode_compile;
                                                                                                            _inf_value23->sline=(void*)sCallerSNameNode_sline;
                                                                                                            _inf_value23->sname=(void*)sCallerSNameNode_sname;
                                                                                                            _inf_value23->terminated=(void*)sCallerSNameNode_terminated;
                                                                                                            _inf_value23->kind=(void*)sCallerSNameNode_kind;
                                                                                                            __result406__ = __result_obj__ = ((struct sNode*)(right_value613=_inf_value23));
                                                                                                            buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            come_call_finalizer2(sCallerSNameNode_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            come_call_finalizer2(sCallerSNameNode_finalize,right_value608, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            if(right_value613) { right_value613 = come_decrement_ref_count2(right_value613, ((struct sNode*)right_value613)->finalize, ((struct sNode*)right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                            return __result406__;
                                                                                                        }
                                                                                                        else {
                                                                                                            if(_if_conditional643=(string_operator_equals(buf_387,"sizeof")||string_operator_equals(buf_387,"_Alignof")||string_operator_equals(buf_387,"_Alignas")||string_operator_equals(buf_387,"__alignof__"))&&*info->p==40,                                                                                                            _if_conditional643) {
                                                                                                                node_403=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value614=string_node_v21(buf_387,head_385,head_sline_386,info))));
                                                                                                                if(right_value614) { right_value614 = come_decrement_ref_count2(right_value614, ((struct sNode*)right_value614)->finalize, ((struct sNode*)right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                __dec_obj239=node_403;
                                                                                                                node_403=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value615=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_403),info))));
                                                                                                                if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                if(right_value615) { right_value615 = come_decrement_ref_count2(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                __result407__ = __result_obj__ = node_403;
                                                                                                                if(node_403) { node_403 = come_decrement_ref_count2(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                return __result407__;
                                                                                                                if(node_403) { node_403 = come_decrement_ref_count2(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                            }
                                                                                                            else {
                                                                                                                if(fun_name_with_type_name_394) {
                                                                                                                    fun_name_404=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value617=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value616=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2427, "buffer"))))))));
                                                                                                                    come_call_finalizer2(buffer_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(buffer_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    buffer_append_str(fun_name_404,buf_387);
                                                                                                                    type_408=(struct sType*)come_increment_ref_count(((struct sType*)(right_value619=sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(right_value618=buffer_to_string(fun_name_404))))))));
                                                                                                                    right_value618 = come_decrement_ref_count2(right_value618, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(sType_finalize,right_value619, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    if(_if_conditional649=type_408==((void*)0),                                                                                                                    _if_conditional649) {
                                                                                                                        klass_414=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value620=buffer_to_string(fun_name_404))));
                                                                                                                        right_value620 = come_decrement_ref_count2(right_value620, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        if(klass_414) {
                                                                                                                            __dec_obj240=type_408;
                                                                                                                            type_408=(struct sType*)come_increment_ref_count(((struct sType*)(right_value622=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value621=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2437, "sType")))),buf_387,(_Bool)0,info))));
                                                                                                                            come_call_finalizer2(sType_finalize,__dec_obj240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                            come_call_finalizer2(sType_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                            come_call_finalizer2(sType_finalize,right_value622, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        }
                                                                                                                        else {
                                                                                                                            err_msg(info,"null type(%s)",buf_387);
                                                                                                                            exit(2);
                                                                                                                        }
                                                                                                                    }
                                                                                                                    while(_while_condtional38=*info->p==42,                                                                                                                    _while_condtional38) {
                                                                                                                        info->p++;
                                                                                                                        skip_spaces_and_lf(info);
                                                                                                                        if(_if_conditional661=type_408->mClass->mStruct==(_Bool)0,                                                                                                                        _if_conditional661) {
                                                                                                                            buffer_append_str(fun_name_404,"p");
                                                                                                                        }
                                                                                                                    }
                                                                                                                    expected_next_character(58,info);
                                                                                                                    expected_next_character(58,info);
                                                                                                                    buffer_append_str(fun_name_404,"_");
                                                                                                                    buf2_415=(char*)come_increment_ref_count(((char*)(right_value623=parse_word(info))));
                                                                                                                    right_value623 = come_decrement_ref_count2(right_value623, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    buffer_append_str(fun_name_404,buf2_415);
                                                                                                                    node_416=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value625=parse_function_call(((char*)(right_value624=buffer_to_string(fun_name_404))),info))));
                                                                                                                    right_value624 = come_decrement_ref_count2(right_value624, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    if(right_value625) { right_value625 = come_decrement_ref_count2(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __dec_obj241=node_416;
                                                                                                                    node_416=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value626=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_416),info))));
                                                                                                                    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value626) { right_value626 = come_decrement_ref_count2(right_value626, ((struct sNode*)right_value626)->finalize, ((struct sNode*)right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __dec_obj242=node_416;
                                                                                                                    node_416=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value627=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_416),info))));
                                                                                                                    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value627) { right_value627 = come_decrement_ref_count2(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __result416__ = __result_obj__ = node_416;
                                                                                                                    come_call_finalizer2(buffer_finalize,fun_name_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    come_call_finalizer2(sType_finalize,type_408, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    buf2_415 = come_decrement_ref_count2(buf2_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    if(node_416) { node_416 = come_decrement_ref_count2(node_416, ((struct sNode*)node_416)->finalize, ((struct sNode*)node_416)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                    buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    return __result416__;
                                                                                                                    come_call_finalizer2(buffer_finalize,fun_name_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    come_call_finalizer2(sType_finalize,type_408, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    buf2_415 = come_decrement_ref_count2(buf2_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    if(node_416) { node_416 = come_decrement_ref_count2(node_416, ((struct sNode*)node_416)->finalize, ((struct sNode*)node_416)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                }
                                                                                                                else {
                                                                                                                    if(_if_conditional662=*info->p==58&&*(info->p+1)==58,                                                                                                                    _if_conditional662) {
                                                                                                                        info->p+=2;
                                                                                                                        skip_spaces_and_lf(info);
                                                                                                                        fun_name_417=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value629=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value628=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2474, "buffer"))))))));
                                                                                                                        come_call_finalizer2(buffer_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        come_call_finalizer2(buffer_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        buffer_append_str(fun_name_417,buf_387);
                                                                                                                        buffer_append_str(fun_name_417,"_");
                                                                                                                        buf2_418=(char*)come_increment_ref_count(((char*)(right_value630=parse_word(info))));
                                                                                                                        right_value630 = come_decrement_ref_count2(right_value630, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        buffer_append_str(fun_name_417,buf2_418);
                                                                                                                        node_419=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value632=parse_function_call(((char*)(right_value631=buffer_to_string(fun_name_417))),info))));
                                                                                                                        right_value631 = come_decrement_ref_count2(right_value631, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        if(right_value632) { right_value632 = come_decrement_ref_count2(right_value632, ((struct sNode*)right_value632)->finalize, ((struct sNode*)right_value632)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __dec_obj243=node_419;
                                                                                                                        node_419=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value633=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_419),info))));
                                                                                                                        if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                        if(right_value633) { right_value633 = come_decrement_ref_count2(right_value633, ((struct sNode*)right_value633)->finalize, ((struct sNode*)right_value633)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __dec_obj244=node_419;
                                                                                                                        node_419=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value634=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_419),info))));
                                                                                                                        if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                        if(right_value634) { right_value634 = come_decrement_ref_count2(right_value634, ((struct sNode*)right_value634)->finalize, ((struct sNode*)right_value634)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __result417__ = __result_obj__ = node_419;
                                                                                                                        come_call_finalizer2(buffer_finalize,fun_name_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                        buf2_418 = come_decrement_ref_count2(buf2_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                        buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        return __result417__;
                                                                                                                        come_call_finalizer2(buffer_finalize,fun_name_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                        buf2_418 = come_decrement_ref_count2(buf2_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                    }
                                                                                                                    else {
                                                                                                                        if(_if_conditional663=string_operator_not_equals(buf_387,"if")&&string_operator_not_equals(buf_387,"while")&&string_operator_not_equals(buf_387,"for")&&string_operator_not_equals(buf_387,"switch")&&string_operator_not_equals(buf_387,"return")&&string_operator_not_equals(buf_387,"sizeof")&&string_operator_not_equals(buf_387,"isheap")&&string_operator_not_equals(buf_387,"ispointer")&&string_operator_not_equals(buf_387,"guard")&&string_operator_not_equals(buf_387,"__typeof__")&&string_operator_not_equals(buf_387,"dynamic_typeof")&&string_operator_not_equals(buf_387,"typeof")&&string_operator_not_equals(buf_387,"gc_inc")&&string_operator_not_equals(buf_387,"gc_dec")&&string_operator_not_equals(buf_387,"case")&&string_operator_not_equals(buf_387,"_Alignof")&&string_operator_not_equals(buf_387,"__alignof__")&&string_operator_not_equals(buf_387,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__390),                                                                                                                        _if_conditional663) {
                                                                                                                            node_420=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value635=parse_function_call(buf_387,info))));
                                                                                                                            if(right_value635) { right_value635 = come_decrement_ref_count2(right_value635, ((struct sNode*)right_value635)->finalize, ((struct sNode*)right_value635)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj245=node_420;
                                                                                                                            node_420=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value636=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_420),info))));
                                                                                                                            if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value636) { right_value636 = come_decrement_ref_count2(right_value636, ((struct sNode*)right_value636)->finalize, ((struct sNode*)right_value636)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj246=node_420;
                                                                                                                            node_420=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value637=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_420),info))));
                                                                                                                            if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value637) { right_value637 = come_decrement_ref_count2(right_value637, ((struct sNode*)right_value637)->finalize, ((struct sNode*)right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __result418__ = __result_obj__ = node_420;
                                                                                                                            if(node_420) { node_420 = come_decrement_ref_count2(node_420, ((struct sNode*)node_420)->finalize, ((struct sNode*)node_420)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                            buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                            return __result418__;
                                                                                                                            if(node_420) { node_420 = come_decrement_ref_count2(node_420, ((struct sNode*)node_420)->finalize, ((struct sNode*)node_420)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                        }
                                                                                                                        else {
                                                                                                                            node_421=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value638=string_node_v21(buf_387,head_385,head_sline_386,info))));
                                                                                                                            if(right_value638) { right_value638 = come_decrement_ref_count2(right_value638, ((struct sNode*)right_value638)->finalize, ((struct sNode*)right_value638)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj247=node_421;
                                                                                                                            node_421=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value639=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_421),info))));
                                                                                                                            if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value639) { right_value639 = come_decrement_ref_count2(right_value639, ((struct sNode*)right_value639)->finalize, ((struct sNode*)right_value639)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __result419__ = __result_obj__ = node_421;
                                                                                                                            if(node_421) { node_421 = come_decrement_ref_count2(node_421, ((struct sNode*)node_421)->finalize, ((struct sNode*)node_421)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                            buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                            return __result419__;
                                                                                                                            if(node_421) { node_421 = come_decrement_ref_count2(node_421, ((struct sNode*)node_421)->finalize, ((struct sNode*)node_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                                                                            buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            if(_if_conditional664=*info->p==40,                                                                            _if_conditional664) {
                                                                                info->p++;
                                                                                skip_spaces_and_lf(info);
                                                                                cast_expression_flag_422=(_Bool)0;
                                                                                {
                                                                                    p_423=info->p;
                                                                                    sline_424=info->sline;
                                                                                    word_425=(char*)come_increment_ref_count(((char*)(right_value640=__builtin_string(""))));
                                                                                    right_value640 = come_decrement_ref_count2(right_value640, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional665=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional665) {
                                                                                        __dec_obj248=word_425;
                                                                                        word_425=(char*)come_increment_ref_count(((char*)(right_value641=parse_word(info))));
                                                                                        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value641 = come_decrement_ref_count2(right_value641, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    if(_if_conditional666=is_type_name(word_425,info),                                                                                    _if_conditional666) {
                                                                                        cast_expression_flag_422=(_Bool)1;
                                                                                    }
                                                                                    info->p=p_423;
                                                                                    info->sline=sline_424;
                                                                                    word_425 = come_decrement_ref_count2(word_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                tuple_expression_flag_426=(_Bool)0;
                                                                                {
                                                                                    p_427=info->p;
                                                                                    sline_428=info->sline;
                                                                                    no_comma_429=info->no_comma;
                                                                                    info->no_comma=(_Bool)1;
                                                                                    no_output_err_430=info->no_output_err;
                                                                                    info->no_output_err=(_Bool)1;
                                                                                    no_output_come_code_431=info->no_output_come_code;
                                                                                    info->no_output_come_code=(_Bool)1;
                                                                                    node_432=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value642=expression_v13(info))));
                                                                                    if(right_value642) { right_value642 = come_decrement_ref_count2(right_value642, ((struct sNode*)right_value642)->finalize, ((struct sNode*)right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    node2_433=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value643=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_432),info))));
                                                                                    if(right_value643) { right_value643 = come_decrement_ref_count2(right_value643, ((struct sNode*)right_value643)->finalize, ((struct sNode*)right_value643)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    info->no_comma=no_comma_429;
                                                                                    info->no_output_err=no_output_err_430;
                                                                                    info->no_output_come_code=no_output_come_code_431;
                                                                                    if(_if_conditional667=*info->p==44,                                                                                    _if_conditional667) {
                                                                                        tuple_expression_flag_426=(_Bool)1;
                                                                                    }
                                                                                    info->p=p_427;
                                                                                    info->sline=sline_428;
                                                                                    if(node_432) { node_432 = come_decrement_ref_count2(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    if(node2_433) { node2_433 = come_decrement_ref_count2(node2_433, ((struct sNode*)node2_433)->finalize, ((struct sNode*)node2_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                if(_if_conditional668=!gComeC&&tuple_expression_flag_426,                                                                                _if_conditional668) {
                                                                                    node_434=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value644=parse_tuple(info))));
                                                                                    if(right_value644) { right_value644 = come_decrement_ref_count2(right_value644, ((struct sNode*)right_value644)->finalize, ((struct sNode*)right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj249=node_434;
                                                                                    node_434=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value645=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_434),info))));
                                                                                    if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value645) { right_value645 = come_decrement_ref_count2(right_value645, ((struct sNode*)right_value645)->finalize, ((struct sNode*)right_value645)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __result420__ = __result_obj__ = node_434;
                                                                                    if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                    return __result420__;
                                                                                    if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                else {
                                                                                    if(cast_expression_flag_422) {
                                                                                        parse_sharp_v5(info);
                                                                                        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value646=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_435=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                        name_436=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                        err_437=multiple_assign_var8->v3;
                                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional670=!err_437,                                                                                        _if_conditional670) {
                                                                                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                                                                            exit(2);
                                                                                        }
                                                                                        parse_sharp_v5(info);
                                                                                        expected_next_character(41,info);
                                                                                        node_438=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value647=expression_node_v99(info))));
                                                                                        if(right_value647) { right_value647 = come_decrement_ref_count2(right_value647, ((struct sNode*)right_value647)->finalize, ((struct sNode*)right_value647)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __dec_obj250=node_438;
                                                                                        node_438=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value648=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_438),info))));
                                                                                        if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value648) { right_value648 = come_decrement_ref_count2(right_value648, ((struct sNode*)right_value648)->finalize, ((struct sNode*)right_value648)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2582, "struct sNode");
                                                                                        _inf_obj_value24=come_increment_ref_count(((struct sCastNode*)(right_value650=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value649=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05function.c", 2582, "sCastNode")))),type_435,node_438,info))));
                                                                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                        _inf_value24->finalize=(void*)sCastNode_finalize;
                                                                                        _inf_value24->clone=(void*)sCastNode_clone;
                                                                                        _inf_value24->compile=(void*)sCastNode_compile;
                                                                                        _inf_value24->sline=(void*)sCastNode_sline;
                                                                                        _inf_value24->sname=(void*)sCastNode_sname;
                                                                                        _inf_value24->terminated=(void*)sCastNode_terminated;
                                                                                        _inf_value24->kind=(void*)sCastNode_kind;
                                                                                        __result423__ = __result_obj__ = ((struct sNode*)(right_value655=_inf_value24));
                                                                                        come_call_finalizer2(sType_finalize,type_435, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_436 = come_decrement_ref_count2(name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        if(node_438) { node_438 = come_decrement_ref_count2(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer2(sCastNode_finalize,right_value649, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sCastNode_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value655) { right_value655 = come_decrement_ref_count2(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result423__;
                                                                                        come_call_finalizer2(sType_finalize,type_435, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_436 = come_decrement_ref_count2(name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        if(node_438) { node_438 = come_decrement_ref_count2(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                    else {
                                                                                        parse_sharp_v5(info);
                                                                                        node_440=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value656=expression_v13(info))));
                                                                                        if(right_value656) { right_value656 = come_decrement_ref_count2(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        parse_sharp_v5(info);
                                                                                        expected_next_character(41,info);
                                                                                        parse_sharp_v5(info);
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2592, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sParenNode*)(right_value658=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value657=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05function.c", 2592, "sParenNode")))),node_440,info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sParenNode_finalize;
                                                                                        _inf_value25->clone=(void*)sParenNode_clone;
                                                                                        _inf_value25->compile=(void*)sParenNode_compile;
                                                                                        _inf_value25->sline=(void*)sParenNode_sline;
                                                                                        _inf_value25->sname=(void*)sParenNode_sname;
                                                                                        _inf_value25->terminated=(void*)sParenNode_terminated;
                                                                                        _inf_value25->kind=(void*)sParenNode_kind;
                                                                                        __dec_obj256=node_440;
                                                                                        node_440=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value662=_inf_value25)));
                                                                                        if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        come_call_finalizer2(sParenNode_finalize,right_value657, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sParenNode_finalize,right_value658, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value662) { right_value662 = come_decrement_ref_count2(right_value662, ((struct sNode*)right_value662)->finalize, ((struct sNode*)right_value662)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __dec_obj257=node_440;
                                                                                        node_440=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value663=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_440),info))));
                                                                                        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value663) { right_value663 = come_decrement_ref_count2(right_value663, ((struct sNode*)right_value663)->finalize, ((struct sNode*)right_value663)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __result426__ = __result_obj__ = node_440;
                                                                                        if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                        return __result426__;
                                                                                        if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                node_442=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value664=expression_node_v98(info))));
                                                                                if(right_value664) { right_value664 = come_decrement_ref_count2(right_value664, ((struct sNode*)right_value664)->finalize, ((struct sNode*)right_value664)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                __dec_obj258=node_442;
                                                                                node_442=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value665=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_442),info))));
                                                                                if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value665) { right_value665 = come_decrement_ref_count2(right_value665, ((struct sNode*)right_value665)->finalize, ((struct sNode*)right_value665)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                __result427__ = __result_obj__ = node_442;
                                                                                if(node_442) { node_442 = come_decrement_ref_count2(node_442, ((struct sNode*)node_442)->finalize, ((struct sNode*)node_442)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result427__;
                                                                                if(node_442) { node_442 = come_decrement_ref_count2(node_442, ((struct sNode*)node_442)->finalize, ((struct sNode*)node_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result428__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result428__;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional468;
_Bool _if_conditional469;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional468=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional468) {
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional469=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional469) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional470;
struct sLogicalDenial* __result341__;
void* right_value454;
struct sLogicalDenial* result_350;
_Bool _if_conditional471;
void* right_value455;
struct sNode* __dec_obj178;
_Bool _if_conditional472;
_Bool _if_conditional473;
void* right_value456;
char* __dec_obj179;
struct sLogicalDenial* __result342__;
memset(&__result_obj__, 0, sizeof(void*));
right_value454 = (void*)0;
memset(&result_350, 0, sizeof(struct sLogicalDenial*));
right_value455 = (void*)0;
right_value456 = (void*)0;
                if(_if_conditional470=self==(void*)0,                _if_conditional470) {
                    __result341__ = __result_obj__ = (void*)0;
                    return __result341__;
                }
                result_350=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value454=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "sLogicalDenial"))));
                come_call_finalizer2(sLogicalDenial_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional471=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional471) {
                    __dec_obj178=result_350->value;
                    result_350->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=sNode_clone(self->value))));
                    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional472=self!=((void*)0),                _if_conditional472) {
                    result_350->sline=self->sline;
                }
                if(_if_conditional473=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional473) {
                    __dec_obj179=result_350->sname;
                    result_350->sname=(char*)come_increment_ref_count(((char*)(right_value456=string_clone(self->sname))));
                    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value456 = come_decrement_ref_count2(right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result342__ = __result_obj__ = result_350;
                come_call_finalizer2(sLogicalDenial_finalize,result_350, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result342__;
                come_call_finalizer2(sLogicalDenial_finalize,result_350, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional475;
_Bool _if_conditional476;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional475=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional475) {
                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional476=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional476) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional477;
struct sMinusMinusNode2* __result344__;
void* right_value461;
struct sMinusMinusNode2* result_352;
_Bool _if_conditional478;
void* right_value462;
struct sNode* __dec_obj180;
_Bool _if_conditional479;
_Bool _if_conditional480;
void* right_value463;
char* __dec_obj181;
struct sMinusMinusNode2* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
right_value461 = (void*)0;
memset(&result_352, 0, sizeof(struct sMinusMinusNode2*));
right_value462 = (void*)0;
right_value463 = (void*)0;
                    if(_if_conditional477=self==(void*)0,                    _if_conditional477) {
                        __result344__ = __result_obj__ = (void*)0;
                        return __result344__;
                    }
                    result_352=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value461=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "sMinusMinusNode2"))));
                    come_call_finalizer2(sMinusMinusNode2_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional478=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional478) {
                        __dec_obj180=result_352->value;
                        result_352->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value462=sNode_clone(self->value))));
                        if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional479=self!=((void*)0),                    _if_conditional479) {
                        result_352->sline=self->sline;
                    }
                    if(_if_conditional480=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional480) {
                        __dec_obj181=result_352->sname;
                        result_352->sname=(char*)come_increment_ref_count(((char*)(right_value463=string_clone(self->sname))));
                        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value463 = come_decrement_ref_count2(right_value463, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result345__ = __result_obj__ = result_352;
                    come_call_finalizer2(sMinusMinusNode2_finalize,result_352, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result345__;
                    come_call_finalizer2(sMinusMinusNode2_finalize,result_352, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional482;
_Bool _if_conditional483;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional482=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional482) {
                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional483=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional483) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional484;
struct sMinusNode2* __result347__;
void* right_value468;
struct sMinusNode2* result_354;
_Bool _if_conditional485;
void* right_value469;
struct sNode* __dec_obj182;
_Bool _if_conditional486;
_Bool _if_conditional487;
void* right_value470;
char* __dec_obj183;
struct sMinusNode2* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
right_value468 = (void*)0;
memset(&result_354, 0, sizeof(struct sMinusNode2*));
right_value469 = (void*)0;
right_value470 = (void*)0;
                        if(_if_conditional484=self==(void*)0,                        _if_conditional484) {
                            __result347__ = __result_obj__ = (void*)0;
                            return __result347__;
                        }
                        result_354=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value468=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "sMinusNode2"))));
                        come_call_finalizer2(sMinusNode2_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional485=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional485) {
                            __dec_obj182=result_354->value;
                            result_354->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value469=sNode_clone(self->value))));
                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional486=self!=((void*)0),                        _if_conditional486) {
                            result_354->sline=self->sline;
                        }
                        if(_if_conditional487=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional487) {
                            __dec_obj183=result_354->sname;
                            result_354->sname=(char*)come_increment_ref_count(((char*)(right_value470=string_clone(self->sname))));
                            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value470 = come_decrement_ref_count2(right_value470, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result348__ = __result_obj__ = result_354;
                        come_call_finalizer2(sMinusNode2_finalize,result_354, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result348__;
                        come_call_finalizer2(sMinusNode2_finalize,result_354, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional489;
_Bool _if_conditional490;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional489=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional489) {
                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional490=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional490) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional491;
struct sPlusPlusNode2* __result350__;
void* right_value475;
struct sPlusPlusNode2* result_356;
_Bool _if_conditional492;
void* right_value476;
struct sNode* __dec_obj184;
_Bool _if_conditional493;
_Bool _if_conditional494;
void* right_value477;
char* __dec_obj185;
struct sPlusPlusNode2* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
right_value475 = (void*)0;
memset(&result_356, 0, sizeof(struct sPlusPlusNode2*));
right_value476 = (void*)0;
right_value477 = (void*)0;
                            if(_if_conditional491=self==(void*)0,                            _if_conditional491) {
                                __result350__ = __result_obj__ = (void*)0;
                                return __result350__;
                            }
                            result_356=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value475=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "sPlusPlusNode2"))));
                            come_call_finalizer2(sPlusPlusNode2_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional492=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional492) {
                                __dec_obj184=result_356->value;
                                result_356->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=sNode_clone(self->value))));
                                if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value476) { right_value476 = come_decrement_ref_count2(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional493=self!=((void*)0),                            _if_conditional493) {
                                result_356->sline=self->sline;
                            }
                            if(_if_conditional494=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional494) {
                                __dec_obj185=result_356->sname;
                                result_356->sname=(char*)come_increment_ref_count(((char*)(right_value477=string_clone(self->sname))));
                                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result351__ = __result_obj__ = result_356;
                            come_call_finalizer2(sPlusPlusNode2_finalize,result_356, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result351__;
                            come_call_finalizer2(sPlusPlusNode2_finalize,result_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sComplement_finalize(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional496;
_Bool _if_conditional497;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional496=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional496) {
                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional497=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional497) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional498;
struct sComplement* __result353__;
void* right_value482;
struct sComplement* result_358;
_Bool _if_conditional499;
void* right_value483;
struct sNode* __dec_obj186;
_Bool _if_conditional500;
_Bool _if_conditional501;
void* right_value484;
char* __dec_obj187;
struct sComplement* __result354__;
memset(&__result_obj__, 0, sizeof(void*));
right_value482 = (void*)0;
memset(&result_358, 0, sizeof(struct sComplement*));
right_value483 = (void*)0;
right_value484 = (void*)0;
                                if(_if_conditional498=self==(void*)0,                                _if_conditional498) {
                                    __result353__ = __result_obj__ = (void*)0;
                                    return __result353__;
                                }
                                result_358=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value482=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "sComplement"))));
                                come_call_finalizer2(sComplement_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional499=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional499) {
                                    __dec_obj186=result_358->value;
                                    result_358->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value483=sNode_clone(self->value))));
                                    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value483) { right_value483 = come_decrement_ref_count2(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional500=self!=((void*)0),                                _if_conditional500) {
                                    result_358->sline=self->sline;
                                }
                                if(_if_conditional501=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional501) {
                                    __dec_obj187=result_358->sname;
                                    result_358->sname=(char*)come_increment_ref_count(((char*)(right_value484=string_clone(self->sname))));
                                    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result354__ = __result_obj__ = result_358;
                                come_call_finalizer2(sComplement_finalize,result_358, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result354__;
                                come_call_finalizer2(sComplement_finalize,result_358, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sReturnNode_finalize(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional516;
_Bool _if_conditional517;
_Bool _if_conditional518;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional516=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional516) {
                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional517=self!=((void*)0)&&self->value_source!=((void*)0),                                                        _if_conditional517) {
                                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional518=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional518) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional519;
struct sReturnNode* __result363__;
void* right_value508;
struct sReturnNode* result_368;
_Bool _if_conditional520;
void* right_value509;
struct sNode* __dec_obj197;
_Bool _if_conditional521;
void* right_value510;
char* __dec_obj198;
_Bool _if_conditional522;
_Bool _if_conditional523;
void* right_value511;
char* __dec_obj199;
struct sReturnNode* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
right_value508 = (void*)0;
memset(&result_368, 0, sizeof(struct sReturnNode*));
right_value509 = (void*)0;
right_value510 = (void*)0;
right_value511 = (void*)0;
                                                        if(_if_conditional519=self==(void*)0,                                                        _if_conditional519) {
                                                            __result363__ = __result_obj__ = (void*)0;
                                                            return __result363__;
                                                        }
                                                        result_368=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value508=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"))));
                                                        come_call_finalizer2(sReturnNode_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional520=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional520) {
                                                            __dec_obj197=result_368->value;
                                                            result_368->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=sNode_clone(self->value))));
                                                            if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value509) { right_value509 = come_decrement_ref_count2(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional521=self!=((void*)0)&&self->value_source!=((void*)0),                                                        _if_conditional521) {
                                                            __dec_obj198=result_368->value_source;
                                                            result_368->value_source=(char*)come_increment_ref_count(((char*)(right_value510=string_clone(self->value_source))));
                                                            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value510 = come_decrement_ref_count2(right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional522=self!=((void*)0),                                                        _if_conditional522) {
                                                            result_368->sline=self->sline;
                                                        }
                                                        if(_if_conditional523=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional523) {
                                                            __dec_obj199=result_368->sname;
                                                            result_368->sname=(char*)come_increment_ref_count(((char*)(right_value511=string_clone(self->sname))));
                                                            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value511 = come_decrement_ref_count2(right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        __result364__ = __result_obj__ = result_368;
                                                        come_call_finalizer2(sReturnNode_finalize,result_368, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result364__;
                                                        come_call_finalizer2(sReturnNode_finalize,result_368, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentReturnNode_finalize(struct sParentReturnNode* self){
void* __result_obj__;
_Bool _if_conditional534;
_Bool _if_conditional535;
_Bool _if_conditional536;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional534=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional534) {
                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional535=self!=((void*)0)&&self->value_source!=((void*)0),                                                            _if_conditional535) {
                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            if(_if_conditional536=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional536) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sParentReturnNode* sParentReturnNode_clone(struct sParentReturnNode* self){
void* __result_obj__;
_Bool _if_conditional537;
struct sParentReturnNode* __result369__;
void* right_value527;
struct sParentReturnNode* result_374;
_Bool _if_conditional538;
void* right_value528;
struct sNode* __dec_obj205;
_Bool _if_conditional539;
void* right_value529;
char* __dec_obj206;
_Bool _if_conditional540;
_Bool _if_conditional541;
void* right_value530;
char* __dec_obj207;
struct sParentReturnNode* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value527 = (void*)0;
memset(&result_374, 0, sizeof(struct sParentReturnNode*));
right_value528 = (void*)0;
right_value529 = (void*)0;
right_value530 = (void*)0;
                                                            if(_if_conditional537=self==(void*)0,                                                            _if_conditional537) {
                                                                __result369__ = __result_obj__ = (void*)0;
                                                                return __result369__;
                                                            }
                                                            result_374=(struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value527=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "sParentReturnNode_clone", 3, "sParentReturnNode"))));
                                                            come_call_finalizer2(sParentReturnNode_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional538=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional538) {
                                                                __dec_obj205=result_374->value;
                                                                result_374->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value528=sNode_clone(self->value))));
                                                                if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value528) { right_value528 = come_decrement_ref_count2(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional539=self!=((void*)0)&&self->value_source!=((void*)0),                                                            _if_conditional539) {
                                                                __dec_obj206=result_374->value_source;
                                                                result_374->value_source=(char*)come_increment_ref_count(((char*)(right_value529=string_clone(self->value_source))));
                                                                __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value529 = come_decrement_ref_count2(right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            if(_if_conditional540=self!=((void*)0),                                                            _if_conditional540) {
                                                                result_374->sline=self->sline;
                                                            }
                                                            if(_if_conditional541=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional541) {
                                                                __dec_obj207=result_374->sname;
                                                                result_374->sname=(char*)come_increment_ref_count(((char*)(right_value530=string_clone(self->sname))));
                                                                __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value530 = come_decrement_ref_count2(right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result370__ = __result_obj__ = result_374;
                                                            come_call_finalizer2(sParentReturnNode_finalize,result_374, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result370__;
                                                            come_call_finalizer2(sParentReturnNode_finalize,result_374, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentBreakNode_finalize(struct sParentBreakNode* self){
void* __result_obj__;
_Bool _if_conditional543;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional543=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional543) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sParentBreakNode* sParentBreakNode_clone(struct sParentBreakNode* self){
void* __result_obj__;
_Bool _if_conditional544;
struct sParentBreakNode* __result372__;
void* right_value534;
struct sParentBreakNode* result_375;
_Bool _if_conditional545;
_Bool _if_conditional546;
void* right_value535;
char* __dec_obj208;
struct sParentBreakNode* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
right_value534 = (void*)0;
memset(&result_375, 0, sizeof(struct sParentBreakNode*));
right_value535 = (void*)0;
                                                            if(_if_conditional544=self==(void*)0,                                                            _if_conditional544) {
                                                                __result372__ = __result_obj__ = (void*)0;
                                                                return __result372__;
                                                            }
                                                            result_375=(struct sParentBreakNode*)come_increment_ref_count(((struct sParentBreakNode*)(right_value534=(struct sParentBreakNode*)come_calloc(1, sizeof(struct sParentBreakNode)*(1), "sParentBreakNode_clone", 3, "sParentBreakNode"))));
                                                            come_call_finalizer2(sParentBreakNode_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional545=self!=((void*)0),                                                            _if_conditional545) {
                                                                result_375->sline=self->sline;
                                                            }
                                                            if(_if_conditional546=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional546) {
                                                                __dec_obj208=result_375->sname;
                                                                result_375->sname=(char*)come_increment_ref_count(((char*)(right_value535=string_clone(self->sname))));
                                                                __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value535 = come_decrement_ref_count2(right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result373__ = __result_obj__ = result_375;
                                                            come_call_finalizer2(sParentBreakNode_finalize,result_375, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result373__;
                                                            come_call_finalizer2(sParentBreakNode_finalize,result_375, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentContinueNode_finalize(struct sParentContinueNode* self){
void* __result_obj__;
_Bool _if_conditional548;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional548=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional548) {
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sParentContinueNode* sParentContinueNode_clone(struct sParentContinueNode* self){
void* __result_obj__;
_Bool _if_conditional549;
struct sParentContinueNode* __result375__;
void* right_value539;
struct sParentContinueNode* result_376;
_Bool _if_conditional550;
_Bool _if_conditional551;
void* right_value540;
char* __dec_obj209;
struct sParentContinueNode* __result376__;
memset(&__result_obj__, 0, sizeof(void*));
right_value539 = (void*)0;
memset(&result_376, 0, sizeof(struct sParentContinueNode*));
right_value540 = (void*)0;
                                                                if(_if_conditional549=self==(void*)0,                                                                _if_conditional549) {
                                                                    __result375__ = __result_obj__ = (void*)0;
                                                                    return __result375__;
                                                                }
                                                                result_376=(struct sParentContinueNode*)come_increment_ref_count(((struct sParentContinueNode*)(right_value539=(struct sParentContinueNode*)come_calloc(1, sizeof(struct sParentContinueNode)*(1), "sParentContinueNode_clone", 3, "sParentContinueNode"))));
                                                                come_call_finalizer2(sParentContinueNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional550=self!=((void*)0),                                                                _if_conditional550) {
                                                                    result_376->sline=self->sline;
                                                                }
                                                                if(_if_conditional551=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional551) {
                                                                    __dec_obj209=result_376->sname;
                                                                    result_376->sname=(char*)come_increment_ref_count(((char*)(right_value540=string_clone(self->sname))));
                                                                    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value540 = come_decrement_ref_count2(right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                __result376__ = __result_obj__ = result_376;
                                                                come_call_finalizer2(sParentContinueNode_finalize,result_376, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result376__;
                                                                come_call_finalizer2(sParentContinueNode_finalize,result_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional554;
_Bool _if_conditional555;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional554=self!=((void*)0)&&self->value!=((void*)0),                                                                    _if_conditional554) {
                                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                    if(_if_conditional555=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional555) {
                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional556;
struct sDerefferenceNode* __result378__;
void* right_value545;
struct sDerefferenceNode* result_380;
_Bool _if_conditional557;
void* right_value546;
struct sNode* __dec_obj210;
_Bool _if_conditional558;
_Bool _if_conditional559;
_Bool _if_conditional560;
void* right_value547;
char* __dec_obj211;
struct sDerefferenceNode* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
right_value545 = (void*)0;
memset(&result_380, 0, sizeof(struct sDerefferenceNode*));
right_value546 = (void*)0;
right_value547 = (void*)0;
                                                                    if(_if_conditional556=self==(void*)0,                                                                    _if_conditional556) {
                                                                        __result378__ = __result_obj__ = (void*)0;
                                                                        return __result378__;
                                                                    }
                                                                    result_380=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value545=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "sDerefferenceNode"))));
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional557=self!=((void*)0)&&self->value!=((void*)0),                                                                    _if_conditional557) {
                                                                        __dec_obj210=result_380->value;
                                                                        result_380->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value546=sNode_clone(self->value))));
                                                                        if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); }
                                                                        if(right_value546) { right_value546 = come_decrement_ref_count2(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    }
                                                                    if(_if_conditional558=self!=((void*)0),                                                                    _if_conditional558) {
                                                                        result_380->mQuote=self->mQuote;
                                                                    }
                                                                    if(_if_conditional559=self!=((void*)0),                                                                    _if_conditional559) {
                                                                        result_380->sline=self->sline;
                                                                    }
                                                                    if(_if_conditional560=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional560) {
                                                                        __dec_obj211=result_380->sname;
                                                                        result_380->sname=(char*)come_increment_ref_count(((char*)(right_value547=string_clone(self->sname))));
                                                                        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    __result379__ = __result_obj__ = result_380;
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,result_380, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result379__;
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,result_380, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional562;
_Bool _if_conditional563;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional562=self!=((void*)0)&&self->value!=((void*)0),                                                                        _if_conditional562) {
                                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                        if(_if_conditional563=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional563) {
                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional564;
struct sRefferenceNode* __result381__;
void* right_value552;
struct sRefferenceNode* result_382;
_Bool _if_conditional565;
void* right_value553;
struct sNode* __dec_obj212;
_Bool _if_conditional566;
_Bool _if_conditional567;
void* right_value554;
char* __dec_obj213;
struct sRefferenceNode* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
right_value552 = (void*)0;
memset(&result_382, 0, sizeof(struct sRefferenceNode*));
right_value553 = (void*)0;
right_value554 = (void*)0;
                                                                        if(_if_conditional564=self==(void*)0,                                                                        _if_conditional564) {
                                                                            __result381__ = __result_obj__ = (void*)0;
                                                                            return __result381__;
                                                                        }
                                                                        result_382=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value552=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "sRefferenceNode"))));
                                                                        come_call_finalizer2(sRefferenceNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional565=self!=((void*)0)&&self->value!=((void*)0),                                                                        _if_conditional565) {
                                                                            __dec_obj212=result_382->value;
                                                                            result_382->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value553=sNode_clone(self->value))));
                                                                            if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); }
                                                                            if(right_value553) { right_value553 = come_decrement_ref_count2(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        }
                                                                        if(_if_conditional566=self!=((void*)0),                                                                        _if_conditional566) {
                                                                            result_382->sline=self->sline;
                                                                        }
                                                                        if(_if_conditional567=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional567) {
                                                                            __dec_obj213=result_382->sname;
                                                                            result_382->sname=(char*)come_increment_ref_count(((char*)(right_value554=string_clone(self->sname))));
                                                                            __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value554 = come_decrement_ref_count2(right_value554, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        __result382__ = __result_obj__ = result_382;
                                                                        come_call_finalizer2(sRefferenceNode_finalize,result_382, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result382__;
                                                                        come_call_finalizer2(sRefferenceNode_finalize,result_382, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sReverseNode_finalize(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional569;
_Bool _if_conditional570;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional569=self!=((void*)0)&&self->value!=((void*)0),                                                                            _if_conditional569) {
                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            if(_if_conditional570=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional570) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional571;
struct sReverseNode* __result384__;
void* right_value559;
struct sReverseNode* result_384;
_Bool _if_conditional572;
void* right_value560;
struct sNode* __dec_obj214;
_Bool _if_conditional573;
_Bool _if_conditional574;
void* right_value561;
char* __dec_obj215;
struct sReverseNode* __result385__;
memset(&__result_obj__, 0, sizeof(void*));
right_value559 = (void*)0;
memset(&result_384, 0, sizeof(struct sReverseNode*));
right_value560 = (void*)0;
right_value561 = (void*)0;
                                                                            if(_if_conditional571=self==(void*)0,                                                                            _if_conditional571) {
                                                                                __result384__ = __result_obj__ = (void*)0;
                                                                                return __result384__;
                                                                            }
                                                                            result_384=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value559=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "sReverseNode"))));
                                                                            come_call_finalizer2(sReverseNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional572=self!=((void*)0)&&self->value!=((void*)0),                                                                            _if_conditional572) {
                                                                                __dec_obj214=result_384->value;
                                                                                result_384->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value560=sNode_clone(self->value))));
                                                                                if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count2(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value560) { right_value560 = come_decrement_ref_count2(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            }
                                                                            if(_if_conditional573=self!=((void*)0),                                                                            _if_conditional573) {
                                                                                result_384->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional574=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional574) {
                                                                                __dec_obj215=result_384->sname;
                                                                                result_384->sname=(char*)come_increment_ref_count(((char*)(right_value561=string_clone(self->sname))));
                                                                                __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result385__ = __result_obj__ = result_384;
                                                                            come_call_finalizer2(sReverseNode_finalize,result_384, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result385__;
                                                                            come_call_finalizer2(sReverseNode_finalize,result_384, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional590;
_Bool _if_conditional591;
_Bool _if_conditional592;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional590=self!=((void*)0)&&self->value!=((void*)0),                                                                                            _if_conditional590) {
                                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional591=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                            _if_conditional591) {
                                                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional592=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional592) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional593;
struct sFuncNode* __result389__;
void* right_value574;
struct sFuncNode* result_397;
_Bool _if_conditional594;
void* right_value575;
struct sNode* __dec_obj221;
_Bool _if_conditional595;
void* right_value576;
char* __dec_obj222;
_Bool _if_conditional596;
_Bool _if_conditional597;
void* right_value577;
char* __dec_obj223;
struct sFuncNode* __result390__;
memset(&__result_obj__, 0, sizeof(void*));
right_value574 = (void*)0;
memset(&result_397, 0, sizeof(struct sFuncNode*));
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
                                                                                            if(_if_conditional593=self==(void*)0,                                                                                            _if_conditional593) {
                                                                                                __result389__ = __result_obj__ = (void*)0;
                                                                                                return __result389__;
                                                                                            }
                                                                                            result_397=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value574=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"))));
                                                                                            come_call_finalizer2(sFuncNode_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional594=self!=((void*)0)&&self->value!=((void*)0),                                                                                            _if_conditional594) {
                                                                                                __dec_obj221=result_397->value;
                                                                                                result_397->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value575=sNode_clone(self->value))));
                                                                                                if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value575) { right_value575 = come_decrement_ref_count2(right_value575, ((struct sNode*)right_value575)->finalize, ((struct sNode*)right_value575)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional595=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                            _if_conditional595) {
                                                                                                __dec_obj222=result_397->value_source;
                                                                                                result_397->value_source=(char*)come_increment_ref_count(((char*)(right_value576=string_clone(self->value_source))));
                                                                                                __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value576 = come_decrement_ref_count2(right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional596=self!=((void*)0),                                                                                            _if_conditional596) {
                                                                                                result_397->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional597=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional597) {
                                                                                                __dec_obj223=result_397->sname;
                                                                                                result_397->sname=(char*)come_increment_ref_count(((char*)(right_value577=string_clone(self->sname))));
                                                                                                __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value577 = come_decrement_ref_count2(right_value577, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result390__ = __result_obj__ = result_397;
                                                                                            come_call_finalizer2(sFuncNode_finalize,result_397, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result390__;
                                                                                            come_call_finalizer2(sFuncNode_finalize,result_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional599;
_Bool _if_conditional600;
_Bool _if_conditional601;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                if(_if_conditional599=self!=((void*)0)&&self->value!=((void*)0),                                                                                                _if_conditional599) {
                                                                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
                                                                                                if(_if_conditional600=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                _if_conditional600) {
                                                                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                if(_if_conditional601=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional601) {
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional602;
struct sLineNode* __result392__;
void* right_value581;
struct sLineNode* result_398;
_Bool _if_conditional603;
void* right_value582;
struct sNode* __dec_obj224;
_Bool _if_conditional604;
void* right_value583;
char* __dec_obj225;
_Bool _if_conditional605;
_Bool _if_conditional606;
void* right_value584;
char* __dec_obj226;
struct sLineNode* __result393__;
memset(&__result_obj__, 0, sizeof(void*));
right_value581 = (void*)0;
memset(&result_398, 0, sizeof(struct sLineNode*));
right_value582 = (void*)0;
right_value583 = (void*)0;
right_value584 = (void*)0;
                                                                                                if(_if_conditional602=self==(void*)0,                                                                                                _if_conditional602) {
                                                                                                    __result392__ = __result_obj__ = (void*)0;
                                                                                                    return __result392__;
                                                                                                }
                                                                                                result_398=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value581=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"))));
                                                                                                come_call_finalizer2(sLineNode_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional603=self!=((void*)0)&&self->value!=((void*)0),                                                                                                _if_conditional603) {
                                                                                                    __dec_obj224=result_398->value;
                                                                                                    result_398->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value582=sNode_clone(self->value))));
                                                                                                    if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value582) { right_value582 = come_decrement_ref_count2(right_value582, ((struct sNode*)right_value582)->finalize, ((struct sNode*)right_value582)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                if(_if_conditional604=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                _if_conditional604) {
                                                                                                    __dec_obj225=result_398->value_source;
                                                                                                    result_398->value_source=(char*)come_increment_ref_count(((char*)(right_value583=string_clone(self->value_source))));
                                                                                                    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                if(_if_conditional605=self!=((void*)0),                                                                                                _if_conditional605) {
                                                                                                    result_398->sline=self->sline;
                                                                                                }
                                                                                                if(_if_conditional606=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional606) {
                                                                                                    __dec_obj226=result_398->sname;
                                                                                                    result_398->sname=(char*)come_increment_ref_count(((char*)(right_value584=string_clone(self->sname))));
                                                                                                    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value584 = come_decrement_ref_count2(right_value584, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                __result393__ = __result_obj__ = result_398;
                                                                                                come_call_finalizer2(sLineNode_finalize,result_398, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result393__;
                                                                                                come_call_finalizer2(sLineNode_finalize,result_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional608;
_Bool _if_conditional609;
_Bool _if_conditional610;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                    if(_if_conditional608=self!=((void*)0)&&self->value!=((void*)0),                                                                                                    _if_conditional608) {
                                                                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                    }
                                                                                                    if(_if_conditional609=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                    _if_conditional609) {
                                                                                                        self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
                                                                                                    if(_if_conditional610=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                    _if_conditional610) {
                                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional611;
struct sSNameNode* __result395__;
void* right_value588;
struct sSNameNode* result_399;
_Bool _if_conditional612;
void* right_value589;
struct sNode* __dec_obj227;
_Bool _if_conditional613;
void* right_value590;
char* __dec_obj228;
_Bool _if_conditional614;
_Bool _if_conditional615;
void* right_value591;
char* __dec_obj229;
struct sSNameNode* __result396__;
memset(&__result_obj__, 0, sizeof(void*));
right_value588 = (void*)0;
memset(&result_399, 0, sizeof(struct sSNameNode*));
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
                                                                                                    if(_if_conditional611=self==(void*)0,                                                                                                    _if_conditional611) {
                                                                                                        __result395__ = __result_obj__ = (void*)0;
                                                                                                        return __result395__;
                                                                                                    }
                                                                                                    result_399=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value588=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"))));
                                                                                                    come_call_finalizer2(sSNameNode_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(_if_conditional612=self!=((void*)0)&&self->value!=((void*)0),                                                                                                    _if_conditional612) {
                                                                                                        __dec_obj227=result_399->value;
                                                                                                        result_399->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value589=sNode_clone(self->value))));
                                                                                                        if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                        if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    }
                                                                                                    if(_if_conditional613=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                    _if_conditional613) {
                                                                                                        __dec_obj228=result_399->value_source;
                                                                                                        result_399->value_source=(char*)come_increment_ref_count(((char*)(right_value590=string_clone(self->value_source))));
                                                                                                        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value590 = come_decrement_ref_count2(right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    if(_if_conditional614=self!=((void*)0),                                                                                                    _if_conditional614) {
                                                                                                        result_399->sline=self->sline;
                                                                                                    }
                                                                                                    if(_if_conditional615=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                    _if_conditional615) {
                                                                                                        __dec_obj229=result_399->sname;
                                                                                                        result_399->sname=(char*)come_increment_ref_count(((char*)(right_value591=string_clone(self->sname))));
                                                                                                        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value591 = come_decrement_ref_count2(right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    __result396__ = __result_obj__ = result_399;
                                                                                                    come_call_finalizer2(sSNameNode_finalize,result_399, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                    return __result396__;
                                                                                                    come_call_finalizer2(sSNameNode_finalize,result_399, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional617;
_Bool _if_conditional618;
_Bool _if_conditional619;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                        if(_if_conditional617=self!=((void*)0)&&self->value!=((void*)0),                                                                                                        _if_conditional617) {
                                                                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                        }
                                                                                                        if(_if_conditional618=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                        _if_conditional618) {
                                                                                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
                                                                                                        if(_if_conditional619=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                        _if_conditional619) {
                                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional620;
struct sCallerFuncNode* __result398__;
void* right_value595;
struct sCallerFuncNode* result_400;
_Bool _if_conditional621;
void* right_value596;
struct sNode* __dec_obj230;
_Bool _if_conditional622;
void* right_value597;
char* __dec_obj231;
_Bool _if_conditional623;
_Bool _if_conditional624;
void* right_value598;
char* __dec_obj232;
struct sCallerFuncNode* __result399__;
memset(&__result_obj__, 0, sizeof(void*));
right_value595 = (void*)0;
memset(&result_400, 0, sizeof(struct sCallerFuncNode*));
right_value596 = (void*)0;
right_value597 = (void*)0;
right_value598 = (void*)0;
                                                                                                        if(_if_conditional620=self==(void*)0,                                                                                                        _if_conditional620) {
                                                                                                            __result398__ = __result_obj__ = (void*)0;
                                                                                                            return __result398__;
                                                                                                        }
                                                                                                        result_400=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value595=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"))));
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(_if_conditional621=self!=((void*)0)&&self->value!=((void*)0),                                                                                                        _if_conditional621) {
                                                                                                            __dec_obj230=result_400->value;
                                                                                                            result_400->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value596=sNode_clone(self->value))));
                                                                                                            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                            if(right_value596) { right_value596 = come_decrement_ref_count2(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        }
                                                                                                        if(_if_conditional622=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                        _if_conditional622) {
                                                                                                            __dec_obj231=result_400->value_source;
                                                                                                            result_400->value_source=(char*)come_increment_ref_count(((char*)(right_value597=string_clone(self->value_source))));
                                                                                                            __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        if(_if_conditional623=self!=((void*)0),                                                                                                        _if_conditional623) {
                                                                                                            result_400->sline=self->sline;
                                                                                                        }
                                                                                                        if(_if_conditional624=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                        _if_conditional624) {
                                                                                                            __dec_obj232=result_400->sname;
                                                                                                            result_400->sname=(char*)come_increment_ref_count(((char*)(right_value598=string_clone(self->sname))));
                                                                                                            __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value598 = come_decrement_ref_count2(right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        __result399__ = __result_obj__ = result_400;
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,result_400, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                        return __result399__;
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,result_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional626;
_Bool _if_conditional627;
_Bool _if_conditional628;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                            if(_if_conditional626=self!=((void*)0)&&self->value!=((void*)0),                                                                                                            _if_conditional626) {
                                                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                            }
                                                                                                            if(_if_conditional627=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                            _if_conditional627) {
                                                                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            }
                                                                                                            if(_if_conditional628=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                            _if_conditional628) {
                                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional629;
struct sCallerLineNode* __result401__;
void* right_value602;
struct sCallerLineNode* result_401;
_Bool _if_conditional630;
void* right_value603;
struct sNode* __dec_obj233;
_Bool _if_conditional631;
void* right_value604;
char* __dec_obj234;
_Bool _if_conditional632;
_Bool _if_conditional633;
void* right_value605;
char* __dec_obj235;
struct sCallerLineNode* __result402__;
memset(&__result_obj__, 0, sizeof(void*));
right_value602 = (void*)0;
memset(&result_401, 0, sizeof(struct sCallerLineNode*));
right_value603 = (void*)0;
right_value604 = (void*)0;
right_value605 = (void*)0;
                                                                                                            if(_if_conditional629=self==(void*)0,                                                                                                            _if_conditional629) {
                                                                                                                __result401__ = __result_obj__ = (void*)0;
                                                                                                                return __result401__;
                                                                                                            }
                                                                                                            result_401=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value602=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"))));
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            if(_if_conditional630=self!=((void*)0)&&self->value!=((void*)0),                                                                                                            _if_conditional630) {
                                                                                                                __dec_obj233=result_401->value;
                                                                                                                result_401->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value603=sNode_clone(self->value))));
                                                                                                                if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                if(right_value603) { right_value603 = come_decrement_ref_count2(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                            }
                                                                                                            if(_if_conditional631=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                            _if_conditional631) {
                                                                                                                __dec_obj234=result_401->value_source;
                                                                                                                result_401->value_source=(char*)come_increment_ref_count(((char*)(right_value604=string_clone(self->value_source))));
                                                                                                                __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                right_value604 = come_decrement_ref_count2(right_value604, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            if(_if_conditional632=self!=((void*)0),                                                                                                            _if_conditional632) {
                                                                                                                result_401->sline=self->sline;
                                                                                                            }
                                                                                                            if(_if_conditional633=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                            _if_conditional633) {
                                                                                                                __dec_obj235=result_401->sname;
                                                                                                                result_401->sname=(char*)come_increment_ref_count(((char*)(right_value605=string_clone(self->sname))));
                                                                                                                __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                right_value605 = come_decrement_ref_count2(right_value605, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            __result402__ = __result_obj__ = result_401;
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,result_401, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                            return __result402__;
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,result_401, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional635;
_Bool _if_conditional636;
_Bool _if_conditional637;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                if(_if_conditional635=self!=((void*)0)&&self->value!=((void*)0),                                                                                                                _if_conditional635) {
                                                                                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                }
                                                                                                                if(_if_conditional636=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                                _if_conditional636) {
                                                                                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                }
                                                                                                                if(_if_conditional637=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                                _if_conditional637) {
                                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional638;
struct sCallerSNameNode* __result404__;
void* right_value609;
struct sCallerSNameNode* result_402;
_Bool _if_conditional639;
void* right_value610;
struct sNode* __dec_obj236;
_Bool _if_conditional640;
void* right_value611;
char* __dec_obj237;
_Bool _if_conditional641;
_Bool _if_conditional642;
void* right_value612;
char* __dec_obj238;
struct sCallerSNameNode* __result405__;
memset(&__result_obj__, 0, sizeof(void*));
right_value609 = (void*)0;
memset(&result_402, 0, sizeof(struct sCallerSNameNode*));
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value612 = (void*)0;
                                                                                                                if(_if_conditional638=self==(void*)0,                                                                                                                _if_conditional638) {
                                                                                                                    __result404__ = __result_obj__ = (void*)0;
                                                                                                                    return __result404__;
                                                                                                                }
                                                                                                                result_402=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value609=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"))));
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                if(_if_conditional639=self!=((void*)0)&&self->value!=((void*)0),                                                                                                                _if_conditional639) {
                                                                                                                    __dec_obj236=result_402->value;
                                                                                                                    result_402->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value610=sNode_clone(self->value))));
                                                                                                                    if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value610) { right_value610 = come_decrement_ref_count2(right_value610, ((struct sNode*)right_value610)->finalize, ((struct sNode*)right_value610)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                }
                                                                                                                if(_if_conditional640=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                                _if_conditional640) {
                                                                                                                    __dec_obj237=result_402->value_source;
                                                                                                                    result_402->value_source=(char*)come_increment_ref_count(((char*)(right_value611=string_clone(self->value_source))));
                                                                                                                    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    right_value611 = come_decrement_ref_count2(right_value611, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                if(_if_conditional641=self!=((void*)0),                                                                                                                _if_conditional641) {
                                                                                                                    result_402->sline=self->sline;
                                                                                                                }
                                                                                                                if(_if_conditional642=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                                _if_conditional642) {
                                                                                                                    __dec_obj238=result_402->sname;
                                                                                                                    result_402->sname=(char*)come_increment_ref_count(((char*)(right_value612=string_clone(self->sname))));
                                                                                                                    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    right_value612 = come_decrement_ref_count2(right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                __result405__ = __result_obj__ = result_402;
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,result_402, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                return __result405__;
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,result_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_405;
unsigned int hash_406;
unsigned int it_407;
_Bool _while_condtional35;
_Bool _if_conditional645;
_Bool _if_conditional646;
struct sType* __result408__;
_Bool _if_conditional647;
_Bool _if_conditional648;
struct sType* __result409__;
struct sType* __result410__;
struct sType* __result411__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_405, 0, sizeof(struct sType*));
memset(&hash_406, 0, sizeof(unsigned int));
memset(&it_407, 0, sizeof(unsigned int));
                                                                                                                        memset(&default_value_405,0,sizeof(struct sType*));
                                                                                                                        hash_406=string_get_hash_key(((char*)key))%self->size;
                                                                                                                        it_407=hash_406;
                                                                                                                        while(_while_condtional35=(_Bool)1,                                                                                                                        _while_condtional35) {
                                                                                                                            if(_if_conditional645=self->item_existance[it_407],                                                                                                                            _if_conditional645) {
                                                                                                                                if(_if_conditional646=string_equals(self->keys[it_407],key),                                                                                                                                _if_conditional646) {
                                                                                                                                    __result408__ = __result_obj__ = self->items[it_407];
                                                                                                                                    come_call_finalizer2(sType_finalize,default_value_405, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                    return __result408__;
                                                                                                                                }
                                                                                                                                it_407++;
                                                                                                                                if(_if_conditional647=it_407>=self->size,                                                                                                                                _if_conditional647) {
                                                                                                                                    it_407=0;
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                    if(_if_conditional648=it_407==hash_406,                                                                                                                                    _if_conditional648) {
                                                                                                                                        __result409__ = __result_obj__ = default_value_405;
                                                                                                                                        come_call_finalizer2(sType_finalize,default_value_405, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                        return __result409__;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                __result410__ = __result_obj__ = default_value_405;
                                                                                                                                come_call_finalizer2(sType_finalize,default_value_405, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                return __result410__;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        __result411__ = __result_obj__ = default_value_405;
                                                                                                                        come_call_finalizer2(sType_finalize,default_value_405, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                        return __result411__;
                                                                                                                        come_call_finalizer2(sType_finalize,default_value_405, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_409;
unsigned int hash_410;
unsigned int it_411;
_Bool _while_condtional36;
_Bool _if_conditional650;
_Bool _if_conditional651;
struct sClass* __result412__;
_Bool _if_conditional658;
_Bool _if_conditional659;
struct sClass* __result413__;
struct sClass* __result414__;
struct sClass* __result415__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_409, 0, sizeof(struct sClass*));
memset(&hash_410, 0, sizeof(unsigned int));
memset(&it_411, 0, sizeof(unsigned int));
                                                                                                                            memset(&default_value_409,0,sizeof(struct sClass*));
                                                                                                                            hash_410=string_get_hash_key(((char*)key))%self->size;
                                                                                                                            it_411=hash_410;
                                                                                                                            while(_while_condtional36=(_Bool)1,                                                                                                                            _while_condtional36) {
                                                                                                                                if(_if_conditional650=self->item_existance[it_411],                                                                                                                                _if_conditional650) {
                                                                                                                                    if(_if_conditional651=string_equals(self->keys[it_411],key),                                                                                                                                    _if_conditional651) {
                                                                                                                                        __result412__ = __result_obj__ = self->items[it_411];
                                                                                                                                        come_call_finalizer2(sClass_finalize,default_value_409, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                        return __result412__;
                                                                                                                                    }
                                                                                                                                    it_411++;
                                                                                                                                    if(_if_conditional658=it_411>=self->size,                                                                                                                                    _if_conditional658) {
                                                                                                                                        it_411=0;
                                                                                                                                    }
                                                                                                                                    else {
                                                                                                                                        if(_if_conditional659=it_411==hash_410,                                                                                                                                        _if_conditional659) {
                                                                                                                                            __result413__ = __result_obj__ = default_value_409;
                                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_409, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                            return __result413__;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                    __result414__ = __result_obj__ = default_value_409;
                                                                                                                                    come_call_finalizer2(sClass_finalize,default_value_409, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                    return __result414__;
                                                                                                                                }
                                                                                                                            }
                                                                                                                            __result415__ = __result_obj__ = default_value_409;
                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_409, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                            return __result415__;
                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_409, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional652;
_Bool _if_conditional653;
_Bool _if_conditional657;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                            if(_if_conditional652=self!=((void*)0)&&self->mName!=((void*)0),                                                                                                                                            _if_conditional652) {
                                                                                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                            }
                                                                                                                                            if(_if_conditional653=self!=((void*)0)&&self->mFields!=((void*)0),                                                                                                                                            _if_conditional653) {
                                                                                                                                                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                            }
                                                                                                                                            if(_if_conditional657=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                                                                                            _if_conditional657) {
                                                                                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_412;
_Bool _while_condtional37;
struct list_item$1tuple2$2charphsTypephph* prev_it_413;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_412, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_413, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                                                                                    it_412=self->head;
                                                                                                                                                    while(_while_condtional37=it_412!=((void*)0),                                                                                                                                                    _while_condtional37) {
                                                                                                                                                        prev_it_413=it_412;
                                                                                                                                                        it_412=it_412->next;
                                                                                                                                                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_413, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional654;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                                            if(_if_conditional654=self!=((void*)0)&&self->item!=((void*)0),                                                                                                                                                            _if_conditional654) {
                                                                                                                                                                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional655;
_Bool _if_conditional656;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                                                    if(_if_conditional655=self!=((void*)0)&&self->v1!=((void*)0),                                                                                                                                                                    _if_conditional655) {
                                                                                                                                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                                                    }
                                                                                                                                                                    if(_if_conditional656=self!=((void*)0)&&self->v2!=((void*)0),                                                                                                                                                                    _if_conditional656) {
                                                                                                                                                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                                    }
}

static void sCastNode_finalize(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional671;
_Bool _if_conditional672;
_Bool _if_conditional673;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional671=self!=((void*)0)&&self->mType!=((void*)0),                                                                                            _if_conditional671) {
                                                                                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional672=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional672) {
                                                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional673=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional673) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional674;
struct sCastNode* __result421__;
void* right_value651;
struct sCastNode* result_439;
_Bool _if_conditional675;
void* right_value652;
struct sType* __dec_obj251;
_Bool _if_conditional676;
void* right_value653;
struct sNode* __dec_obj252;
_Bool _if_conditional677;
_Bool _if_conditional678;
void* right_value654;
char* __dec_obj253;
struct sCastNode* __result422__;
memset(&__result_obj__, 0, sizeof(void*));
right_value651 = (void*)0;
memset(&result_439, 0, sizeof(struct sCastNode*));
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value654 = (void*)0;
                                                                                            if(_if_conditional674=self==(void*)0,                                                                                            _if_conditional674) {
                                                                                                __result421__ = __result_obj__ = (void*)0;
                                                                                                return __result421__;
                                                                                            }
                                                                                            result_439=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value651=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "sCastNode"))));
                                                                                            come_call_finalizer2(sCastNode_finalize,right_value651, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional675=self!=((void*)0)&&self->mType!=((void*)0),                                                                                            _if_conditional675) {
                                                                                                __dec_obj251=result_439->mType;
                                                                                                result_439->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value652=sType_clone(self->mType))));
                                                                                                come_call_finalizer2(sType_finalize,__dec_obj251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sType_finalize,right_value652, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional676=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional676) {
                                                                                                __dec_obj252=result_439->mLeft;
                                                                                                result_439->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value653=sNode_clone(self->mLeft))));
                                                                                                if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value653) { right_value653 = come_decrement_ref_count2(right_value653, ((struct sNode*)right_value653)->finalize, ((struct sNode*)right_value653)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional677=self!=((void*)0),                                                                                            _if_conditional677) {
                                                                                                result_439->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional678=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional678) {
                                                                                                __dec_obj253=result_439->sname;
                                                                                                result_439->sname=(char*)come_increment_ref_count(((char*)(right_value654=string_clone(self->sname))));
                                                                                                __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value654 = come_decrement_ref_count2(right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result422__ = __result_obj__ = result_439;
                                                                                            come_call_finalizer2(sCastNode_finalize,result_439, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result422__;
                                                                                            come_call_finalizer2(sCastNode_finalize,result_439, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParenNode_finalize(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional679;
_Bool _if_conditional680;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional679=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional679) {
                                                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional680=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional680) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional681;
struct sParenNode* __result424__;
void* right_value659;
struct sParenNode* result_441;
_Bool _if_conditional682;
void* right_value660;
struct sNode* __dec_obj254;
_Bool _if_conditional683;
_Bool _if_conditional684;
void* right_value661;
char* __dec_obj255;
struct sParenNode* __result425__;
memset(&__result_obj__, 0, sizeof(void*));
right_value659 = (void*)0;
memset(&result_441, 0, sizeof(struct sParenNode*));
right_value660 = (void*)0;
right_value661 = (void*)0;
                                                                                            if(_if_conditional681=self==(void*)0,                                                                                            _if_conditional681) {
                                                                                                __result424__ = __result_obj__ = (void*)0;
                                                                                                return __result424__;
                                                                                            }
                                                                                            result_441=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value659=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "sParenNode"))));
                                                                                            come_call_finalizer2(sParenNode_finalize,right_value659, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional682=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional682) {
                                                                                                __dec_obj254=result_441->mLeft;
                                                                                                result_441->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value660=sNode_clone(self->mLeft))));
                                                                                                if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value660) { right_value660 = come_decrement_ref_count2(right_value660, ((struct sNode*)right_value660)->finalize, ((struct sNode*)right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional683=self!=((void*)0),                                                                                            _if_conditional683) {
                                                                                                result_441->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional684=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional684) {
                                                                                                __dec_obj255=result_441->sname;
                                                                                                result_441->sname=(char*)come_increment_ref_count(((char*)(right_value661=string_clone(self->sname))));
                                                                                                __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value661 = come_decrement_ref_count2(right_value661, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result425__ = __result_obj__ = result_441;
                                                                                            come_call_finalizer2(sParenNode_finalize,result_441, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result425__;
                                                                                            come_call_finalizer2(sParenNode_finalize,result_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__;
void* right_value666;
struct sNode* __result429__;
memset(&__result_obj__, 0, sizeof(void*));
right_value666 = (void*)0;
    __result429__ = __result_obj__ = ((struct sNode*)(right_value666=expression_node_v99(info)));
    if(right_value666) { right_value666 = come_decrement_ref_count2(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result429__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional685;
void* right_value667;
void* right_value668;
struct sNode* __dec_obj259;
struct sNode* __result430__;
_Bool _if_conditional686;
void* right_value669;
void* right_value670;
struct sNode* __dec_obj260;
struct sNode* __result431__;
struct sNode* __result432__;
memset(&__result_obj__, 0, sizeof(void*));
right_value667 = (void*)0;
right_value668 = (void*)0;
right_value669 = (void*)0;
right_value670 = (void*)0;
    if(_if_conditional685=strmemcmp(info->p,"or"),    _if_conditional685) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj259=node;
        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value668=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value667=sNode_clone(node)))),info))));
        if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value667) { right_value667 = come_decrement_ref_count2(right_value667, ((struct sNode*)right_value667)->finalize, ((struct sNode*)right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(right_value668) { right_value668 = come_decrement_ref_count2(right_value668, ((struct sNode*)right_value668)->finalize, ((struct sNode*)right_value668)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result430__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result430__;
    }
    else {
        if(_if_conditional686=strmemcmp(info->p,"and"),        _if_conditional686) {
            info->p+=strlen("and");
            skip_spaces_and_lf(info);
            __dec_obj260=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value670=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value669=sNode_clone(node)))),info))));
            if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value669) { right_value669 = come_decrement_ref_count2(right_value669, ((struct sNode*)right_value669)->finalize, ((struct sNode*)right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(right_value670) { right_value670 = come_decrement_ref_count2(right_value670, ((struct sNode*)right_value670)->finalize, ((struct sNode*)right_value670)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result431__ = __result_obj__ = node;
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result431__;
        }
    }
    __result432__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result432__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__;
void* right_value671;
struct sNode* node_443;
void* right_value672;
struct sNode* __dec_obj261;
struct sNode* __result433__;
memset(&__result_obj__, 0, sizeof(void*));
right_value671 = (void*)0;
memset(&node_443, 0, sizeof(struct sNode*));
right_value672 = (void*)0;
    node_443=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value671=expression_node_v99(info))));
    if(right_value671) { right_value671 = come_decrement_ref_count2(right_value671, ((struct sNode*)right_value671)->finalize, ((struct sNode*)right_value671)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj261=node_443;
    node_443=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value672=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_443),info))));
    if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value672) { right_value672 = come_decrement_ref_count2(right_value672, ((struct sNode*)right_value672)->finalize, ((struct sNode*)right_value672)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result433__ = __result_obj__ = node_443;
    if(node_443) { node_443 = come_decrement_ref_count2(node_443, ((struct sNode*)node_443)->finalize, ((struct sNode*)node_443)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result433__;
    if(node_443) { node_443 = come_decrement_ref_count2(node_443, ((struct sNode*)node_443)->finalize, ((struct sNode*)node_443)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
void* __result_obj__;
char* __dec_obj262;
void* right_value673;
struct sType* __dec_obj263;
void* right_value674;
char* __dec_obj264;
struct sNode* __dec_obj265;
char* __dec_obj266;
void* right_value684;
struct list$1tuple2$2sTypephcharphph* __dec_obj272;
void* right_value685;
char* __dec_obj273;
struct sGlobalVariable* __result440__;
memset(&__result_obj__, 0, sizeof(void*));
right_value673 = (void*)0;
right_value674 = (void*)0;
right_value684 = (void*)0;
right_value685 = (void*)0;
    self->sline=info->sline;
    __dec_obj262=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj263=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value673=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj264=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value674=__builtin_string(name))));
    __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value674 = come_decrement_ref_count2(right_value674, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj265=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj266=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj272=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value684=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value684, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj273=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value685=__builtin_string(info->sname))));
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value685 = come_decrement_ref_count2(right_value685, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result440__ = __result_obj__ = self;
    come_call_finalizer2(sGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result440__;
    come_call_finalizer2(sGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional687;
struct list$1tuple2$2sTypephcharphph* __result434__;
void* right_value675;
void* right_value676;
struct list$1tuple2$2sTypephcharphph* result_446;
struct list_item$1tuple2$2sTypephcharphph* it_447;
_Bool _while_condtional40;
void* right_value683;
struct list$1tuple2$2sTypephcharphph* __result439__;
memset(&__result_obj__, 0, sizeof(void*));
right_value675 = (void*)0;
right_value676 = (void*)0;
memset(&result_446, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_447, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value683 = (void*)0;
        if(_if_conditional687=self==((void*)0),        _if_conditional687) {
            __result434__ = __result_obj__ = ((void*)0);
            return __result434__;
        }
        result_446=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value676=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value675=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 142, "list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_447=self->head;
        while(_while_condtional40=it_447!=((void*)0),        _while_condtional40) {
            list$1tuple2$2sTypephcharphph_add(result_446,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value683=tuple2$2sTypephcharphp_clone(it_447->item)))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value683, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_447=it_447->next;
        }
        __result439__ = __result_obj__ = result_446;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_446, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result439__;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_446, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list$1tuple2$2sTypephcharphph* __result435__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result435__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result435__;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list_item$1tuple2$2sTypephcharphph* it_444;
_Bool _while_condtional39;
struct list_item$1tuple2$2sTypephcharphph* prev_it_445;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_444, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&prev_it_445, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                it_444=self->head;
                while(_while_condtional39=it_444!=((void*)0),                _while_condtional39) {
                    prev_it_445=it_444;
                    it_444=it_444->next;
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,prev_it_445, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional688;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional688=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional688) {
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional689;
_Bool _if_conditional690;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional689=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional689) {
                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional690=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional690) {
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional691;
void* right_value677;
struct list_item$1tuple2$2sTypephcharphph* litem_448;
struct tuple2$2sTypephcharph* __dec_obj267;
_Bool _if_conditional694;
void* right_value678;
struct list_item$1tuple2$2sTypephcharphph* litem_449;
struct tuple2$2sTypephcharph* __dec_obj268;
void* right_value679;
struct list_item$1tuple2$2sTypephcharphph* litem_450;
struct tuple2$2sTypephcharph* __dec_obj269;
struct list$1tuple2$2sTypephcharphph* __result436__;
memset(&__result_obj__, 0, sizeof(void*));
right_value677 = (void*)0;
memset(&litem_448, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value678 = (void*)0;
memset(&litem_449, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value679 = (void*)0;
memset(&litem_450, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                if(_if_conditional691=self->len==0,                _if_conditional691) {
                    litem_448=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value677=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_448->prev=((void*)0);
                    litem_448->next=((void*)0);
                    __dec_obj267=litem_448->item;
                    litem_448->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_448;
                    self->head=litem_448;
                }
                else {
                    if(_if_conditional694=self->len==1,                    _if_conditional694) {
                        litem_449=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value678=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value678, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_449->prev=self->head;
                        litem_449->next=((void*)0);
                        __dec_obj268=litem_449->item;
                        litem_449->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_449;
                        self->head->next=litem_449;
                    }
                    else {
                        litem_450=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value679=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_450->prev=self->tail;
                        litem_450->next=((void*)0);
                        __dec_obj269=litem_450->item;
                        litem_450->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_450;
                        self->tail=litem_450;
                    }
                }
                self->len++;
                __result436__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result436__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional692;
_Bool _if_conditional693;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional692=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional692) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional693=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional693) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional695;
struct tuple2$2sTypephcharph* __result437__;
void* right_value680;
struct tuple2$2sTypephcharph* result_451;
_Bool _if_conditional696;
void* right_value681;
struct sType* __dec_obj270;
_Bool _if_conditional697;
void* right_value682;
char* __dec_obj271;
struct tuple2$2sTypephcharph* __result438__;
memset(&__result_obj__, 0, sizeof(void*));
right_value680 = (void*)0;
memset(&result_451, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value681 = (void*)0;
right_value682 = (void*)0;
                if(_if_conditional695=self==(void*)0,                _if_conditional695) {
                    __result437__ = __result_obj__ = (void*)0;
                    return __result437__;
                }
                result_451=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value680=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharphp_clone", 3, "tuple2$2sTypephcharph"))));
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional696=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional696) {
                    __dec_obj270=result_451->v1;
                    result_451->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value681=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value681, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional697=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional697) {
                    __dec_obj271=result_451->v2;
                    result_451->v2=(char*)come_increment_ref_count(((char*)(right_value682=string_clone(self->v2))));
                    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value682 = come_decrement_ref_count2(right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result438__ = __result_obj__ = result_451;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_451, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result438__;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sGlobalVariable_sline(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
int __result441__;
memset(&__result_obj__, 0, sizeof(void*));
    __result441__ = self->sline;
    return __result441__;
}

char* sGlobalVariable_sname(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value686;
char* __result442__;
memset(&__result_obj__, 0, sizeof(void*));
right_value686 = (void*)0;
    __result442__ = __result_obj__ = ((char*)(right_value686=__builtin_string(self->sname)));
    right_value686 = come_decrement_ref_count2(right_value686, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result442__;
}

_Bool sGlobalVariable_terminated(){
void* __result_obj__;
_Bool __result443__;
memset(&__result_obj__, 0, sizeof(void*));
    __result443__ = (_Bool)0;
    return __result443__;
}

char* sGlobalVariable_kind(){
void* __result_obj__;
void* right_value687;
char* __result444__;
memset(&__result_obj__, 0, sizeof(void*));
right_value687 = (void*)0;
    __result444__ = __result_obj__ = ((char*)(right_value687=__builtin_string("sGlobalVariable")));
    right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result444__;
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value688;
struct sType* type_452;
void* right_value689;
char* name_453;
struct sNode* right_node_454;
void* right_value690;
char* array_initializer_455;
_Bool _if_conditional705;
struct list$1tuple2$2sTypephcharphph* o2_saved_456;
struct tuple2$2sTypephcharph* it_459;
struct tuple2$2sTypephcharph* multiple_assign_var9;
struct sType* type_462;
char* name_463;
_Bool _if_conditional710;
void* right_value691;
void* right_value692;
_Bool _if_conditional711;
_Bool _if_conditional712;
void* right_value693;
_Bool _if_conditional713;
_Bool _if_conditional714;
_Bool __result452__;
void* right_value694;
struct CVALUE* come_value_464;
_Bool _if_conditional715;
void* right_value695;
_Bool _if_conditional716;
void* right_value696;
_Bool __result453__;
memset(&__result_obj__, 0, sizeof(void*));
right_value688 = (void*)0;
memset(&type_452, 0, sizeof(struct sType*));
right_value689 = (void*)0;
memset(&name_453, 0, sizeof(char*));
memset(&right_node_454, 0, sizeof(struct sNode*));
right_value690 = (void*)0;
memset(&array_initializer_455, 0, sizeof(char*));
memset(&o2_saved_456, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_459, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_462, 0, sizeof(struct sType*));
memset(&name_463, 0, sizeof(char*));
memset(&type_462, 0, sizeof(struct sType*));
memset(&name_463, 0, sizeof(char*));
right_value691 = (void*)0;
right_value692 = (void*)0;
right_value693 = (void*)0;
right_value694 = (void*)0;
memset(&come_value_464, 0, sizeof(struct CVALUE*));
right_value695 = (void*)0;
right_value696 = (void*)0;
    type_452=(struct sType*)come_increment_ref_count(((struct sType*)(right_value688=sType_clone(self->type))));
    come_call_finalizer2(sType_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    name_453=(char*)come_increment_ref_count(((char*)(right_value689=string_clone(self->name))));
    right_value689 = come_decrement_ref_count2(right_value689, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_node_454=self->right_node;
    array_initializer_455=(char*)come_increment_ref_count(((char*)(right_value690=string_clone(self->array_initializer))));
    right_value690 = come_decrement_ref_count2(right_value690, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->multiple_declare) {
        for(        o2_saved_456=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_459=list$1tuple2$2sTypephcharphph_begin((o2_saved_456));        !list$1tuple2$2sTypephcharphph_end((o2_saved_456));        it_459=list$1tuple2$2sTypephcharphph_next((o2_saved_456))        ){
            multiple_assign_var9=it_459;
            type_462=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_463=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(_if_conditional710=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional710) {
            }
            else {
                add_come_code_at_source_head(info,"%s;\n",((char*)(right_value691=make_define_var(type_462,name_463,(_Bool)0,info))));
                right_value691 = come_decrement_ref_count2(right_value691, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_462, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_463 = come_decrement_ref_count2(name_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_456, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_453,(struct sType*)come_increment_ref_count(((struct sType*)(right_value692=sType_clone(type_452)))),info);
        come_call_finalizer2(sType_finalize,right_value692, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(array_initializer_455) {
            if(_if_conditional712=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional712) {
            }
            else {
                add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value693=make_define_var(type_452,name_453,(_Bool)0,info))),array_initializer_455);
                right_value693 = come_decrement_ref_count2(right_value693, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        else {
            if(right_node_454) {
                if(_if_conditional714=!node_compile(right_node_454,info),                _if_conditional714) {
                    __result452__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,type_452, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_453 = come_decrement_ref_count2(name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    array_initializer_455 = come_decrement_ref_count2(array_initializer_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result452__;
                }
                come_value_464=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value694=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                if(_if_conditional715=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional715) {
                }
                else {
                    add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value695=make_define_var(type_452,name_453,(_Bool)0,info))),come_value_464->c_value);
                    right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(CVALUE_finalize,come_value_464, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional716=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional716) {
                }
                else {
                    add_come_code_at_source_head(info,"%s;\n",((char*)(right_value696=make_define_var(type_452,name_453,(_Bool)0,info))));
                    right_value696 = come_decrement_ref_count2(right_value696, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    __result453__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,type_452, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_453 = come_decrement_ref_count2(name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_455 = come_decrement_ref_count2(array_initializer_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result453__;
    come_call_finalizer2(sType_finalize,type_452, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_453 = come_decrement_ref_count2(name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_455 = come_decrement_ref_count2(array_initializer_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional706;
struct tuple2$2sTypephcharph* result_457;
struct tuple2$2sTypephcharph* __result445__;
_Bool _if_conditional707;
struct tuple2$2sTypephcharph* __result446__;
struct tuple2$2sTypephcharph* result_458;
struct tuple2$2sTypephcharph* __result447__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_457, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_458, 0, sizeof(struct tuple2$2sTypephcharph*));
            if(_if_conditional706=self==((void*)0),            _if_conditional706) {
                memset(&result_457,0,sizeof(struct tuple2$2sTypephcharph*));
                __result445__ = __result_obj__ = result_457;
                return __result445__;
            }
            self->it=self->head;
            if(self->it) {
                __result446__ = __result_obj__ = self->it->item;
                return __result446__;
            }
            memset(&result_458,0,sizeof(struct tuple2$2sTypephcharph*));
            __result447__ = __result_obj__ = result_458;
            return __result447__;
}

static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __result448__;
memset(&__result_obj__, 0, sizeof(void*));
            __result448__ = self==((void*)0)||self->it==((void*)0);
            return __result448__;
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional708;
struct tuple2$2sTypephcharph* result_460;
struct tuple2$2sTypephcharph* __result449__;
_Bool _if_conditional709;
struct tuple2$2sTypephcharph* __result450__;
struct tuple2$2sTypephcharph* result_461;
struct tuple2$2sTypephcharph* __result451__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_460, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_461, 0, sizeof(struct tuple2$2sTypephcharph*));
            if(_if_conditional708=self==((void*)0)||self->it==((void*)0),            _if_conditional708) {
                memset(&result_460,0,sizeof(struct tuple2$2sTypephcharph*));
                __result449__ = __result_obj__ = result_460;
                return __result449__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result450__ = __result_obj__ = self->it->item;
                return __result450__;
            }
            memset(&result_461,0,sizeof(struct tuple2$2sTypephcharph*));
            __result451__ = __result_obj__ = result_461;
            return __result451__;
}

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value697;
struct sType* __dec_obj274;
void* right_value698;
char* __dec_obj275;
char* __dec_obj276;
void* right_value699;
struct list$1tuple2$2sTypephcharphph* __dec_obj277;
void* right_value700;
char* __dec_obj278;
struct sExternalGlobalVariable* __result454__;
memset(&__result_obj__, 0, sizeof(void*));
right_value697 = (void*)0;
right_value698 = (void*)0;
right_value699 = (void*)0;
right_value700 = (void*)0;
    __dec_obj274=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value697=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj275=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value698=__builtin_string(name))));
    __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value698 = come_decrement_ref_count2(right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj276=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj277=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value699=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj278=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value700=__builtin_string(info->sname))));
    __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value700 = come_decrement_ref_count2(right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result454__ = __result_obj__ = self;
    come_call_finalizer2(sExternalGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result454__;
    come_call_finalizer2(sExternalGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sExternalGlobalVariable_sline(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
int __result455__;
memset(&__result_obj__, 0, sizeof(void*));
    __result455__ = self->sline;
    return __result455__;
}

char* sExternalGlobalVariable_sname(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value701;
char* __result456__;
memset(&__result_obj__, 0, sizeof(void*));
right_value701 = (void*)0;
    __result456__ = __result_obj__ = ((char*)(right_value701=__builtin_string(self->sname)));
    right_value701 = come_decrement_ref_count2(right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result456__;
}

_Bool sExternalGlobalVariable_terminated(){
void* __result_obj__;
_Bool __result457__;
memset(&__result_obj__, 0, sizeof(void*));
    __result457__ = (_Bool)0;
    return __result457__;
}

char* sExternalGlobalVariable_kind(){
void* __result_obj__;
void* right_value702;
char* __result458__;
memset(&__result_obj__, 0, sizeof(void*));
right_value702 = (void*)0;
    __result458__ = __result_obj__ = ((char*)(right_value702=__builtin_string("sExternalGlobalVariable")));
    right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result458__;
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_465;
char* name_466;
_Bool _if_conditional722;
struct list$1tuple2$2sTypephcharphph* o2_saved_467;
struct tuple2$2sTypephcharph* it_468;
struct tuple2$2sTypephcharph* multiple_assign_var10;
struct sType* type_469;
char* name_470;
void* right_value703;
_Bool _if_conditional723;
void* right_value704;
void* right_value705;
_Bool _if_conditional724;
void* right_value706;
_Bool __result459__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_465, 0, sizeof(struct sType*));
memset(&name_466, 0, sizeof(char*));
memset(&o2_saved_467, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_468, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_469, 0, sizeof(struct sType*));
memset(&name_470, 0, sizeof(char*));
memset(&type_469, 0, sizeof(struct sType*));
memset(&name_470, 0, sizeof(char*));
right_value703 = (void*)0;
right_value704 = (void*)0;
right_value705 = (void*)0;
right_value706 = (void*)0;
    type_465=self->type;
    name_466=(char*)come_increment_ref_count(self->name);
    if(self->multiple_declare) {
        for(        o2_saved_467=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_468=list$1tuple2$2sTypephcharphph_begin((o2_saved_467));        !list$1tuple2$2sTypephcharphph_end((o2_saved_467));        it_468=list$1tuple2$2sTypephcharphph_next((o2_saved_467))        ){
            multiple_assign_var10=it_468;
            type_469=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_470=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            add_variable_to_global_table(name_470,(struct sType*)come_increment_ref_count(((struct sType*)(right_value703=sType_clone(type_469)))),info);
            come_call_finalizer2(sType_finalize,right_value703, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional723=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional723) {
            }
            else {
                add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value704=make_define_var(type_469,name_470,(_Bool)0,info))));
                right_value704 = come_decrement_ref_count2(right_value704, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_470 = come_decrement_ref_count2(name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_466,(struct sType*)come_increment_ref_count(((struct sType*)(right_value705=sType_clone(type_465)))),info);
        come_call_finalizer2(sType_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional724=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),        _if_conditional724) {
        }
        else {
            add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value706=make_define_var(type_465,name_466,(_Bool)0,info))));
            right_value706 = come_decrement_ref_count2(right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __result459__ = (_Bool)1;
    name_466 = come_decrement_ref_count2(name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result459__;
    name_466 = come_decrement_ref_count2(name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_471;
void* right_value707;
void* right_value708;
struct buffer* buf_472;
_Bool _if_conditional725;
void* right_value709;
char* __dec_obj279;
_Bool _if_conditional726;
int i_473;
_Bool _if_conditional727;
void* right_value710;
char* __dec_obj280;
void* right_value711;
char* __dec_obj281;
int i_474;
_Bool _if_conditional728;
_Bool _if_conditional730;
void* right_value712;
void* right_value713;
char* __result462__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_471, 0, sizeof(char*));
right_value707 = (void*)0;
right_value708 = (void*)0;
memset(&buf_472, 0, sizeof(struct buffer*));
right_value709 = (void*)0;
memset(&i_473, 0, sizeof(int));
right_value710 = (void*)0;
right_value711 = (void*)0;
memset(&i_474, 0, sizeof(int));
right_value712 = (void*)0;
right_value713 = (void*)0;
    buf_472=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value708=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value707=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2838, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional725=string_operator_not_equals(obj_type->mOriginalTypeName,""),    _if_conditional725) {
        __dec_obj279=struct_name_471;
        struct_name_471=(char*)come_increment_ref_count(((char*)(right_value709=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value709 = come_decrement_ref_count2(right_value709, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional726=!obj_type->mClass->mStruct,        _if_conditional726) {
            for(            i_473=0;            i_473<obj_type->mOriginalTypeNamePointerNum;            i_473++            ){
                buffer_append_str(buf_472,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj280=struct_name_471;
            struct_name_471=(char*)come_increment_ref_count(((char*)(right_value710=__builtin_string(obj_type->mClass->mName))));
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value710 = come_decrement_ref_count2(right_value710, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj281=struct_name_471;
            struct_name_471=(char*)come_increment_ref_count(((char*)(right_value711=create_generics_name(obj_type,info))));
            __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value711 = come_decrement_ref_count2(right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_474=0;            i_474<obj_type->mPointerNum;            i_474++            ){
                buffer_append_str(buf_472,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_472,"a");
    }
    if(_if_conditional730=!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0,    _if_conditional730) {
        buffer_append_str(buf_472,"pa");
    }
    __result462__ = __result_obj__ = ((char*)(right_value713=xsprintf("%s%s_%s",struct_name_471,((char*)(right_value712=buffer_to_string(buf_472))),fun_name)));
    struct_name_471 = come_decrement_ref_count2(struct_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value712 = come_decrement_ref_count2(right_value712, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value713 = come_decrement_ref_count2(right_value713, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result462__;
    struct_name_471 = come_decrement_ref_count2(struct_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional729;
int __result460__;
int __result461__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional729=self==((void*)0),        _if_conditional729) {
            __result460__ = 0;
            return __result460__;
        }
        __result461__ = self->len;
        return __result461__;
}

struct sNode* parse_global_variable(struct sInfo* info){
void* __result_obj__;
_Bool multiple_declare_475;
char* p_476;
int sline_477;
_Bool _if_conditional731;
void* right_value714;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_478;
char* name_479;
_Bool err_480;
_Bool _if_conditional732;
void* right_value715;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type_481;
char* name_482;
_Bool _if_conditional733;
_Bool _if_conditional734;
void* right_value716;
void* right_value717;
struct list$1tuple2$2sTypephcharphph* multiple_declare_483;
void* right_value718;
struct tuple3$3sTypephcharphbool* multiple_assign_var13;
struct sType* base_type_484;
char* name_485;
_Bool err_486;
_Bool _if_conditional735;
void* right_value719;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_487;
char* var_name_488;
void* right_value723;
void* right_value724;
_Bool _while_condtional41;
void* right_value725;
struct tuple2$2sTypephcharph* multiple_assign_var15;
struct sType* type2_492;
char* var_name_493;
void* right_value726;
void* right_value727;
struct sNode* right_node_494;
char* array_initializer_495;
void* right_value728;
char* var_name2_496;
_Bool _if_conditional738;
_Bool _if_conditional739;
void* right_value729;
void* right_value730;
struct sNode* _inf_value26;
struct sExternalGlobalVariable* _inf_obj_value26;
void* right_value737;
struct sNode* __result467__;
void* right_value738;
void* right_value739;
struct sNode* _inf_value27;
struct sGlobalVariable* _inf_obj_value27;
void* right_value748;
struct sNode* __result470__;
void* right_value749;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* result_type_499;
char* var_name_500;
_Bool err_501;
_Bool _if_conditional768;
struct sNode* right_node_502;
char* array_initializer_503;
_Bool _if_conditional769;
_Bool _if_conditional770;
void* right_value750;
void* right_value751;
struct buffer* buf_504;
_Bool squort_505;
_Bool dquort_506;
int nest_507;
_Bool _while_condtional42;
_Bool _if_conditional771;
_Bool _if_conditional772;
_Bool _if_conditional773;
_Bool _if_conditional774;
_Bool _if_conditional775;
_Bool _if_conditional776;
_Bool _if_conditional777;
_Bool _if_conditional778;
void* right_value752;
char* __dec_obj299;
void* right_value753;
struct sNode* __dec_obj300;
_Bool _if_conditional779;
_Bool _if_conditional780;
void* right_value754;
void* right_value755;
struct sNode* _inf_value28;
struct sExternalGlobalVariable* _inf_obj_value28;
void* right_value762;
struct sNode* __result473__;
void* right_value763;
void* right_value764;
struct sNode* _inf_value29;
struct sGlobalVariable* _inf_obj_value29;
void* right_value773;
struct sNode* __result476__;
struct sNode* __result477__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&multiple_declare_475, 0, sizeof(_Bool));
memset(&p_476, 0, sizeof(char*));
memset(&sline_477, 0, sizeof(int));
right_value714 = (void*)0;
memset(&type_478, 0, sizeof(struct sType*));
memset(&name_479, 0, sizeof(char*));
memset(&err_480, 0, sizeof(_Bool));
memset(&type_478, 0, sizeof(struct sType*));
memset(&name_479, 0, sizeof(char*));
memset(&err_480, 0, sizeof(_Bool));
right_value715 = (void*)0;
memset(&type_481, 0, sizeof(struct sType*));
memset(&name_482, 0, sizeof(char*));
memset(&type_481, 0, sizeof(struct sType*));
memset(&name_482, 0, sizeof(char*));
right_value716 = (void*)0;
right_value717 = (void*)0;
memset(&multiple_declare_483, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
right_value718 = (void*)0;
memset(&base_type_484, 0, sizeof(struct sType*));
memset(&name_485, 0, sizeof(char*));
memset(&err_486, 0, sizeof(_Bool));
memset(&base_type_484, 0, sizeof(struct sType*));
memset(&name_485, 0, sizeof(char*));
memset(&err_486, 0, sizeof(_Bool));
right_value719 = (void*)0;
memset(&type2_487, 0, sizeof(struct sType*));
memset(&var_name_488, 0, sizeof(char*));
memset(&type2_487, 0, sizeof(struct sType*));
memset(&var_name_488, 0, sizeof(char*));
right_value723 = (void*)0;
right_value724 = (void*)0;
right_value725 = (void*)0;
memset(&type2_492, 0, sizeof(struct sType*));
memset(&var_name_493, 0, sizeof(char*));
memset(&type2_492, 0, sizeof(struct sType*));
memset(&var_name_493, 0, sizeof(char*));
right_value726 = (void*)0;
right_value727 = (void*)0;
memset(&right_node_494, 0, sizeof(struct sNode*));
memset(&array_initializer_495, 0, sizeof(char*));
right_value728 = (void*)0;
memset(&var_name2_496, 0, sizeof(char*));
right_value729 = (void*)0;
right_value730 = (void*)0;
right_value737 = (void*)0;
right_value738 = (void*)0;
right_value739 = (void*)0;
right_value748 = (void*)0;
right_value749 = (void*)0;
memset(&result_type_499, 0, sizeof(struct sType*));
memset(&var_name_500, 0, sizeof(char*));
memset(&err_501, 0, sizeof(_Bool));
memset(&result_type_499, 0, sizeof(struct sType*));
memset(&var_name_500, 0, sizeof(char*));
memset(&err_501, 0, sizeof(_Bool));
memset(&right_node_502, 0, sizeof(struct sNode*));
memset(&array_initializer_503, 0, sizeof(char*));
right_value750 = (void*)0;
right_value751 = (void*)0;
memset(&buf_504, 0, sizeof(struct buffer*));
memset(&squort_505, 0, sizeof(_Bool));
memset(&dquort_506, 0, sizeof(_Bool));
memset(&nest_507, 0, sizeof(int));
right_value752 = (void*)0;
right_value753 = (void*)0;
right_value754 = (void*)0;
right_value755 = (void*)0;
right_value762 = (void*)0;
right_value763 = (void*)0;
right_value764 = (void*)0;
right_value773 = (void*)0;
    multiple_declare_475=(_Bool)0;
    {
        p_476=info->p;
        sline_477=info->sline;
        if(_if_conditional731=xisalpha(*info->p)||*info->p==95,        _if_conditional731) {
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value714=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_478=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_479=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_480=multiple_assign_var11->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(err_480) {
                multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value715=parse_variable_name((struct sType*)come_increment_ref_count(type_478),(_Bool)1,info)));
                type_481=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_482=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional733=!is_type_name(name_482,info)&&*info->p==44,                _if_conditional733) {
                    multiple_declare_475=(_Bool)1;
                }
                come_call_finalizer2(sType_finalize,type_481, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_482 = come_decrement_ref_count2(name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,type_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_479 = come_decrement_ref_count2(name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_476;
        info->sline=sline_477;
    }
    if(multiple_declare_475) {
        multiple_declare_483=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value717=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value716=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "05function.c", 2905, "list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value716, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value717, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(right_value718=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_484=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
        name_485=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        err_486=multiple_assign_var13->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value718, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional735=!err_486,        _if_conditional735) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var14=((struct tuple2$2sTypephcharph*)(right_value719=parse_variable_name((struct sType*)come_increment_ref_count(base_type_484),(_Bool)1,info)));
        type2_487=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
        var_name_488=(char*)come_increment_ref_count(multiple_assign_var14->v2);
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value719, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        list$1tuple2$2sTypephcharphph_push_back(multiple_declare_483,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value724=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value723=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function.c", 2918, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type2_487),(char*)come_increment_ref_count(var_name_488))))));
        come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value723, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value724, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional41=*info->p==44,        _while_condtional41) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var15=((struct tuple2$2sTypephcharph*)(right_value725=parse_variable_name((struct sType*)come_increment_ref_count(base_type_484),(_Bool)0,info)));
            type2_492=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            var_name_493=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value725, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_483,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value727=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value726=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function.c", 2928, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type2_492),(char*)come_increment_ref_count(var_name_493))))));
            come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value726, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value727, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,type2_492, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_493 = come_decrement_ref_count2(var_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_494=((void*)0);
        array_initializer_495=((void*)0);
        var_name2_496=(char*)come_increment_ref_count(((char*)(right_value728=__builtin_string(""))));
        right_value728 = come_decrement_ref_count2(right_value728, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(base_type_484->mExtern) {
            if(right_node_494) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2940, "struct sNode");
            _inf_obj_value26=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value730=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value729=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "05function.c", 2940, "sExternalGlobalVariable")))),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_483),base_type_484,(char*)come_increment_ref_count(var_name2_496),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value26->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value26->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value26->sline=(void*)sExternalGlobalVariable_sline;
            _inf_value26->sname=(void*)sExternalGlobalVariable_sname;
            _inf_value26->terminated=(void*)sExternalGlobalVariable_terminated;
            _inf_value26->kind=(void*)sExternalGlobalVariable_kind;
            __result467__ = __result_obj__ = ((struct sNode*)(right_value737=_inf_value26));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_483, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_485 = come_decrement_ref_count2(name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_487, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_494) { right_node_494 = come_decrement_ref_count2(right_node_494, ((struct sNode*)right_node_494)->finalize, ((struct sNode*)right_node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_495 = come_decrement_ref_count2(array_initializer_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_496 = come_decrement_ref_count2(var_name2_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value729, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value730, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value737) { right_value737 = come_decrement_ref_count2(right_value737, ((struct sNode*)right_value737)->finalize, ((struct sNode*)right_value737)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result467__;
        }
        else {
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2943, "struct sNode");
            _inf_obj_value27=come_increment_ref_count(((struct sGlobalVariable*)(right_value739=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value738=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "05function.c", 2943, "sGlobalVariable")))),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_483),base_type_484,(char*)come_increment_ref_count(var_name2_496),(struct sNode*)come_increment_ref_count(right_node_494),(char*)come_increment_ref_count(array_initializer_495),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sGlobalVariable_finalize;
            _inf_value27->clone=(void*)sGlobalVariable_clone;
            _inf_value27->compile=(void*)sGlobalVariable_compile;
            _inf_value27->sline=(void*)sGlobalVariable_sline;
            _inf_value27->sname=(void*)sGlobalVariable_sname;
            _inf_value27->terminated=(void*)sGlobalVariable_terminated;
            _inf_value27->kind=(void*)sGlobalVariable_kind;
            __result470__ = __result_obj__ = ((struct sNode*)(right_value748=_inf_value27));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_483, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_485 = come_decrement_ref_count2(name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_487, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_494) { right_node_494 = come_decrement_ref_count2(right_node_494, ((struct sNode*)right_node_494)->finalize, ((struct sNode*)right_node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_495 = come_decrement_ref_count2(array_initializer_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_496 = come_decrement_ref_count2(var_name2_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGlobalVariable_finalize,right_value738, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGlobalVariable_finalize,right_value739, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value748) { right_value748 = come_decrement_ref_count2(right_value748, ((struct sNode*)right_value748)->finalize, ((struct sNode*)right_value748)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result470__;
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_483, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,base_type_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_485 = come_decrement_ref_count2(name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_487, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_494) { right_node_494 = come_decrement_ref_count2(right_node_494, ((struct sNode*)right_node_494)->finalize, ((struct sNode*)right_node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_495 = come_decrement_ref_count2(array_initializer_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        var_name2_496 = come_decrement_ref_count2(var_name2_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(right_value749=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        result_type_499=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
        var_name_500=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        err_501=multiple_assign_var16->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value749, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional768=!err_501,        _if_conditional768) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        right_node_502=((void*)0);
        array_initializer_503=((void*)0);
        if(_if_conditional769=*info->p==61,        _if_conditional769) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional770=*info->p==123,            _if_conditional770) {
                buf_504=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value751=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value750=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2962, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value750, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value751, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buffer_append_char(buf_504,*info->p);
                info->p++;
                squort_505=(_Bool)0;
                dquort_506=(_Bool)0;
                nest_507=1;
                while(_while_condtional42=1,                _while_condtional42) {
                    if(_if_conditional771=*info->p==0,                    _if_conditional771) {
                        err_msg(info,"unexpected source end in array initiailizer");
                        exit(2);
                    }
                    else {
                        if(_if_conditional772=*info->p==92,                        _if_conditional772) {
                            buffer_append_char(buf_504,*info->p);
                            info->p++;
                            buffer_append_char(buf_504,*info->p);
                            info->p++;
                        }
                        else {
                            if(_if_conditional773=!squort_505&&*info->p==34,                            _if_conditional773) {
                                buffer_append_char(buf_504,*info->p);
                                info->p++;
                                dquort_506=!dquort_506;
                            }
                            else {
                                if(_if_conditional774=!dquort_506&&*info->p==39,                                _if_conditional774) {
                                    buffer_append_char(buf_504,*info->p);
                                    info->p++;
                                    squort_505=!squort_505;
                                }
                                else {
                                    if(_if_conditional775=squort_505||dquort_506,                                    _if_conditional775) {
                                        buffer_append_char(buf_504,*info->p);
                                        info->p++;
                                    }
                                    else {
                                        if(_if_conditional776=*info->p==123,                                        _if_conditional776) {
                                            nest_507++;
                                            buffer_append_char(buf_504,*info->p);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional777=*info->p==125,                                            _if_conditional777) {
                                                nest_507--;
                                                buffer_append_char(buf_504,*info->p);
                                                info->p++;
                                                if(_if_conditional778=nest_507==0,                                                _if_conditional778) {
                                                    skip_spaces_and_lf(info);
                                                    break;
                                                }
                                            }
                                            else {
                                                buffer_append_char(buf_504,*info->p);
                                                info->p++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                __dec_obj299=array_initializer_503;
                array_initializer_503=(char*)come_increment_ref_count(((char*)(right_value752=buffer_to_string(buf_504))));
                __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value752 = come_decrement_ref_count2(right_value752, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,buf_504, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                parse_sharp_v5(info);
                __dec_obj300=right_node_502;
                right_node_502=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value753=expression_v13(info))));
                if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value753) { right_value753 = come_decrement_ref_count2(right_value753, ((struct sNode*)right_value753)->finalize, ((struct sNode*)right_value753)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                parse_sharp_v5(info);
            }
        }
        if(result_type_499->mExtern) {
            if(right_node_502) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3029, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value755=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value754=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "05function.c", 3029, "sExternalGlobalVariable")))),((void*)0),result_type_499,(char*)come_increment_ref_count(var_name_500),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value28->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value28->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value28->sline=(void*)sExternalGlobalVariable_sline;
            _inf_value28->sname=(void*)sExternalGlobalVariable_sname;
            _inf_value28->terminated=(void*)sExternalGlobalVariable_terminated;
            _inf_value28->kind=(void*)sExternalGlobalVariable_kind;
            __result473__ = __result_obj__ = ((struct sNode*)(right_value762=_inf_value28));
            come_call_finalizer2(sType_finalize,result_type_499, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_500 = come_decrement_ref_count2(var_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_502) { right_node_502 = come_decrement_ref_count2(right_node_502, ((struct sNode*)right_node_502)->finalize, ((struct sNode*)right_node_502)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_503 = come_decrement_ref_count2(array_initializer_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value754, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value755, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value762) { right_value762 = come_decrement_ref_count2(right_value762, ((struct sNode*)right_value762)->finalize, ((struct sNode*)right_value762)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result473__;
        }
        else {
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3032, "struct sNode");
            _inf_obj_value29=come_increment_ref_count(((struct sGlobalVariable*)(right_value764=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value763=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "05function.c", 3032, "sGlobalVariable")))),((void*)0),result_type_499,(char*)come_increment_ref_count(var_name_500),(struct sNode*)come_increment_ref_count(right_node_502),(char*)come_increment_ref_count(array_initializer_503),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sGlobalVariable_finalize;
            _inf_value29->clone=(void*)sGlobalVariable_clone;
            _inf_value29->compile=(void*)sGlobalVariable_compile;
            _inf_value29->sline=(void*)sGlobalVariable_sline;
            _inf_value29->sname=(void*)sGlobalVariable_sname;
            _inf_value29->terminated=(void*)sGlobalVariable_terminated;
            _inf_value29->kind=(void*)sGlobalVariable_kind;
            __result476__ = __result_obj__ = ((struct sNode*)(right_value773=_inf_value29));
            come_call_finalizer2(sType_finalize,result_type_499, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_500 = come_decrement_ref_count2(var_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_502) { right_node_502 = come_decrement_ref_count2(right_node_502, ((struct sNode*)right_node_502)->finalize, ((struct sNode*)right_node_502)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_503 = come_decrement_ref_count2(array_initializer_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGlobalVariable_finalize,right_value763, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGlobalVariable_finalize,right_value764, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value773) { right_value773 = come_decrement_ref_count2(right_value773, ((struct sNode*)right_value773)->finalize, ((struct sNode*)right_value773)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result476__;
        }
        come_call_finalizer2(sType_finalize,result_type_499, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_500 = come_decrement_ref_count2(var_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_502) { right_node_502 = come_decrement_ref_count2(right_node_502, ((struct sNode*)right_node_502)->finalize, ((struct sNode*)right_node_502)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_503 = come_decrement_ref_count2(array_initializer_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result477__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result477__;
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional736;
void* right_value720;
struct list_item$1tuple2$2sTypephcharphph* litem_489;
struct tuple2$2sTypephcharph* __dec_obj282;
_Bool _if_conditional737;
void* right_value721;
struct list_item$1tuple2$2sTypephcharphph* litem_490;
struct tuple2$2sTypephcharph* __dec_obj283;
void* right_value722;
struct list_item$1tuple2$2sTypephcharphph* litem_491;
struct tuple2$2sTypephcharph* __dec_obj284;
struct list$1tuple2$2sTypephcharphph* __result463__;
memset(&__result_obj__, 0, sizeof(void*));
right_value720 = (void*)0;
memset(&litem_489, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value721 = (void*)0;
memset(&litem_490, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value722 = (void*)0;
memset(&litem_491, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
            if(_if_conditional736=self->len==0,            _if_conditional736) {
                litem_489=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value720=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2sTypephcharphph"))));
                come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value720, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_489->prev=((void*)0);
                litem_489->next=((void*)0);
                __dec_obj282=litem_489->item;
                litem_489->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_489;
                self->head=litem_489;
            }
            else {
                if(_if_conditional737=self->len==1,                _if_conditional737) {
                    litem_490=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value721=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value721, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_490->prev=self->head;
                    litem_490->next=((void*)0);
                    __dec_obj283=litem_490->item;
                    litem_490->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_490;
                    self->head->next=litem_490;
                }
                else {
                    litem_491=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value722=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value722, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_491->prev=self->tail;
                    litem_491->next=((void*)0);
                    __dec_obj284=litem_491->item;
                    litem_491->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_491;
                    self->tail=litem_491;
                }
            }
            self->len++;
            __result463__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result463__;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj285;
char* __dec_obj286;
struct tuple2$2sTypephcharph* __result464__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj285=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer2(sType_finalize,__dec_obj285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __dec_obj286=self->v2;
            self->v2=(char*)come_increment_ref_count(v2);
            __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
            __result464__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result464__;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional781;
_Bool _if_conditional782;
_Bool _if_conditional783;
_Bool _if_conditional784;
_Bool _if_conditional785;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional781=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional781) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional782=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional782) {
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional783=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional783) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional784=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional784) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional785=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional785) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional786;
struct sExternalGlobalVariable* __result471__;
void* right_value756;
struct sExternalGlobalVariable* result_508;
_Bool _if_conditional787;
void* right_value757;
struct sType* __dec_obj301;
_Bool _if_conditional788;
void* right_value758;
char* __dec_obj302;
_Bool _if_conditional789;
_Bool _if_conditional790;
void* right_value759;
char* __dec_obj303;
_Bool _if_conditional791;
void* right_value760;
struct list$1tuple2$2sTypephcharphph* __dec_obj304;
_Bool _if_conditional792;
void* right_value761;
char* __dec_obj305;
struct sExternalGlobalVariable* __result472__;
memset(&__result_obj__, 0, sizeof(void*));
right_value756 = (void*)0;
memset(&result_508, 0, sizeof(struct sExternalGlobalVariable*));
right_value757 = (void*)0;
right_value758 = (void*)0;
right_value759 = (void*)0;
right_value760 = (void*)0;
right_value761 = (void*)0;
                if(_if_conditional786=self==(void*)0,                _if_conditional786) {
                    __result471__ = __result_obj__ = (void*)0;
                    return __result471__;
                }
                result_508=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value756=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "sExternalGlobalVariable_clone", 3, "sExternalGlobalVariable"))));
                come_call_finalizer2(sExternalGlobalVariable_finalize,right_value756, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional787=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional787) {
                    __dec_obj301=result_508->type;
                    result_508->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value757=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value757, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional788=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional788) {
                    __dec_obj302=result_508->name;
                    result_508->name=(char*)come_increment_ref_count(((char*)(right_value758=string_clone(self->name))));
                    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value758 = come_decrement_ref_count2(right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional789=self!=((void*)0),                _if_conditional789) {
                    result_508->sline=self->sline;
                }
                if(_if_conditional790=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional790) {
                    __dec_obj303=result_508->sname;
                    result_508->sname=(char*)come_increment_ref_count(((char*)(right_value759=string_clone(self->sname))));
                    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value759 = come_decrement_ref_count2(right_value759, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional791=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional791) {
                    __dec_obj304=result_508->multiple_declare;
                    result_508->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value760=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value760, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional792=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional792) {
                    __dec_obj305=result_508->mDeclareSName;
                    result_508->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value761=string_clone(self->mDeclareSName))));
                    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value761 = come_decrement_ref_count2(right_value761, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result472__ = __result_obj__ = result_508;
                come_call_finalizer2(sExternalGlobalVariable_finalize,result_508, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result472__;
                come_call_finalizer2(sExternalGlobalVariable_finalize,result_508, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGlobalVariable_finalize(struct sGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional793;
_Bool _if_conditional794;
_Bool _if_conditional795;
_Bool _if_conditional796;
_Bool _if_conditional797;
_Bool _if_conditional798;
_Bool _if_conditional799;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional793=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional793) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional794=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional794) {
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional795=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional795) {
                    if(self->right_node) { self->right_node = come_decrement_ref_count2(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional796=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional796) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional797=self!=((void*)0)&&self->array_initializer!=((void*)0),                _if_conditional797) {
                    self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional798=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional798) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional799=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional799) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional800;
struct sGlobalVariable* __result474__;
void* right_value765;
struct sGlobalVariable* result_509;
_Bool _if_conditional801;
void* right_value766;
struct sType* __dec_obj306;
_Bool _if_conditional802;
void* right_value767;
char* __dec_obj307;
_Bool _if_conditional803;
void* right_value768;
struct sNode* __dec_obj308;
_Bool _if_conditional804;
_Bool _if_conditional805;
void* right_value769;
char* __dec_obj309;
_Bool _if_conditional806;
void* right_value770;
char* __dec_obj310;
_Bool _if_conditional807;
void* right_value771;
struct list$1tuple2$2sTypephcharphph* __dec_obj311;
_Bool _if_conditional808;
void* right_value772;
char* __dec_obj312;
struct sGlobalVariable* __result475__;
memset(&__result_obj__, 0, sizeof(void*));
right_value765 = (void*)0;
memset(&result_509, 0, sizeof(struct sGlobalVariable*));
right_value766 = (void*)0;
right_value767 = (void*)0;
right_value768 = (void*)0;
right_value769 = (void*)0;
right_value770 = (void*)0;
right_value771 = (void*)0;
right_value772 = (void*)0;
                if(_if_conditional800=self==(void*)0,                _if_conditional800) {
                    __result474__ = __result_obj__ = (void*)0;
                    return __result474__;
                }
                result_509=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value765=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "sGlobalVariable_clone", 3, "sGlobalVariable"))));
                come_call_finalizer2(sGlobalVariable_finalize,right_value765, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional801=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional801) {
                    __dec_obj306=result_509->type;
                    result_509->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value766=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value766, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional802=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional802) {
                    __dec_obj307=result_509->name;
                    result_509->name=(char*)come_increment_ref_count(((char*)(right_value767=string_clone(self->name))));
                    __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value767 = come_decrement_ref_count2(right_value767, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional803=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional803) {
                    __dec_obj308=result_509->right_node;
                    result_509->right_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value768=sNode_clone(self->right_node))));
                    if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value768) { right_value768 = come_decrement_ref_count2(right_value768, ((struct sNode*)right_value768)->finalize, ((struct sNode*)right_value768)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional804=self!=((void*)0),                _if_conditional804) {
                    result_509->sline=self->sline;
                }
                if(_if_conditional805=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional805) {
                    __dec_obj309=result_509->sname;
                    result_509->sname=(char*)come_increment_ref_count(((char*)(right_value769=string_clone(self->sname))));
                    __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value769 = come_decrement_ref_count2(right_value769, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional806=self!=((void*)0)&&self->array_initializer!=((void*)0),                _if_conditional806) {
                    __dec_obj310=result_509->array_initializer;
                    result_509->array_initializer=(char*)come_increment_ref_count(((char*)(right_value770=string_clone(self->array_initializer))));
                    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value770 = come_decrement_ref_count2(right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional807=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional807) {
                    __dec_obj311=result_509->multiple_declare;
                    result_509->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value771=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value771, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional808=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional808) {
                    __dec_obj312=result_509->mDeclareSName;
                    result_509->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value772=string_clone(self->mDeclareSName))));
                    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value772 = come_decrement_ref_count2(right_value772, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result475__ = __result_obj__ = result_509;
                come_call_finalizer2(sGlobalVariable_finalize,result_509, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result475__;
                come_call_finalizer2(sGlobalVariable_finalize,result_509, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
struct sNode* __result478__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result478__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result478__;
}

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result479__;
memset(&__result_obj__, 0, sizeof(void*));
    __result479__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result479__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

