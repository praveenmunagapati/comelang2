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

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);

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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1940, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1947, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1954, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1961, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1968, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1975, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1990, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2010, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2020, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2030, "smart_pointer$1long"))));
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2198, "smart_pointer$1char")))),self,sizeof(char)*len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2203, "smart_pointer$1short")))),self,sizeof(short short)*len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2208, "smart_pointer$1int")))),self,sizeof(int)*len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2213, "smart_pointer$1long")))),self,sizeof(long)*len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2218, "smart_pointer$1float")))),self,sizeof(float)*len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2223, "smart_pointer$1double")))),self,sizeof(double)*len)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
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
_Bool _if_conditional96;
struct sType* __dec_obj35;
_Bool _if_conditional97;
struct sClass* klass_36;
char* class_name_37;
struct sFun* operator_fun_38;
char* fun_name2_39;
_Bool _if_conditional98;
void* right_value85;
char* none_generics_name_40;
void* right_value86;
struct sType* obj_type_41;
void* right_value87;
char* __dec_obj36;
void* right_value88;
char* fun_name3_42;
struct sGenericsFun* generics_fun_45;
_Bool _if_conditional113;
void* right_value89;
_Bool _if_conditional114;
_Bool __result57__;
_Bool _if_conditional134;
void* right_value90;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_49;
char* fun_name_50;
void* right_value91;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_51;
char* fun_name2_52;
_Bool _if_conditional136;
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
_Bool _if_conditional137;
void* right_value96;
char* __dec_obj38;
_Bool _if_conditional138;
_Bool result_59;
_Bool _if_conditional139;
void* right_value97;
struct CVALUE* come_value_60;
char* left_value2_61;
void* right_value98;
void* right_value99;
_Bool _if_conditional144;
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
_Bool _if_conditional145;
void* right_value106;
char* __dec_obj43;
void* right_value107;
char* __dec_obj44;
_Bool __result65__;
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
    if(_if_conditional98=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional98) {
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
            if(_if_conditional114=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(fun_name2_39)))),generics_fun_45,obj_type_41,info),            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional114) {
                __result57__ = (_Bool)0;
                none_generics_name_40 = come_decrement_ref_count2(none_generics_name_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_42 = come_decrement_ref_count2(fun_name3_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_39 = come_decrement_ref_count2(fun_name2_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result57__;
            }
            operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_39);
        }
        else {
            if(_if_conditional134=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional134) {
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
                if(_if_conditional136=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional136) {
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
        if(_if_conditional138=operator_fun_38==((void*)0),        _if_conditional138) {
            operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_39);
        }
    }
    result_59=(_Bool)0;
    if(operator_fun_38) {
        come_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 85, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value99=xsprintf("\%s is assigned to",((char*)(right_value98=string_to_string(fun_name2_39)))))),list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional144=list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0)->mHeap&&left_value->type->mHeap,        _if_conditional144) {
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
    __result65__ = result_59;
    come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_39 = come_decrement_ref_count2(fun_name2_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result65__;
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
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
        __result52__ = self->len;
        return __result52__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_43;
unsigned int it_44;
_Bool _while_condtional7;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sGenericsFun* __result53__;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct sGenericsFun* __result54__;
struct sGenericsFun* __result55__;
struct sGenericsFun* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_43, 0, sizeof(unsigned int));
memset(&it_44, 0, sizeof(unsigned int));
            hash_43=string_get_hash_key(((char*)key))%self->size;
            it_44=hash_43;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional99=self->item_existance[it_44],                _if_conditional99) {
                    if(_if_conditional100=string_equals(self->keys[it_44],key),                    _if_conditional100) {
                        __result53__ = __result_obj__ = self->items[it_44];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result53__;
                    }
                    it_44++;
                    if(_if_conditional111=it_44>=self->size,                    _if_conditional111) {
                        it_44=0;
                    }
                    else {
                        if(_if_conditional112=it_44==hash_43,                        _if_conditional112) {
                            __result54__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result54__;
                        }
                    }
                }
                else {
                    __result55__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result55__;
                }
            }
            __result56__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result56__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional101=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional101) {
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional102) {
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional103) {
                                come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional104) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional105=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional105) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional106=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional106) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional107=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional107) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional108=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional108) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional109=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional109) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional110=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional110) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_46;
unsigned int hash_47;
unsigned int it_48;
_Bool _while_condtional8;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct sFun* __result58__;
_Bool _if_conditional132;
_Bool _if_conditional133;
struct sFun* __result59__;
struct sFun* __result60__;
struct sFun* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_46, 0, sizeof(struct sFun*));
memset(&hash_47, 0, sizeof(unsigned int));
memset(&it_48, 0, sizeof(unsigned int));
                memset(&default_value_46,0,sizeof(struct sFun*));
                hash_47=string_get_hash_key(((char*)key))%self->size;
                it_48=hash_47;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional115=self->item_existance[it_48],                    _if_conditional115) {
                        if(_if_conditional116=string_equals(self->keys[it_48],key),                        _if_conditional116) {
                            __result58__ = __result_obj__ = self->items[it_48];
                            come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result58__;
                        }
                        it_48++;
                        if(_if_conditional132=it_48>=self->size,                        _if_conditional132) {
                            it_48=0;
                        }
                        else {
                            if(_if_conditional133=it_48==hash_47,                            _if_conditional133) {
                                __result59__ = __result_obj__ = default_value_46;
                                come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result59__;
                            }
                        }
                    }
                    else {
                        __result60__ = __result_obj__ = default_value_46;
                        come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result60__;
                    }
                }
                __result61__ = __result_obj__ = default_value_46;
                come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional117=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional117) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional118=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional118) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional119=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional119) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional120=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional120) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional121=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional121) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional122=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional122) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional123=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional123) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional126=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional126) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional127=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional127) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional128=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional128) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional129=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional129) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional130=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional130) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional131=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional131) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional124;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional124=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional124) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional125=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional125) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional135;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional135=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional135) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional140;
_Bool _if_conditional141;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional140=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional140) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional141=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional141) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional142;
struct list_item$1sTypeph* it_62;
int i_63;
_Bool _while_condtional9;
_Bool _if_conditional143;
struct sType* __result62__;
struct sType* default_value_64;
struct sType* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_63, 0, sizeof(int));
memset(&default_value_64, 0, sizeof(struct sType*));
            if(_if_conditional142=position<0,            _if_conditional142) {
                position+=self->len;
            }
            it_62=self->head;
            i_63=0;
            while(_while_condtional9=it_62!=((void*)0),            _while_condtional9) {
                if(_if_conditional143=position==i_63,                _if_conditional143) {
                    __result62__ = __result_obj__ = it_62->item;
                    return __result62__;
                }
                it_62=it_62->next;
                i_63++;
            }
            memset(&default_value_64,0,sizeof(struct sType*));
            __result63__ = __result_obj__ = default_value_64;
            come_call_finalizer2(sType_finalize,default_value_64, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result63__;
            come_call_finalizer2(sType_finalize,default_value_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional146;
void* right_value108;
struct list_item$1CVALUEph* litem_67;
struct CVALUE* __dec_obj45;
_Bool _if_conditional148;
void* right_value109;
struct list_item$1CVALUEph* litem_68;
struct CVALUE* __dec_obj46;
void* right_value110;
struct list_item$1CVALUEph* litem_69;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1CVALUEph*));
right_value109 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1CVALUEph*));
right_value110 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional146=self->len==0,            _if_conditional146) {
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
                if(_if_conditional148=self->len==1,                _if_conditional148) {
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
            __result64__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result64__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional147;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional147=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional147) {
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
struct sReturnNode* __result66__;
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
    __result66__ = __result_obj__ = self;
    come_call_finalizer2(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result66__;
    come_call_finalizer2(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    __result67__ = self->sline;
    return __result67__;
}

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value113;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
    __result68__ = __result_obj__ = ((char*)(right_value113=__builtin_string(self->sname)));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result68__;
}

char* sReturnNode_kind(){
void* __result_obj__;
void* right_value114;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
    __result69__ = __result_obj__ = ((char*)(right_value114=__builtin_string("sReturnNode")));
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}

_Bool sReturnNode_terminated(){
void* __result_obj__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = (_Bool)0;
    return __result70__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional152;
struct sFun* come_fun_70;
void* right_value115;
struct sType* result_type_71;
void* right_value116;
struct sType* result_type2_72;
struct sType* result_type3_73;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool __result71__;
void* right_value117;
struct CVALUE* come_value_74;
_Bool _if_conditional155;
int right_value_id_75;
_Bool _if_conditional156;
void* right_value118;
struct sType* come_value_type_76;
void* right_value119;
struct sType* __dec_obj51;
static int num_result_77=0;
void* right_value120;
char* var_name_78;
int num_result_stack_79;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value121;
void* right_value122;
void* right_value123;
void* right_value124;
void* right_value125;
void* right_value126;
void* right_value127;
void* right_value128;
_Bool _if_conditional161;
void* right_value129;
void* right_value130;
void* right_value131;
void* right_value132;
void* right_value133;
void* right_value134;
void* right_value135;
void* right_value136;
struct sType* left_type2_80;
struct sType* right_type2_81;
_Bool _if_conditional162;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
int i_82;
_Bool _if_conditional163;
void* right_value145;
void* right_value146;
void* right_value147;
void* right_value148;
void* right_value149;
void* right_value150;
void* right_value151;
void* right_value152;
void* right_value153;
void* right_value154;
_Bool _if_conditional164;
void* right_value155;
struct sFun* come_fun_83;
_Bool _if_conditional165;
void* right_value156;
_Bool __result72__;
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
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&left_type2_80, 0, sizeof(struct sType*));
memset(&right_type2_81, 0, sizeof(struct sType*));
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&i_82, 0, sizeof(int));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&come_fun_83, 0, sizeof(struct sFun*));
right_value156 = (void*)0;
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
        if(_if_conditional154=!node_compile(self->value,info),        _if_conditional154) {
            __result71__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result71__;
        }
        come_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(_if_conditional155=come_value_74->type->mHeap&&come_value_74->var==((void*)0),        _if_conditional155) {
            right_value_id_75=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_74->c_value));
            if(_if_conditional156=right_value_id_75!=-1,            _if_conditional156) {
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
        if(_if_conditional157=result_type2_72->mPointerNum>0,        _if_conditional157) {
            if(_if_conditional158=come_value_74->type->mPointerNum!=result_type2_72->mPointerNum||string_operator_not_equals(result_type2_72->mClass->mName,come_value_74->type->mClass->mName),            _if_conditional158) {
                if(_if_conditional159=string_operator_not_equals(result_type2_72->mClass->mName,"void")&&string_operator_not_equals(come_value_74->type->mClass->mName,"void"),                _if_conditional159) {
                    if(_if_conditional160=result_type2_72->mNoSolvedGenericsType->v1==((void*)0)&&come_value_74->type->mNoSolvedGenericsType==((void*)0),                    _if_conditional160) {
                        err_msg(info,"invalid result type");
                        puts(((char*)(right_value124=xsprintf("left type \%s pointer num \%s",((char*)(right_value121=string_to_string(result_type2_72->mClass->mName))),((char*)(right_value123=string_to_string(((char*)(right_value122=int_to_string(result_type2_72->mPointerNum))))))))));
                        right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        puts(((char*)(right_value128=xsprintf("right type \%s pointer num \%s",((char*)(right_value125=string_to_string(come_value_74->type->mClass->mName))),((char*)(right_value127=string_to_string(((char*)(right_value126=int_to_string(come_value_74->type->mPointerNum))))))))));
                        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        exit(2);
                    }
                    else {
                        if(_if_conditional161=result_type2_72->mNoSolvedGenericsType->v1==((void*)0)||come_value_74->type->mNoSolvedGenericsType==((void*)0),                        _if_conditional161) {
                            err_msg(info,"invalid result type");
                            puts(((char*)(right_value132=xsprintf("left type \%s pointer num \%s",((char*)(right_value129=string_to_string(result_type2_72->mClass->mName))),((char*)(right_value131=string_to_string(((char*)(right_value130=int_to_string(result_type2_72->mPointerNum))))))))));
                            right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            puts(((char*)(right_value136=xsprintf("right type \%s pointer num \%s",((char*)(right_value133=string_to_string(come_value_74->type->mClass->mName))),((char*)(right_value135=string_to_string(((char*)(right_value134=int_to_string(come_value_74->type->mPointerNum))))))))));
                            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            exit(2);
                        }
                        else {
                            left_type2_80=result_type2_72->mNoSolvedGenericsType->v1;
                            right_type2_81=come_value_74->type->mNoSolvedGenericsType->v1;
                            if(_if_conditional162=string_operator_not_equals(left_type2_80->mClass->mName,right_type2_81->mClass->mName)&&list$1sTypeph_length(left_type2_80->mGenericsTypes)!=list$1sTypeph_length(right_type2_81->mGenericsTypes),                            _if_conditional162) {
                                err_msg(info,"invalid result type");
                                puts(((char*)(right_value140=xsprintf("left type \%s pointer num \%s",((char*)(right_value137=string_to_string(result_type2_72->mClass->mName))),((char*)(right_value139=string_to_string(((char*)(right_value138=int_to_string(result_type2_72->mPointerNum))))))))));
                                right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                puts(((char*)(right_value144=xsprintf("right type \%s pointer num \%s",((char*)(right_value141=string_to_string(come_value_74->type->mClass->mName))),((char*)(right_value143=string_to_string(((char*)(right_value142=int_to_string(come_value_74->type->mPointerNum))))))))));
                                right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                exit(2);
                            }
                            else {
                                for(                                i_82=0;                                i_82<list$1sTypeph_length(left_type2_80->mGenericsTypes);                                i_82++                                ){
                                    if(_if_conditional163=string_operator_not_equals(list$1sTypephp_operator_load_element(left_type2_80->mGenericsTypes,i_82)->mClass->mName,list$1sTypephp_operator_load_element(right_type2_81->mGenericsTypes,i_82)->mClass->mName),                                    _if_conditional163) {
                                        err_msg(info,"invalid result type");
                                        puts(((char*)(right_value148=xsprintf("left type \%s pointer num \%s",((char*)(right_value145=string_to_string(result_type2_72->mClass->mName))),((char*)(right_value147=string_to_string(((char*)(right_value146=int_to_string(result_type2_72->mPointerNum))))))))));
                                        right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        puts(((char*)(right_value152=xsprintf("right type \%s pointer num \%s",((char*)(right_value149=string_to_string(come_value_74->type->mClass->mName))),((char*)(right_value151=string_to_string(((char*)(right_value150=int_to_string(come_value_74->type->mPointerNum))))))))));
                                        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        exit(2);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value153=make_define_var(result_type2_72,var_name_78,(_Bool)0,info))));
            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_78,come_value_74->c_value);
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value154=make_define_var(result_type2_72,var_name_78,(_Bool)0,info))));
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s = %s;\n",var_name_78,come_value_74->c_value);
        }
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_70->mBlock,info,come_value_74->var,(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        caller_end(info);
        if(_if_conditional164=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional164) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value155=xsprintf("come_heap_final();\n"))));
            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_code(info,"return __result%d__;\n",num_result_stack_79);
        come_call_finalizer2(sType_finalize,result_type_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,come_value_type_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_78 = come_decrement_ref_count2(var_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_83=info->come_fun;
        caller_end(info);
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_83->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(_if_conditional165=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional165) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value156=xsprintf("come_heap_final();\n"))));
            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    __result72__ = (_Bool)1;
    return __result72__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value157;
char* __dec_obj52;
struct sLineNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result73__ = __result_obj__ = self;
    come_call_finalizer2(sLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result73__;
    come_call_finalizer2(sLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sLineNode_sline(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = self->sline;
    return __result74__;
}

char* sLineNode_sname(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value158;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
    __result75__ = __result_obj__ = ((char*)(right_value158=__builtin_string(self->sname)));
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result75__;
}

_Bool sLineNode_terminated(){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = (_Bool)0;
    return __result76__;
}

char* sLineNode_kind(){
void* __result_obj__;
void* right_value159;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    __result77__ = __result_obj__ = ((char*)(right_value159=__builtin_string("sLineNode")));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value160;
struct CVALUE* come_value_84;
void* right_value161;
char* __dec_obj53;
void* right_value162;
void* right_value163;
struct sType* __dec_obj54;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&come_value_84, 0, sizeof(struct CVALUE*));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
    come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 321, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=come_value_84->c_value;
    come_value_84->c_value=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("%d",info->sline))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=come_value_84->type;
    come_value_84->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value162=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 324, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_84->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
    add_come_last_code(info,"%s;\n",come_value_84->c_value);
    __result78__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result78__;
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value164;
char* __dec_obj55;
struct sSNameNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    self->sline=info->sline;
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result79__ = __result_obj__ = self;
    come_call_finalizer2(sSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result79__;
    come_call_finalizer2(sSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sSNameNode_sline(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = self->sline;
    return __result80__;
}

char* sSNameNode_sname(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value165;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value165=__builtin_string(self->sname)));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

_Bool sSNameNode_terminated(){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    __result82__ = (_Bool)0;
    return __result82__;
}

char* sSNameNode_kind(){
void* __result_obj__;
void* right_value166;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    __result83__ = __result_obj__ = ((char*)(right_value166=__builtin_string("sSNameNode")));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value167;
struct CVALUE* come_value_85;
void* right_value168;
char* __dec_obj56;
void* right_value169;
void* right_value170;
struct sType* __dec_obj57;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
memset(&come_value_85, 0, sizeof(struct CVALUE*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
    come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 372, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=come_value_85->c_value;
    come_value_85->c_value=(char*)come_increment_ref_count(((char*)(right_value168=xsprintf("\"%s\"",info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj57=come_value_85->type;
    come_value_85->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 375, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_85->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_85));
    add_come_last_code(info,"%s;\n",come_value_85->c_value);
    __result84__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer2(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value171;
char* __dec_obj58;
struct sFuncNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result85__ = __result_obj__ = self;
    come_call_finalizer2(sFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer2(sFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sFuncNode_sline(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
int __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = self->sline;
    return __result86__;
}

char* sFuncNode_sname(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value172;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self->sname)));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sFuncNode_terminated(){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = (_Bool)0;
    return __result88__;
}

char* sFuncNode_kind(){
void* __result_obj__;
void* right_value173;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
    __result89__ = __result_obj__ = ((char*)(right_value173=__builtin_string("sFuncNode")));
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value174;
struct CVALUE* come_value_86;
void* right_value175;
char* __dec_obj59;
void* right_value176;
void* right_value177;
struct sType* __dec_obj60;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
memset(&come_value_86, 0, sizeof(struct CVALUE*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
    come_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 423, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=come_value_86->c_value;
    come_value_86->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("\"%s\"",info->come_fun->mName))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj60=come_value_86->type;
    come_value_86->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value176=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 426, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_86->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_86));
    add_come_last_code(info,"%s;\n",come_value_86->c_value);
    __result90__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result90__;
    come_call_finalizer2(CVALUE_finalize,come_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value178;
char* __dec_obj61;
struct sCallerFuncNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
    self->sline=info->sline;
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result91__ = __result_obj__ = self;
    come_call_finalizer2(sCallerFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result91__;
    come_call_finalizer2(sCallerFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerFuncNode_sline(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    __result92__ = self->sline;
    return __result92__;
}

char* sCallerFuncNode_sname(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value179;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result93__ = __result_obj__ = ((char*)(right_value179=__builtin_string(self->sname)));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

_Bool sCallerFuncNode_terminated(){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = (_Bool)0;
    return __result94__;
}

char* sCallerFuncNode_kind(){
void* __result_obj__;
void* right_value180;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(right_value180=__builtin_string("sCallerFuncNode")));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value181;
struct CVALUE* come_value_87;
_Bool _if_conditional178;
void* right_value182;
char* __dec_obj62;
void* right_value183;
char* __dec_obj63;
void* right_value184;
void* right_value185;
struct sType* __dec_obj64;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
memset(&come_value_87, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
    come_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 475, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(info->caller_fun) {
        __dec_obj62=come_value_87->c_value;
        come_value_87->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("\"%s\"",info->caller_fun->mName))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj63=come_value_87->c_value;
        come_value_87->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("\"\""))));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj64=come_value_87->type;
    come_value_87->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 483, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_87->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_87));
    add_come_last_code(info,"%s;\n",come_value_87->c_value);
    __result96__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer2(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value186;
char* __dec_obj65;
struct sCallerLineNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
    self->sline=info->sline;
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result97__ = __result_obj__ = self;
    come_call_finalizer2(sCallerLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result97__;
    come_call_finalizer2(sCallerLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerLineNode_sline(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = self->sline;
    return __result98__;
}

char* sCallerLineNode_sname(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value187;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value187=__builtin_string(self->sname)));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

_Bool sCallerLineNode_terminated(){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    __result100__ = (_Bool)0;
    return __result100__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value188;
struct CVALUE* come_value_88;
void* right_value189;
char* __dec_obj66;
void* right_value190;
void* right_value191;
struct sType* __dec_obj67;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
memset(&come_value_88, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
    come_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 527, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj66=come_value_88->c_value;
    come_value_88->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%d",info->caller_line))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj67=come_value_88->type;
    come_value_88->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value190=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 530, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_88->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_88));
    add_come_last_code(info,"%s;\n",come_value_88->c_value);
    __result101__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result101__;
    come_call_finalizer2(CVALUE_finalize,come_value_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(){
void* __result_obj__;
void* right_value192;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value192=__builtin_string("sCallerLineNode")));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value193;
char* __dec_obj68;
struct sCallerSNameNode* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
    self->sline=info->sline;
    __dec_obj68=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string(info->sname))));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result103__ = __result_obj__ = self;
    come_call_finalizer2(sCallerSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result103__;
    come_call_finalizer2(sCallerSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerSNameNode_sline(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    __result104__ = self->sline;
    return __result104__;
}

char* sCallerSNameNode_sname(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value194;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    __result105__ = __result_obj__ = ((char*)(right_value194=__builtin_string(self->sname)));
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result105__;
}

_Bool sCallerSNameNode_terminated(){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = (_Bool)0;
    return __result106__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value195;
struct CVALUE* come_value_89;
void* right_value196;
char* __dec_obj69;
void* right_value197;
void* right_value198;
struct sType* __dec_obj70;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
memset(&come_value_89, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
    come_value_89=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 578, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj69=come_value_89->c_value;
    come_value_89->c_value=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("\"%s\"",info->caller_sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj70=come_value_89->type;
    come_value_89->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 581, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_89->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_89));
    add_come_last_code(info,"%s;\n",come_value_89->c_value);
    __result107__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result107__;
    come_call_finalizer2(CVALUE_finalize,come_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(){
void* __result_obj__;
void* right_value199;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
    __result108__ = __result_obj__ = ((char*)(right_value199=__builtin_string("sCallerSNameNode")));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

struct sParentReturnNode* sParentReturnNode_initialize(struct sParentReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj71;
void* right_value200;
char* __dec_obj72;
void* right_value201;
char* __dec_obj73;
struct sParentReturnNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
right_value201 = (void*)0;
    __dec_obj71=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj72=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value200=string_clone(value_source))));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj73=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(info->sname))));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result109__ = __result_obj__ = self;
    come_call_finalizer2(sParentReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result109__;
    come_call_finalizer2(sParentReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sParentReturnNode_sline(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    __result110__ = self->sline;
    return __result110__;
}

char* sParentReturnNode_sname(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value202;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value202=__builtin_string(self->sname)));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

_Bool sParentReturnNode_terminated(){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sParentReturnNode_kind(){
void* __result_obj__;
void* right_value203;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value203=__builtin_string("sParentReturnNode")));
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sParentReturnNode_compile(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional188;
_Bool __result114__;
struct sFun* come_fun_90;
void* right_value204;
struct sType* result_type_91;
void* right_value205;
struct sType* result_type2_92;
struct sType* result_type3_93;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool __result115__;
void* right_value206;
struct CVALUE* come_value_94;
_Bool _if_conditional192;
int right_value_id_95;
_Bool _if_conditional193;
void* right_value207;
char* __dec_obj74;
void* right_value208;
char* var_name2_96;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
_Bool _if_conditional194;
struct sFun* come_fun_97;
void* right_value213;
char* var_name2_98;
void* right_value214;
void* right_value215;
void* right_value216;
_Bool _if_conditional195;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_90, 0, sizeof(struct sFun*));
right_value204 = (void*)0;
memset(&result_type_91, 0, sizeof(struct sType*));
right_value205 = (void*)0;
memset(&result_type2_92, 0, sizeof(struct sType*));
memset(&result_type3_93, 0, sizeof(struct sType*));
right_value206 = (void*)0;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
memset(&right_value_id_95, 0, sizeof(int));
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&var_name2_96, 0, sizeof(char*));
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&come_fun_97, 0, sizeof(struct sFun*));
right_value213 = (void*)0;
memset(&var_name2_98, 0, sizeof(char*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
    if(_if_conditional188=info->current_stack_frame_struct==((void*)0),    _if_conditional188) {
        err_msg(info,"not in method block");
        __result114__ = (_Bool)0;
        return __result114__;
    }
    come_fun_90=info->come_fun;
    result_type_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(come_fun_90->mResultType))));
    come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=solve_generics(result_type_91,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_93=result_type2_92->mNoSolvedGenericsType->v1;
    if(result_type2_92->mNoSolvedGenericsType->v1) {
        result_type3_93=result_type2_92->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_93=result_type2_92;
    }
    if(self->value) {
        if(_if_conditional191=!node_compile(self->value,info),        _if_conditional191) {
            __result115__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result115__;
        }
        come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(_if_conditional192=come_value_94->type->mHeap&&come_value_94->var==((void*)0),        _if_conditional192) {
            right_value_id_95=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_94->c_value));
            if(_if_conditional193=right_value_id_95!=-1,            _if_conditional193) {
                remove_object_from_right_values(right_value_id_95,info);
            }
        }
        __dec_obj74=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value207=increment_ref_count_object(come_value_94->type,come_value_94->c_value,info))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        free_objects_on_return(come_fun_90->mBlock,info,come_value_94->var,(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        var_name2_96=(char*)come_increment_ref_count(((char*)(right_value208=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,((char*)(right_value212=xsprintf("            \%s->__method_block_result_kind__ = 3;\n            \%s->__method_block_return_value__ = \%s;\n",((char*)(right_value209=string_to_string(var_name2_96))),((char*)(right_value210=string_to_string(var_name2_96))),((char*)(right_value211=string_to_string(come_value_94->c_value)))))));
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional194=string_operator_equals(result_type3_93->mClass->mName,"void")&&result_type3_93->mPointerNum==0,        _if_conditional194) {
            add_come_code(info,"return;");
        }
        else {
            add_come_code(info,"return (void*)0;");
        }
        come_call_finalizer2(CVALUE_finalize,come_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name2_96 = come_decrement_ref_count2(var_name2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_97=info->come_fun;
        free_objects_on_return(come_fun_97->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        var_name2_98=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,((char*)(right_value216=xsprintf("            \%s->__method_block_result_kind__ = 4;\n            \%s->__method_block_return_value__ = 0;\n",((char*)(right_value214=string_to_string(var_name2_98))),((char*)(right_value215=string_to_string(var_name2_98)))))));
        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional195=string_operator_equals(result_type3_93->mClass->mName,"void")&&result_type3_93->mPointerNum==0,        _if_conditional195) {
            add_come_code(info,"return;");
        }
        else {
            add_come_code(info,"return (void*)0;");
        }
        var_name2_98 = come_decrement_ref_count2(var_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->last_statment_is_return=(_Bool)1;
    __result116__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result116__;
    come_call_finalizer2(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sParentBreakNode* sParentBreakNode_initialize(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value217;
char* __dec_obj75;
struct sParentBreakNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
    self->sline=info->sline;
    __dec_obj75=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(info->sname))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result117__ = __result_obj__ = self;
    come_call_finalizer2(sParentBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result117__;
    come_call_finalizer2(sParentBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParentBreakNode_sline(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = self->sline;
    return __result118__;
}

char* sParentBreakNode_sname(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value218;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value218 = (void*)0;
    __result119__ = __result_obj__ = ((char*)(right_value218=__builtin_string(self->sname)));
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool sParentBreakNode_terminated(){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = (_Bool)0;
    return __result120__;
}

char* sParentBreakNode_kind(){
void* __result_obj__;
void* right_value219;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
    __result121__ = __result_obj__ = ((char*)(right_value219=__builtin_string("sParentBreakNode")));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result121__;
}

_Bool sParentBreakNode_compile(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional197;
_Bool __result122__;
struct sFun* come_fun_99;
void* right_value220;
struct sType* result_type_100;
void* right_value221;
struct sType* result_type2_101;
struct sType* result_type3_102;
_Bool _if_conditional198;
void* right_value222;
char* var_name2_103;
void* right_value223;
void* right_value224;
void* right_value225;
_Bool _if_conditional199;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_99, 0, sizeof(struct sFun*));
right_value220 = (void*)0;
memset(&result_type_100, 0, sizeof(struct sType*));
right_value221 = (void*)0;
memset(&result_type2_101, 0, sizeof(struct sType*));
memset(&result_type3_102, 0, sizeof(struct sType*));
right_value222 = (void*)0;
memset(&var_name2_103, 0, sizeof(char*));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
    if(_if_conditional197=info->current_stack_frame_struct==((void*)0),    _if_conditional197) {
        err_msg(info,"not in method block");
        __result122__ = (_Bool)0;
        return __result122__;
    }
    come_fun_99=info->come_fun;
    result_type_100=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(come_fun_99->mResultType))));
    come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=solve_generics(result_type_100,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_102=result_type2_101->mNoSolvedGenericsType->v1;
    if(result_type2_101->mNoSolvedGenericsType->v1) {
        result_type3_102=result_type2_101->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_102=result_type2_101;
    }
    free_objects_on_return(come_fun_99->mBlock,info,((void*)0),(_Bool)0);
    free_right_value_objects(info,(_Bool)0);
    var_name2_103=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,((char*)(right_value225=xsprintf("        \%s->__method_block_result_kind__ = 1;\n        \%s->__method_block_return_value__ = 0;\n",((char*)(right_value223=string_to_string(var_name2_103))),((char*)(right_value224=string_to_string(var_name2_103)))))));
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional199=string_operator_equals(result_type3_102->mClass->mName,"void")&&result_type3_102->mPointerNum==0,    _if_conditional199) {
        add_come_code(info,"return;");
    }
    else {
        add_come_code(info,"return (void*)0;");
    }
    info->last_statment_is_return=(_Bool)1;
    __result123__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_103 = come_decrement_ref_count2(var_name2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result123__;
    come_call_finalizer2(sType_finalize,result_type_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_103 = come_decrement_ref_count2(var_name2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sParentContinueNode* sParentContinueNode_initialize(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value226;
char* __dec_obj76;
struct sParentContinueNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
    self->sline=info->sline;
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result124__ = __result_obj__ = self;
    come_call_finalizer2(sParentContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result124__;
    come_call_finalizer2(sParentContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParentContinueNode_sline(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = self->sline;
    return __result125__;
}

char* sParentContinueNode_sname(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value227;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
    __result126__ = __result_obj__ = ((char*)(right_value227=__builtin_string(self->sname)));
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sParentContinueNode_terminated(){
void* __result_obj__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = (_Bool)0;
    return __result127__;
}

char* sParentContinueNode_kind(){
void* __result_obj__;
void* right_value228;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
    __result128__ = __result_obj__ = ((char*)(right_value228=__builtin_string("sParentContinueNode")));
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result128__;
}

_Bool sParentContinueNode_compile(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional201;
_Bool __result129__;
struct sFun* come_fun_104;
void* right_value229;
struct sType* result_type_105;
void* right_value230;
struct sType* result_type2_106;
struct sType* result_type3_107;
_Bool _if_conditional202;
void* right_value231;
char* var_name2_108;
void* right_value232;
void* right_value233;
void* right_value234;
_Bool _if_conditional203;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_104, 0, sizeof(struct sFun*));
right_value229 = (void*)0;
memset(&result_type_105, 0, sizeof(struct sType*));
right_value230 = (void*)0;
memset(&result_type2_106, 0, sizeof(struct sType*));
memset(&result_type3_107, 0, sizeof(struct sType*));
right_value231 = (void*)0;
memset(&var_name2_108, 0, sizeof(char*));
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
    if(_if_conditional201=info->current_stack_frame_struct==((void*)0),    _if_conditional201) {
        err_msg(info,"not in method block");
        __result129__ = (_Bool)0;
        return __result129__;
    }
    come_fun_104=info->come_fun;
    result_type_105=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_clone(come_fun_104->mResultType))));
    come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_106=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=solve_generics(result_type_105,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_107=result_type2_106->mNoSolvedGenericsType->v1;
    if(result_type2_106->mNoSolvedGenericsType->v1) {
        result_type3_107=result_type2_106->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_107=result_type2_106;
    }
    free_objects_on_return(come_fun_104->mBlock,info,((void*)0),(_Bool)0);
    free_right_value_objects(info,(_Bool)0);
    var_name2_108=(char*)come_increment_ref_count(((char*)(right_value231=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,((char*)(right_value234=xsprintf("        \%s->__method_block_result_kind__ = 2;\n        \%s->__method_block_return_value__ = 0;\n",((char*)(right_value232=string_to_string(var_name2_108))),((char*)(right_value233=string_to_string(var_name2_108)))))));
    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional203=string_operator_equals(result_type3_107->mClass->mName,"void")&&result_type3_107->mPointerNum==0,    _if_conditional203) {
        add_come_code(info,"return;");
    }
    else {
        add_come_code(info,"return (void*)0;");
    }
    info->last_statment_is_return=(_Bool)1;
    __result130__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_108 = come_decrement_ref_count2(var_name2_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result130__;
    come_call_finalizer2(sType_finalize,result_type_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_108 = come_decrement_ref_count2(var_name2_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj77;
void* right_value235;
char* __dec_obj78;
struct sDerefferenceNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
    __dec_obj77=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(info->sname))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __result131__ = __result_obj__ = self;
    come_call_finalizer2(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result131__;
    come_call_finalizer2(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    __result132__ = self->sline;
    return __result132__;
}

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value236;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
    __result133__ = __result_obj__ = ((char*)(right_value236=__builtin_string(self->sname)));
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result133__;
}

_Bool sDerefferenceNode_terminated(){
void* __result_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    __result134__ = (_Bool)0;
    return __result134__;
}

char* sDerefferenceNode_kind(){
void* __result_obj__;
void* right_value237;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value237 = (void*)0;
    __result135__ = __result_obj__ = ((char*)(right_value237=__builtin_string("sDerefferenceNode")));
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_109;
_Bool _if_conditional206;
_Bool __result136__;
void* right_value238;
struct CVALUE* left_value_110;
_Bool _if_conditional207;
void* right_value239;
void* right_value240;
char* __dec_obj79;
struct sType* type_111;
char* fun_name_112;
_Bool calling_fun_113;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value241;
struct CVALUE* come_value_114;
void* right_value242;
char* __dec_obj80;
void* right_value243;
struct sType* __dec_obj81;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_109, 0, sizeof(struct sNode*));
right_value238 = (void*)0;
memset(&left_value_110, 0, sizeof(struct CVALUE*));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&type_111, 0, sizeof(struct sType*));
memset(&fun_name_112, 0, sizeof(char*));
memset(&calling_fun_113, 0, sizeof(_Bool));
right_value241 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
    value_109=self->value;
    if(_if_conditional206=!node_compile(value_109,info),    _if_conditional206) {
        __result136__ = (_Bool)0;
        return __result136__;
    }
    left_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(gComeDebug) {
        __dec_obj79=left_value_110->c_value;
        left_value_110->c_value=(char*)come_increment_ref_count(((char*)(right_value240=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value239=make_type_name_string(left_value_110->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_110->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    type_111=(struct sType*)come_increment_ref_count(left_value_110->type);
    fun_name_112="operator_derefference";
    if(self->mQuote) {
        calling_fun_113=(_Bool)0;
    }
    else {
        calling_fun_113=operator_overload_fun_self(type_111,fun_name_112,left_value_110,info);
    }
    if(_if_conditional209=!calling_fun_113,    _if_conditional209) {
        come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 936, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj80=come_value_114->c_value;
        come_value_114->c_value=(char*)come_increment_ref_count(((char*)(right_value242=xsprintf("*%s",left_value_110->c_value))));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj81=come_value_114->type;
        come_value_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(left_value_110->type))));
        come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_114->type->mPointerNum--;
        come_value_114->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_114->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_114));
        come_call_finalizer2(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result137__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result137__;
    come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj82;
void* right_value244;
char* __dec_obj83;
struct sRefferenceNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
    __dec_obj82=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(info->sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result138__ = __result_obj__ = self;
    come_call_finalizer2(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result138__;
    come_call_finalizer2(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    __result139__ = self->sline;
    return __result139__;
}

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value245;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
    __result140__ = __result_obj__ = ((char*)(right_value245=__builtin_string(self->sname)));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

_Bool sRefferenceNode_terminated(){
void* __result_obj__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    __result141__ = (_Bool)0;
    return __result141__;
}

char* sRefferenceNode_kind(){
void* __result_obj__;
void* right_value246;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
    __result142__ = __result_obj__ = ((char*)(right_value246=__builtin_string("sRefferenceNode")));
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_115;
_Bool _if_conditional212;
_Bool __result143__;
void* right_value247;
struct CVALUE* left_value_116;
void* right_value248;
struct CVALUE* come_value_117;
void* right_value249;
char* __dec_obj84;
void* right_value250;
struct sType* __dec_obj85;
_Bool __result144__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_115, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&left_value_116, 0, sizeof(struct CVALUE*));
right_value248 = (void*)0;
memset(&come_value_117, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
    value_115=self->value;
    if(_if_conditional212=!node_compile(value_115,info),    _if_conditional212) {
        __result143__ = (_Bool)0;
        return __result143__;
    }
    left_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 999, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=come_value_117->c_value;
    come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("&%s",left_value_116->c_value))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj85=come_value_117->type;
    come_value_117->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(left_value_116->type))));
    come_call_finalizer2(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_117->type->mPointerNum++;
    come_value_117->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_117->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
    __result144__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result144__;
    __result145__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result145__;
    come_call_finalizer2(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj86;
void* right_value251;
char* __dec_obj87;
struct sReverseNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
    __dec_obj86=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result146__ = __result_obj__ = self;
    come_call_finalizer2(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result146__;
    come_call_finalizer2(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    __result147__ = self->sline;
    return __result147__;
}

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value252;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
    __result148__ = __result_obj__ = ((char*)(right_value252=__builtin_string(self->sname)));
    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result148__;
}

_Bool sReverseNode_terminated(){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    __result149__ = (_Bool)0;
    return __result149__;
}

char* sReverseNode_kind(){
void* __result_obj__;
void* right_value253;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
    __result150__ = __result_obj__ = ((char*)(right_value253=__builtin_string("sReverseNode")));
    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_118;
_Bool _if_conditional215;
_Bool __result151__;
void* right_value254;
struct CVALUE* left_value_119;
void* right_value255;
struct CVALUE* come_value_120;
void* right_value256;
char* __dec_obj88;
void* right_value257;
struct sType* __dec_obj89;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_118, 0, sizeof(struct sNode*));
right_value254 = (void*)0;
memset(&left_value_119, 0, sizeof(struct CVALUE*));
right_value255 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value256 = (void*)0;
right_value257 = (void*)0;
    value_118=self->value;
    if(_if_conditional215=!node_compile(value_118,info),    _if_conditional215) {
        __result151__ = (_Bool)0;
        return __result151__;
    }
    left_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value254=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value255=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1062, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=come_value_120->c_value;
    come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("!%s",left_value_119->c_value))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj89=come_value_120->type;
    come_value_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(left_value_119->type))));
    come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_120->type->mPointerNum--;
    come_value_120->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_120->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_120));
    __result152__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result152__;
    come_call_finalizer2(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__;
struct sNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    stackframe();
    exit(3);
    __result153__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result153__;
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__;
void* right_value258;
char* __dec_obj90;
void* right_value268;
struct list$1tuple2$2charphsNodephph* __dec_obj96;
void* right_value269;
char* __dec_obj97;
struct sFunCallNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
    __dec_obj90=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string(fun_name))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj96=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value268=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string(info->sname))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result160__ = __result_obj__ = self;
    come_call_finalizer2(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result160__;
    come_call_finalizer2(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional216;
struct list$1tuple2$2charphsNodephph* __result154__;
void* right_value259;
void* right_value260;
struct list$1tuple2$2charphsNodephph* result_123;
struct list_item$1tuple2$2charphsNodephph* it_124;
_Bool _while_condtional11;
void* right_value267;
struct list$1tuple2$2charphsNodephph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&result_123, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_124, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value267 = (void*)0;
        if(_if_conditional216=self==((void*)0),        _if_conditional216) {
            __result154__ = __result_obj__ = ((void*)0);
            return __result154__;
        }
        result_123=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value260=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value259=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_124=self->head;
        while(_while_condtional11=it_124!=((void*)0),        _while_condtional11) {
            list$1tuple2$2charphsNodephph_add(result_123,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value267=tuple2$2charphsNodephp_clone(it_124->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_124=it_124->next;
        }
        __result159__ = __result_obj__ = result_123;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result159__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result155__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result155__;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_121;
_Bool _while_condtional10;
struct list_item$1tuple2$2charphsNodephph* prev_it_122;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_121, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_122, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_121=self->head;
                while(_while_condtional10=it_121!=((void*)0),                _while_condtional10) {
                    prev_it_122=it_121;
                    it_121=it_121->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional217;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional217=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional217) {
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional218;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional218=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional218) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional219=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional219) {
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional220;
void* right_value261;
struct list_item$1tuple2$2charphsNodephph* litem_125;
struct tuple2$2charphsNodeph* __dec_obj91;
_Bool _if_conditional223;
void* right_value262;
struct list_item$1tuple2$2charphsNodephph* litem_126;
struct tuple2$2charphsNodeph* __dec_obj92;
void* right_value263;
struct list_item$1tuple2$2charphsNodephph* litem_127;
struct tuple2$2charphsNodeph* __dec_obj93;
struct list$1tuple2$2charphsNodephph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
memset(&litem_125, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value262 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value263 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional220=self->len==0,                _if_conditional220) {
                    litem_125=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value261=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_125->prev=((void*)0);
                    litem_125->next=((void*)0);
                    __dec_obj91=litem_125->item;
                    litem_125->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_125;
                    self->head=litem_125;
                }
                else {
                    if(_if_conditional223=self->len==1,                    _if_conditional223) {
                        litem_126=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value262=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_126->prev=self->head;
                        litem_126->next=((void*)0);
                        __dec_obj92=litem_126->item;
                        litem_126->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_126;
                        self->head->next=litem_126;
                    }
                    else {
                        litem_127=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value263=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_127->prev=self->tail;
                        litem_127->next=((void*)0);
                        __dec_obj93=litem_127->item;
                        litem_127->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_127;
                        self->tail=litem_127;
                    }
                }
                self->len++;
                __result156__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result156__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional221;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional221=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional221) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional222=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional222) {
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional224;
struct tuple2$2charphsNodeph* __result157__;
void* right_value264;
struct tuple2$2charphsNodeph* result_128;
_Bool _if_conditional225;
void* right_value265;
char* __dec_obj94;
_Bool _if_conditional226;
void* right_value266;
struct sNode* __dec_obj95;
struct tuple2$2charphsNodeph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
memset(&result_128, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value265 = (void*)0;
right_value266 = (void*)0;
                if(_if_conditional224=self==(void*)0,                _if_conditional224) {
                    __result157__ = __result_obj__ = (void*)0;
                    return __result157__;
                }
                result_128=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value264=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional225=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional225) {
                    __dec_obj94=result_128->v1;
                    result_128->v1=(char*)come_increment_ref_count(((char*)(right_value265=string_clone(self->v1))));
                    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional226=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional226) {
                    __dec_obj95=result_128->v2;
                    result_128->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=sNode_clone(self->v2))));
                    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result158__ = __result_obj__ = result_128;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_128, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result158__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sFunCallNode_sline(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = self->sline;
    return __result161__;
}

char* sFunCallNode_sname(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value270;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
    __result162__ = __result_obj__ = ((char*)(right_value270=__builtin_string(self->sname)));
    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result162__;
}

_Bool sFunCallNode_terminated(){
void* __result_obj__;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = (_Bool)0;
    return __result163__;
}

char* sFunCallNode_kind(){
void* __result_obj__;
void* right_value271;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
    __result164__ = __result_obj__ = ((char*)(right_value271=__builtin_string("sFunCallNode")));
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_129;
struct list$1tuple2$2charphsNodephph* params_130;
struct sVar* var__131;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct sType* lambda_type_132;
void* right_value272;
struct sType* result_type_133;
void* right_value273;
void* right_value274;
struct list$1CVALUEph* come_params_136;
_Bool _if_conditional232;
_Bool __result167__;
int i_137;
struct list$1tuple2$2charphsNodephph* o2_saved_138;
struct tuple2$2charphsNodeph* it_141;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_144;
struct sNode* node_145;
_Bool _if_conditional237;
_Bool __result175__;
void* right_value275;
struct CVALUE* come_value_146;
_Bool _if_conditional238;
void* right_value276;
void* right_value277;
void* right_value278;
_Bool _if_conditional239;
void* right_value279;
void* right_value280;
struct buffer* buf_147;
int j_148;
struct list$1CVALUEph* o2_saved_149;
struct CVALUE* it_152;
_Bool _if_conditional244;
void* right_value281;
struct CVALUE* come_value_155;
void* right_value282;
char* __dec_obj98;
_Bool _if_conditional245;
void* right_value283;
char* __dec_obj99;
void* right_value284;
struct sType* __dec_obj100;
_Bool _if_conditional246;
void* right_value285;
void* right_value286;
struct list$1CVALUEph* come_params_156;
struct list$1tuple2$2charphsNodephph* o2_saved_157;
struct tuple2$2charphsNodeph* it_158;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_159;
struct sNode* node_160;
_Bool _if_conditional247;
_Bool __result184__;
void* right_value287;
struct CVALUE* come_value_161;
void* right_value288;
void* right_value289;
struct buffer* buf_162;
int j_163;
struct list$1CVALUEph* o2_saved_164;
struct CVALUE* it_165;
_Bool _if_conditional248;
void* right_value290;
struct CVALUE* come_value_166;
void* right_value291;
char* __dec_obj101;
_Bool _if_conditional249;
void* right_value292;
void* right_value293;
struct sType* __dec_obj102;
_Bool _if_conditional250;
void* right_value294;
void* right_value295;
struct sType* __dec_obj103;
_Bool _if_conditional251;
void* right_value296;
void* right_value297;
struct sType* __dec_obj104;
_Bool _if_conditional252;
void* right_value298;
void* right_value299;
struct sType* __dec_obj105;
_Bool __result185__;
_Bool _if_conditional253;
void* right_value300;
char* __dec_obj106;
_Bool _if_conditional254;
void* right_value301;
char* __dec_obj107;
_Bool _if_conditional255;
char* p_167;
int version_168;
_Bool _while_condtional13;
_Bool _if_conditional256;
char* p2_169;
_Bool _while_condtional14;
int i_171;
void* right_value302;
char* new_fun_name_172;
_Bool _if_conditional257;
void* right_value303;
char* __dec_obj108;
_Bool _if_conditional258;
void* right_value304;
char* new_fun_name_173;
_Bool _if_conditional259;
void* right_value305;
char* __dec_obj109;
_Bool _if_conditional260;
_Bool __result186__;
int i_174;
void* right_value306;
char* new_fun_name_175;
_Bool _if_conditional261;
void* right_value307;
char* __dec_obj110;
struct sFun* fun_178;
_Bool _if_conditional266;
_Bool __result191__;
void* right_value308;
struct sType* result_type_179;
void* right_value309;
void* right_value310;
struct list$1sTypeph* param_types_180;
struct list$1sTypeph* o2_saved_181;
struct sType* it_184;
void* right_value311;
void* right_value312;
struct sType* it2_187;
void* right_value316;
void* right_value317;
struct sType* __dec_obj114;
void* right_value318;
void* right_value319;
struct list$1CVALUEph* come_params_191;
void* right_value320;
void* right_value326;
struct map$2charphCVALUEph* label_params_197;
int i_198;
struct list$1tuple2$2charphsNodephph* o2_saved_199;
struct tuple2$2charphsNodeph* it_200;
struct tuple2$2charphsNodeph* multiple_assign_var7;
char* label_201;
struct sNode* node_202;
_Bool _if_conditional277;
_Bool __result202__;
void* right_value327;
struct CVALUE* come_value_203;
_Bool _if_conditional278;
_Bool _if_conditional279;
int n_204;
struct list$1charph* o2_saved_205;
char* it_208;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value328;
void* right_value329;
void* right_value330;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value331;
void* right_value332;
void* right_value333;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value340;
_Bool _if_conditional337;
void* right_value341;
char* default_param_258;
char* param_name_259;
struct CVALUE* come_value_263;
_Bool _if_conditional344;
struct buffer* source_264;
char* p_265;
char* head_266;
int sline_267;
void* right_value342;
struct buffer* __dec_obj116;
void* right_value343;
struct sNode* node_268;
_Bool _if_conditional345;
_Bool __result240__;
struct buffer* __dec_obj117;
void* right_value344;
struct CVALUE* come_value_269;
void* right_value345;
void* right_value346;
void* right_value347;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool __result241__;
_Bool _if_conditional348;
char* param_name_270;
struct CVALUE* come_value_271;
_Bool _if_conditional349;
void* right_value348;
void* right_value349;
void* right_value350;
void* right_value354;
_Bool _if_conditional357;
_Bool __result248__;
void* right_value355;
void* right_value356;
struct buffer* buf_275;
int j_276;
struct list$1CVALUEph* o2_saved_277;
struct CVALUE* it_278;
_Bool _if_conditional358;
void* right_value357;
struct CVALUE* come_value_279;
void* right_value358;
char* __dec_obj121;
void* right_value359;
struct sType* __dec_obj122;
_Bool _if_conditional359;
void* right_value360;
char* __dec_obj123;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value361;
char* __dec_obj124;
_Bool __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_129, 0, sizeof(char*));
memset(&params_130, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&var__131, 0, sizeof(struct sVar*));
memset(&lambda_type_132, 0, sizeof(struct sType*));
right_value272 = (void*)0;
memset(&result_type_133, 0, sizeof(struct sType*));
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&come_params_136, 0, sizeof(struct list$1CVALUEph*));
memset(&i_137, 0, sizeof(int));
memset(&o2_saved_138, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_141, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_144, 0, sizeof(char*));
memset(&node_145, 0, sizeof(struct sNode*));
memset(&label_144, 0, sizeof(char*));
memset(&node_145, 0, sizeof(struct sNode*));
right_value275 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&buf_147, 0, sizeof(struct buffer*));
memset(&j_148, 0, sizeof(int));
memset(&o2_saved_149, 0, sizeof(struct list$1CVALUEph*));
memset(&it_152, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&come_params_156, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_157, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_158, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_159, 0, sizeof(char*));
memset(&node_160, 0, sizeof(struct sNode*));
memset(&label_159, 0, sizeof(char*));
memset(&node_160, 0, sizeof(struct sNode*));
right_value287 = (void*)0;
memset(&come_value_161, 0, sizeof(struct CVALUE*));
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&buf_162, 0, sizeof(struct buffer*));
memset(&j_163, 0, sizeof(int));
memset(&o2_saved_164, 0, sizeof(struct list$1CVALUEph*));
memset(&it_165, 0, sizeof(struct CVALUE*));
right_value290 = (void*)0;
memset(&come_value_166, 0, sizeof(struct CVALUE*));
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&p_167, 0, sizeof(char*));
memset(&version_168, 0, sizeof(int));
memset(&p2_169, 0, sizeof(char*));
memset(&i_171, 0, sizeof(int));
right_value302 = (void*)0;
memset(&new_fun_name_172, 0, sizeof(char*));
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&new_fun_name_173, 0, sizeof(char*));
right_value305 = (void*)0;
memset(&i_174, 0, sizeof(int));
right_value306 = (void*)0;
memset(&new_fun_name_175, 0, sizeof(char*));
right_value307 = (void*)0;
memset(&fun_178, 0, sizeof(struct sFun*));
right_value308 = (void*)0;
memset(&result_type_179, 0, sizeof(struct sType*));
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&param_types_180, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_181, 0, sizeof(struct list$1sTypeph*));
memset(&it_184, 0, sizeof(struct sType*));
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&it2_187, 0, sizeof(struct sType*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&come_params_191, 0, sizeof(struct list$1CVALUEph*));
right_value320 = (void*)0;
right_value326 = (void*)0;
memset(&label_params_197, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_198, 0, sizeof(int));
memset(&o2_saved_199, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_200, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_201, 0, sizeof(char*));
memset(&node_202, 0, sizeof(struct sNode*));
memset(&label_201, 0, sizeof(char*));
memset(&node_202, 0, sizeof(struct sNode*));
right_value327 = (void*)0;
memset(&come_value_203, 0, sizeof(struct CVALUE*));
memset(&n_204, 0, sizeof(int));
memset(&o2_saved_205, 0, sizeof(struct list$1charph*));
memset(&it_208, 0, sizeof(char*));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&default_param_258, 0, sizeof(char*));
memset(&param_name_259, 0, sizeof(char*));
memset(&come_value_263, 0, sizeof(struct CVALUE*));
memset(&source_264, 0, sizeof(struct buffer*));
memset(&p_265, 0, sizeof(char*));
memset(&head_266, 0, sizeof(char*));
memset(&sline_267, 0, sizeof(int));
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&node_268, 0, sizeof(struct sNode*));
right_value344 = (void*)0;
memset(&come_value_269, 0, sizeof(struct CVALUE*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&param_name_270, 0, sizeof(char*));
memset(&come_value_271, 0, sizeof(struct CVALUE*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&buf_275, 0, sizeof(struct buffer*));
memset(&j_276, 0, sizeof(int));
memset(&o2_saved_277, 0, sizeof(struct list$1CVALUEph*));
memset(&it_278, 0, sizeof(struct CVALUE*));
right_value357 = (void*)0;
memset(&come_value_279, 0, sizeof(struct CVALUE*));
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
    fun_name_129=(char*)come_increment_ref_count(self->fun_name);
    params_130=self->params;
    var__131=get_variable_from_table(info->lv_table,fun_name_129);
    if(_if_conditional230=var__131==((void*)0),    _if_conditional230) {
        var__131=get_variable_from_table(info->gv_table,fun_name_129);
    }
    if(var__131) {
        lambda_type_132=var__131->mType;
        result_type_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(lambda_type_132->mResultType->v1))));
        come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_133->mStatic=(_Bool)0;
        come_params_136=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value274=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value273=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1142, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional232=list$1sTypeph_length(lambda_type_132->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_130)&&!lambda_type_132->mVarArgs,        _if_conditional232) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_129,list$1sTypeph_length(lambda_type_132->mParamTypes),list$1tuple2$2charphsNodephph_length(params_130));
            __result167__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result167__;
        }
        i_137=0;
        for(        o2_saved_138=(params_130),it_141=list$1tuple2$2charphsNodephph_begin((o2_saved_138));        !list$1tuple2$2charphsNodephph_end((o2_saved_138));        it_141=list$1tuple2$2charphsNodephph_next((o2_saved_138))        ){
            multiple_assign_var5=it_141;
            label_144=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_145=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            if(_if_conditional237=!node_compile(node_145,info),            _if_conditional237) {
                __result175__ = (_Bool)0;
                label_144 = come_decrement_ref_count2(label_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_145) { node_145 = come_decrement_ref_count2(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,result_type_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result175__;
            }
            come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional238=lambda_type_132->mVarArgs&&list$1sTypephp_operator_load_element(lambda_type_132->mParamTypes,i_137)==((void*)0),            _if_conditional238) {
            }
            else {
                check_assign_type(((char*)(right_value278=xsprintf("\%s calling param #\%s",((char*)(right_value276=string_to_string(fun_name_129))),((char*)(right_value277=int_to_string(i_137)))))),list$1sTypephp_operator_load_element(lambda_type_132->mParamTypes,i_137),come_value_146->type,come_value_146,(_Bool)0,(_Bool)1,info);
                right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional239=list$1sTypephp_operator_load_element(lambda_type_132->mParamTypes,i_137)->mHeap&&come_value_146->type->mHeap,                _if_conditional239) {
                    std_move(list$1sTypephp_operator_load_element(lambda_type_132->mParamTypes,i_137),come_value_146->type,come_value_146,info);
                }
            }
            list$1CVALUEph_push_back(come_params_136,(struct CVALUE*)come_increment_ref_count(come_value_146));
            dec_stack_ptr(1,info);
            i_137++;
            label_144 = come_decrement_ref_count2(label_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_145) { node_145 = come_decrement_ref_count2(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buf_147=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value280=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value279=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1173, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_147,var__131->mCValueName);
        buffer_append_str(buf_147,"(");
        j_148=0;
        for(        o2_saved_149=(struct list$1CVALUEph*)come_increment_ref_count((come_params_136)),it_152=list$1CVALUEph_begin((o2_saved_149));        !list$1CVALUEph_end((o2_saved_149));        it_152=list$1CVALUEph_next((o2_saved_149))        ){
            buffer_append_str(buf_147,it_152->c_value);
            if(_if_conditional244=j_148!=list$1CVALUEph_length(come_params_136)-1,            _if_conditional244) {
                buffer_append_str(buf_147,",");
            }
            j_148++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_147,")");
        come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1190, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj98=come_value_155->c_value;
        come_value_155->c_value=(char*)come_increment_ref_count(((char*)(right_value282=buffer_to_string(buf_147))));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(lambda_type_132->mResultType->v1->mHeap) {
            __dec_obj99=come_value_155->c_value;
            come_value_155->c_value=(char*)come_increment_ref_count(((char*)(right_value283=append_object_to_right_values(come_value_155->c_value,(struct sType*)come_increment_ref_count(lambda_type_132->mResultType->v1),info))));
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj100=come_value_155->type;
        come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_clone(result_type_133))));
        come_call_finalizer2(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_155->type->mStatic=(_Bool)0;
        come_value_155->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_155->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
        come_call_finalizer2(sType_finalize,result_type_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional246=string_operator_equals(fun_name_129,"__builtin_memmove")||string_operator_equals(fun_name_129,"__builtin_memset")||string_operator_equals(fun_name_129,"__builtin_ffs")||string_operator_equals(fun_name_129,"__builtin_ffsl")||string_operator_equals(fun_name_129,"__builtin_ffsll"),        _if_conditional246) {
            come_params_156=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value286=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value285=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1208, "list$1CVALUEph"))))))));
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_157=(params_130),it_158=list$1tuple2$2charphsNodephph_begin((o2_saved_157));            !list$1tuple2$2charphsNodephph_end((o2_saved_157));            it_158=list$1tuple2$2charphsNodephph_next((o2_saved_157))            ){
                multiple_assign_var6=it_158;
                label_159=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_160=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional247=!node_compile(node_160,info),                _if_conditional247) {
                    __result184__ = (_Bool)0;
                    label_159 = come_decrement_ref_count2(label_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_160) { node_160 = come_decrement_ref_count2(node_160, ((struct sNode*)node_160)->finalize, ((struct sNode*)node_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result184__;
                }
                come_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value287=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_156,(struct CVALUE*)come_increment_ref_count(come_value_161));
                label_159 = come_decrement_ref_count2(label_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_160) { node_160 = come_decrement_ref_count2(node_160, ((struct sNode*)node_160)->finalize, ((struct sNode*)node_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            buf_162=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value289=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value288=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1222, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_162,fun_name_129);
            buffer_append_str(buf_162,"(");
            j_163=0;
            for(            o2_saved_164=(struct list$1CVALUEph*)come_increment_ref_count((come_params_156)),it_165=list$1CVALUEph_begin((o2_saved_164));            !list$1CVALUEph_end((o2_saved_164));            it_165=list$1CVALUEph_next((o2_saved_164))            ){
                buffer_append_str(buf_162,it_165->c_value);
                if(_if_conditional248=j_163!=list$1CVALUEph_length(come_params_156)-1,                _if_conditional248) {
                    buffer_append_str(buf_162,",");
                }
                j_163++;
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_162,")");
            come_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1239, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj101=come_value_166->c_value;
            come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value291=buffer_to_string(buf_162))));
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional249=string_operator_equals(fun_name_129,"__builtin_memmove")||string_operator_equals(fun_name_129,"__builtin_memset"),            _if_conditional249) {
                __dec_obj102=come_value_166->type;
                come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1243, "sType")))),"void",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional250=string_operator_equals(fun_name_129,"__builtin_ffs"),                _if_conditional250) {
                    __dec_obj103=come_value_166->type;
                    come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value294=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1246, "sType")))),"int",(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional251=string_operator_equals(fun_name_129,"__builtin_ffsl"),                    _if_conditional251) {
                        __dec_obj104=come_value_166->type;
                        come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value296=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1249, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        if(_if_conditional252=string_operator_equals(fun_name_129,"__builtin_ffsll"),                        _if_conditional252) {
                            __dec_obj105=come_value_166->type;
                            come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value298=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1252, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
            }
            come_value_166->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_166->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
            __result185__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result185__;
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional253=string_operator_equals(fun_name_129,"string"),            _if_conditional253) {
                __dec_obj106=fun_name_129;
                fun_name_129=(char*)come_increment_ref_count(((char*)(right_value300=__builtin_string("__builtin_string"))));
                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional254=string_operator_equals(fun_name_129,"wstring"),                _if_conditional254) {
                    __dec_obj107=fun_name_129;
                    fun_name_129=(char*)come_increment_ref_count(((char*)(right_value301=__builtin_string("__builtin_wstring"))));
                    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional255=string_operator_equals(fun_name_129,"inherit"),                    _if_conditional255) {
                        p_167=info->come_fun->mName;
                        version_168=0;
                        while(_while_condtional13=*p_167,                        _while_condtional13) {
                            if(_if_conditional256=*p_167==95&&*(p_167+1)==118&&xisdigit(*(p_167+2)),                            _if_conditional256) {
                                p2_169=p_167+2;
                                version_168=0;
                                while(_while_condtional14=xisdigit(*p2_169),                                _while_condtional14) {
                                    version_168=version_168*10+(*p2_169-48);
                                    p2_169++;
                                }
                                break;
                            }
                            else {
                                p_167++;
                            }
                        }
                        char real_fun_name_170[2048];
                        memset(&real_fun_name_170, 0, sizeof(char)                        *(2048)                        );
                        memcpy(real_fun_name_170,info->come_fun->mName,p_167-info->come_fun->mName);
                        real_fun_name_170[p_167-info->come_fun->mName]=0;
                        for(                        i_171=version_168-1;                        i_171>=1;                        i_171--                        ){
                            new_fun_name_172=(char*)come_increment_ref_count(((char*)(right_value302=xsprintf("%s_v%d",real_fun_name_170,i_171))));
                            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional257=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_172),                            _if_conditional257) {
                                __dec_obj108=fun_name_129;
                                fun_name_129=(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string(new_fun_name_172))));
                                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_172 = come_decrement_ref_count2(new_fun_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_172 = come_decrement_ref_count2(new_fun_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional258=i_171==0,                        _if_conditional258) {
                            new_fun_name_173=(char*)come_increment_ref_count(((char*)(right_value304=xsprintf("%s",real_fun_name_170))));
                            right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional259=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_173),                            _if_conditional259) {
                                __dec_obj109=fun_name_129;
                                fun_name_129=(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string(new_fun_name_173))));
                                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional260=string_operator_equals(fun_name_129,info->come_fun->mName),                            _if_conditional260) {
                                err_msg(info,"invalid inherit");
                                __result186__ = (_Bool)0;
                                new_fun_name_173 = come_decrement_ref_count2(new_fun_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result186__;
                            }
                            new_fun_name_173 = come_decrement_ref_count2(new_fun_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        for(                        i_174=128;                        i_174>=1;                        i_174--                        ){
                            new_fun_name_175=(char*)come_increment_ref_count(((char*)(right_value306=xsprintf("%s_v%d",fun_name_129,i_174))));
                            right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional261=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_175),                            _if_conditional261) {
                                __dec_obj110=fun_name_129;
                                fun_name_129=(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(new_fun_name_175))));
                                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_175 = come_decrement_ref_count2(new_fun_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_175 = come_decrement_ref_count2(new_fun_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        fun_178=map$2charphsFunph_at(info->funcs,fun_name_129,((void*)0));
        if(_if_conditional266=fun_178==((void*)0),        _if_conditional266) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_129);
            __result191__ = (_Bool)1;
            fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result191__;
        }
        result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(fun_178->mResultType))));
        come_call_finalizer2(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_179->mStatic=(_Bool)0;
        param_types_180=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value310=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value309=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1336, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_181=(struct list$1sTypeph*)come_increment_ref_count((fun_178->mParamTypes)),it_184=list$1sTypeph_begin((o2_saved_181));        !list$1sTypeph_end((o2_saved_181));        it_184=list$1sTypeph_next((o2_saved_181))        ){
            it2_187=(struct sType*)come_increment_ref_count(((struct sType*)(right_value312=solve_generics(((struct sType*)(right_value311=sType_clone(it_184))),info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(param_types_180,(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_clone(it2_187)))));
            come_call_finalizer2(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,it2_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj114=result_type_179;
        result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value317=solve_generics(result_type_179,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_params_191=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value319=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value318=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1344, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        label_params_197=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value326=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value320=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "05function.c", 1346, "map$2charphCVALUEph"))))))));
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_198=0;
        for(        o2_saved_199=(params_130),it_200=list$1tuple2$2charphsNodephph_begin((o2_saved_199));        !list$1tuple2$2charphsNodephph_end((o2_saved_199));        it_200=list$1tuple2$2charphsNodephph_next((o2_saved_199))        ){
            multiple_assign_var7=it_200;
            label_201=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_202=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(_if_conditional277=!node_compile(node_202,info),            _if_conditional277) {
                __result202__ = (_Bool)0;
                label_201 = come_decrement_ref_count2(label_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_202) { node_202 = come_decrement_ref_count2(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result202__;
            }
            come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value327=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional278=fun_178->mVarArgs&&list$1sTypephp_operator_load_element(fun_178->mParamTypes,i_198)==((void*)0),            _if_conditional278) {
            }
            else {
                if(_if_conditional279=label_201!=((void*)0),                _if_conditional279) {
                    n_204=0;
                    for(                    o2_saved_205=(struct list$1charph*)come_increment_ref_count((fun_178->mParamNames)),it_208=list$1charph_begin((o2_saved_205));                    !list$1charph_end((o2_saved_205));                    it_208=list$1charph_next((o2_saved_205))                    ){
                        if(_if_conditional284=string_operator_equals(label_201,it_208),                        _if_conditional284) {
                            break;
                        }
                        n_204++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional285=n_204<list$1sTypeph_length(fun_178->mParamTypes),                    _if_conditional285) {
                        check_assign_type(((char*)(right_value330=xsprintf("\%s calling param(1) #\%s",((char*)(right_value328=string_to_string(fun_name_129))),((char*)(right_value329=int_to_string(n_204)))))),list$1sTypephp_operator_load_element(param_types_180,n_204),come_value_203->type,come_value_203,(_Bool)0,(_Bool)1,info);
                        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional286=n_204<list$1sTypeph_length(fun_178->mParamTypes)&&list$1sTypephp_operator_load_element(param_types_180,n_204)->mHeap&&come_value_203->type->mHeap,                    _if_conditional286) {
                        std_move(list$1sTypephp_operator_load_element(param_types_180,n_204),come_value_203->type,come_value_203,info);
                    }
                }
                else {
                    if(_if_conditional287=i_198<list$1sTypeph_length(fun_178->mParamTypes),                    _if_conditional287) {
                        check_assign_type(((char*)(right_value333=xsprintf("\%s calling param(2) #\%s",((char*)(right_value331=string_to_string(fun_name_129))),((char*)(right_value332=int_to_string(i_198)))))),list$1sTypephp_operator_load_element(param_types_180,i_198),come_value_203->type,come_value_203,(_Bool)0,(_Bool)1,info);
                        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional288=i_198<list$1sTypeph_length(fun_178->mParamTypes)&&list$1sTypephp_operator_load_element(param_types_180,i_198)->mHeap&&come_value_203->type->mHeap,                    _if_conditional288) {
                        std_move(list$1sTypephp_operator_load_element(param_types_180,i_198),come_value_203->type,come_value_203,info);
                    }
                }
            }
            if(_if_conditional289=label_201==((void*)0),            _if_conditional289) {
                list$1CVALUEph_push_back(come_params_191,(struct CVALUE*)come_increment_ref_count(come_value_203));
                i_198++;
            }
            else {
                map$2charphCVALUEph_insert(label_params_197,(char*)come_increment_ref_count(((char*)(right_value340=__builtin_string(label_201)))),(struct CVALUE*)come_increment_ref_count(come_value_203));
                right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            dec_stack_ptr(1,info);
            label_201 = come_decrement_ref_count2(label_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_202) { node_202 = come_decrement_ref_count2(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional337=list$1tuple2$2charphsNodephph_length(params_130)<list$1sTypeph_length(fun_178->mParamTypes),        _if_conditional337) {
            for(            ;            i_198<list$1sTypeph_length(fun_178->mParamTypes);            i_198++            ){
                default_param_258=(char*)come_increment_ref_count(((char*)(right_value341=string_clone(list$1charphp_operator_load_element(fun_178->mParamDefaultParametors,i_198)))));
                right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_259=list$1charphp_operator_load_element(fun_178->mParamNames,i_198);
                come_value_263=map$2charphCVALUEphp_operator_load_element(label_params_197,param_name_259);
                if(_if_conditional344=default_param_258&&string_operator_not_equals(default_param_258,""),                _if_conditional344) {
                    source_264=(struct buffer*)come_increment_ref_count(info->source);
                    p_265=info->p;
                    head_266=info->head;
                    sline_267=info->sline;
                    __dec_obj116=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value342=string_to_buffer(default_param_258))));
                    come_call_finalizer2(buffer_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=expression_v13(info))));
                    if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional345=!node_compile(node_268,info),                    _if_conditional345) {
                        __result240__ = (_Bool)0;
                        come_call_finalizer2(buffer_finalize,source_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(node_268) { node_268 = come_decrement_ref_count2(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_258 = come_decrement_ref_count2(default_param_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result240__;
                    }
                    __dec_obj117=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_264);
                    come_call_finalizer2(buffer_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    info->p=p_265;
                    info->head=head_266;
                    info->sline=sline_267;
                    come_value_269=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value344=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    check_assign_type(((char*)(right_value347=xsprintf("\%s calling param(3) #\%s",((char*)(right_value345=string_to_string(fun_name_129))),((char*)(right_value346=int_to_string(i_198)))))),list$1sTypephp_operator_load_element(param_types_180,i_198),come_value_269->type,come_value_269,(_Bool)0,(_Bool)1,info);
                    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional346=list$1sTypephp_operator_load_element(param_types_180,i_198)->mHeap&&come_value_269->type->mHeap,                    _if_conditional346) {
                        std_move(list$1sTypephp_operator_load_element(param_types_180,i_198),come_value_269->type,come_value_269,info);
                    }
                    list$1CVALUEph_push_back(come_params_191,(struct CVALUE*)come_increment_ref_count(come_value_269));
                    dec_stack_ptr(1,info);
                    come_call_finalizer2(buffer_finalize,source_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(node_268) { node_268 = come_decrement_ref_count2(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional347=come_value_263==((void*)0),                    _if_conditional347) {
                        err_msg(info,"require parametor(%s)",fun_178->mName);
                        __result241__ = (_Bool)0;
                        default_param_258 = come_decrement_ref_count2(default_param_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result241__;
                    }
                    else {
                        list$1CVALUEph_push_back(come_params_191,((void*)0));
                    }
                }
                default_param_258 = come_decrement_ref_count2(default_param_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(_if_conditional348=map$2charphCVALUEph_length(label_params_197)>0,        _if_conditional348) {
            for(            i_198=0;            i_198<list$1charph_length(fun_178->mParamNames);            i_198++            ){
                param_name_270=list$1charphp_operator_load_element(fun_178->mParamNames,i_198);
                come_value_271=map$2charphCVALUEphp_operator_load_element(label_params_197,param_name_270);
                if(come_value_271) {
                    check_assign_type(((char*)(right_value350=xsprintf("\%s calling param(4) \%s",((char*)(right_value348=string_to_string(fun_name_129))),((char*)(right_value349=int_to_string(i_198)))))),list$1sTypephp_operator_load_element(param_types_180,i_198),come_value_271->type,come_value_271,(_Bool)0,(_Bool)1,info);
                    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_replace(come_params_191,i_198,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value354=CVALUE_clone(come_value_271)))));
                    come_call_finalizer2(CVALUE_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
        }
        if(_if_conditional357=list$1sTypeph_length(fun_178->mParamTypes)!=list$1CVALUEph_length(come_params_191)&&!fun_178->mVarArgs&&string_operator_not_equals(fun_name_129,"__builtin_va_start")&&string_operator_not_equals(fun_name_129,"__builtin_va_end"),        _if_conditional357) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_129,list$1sTypeph_length(fun_178->mParamTypes),list$1tuple2$2charphsNodephph_length(params_130));
            __result248__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result248__;
        }
        buf_275=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value356=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value355=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1467, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_275,fun_name_129);
        buffer_append_str(buf_275,"(");
        j_276=0;
        for(        o2_saved_277=(struct list$1CVALUEph*)come_increment_ref_count((come_params_191)),it_278=list$1CVALUEph_begin((o2_saved_277));        !list$1CVALUEph_end((o2_saved_277));        it_278=list$1CVALUEph_next((o2_saved_277))        ){
            buffer_append_str(buf_275,it_278->c_value);
            if(_if_conditional358=j_276!=list$1CVALUEph_length(come_params_191)-1,            _if_conditional358) {
                buffer_append_str(buf_275,",");
            }
            j_276++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_275,")");
        come_value_279=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value357=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1484, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj121=come_value_279->c_value;
        come_value_279->c_value=(char*)come_increment_ref_count(((char*)(right_value358=buffer_to_string(buf_275))));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj122=come_value_279->type;
        come_value_279->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value359=sType_clone(result_type_179))));
        come_call_finalizer2(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_279->type->mStatic=(_Bool)0;
        come_value_279->var=((void*)0);
        if(fun_178->mResultType->mHeap) {
            __dec_obj123=come_value_279->c_value;
            come_value_279->c_value=(char*)come_increment_ref_count(((char*)(right_value360=append_object_to_right_values(come_value_279->c_value,(struct sType*)come_increment_ref_count(result_type_179),info))));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional360=string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free"),        _if_conditional360) {
            if(_if_conditional361=string_operator_not_equals(fun_name_129,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_129,"null_check")&&string_operator_not_equals(fun_name_129,"come_push_stackframe")&&string_operator_not_equals(fun_name_129,"come_pop_stackframe"),            _if_conditional361) {
                __dec_obj124=come_value_279->c_value;
                come_value_279->c_value=(char*)come_increment_ref_count(((char*)(right_value361=append_stackframe(come_value_279->c_value,come_value_279->type,info))));
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        add_come_last_code(info,"%s;\n",come_value_279->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_279));
        come_call_finalizer2(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result249__ = (_Bool)1;
    fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result249__;
    fun_name_129 = come_decrement_ref_count2(fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result165__ = __result_obj__ = self;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result165__;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_134;
_Bool _while_condtional12;
struct list_item$1CVALUEph* prev_it_135;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_134, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_135, 0, sizeof(struct list_item$1CVALUEph*));
                it_134=self->head;
                while(_while_condtional12=it_134!=((void*)0),                _while_condtional12) {
                    prev_it_135=it_134;
                    it_134=it_134->next;
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
            __result166__ = self->len;
            return __result166__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional233;
struct tuple2$2charphsNodeph* result_139;
struct tuple2$2charphsNodeph* __result168__;
_Bool _if_conditional234;
struct tuple2$2charphsNodeph* __result169__;
struct tuple2$2charphsNodeph* result_140;
struct tuple2$2charphsNodeph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_139, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_140, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional233=self==((void*)0),            _if_conditional233) {
                memset(&result_139,0,sizeof(struct tuple2$2charphsNodeph*));
                __result168__ = __result_obj__ = result_139;
                return __result168__;
            }
            self->it=self->head;
            if(self->it) {
                __result169__ = __result_obj__ = self->it->item;
                return __result169__;
            }
            memset(&result_140,0,sizeof(struct tuple2$2charphsNodeph*));
            __result170__ = __result_obj__ = result_140;
            return __result170__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
            __result171__ = self==((void*)0)||self->it==((void*)0);
            return __result171__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional235;
struct tuple2$2charphsNodeph* result_142;
struct tuple2$2charphsNodeph* __result172__;
_Bool _if_conditional236;
struct tuple2$2charphsNodeph* __result173__;
struct tuple2$2charphsNodeph* result_143;
struct tuple2$2charphsNodeph* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_142, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_143, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional235=self==((void*)0)||self->it==((void*)0),            _if_conditional235) {
                memset(&result_142,0,sizeof(struct tuple2$2charphsNodeph*));
                __result172__ = __result_obj__ = result_142;
                return __result172__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result173__ = __result_obj__ = self->it->item;
                return __result173__;
            }
            memset(&result_143,0,sizeof(struct tuple2$2charphsNodeph*));
            __result174__ = __result_obj__ = result_143;
            return __result174__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional240;
struct CVALUE* result_150;
struct CVALUE* __result176__;
_Bool _if_conditional241;
struct CVALUE* __result177__;
struct CVALUE* result_151;
struct CVALUE* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_150, 0, sizeof(struct CVALUE*));
memset(&result_151, 0, sizeof(struct CVALUE*));
            if(_if_conditional240=self==((void*)0),            _if_conditional240) {
                memset(&result_150,0,sizeof(struct CVALUE*));
                __result176__ = __result_obj__ = result_150;
                return __result176__;
            }
            self->it=self->head;
            if(self->it) {
                __result177__ = __result_obj__ = self->it->item;
                return __result177__;
            }
            memset(&result_151,0,sizeof(struct CVALUE*));
            __result178__ = __result_obj__ = result_151;
            return __result178__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
            __result179__ = self==((void*)0)||self->it==((void*)0);
            return __result179__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional242;
struct CVALUE* result_153;
struct CVALUE* __result180__;
_Bool _if_conditional243;
struct CVALUE* __result181__;
struct CVALUE* result_154;
struct CVALUE* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_153, 0, sizeof(struct CVALUE*));
memset(&result_154, 0, sizeof(struct CVALUE*));
            if(_if_conditional242=self==((void*)0)||self->it==((void*)0),            _if_conditional242) {
                memset(&result_153,0,sizeof(struct CVALUE*));
                __result180__ = __result_obj__ = result_153;
                return __result180__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result181__ = __result_obj__ = self->it->item;
                return __result181__;
            }
            memset(&result_154,0,sizeof(struct CVALUE*));
            __result182__ = __result_obj__ = result_154;
            return __result182__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
                __result183__ = self->len;
                return __result183__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_176;
unsigned int it_177;
_Bool _while_condtional15;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct sFun* __result187__;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct sFun* __result188__;
struct sFun* __result189__;
struct sFun* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_176, 0, sizeof(unsigned int));
memset(&it_177, 0, sizeof(unsigned int));
            hash_176=string_get_hash_key(((char*)key))%self->size;
            it_177=hash_176;
            while(_while_condtional15=(_Bool)1,            _while_condtional15) {
                if(_if_conditional262=self->item_existance[it_177],                _if_conditional262) {
                    if(_if_conditional263=string_equals(self->keys[it_177],key),                    _if_conditional263) {
                        __result187__ = __result_obj__ = self->items[it_177];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result187__;
                    }
                    it_177++;
                    if(_if_conditional264=it_177>=self->size,                    _if_conditional264) {
                        it_177=0;
                    }
                    else {
                        if(_if_conditional265=it_177==hash_176,                        _if_conditional265) {
                            __result188__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result188__;
                        }
                    }
                }
                else {
                    __result189__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result189__;
                }
            }
            __result190__ = __result_obj__ = default_value;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result190__;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional267;
struct sType* result_182;
struct sType* __result192__;
_Bool _if_conditional268;
struct sType* __result193__;
struct sType* result_183;
struct sType* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_182, 0, sizeof(struct sType*));
memset(&result_183, 0, sizeof(struct sType*));
            if(_if_conditional267=self==((void*)0),            _if_conditional267) {
                memset(&result_182,0,sizeof(struct sType*));
                __result192__ = __result_obj__ = result_182;
                return __result192__;
            }
            self->it=self->head;
            if(self->it) {
                __result193__ = __result_obj__ = self->it->item;
                return __result193__;
            }
            memset(&result_183,0,sizeof(struct sType*));
            __result194__ = __result_obj__ = result_183;
            return __result194__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
            __result195__ = self==((void*)0)||self->it==((void*)0);
            return __result195__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional269;
struct sType* result_185;
struct sType* __result196__;
_Bool _if_conditional270;
struct sType* __result197__;
struct sType* result_186;
struct sType* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_185, 0, sizeof(struct sType*));
memset(&result_186, 0, sizeof(struct sType*));
            if(_if_conditional269=self==((void*)0)||self->it==((void*)0),            _if_conditional269) {
                memset(&result_185,0,sizeof(struct sType*));
                __result196__ = __result_obj__ = result_185;
                return __result196__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result197__ = __result_obj__ = self->it->item;
                return __result197__;
            }
            memset(&result_186,0,sizeof(struct sType*));
            __result198__ = __result_obj__ = result_186;
            return __result198__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional271;
void* right_value313;
struct list_item$1sTypeph* litem_188;
struct sType* __dec_obj111;
_Bool _if_conditional272;
void* right_value314;
struct list_item$1sTypeph* litem_189;
struct sType* __dec_obj112;
void* right_value315;
struct list_item$1sTypeph* litem_190;
struct sType* __dec_obj113;
struct list$1sTypeph* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value313 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1sTypeph*));
right_value314 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1sTypeph*));
right_value315 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional271=self->len==0,                _if_conditional271) {
                    litem_188=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value313=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_188->prev=((void*)0);
                    litem_188->next=((void*)0);
                    __dec_obj111=litem_188->item;
                    litem_188->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_188;
                    self->head=litem_188;
                }
                else {
                    if(_if_conditional272=self->len==1,                    _if_conditional272) {
                        litem_189=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value314=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_189->prev=self->head;
                        litem_189->next=((void*)0);
                        __dec_obj112=litem_189->item;
                        litem_189->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_189;
                        self->head->next=litem_189;
                    }
                    else {
                        litem_190=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value315=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_190->prev=self->tail;
                        litem_190->next=((void*)0);
                        __dec_obj113=litem_190->item;
                        litem_190->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_190;
                        self->tail=litem_190;
                    }
                }
                self->len++;
                __result199__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result199__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
void* right_value321;
void* right_value322;
void* right_value323;
int i_192;
void* right_value324;
void* right_value325;
struct list$1charp* __dec_obj115;
struct map$2charphCVALUEph* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&i_192, 0, sizeof(int));
right_value324 = (void*)0;
right_value325 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value321=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
            right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value322=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1085, "CVALUE*%"))));
            come_call_finalizer2(CVALUE_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value323=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
            right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_192=0;            i_192<1024;            i_192++            ){
                self->item_existance[i_192]=(_Bool)0;
            }
            self->size=1024;
            self->len=0;
            __dec_obj115=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value325=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value324=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result201__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result201__;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result200__ = __result_obj__ = self;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result200__;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_193;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_194;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_193, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_194, 0, sizeof(struct list_item$1charp*));
                    it_193=self->head;
                    while(_while_condtional16=it_193!=((void*)0),                    _while_condtional16) {
                        prev_it_194=it_193;
                        it_193=it_193->next;
                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
int i_195;
_Bool _if_conditional273;
_Bool _if_conditional274;
int i_196;
_Bool _if_conditional275;
_Bool _if_conditional276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_195, 0, sizeof(int));
memset(&i_196, 0, sizeof(int));
                for(                i_195=0;                i_195<self->size;                i_195++                ){
                    if(_if_conditional273=self->item_existance[i_195],                    _if_conditional273) {
                        if(_if_conditional274=1,                        _if_conditional274) {
                            come_call_finalizer2(CVALUE_finalize,self->items[i_195], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_196=0;                i_196<self->size;                i_196++                ){
                    if(_if_conditional275=self->item_existance[i_196],                    _if_conditional275) {
                        if(_if_conditional276=1,                        _if_conditional276) {
                            self->keys[i_196] = come_decrement_ref_count2(self->keys[i_196], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional280;
char* result_206;
char* __result203__;
_Bool _if_conditional281;
char* __result204__;
char* result_207;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(char*));
memset(&result_207, 0, sizeof(char*));
                        if(_if_conditional280=self==((void*)0),                        _if_conditional280) {
                            memset(&result_206,0,sizeof(char*));
                            __result203__ = __result_obj__ = result_206;
                            return __result203__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result204__ = __result_obj__ = self->it->item;
                            return __result204__;
                        }
                        memset(&result_207,0,sizeof(char*));
                        __result205__ = __result_obj__ = result_207;
                        return __result205__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result206__ = self==((void*)0)||self->it==((void*)0);
                        return __result206__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional282;
char* result_209;
char* __result207__;
_Bool _if_conditional283;
char* __result208__;
char* result_210;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_209, 0, sizeof(char*));
memset(&result_210, 0, sizeof(char*));
                        if(_if_conditional282=self==((void*)0)||self->it==((void*)0),                        _if_conditional282) {
                            memset(&result_209,0,sizeof(char*));
                            __result207__ = __result_obj__ = result_209;
                            return __result207__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result208__ = __result_obj__ = self->it->item;
                            return __result208__;
                        }
                        memset(&result_210,0,sizeof(char*));
                        __result209__ = __result_obj__ = result_210;
                        return __result209__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional290;
unsigned int hash_228;
unsigned int it_229;
_Bool _while_condtional19;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool same_key_exist_246;
char* it2_249;
_Bool _if_conditional333;
_Bool _if_conditional334;
struct map$2charphCVALUEph* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_228, 0, sizeof(unsigned int));
memset(&it_229, 0, sizeof(unsigned int));
memset(&same_key_exist_246, 0, sizeof(_Bool));
memset(&it2_249, 0, sizeof(char*));
                    if(_if_conditional290=self->len*10>=self->size,                    _if_conditional290) {
                        map$2charphCVALUEph_rehash(self);
                    }
                    hash_228=string_get_hash_key(key)%self->size;
                    it_229=hash_228;
                    while(_while_condtional19=(_Bool)1,                    _while_condtional19) {
                        if(_if_conditional302=self->item_existance[it_229],                        _if_conditional302) {
                            if(_if_conditional303=string_equals(self->keys[it_229],key),                            _if_conditional303) {
                                if(_if_conditional304=1,                                _if_conditional304) {
                                    list$1charp_remove(self->key_list,self->keys[it_229]);
                                    self->keys[it_229] = come_decrement_ref_count2(self->keys[it_229], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    self->keys[it_229]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    list$1charp_remove(self->key_list,self->keys[it_229]);
                                    self->keys[it_229]=key;
                                }
                                if(_if_conditional324=1,                                _if_conditional324) {
                                    come_call_finalizer2(CVALUE_finalize,self->items[it_229], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->items[it_229]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_229]=item;
                                }
                                break;
                            }
                            it_229++;
                            if(_if_conditional325=it_229>=self->size,                            _if_conditional325) {
                                it_229=0;
                            }
                            else {
                                if(_if_conditional326=it_229==hash_228,                                _if_conditional326) {
                                    printf("unexpected error in map.insert\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            self->item_existance[it_229]=(_Bool)1;
                            if(_if_conditional327=1,                            _if_conditional327) {
                                self->keys[it_229]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                self->keys[it_229]=key;
                            }
                            if(_if_conditional328=1,                            _if_conditional328) {
                                self->items[it_229]=(struct CVALUE*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_229]=item;
                            }
                            self->len++;
                            break;
                        }
                    }
                    same_key_exist_246=(_Bool)0;
                    for(                    it2_249=list$1charp_begin(self->key_list);                    !list$1charp_end(self->key_list);                    it2_249=list$1charp_next(self->key_list)                    ){
                        if(_if_conditional333=string_equals(it2_249,key),                        _if_conditional333) {
                            puts("SAME KEY");
                            same_key_exist_246=(_Bool)1;
                        }
                    }
                    if(_if_conditional334=!same_key_exist_246,                    _if_conditional334) {
                        list$1charp_push_back(self->key_list,key);
                    }
                    __result233__ = __result_obj__ = self;
                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result233__;
                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
int size_211;
void* right_value334;
char** keys_212;
void* right_value335;
struct CVALUE** items_213;
void* right_value336;
_Bool* item_existance_214;
int len_215;
char* it_218;
struct CVALUE* default_value_221;
struct CVALUE* it2_224;
unsigned int hash_225;
int n_226;
_Bool _while_condtional18;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
struct CVALUE* default_value_227;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_211, 0, sizeof(int));
right_value334 = (void*)0;
memset(&keys_212, 0, sizeof(char**));
right_value335 = (void*)0;
memset(&items_213, 0, sizeof(struct CVALUE**));
right_value336 = (void*)0;
memset(&item_existance_214, 0, sizeof(_Bool*));
memset(&len_215, 0, sizeof(int));
memset(&it_218, 0, sizeof(char*));
memset(&default_value_221, 0, sizeof(struct CVALUE*));
memset(&it2_224, 0, sizeof(struct CVALUE*));
memset(&hash_225, 0, sizeof(unsigned int));
memset(&n_226, 0, sizeof(int));
memset(&default_value_227, 0, sizeof(struct CVALUE*));
                            size_211=self->size*10;
                            keys_212=(char**)come_increment_ref_count(((char**)(right_value334=(char**)come_calloc(1, sizeof(char*)*(1*(size_211)), "./comelang2.h", 1335, "char*%"))));
                            right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            items_213=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value335=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_211)), "./comelang2.h", 1336, "CVALUE*%"))));
                            come_call_finalizer2(CVALUE_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            item_existance_214=(_Bool*)come_increment_ref_count(((_Bool*)(right_value336=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_211)), "./comelang2.h", 1337, "bool"))));
                            right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            len_215=0;
                            for(                            it_218=map$2charphCVALUEph_begin(self);                            !map$2charphCVALUEph_end(self);                            it_218=map$2charphCVALUEph_next(self)                            ){
                                memset(&default_value_221,0,sizeof(struct CVALUE*));
                                it2_224=map$2charphCVALUEph_at(self,it_218,default_value_221);
                                hash_225=string_get_hash_key(it_218)%size_211;
                                n_226=hash_225;
                                while(_while_condtional18=(_Bool)1,                                _while_condtional18) {
                                    if(_if_conditional299=item_existance_214[n_226],                                    _if_conditional299) {
                                        n_226++;
                                        if(_if_conditional300=n_226>=size_211,                                        _if_conditional300) {
                                            n_226=0;
                                        }
                                        else {
                                            if(_if_conditional301=n_226==hash_225,                                            _if_conditional301) {
                                                printf("unexpected error in map.rehash(1)\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        item_existance_214[n_226]=(_Bool)1;
                                        keys_212[n_226]=it_218;
                                        items_213[n_226]=map$2charphCVALUEph_at(self,it_218,default_value_227);
                                        len_215++;
                                        break;
                                    }
                                }
                            }
                            come_free((char*)self->items);
                            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_free((char*)self->keys);
                            self->keys=keys_212;
                            self->items=items_213;
                            self->item_existance=item_existance_214;
                            self->size=size_211;
                            self->len=len_215;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional291;
char* result_216;
char* __result210__;
_Bool _if_conditional292;
char* __result211__;
char* result_217;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_216, 0, sizeof(char*));
memset(&result_217, 0, sizeof(char*));
                                if(_if_conditional291=self==((void*)0),                                _if_conditional291) {
                                    memset(&result_216,0,sizeof(char*));
                                    __result210__ = __result_obj__ = result_216;
                                    return __result210__;
                                }
                                self->key_list->it=self->key_list->head;
                                if(self->key_list->it) {
                                    __result211__ = __result_obj__ = self->key_list->it->item;
                                    return __result211__;
                                }
                                memset(&result_217,0,sizeof(char*));
                                __result212__ = __result_obj__ = result_217;
                                return __result212__;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __result213__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result213__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                return __result213__;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional293;
char* result_219;
char* __result214__;
_Bool _if_conditional294;
char* __result215__;
char* result_220;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(char*));
memset(&result_220, 0, sizeof(char*));
                                if(_if_conditional293=self==((void*)0)||self->key_list->it==((void*)0),                                _if_conditional293) {
                                    memset(&result_219,0,sizeof(char*));
                                    __result214__ = __result_obj__ = result_219;
                                    return __result214__;
                                }
                                self->key_list->it=self->key_list->it->next;
                                if(self->key_list->it) {
                                    __result215__ = __result_obj__ = self->key_list->it->item;
                                    return __result215__;
                                }
                                memset(&result_220,0,sizeof(char*));
                                __result216__ = __result_obj__ = result_220;
                                return __result216__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
unsigned int hash_222;
unsigned int it_223;
_Bool _while_condtional17;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct CVALUE* __result217__;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct CVALUE* __result218__;
struct CVALUE* __result219__;
struct CVALUE* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_222, 0, sizeof(unsigned int));
memset(&it_223, 0, sizeof(unsigned int));
                                    hash_222=string_get_hash_key(((char*)key))%self->size;
                                    it_223=hash_222;
                                    while(_while_condtional17=(_Bool)1,                                    _while_condtional17) {
                                        if(_if_conditional295=self->item_existance[it_223],                                        _if_conditional295) {
                                            if(_if_conditional296=string_equals(self->keys[it_223],key),                                            _if_conditional296) {
                                                __result217__ = __result_obj__ = self->items[it_223];
                                                come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result217__;
                                            }
                                            it_223++;
                                            if(_if_conditional297=it_223>=self->size,                                            _if_conditional297) {
                                                it_223=0;
                                            }
                                            else {
                                                if(_if_conditional298=it_223==hash_222,                                                _if_conditional298) {
                                                    __result218__ = __result_obj__ = default_value;
                                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result218__;
                                                }
                                            }
                                        }
                                        else {
                                            __result219__ = __result_obj__ = default_value;
                                            come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result219__;
                                        }
                                    }
                                    __result220__ = __result_obj__ = default_value;
                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result220__;
                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_230;
struct list_item$1charp* it_231;
_Bool _while_condtional20;
_Bool _if_conditional305;
struct list$1charp* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_230, 0, sizeof(int));
memset(&it_231, 0, sizeof(struct list_item$1charp*));
                                        it2_230=0;
                                        it_231=self->head;
                                        while(_while_condtional20=it_231!=((void*)0),                                        _while_condtional20) {
                                            if(_if_conditional305=string_equals(it_231->item,item),                                            _if_conditional305) {
                                                list$1charp_delete(self,it2_230,it2_230+1);
                                                break;
                                            }
                                            it2_230++;
                                            it_231=it_231->next;
                                        }
                                        __result224__ = __result_obj__ = self;
                                        return __result224__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
int tmp_232;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct list$1charp* __result221__;
_Bool _if_conditional312;
_Bool _if_conditional313;
struct list_item$1charp* it_235;
int i_236;
_Bool _while_condtional22;
_Bool _if_conditional314;
struct list_item$1charp* prev_it_237;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct list_item$1charp* it_238;
int i_239;
_Bool _while_condtional23;
_Bool _if_conditional317;
_Bool _if_conditional318;
struct list_item$1charp* prev_it_240;
struct list_item$1charp* it_241;
struct list_item$1charp* head_prev_it_242;
struct list_item$1charp* tail_it_243;
int i_244;
_Bool _while_condtional24;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
struct list_item$1charp* prev_it_245;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct list$1charp* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_232, 0, sizeof(int));
memset(&it_235, 0, sizeof(struct list_item$1charp*));
memset(&i_236, 0, sizeof(int));
memset(&prev_it_237, 0, sizeof(struct list_item$1charp*));
memset(&it_238, 0, sizeof(struct list_item$1charp*));
memset(&i_239, 0, sizeof(int));
memset(&prev_it_240, 0, sizeof(struct list_item$1charp*));
memset(&it_241, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_242, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_243, 0, sizeof(struct list_item$1charp*));
memset(&i_244, 0, sizeof(int));
memset(&prev_it_245, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional306=head<0,                                                    _if_conditional306) {
                                                        head+=self->len;
                                                    }
                                                    if(_if_conditional307=tail<0,                                                    _if_conditional307) {
                                                        tail+=self->len+1;
                                                    }
                                                    if(_if_conditional308=head>tail,                                                    _if_conditional308) {
                                                        tmp_232=tail;
                                                        tail=head;
                                                        head=tmp_232;
                                                    }
                                                    if(_if_conditional309=head<0,                                                    _if_conditional309) {
                                                        head=0;
                                                    }
                                                    if(_if_conditional310=tail>self->len,                                                    _if_conditional310) {
                                                        tail=self->len;
                                                    }
                                                    if(_if_conditional311=head==tail,                                                    _if_conditional311) {
                                                        __result221__ = __result_obj__ = self;
                                                        return __result221__;
                                                    }
                                                    if(_if_conditional312=head==0&&tail==self->len,                                                    _if_conditional312) {
                                                        list$1charp_reset(self);
                                                    }
                                                    else {
                                                        if(_if_conditional313=head==0,                                                        _if_conditional313) {
                                                            it_235=self->head;
                                                            i_236=0;
                                                            while(_while_condtional22=it_235!=((void*)0),                                                            _while_condtional22) {
                                                                if(_if_conditional314=i_236<tail,                                                                _if_conditional314) {
                                                                    prev_it_237=it_235;
                                                                    it_235=it_235->next;
                                                                    i_236++;
                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    self->len--;
                                                                }
                                                                else {
                                                                    if(_if_conditional315=i_236==tail,                                                                    _if_conditional315) {
                                                                        self->head=it_235;
                                                                        self->head->prev=((void*)0);
                                                                        break;
                                                                    }
                                                                    else {
                                                                        it_235=it_235->next;
                                                                        i_236++;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional316=tail==self->len,                                                            _if_conditional316) {
                                                                it_238=self->head;
                                                                i_239=0;
                                                                while(_while_condtional23=it_238!=((void*)0),                                                                _while_condtional23) {
                                                                    if(_if_conditional317=i_239==head,                                                                    _if_conditional317) {
                                                                        self->tail=it_238->prev;
                                                                        self->tail->next=((void*)0);
                                                                    }
                                                                    if(_if_conditional318=i_239>=head,                                                                    _if_conditional318) {
                                                                        prev_it_240=it_238;
                                                                        it_238=it_238->next;
                                                                        i_239++;
                                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->len--;
                                                                    }
                                                                    else {
                                                                        it_238=it_238->next;
                                                                        i_239++;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                it_241=self->head;
                                                                head_prev_it_242=((void*)0);
                                                                tail_it_243=((void*)0);
                                                                i_244=0;
                                                                while(_while_condtional24=it_241!=((void*)0),                                                                _while_condtional24) {
                                                                    if(_if_conditional319=i_244==head,                                                                    _if_conditional319) {
                                                                        head_prev_it_242=it_241->prev;
                                                                    }
                                                                    if(_if_conditional320=i_244==tail,                                                                    _if_conditional320) {
                                                                        tail_it_243=it_241;
                                                                    }
                                                                    if(_if_conditional321=i_244>=head&&i_244<tail,                                                                    _if_conditional321) {
                                                                        prev_it_245=it_241;
                                                                        it_241=it_241->next;
                                                                        i_244++;
                                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->len--;
                                                                    }
                                                                    else {
                                                                        it_241=it_241->next;
                                                                        i_244++;
                                                                    }
                                                                }
                                                                if(_if_conditional322=head_prev_it_242!=((void*)0),                                                                _if_conditional322) {
                                                                    head_prev_it_242->next=tail_it_243;
                                                                }
                                                                if(_if_conditional323=tail_it_243!=((void*)0),                                                                _if_conditional323) {
                                                                    tail_it_243->prev=head_prev_it_242;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    __result223__ = __result_obj__ = self;
                                                    return __result223__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_233;
_Bool _while_condtional21;
struct list_item$1charp* prev_it_234;
struct list$1charp* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_233, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_234, 0, sizeof(struct list_item$1charp*));
                                                            it_233=self->head;
                                                            while(_while_condtional21=it_233!=((void*)0),                                                            _while_condtional21) {
                                                                prev_it_234=it_233;
                                                                it_233=it_233->next;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            self->head=((void*)0);
                                                            self->tail=((void*)0);
                                                            self->len=0;
                                                            __result222__ = __result_obj__ = self;
                                                            return __result222__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional329;
char* result_247;
char* __result225__;
_Bool _if_conditional330;
char* __result226__;
char* result_248;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_247, 0, sizeof(char*));
memset(&result_248, 0, sizeof(char*));
                        if(_if_conditional329=self==((void*)0),                        _if_conditional329) {
                            memset(&result_247,0,sizeof(char*));
                            __result225__ = __result_obj__ = result_247;
                            return __result225__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result226__ = __result_obj__ = self->it->item;
                            return __result226__;
                        }
                        memset(&result_248,0,sizeof(char*));
                        __result227__ = __result_obj__ = result_248;
                        return __result227__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result228__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result228__ = self==((void*)0)||self->it==((void*)0);
                        return __result228__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional331;
char* result_250;
char* __result229__;
_Bool _if_conditional332;
char* __result230__;
char* result_251;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_250, 0, sizeof(char*));
memset(&result_251, 0, sizeof(char*));
                        if(_if_conditional331=self==((void*)0)||self->it==((void*)0),                        _if_conditional331) {
                            memset(&result_250,0,sizeof(char*));
                            __result229__ = __result_obj__ = result_250;
                            return __result229__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result230__ = __result_obj__ = self->it->item;
                            return __result230__;
                        }
                        memset(&result_251,0,sizeof(char*));
                        __result231__ = __result_obj__ = result_251;
                        return __result231__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional335;
void* right_value337;
struct list_item$1charp* litem_252;
_Bool _if_conditional336;
void* right_value338;
struct list_item$1charp* litem_253;
void* right_value339;
struct list_item$1charp* litem_254;
struct list$1charp* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value337 = (void*)0;
memset(&litem_252, 0, sizeof(struct list_item$1charp*));
right_value338 = (void*)0;
memset(&litem_253, 0, sizeof(struct list_item$1charp*));
right_value339 = (void*)0;
memset(&litem_254, 0, sizeof(struct list_item$1charp*));
                            if(_if_conditional335=self->len==0,                            _if_conditional335) {
                                litem_252=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value337=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                                come_call_finalizer2(list_item$1charpp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_252->prev=((void*)0);
                                litem_252->next=((void*)0);
                                litem_252->item=item;
                                self->tail=litem_252;
                                self->head=litem_252;
                            }
                            else {
                                if(_if_conditional336=self->len==1,                                _if_conditional336) {
                                    litem_253=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value338=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                                    come_call_finalizer2(list_item$1charpp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_253->prev=self->head;
                                    litem_253->next=((void*)0);
                                    litem_253->item=item;
                                    self->tail=litem_253;
                                    self->head->next=litem_253;
                                }
                                else {
                                    litem_254=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value339=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                                    come_call_finalizer2(list_item$1charpp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_254->prev=self->tail;
                                    litem_254->next=((void*)0);
                                    litem_254->item=item;
                                    self->tail->next=litem_254;
                                    self->tail=litem_254;
                                }
                            }
                            self->len++;
                            __result232__ = __result_obj__ = self;
                            return __result232__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional338;
struct list_item$1charph* it_255;
int i_256;
_Bool _while_condtional25;
_Bool _if_conditional339;
char* __result234__;
char* default_value_257;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_255, 0, sizeof(struct list_item$1charph*));
memset(&i_256, 0, sizeof(int));
memset(&default_value_257, 0, sizeof(char*));
                    if(_if_conditional338=position<0,                    _if_conditional338) {
                        position+=self->len;
                    }
                    it_255=self->head;
                    i_256=0;
                    while(_while_condtional25=it_255!=((void*)0),                    _while_condtional25) {
                        if(_if_conditional339=position==i_256,                        _if_conditional339) {
                            __result234__ = __result_obj__ = it_255->item;
                            return __result234__;
                        }
                        it_255=it_255->next;
                        i_256++;
                    }
                    memset(&default_value_257,0,sizeof(char*));
                    __result235__ = __result_obj__ = default_value_257;
                    default_value_257 = come_decrement_ref_count2(default_value_257, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result235__;
                    default_value_257 = come_decrement_ref_count2(default_value_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
struct CVALUE* default_value_260;
unsigned int hash_261;
unsigned int it_262;
_Bool _while_condtional26;
_Bool _if_conditional340;
_Bool _if_conditional341;
struct CVALUE* __result236__;
_Bool _if_conditional342;
_Bool _if_conditional343;
struct CVALUE* __result237__;
struct CVALUE* __result238__;
struct CVALUE* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_260, 0, sizeof(struct CVALUE*));
memset(&hash_261, 0, sizeof(unsigned int));
memset(&it_262, 0, sizeof(unsigned int));
                    memset(&default_value_260,0,sizeof(struct CVALUE*));
                    hash_261=string_get_hash_key(((char*)key))%self->size;
                    it_262=hash_261;
                    while(_while_condtional26=(_Bool)1,                    _while_condtional26) {
                        if(_if_conditional340=self->item_existance[it_262],                        _if_conditional340) {
                            if(_if_conditional341=string_equals(self->keys[it_262],key),                            _if_conditional341) {
                                __result236__ = __result_obj__ = self->items[it_262];
                                come_call_finalizer2(CVALUE_finalize,default_value_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result236__;
                            }
                            it_262++;
                            if(_if_conditional342=it_262>=self->size,                            _if_conditional342) {
                                it_262=0;
                            }
                            else {
                                if(_if_conditional343=it_262==hash_261,                                _if_conditional343) {
                                    __result237__ = __result_obj__ = default_value_260;
                                    come_call_finalizer2(CVALUE_finalize,default_value_260, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result237__;
                                }
                            }
                        }
                        else {
                            __result238__ = __result_obj__ = default_value_260;
                            come_call_finalizer2(CVALUE_finalize,default_value_260, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result238__;
                        }
                    }
                    __result239__ = __result_obj__ = default_value_260;
                    come_call_finalizer2(CVALUE_finalize,default_value_260, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result239__;
                    come_call_finalizer2(CVALUE_finalize,default_value_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
int __result242__;
memset(&__result_obj__, 0, sizeof(void*));
            __result242__ = self->len;
            return __result242__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result243__;
memset(&__result_obj__, 0, sizeof(void*));
                __result243__ = self->len;
                return __result243__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional350;
_Bool _if_conditional351;
struct list$1CVALUEph* __result244__;
struct list_item$1CVALUEph* it_272;
int i_273;
_Bool _while_condtional27;
_Bool _if_conditional352;
struct CVALUE* __dec_obj118;
struct list$1CVALUEph* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_272, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_273, 0, sizeof(int));
                        if(_if_conditional350=position<0,                        _if_conditional350) {
                            position+=self->len;
                        }
                        if(_if_conditional351=position>=self->len,                        _if_conditional351) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result244__ = __result_obj__ = self;
                            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result244__;
                        }
                        it_272=self->head;
                        i_273=0;
                        while(_while_condtional27=it_272!=((void*)0),                        _while_condtional27) {
                            if(_if_conditional352=position==i_273,                            _if_conditional352) {
                                __dec_obj118=it_272->item;
                                it_272->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer2(CVALUE_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_272=it_272->next;
                            i_273++;
                        }
                        __result245__ = __result_obj__ = self;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result245__;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional353;
struct CVALUE* __result246__;
void* right_value351;
struct CVALUE* result_274;
_Bool _if_conditional354;
void* right_value352;
char* __dec_obj119;
_Bool _if_conditional355;
void* right_value353;
struct sType* __dec_obj120;
_Bool _if_conditional356;
struct CVALUE* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value351 = (void*)0;
memset(&result_274, 0, sizeof(struct CVALUE*));
right_value352 = (void*)0;
right_value353 = (void*)0;
                        if(_if_conditional353=self==(void*)0,                        _if_conditional353) {
                            __result246__ = __result_obj__ = (void*)0;
                            return __result246__;
                        }
                        result_274=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value351=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional354=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional354) {
                            __dec_obj119=result_274->c_value;
                            result_274->c_value=(char*)come_increment_ref_count(((char*)(right_value352=string_clone(self->c_value))));
                            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional355=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional355) {
                            __dec_obj120=result_274->type;
                            result_274->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value353=sType_clone(self->type))));
                            come_call_finalizer2(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional356=self!=((void*)0),                        _if_conditional356) {
                            result_274->var=self->var;
                        }
                        __result247__ = __result_obj__ = result_274;
                        come_call_finalizer2(CVALUE_finalize,result_274, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result247__;
                        come_call_finalizer2(CVALUE_finalize,result_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value362;
struct sType* __dec_obj125;
void* right_value363;
struct sNode* __dec_obj126;
void* right_value364;
char* __dec_obj127;
struct sCastNode* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
    __dec_obj125=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value362=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj126=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=sNode_clone(left))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj127=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value364=__builtin_string(info->sname))));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result250__ = __result_obj__ = self;
    come_call_finalizer2(sCastNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result250__;
    come_call_finalizer2(sCastNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCastNode_sline(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
int __result251__;
memset(&__result_obj__, 0, sizeof(void*));
    __result251__ = self->sline;
    return __result251__;
}

char* sCastNode_sname(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value365;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value365 = (void*)0;
    __result252__ = __result_obj__ = ((char*)(right_value365=__builtin_string(self->sname)));
    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

_Bool sCastNode_terminated(){
void* __result_obj__;
_Bool __result253__;
memset(&__result_obj__, 0, sizeof(void*));
    __result253__ = (_Bool)0;
    return __result253__;
}

char* sCastNode_kind(){
void* __result_obj__;
void* right_value366;
char* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value366 = (void*)0;
    __result254__ = __result_obj__ = ((char*)(right_value366=__builtin_string("sCastNode")));
    right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result254__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_280;
struct sNode* left_281;
_Bool _if_conditional365;
_Bool __result255__;
void* right_value367;
struct CVALUE* left_value_282;
void* right_value368;
void* right_value369;
struct sType* type2_283;
void* right_value370;
struct CVALUE* come_value_284;
void* right_value371;
void* right_value372;
char* __dec_obj128;
void* right_value373;
struct sType* __dec_obj129;
_Bool __result256__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_280, 0, sizeof(struct sType*));
memset(&left_281, 0, sizeof(struct sNode*));
right_value367 = (void*)0;
memset(&left_value_282, 0, sizeof(struct CVALUE*));
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&type2_283, 0, sizeof(struct sType*));
right_value370 = (void*)0;
memset(&come_value_284, 0, sizeof(struct CVALUE*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
    type_280=self->mType;
    left_281=self->mLeft;
    if(_if_conditional365=!node_compile(left_281,info),    _if_conditional365) {
        __result255__ = (_Bool)0;
        return __result255__;
    }
    left_value_282=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value367=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type2_283=(struct sType*)come_increment_ref_count(((struct sType*)(right_value369=solve_generics(((struct sType*)(right_value368=sType_clone(type_280))),info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_284=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value370=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1560, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    cast_type(type2_283,left_value_282->type,left_value_282,info);
    __dec_obj128=come_value_284->c_value;
    come_value_284->c_value=(char*)come_increment_ref_count(((char*)(right_value372=xsprintf("(%s)%s",((char*)(right_value371=make_type_name_string(type2_283,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_282->c_value))));
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj129=come_value_284->type;
    come_value_284->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value373=sType_clone(type2_283))));
    come_call_finalizer2(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_284->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_284->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_284));
    __result256__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result256__;
    come_call_finalizer2(CVALUE_finalize,left_value_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value374;
struct sNode* __dec_obj130;
void* right_value375;
char* __dec_obj131;
struct sParenNode* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value374 = (void*)0;
right_value375 = (void*)0;
    __dec_obj130=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=sNode_clone(left))));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj131=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value375=__builtin_string(info->sname))));
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result257__ = __result_obj__ = self;
    come_call_finalizer2(sParenNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result257__;
    come_call_finalizer2(sParenNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParenNode_sline(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
int __result258__;
memset(&__result_obj__, 0, sizeof(void*));
    __result258__ = self->sline;
    return __result258__;
}

char* sParenNode_sname(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value376;
char* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
right_value376 = (void*)0;
    __result259__ = __result_obj__ = ((char*)(right_value376=__builtin_string(self->sname)));
    right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result259__;
}

_Bool sParenNode_terminated(){
void* __result_obj__;
_Bool __result260__;
memset(&__result_obj__, 0, sizeof(void*));
    __result260__ = (_Bool)0;
    return __result260__;
}

char* sParenNode_kind(){
void* __result_obj__;
void* right_value377;
char* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value377 = (void*)0;
    __result261__ = __result_obj__ = ((char*)(right_value377=__builtin_string("sParenNode")));
    right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result261__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_285;
_Bool _if_conditional368;
_Bool __result262__;
void* right_value378;
struct CVALUE* left_value_286;
void* right_value379;
struct CVALUE* come_value_287;
void* right_value380;
char* __dec_obj132;
void* right_value381;
struct sType* __dec_obj133;
_Bool __result263__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_285, 0, sizeof(struct sNode*));
right_value378 = (void*)0;
memset(&left_value_286, 0, sizeof(struct CVALUE*));
right_value379 = (void*)0;
memset(&come_value_287, 0, sizeof(struct CVALUE*));
right_value380 = (void*)0;
right_value381 = (void*)0;
    left_285=self->mLeft;
    if(_if_conditional368=!node_compile(left_285,info),    _if_conditional368) {
        __result262__ = (_Bool)0;
        return __result262__;
    }
    left_value_286=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value378=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_287=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value379=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1621, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj132=come_value_287->c_value;
    come_value_287->c_value=(char*)come_increment_ref_count(((char*)(right_value380=xsprintf("(%s)",left_value_286->c_value))));
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj133=come_value_287->type;
    come_value_287->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value381=sType_clone(left_value_286->type))));
    come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_287->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_287->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_287));
    __result263__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result263__;
    come_call_finalizer2(CVALUE_finalize,left_value_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value382;
void* right_value383;
struct list$1tuple2$2charphsNodephph* params_288;
_Bool _while_condtional28;
_Bool _if_conditional369;
char* p_289;
int sline_290;
_Bool err_flag_291;
void* right_value384;
char* label_292;
_Bool _if_conditional370;
void* right_value385;
char* __dec_obj134;
_Bool _if_conditional371;
char* __dec_obj135;
_Bool no_comma_293;
void* right_value386;
struct sNode* node_294;
void* right_value387;
struct sNode* __dec_obj136;
void* right_value391;
void* right_value392;
_Bool _if_conditional374;
_Bool _if_conditional375;
void* right_value393;
void* right_value394;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value399;
struct sNode* node_299;
struct sNode* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
right_value383 = (void*)0;
memset(&params_288, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_289, 0, sizeof(char*));
memset(&sline_290, 0, sizeof(int));
memset(&err_flag_291, 0, sizeof(_Bool));
right_value384 = (void*)0;
memset(&label_292, 0, sizeof(char*));
right_value385 = (void*)0;
memset(&no_comma_293, 0, sizeof(_Bool));
right_value386 = (void*)0;
memset(&node_294, 0, sizeof(struct sNode*));
right_value387 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value399 = (void*)0;
memset(&node_299, 0, sizeof(struct sNode*));
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_288=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value383=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value382=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05function.c", 1640, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        if(_if_conditional369=*info->p==41,        _if_conditional369) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_289=info->p;
        sline_290=info->sline;
        err_flag_291=(_Bool)0;
        label_292=(char*)come_increment_ref_count(((char*)(right_value384=__builtin_string(""))));
        right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional370=xisalpha(*info->p)||*info->p==95,        _if_conditional370) {
            __dec_obj134=label_292;
            label_292=(char*)come_increment_ref_count(((char*)(right_value385=parse_word(info))));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            err_flag_291=(_Bool)1;
        }
        if(_if_conditional371=err_flag_291==(_Bool)1&&*info->p==58,        _if_conditional371) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj135=label_292;
            label_292=((void*)0);
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_289;
            info->sline=sline_290;
        }
        no_comma_293=info->no_comma;
        info->no_comma=(_Bool)1;
        node_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=expression_v13(info))));
        if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj136=node_294;
        node_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_294),info))));
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_293;
        list$1tuple2$2charphsNodephph_push_back(params_288,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value392=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value391=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05function.c", 1679, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_292),(struct sNode*)come_increment_ref_count(node_294))))));
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional374=*info->p==44,        _if_conditional374) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional375=*info->p==41,            _if_conditional375) {
                info->p++;
                skip_spaces_and_lf(info);
                label_292 = come_decrement_ref_count2(label_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_292 = come_decrement_ref_count2(label_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    parse_sharp_v5(info);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1697, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value394=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value393=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05function.c", 1697, "sFunCallNode")))),fun_name,params_288,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sFunCallNode_sline;
    _inf_value1->sname=(void*)sFunCallNode_sname;
    _inf_value1->terminated=(void*)sFunCallNode_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=_inf_value1)));
    come_call_finalizer2(sFunCallNode_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunCallNode_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result268__ = __result_obj__ = node_299;
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result268__;
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional372;
void* right_value388;
struct list_item$1tuple2$2charphsNodephph* litem_295;
struct tuple2$2charphsNodeph* __dec_obj137;
_Bool _if_conditional373;
void* right_value389;
struct list_item$1tuple2$2charphsNodephph* litem_296;
struct tuple2$2charphsNodeph* __dec_obj138;
void* right_value390;
struct list_item$1tuple2$2charphsNodephph* litem_297;
struct tuple2$2charphsNodeph* __dec_obj139;
struct list$1tuple2$2charphsNodephph* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
right_value388 = (void*)0;
memset(&litem_295, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value389 = (void*)0;
memset(&litem_296, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value390 = (void*)0;
memset(&litem_297, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            if(_if_conditional372=self->len==0,            _if_conditional372) {
                litem_295=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value388=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_295->prev=((void*)0);
                litem_295->next=((void*)0);
                __dec_obj137=litem_295->item;
                litem_295->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_295;
                self->head=litem_295;
            }
            else {
                if(_if_conditional373=self->len==1,                _if_conditional373) {
                    litem_296=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value389=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_296->prev=self->head;
                    litem_296->next=((void*)0);
                    __dec_obj138=litem_296->item;
                    litem_296->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_296;
                    self->head->next=litem_296;
                }
                else {
                    litem_297=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value390=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_297->prev=self->tail;
                    litem_297->next=((void*)0);
                    __dec_obj139=litem_297->item;
                    litem_297->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_297;
                    self->tail=litem_297;
                }
            }
            self->len++;
            __result264__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result264__;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj140;
struct sNode* __dec_obj141;
struct tuple2$2charphsNodeph* __result265__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj140=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj141=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
            __result265__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result265__;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional376=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional376) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional377=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional377) {
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional378) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional379;
struct sFunCallNode* __result266__;
void* right_value395;
struct sFunCallNode* result_298;
_Bool _if_conditional380;
void* right_value396;
char* __dec_obj142;
_Bool _if_conditional381;
void* right_value397;
struct list$1tuple2$2charphsNodephph* __dec_obj143;
_Bool _if_conditional382;
_Bool _if_conditional383;
void* right_value398;
char* __dec_obj144;
struct sFunCallNode* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
right_value395 = (void*)0;
memset(&result_298, 0, sizeof(struct sFunCallNode*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
        if(_if_conditional379=self==(void*)0,        _if_conditional379) {
            __result266__ = __result_obj__ = (void*)0;
            return __result266__;
        }
        result_298=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value395=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"))));
        come_call_finalizer2(sFunCallNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional380=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional380) {
            __dec_obj142=result_298->fun_name;
            result_298->fun_name=(char*)come_increment_ref_count(((char*)(right_value396=string_clone(self->fun_name))));
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional381=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional381) {
            __dec_obj143=result_298->params;
            result_298->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value397=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional382=self!=((void*)0),        _if_conditional382) {
            result_298->sline=self->sline;
        }
        if(_if_conditional383=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional383) {
            __dec_obj144=result_298->sname;
            result_298->sname=(char*)come_increment_ref_count(((char*)(right_value398=string_clone(self->sname))));
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result267__ = __result_obj__ = result_298;
        come_call_finalizer2(sFunCallNode_finalize,result_298, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result267__;
        come_call_finalizer2(sFunCallNode_finalize,result_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
    __result269__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result269__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj145;
void* right_value400;
char* __dec_obj146;
struct sLogicalDenial* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
right_value400 = (void*)0;
    __dec_obj145=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj146=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value400=__builtin_string(info->sname))));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result270__ = __result_obj__ = self;
    come_call_finalizer2(sLogicalDenial_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result270__;
    come_call_finalizer2(sLogicalDenial_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLogicalDenial_terminated(){
void* __result_obj__;
_Bool __result271__;
memset(&__result_obj__, 0, sizeof(void*));
    __result271__ = (_Bool)0;
    return __result271__;
}

char* sLogicalDenial_kind(){
void* __result_obj__;
void* right_value401;
char* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
right_value401 = (void*)0;
    __result272__ = __result_obj__ = ((char*)(right_value401=__builtin_string("sLogicalDenial")));
    right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result272__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional386;
_Bool __result273__;
void* right_value402;
struct CVALUE* come_value_300;
void* right_value403;
struct CVALUE* come_value2_301;
void* right_value404;
char* __dec_obj147;
void* right_value405;
struct sType* __dec_obj148;
_Bool __result274__;
memset(&__result_obj__, 0, sizeof(void*));
right_value402 = (void*)0;
memset(&come_value_300, 0, sizeof(struct CVALUE*));
right_value403 = (void*)0;
memset(&come_value2_301, 0, sizeof(struct CVALUE*));
right_value404 = (void*)0;
right_value405 = (void*)0;
    if(_if_conditional386=!node_compile(self->value,info),    _if_conditional386) {
        __result273__ = (_Bool)0;
        return __result273__;
    }
    come_value_300=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value402=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_301=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value403=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1750, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj147=come_value2_301->c_value;
    come_value2_301->c_value=(char*)come_increment_ref_count(((char*)(right_value404=xsprintf("!%s",come_value_300->c_value))));
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj148=come_value2_301->type;
    come_value2_301->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value405=sType_clone(come_value_300->type))));
    come_call_finalizer2(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_301->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_301));
    add_come_last_code(info,"%s;\n",come_value2_301->c_value);
    __result274__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result274__;
    come_call_finalizer2(CVALUE_finalize,come_value_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLogicalDenial_sline(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
int __result275__;
memset(&__result_obj__, 0, sizeof(void*));
    __result275__ = self->sline;
    return __result275__;
}

char* sLogicalDenial_sname(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
void* right_value406;
char* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
right_value406 = (void*)0;
    __result276__ = __result_obj__ = ((char*)(right_value406=__builtin_string(self->sname)));
    right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result276__;
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj149;
void* right_value407;
char* __dec_obj150;
struct sMinusNode2* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
right_value407 = (void*)0;
    __dec_obj149=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj150=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value407=__builtin_string(info->sname))));
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result277__ = __result_obj__ = self;
    come_call_finalizer2(sMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result277__;
    come_call_finalizer2(sMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusNode2_terminated(){
void* __result_obj__;
_Bool __result278__;
memset(&__result_obj__, 0, sizeof(void*));
    __result278__ = (_Bool)0;
    return __result278__;
}

char* sMinusNode2_kind(){
void* __result_obj__;
void* right_value408;
char* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
right_value408 = (void*)0;
    __result279__ = __result_obj__ = ((char*)(right_value408=__builtin_string("sMinusNode2")));
    right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result279__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional389;
_Bool __result280__;
void* right_value409;
struct CVALUE* come_value_302;
void* right_value410;
struct CVALUE* come_value2_303;
void* right_value411;
char* __dec_obj151;
void* right_value412;
struct sType* __dec_obj152;
_Bool __result281__;
memset(&__result_obj__, 0, sizeof(void*));
right_value409 = (void*)0;
memset(&come_value_302, 0, sizeof(struct CVALUE*));
right_value410 = (void*)0;
memset(&come_value2_303, 0, sizeof(struct CVALUE*));
right_value411 = (void*)0;
right_value412 = (void*)0;
    if(_if_conditional389=!node_compile(self->value,info),    _if_conditional389) {
        __result280__ = (_Bool)0;
        return __result280__;
    }
    come_value_302=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value409=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_303=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value410=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1809, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj151=come_value2_303->c_value;
    come_value2_303->c_value=(char*)come_increment_ref_count(((char*)(right_value411=xsprintf("-%s",come_value_302->c_value))));
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj152=come_value2_303->type;
    come_value2_303->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value412=sType_clone(come_value_302->type))));
    come_call_finalizer2(sType_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_303->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_303));
    add_come_last_code(info,"%s;\n",come_value2_303->c_value);
    __result281__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result281__;
    come_call_finalizer2(CVALUE_finalize,come_value_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusNode2_sline(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result282__;
memset(&__result_obj__, 0, sizeof(void*));
    __result282__ = self->sline;
    return __result282__;
}

char* sMinusNode2_sname(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value413;
char* __result283__;
memset(&__result_obj__, 0, sizeof(void*));
right_value413 = (void*)0;
    __result283__ = __result_obj__ = ((char*)(right_value413=__builtin_string(self->sname)));
    right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result283__;
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj153;
void* right_value414;
char* __dec_obj154;
struct sPlusPlusNode2* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
right_value414 = (void*)0;
    __dec_obj153=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj154=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value414=__builtin_string(info->sname))));
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result284__ = __result_obj__ = self;
    come_call_finalizer2(sPlusPlusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result284__;
    come_call_finalizer2(sPlusPlusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusPlusNode2_terminated(){
void* __result_obj__;
_Bool __result285__;
memset(&__result_obj__, 0, sizeof(void*));
    __result285__ = (_Bool)0;
    return __result285__;
}

char* sPlusPlusNode2_kind(){
void* __result_obj__;
void* right_value415;
char* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
right_value415 = (void*)0;
    __result286__ = __result_obj__ = ((char*)(right_value415=__builtin_string("sPlusPlusNode2")));
    right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result286__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional392;
_Bool __result287__;
void* right_value416;
struct CVALUE* come_value_304;
void* right_value417;
struct CVALUE* come_value2_305;
void* right_value418;
char* __dec_obj155;
void* right_value419;
struct sType* __dec_obj156;
_Bool __result288__;
memset(&__result_obj__, 0, sizeof(void*));
right_value416 = (void*)0;
memset(&come_value_304, 0, sizeof(struct CVALUE*));
right_value417 = (void*)0;
memset(&come_value2_305, 0, sizeof(struct CVALUE*));
right_value418 = (void*)0;
right_value419 = (void*)0;
    if(_if_conditional392=!node_compile(self->value,info),    _if_conditional392) {
        __result287__ = (_Bool)0;
        return __result287__;
    }
    come_value_304=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value416=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_305=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value417=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1868, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj155=come_value2_305->c_value;
    come_value2_305->c_value=(char*)come_increment_ref_count(((char*)(right_value418=xsprintf("++%s",come_value_304->c_value))));
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj156=come_value2_305->type;
    come_value2_305->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value419=sType_clone(come_value_304->type))));
    come_call_finalizer2(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_305->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_305));
    add_come_last_code(info,"%s;\n",come_value2_305->c_value);
    __result288__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result288__;
    come_call_finalizer2(CVALUE_finalize,come_value_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sPlusPlusNode2_sline(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result289__;
memset(&__result_obj__, 0, sizeof(void*));
    __result289__ = self->sline;
    return __result289__;
}

char* sPlusPlusNode2_sname(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value420;
char* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
right_value420 = (void*)0;
    __result290__ = __result_obj__ = ((char*)(right_value420=__builtin_string(self->sname)));
    right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result290__;
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj157;
void* right_value421;
char* __dec_obj158;
struct sMinusMinusNode2* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
right_value421 = (void*)0;
    __dec_obj157=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj158=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value421=__builtin_string(info->sname))));
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result291__ = __result_obj__ = self;
    come_call_finalizer2(sMinusMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result291__;
    come_call_finalizer2(sMinusMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusMinusNode2_terminated(){
void* __result_obj__;
_Bool __result292__;
memset(&__result_obj__, 0, sizeof(void*));
    __result292__ = (_Bool)0;
    return __result292__;
}

char* sMinusMinusNode2_kind(){
void* __result_obj__;
void* right_value422;
char* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
right_value422 = (void*)0;
    __result293__ = __result_obj__ = ((char*)(right_value422=__builtin_string("sMinusMinusNode2")));
    right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result293__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional395;
_Bool __result294__;
void* right_value423;
struct CVALUE* come_value_306;
void* right_value424;
struct CVALUE* come_value2_307;
void* right_value425;
char* __dec_obj159;
void* right_value426;
struct sType* __dec_obj160;
_Bool __result295__;
memset(&__result_obj__, 0, sizeof(void*));
right_value423 = (void*)0;
memset(&come_value_306, 0, sizeof(struct CVALUE*));
right_value424 = (void*)0;
memset(&come_value2_307, 0, sizeof(struct CVALUE*));
right_value425 = (void*)0;
right_value426 = (void*)0;
    if(_if_conditional395=!node_compile(self->value,info),    _if_conditional395) {
        __result294__ = (_Bool)0;
        return __result294__;
    }
    come_value_306=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value423=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_307=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value424=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1927, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj159=come_value2_307->c_value;
    come_value2_307->c_value=(char*)come_increment_ref_count(((char*)(right_value425=xsprintf("--%s",come_value_306->c_value))));
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj160=come_value2_307->type;
    come_value2_307->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value426=sType_clone(come_value_306->type))));
    come_call_finalizer2(sType_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_307->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_307));
    add_come_last_code(info,"%s;\n",come_value2_307->c_value);
    __result295__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result295__;
    come_call_finalizer2(CVALUE_finalize,come_value_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusMinusNode2_sline(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result296__;
memset(&__result_obj__, 0, sizeof(void*));
    __result296__ = self->sline;
    return __result296__;
}

char* sMinusMinusNode2_sname(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value427;
char* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
right_value427 = (void*)0;
    __result297__ = __result_obj__ = ((char*)(right_value427=__builtin_string(self->sname)));
    right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result297__;
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj161;
void* right_value428;
char* __dec_obj162;
struct sComplement* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
right_value428 = (void*)0;
    __dec_obj161=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj162=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value428=__builtin_string(info->sname))));
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result298__ = __result_obj__ = self;
    come_call_finalizer2(sComplement_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result298__;
    come_call_finalizer2(sComplement_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sComplement_terminated(){
void* __result_obj__;
_Bool __result299__;
memset(&__result_obj__, 0, sizeof(void*));
    __result299__ = (_Bool)0;
    return __result299__;
}

char* sComplement_kind(){
void* __result_obj__;
void* right_value429;
char* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
right_value429 = (void*)0;
    __result300__ = __result_obj__ = ((char*)(right_value429=__builtin_string("sComplement")));
    right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result300__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional398;
_Bool __result301__;
void* right_value430;
struct CVALUE* come_value_308;
void* right_value431;
struct CVALUE* come_value2_309;
void* right_value432;
char* __dec_obj163;
void* right_value433;
struct sType* __dec_obj164;
_Bool __result302__;
memset(&__result_obj__, 0, sizeof(void*));
right_value430 = (void*)0;
memset(&come_value_308, 0, sizeof(struct CVALUE*));
right_value431 = (void*)0;
memset(&come_value2_309, 0, sizeof(struct CVALUE*));
right_value432 = (void*)0;
right_value433 = (void*)0;
    if(_if_conditional398=!node_compile(self->value,info),    _if_conditional398) {
        __result301__ = (_Bool)0;
        return __result301__;
    }
    come_value_308=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value430=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_309=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value431=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1986, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj163=come_value2_309->c_value;
    come_value2_309->c_value=(char*)come_increment_ref_count(((char*)(right_value432=xsprintf("~%s",come_value_308->c_value))));
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj164=come_value2_309->type;
    come_value2_309->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value433=sType_clone(come_value_308->type))));
    come_call_finalizer2(sType_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_309->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_309));
    add_come_last_code(info,"%s;\n",come_value2_309->c_value);
    __result302__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result302__;
    come_call_finalizer2(CVALUE_finalize,come_value_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sComplement_sline(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
int __result303__;
memset(&__result_obj__, 0, sizeof(void*));
    __result303__ = self->sline;
    return __result303__;
}

char* sComplement_sname(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
void* right_value434;
char* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value434 = (void*)0;
    __result304__ = __result_obj__ = ((char*)(right_value434=__builtin_string(self->sname)));
    right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result304__;
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value435;
char* __dec_obj165;
void* right_value453;
struct sBlock* __dec_obj171;
struct sNormalBlock* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
right_value435 = (void*)0;
right_value453 = (void*)0;
    self->sline=info->sline;
    __dec_obj165=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value435=__builtin_string(info->sname))));
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj171=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value453=sBlock_clone(block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result324__ = __result_obj__ = self;
    come_call_finalizer2(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result324__;
    come_call_finalizer2(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional399;
struct sBlock* __result305__;
void* right_value436;
struct sBlock* result_310;
_Bool _if_conditional400;
void* right_value437;
struct list$1sNodeph* __dec_obj166;
_Bool _if_conditional401;
void* right_value452;
struct sVarTable* __dec_obj170;
struct sBlock* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
right_value436 = (void*)0;
memset(&result_310, 0, sizeof(struct sBlock*));
right_value437 = (void*)0;
right_value452 = (void*)0;
        if(_if_conditional399=self==(void*)0,        _if_conditional399) {
            __result305__ = __result_obj__ = (void*)0;
            return __result305__;
        }
        result_310=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value436=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional400=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional400) {
            __dec_obj166=result_310->mNodes;
            result_310->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value437=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional401=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional401) {
            __dec_obj170=result_310->mVarTable;
            result_310->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value452=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result323__ = __result_obj__ = result_310;
        come_call_finalizer2(sBlock_finalize,result_310, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result323__;
        come_call_finalizer2(sBlock_finalize,result_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional402;
struct sVarTable* __result306__;
void* right_value438;
struct sVarTable* result_311;
_Bool _if_conditional403;
void* right_value451;
struct map$2charphsVarph* __dec_obj169;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
struct sVarTable* __result322__;
memset(&__result_obj__, 0, sizeof(void*));
right_value438 = (void*)0;
memset(&result_311, 0, sizeof(struct sVarTable*));
right_value451 = (void*)0;
                if(_if_conditional402=self==(void*)0,                _if_conditional402) {
                    __result306__ = __result_obj__ = (void*)0;
                    return __result306__;
                }
                result_311=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value438=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional403=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional403) {
                    __dec_obj169=result_311->mVars;
                    result_311->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value451=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional436=self!=((void*)0),                _if_conditional436) {
                    result_311->mGlobal=self->mGlobal;
                }
                if(_if_conditional437=self!=((void*)0),                _if_conditional437) {
                    result_311->mParent=self->mParent;
                }
                if(_if_conditional438=self!=((void*)0),                _if_conditional438) {
                    result_311->mID=self->mID;
                }
                __result322__ = __result_obj__ = result_311;
                come_call_finalizer2(sVarTable_finalize,result_311, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result322__;
                come_call_finalizer2(sVarTable_finalize,result_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional404;
struct map$2charphsVarph* __result307__;
void* right_value439;
void* right_value445;
struct map$2charphsVarph* result_315;
void* right_value446;
void* right_value447;
struct list$1charp* __dec_obj168;
char* it_318;
struct sVar* default_value_321;
struct sVar* it2_324;
struct map$2charphsVarph* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
right_value439 = (void*)0;
right_value445 = (void*)0;
memset(&result_315, 0, sizeof(struct map$2charphsVarph*));
right_value446 = (void*)0;
right_value447 = (void*)0;
memset(&it_318, 0, sizeof(char*));
memset(&default_value_321, 0, sizeof(struct sVar*));
memset(&it2_324, 0, sizeof(struct sVar*));
                        if(_if_conditional404=self==((void*)0),                        _if_conditional404) {
                            __result307__ = __result_obj__ = ((void*)0);
                            return __result307__;
                        }
                        result_315=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value445=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value439=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1178, "map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj168=result_315->key_list;
                        result_315->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value447=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value446=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1180, "list$1charp"))))))));
                        come_call_finalizer2(list$1charp_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charpp_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charpp_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(                        it_318=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_318=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_321,0,sizeof(struct sVar*));
                            it2_324=map$2charphsVarph_at(self,it_318,default_value_321);
                            map$2charphsVarph_insert2(result_315,it_318,it2_324);
                        }
                        __result321__ = __result_obj__ = result_315;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_315, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result321__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value440;
void* right_value441;
void* right_value442;
int i_312;
void* right_value443;
void* right_value444;
struct list$1charp* __dec_obj167;
struct map$2charphsVarph* __result308__;
memset(&__result_obj__, 0, sizeof(void*));
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
memset(&i_312, 0, sizeof(int));
right_value443 = (void*)0;
right_value444 = (void*)0;
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value440=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
                            right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value441=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1085, "sVar*%"))));
                            come_call_finalizer2(sVar_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value442=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
                            right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_312=0;                            i_312<1024;                            i_312++                            ){
                                self->item_existance[i_312]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj167=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value444=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value443=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
                            come_call_finalizer2(list$1charp_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charpp_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charpp_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->it=0;
                            __result308__ = __result_obj__ = self;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result308__;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional405=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional405) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional406=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional406) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional407=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional407) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional408=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional408) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_313;
_Bool _if_conditional409;
_Bool _if_conditional410;
int i_314;
_Bool _if_conditional411;
_Bool _if_conditional412;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_313, 0, sizeof(int));
memset(&i_314, 0, sizeof(int));
                                for(                                i_313=0;                                i_313<self->size;                                i_313++                                ){
                                    if(_if_conditional409=self->item_existance[i_313],                                    _if_conditional409) {
                                        if(_if_conditional410=1,                                        _if_conditional410) {
                                            come_call_finalizer2(sVar_finalize,self->items[i_313], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(                                i_314=0;                                i_314<self->size;                                i_314++                                ){
                                    if(_if_conditional411=self->item_existance[i_314],                                    _if_conditional411) {
                                        if(_if_conditional412=1,                                        _if_conditional412) {
                                            self->keys[i_314] = come_decrement_ref_count2(self->keys[i_314], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->keys);
                                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional413;
char* result_316;
char* __result309__;
_Bool _if_conditional414;
char* __result310__;
char* result_317;
char* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_316, 0, sizeof(char*));
memset(&result_317, 0, sizeof(char*));
                            if(_if_conditional413=self==((void*)0),                            _if_conditional413) {
                                memset(&result_316,0,sizeof(char*));
                                __result309__ = __result_obj__ = result_316;
                                return __result309__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result310__ = __result_obj__ = self->key_list->it->item;
                                return __result310__;
                            }
                            memset(&result_317,0,sizeof(char*));
                            __result311__ = __result_obj__ = result_317;
                            return __result311__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result312__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result312__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result312__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional415;
char* result_319;
char* __result313__;
_Bool _if_conditional416;
char* __result314__;
char* result_320;
char* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_319, 0, sizeof(char*));
memset(&result_320, 0, sizeof(char*));
                            if(_if_conditional415=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional415) {
                                memset(&result_319,0,sizeof(char*));
                                __result313__ = __result_obj__ = result_319;
                                return __result313__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result314__ = __result_obj__ = self->key_list->it->item;
                                return __result314__;
                            }
                            memset(&result_320,0,sizeof(char*));
                            __result315__ = __result_obj__ = result_320;
                            return __result315__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_322;
unsigned int it_323;
_Bool _while_condtional29;
_Bool _if_conditional417;
_Bool _if_conditional418;
struct sVar* __result316__;
_Bool _if_conditional419;
_Bool _if_conditional420;
struct sVar* __result317__;
struct sVar* __result318__;
struct sVar* __result319__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_322, 0, sizeof(unsigned int));
memset(&it_323, 0, sizeof(unsigned int));
                                hash_322=string_get_hash_key(((char*)key))%self->size;
                                it_323=hash_322;
                                while(_while_condtional29=(_Bool)1,                                _while_condtional29) {
                                    if(_if_conditional417=self->item_existance[it_323],                                    _if_conditional417) {
                                        if(_if_conditional418=string_equals(self->keys[it_323],key),                                        _if_conditional418) {
                                            __result316__ = __result_obj__ = self->items[it_323];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result316__;
                                        }
                                        it_323++;
                                        if(_if_conditional419=it_323>=self->size,                                        _if_conditional419) {
                                            it_323=0;
                                        }
                                        else {
                                            if(_if_conditional420=it_323==hash_322,                                            _if_conditional420) {
                                                __result317__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result317__;
                                            }
                                        }
                                    }
                                    else {
                                        __result318__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result318__;
                                    }
                                }
                                __result319__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result319__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional421;
unsigned int hash_336;
int it_337;
_Bool _while_condtional31;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool same_key_exist_338;
char* it2_339;
_Bool _if_conditional433;
_Bool _if_conditional434;
struct map$2charphsVarph* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_336, 0, sizeof(unsigned int));
memset(&it_337, 0, sizeof(int));
memset(&same_key_exist_338, 0, sizeof(_Bool));
memset(&it2_339, 0, sizeof(char*));
                                if(_if_conditional421=self->len*2>=self->size,                                _if_conditional421) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_336=string_get_hash_key(key)%self->size;
                                it_337=hash_336;
                                while(_while_condtional31=(_Bool)1,                                _while_condtional31) {
                                    if(_if_conditional425=self->item_existance[it_337],                                    _if_conditional425) {
                                        if(_if_conditional426=string_equals(self->keys[it_337],key),                                        _if_conditional426) {
                                            if(_if_conditional427=1,                                            _if_conditional427) {
                                                self->keys[it_337] = come_decrement_ref_count2(self->keys[it_337], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_337]);
                                                self->keys[it_337]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_337]);
                                                self->keys[it_337]=key;
                                            }
                                            if(_if_conditional428=1,                                            _if_conditional428) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_337], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->items[it_337]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_337]=item;
                                            }
                                            break;
                                        }
                                        it_337++;
                                        if(_if_conditional429=it_337>=self->size,                                        _if_conditional429) {
                                            it_337=0;
                                        }
                                        else {
                                            if(_if_conditional430=it_337==hash_336,                                            _if_conditional430) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_337]=(_Bool)1;
                                        if(_if_conditional431=1,                                        _if_conditional431) {
                                            self->keys[it_337]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_337]=key;
                                        }
                                        if(_if_conditional432=1,                                        _if_conditional432) {
                                            self->items[it_337]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_337]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_338=(_Bool)0;
                                for(                                it2_339=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_339=list$1charp_next(self->key_list)                                ){
                                    if(_if_conditional433=string_equals(it2_339,key),                                    _if_conditional433) {
                                        same_key_exist_338=(_Bool)1;
                                    }
                                }
                                if(_if_conditional434=!same_key_exist_338,                                _if_conditional434) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result320__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result320__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_325;
void* right_value448;
char** keys_326;
void* right_value449;
struct sVar** items_327;
void* right_value450;
_Bool* item_existance_328;
int len_329;
char* it_330;
struct sVar* default_value_331;
struct sVar* it2_332;
unsigned int hash_333;
int n_334;
_Bool _while_condtional30;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
struct sVar* default_value_335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_325, 0, sizeof(int));
right_value448 = (void*)0;
memset(&keys_326, 0, sizeof(char**));
right_value449 = (void*)0;
memset(&items_327, 0, sizeof(struct sVar**));
right_value450 = (void*)0;
memset(&item_existance_328, 0, sizeof(_Bool*));
memset(&len_329, 0, sizeof(int));
memset(&it_330, 0, sizeof(char*));
memset(&default_value_331, 0, sizeof(struct sVar*));
memset(&it2_332, 0, sizeof(struct sVar*));
memset(&hash_333, 0, sizeof(unsigned int));
memset(&n_334, 0, sizeof(int));
memset(&default_value_335, 0, sizeof(struct sVar*));
                                        size_325=self->size*10;
                                        keys_326=(char**)come_increment_ref_count(((char**)(right_value448=(char**)come_calloc(1, sizeof(char*)*(1*(size_325)), "./comelang2.h", 1335, "char*%"))));
                                        right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_327=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value449=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_325)), "./comelang2.h", 1336, "sVar*%"))));
                                        come_call_finalizer2(sVar_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_328=(_Bool*)come_increment_ref_count(((_Bool*)(right_value450=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_325)), "./comelang2.h", 1337, "bool"))));
                                        right_value450 = come_decrement_ref_count2(right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_329=0;
                                        for(                                        it_330=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_330=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_331,0,sizeof(struct sVar*));
                                            it2_332=map$2charphsVarph_at(self,it_330,default_value_331);
                                            hash_333=string_get_hash_key(it_330)%size_325;
                                            n_334=hash_333;
                                            while(_while_condtional30=(_Bool)1,                                            _while_condtional30) {
                                                if(_if_conditional422=item_existance_328[n_334],                                                _if_conditional422) {
                                                    n_334++;
                                                    if(_if_conditional423=n_334>=size_325,                                                    _if_conditional423) {
                                                        n_334=0;
                                                    }
                                                    else {
                                                        if(_if_conditional424=n_334==hash_333,                                                        _if_conditional424) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_328[n_334]=(_Bool)1;
                                                    keys_326[n_334]=it_330;
                                                    items_327[n_334]=map$2charphsVarph_at(self,it_330,default_value_335);
                                                    len_329++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_free((char*)self->keys);
                                        self->keys=keys_326;
                                        self->items=items_327;
                                        self->item_existance=item_existance_328;
                                        self->size=size_325;
                                        self->len=len_329;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional435=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional435) {
                            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

_Bool sNormalBlock_terminated(){
void* __result_obj__;
_Bool __result325__;
memset(&__result_obj__, 0, sizeof(void*));
    __result325__ = (_Bool)1;
    return __result325__;
}

char* sNormalBlock_kind(){
void* __result_obj__;
void* right_value454;
char* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value454 = (void*)0;
    __result326__ = __result_obj__ = ((char*)(right_value454=__builtin_string("sNormalBlock")));
    right_value454 = come_decrement_ref_count2(right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result326__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* block_340;
_Bool __result327__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&block_340, 0, sizeof(struct sBlock*));
    block_340=self->mBlock;
    add_come_code(info,"{\n");
    transpile_block(block_340,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result327__ = (_Bool)1;
    return __result327__;
}

int sNormalBlock_sline(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
int __result328__;
memset(&__result_obj__, 0, sizeof(void*));
    __result328__ = self->sline;
    return __result328__;
}

char* sNormalBlock_sname(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value455;
char* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
right_value455 = (void*)0;
    __result329__ = __result_obj__ = ((char*)(right_value455=__builtin_string(self->sname)));
    right_value455 = come_decrement_ref_count2(right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result329__;
}

struct sNode* parse_normal_block(struct sInfo* info){
void* __result_obj__;
void* right_value456;
struct sBlock* block_341;
void* right_value457;
void* right_value458;
struct sNode* _inf_value2;
struct sNormalBlock* _inf_obj_value2;
void* right_value462;
struct sNode* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value456 = (void*)0;
memset(&block_341, 0, sizeof(struct sBlock*));
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value462 = (void*)0;
    block_341=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value456=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2067, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sNormalBlock*)(right_value458=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value457=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05function.c", 2067, "sNormalBlock")))),block_341,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNormalBlock_finalize;
    _inf_value2->clone=(void*)sNormalBlock_clone;
    _inf_value2->compile=(void*)sNormalBlock_compile;
    _inf_value2->sline=(void*)sNormalBlock_sline;
    _inf_value2->sname=(void*)sNormalBlock_sname;
    _inf_value2->terminated=(void*)sNormalBlock_terminated;
    _inf_value2->kind=(void*)sNormalBlock_kind;
    __result332__ = __result_obj__ = ((struct sNode*)(right_value462=_inf_value2));
    come_call_finalizer2(sBlock_finalize,block_341, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sNormalBlock_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNormalBlock_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result332__;
    come_call_finalizer2(sBlock_finalize,block_341, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional441;
_Bool _if_conditional442;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional441=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional441) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional442=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional442) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional443;
struct sNormalBlock* __result330__;
void* right_value459;
struct sNormalBlock* result_342;
_Bool _if_conditional444;
void* right_value460;
struct sBlock* __dec_obj172;
_Bool _if_conditional445;
_Bool _if_conditional446;
void* right_value461;
char* __dec_obj173;
struct sNormalBlock* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
right_value459 = (void*)0;
memset(&result_342, 0, sizeof(struct sNormalBlock*));
right_value460 = (void*)0;
right_value461 = (void*)0;
        if(_if_conditional443=self==(void*)0,        _if_conditional443) {
            __result330__ = __result_obj__ = (void*)0;
            return __result330__;
        }
        result_342=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value459=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "sNormalBlock"))));
        come_call_finalizer2(sNormalBlock_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional444=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional444) {
            __dec_obj172=result_342->mBlock;
            result_342->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value460=sBlock_clone(self->mBlock))));
            come_call_finalizer2(sBlock_finalize,__dec_obj172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional445=self!=((void*)0),        _if_conditional445) {
            result_342->sline=self->sline;
        }
        if(_if_conditional446=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional446) {
            __dec_obj173=result_342->sname;
            result_342->sname=(char*)come_increment_ref_count(((char*)(right_value461=string_clone(self->sname))));
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value461 = come_decrement_ref_count2(right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result331__ = __result_obj__ = result_342;
        come_call_finalizer2(sNormalBlock_finalize,result_342, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result331__;
        come_call_finalizer2(sNormalBlock_finalize,result_342, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void backtrace_parse_type(struct sInfo* info){
void* __result_obj__;
void* right_value463;
memset(&__result_obj__, 0, sizeof(void*));
right_value463 = (void*)0;
    info->no_output_err=(_Bool)1;
    ((struct tuple3$3sTypephcharphbool*)(right_value463=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional447;
_Bool _if_conditional448;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional447=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional447) {
            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional448=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional448) {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value464;
void* right_value465;
void* right_value466;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* right_value470;
struct sNode* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
right_value470 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2079, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sLogicalDenial*)(right_value466=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value464=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05function.c", 2079, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value465=sNode_clone(node)))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sLogicalDenial_finalize;
    _inf_value3->clone=(void*)sLogicalDenial_clone;
    _inf_value3->compile=(void*)sLogicalDenial_compile;
    _inf_value3->sline=(void*)sLogicalDenial_sline;
    _inf_value3->sname=(void*)sLogicalDenial_sname;
    _inf_value3->terminated=(void*)sLogicalDenial_terminated;
    _inf_value3->kind=(void*)sLogicalDenial_kind;
    __result335__ = __result_obj__ = ((struct sNode*)(right_value470=_inf_value3));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sLogicalDenial_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value465) { right_value465 = come_decrement_ref_count2(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(sLogicalDenial_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value470) { right_value470 = come_decrement_ref_count2(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result335__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* expression_node_v99(struct sInfo* info){
void* __result_obj__;
_Bool refference_344;
char* p_345;
int sline_346;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _while_condtional32;
_Bool _if_conditional458;
_Bool _if_conditional459;
void* right_value471;
struct sNode* __result336__;
_Bool _if_conditional460;
void* right_value472;
struct sNode* node_347;
void* right_value473;
void* right_value474;
struct sNode* _inf_value4;
struct sLogicalDenial* _inf_obj_value4;
void* right_value478;
struct sNode* __result339__;
_Bool _if_conditional467;
void* right_value479;
struct sNode* node_349;
void* right_value480;
void* right_value481;
struct sNode* _inf_value5;
struct sMinusMinusNode2* _inf_obj_value5;
void* right_value485;
struct sNode* __result342__;
_Bool _if_conditional474;
void* right_value486;
struct sNode* node_351;
void* right_value487;
void* right_value488;
struct sNode* _inf_value6;
struct sMinusNode2* _inf_obj_value6;
void* right_value492;
struct sNode* __result345__;
_Bool _if_conditional481;
void* right_value493;
struct sNode* node_353;
void* right_value494;
void* right_value495;
struct sNode* _inf_value7;
struct sPlusPlusNode2* _inf_obj_value7;
void* right_value499;
struct sNode* __result348__;
_Bool _if_conditional488;
void* right_value500;
struct sNode* node_355;
void* right_value501;
void* right_value502;
struct sNode* _inf_value8;
struct sComplement* _inf_obj_value8;
void* right_value506;
struct sNode* __result351__;
_Bool _if_conditional495;
void* right_value507;
struct sNode* node_357;
void* right_value508;
struct sNode* __dec_obj186;
struct sNode* __result352__;
_Bool _if_conditional496;
void* right_value509;
struct sNode* node_358;
void* right_value510;
struct sNode* __dec_obj187;
struct sNode* __result353__;
_Bool _if_conditional497;
void* right_value511;
struct sNode* node_359;
void* right_value512;
struct sNode* __dec_obj188;
struct sNode* __result354__;
_Bool _if_conditional498;
void* right_value513;
struct sNode* node_360;
void* right_value514;
struct sNode* __dec_obj189;
struct sNode* __result355__;
_Bool _if_conditional499;
_Bool _if_conditional500;
void* right_value515;
void* right_value516;
void* right_value517;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* right_value522;
struct sNode* __result358__;
char* head_362;
void* right_value523;
struct sNode* value_363;
char* tail_364;
void* right_value524;
struct sNode* __dec_obj193;
void* right_value525;
struct sNode* __dec_obj194;
void* right_value526;
void* right_value527;
void* right_value528;
struct sNode* _inf_value10;
struct sReturnNode* _inf_obj_value10;
void* right_value533;
struct sNode* __result361__;
_Bool _if_conditional517;
_Bool _if_conditional518;
void* right_value534;
void* right_value535;
void* right_value536;
struct sNode* _inf_value11;
struct sParentReturnNode* _inf_obj_value11;
void* right_value541;
struct sNode* __result364__;
char* head_368;
void* right_value542;
struct sNode* value_369;
char* tail_370;
void* right_value543;
struct sNode* __dec_obj201;
void* right_value544;
struct sNode* __dec_obj202;
void* right_value545;
void* right_value546;
void* right_value547;
struct sNode* _inf_value12;
struct sParentReturnNode* _inf_obj_value12;
void* right_value552;
struct sNode* __result367__;
_Bool _if_conditional535;
void* right_value553;
void* right_value554;
struct sNode* _inf_value13;
struct sParentBreakNode* _inf_obj_value13;
void* right_value557;
struct sNode* __result370__;
_Bool _if_conditional540;
void* right_value558;
void* right_value559;
struct sNode* _inf_value14;
struct sParentContinueNode* _inf_obj_value14;
void* right_value562;
struct sNode* __result373__;
_Bool _if_conditional545;
_Bool quote_375;
_Bool _if_conditional546;
_Bool no_assign_376;
void* right_value563;
struct sNode* value_377;
void* right_value564;
void* right_value565;
struct sNode* _inf_value15;
struct sDerefferenceNode* _inf_obj_value15;
void* right_value569;
struct sNode* __result376__;
_Bool _if_conditional554;
void* right_value570;
struct sNode* value_379;
void* right_value571;
void* right_value572;
struct sNode* _inf_value16;
struct sRefferenceNode* _inf_obj_value16;
void* right_value576;
struct sNode* __result379__;
_Bool _if_conditional561;
void* right_value577;
struct sNode* value_381;
void* right_value578;
void* right_value579;
struct sNode* _inf_value17;
struct sReverseNode* _inf_obj_value17;
void* right_value583;
struct sNode* __result382__;
_Bool _if_conditional568;
char* head_383;
int head_sline_384;
char* buf_385;
char* p_386;
int sline_387;
_Bool _if_conditional569;
void* right_value584;
char* __dec_obj214;
void* right_value585;
char* __dec_obj215;
_Bool is_type_name__388;
_Bool define_function_pointer_flag_389;
_Bool _if_conditional570;
_Bool _if_conditional571;
_Bool _if_conditional572;
_Bool lambda_flag_390;
_Bool _if_conditional573;
_Bool _if_conditional574;
void* right_value586;
char* word2_391;
_Bool _if_conditional575;
_Bool fun_name_with_type_name_392;
_Bool _if_conditional576;
_Bool _if_conditional577;
void* right_value587;
char* word2_393;
_Bool _while_condtional33;
_Bool _if_conditional578;
_Bool _if_conditional579;
void* right_value588;
char* __dec_obj216;
_Bool _if_conditional580;
void* right_value589;
struct sNode* __result383__;
_Bool _if_conditional581;
void* right_value590;
struct sNode* node_394;
void* right_value591;
struct sNode* __dec_obj217;
void* right_value592;
struct sNode* __dec_obj218;
struct sNode* __result384__;
_Bool _if_conditional582;
void* right_value593;
void* right_value594;
struct sNode* _inf_value18;
struct sFuncNode* _inf_obj_value18;
void* right_value599;
struct sNode* __result387__;
_Bool _if_conditional591;
void* right_value600;
void* right_value601;
struct sNode* _inf_value19;
struct sLineNode* _inf_obj_value19;
void* right_value606;
struct sNode* __result390__;
_Bool _if_conditional600;
void* right_value607;
void* right_value608;
struct sNode* _inf_value20;
struct sSNameNode* _inf_obj_value20;
void* right_value613;
struct sNode* __result393__;
_Bool _if_conditional609;
void* right_value614;
void* right_value615;
struct sNode* _inf_value21;
struct sCallerFuncNode* _inf_obj_value21;
void* right_value620;
struct sNode* __result396__;
_Bool _if_conditional618;
void* right_value621;
void* right_value622;
struct sNode* _inf_value22;
struct sCallerLineNode* _inf_obj_value22;
void* right_value627;
struct sNode* __result399__;
_Bool _if_conditional627;
void* right_value628;
void* right_value629;
struct sNode* _inf_value23;
struct sCallerSNameNode* _inf_obj_value23;
void* right_value634;
struct sNode* __result402__;
_Bool _if_conditional636;
void* right_value635;
struct sNode* node_401;
void* right_value636;
struct sNode* __dec_obj237;
struct sNode* __result403__;
_Bool _if_conditional637;
void* right_value637;
void* right_value638;
struct buffer* fun_name_402;
void* right_value639;
void* right_value640;
struct sType* type_406;
_Bool _if_conditional642;
void* right_value641;
struct sClass* klass_412;
_Bool _if_conditional653;
void* right_value642;
void* right_value643;
struct sType* __dec_obj238;
_Bool _while_condtional37;
_Bool _if_conditional654;
void* right_value644;
char* buf2_413;
void* right_value645;
void* right_value646;
struct sNode* node_414;
void* right_value647;
struct sNode* __dec_obj239;
void* right_value648;
struct sNode* __dec_obj240;
struct sNode* __result412__;
_Bool _if_conditional655;
void* right_value649;
void* right_value650;
struct buffer* fun_name_415;
void* right_value651;
char* buf2_416;
void* right_value652;
void* right_value653;
struct sNode* node_417;
void* right_value654;
struct sNode* __dec_obj241;
void* right_value655;
struct sNode* __dec_obj242;
struct sNode* __result413__;
_Bool _if_conditional656;
void* right_value656;
struct sNode* node_418;
void* right_value657;
struct sNode* __dec_obj243;
void* right_value658;
struct sNode* __dec_obj244;
struct sNode* __result414__;
void* right_value659;
struct sNode* node_419;
void* right_value660;
struct sNode* __dec_obj245;
struct sNode* __result415__;
_Bool _if_conditional657;
_Bool cast_expression_flag_420;
char* p_421;
int sline_422;
void* right_value661;
char* word_423;
_Bool _if_conditional658;
void* right_value662;
char* __dec_obj246;
_Bool _if_conditional659;
_Bool tuple_expression_flag_424;
char* p_425;
int sline_426;
_Bool no_comma_427;
_Bool no_output_err_428;
_Bool no_output_come_code_429;
void* right_value663;
struct sNode* node_430;
void* right_value664;
struct sNode* node2_431;
_Bool _if_conditional660;
_Bool _if_conditional661;
void* right_value665;
struct sNode* node_432;
void* right_value666;
struct sNode* __dec_obj247;
struct sNode* __result416__;
_Bool _if_conditional662;
void* right_value667;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_433;
char* name_434;
_Bool err_435;
_Bool _if_conditional663;
void* right_value668;
struct sNode* node_436;
void* right_value669;
struct sNode* __dec_obj248;
void* right_value670;
void* right_value671;
struct sNode* _inf_value24;
struct sCastNode* _inf_obj_value24;
void* right_value676;
struct sNode* __result419__;
void* right_value677;
struct sNode* node_438;
void* right_value678;
void* right_value679;
struct sNode* _inf_value25;
struct sParenNode* _inf_obj_value25;
void* right_value683;
struct sNode* __dec_obj254;
void* right_value684;
struct sNode* __dec_obj255;
struct sNode* __result422__;
void* right_value685;
struct sNode* node_440;
void* right_value686;
struct sNode* __dec_obj256;
struct sNode* __result423__;
struct sNode* __result424__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&refference_344, 0, sizeof(_Bool));
memset(&p_345, 0, sizeof(char*));
memset(&sline_346, 0, sizeof(int));
right_value471 = (void*)0;
right_value472 = (void*)0;
memset(&node_347, 0, sizeof(struct sNode*));
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
memset(&node_349, 0, sizeof(struct sNode*));
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
memset(&node_351, 0, sizeof(struct sNode*));
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value492 = (void*)0;
right_value493 = (void*)0;
memset(&node_353, 0, sizeof(struct sNode*));
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value499 = (void*)0;
right_value500 = (void*)0;
memset(&node_355, 0, sizeof(struct sNode*));
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value506 = (void*)0;
right_value507 = (void*)0;
memset(&node_357, 0, sizeof(struct sNode*));
right_value508 = (void*)0;
right_value509 = (void*)0;
memset(&node_358, 0, sizeof(struct sNode*));
right_value510 = (void*)0;
right_value511 = (void*)0;
memset(&node_359, 0, sizeof(struct sNode*));
right_value512 = (void*)0;
right_value513 = (void*)0;
memset(&node_360, 0, sizeof(struct sNode*));
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value522 = (void*)0;
memset(&head_362, 0, sizeof(char*));
right_value523 = (void*)0;
memset(&value_363, 0, sizeof(struct sNode*));
memset(&tail_364, 0, sizeof(char*));
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
right_value527 = (void*)0;
right_value528 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
right_value535 = (void*)0;
right_value536 = (void*)0;
right_value541 = (void*)0;
memset(&head_368, 0, sizeof(char*));
right_value542 = (void*)0;
memset(&value_369, 0, sizeof(struct sNode*));
memset(&tail_370, 0, sizeof(char*));
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
right_value552 = (void*)0;
right_value553 = (void*)0;
right_value554 = (void*)0;
right_value557 = (void*)0;
right_value558 = (void*)0;
right_value559 = (void*)0;
right_value562 = (void*)0;
memset(&quote_375, 0, sizeof(_Bool));
memset(&no_assign_376, 0, sizeof(_Bool));
right_value563 = (void*)0;
memset(&value_377, 0, sizeof(struct sNode*));
right_value564 = (void*)0;
right_value565 = (void*)0;
right_value569 = (void*)0;
right_value570 = (void*)0;
memset(&value_379, 0, sizeof(struct sNode*));
right_value571 = (void*)0;
right_value572 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
memset(&value_381, 0, sizeof(struct sNode*));
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value583 = (void*)0;
memset(&head_383, 0, sizeof(char*));
memset(&head_sline_384, 0, sizeof(int));
memset(&buf_385, 0, sizeof(char*));
memset(&p_386, 0, sizeof(char*));
memset(&sline_387, 0, sizeof(int));
right_value584 = (void*)0;
right_value585 = (void*)0;
memset(&is_type_name__388, 0, sizeof(_Bool));
memset(&define_function_pointer_flag_389, 0, sizeof(_Bool));
memset(&lambda_flag_390, 0, sizeof(_Bool));
right_value586 = (void*)0;
memset(&word2_391, 0, sizeof(char*));
memset(&fun_name_with_type_name_392, 0, sizeof(_Bool));
right_value587 = (void*)0;
memset(&word2_393, 0, sizeof(char*));
right_value588 = (void*)0;
right_value589 = (void*)0;
right_value590 = (void*)0;
memset(&node_394, 0, sizeof(struct sNode*));
right_value591 = (void*)0;
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
right_value615 = (void*)0;
right_value620 = (void*)0;
right_value621 = (void*)0;
right_value622 = (void*)0;
right_value627 = (void*)0;
right_value628 = (void*)0;
right_value629 = (void*)0;
right_value634 = (void*)0;
right_value635 = (void*)0;
memset(&node_401, 0, sizeof(struct sNode*));
right_value636 = (void*)0;
right_value637 = (void*)0;
right_value638 = (void*)0;
memset(&fun_name_402, 0, sizeof(struct buffer*));
right_value639 = (void*)0;
right_value640 = (void*)0;
memset(&type_406, 0, sizeof(struct sType*));
right_value641 = (void*)0;
memset(&klass_412, 0, sizeof(struct sClass*));
right_value642 = (void*)0;
right_value643 = (void*)0;
right_value644 = (void*)0;
memset(&buf2_413, 0, sizeof(char*));
right_value645 = (void*)0;
right_value646 = (void*)0;
memset(&node_414, 0, sizeof(struct sNode*));
right_value647 = (void*)0;
right_value648 = (void*)0;
right_value649 = (void*)0;
right_value650 = (void*)0;
memset(&fun_name_415, 0, sizeof(struct buffer*));
right_value651 = (void*)0;
memset(&buf2_416, 0, sizeof(char*));
right_value652 = (void*)0;
right_value653 = (void*)0;
memset(&node_417, 0, sizeof(struct sNode*));
right_value654 = (void*)0;
right_value655 = (void*)0;
right_value656 = (void*)0;
memset(&node_418, 0, sizeof(struct sNode*));
right_value657 = (void*)0;
right_value658 = (void*)0;
right_value659 = (void*)0;
memset(&node_419, 0, sizeof(struct sNode*));
right_value660 = (void*)0;
memset(&cast_expression_flag_420, 0, sizeof(_Bool));
memset(&p_421, 0, sizeof(char*));
memset(&sline_422, 0, sizeof(int));
right_value661 = (void*)0;
memset(&word_423, 0, sizeof(char*));
right_value662 = (void*)0;
memset(&tuple_expression_flag_424, 0, sizeof(_Bool));
memset(&p_425, 0, sizeof(char*));
memset(&sline_426, 0, sizeof(int));
memset(&no_comma_427, 0, sizeof(_Bool));
memset(&no_output_err_428, 0, sizeof(_Bool));
memset(&no_output_come_code_429, 0, sizeof(_Bool));
right_value663 = (void*)0;
memset(&node_430, 0, sizeof(struct sNode*));
right_value664 = (void*)0;
memset(&node2_431, 0, sizeof(struct sNode*));
right_value665 = (void*)0;
memset(&node_432, 0, sizeof(struct sNode*));
right_value666 = (void*)0;
right_value667 = (void*)0;
memset(&type_433, 0, sizeof(struct sType*));
memset(&name_434, 0, sizeof(char*));
memset(&err_435, 0, sizeof(_Bool));
memset(&type_433, 0, sizeof(struct sType*));
memset(&name_434, 0, sizeof(char*));
memset(&err_435, 0, sizeof(_Bool));
right_value668 = (void*)0;
memset(&node_436, 0, sizeof(struct sNode*));
right_value669 = (void*)0;
right_value670 = (void*)0;
right_value671 = (void*)0;
right_value676 = (void*)0;
right_value677 = (void*)0;
memset(&node_438, 0, sizeof(struct sNode*));
right_value678 = (void*)0;
right_value679 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
right_value685 = (void*)0;
memset(&node_440, 0, sizeof(struct sNode*));
right_value686 = (void*)0;
    skip_spaces_and_lf(info);
    refference_344=(_Bool)0;
    {
        p_345=info->p;
        sline_346=info->sline;
        if(_if_conditional455=*info->p==38,        _if_conditional455) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional456=xisalpha(*info->p)||*info->p==95,            _if_conditional456) {
                refference_344=(_Bool)1;
            }
            else {
                if(_if_conditional457=*info->p==40,                _if_conditional457) {
                    while(_while_condtional32=*info->p==40,                    _while_condtional32) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional458=xisalpha(*info->p)||*info->p==95,                    _if_conditional458) {
                        refference_344=(_Bool)1;
                    }
                }
            }
        }
        info->p=p_345;
        info->sline=sline_346;
    }
    parse_sharp_v5(info);
    if(_if_conditional459=*info->p==123,    _if_conditional459) {
        __result336__ = __result_obj__ = ((struct sNode*)(right_value471=parse_normal_block(info)));
        if(right_value471) { right_value471 = come_decrement_ref_count2(right_value471, ((struct sNode*)right_value471)->finalize, ((struct sNode*)right_value471)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result336__;
    }
    else {
        if(_if_conditional460=*info->p==33,        _if_conditional460) {
            info->p++;
            skip_spaces_and_lf(info);
            node_347=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value472=expression_node_v99(info))));
            if(right_value472) { right_value472 = come_decrement_ref_count2(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2126, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sLogicalDenial*)(right_value474=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value473=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05function.c", 2126, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(node_347),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLogicalDenial_finalize;
            _inf_value4->clone=(void*)sLogicalDenial_clone;
            _inf_value4->compile=(void*)sLogicalDenial_compile;
            _inf_value4->sline=(void*)sLogicalDenial_sline;
            _inf_value4->sname=(void*)sLogicalDenial_sname;
            _inf_value4->terminated=(void*)sLogicalDenial_terminated;
            _inf_value4->kind=(void*)sLogicalDenial_kind;
            __result339__ = __result_obj__ = ((struct sNode*)(right_value478=_inf_value4));
            if(node_347) { node_347 = come_decrement_ref_count2(node_347, ((struct sNode*)node_347)->finalize, ((struct sNode*)node_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sLogicalDenial_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLogicalDenial_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result339__;
            if(node_347) { node_347 = come_decrement_ref_count2(node_347, ((struct sNode*)node_347)->finalize, ((struct sNode*)node_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional467=*info->p==45&&*(info->p+1)==45,            _if_conditional467) {
                info->p+=2;
                skip_spaces_and_lf(info);
                node_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=expression_node_v99(info))));
                if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2134, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sMinusMinusNode2*)(right_value481=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value480=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05function.c", 2134, "sMinusMinusNode2")))),(struct sNode*)come_increment_ref_count(node_349),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sMinusMinusNode2_finalize;
                _inf_value5->clone=(void*)sMinusMinusNode2_clone;
                _inf_value5->compile=(void*)sMinusMinusNode2_compile;
                _inf_value5->sline=(void*)sMinusMinusNode2_sline;
                _inf_value5->sname=(void*)sMinusMinusNode2_sname;
                _inf_value5->terminated=(void*)sMinusMinusNode2_terminated;
                _inf_value5->kind=(void*)sMinusMinusNode2_kind;
                __result342__ = __result_obj__ = ((struct sNode*)(right_value485=_inf_value5));
                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sMinusMinusNode2_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sMinusMinusNode2_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result342__;
                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional474=*info->p==45,                _if_conditional474) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_351=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value486=expression_node_v99(info))));
                    if(right_value486) { right_value486 = come_decrement_ref_count2(right_value486, ((struct sNode*)right_value486)->finalize, ((struct sNode*)right_value486)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2142, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sMinusNode2*)(right_value488=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value487=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05function.c", 2142, "sMinusNode2")))),(struct sNode*)come_increment_ref_count(node_351),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sMinusNode2_finalize;
                    _inf_value6->clone=(void*)sMinusNode2_clone;
                    _inf_value6->compile=(void*)sMinusNode2_compile;
                    _inf_value6->sline=(void*)sMinusNode2_sline;
                    _inf_value6->sname=(void*)sMinusNode2_sname;
                    _inf_value6->terminated=(void*)sMinusNode2_terminated;
                    _inf_value6->kind=(void*)sMinusNode2_kind;
                    __result345__ = __result_obj__ = ((struct sNode*)(right_value492=_inf_value6));
                    if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sMinusNode2_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sMinusNode2_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value492) { right_value492 = come_decrement_ref_count2(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result345__;
                    if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional481=*info->p==43&&*(info->p+1)==43,                    _if_conditional481) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        node_353=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value493=expression_node_v99(info))));
                        if(right_value493) { right_value493 = come_decrement_ref_count2(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2150, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sPlusPlusNode2*)(right_value495=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value494=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05function.c", 2150, "sPlusPlusNode2")))),(struct sNode*)come_increment_ref_count(node_353),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sPlusPlusNode2_finalize;
                        _inf_value7->clone=(void*)sPlusPlusNode2_clone;
                        _inf_value7->compile=(void*)sPlusPlusNode2_compile;
                        _inf_value7->sline=(void*)sPlusPlusNode2_sline;
                        _inf_value7->sname=(void*)sPlusPlusNode2_sname;
                        _inf_value7->terminated=(void*)sPlusPlusNode2_terminated;
                        _inf_value7->kind=(void*)sPlusPlusNode2_kind;
                        __result348__ = __result_obj__ = ((struct sNode*)(right_value499=_inf_value7));
                        if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sPlusPlusNode2_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sPlusPlusNode2_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value499) { right_value499 = come_decrement_ref_count2(right_value499, ((struct sNode*)right_value499)->finalize, ((struct sNode*)right_value499)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result348__;
                        if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional488=*info->p==126,                        _if_conditional488) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            node_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value500=expression_node_v99(info))));
                            if(right_value500) { right_value500 = come_decrement_ref_count2(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2158, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sComplement*)(right_value502=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value501=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05function.c", 2158, "sComplement")))),(struct sNode*)come_increment_ref_count(node_355),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sComplement_finalize;
                            _inf_value8->clone=(void*)sComplement_clone;
                            _inf_value8->compile=(void*)sComplement_compile;
                            _inf_value8->sline=(void*)sComplement_sline;
                            _inf_value8->sname=(void*)sComplement_sname;
                            _inf_value8->terminated=(void*)sComplement_terminated;
                            _inf_value8->kind=(void*)sComplement_kind;
                            __result351__ = __result_obj__ = ((struct sNode*)(right_value506=_inf_value8));
                            if(node_355) { node_355 = come_decrement_ref_count2(node_355, ((struct sNode*)node_355)->finalize, ((struct sNode*)node_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sComplement_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sComplement_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value506) { right_value506 = come_decrement_ref_count2(right_value506, ((struct sNode*)right_value506)->finalize, ((struct sNode*)right_value506)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result351__;
                            if(node_355) { node_355 = come_decrement_ref_count2(node_355, ((struct sNode*)node_355)->finalize, ((struct sNode*)node_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional495=*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88),                            _if_conditional495) {
                                info->p+=2;
                                node_357=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value507=get_hex_number((_Bool)0,info))));
                                if(right_value507) { right_value507 = come_decrement_ref_count2(right_value507, ((struct sNode*)right_value507)->finalize, ((struct sNode*)right_value507)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __dec_obj186=node_357;
                                node_357=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_357),info))));
                                if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value508) { right_value508 = come_decrement_ref_count2(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __result352__ = __result_obj__ = node_357;
                                if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result352__;
                                if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional496=*info->p==48&&xisdigit(*(info->p+1)),                                _if_conditional496) {
                                    info->p++;
                                    node_358=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=get_oct_number(info))));
                                    if(right_value509) { right_value509 = come_decrement_ref_count2(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __dec_obj187=node_358;
                                    node_358=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value510=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_358),info))));
                                    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value510) { right_value510 = come_decrement_ref_count2(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __result353__ = __result_obj__ = node_358;
                                    if(node_358) { node_358 = come_decrement_ref_count2(node_358, ((struct sNode*)node_358)->finalize, ((struct sNode*)node_358)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    return __result353__;
                                    if(node_358) { node_358 = come_decrement_ref_count2(node_358, ((struct sNode*)node_358)->finalize, ((struct sNode*)node_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional497=xisdigit(*info->p),                                    _if_conditional497) {
                                        node_359=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=get_number((_Bool)0,info))));
                                        if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        __dec_obj188=node_359;
                                        node_359=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value512=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_359),info))));
                                        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value512) { right_value512 = come_decrement_ref_count2(right_value512, ((struct sNode*)right_value512)->finalize, ((struct sNode*)right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        __result354__ = __result_obj__ = node_359;
                                        if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        return __result354__;
                                        if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional498=*info->p==45&&xisdigit(*(info->p+1)),                                        _if_conditional498) {
                                            info->p++;
                                            node_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value513=get_number((_Bool)1,info))));
                                            if(right_value513) { right_value513 = come_decrement_ref_count2(right_value513, ((struct sNode*)right_value513)->finalize, ((struct sNode*)right_value513)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            __dec_obj189=node_360;
                                            node_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value514=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_360),info))));
                                            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value514) { right_value514 = come_decrement_ref_count2(right_value514, ((struct sNode*)right_value514)->finalize, ((struct sNode*)right_value514)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            __result355__ = __result_obj__ = node_360;
                                            if(node_360) { node_360 = come_decrement_ref_count2(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            return __result355__;
                                            if(node_360) { node_360 = come_decrement_ref_count2(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional499=parsecmp("return",info),                                            _if_conditional499) {
                                                info->p+=strlen("return");
                                                skip_spaces_and_lf(info);
                                                if(_if_conditional500=*info->p==59,                                                _if_conditional500) {
                                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2202, "struct sNode");
                                                    _inf_obj_value9=come_increment_ref_count(((struct sReturnNode*)(right_value517=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value515=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05function.c", 2202, "sReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value516=__builtin_string("0")))),info))));
                                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                                    _inf_value9->finalize=(void*)sReturnNode_finalize;
                                                    _inf_value9->clone=(void*)sReturnNode_clone;
                                                    _inf_value9->compile=(void*)sReturnNode_compile;
                                                    _inf_value9->sline=(void*)sReturnNode_sline;
                                                    _inf_value9->sname=(void*)sReturnNode_sname;
                                                    _inf_value9->terminated=(void*)sReturnNode_terminated;
                                                    _inf_value9->kind=(void*)sReturnNode_kind;
                                                    __result358__ = __result_obj__ = ((struct sNode*)(right_value522=_inf_value9));
                                                    come_call_finalizer2(sReturnNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    right_value516 = come_decrement_ref_count2(right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sReturnNode_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value522) { right_value522 = come_decrement_ref_count2(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result358__;
                                                }
                                                else {
                                                    head_362=info->p;
                                                    value_363=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value523=expression_v13(info))));
                                                    if(right_value523) { right_value523 = come_decrement_ref_count2(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    tail_364=info->p;
                                                    __dec_obj193=value_363;
                                                    value_363=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value524=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_363),info))));
                                                    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value524) { right_value524 = come_decrement_ref_count2(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    __dec_obj194=value_363;
                                                    value_363=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value525=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_363),info))));
                                                    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value525) { right_value525 = come_decrement_ref_count2(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    char buf_365[tail_364-head_362+1];
                                                    memset(&buf_365, 0, sizeof(char)                                                    *(tail_364-head_362+1)                                                    );
                                                    memcpy(buf_365,head_362,tail_364-head_362);
                                                    buf_365[tail_364-head_362]=0;
                                                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2215, "struct sNode");
                                                    _inf_obj_value10=come_increment_ref_count(((struct sReturnNode*)(right_value528=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value526=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05function.c", 2215, "sReturnNode")))),(struct sNode*)come_increment_ref_count(value_363),(char*)come_increment_ref_count(((char*)(right_value527=__builtin_string(buf_365)))),info))));
                                                    _inf_value10->_protocol_obj=_inf_obj_value10;
                                                    _inf_value10->finalize=(void*)sReturnNode_finalize;
                                                    _inf_value10->clone=(void*)sReturnNode_clone;
                                                    _inf_value10->compile=(void*)sReturnNode_compile;
                                                    _inf_value10->sline=(void*)sReturnNode_sline;
                                                    _inf_value10->sname=(void*)sReturnNode_sname;
                                                    _inf_value10->terminated=(void*)sReturnNode_terminated;
                                                    _inf_value10->kind=(void*)sReturnNode_kind;
                                                    __result361__ = __result_obj__ = ((struct sNode*)(right_value533=_inf_value10));
                                                    if(value_363) { value_363 = come_decrement_ref_count2(value_363, ((struct sNode*)value_363)->finalize, ((struct sNode*)value_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer2(sReturnNode_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    right_value527 = come_decrement_ref_count2(right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sReturnNode_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value533) { right_value533 = come_decrement_ref_count2(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result361__;
                                                    if(value_363) { value_363 = come_decrement_ref_count2(value_363, ((struct sNode*)value_363)->finalize, ((struct sNode*)value_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                if(_if_conditional517=parsecmp("return!",info),                                                _if_conditional517) {
                                                    info->p+=strlen("return!");
                                                    skip_spaces_and_lf(info);
                                                    if(_if_conditional518=*info->p==59,                                                    _if_conditional518) {
                                                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2223, "struct sNode");
                                                        _inf_obj_value11=come_increment_ref_count(((struct sParentReturnNode*)(right_value536=sParentReturnNode_initialize((struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value534=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "05function.c", 2223, "sParentReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value535=__builtin_string("0")))),info))));
                                                        _inf_value11->_protocol_obj=_inf_obj_value11;
                                                        _inf_value11->finalize=(void*)sParentReturnNode_finalize;
                                                        _inf_value11->clone=(void*)sParentReturnNode_clone;
                                                        _inf_value11->compile=(void*)sParentReturnNode_compile;
                                                        _inf_value11->sline=(void*)sParentReturnNode_sline;
                                                        _inf_value11->sname=(void*)sParentReturnNode_sname;
                                                        _inf_value11->terminated=(void*)sParentReturnNode_terminated;
                                                        _inf_value11->kind=(void*)sParentReturnNode_kind;
                                                        __result364__ = __result_obj__ = ((struct sNode*)(right_value541=_inf_value11));
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        right_value535 = come_decrement_ref_count2(right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value541) { right_value541 = come_decrement_ref_count2(right_value541, ((struct sNode*)right_value541)->finalize, ((struct sNode*)right_value541)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result364__;
                                                    }
                                                    else {
                                                        head_368=info->p;
                                                        value_369=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value542=expression_v13(info))));
                                                        if(right_value542) { right_value542 = come_decrement_ref_count2(right_value542, ((struct sNode*)right_value542)->finalize, ((struct sNode*)right_value542)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        tail_370=info->p;
                                                        __dec_obj201=value_369;
                                                        value_369=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value543=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_369),info))));
                                                        if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value543) { right_value543 = come_decrement_ref_count2(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        __dec_obj202=value_369;
                                                        value_369=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value544=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_369),info))));
                                                        if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value544) { right_value544 = come_decrement_ref_count2(right_value544, ((struct sNode*)right_value544)->finalize, ((struct sNode*)right_value544)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        char buf_371[tail_370-head_368+1];
                                                        memset(&buf_371, 0, sizeof(char)                                                        *(tail_370-head_368+1)                                                        );
                                                        memcpy(buf_371,head_368,tail_370-head_368);
                                                        buf_371[tail_370-head_368]=0;
                                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2236, "struct sNode");
                                                        _inf_obj_value12=come_increment_ref_count(((struct sParentReturnNode*)(right_value547=sParentReturnNode_initialize((struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value545=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "05function.c", 2236, "sParentReturnNode")))),(struct sNode*)come_increment_ref_count(value_369),(char*)come_increment_ref_count(((char*)(right_value546=__builtin_string(buf_371)))),info))));
                                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                                        _inf_value12->finalize=(void*)sParentReturnNode_finalize;
                                                        _inf_value12->clone=(void*)sParentReturnNode_clone;
                                                        _inf_value12->compile=(void*)sParentReturnNode_compile;
                                                        _inf_value12->sline=(void*)sParentReturnNode_sline;
                                                        _inf_value12->sname=(void*)sParentReturnNode_sname;
                                                        _inf_value12->terminated=(void*)sParentReturnNode_terminated;
                                                        _inf_value12->kind=(void*)sParentReturnNode_kind;
                                                        __result367__ = __result_obj__ = ((struct sNode*)(right_value552=_inf_value12));
                                                        if(value_369) { value_369 = come_decrement_ref_count2(value_369, ((struct sNode*)value_369)->finalize, ((struct sNode*)value_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        right_value546 = come_decrement_ref_count2(right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value552) { right_value552 = come_decrement_ref_count2(right_value552, ((struct sNode*)right_value552)->finalize, ((struct sNode*)right_value552)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result367__;
                                                        if(value_369) { value_369 = come_decrement_ref_count2(value_369, ((struct sNode*)value_369)->finalize, ((struct sNode*)value_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional535=parsecmp("break!",info),                                                    _if_conditional535) {
                                                        info->p+=strlen("break!");
                                                        skip_spaces_and_lf(info);
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2243, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sParentBreakNode*)(right_value554=sParentBreakNode_initialize((struct sParentBreakNode*)come_increment_ref_count(((struct sParentBreakNode*)(right_value553=(struct sParentBreakNode*)come_calloc(1, sizeof(struct sParentBreakNode)*(1), "05function.c", 2243, "sParentBreakNode")))),info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sParentBreakNode_finalize;
                                                        _inf_value13->clone=(void*)sParentBreakNode_clone;
                                                        _inf_value13->compile=(void*)sParentBreakNode_compile;
                                                        _inf_value13->sline=(void*)sParentBreakNode_sline;
                                                        _inf_value13->sname=(void*)sParentBreakNode_sname;
                                                        _inf_value13->terminated=(void*)sParentBreakNode_terminated;
                                                        _inf_value13->kind=(void*)sParentBreakNode_kind;
                                                        __result370__ = __result_obj__ = ((struct sNode*)(right_value557=_inf_value13));
                                                        come_call_finalizer2(sParentBreakNode_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentBreakNode_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value557) { right_value557 = come_decrement_ref_count2(right_value557, ((struct sNode*)right_value557)->finalize, ((struct sNode*)right_value557)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result370__;
                                                    }
                                                    else {
                                                        if(_if_conditional540=parsecmp("continue!",info),                                                        _if_conditional540) {
                                                            info->p+=strlen("continue!");
                                                            skip_spaces_and_lf(info);
                                                            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2249, "struct sNode");
                                                            _inf_obj_value14=come_increment_ref_count(((struct sParentContinueNode*)(right_value559=sParentContinueNode_initialize((struct sParentContinueNode*)come_increment_ref_count(((struct sParentContinueNode*)(right_value558=(struct sParentContinueNode*)come_calloc(1, sizeof(struct sParentContinueNode)*(1), "05function.c", 2249, "sParentContinueNode")))),info))));
                                                            _inf_value14->_protocol_obj=_inf_obj_value14;
                                                            _inf_value14->finalize=(void*)sParentContinueNode_finalize;
                                                            _inf_value14->clone=(void*)sParentContinueNode_clone;
                                                            _inf_value14->compile=(void*)sParentContinueNode_compile;
                                                            _inf_value14->sline=(void*)sParentContinueNode_sline;
                                                            _inf_value14->sname=(void*)sParentContinueNode_sname;
                                                            _inf_value14->terminated=(void*)sParentContinueNode_terminated;
                                                            _inf_value14->kind=(void*)sParentContinueNode_kind;
                                                            __result373__ = __result_obj__ = ((struct sNode*)(right_value562=_inf_value14));
                                                            come_call_finalizer2(sParentContinueNode_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(sParentContinueNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value562) { right_value562 = come_decrement_ref_count2(right_value562, ((struct sNode*)right_value562)->finalize, ((struct sNode*)right_value562)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result373__;
                                                        }
                                                        else {
                                                            if(_if_conditional545=(*info->p==92&&*(info->p+1)==42)||*info->p==42,                                                            _if_conditional545) {
                                                                if(_if_conditional546=*info->p==92,                                                                _if_conditional546) {
                                                                    info->p+=2;
                                                                    skip_spaces_and_lf(info);
                                                                    quote_375=(_Bool)1;
                                                                }
                                                                else {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    quote_375=(_Bool)0;
                                                                }
                                                                no_assign_376=info->no_assign;
                                                                info->no_assign=(_Bool)1;
                                                                value_377=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value563=expression_node_v99(info))));
                                                                if(right_value563) { right_value563 = come_decrement_ref_count2(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                info->no_assign=no_assign_376;
                                                                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2270, "struct sNode");
                                                                _inf_obj_value15=come_increment_ref_count(((struct sDerefferenceNode*)(right_value565=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value564=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05function.c", 2269, "sDerefferenceNode")))),(struct sNode*)come_increment_ref_count(value_377),quote_375,info))));
                                                                _inf_value15->_protocol_obj=_inf_obj_value15;
                                                                _inf_value15->finalize=(void*)sDerefferenceNode_finalize;
                                                                _inf_value15->clone=(void*)sDerefferenceNode_clone;
                                                                _inf_value15->compile=(void*)sDerefferenceNode_compile;
                                                                _inf_value15->sline=(void*)sDerefferenceNode_sline;
                                                                _inf_value15->sname=(void*)sDerefferenceNode_sname;
                                                                _inf_value15->terminated=(void*)sDerefferenceNode_terminated;
                                                                _inf_value15->kind=(void*)sDerefferenceNode_kind;
                                                                __result376__ = __result_obj__ = ((struct sNode*)(right_value569=_inf_value15));
                                                                if(value_377) { value_377 = come_decrement_ref_count2(value_377, ((struct sNode*)value_377)->finalize, ((struct sNode*)value_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                come_call_finalizer2(sDerefferenceNode_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(sDerefferenceNode_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(right_value569) { right_value569 = come_decrement_ref_count2(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result376__;
                                                                if(value_377) { value_377 = come_decrement_ref_count2(value_377, ((struct sNode*)value_377)->finalize, ((struct sNode*)value_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                if(_if_conditional554=*info->p==38&&refference_344,                                                                _if_conditional554) {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    value_379=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value570=expression_node_v99(info))));
                                                                    if(right_value570) { right_value570 = come_decrement_ref_count2(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2277, "struct sNode");
                                                                    _inf_obj_value16=come_increment_ref_count(((struct sRefferenceNode*)(right_value572=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value571=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05function.c", 2277, "sRefferenceNode")))),(struct sNode*)come_increment_ref_count(value_379),info))));
                                                                    _inf_value16->_protocol_obj=_inf_obj_value16;
                                                                    _inf_value16->finalize=(void*)sRefferenceNode_finalize;
                                                                    _inf_value16->clone=(void*)sRefferenceNode_clone;
                                                                    _inf_value16->compile=(void*)sRefferenceNode_compile;
                                                                    _inf_value16->sline=(void*)sRefferenceNode_sline;
                                                                    _inf_value16->sname=(void*)sRefferenceNode_sname;
                                                                    _inf_value16->terminated=(void*)sRefferenceNode_terminated;
                                                                    _inf_value16->kind=(void*)sRefferenceNode_kind;
                                                                    __result379__ = __result_obj__ = ((struct sNode*)(right_value576=_inf_value16));
                                                                    if(value_379) { value_379 = come_decrement_ref_count2(value_379, ((struct sNode*)value_379)->finalize, ((struct sNode*)value_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    come_call_finalizer2(sRefferenceNode_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(sRefferenceNode_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(right_value576) { right_value576 = come_decrement_ref_count2(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    return __result379__;
                                                                    if(value_379) { value_379 = come_decrement_ref_count2(value_379, ((struct sNode*)value_379)->finalize, ((struct sNode*)value_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                                else {
                                                                    if(_if_conditional561=*info->p==33,                                                                    _if_conditional561) {
                                                                        info->p++;
                                                                        skip_spaces_and_lf(info);
                                                                        value_381=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value577=expression_node_v99(info))));
                                                                        if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2285, "struct sNode");
                                                                        _inf_obj_value17=come_increment_ref_count(((struct sReverseNode*)(right_value579=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value578=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05function.c", 2285, "sReverseNode")))),(struct sNode*)come_increment_ref_count(value_381),info))));
                                                                        _inf_value17->_protocol_obj=_inf_obj_value17;
                                                                        _inf_value17->finalize=(void*)sReverseNode_finalize;
                                                                        _inf_value17->clone=(void*)sReverseNode_clone;
                                                                        _inf_value17->compile=(void*)sReverseNode_compile;
                                                                        _inf_value17->sline=(void*)sReverseNode_sline;
                                                                        _inf_value17->sname=(void*)sReverseNode_sname;
                                                                        _inf_value17->terminated=(void*)sReverseNode_terminated;
                                                                        _inf_value17->kind=(void*)sReverseNode_kind;
                                                                        __result382__ = __result_obj__ = ((struct sNode*)(right_value583=_inf_value17));
                                                                        if(value_381) { value_381 = come_decrement_ref_count2(value_381, ((struct sNode*)value_381)->finalize, ((struct sNode*)value_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        come_call_finalizer2(sReverseNode_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sReverseNode_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value583) { right_value583 = come_decrement_ref_count2(right_value583, ((struct sNode*)right_value583)->finalize, ((struct sNode*)right_value583)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result382__;
                                                                        if(value_381) { value_381 = come_decrement_ref_count2(value_381, ((struct sNode*)value_381)->finalize, ((struct sNode*)value_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                    else {
                                                                        if(_if_conditional568=(xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34),                                                                        _if_conditional568) {
                                                                            head_383=info->p;
                                                                            head_sline_384=info->sline;
                                                                            {
                                                                                p_386=info->p;
                                                                                sline_387=info->sline;
                                                                                if(_if_conditional569=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional569) {
                                                                                    __dec_obj214=buf_385;
                                                                                    buf_385=(char*)come_increment_ref_count(((char*)(right_value584=parse_word(info))));
                                                                                    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value584 = come_decrement_ref_count2(right_value584, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    __dec_obj215=buf_385;
                                                                                    buf_385=(char*)come_increment_ref_count(((char*)(right_value585=__builtin_string(""))));
                                                                                    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value585 = come_decrement_ref_count2(right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                info->p=p_386;
                                                                                info->sline=sline_387;
                                                                            }
                                                                            is_type_name__388=is_type_name(buf_385,info);
                                                                            define_function_pointer_flag_389=(_Bool)0;
                                                                            if(_if_conditional570=string_operator_not_equals(buf_385,"if")&&string_operator_not_equals(buf_385,"while")&&string_operator_not_equals(buf_385,"for")&&string_operator_not_equals(buf_385,"switch")&&string_operator_not_equals(buf_385,"return")&&string_operator_not_equals(buf_385,"sizeof")&&string_operator_not_equals(buf_385,"isheap")&&string_operator_not_equals(buf_385,"__typeof__")&&string_operator_not_equals(buf_385,"dynamic_typeof")&&string_operator_not_equals(buf_385,"typeof")&&string_operator_not_equals(buf_385,"gc_inc")&&string_operator_not_equals(buf_385,"gc_dec")&&string_operator_not_equals(buf_385,"case")&&string_operator_not_equals(buf_385,"_Alignof")&&string_operator_not_equals(buf_385,"_Alignas")&&string_operator_not_equals(buf_385,"__alignof__")&&*info->p==40&&*(info->p+1)!=42,                                                                            _if_conditional570) {
                                                                                backtrace_parse_type(info);
                                                                                if(_if_conditional571=*info->p==40,                                                                                _if_conditional571) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                    if(_if_conditional572=*info->p==42,                                                                                    _if_conditional572) {
                                                                                        info->p++;
                                                                                        skip_spaces_and_lf(info);
                                                                                        define_function_pointer_flag_389=(_Bool)1;
                                                                                    }
                                                                                }
                                                                                info->p=head_383;
                                                                                info->sline=head_sline_384;
                                                                            }
                                                                            lambda_flag_390=(_Bool)0;
                                                                            if(_if_conditional573=string_operator_not_equals(buf_385,"if")&&string_operator_not_equals(buf_385,"while")&&string_operator_not_equals(buf_385,"for")&&string_operator_not_equals(buf_385,"switch")&&string_operator_not_equals(buf_385,"return")&&string_operator_not_equals(buf_385,"sizeof")&&string_operator_not_equals(buf_385,"_Alignof")&&string_operator_not_equals(buf_385,"__alignof__")&&string_operator_not_equals(buf_385,"_Alignas")&&string_operator_not_equals(buf_385,"isheap")&&string_operator_not_equals(buf_385,"__typeof__")&&string_operator_not_equals(buf_385,"dynamic_typeof")&&string_operator_not_equals(buf_385,"typeof")&&string_operator_not_equals(buf_385,"gc_inc")&&string_operator_not_equals(buf_385,"gc_dec")&&string_operator_not_equals(buf_385,"case")&&is_type_name__388,                                                                            _if_conditional573) {
                                                                                info->p=head_383;
                                                                                info->sline=head_sline_384;
                                                                                backtrace_parse_type(info);
                                                                                if(_if_conditional574=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional574) {
                                                                                    word2_391=(char*)come_increment_ref_count(((char*)(right_value586=parse_word(info))));
                                                                                    right_value586 = come_decrement_ref_count2(right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional575=string_operator_equals(word2_391,"lambda"),                                                                                    _if_conditional575) {
                                                                                        lambda_flag_390=(_Bool)1;
                                                                                    }
                                                                                    word2_391 = come_decrement_ref_count2(word2_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                info->p=head_383;
                                                                                info->sline=head_sline_384;
                                                                            }
                                                                            fun_name_with_type_name_392=(_Bool)0;
                                                                            if(_if_conditional576=string_operator_not_equals(buf_385,"if")&&string_operator_not_equals(buf_385,"while")&&string_operator_not_equals(buf_385,"for")&&string_operator_not_equals(buf_385,"switch")&&string_operator_not_equals(buf_385,"return")&&string_operator_not_equals(buf_385,"sizeof")&&string_operator_not_equals(buf_385,"_Alignof")&&string_operator_not_equals(buf_385,"__alignof__")&&string_operator_not_equals(buf_385,"_Alignas")&&string_operator_not_equals(buf_385,"isheap")&&string_operator_not_equals(buf_385,"dynamic_typeof")&&string_operator_not_equals(buf_385,"__typeof__")&&string_operator_not_equals(buf_385,"typeof")&&string_operator_not_equals(buf_385,"gc_inc")&&string_operator_not_equals(buf_385,"gc_dec")&&string_operator_not_equals(buf_385,"case"),                                                                            _if_conditional576) {
                                                                                info->p=head_383;
                                                                                info->sline=head_sline_384;
                                                                                info->no_output_err=(_Bool)1;
                                                                                if(_if_conditional577=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional577) {
                                                                                    word2_393=(char*)come_increment_ref_count(((char*)(right_value587=parse_word(info))));
                                                                                    right_value587 = come_decrement_ref_count2(right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    word2_393 = come_decrement_ref_count2(word2_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                while(_while_condtional33=*info->p==42,                                                                                _while_condtional33) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                }
                                                                                if(_if_conditional578=*info->p==58&&*(info->p+1)==58,                                                                                _if_conditional578) {
                                                                                    info->p+=2;
                                                                                    skip_spaces_and_lf(info);
                                                                                    if(_if_conditional579=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional579) {
                                                                                        fun_name_with_type_name_392=(_Bool)1;
                                                                                    }
                                                                                }
                                                                                info->no_output_err=(_Bool)0;
                                                                                info->p=head_383;
                                                                                info->sline=head_sline_384;
                                                                            }
                                                                            __dec_obj216=buf_385;
                                                                            buf_385=(char*)come_increment_ref_count(((char*)(right_value588=parse_word(info))));
                                                                            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value588 = come_decrement_ref_count2(right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(lambda_flag_390) {
                                                                                info->p=head_383;
                                                                                info->sline=head_sline_384;
                                                                                __result383__ = __result_obj__ = ((struct sNode*)(right_value589=parse_function(info)));
                                                                                buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result383__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional581=(string_operator_equals(buf_385,"string")||string_operator_equals(buf_385,"wstring"))&&*info->p==40,                                                                                _if_conditional581) {
                                                                                    node_394=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value590=parse_function_call(buf_385,info))));
                                                                                    if(right_value590) { right_value590 = come_decrement_ref_count2(right_value590, ((struct sNode*)right_value590)->finalize, ((struct sNode*)right_value590)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj217=node_394;
                                                                                    node_394=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value591=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_394),info))));
                                                                                    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value591) { right_value591 = come_decrement_ref_count2(right_value591, ((struct sNode*)right_value591)->finalize, ((struct sNode*)right_value591)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj218=node_394;
                                                                                    node_394=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value592=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_394),info))));
                                                                                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value592) { right_value592 = come_decrement_ref_count2(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __result384__ = __result_obj__ = node_394;
                                                                                    if(node_394) { node_394 = come_decrement_ref_count2(node_394, ((struct sNode*)node_394)->finalize, ((struct sNode*)node_394)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                    buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    return __result384__;
                                                                                    if(node_394) { node_394 = come_decrement_ref_count2(node_394, ((struct sNode*)node_394)->finalize, ((struct sNode*)node_394)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional582=string_operator_equals(buf_385,"__func__"),                                                                                    _if_conditional582) {
                                                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2400, "struct sNode");
                                                                                        _inf_obj_value18=come_increment_ref_count(((struct sFuncNode*)(right_value594=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value593=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05function.c", 2400, "sFuncNode")))),info))));
                                                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                                                        _inf_value18->finalize=(void*)sFuncNode_finalize;
                                                                                        _inf_value18->clone=(void*)sFuncNode_clone;
                                                                                        _inf_value18->compile=(void*)sFuncNode_compile;
                                                                                        _inf_value18->sline=(void*)sFuncNode_sline;
                                                                                        _inf_value18->sname=(void*)sFuncNode_sname;
                                                                                        _inf_value18->terminated=(void*)sFuncNode_terminated;
                                                                                        _inf_value18->kind=(void*)sFuncNode_kind;
                                                                                        __result387__ = __result_obj__ = ((struct sNode*)(right_value599=_inf_value18));
                                                                                        buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sFuncNode_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sFuncNode_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value599) { right_value599 = come_decrement_ref_count2(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result387__;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional591=string_operator_equals(buf_385,"__line__"),                                                                                        _if_conditional591) {
                                                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2403, "struct sNode");
                                                                                            _inf_obj_value19=come_increment_ref_count(((struct sLineNode*)(right_value601=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value600=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05function.c", 2403, "sLineNode")))),info))));
                                                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                                                            _inf_value19->finalize=(void*)sLineNode_finalize;
                                                                                            _inf_value19->clone=(void*)sLineNode_clone;
                                                                                            _inf_value19->compile=(void*)sLineNode_compile;
                                                                                            _inf_value19->sline=(void*)sLineNode_sline;
                                                                                            _inf_value19->sname=(void*)sLineNode_sname;
                                                                                            _inf_value19->terminated=(void*)sLineNode_terminated;
                                                                                            _inf_value19->kind=(void*)sLineNode_kind;
                                                                                            __result390__ = __result_obj__ = ((struct sNode*)(right_value606=_inf_value19));
                                                                                            buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sLineNode_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sLineNode_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value606) { right_value606 = come_decrement_ref_count2(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result390__;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional600=string_operator_equals(buf_385,"__sname__"),                                                                                            _if_conditional600) {
                                                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2406, "struct sNode");
                                                                                                _inf_obj_value20=come_increment_ref_count(((struct sSNameNode*)(right_value608=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value607=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05function.c", 2406, "sSNameNode")))),info))));
                                                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                                                _inf_value20->finalize=(void*)sSNameNode_finalize;
                                                                                                _inf_value20->clone=(void*)sSNameNode_clone;
                                                                                                _inf_value20->compile=(void*)sSNameNode_compile;
                                                                                                _inf_value20->sline=(void*)sSNameNode_sline;
                                                                                                _inf_value20->sname=(void*)sSNameNode_sname;
                                                                                                _inf_value20->terminated=(void*)sSNameNode_terminated;
                                                                                                _inf_value20->kind=(void*)sSNameNode_kind;
                                                                                                __result393__ = __result_obj__ = ((struct sNode*)(right_value613=_inf_value20));
                                                                                                buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sSNameNode_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                come_call_finalizer2(sSNameNode_finalize,right_value608, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(right_value613) { right_value613 = come_decrement_ref_count2(right_value613, ((struct sNode*)right_value613)->finalize, ((struct sNode*)right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                return __result393__;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional609=string_operator_equals(buf_385,"__caller_func__"),                                                                                                _if_conditional609) {
                                                                                                    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2409, "struct sNode");
                                                                                                    _inf_obj_value21=come_increment_ref_count(((struct sCallerFuncNode*)(right_value615=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value614=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05function.c", 2409, "sCallerFuncNode")))),info))));
                                                                                                    _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                                                    _inf_value21->finalize=(void*)sCallerFuncNode_finalize;
                                                                                                    _inf_value21->clone=(void*)sCallerFuncNode_clone;
                                                                                                    _inf_value21->compile=(void*)sCallerFuncNode_compile;
                                                                                                    _inf_value21->sline=(void*)sCallerFuncNode_sline;
                                                                                                    _inf_value21->sname=(void*)sCallerFuncNode_sname;
                                                                                                    _inf_value21->terminated=(void*)sCallerFuncNode_terminated;
                                                                                                    _inf_value21->kind=(void*)sCallerFuncNode_kind;
                                                                                                    __result396__ = __result_obj__ = ((struct sNode*)(right_value620=_inf_value21));
                                                                                                    buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer2(sCallerFuncNode_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    come_call_finalizer2(sCallerFuncNode_finalize,right_value615, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(right_value620) { right_value620 = come_decrement_ref_count2(right_value620, ((struct sNode*)right_value620)->finalize, ((struct sNode*)right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    return __result396__;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional618=string_operator_equals(buf_385,"__caller_line__"),                                                                                                    _if_conditional618) {
                                                                                                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2412, "struct sNode");
                                                                                                        _inf_obj_value22=come_increment_ref_count(((struct sCallerLineNode*)(right_value622=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value621=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05function.c", 2412, "sCallerLineNode")))),info))));
                                                                                                        _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                                        _inf_value22->finalize=(void*)sCallerLineNode_finalize;
                                                                                                        _inf_value22->clone=(void*)sCallerLineNode_clone;
                                                                                                        _inf_value22->compile=(void*)sCallerLineNode_compile;
                                                                                                        _inf_value22->sline=(void*)sCallerLineNode_sline;
                                                                                                        _inf_value22->sname=(void*)sCallerLineNode_sname;
                                                                                                        _inf_value22->terminated=(void*)sCallerLineNode_terminated;
                                                                                                        _inf_value22->kind=(void*)sCallerLineNode_kind;
                                                                                                        __result399__ = __result_obj__ = ((struct sNode*)(right_value627=_inf_value22));
                                                                                                        buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        come_call_finalizer2(sCallerLineNode_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        come_call_finalizer2(sCallerLineNode_finalize,right_value622, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(right_value627) { right_value627 = come_decrement_ref_count2(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        return __result399__;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(_if_conditional627=string_operator_equals(buf_385,"__caller_sname__"),                                                                                                        _if_conditional627) {
                                                                                                            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2415, "struct sNode");
                                                                                                            _inf_obj_value23=come_increment_ref_count(((struct sCallerSNameNode*)(right_value629=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value628=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05function.c", 2415, "sCallerSNameNode")))),info))));
                                                                                                            _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                                            _inf_value23->finalize=(void*)sCallerSNameNode_finalize;
                                                                                                            _inf_value23->clone=(void*)sCallerSNameNode_clone;
                                                                                                            _inf_value23->compile=(void*)sCallerSNameNode_compile;
                                                                                                            _inf_value23->sline=(void*)sCallerSNameNode_sline;
                                                                                                            _inf_value23->sname=(void*)sCallerSNameNode_sname;
                                                                                                            _inf_value23->terminated=(void*)sCallerSNameNode_terminated;
                                                                                                            _inf_value23->kind=(void*)sCallerSNameNode_kind;
                                                                                                            __result402__ = __result_obj__ = ((struct sNode*)(right_value634=_inf_value23));
                                                                                                            buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            come_call_finalizer2(sCallerSNameNode_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            come_call_finalizer2(sCallerSNameNode_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            if(right_value634) { right_value634 = come_decrement_ref_count2(right_value634, ((struct sNode*)right_value634)->finalize, ((struct sNode*)right_value634)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                            return __result402__;
                                                                                                        }
                                                                                                        else {
                                                                                                            if(_if_conditional636=(string_operator_equals(buf_385,"sizeof")||string_operator_equals(buf_385,"_Alignof")||string_operator_equals(buf_385,"_Alignas")||string_operator_equals(buf_385,"__alignof__"))&&*info->p==40,                                                                                                            _if_conditional636) {
                                                                                                                node_401=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value635=string_node_v21(buf_385,head_383,head_sline_384,info))));
                                                                                                                if(right_value635) { right_value635 = come_decrement_ref_count2(right_value635, ((struct sNode*)right_value635)->finalize, ((struct sNode*)right_value635)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                __dec_obj237=node_401;
                                                                                                                node_401=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value636=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_401),info))));
                                                                                                                if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                if(right_value636) { right_value636 = come_decrement_ref_count2(right_value636, ((struct sNode*)right_value636)->finalize, ((struct sNode*)right_value636)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                __result403__ = __result_obj__ = node_401;
                                                                                                                if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                return __result403__;
                                                                                                                if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                            }
                                                                                                            else {
                                                                                                                if(fun_name_with_type_name_392) {
                                                                                                                    fun_name_402=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value638=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value637=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2425, "buffer"))))))));
                                                                                                                    come_call_finalizer2(buffer_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(buffer_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    buffer_append_str(fun_name_402,buf_385);
                                                                                                                    type_406=(struct sType*)come_increment_ref_count(((struct sType*)(right_value640=sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(right_value639=buffer_to_string(fun_name_402))))))));
                                                                                                                    right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(sType_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    if(_if_conditional642=type_406==((void*)0),                                                                                                                    _if_conditional642) {
                                                                                                                        klass_412=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value641=buffer_to_string(fun_name_402))));
                                                                                                                        right_value641 = come_decrement_ref_count2(right_value641, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        if(klass_412) {
                                                                                                                            __dec_obj238=type_406;
                                                                                                                            type_406=(struct sType*)come_increment_ref_count(((struct sType*)(right_value643=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value642=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2435, "sType")))),buf_385,(_Bool)0,info))));
                                                                                                                            come_call_finalizer2(sType_finalize,__dec_obj238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                            come_call_finalizer2(sType_finalize,right_value642, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                            come_call_finalizer2(sType_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        }
                                                                                                                        else {
                                                                                                                            err_msg(info,"null type(%s)",buf_385);
                                                                                                                            exit(2);
                                                                                                                        }
                                                                                                                    }
                                                                                                                    while(_while_condtional37=*info->p==42,                                                                                                                    _while_condtional37) {
                                                                                                                        info->p++;
                                                                                                                        skip_spaces_and_lf(info);
                                                                                                                        if(_if_conditional654=type_406->mClass->mStruct==(_Bool)0,                                                                                                                        _if_conditional654) {
                                                                                                                            buffer_append_str(fun_name_402,"p");
                                                                                                                        }
                                                                                                                    }
                                                                                                                    expected_next_character(58,info);
                                                                                                                    expected_next_character(58,info);
                                                                                                                    buffer_append_str(fun_name_402,"_");
                                                                                                                    buf2_413=(char*)come_increment_ref_count(((char*)(right_value644=parse_word(info))));
                                                                                                                    right_value644 = come_decrement_ref_count2(right_value644, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    buffer_append_str(fun_name_402,buf2_413);
                                                                                                                    node_414=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value646=parse_function_call(((char*)(right_value645=buffer_to_string(fun_name_402))),info))));
                                                                                                                    right_value645 = come_decrement_ref_count2(right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    if(right_value646) { right_value646 = come_decrement_ref_count2(right_value646, ((struct sNode*)right_value646)->finalize, ((struct sNode*)right_value646)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __dec_obj239=node_414;
                                                                                                                    node_414=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value647=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_414),info))));
                                                                                                                    if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value647) { right_value647 = come_decrement_ref_count2(right_value647, ((struct sNode*)right_value647)->finalize, ((struct sNode*)right_value647)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __dec_obj240=node_414;
                                                                                                                    node_414=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value648=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_414),info))));
                                                                                                                    if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value648) { right_value648 = come_decrement_ref_count2(right_value648, ((struct sNode*)right_value648)->finalize, ((struct sNode*)right_value648)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __result412__ = __result_obj__ = node_414;
                                                                                                                    come_call_finalizer2(buffer_finalize,fun_name_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    come_call_finalizer2(sType_finalize,type_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    buf2_413 = come_decrement_ref_count2(buf2_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                    buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    return __result412__;
                                                                                                                    come_call_finalizer2(buffer_finalize,fun_name_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    come_call_finalizer2(sType_finalize,type_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    buf2_413 = come_decrement_ref_count2(buf2_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                }
                                                                                                                else {
                                                                                                                    if(_if_conditional655=*info->p==58&&*(info->p+1)==58,                                                                                                                    _if_conditional655) {
                                                                                                                        info->p+=2;
                                                                                                                        skip_spaces_and_lf(info);
                                                                                                                        fun_name_415=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value650=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value649=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2472, "buffer"))))))));
                                                                                                                        come_call_finalizer2(buffer_finalize,right_value649, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        come_call_finalizer2(buffer_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        buffer_append_str(fun_name_415,buf_385);
                                                                                                                        buffer_append_str(fun_name_415,"_");
                                                                                                                        buf2_416=(char*)come_increment_ref_count(((char*)(right_value651=parse_word(info))));
                                                                                                                        right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        buffer_append_str(fun_name_415,buf2_416);
                                                                                                                        node_417=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value653=parse_function_call(((char*)(right_value652=buffer_to_string(fun_name_415))),info))));
                                                                                                                        right_value652 = come_decrement_ref_count2(right_value652, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        if(right_value653) { right_value653 = come_decrement_ref_count2(right_value653, ((struct sNode*)right_value653)->finalize, ((struct sNode*)right_value653)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __dec_obj241=node_417;
                                                                                                                        node_417=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value654=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_417),info))));
                                                                                                                        if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                        if(right_value654) { right_value654 = come_decrement_ref_count2(right_value654, ((struct sNode*)right_value654)->finalize, ((struct sNode*)right_value654)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __dec_obj242=node_417;
                                                                                                                        node_417=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value655=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_417),info))));
                                                                                                                        if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                        if(right_value655) { right_value655 = come_decrement_ref_count2(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __result413__ = __result_obj__ = node_417;
                                                                                                                        come_call_finalizer2(buffer_finalize,fun_name_415, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                        buf2_416 = come_decrement_ref_count2(buf2_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        if(node_417) { node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                        buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        return __result413__;
                                                                                                                        come_call_finalizer2(buffer_finalize,fun_name_415, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                        buf2_416 = come_decrement_ref_count2(buf2_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        if(node_417) { node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                    }
                                                                                                                    else {
                                                                                                                        if(_if_conditional656=string_operator_not_equals(buf_385,"if")&&string_operator_not_equals(buf_385,"while")&&string_operator_not_equals(buf_385,"for")&&string_operator_not_equals(buf_385,"switch")&&string_operator_not_equals(buf_385,"return")&&string_operator_not_equals(buf_385,"sizeof")&&string_operator_not_equals(buf_385,"isheap")&&string_operator_not_equals(buf_385,"__typeof__")&&string_operator_not_equals(buf_385,"dynamic_typeof")&&string_operator_not_equals(buf_385,"typeof")&&string_operator_not_equals(buf_385,"gc_inc")&&string_operator_not_equals(buf_385,"gc_dec")&&string_operator_not_equals(buf_385,"case")&&string_operator_not_equals(buf_385,"_Alignof")&&string_operator_not_equals(buf_385,"__alignof__")&&string_operator_not_equals(buf_385,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__388),                                                                                                                        _if_conditional656) {
                                                                                                                            node_418=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value656=parse_function_call(buf_385,info))));
                                                                                                                            if(right_value656) { right_value656 = come_decrement_ref_count2(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj243=node_418;
                                                                                                                            node_418=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value657=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_418),info))));
                                                                                                                            if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value657) { right_value657 = come_decrement_ref_count2(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj244=node_418;
                                                                                                                            node_418=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value658=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_418),info))));
                                                                                                                            if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value658) { right_value658 = come_decrement_ref_count2(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __result414__ = __result_obj__ = node_418;
                                                                                                                            if(node_418) { node_418 = come_decrement_ref_count2(node_418, ((struct sNode*)node_418)->finalize, ((struct sNode*)node_418)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                            buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                            return __result414__;
                                                                                                                            if(node_418) { node_418 = come_decrement_ref_count2(node_418, ((struct sNode*)node_418)->finalize, ((struct sNode*)node_418)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                        }
                                                                                                                        else {
                                                                                                                            node_419=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value659=string_node_v21(buf_385,head_383,head_sline_384,info))));
                                                                                                                            if(right_value659) { right_value659 = come_decrement_ref_count2(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj245=node_419;
                                                                                                                            node_419=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value660=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_419),info))));
                                                                                                                            if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value660) { right_value660 = come_decrement_ref_count2(right_value660, ((struct sNode*)right_value660)->finalize, ((struct sNode*)right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __result415__ = __result_obj__ = node_419;
                                                                                                                            if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                            buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                            return __result415__;
                                                                                                                            if(node_419) { node_419 = come_decrement_ref_count2(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                                                                            buf_385 = come_decrement_ref_count2(buf_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            if(_if_conditional657=*info->p==40,                                                                            _if_conditional657) {
                                                                                info->p++;
                                                                                skip_spaces_and_lf(info);
                                                                                cast_expression_flag_420=(_Bool)0;
                                                                                {
                                                                                    p_421=info->p;
                                                                                    sline_422=info->sline;
                                                                                    word_423=(char*)come_increment_ref_count(((char*)(right_value661=__builtin_string(""))));
                                                                                    right_value661 = come_decrement_ref_count2(right_value661, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional658=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional658) {
                                                                                        __dec_obj246=word_423;
                                                                                        word_423=(char*)come_increment_ref_count(((char*)(right_value662=parse_word(info))));
                                                                                        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value662 = come_decrement_ref_count2(right_value662, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    if(_if_conditional659=is_type_name(word_423,info),                                                                                    _if_conditional659) {
                                                                                        cast_expression_flag_420=(_Bool)1;
                                                                                    }
                                                                                    info->p=p_421;
                                                                                    info->sline=sline_422;
                                                                                    word_423 = come_decrement_ref_count2(word_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                tuple_expression_flag_424=(_Bool)0;
                                                                                {
                                                                                    p_425=info->p;
                                                                                    sline_426=info->sline;
                                                                                    no_comma_427=info->no_comma;
                                                                                    info->no_comma=(_Bool)1;
                                                                                    no_output_err_428=info->no_output_err;
                                                                                    info->no_output_err=(_Bool)1;
                                                                                    no_output_come_code_429=info->no_output_come_code;
                                                                                    info->no_output_come_code=(_Bool)1;
                                                                                    node_430=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value663=expression_v13(info))));
                                                                                    if(right_value663) { right_value663 = come_decrement_ref_count2(right_value663, ((struct sNode*)right_value663)->finalize, ((struct sNode*)right_value663)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    node2_431=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value664=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_430),info))));
                                                                                    if(right_value664) { right_value664 = come_decrement_ref_count2(right_value664, ((struct sNode*)right_value664)->finalize, ((struct sNode*)right_value664)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    info->no_comma=no_comma_427;
                                                                                    info->no_output_err=no_output_err_428;
                                                                                    info->no_output_come_code=no_output_come_code_429;
                                                                                    if(_if_conditional660=*info->p==44,                                                                                    _if_conditional660) {
                                                                                        tuple_expression_flag_424=(_Bool)1;
                                                                                    }
                                                                                    info->p=p_425;
                                                                                    info->sline=sline_426;
                                                                                    if(node_430) { node_430 = come_decrement_ref_count2(node_430, ((struct sNode*)node_430)->finalize, ((struct sNode*)node_430)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    if(node2_431) { node2_431 = come_decrement_ref_count2(node2_431, ((struct sNode*)node2_431)->finalize, ((struct sNode*)node2_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                if(_if_conditional661=!gComeC&&tuple_expression_flag_424,                                                                                _if_conditional661) {
                                                                                    node_432=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value665=parse_tuple(info))));
                                                                                    if(right_value665) { right_value665 = come_decrement_ref_count2(right_value665, ((struct sNode*)right_value665)->finalize, ((struct sNode*)right_value665)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj247=node_432;
                                                                                    node_432=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value666=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_432),info))));
                                                                                    if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value666) { right_value666 = come_decrement_ref_count2(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __result416__ = __result_obj__ = node_432;
                                                                                    if(node_432) { node_432 = come_decrement_ref_count2(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                    return __result416__;
                                                                                    if(node_432) { node_432 = come_decrement_ref_count2(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                else {
                                                                                    if(cast_expression_flag_420) {
                                                                                        parse_sharp_v5(info);
                                                                                        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value667=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_433=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                        name_434=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                        err_435=multiple_assign_var8->v3;
                                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional663=!err_435,                                                                                        _if_conditional663) {
                                                                                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                                                                            exit(2);
                                                                                        }
                                                                                        parse_sharp_v5(info);
                                                                                        expected_next_character(41,info);
                                                                                        node_436=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value668=expression_node_v99(info))));
                                                                                        if(right_value668) { right_value668 = come_decrement_ref_count2(right_value668, ((struct sNode*)right_value668)->finalize, ((struct sNode*)right_value668)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __dec_obj248=node_436;
                                                                                        node_436=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value669=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_436),info))));
                                                                                        if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value669) { right_value669 = come_decrement_ref_count2(right_value669, ((struct sNode*)right_value669)->finalize, ((struct sNode*)right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2580, "struct sNode");
                                                                                        _inf_obj_value24=come_increment_ref_count(((struct sCastNode*)(right_value671=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value670=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05function.c", 2580, "sCastNode")))),type_433,node_436,info))));
                                                                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                        _inf_value24->finalize=(void*)sCastNode_finalize;
                                                                                        _inf_value24->clone=(void*)sCastNode_clone;
                                                                                        _inf_value24->compile=(void*)sCastNode_compile;
                                                                                        _inf_value24->sline=(void*)sCastNode_sline;
                                                                                        _inf_value24->sname=(void*)sCastNode_sname;
                                                                                        _inf_value24->terminated=(void*)sCastNode_terminated;
                                                                                        _inf_value24->kind=(void*)sCastNode_kind;
                                                                                        __result419__ = __result_obj__ = ((struct sNode*)(right_value676=_inf_value24));
                                                                                        come_call_finalizer2(sType_finalize,type_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_434 = come_decrement_ref_count2(name_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        if(node_436) { node_436 = come_decrement_ref_count2(node_436, ((struct sNode*)node_436)->finalize, ((struct sNode*)node_436)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer2(sCastNode_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sCastNode_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value676) { right_value676 = come_decrement_ref_count2(right_value676, ((struct sNode*)right_value676)->finalize, ((struct sNode*)right_value676)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result419__;
                                                                                        come_call_finalizer2(sType_finalize,type_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_434 = come_decrement_ref_count2(name_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        if(node_436) { node_436 = come_decrement_ref_count2(node_436, ((struct sNode*)node_436)->finalize, ((struct sNode*)node_436)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                    else {
                                                                                        parse_sharp_v5(info);
                                                                                        node_438=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value677=expression_v13(info))));
                                                                                        if(right_value677) { right_value677 = come_decrement_ref_count2(right_value677, ((struct sNode*)right_value677)->finalize, ((struct sNode*)right_value677)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        parse_sharp_v5(info);
                                                                                        expected_next_character(41,info);
                                                                                        parse_sharp_v5(info);
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2590, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sParenNode*)(right_value679=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value678=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05function.c", 2590, "sParenNode")))),node_438,info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sParenNode_finalize;
                                                                                        _inf_value25->clone=(void*)sParenNode_clone;
                                                                                        _inf_value25->compile=(void*)sParenNode_compile;
                                                                                        _inf_value25->sline=(void*)sParenNode_sline;
                                                                                        _inf_value25->sname=(void*)sParenNode_sname;
                                                                                        _inf_value25->terminated=(void*)sParenNode_terminated;
                                                                                        _inf_value25->kind=(void*)sParenNode_kind;
                                                                                        __dec_obj254=node_438;
                                                                                        node_438=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value683=_inf_value25)));
                                                                                        if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        come_call_finalizer2(sParenNode_finalize,right_value678, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sParenNode_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value683) { right_value683 = come_decrement_ref_count2(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __dec_obj255=node_438;
                                                                                        node_438=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value684=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_438),info))));
                                                                                        if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value684) { right_value684 = come_decrement_ref_count2(right_value684, ((struct sNode*)right_value684)->finalize, ((struct sNode*)right_value684)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __result422__ = __result_obj__ = node_438;
                                                                                        if(node_438) { node_438 = come_decrement_ref_count2(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                        return __result422__;
                                                                                        if(node_438) { node_438 = come_decrement_ref_count2(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                node_440=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value685=expression_node_v98(info))));
                                                                                if(right_value685) { right_value685 = come_decrement_ref_count2(right_value685, ((struct sNode*)right_value685)->finalize, ((struct sNode*)right_value685)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                __dec_obj256=node_440;
                                                                                node_440=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value686=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_440),info))));
                                                                                if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value686) { right_value686 = come_decrement_ref_count2(right_value686, ((struct sNode*)right_value686)->finalize, ((struct sNode*)right_value686)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                __result423__ = __result_obj__ = node_440;
                                                                                if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result423__;
                                                                                if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result424__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result424__;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional461;
_Bool _if_conditional462;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional461=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional461) {
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional462=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional462) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional463;
struct sLogicalDenial* __result337__;
void* right_value475;
struct sLogicalDenial* result_348;
_Bool _if_conditional464;
void* right_value476;
struct sNode* __dec_obj176;
_Bool _if_conditional465;
_Bool _if_conditional466;
void* right_value477;
char* __dec_obj177;
struct sLogicalDenial* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value475 = (void*)0;
memset(&result_348, 0, sizeof(struct sLogicalDenial*));
right_value476 = (void*)0;
right_value477 = (void*)0;
                if(_if_conditional463=self==(void*)0,                _if_conditional463) {
                    __result337__ = __result_obj__ = (void*)0;
                    return __result337__;
                }
                result_348=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value475=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "sLogicalDenial"))));
                come_call_finalizer2(sLogicalDenial_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional464=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional464) {
                    __dec_obj176=result_348->value;
                    result_348->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=sNode_clone(self->value))));
                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value476) { right_value476 = come_decrement_ref_count2(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional465=self!=((void*)0),                _if_conditional465) {
                    result_348->sline=self->sline;
                }
                if(_if_conditional466=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional466) {
                    __dec_obj177=result_348->sname;
                    result_348->sname=(char*)come_increment_ref_count(((char*)(right_value477=string_clone(self->sname))));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result338__ = __result_obj__ = result_348;
                come_call_finalizer2(sLogicalDenial_finalize,result_348, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result338__;
                come_call_finalizer2(sLogicalDenial_finalize,result_348, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional468;
_Bool _if_conditional469;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional468=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional468) {
                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional469=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional469) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional470;
struct sMinusMinusNode2* __result340__;
void* right_value482;
struct sMinusMinusNode2* result_350;
_Bool _if_conditional471;
void* right_value483;
struct sNode* __dec_obj178;
_Bool _if_conditional472;
_Bool _if_conditional473;
void* right_value484;
char* __dec_obj179;
struct sMinusMinusNode2* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
right_value482 = (void*)0;
memset(&result_350, 0, sizeof(struct sMinusMinusNode2*));
right_value483 = (void*)0;
right_value484 = (void*)0;
                    if(_if_conditional470=self==(void*)0,                    _if_conditional470) {
                        __result340__ = __result_obj__ = (void*)0;
                        return __result340__;
                    }
                    result_350=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value482=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "sMinusMinusNode2"))));
                    come_call_finalizer2(sMinusMinusNode2_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional471=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional471) {
                        __dec_obj178=result_350->value;
                        result_350->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value483=sNode_clone(self->value))));
                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value483) { right_value483 = come_decrement_ref_count2(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional472=self!=((void*)0),                    _if_conditional472) {
                        result_350->sline=self->sline;
                    }
                    if(_if_conditional473=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional473) {
                        __dec_obj179=result_350->sname;
                        result_350->sname=(char*)come_increment_ref_count(((char*)(right_value484=string_clone(self->sname))));
                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result341__ = __result_obj__ = result_350;
                    come_call_finalizer2(sMinusMinusNode2_finalize,result_350, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result341__;
                    come_call_finalizer2(sMinusMinusNode2_finalize,result_350, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional475;
_Bool _if_conditional476;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional475=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional475) {
                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional476=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional476) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional477;
struct sMinusNode2* __result343__;
void* right_value489;
struct sMinusNode2* result_352;
_Bool _if_conditional478;
void* right_value490;
struct sNode* __dec_obj180;
_Bool _if_conditional479;
_Bool _if_conditional480;
void* right_value491;
char* __dec_obj181;
struct sMinusNode2* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
right_value489 = (void*)0;
memset(&result_352, 0, sizeof(struct sMinusNode2*));
right_value490 = (void*)0;
right_value491 = (void*)0;
                        if(_if_conditional477=self==(void*)0,                        _if_conditional477) {
                            __result343__ = __result_obj__ = (void*)0;
                            return __result343__;
                        }
                        result_352=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value489=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "sMinusNode2"))));
                        come_call_finalizer2(sMinusNode2_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional478=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional478) {
                            __dec_obj180=result_352->value;
                            result_352->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value490=sNode_clone(self->value))));
                            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional479=self!=((void*)0),                        _if_conditional479) {
                            result_352->sline=self->sline;
                        }
                        if(_if_conditional480=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional480) {
                            __dec_obj181=result_352->sname;
                            result_352->sname=(char*)come_increment_ref_count(((char*)(right_value491=string_clone(self->sname))));
                            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value491 = come_decrement_ref_count2(right_value491, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result344__ = __result_obj__ = result_352;
                        come_call_finalizer2(sMinusNode2_finalize,result_352, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result344__;
                        come_call_finalizer2(sMinusNode2_finalize,result_352, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional482;
_Bool _if_conditional483;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional482=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional482) {
                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional483=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional483) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional484;
struct sPlusPlusNode2* __result346__;
void* right_value496;
struct sPlusPlusNode2* result_354;
_Bool _if_conditional485;
void* right_value497;
struct sNode* __dec_obj182;
_Bool _if_conditional486;
_Bool _if_conditional487;
void* right_value498;
char* __dec_obj183;
struct sPlusPlusNode2* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
right_value496 = (void*)0;
memset(&result_354, 0, sizeof(struct sPlusPlusNode2*));
right_value497 = (void*)0;
right_value498 = (void*)0;
                            if(_if_conditional484=self==(void*)0,                            _if_conditional484) {
                                __result346__ = __result_obj__ = (void*)0;
                                return __result346__;
                            }
                            result_354=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value496=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "sPlusPlusNode2"))));
                            come_call_finalizer2(sPlusPlusNode2_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional485=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional485) {
                                __dec_obj182=result_354->value;
                                result_354->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value497=sNode_clone(self->value))));
                                if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value497) { right_value497 = come_decrement_ref_count2(right_value497, ((struct sNode*)right_value497)->finalize, ((struct sNode*)right_value497)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional486=self!=((void*)0),                            _if_conditional486) {
                                result_354->sline=self->sline;
                            }
                            if(_if_conditional487=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional487) {
                                __dec_obj183=result_354->sname;
                                result_354->sname=(char*)come_increment_ref_count(((char*)(right_value498=string_clone(self->sname))));
                                __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value498 = come_decrement_ref_count2(right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result347__ = __result_obj__ = result_354;
                            come_call_finalizer2(sPlusPlusNode2_finalize,result_354, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result347__;
                            come_call_finalizer2(sPlusPlusNode2_finalize,result_354, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sComplement_finalize(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional489;
_Bool _if_conditional490;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional489=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional489) {
                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional490=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional490) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional491;
struct sComplement* __result349__;
void* right_value503;
struct sComplement* result_356;
_Bool _if_conditional492;
void* right_value504;
struct sNode* __dec_obj184;
_Bool _if_conditional493;
_Bool _if_conditional494;
void* right_value505;
char* __dec_obj185;
struct sComplement* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value503 = (void*)0;
memset(&result_356, 0, sizeof(struct sComplement*));
right_value504 = (void*)0;
right_value505 = (void*)0;
                                if(_if_conditional491=self==(void*)0,                                _if_conditional491) {
                                    __result349__ = __result_obj__ = (void*)0;
                                    return __result349__;
                                }
                                result_356=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value503=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "sComplement"))));
                                come_call_finalizer2(sComplement_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional492=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional492) {
                                    __dec_obj184=result_356->value;
                                    result_356->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value504=sNode_clone(self->value))));
                                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value504) { right_value504 = come_decrement_ref_count2(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional493=self!=((void*)0),                                _if_conditional493) {
                                    result_356->sline=self->sline;
                                }
                                if(_if_conditional494=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional494) {
                                    __dec_obj185=result_356->sname;
                                    result_356->sname=(char*)come_increment_ref_count(((char*)(right_value505=string_clone(self->sname))));
                                    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value505 = come_decrement_ref_count2(right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result350__ = __result_obj__ = result_356;
                                come_call_finalizer2(sComplement_finalize,result_356, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result350__;
                                come_call_finalizer2(sComplement_finalize,result_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sReturnNode_finalize(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional509;
_Bool _if_conditional510;
_Bool _if_conditional511;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional509=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional509) {
                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional510=self!=((void*)0)&&self->value_source!=((void*)0),                                                        _if_conditional510) {
                                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional511=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional511) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional512;
struct sReturnNode* __result359__;
void* right_value529;
struct sReturnNode* result_366;
_Bool _if_conditional513;
void* right_value530;
struct sNode* __dec_obj195;
_Bool _if_conditional514;
void* right_value531;
char* __dec_obj196;
_Bool _if_conditional515;
_Bool _if_conditional516;
void* right_value532;
char* __dec_obj197;
struct sReturnNode* __result360__;
memset(&__result_obj__, 0, sizeof(void*));
right_value529 = (void*)0;
memset(&result_366, 0, sizeof(struct sReturnNode*));
right_value530 = (void*)0;
right_value531 = (void*)0;
right_value532 = (void*)0;
                                                        if(_if_conditional512=self==(void*)0,                                                        _if_conditional512) {
                                                            __result359__ = __result_obj__ = (void*)0;
                                                            return __result359__;
                                                        }
                                                        result_366=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value529=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"))));
                                                        come_call_finalizer2(sReturnNode_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional513=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional513) {
                                                            __dec_obj195=result_366->value;
                                                            result_366->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value530=sNode_clone(self->value))));
                                                            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value530) { right_value530 = come_decrement_ref_count2(right_value530, ((struct sNode*)right_value530)->finalize, ((struct sNode*)right_value530)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional514=self!=((void*)0)&&self->value_source!=((void*)0),                                                        _if_conditional514) {
                                                            __dec_obj196=result_366->value_source;
                                                            result_366->value_source=(char*)come_increment_ref_count(((char*)(right_value531=string_clone(self->value_source))));
                                                            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional515=self!=((void*)0),                                                        _if_conditional515) {
                                                            result_366->sline=self->sline;
                                                        }
                                                        if(_if_conditional516=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional516) {
                                                            __dec_obj197=result_366->sname;
                                                            result_366->sname=(char*)come_increment_ref_count(((char*)(right_value532=string_clone(self->sname))));
                                                            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        __result360__ = __result_obj__ = result_366;
                                                        come_call_finalizer2(sReturnNode_finalize,result_366, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result360__;
                                                        come_call_finalizer2(sReturnNode_finalize,result_366, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentReturnNode_finalize(struct sParentReturnNode* self){
void* __result_obj__;
_Bool _if_conditional527;
_Bool _if_conditional528;
_Bool _if_conditional529;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional527=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional527) {
                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional528=self!=((void*)0)&&self->value_source!=((void*)0),                                                            _if_conditional528) {
                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            if(_if_conditional529=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional529) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sParentReturnNode* sParentReturnNode_clone(struct sParentReturnNode* self){
void* __result_obj__;
_Bool _if_conditional530;
struct sParentReturnNode* __result365__;
void* right_value548;
struct sParentReturnNode* result_372;
_Bool _if_conditional531;
void* right_value549;
struct sNode* __dec_obj203;
_Bool _if_conditional532;
void* right_value550;
char* __dec_obj204;
_Bool _if_conditional533;
_Bool _if_conditional534;
void* right_value551;
char* __dec_obj205;
struct sParentReturnNode* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
right_value548 = (void*)0;
memset(&result_372, 0, sizeof(struct sParentReturnNode*));
right_value549 = (void*)0;
right_value550 = (void*)0;
right_value551 = (void*)0;
                                                            if(_if_conditional530=self==(void*)0,                                                            _if_conditional530) {
                                                                __result365__ = __result_obj__ = (void*)0;
                                                                return __result365__;
                                                            }
                                                            result_372=(struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value548=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "sParentReturnNode_clone", 3, "sParentReturnNode"))));
                                                            come_call_finalizer2(sParentReturnNode_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional531=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional531) {
                                                                __dec_obj203=result_372->value;
                                                                result_372->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value549=sNode_clone(self->value))));
                                                                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value549) { right_value549 = come_decrement_ref_count2(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional532=self!=((void*)0)&&self->value_source!=((void*)0),                                                            _if_conditional532) {
                                                                __dec_obj204=result_372->value_source;
                                                                result_372->value_source=(char*)come_increment_ref_count(((char*)(right_value550=string_clone(self->value_source))));
                                                                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value550 = come_decrement_ref_count2(right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            if(_if_conditional533=self!=((void*)0),                                                            _if_conditional533) {
                                                                result_372->sline=self->sline;
                                                            }
                                                            if(_if_conditional534=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional534) {
                                                                __dec_obj205=result_372->sname;
                                                                result_372->sname=(char*)come_increment_ref_count(((char*)(right_value551=string_clone(self->sname))));
                                                                __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value551 = come_decrement_ref_count2(right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result366__ = __result_obj__ = result_372;
                                                            come_call_finalizer2(sParentReturnNode_finalize,result_372, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result366__;
                                                            come_call_finalizer2(sParentReturnNode_finalize,result_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentBreakNode_finalize(struct sParentBreakNode* self){
void* __result_obj__;
_Bool _if_conditional536;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional536=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional536) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sParentBreakNode* sParentBreakNode_clone(struct sParentBreakNode* self){
void* __result_obj__;
_Bool _if_conditional537;
struct sParentBreakNode* __result368__;
void* right_value555;
struct sParentBreakNode* result_373;
_Bool _if_conditional538;
_Bool _if_conditional539;
void* right_value556;
char* __dec_obj206;
struct sParentBreakNode* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
right_value555 = (void*)0;
memset(&result_373, 0, sizeof(struct sParentBreakNode*));
right_value556 = (void*)0;
                                                            if(_if_conditional537=self==(void*)0,                                                            _if_conditional537) {
                                                                __result368__ = __result_obj__ = (void*)0;
                                                                return __result368__;
                                                            }
                                                            result_373=(struct sParentBreakNode*)come_increment_ref_count(((struct sParentBreakNode*)(right_value555=(struct sParentBreakNode*)come_calloc(1, sizeof(struct sParentBreakNode)*(1), "sParentBreakNode_clone", 3, "sParentBreakNode"))));
                                                            come_call_finalizer2(sParentBreakNode_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional538=self!=((void*)0),                                                            _if_conditional538) {
                                                                result_373->sline=self->sline;
                                                            }
                                                            if(_if_conditional539=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional539) {
                                                                __dec_obj206=result_373->sname;
                                                                result_373->sname=(char*)come_increment_ref_count(((char*)(right_value556=string_clone(self->sname))));
                                                                __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value556 = come_decrement_ref_count2(right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result369__ = __result_obj__ = result_373;
                                                            come_call_finalizer2(sParentBreakNode_finalize,result_373, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result369__;
                                                            come_call_finalizer2(sParentBreakNode_finalize,result_373, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentContinueNode_finalize(struct sParentContinueNode* self){
void* __result_obj__;
_Bool _if_conditional541;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional541=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional541) {
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sParentContinueNode* sParentContinueNode_clone(struct sParentContinueNode* self){
void* __result_obj__;
_Bool _if_conditional542;
struct sParentContinueNode* __result371__;
void* right_value560;
struct sParentContinueNode* result_374;
_Bool _if_conditional543;
_Bool _if_conditional544;
void* right_value561;
char* __dec_obj207;
struct sParentContinueNode* __result372__;
memset(&__result_obj__, 0, sizeof(void*));
right_value560 = (void*)0;
memset(&result_374, 0, sizeof(struct sParentContinueNode*));
right_value561 = (void*)0;
                                                                if(_if_conditional542=self==(void*)0,                                                                _if_conditional542) {
                                                                    __result371__ = __result_obj__ = (void*)0;
                                                                    return __result371__;
                                                                }
                                                                result_374=(struct sParentContinueNode*)come_increment_ref_count(((struct sParentContinueNode*)(right_value560=(struct sParentContinueNode*)come_calloc(1, sizeof(struct sParentContinueNode)*(1), "sParentContinueNode_clone", 3, "sParentContinueNode"))));
                                                                come_call_finalizer2(sParentContinueNode_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional543=self!=((void*)0),                                                                _if_conditional543) {
                                                                    result_374->sline=self->sline;
                                                                }
                                                                if(_if_conditional544=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional544) {
                                                                    __dec_obj207=result_374->sname;
                                                                    result_374->sname=(char*)come_increment_ref_count(((char*)(right_value561=string_clone(self->sname))));
                                                                    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                __result372__ = __result_obj__ = result_374;
                                                                come_call_finalizer2(sParentContinueNode_finalize,result_374, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result372__;
                                                                come_call_finalizer2(sParentContinueNode_finalize,result_374, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional547;
_Bool _if_conditional548;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional547=self!=((void*)0)&&self->value!=((void*)0),                                                                    _if_conditional547) {
                                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                    if(_if_conditional548=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional548) {
                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional549;
struct sDerefferenceNode* __result374__;
void* right_value566;
struct sDerefferenceNode* result_378;
_Bool _if_conditional550;
void* right_value567;
struct sNode* __dec_obj208;
_Bool _if_conditional551;
_Bool _if_conditional552;
_Bool _if_conditional553;
void* right_value568;
char* __dec_obj209;
struct sDerefferenceNode* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
right_value566 = (void*)0;
memset(&result_378, 0, sizeof(struct sDerefferenceNode*));
right_value567 = (void*)0;
right_value568 = (void*)0;
                                                                    if(_if_conditional549=self==(void*)0,                                                                    _if_conditional549) {
                                                                        __result374__ = __result_obj__ = (void*)0;
                                                                        return __result374__;
                                                                    }
                                                                    result_378=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value566=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "sDerefferenceNode"))));
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional550=self!=((void*)0)&&self->value!=((void*)0),                                                                    _if_conditional550) {
                                                                        __dec_obj208=result_378->value;
                                                                        result_378->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value567=sNode_clone(self->value))));
                                                                        if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); }
                                                                        if(right_value567) { right_value567 = come_decrement_ref_count2(right_value567, ((struct sNode*)right_value567)->finalize, ((struct sNode*)right_value567)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    }
                                                                    if(_if_conditional551=self!=((void*)0),                                                                    _if_conditional551) {
                                                                        result_378->mQuote=self->mQuote;
                                                                    }
                                                                    if(_if_conditional552=self!=((void*)0),                                                                    _if_conditional552) {
                                                                        result_378->sline=self->sline;
                                                                    }
                                                                    if(_if_conditional553=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional553) {
                                                                        __dec_obj209=result_378->sname;
                                                                        result_378->sname=(char*)come_increment_ref_count(((char*)(right_value568=string_clone(self->sname))));
                                                                        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value568 = come_decrement_ref_count2(right_value568, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    __result375__ = __result_obj__ = result_378;
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,result_378, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result375__;
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,result_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional555;
_Bool _if_conditional556;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional555=self!=((void*)0)&&self->value!=((void*)0),                                                                        _if_conditional555) {
                                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                        if(_if_conditional556=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional556) {
                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional557;
struct sRefferenceNode* __result377__;
void* right_value573;
struct sRefferenceNode* result_380;
_Bool _if_conditional558;
void* right_value574;
struct sNode* __dec_obj210;
_Bool _if_conditional559;
_Bool _if_conditional560;
void* right_value575;
char* __dec_obj211;
struct sRefferenceNode* __result378__;
memset(&__result_obj__, 0, sizeof(void*));
right_value573 = (void*)0;
memset(&result_380, 0, sizeof(struct sRefferenceNode*));
right_value574 = (void*)0;
right_value575 = (void*)0;
                                                                        if(_if_conditional557=self==(void*)0,                                                                        _if_conditional557) {
                                                                            __result377__ = __result_obj__ = (void*)0;
                                                                            return __result377__;
                                                                        }
                                                                        result_380=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value573=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "sRefferenceNode"))));
                                                                        come_call_finalizer2(sRefferenceNode_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional558=self!=((void*)0)&&self->value!=((void*)0),                                                                        _if_conditional558) {
                                                                            __dec_obj210=result_380->value;
                                                                            result_380->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value574=sNode_clone(self->value))));
                                                                            if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); }
                                                                            if(right_value574) { right_value574 = come_decrement_ref_count2(right_value574, ((struct sNode*)right_value574)->finalize, ((struct sNode*)right_value574)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        }
                                                                        if(_if_conditional559=self!=((void*)0),                                                                        _if_conditional559) {
                                                                            result_380->sline=self->sline;
                                                                        }
                                                                        if(_if_conditional560=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional560) {
                                                                            __dec_obj211=result_380->sname;
                                                                            result_380->sname=(char*)come_increment_ref_count(((char*)(right_value575=string_clone(self->sname))));
                                                                            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        __result378__ = __result_obj__ = result_380;
                                                                        come_call_finalizer2(sRefferenceNode_finalize,result_380, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result378__;
                                                                        come_call_finalizer2(sRefferenceNode_finalize,result_380, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sReverseNode_finalize(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional562;
_Bool _if_conditional563;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional562=self!=((void*)0)&&self->value!=((void*)0),                                                                            _if_conditional562) {
                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            if(_if_conditional563=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional563) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional564;
struct sReverseNode* __result380__;
void* right_value580;
struct sReverseNode* result_382;
_Bool _if_conditional565;
void* right_value581;
struct sNode* __dec_obj212;
_Bool _if_conditional566;
_Bool _if_conditional567;
void* right_value582;
char* __dec_obj213;
struct sReverseNode* __result381__;
memset(&__result_obj__, 0, sizeof(void*));
right_value580 = (void*)0;
memset(&result_382, 0, sizeof(struct sReverseNode*));
right_value581 = (void*)0;
right_value582 = (void*)0;
                                                                            if(_if_conditional564=self==(void*)0,                                                                            _if_conditional564) {
                                                                                __result380__ = __result_obj__ = (void*)0;
                                                                                return __result380__;
                                                                            }
                                                                            result_382=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value580=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "sReverseNode"))));
                                                                            come_call_finalizer2(sReverseNode_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional565=self!=((void*)0)&&self->value!=((void*)0),                                                                            _if_conditional565) {
                                                                                __dec_obj212=result_382->value;
                                                                                result_382->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value581=sNode_clone(self->value))));
                                                                                if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value581) { right_value581 = come_decrement_ref_count2(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            }
                                                                            if(_if_conditional566=self!=((void*)0),                                                                            _if_conditional566) {
                                                                                result_382->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional567=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional567) {
                                                                                __dec_obj213=result_382->sname;
                                                                                result_382->sname=(char*)come_increment_ref_count(((char*)(right_value582=string_clone(self->sname))));
                                                                                __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value582 = come_decrement_ref_count2(right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result381__ = __result_obj__ = result_382;
                                                                            come_call_finalizer2(sReverseNode_finalize,result_382, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result381__;
                                                                            come_call_finalizer2(sReverseNode_finalize,result_382, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional583;
_Bool _if_conditional584;
_Bool _if_conditional585;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional583=self!=((void*)0)&&self->value!=((void*)0),                                                                                            _if_conditional583) {
                                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional584=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                            _if_conditional584) {
                                                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional585=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional585) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional586;
struct sFuncNode* __result385__;
void* right_value595;
struct sFuncNode* result_395;
_Bool _if_conditional587;
void* right_value596;
struct sNode* __dec_obj219;
_Bool _if_conditional588;
void* right_value597;
char* __dec_obj220;
_Bool _if_conditional589;
_Bool _if_conditional590;
void* right_value598;
char* __dec_obj221;
struct sFuncNode* __result386__;
memset(&__result_obj__, 0, sizeof(void*));
right_value595 = (void*)0;
memset(&result_395, 0, sizeof(struct sFuncNode*));
right_value596 = (void*)0;
right_value597 = (void*)0;
right_value598 = (void*)0;
                                                                                            if(_if_conditional586=self==(void*)0,                                                                                            _if_conditional586) {
                                                                                                __result385__ = __result_obj__ = (void*)0;
                                                                                                return __result385__;
                                                                                            }
                                                                                            result_395=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value595=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"))));
                                                                                            come_call_finalizer2(sFuncNode_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional587=self!=((void*)0)&&self->value!=((void*)0),                                                                                            _if_conditional587) {
                                                                                                __dec_obj219=result_395->value;
                                                                                                result_395->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value596=sNode_clone(self->value))));
                                                                                                if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value596) { right_value596 = come_decrement_ref_count2(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional588=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                            _if_conditional588) {
                                                                                                __dec_obj220=result_395->value_source;
                                                                                                result_395->value_source=(char*)come_increment_ref_count(((char*)(right_value597=string_clone(self->value_source))));
                                                                                                __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional589=self!=((void*)0),                                                                                            _if_conditional589) {
                                                                                                result_395->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional590=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional590) {
                                                                                                __dec_obj221=result_395->sname;
                                                                                                result_395->sname=(char*)come_increment_ref_count(((char*)(right_value598=string_clone(self->sname))));
                                                                                                __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value598 = come_decrement_ref_count2(right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result386__ = __result_obj__ = result_395;
                                                                                            come_call_finalizer2(sFuncNode_finalize,result_395, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result386__;
                                                                                            come_call_finalizer2(sFuncNode_finalize,result_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional592;
_Bool _if_conditional593;
_Bool _if_conditional594;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                if(_if_conditional592=self!=((void*)0)&&self->value!=((void*)0),                                                                                                _if_conditional592) {
                                                                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
                                                                                                if(_if_conditional593=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                _if_conditional593) {
                                                                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                if(_if_conditional594=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional594) {
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional595;
struct sLineNode* __result388__;
void* right_value602;
struct sLineNode* result_396;
_Bool _if_conditional596;
void* right_value603;
struct sNode* __dec_obj222;
_Bool _if_conditional597;
void* right_value604;
char* __dec_obj223;
_Bool _if_conditional598;
_Bool _if_conditional599;
void* right_value605;
char* __dec_obj224;
struct sLineNode* __result389__;
memset(&__result_obj__, 0, sizeof(void*));
right_value602 = (void*)0;
memset(&result_396, 0, sizeof(struct sLineNode*));
right_value603 = (void*)0;
right_value604 = (void*)0;
right_value605 = (void*)0;
                                                                                                if(_if_conditional595=self==(void*)0,                                                                                                _if_conditional595) {
                                                                                                    __result388__ = __result_obj__ = (void*)0;
                                                                                                    return __result388__;
                                                                                                }
                                                                                                result_396=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value602=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"))));
                                                                                                come_call_finalizer2(sLineNode_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional596=self!=((void*)0)&&self->value!=((void*)0),                                                                                                _if_conditional596) {
                                                                                                    __dec_obj222=result_396->value;
                                                                                                    result_396->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value603=sNode_clone(self->value))));
                                                                                                    if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value603) { right_value603 = come_decrement_ref_count2(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                if(_if_conditional597=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                _if_conditional597) {
                                                                                                    __dec_obj223=result_396->value_source;
                                                                                                    result_396->value_source=(char*)come_increment_ref_count(((char*)(right_value604=string_clone(self->value_source))));
                                                                                                    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value604 = come_decrement_ref_count2(right_value604, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                if(_if_conditional598=self!=((void*)0),                                                                                                _if_conditional598) {
                                                                                                    result_396->sline=self->sline;
                                                                                                }
                                                                                                if(_if_conditional599=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional599) {
                                                                                                    __dec_obj224=result_396->sname;
                                                                                                    result_396->sname=(char*)come_increment_ref_count(((char*)(right_value605=string_clone(self->sname))));
                                                                                                    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value605 = come_decrement_ref_count2(right_value605, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                __result389__ = __result_obj__ = result_396;
                                                                                                come_call_finalizer2(sLineNode_finalize,result_396, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result389__;
                                                                                                come_call_finalizer2(sLineNode_finalize,result_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional601;
_Bool _if_conditional602;
_Bool _if_conditional603;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                    if(_if_conditional601=self!=((void*)0)&&self->value!=((void*)0),                                                                                                    _if_conditional601) {
                                                                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                    }
                                                                                                    if(_if_conditional602=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                    _if_conditional602) {
                                                                                                        self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
                                                                                                    if(_if_conditional603=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                    _if_conditional603) {
                                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional604;
struct sSNameNode* __result391__;
void* right_value609;
struct sSNameNode* result_397;
_Bool _if_conditional605;
void* right_value610;
struct sNode* __dec_obj225;
_Bool _if_conditional606;
void* right_value611;
char* __dec_obj226;
_Bool _if_conditional607;
_Bool _if_conditional608;
void* right_value612;
char* __dec_obj227;
struct sSNameNode* __result392__;
memset(&__result_obj__, 0, sizeof(void*));
right_value609 = (void*)0;
memset(&result_397, 0, sizeof(struct sSNameNode*));
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value612 = (void*)0;
                                                                                                    if(_if_conditional604=self==(void*)0,                                                                                                    _if_conditional604) {
                                                                                                        __result391__ = __result_obj__ = (void*)0;
                                                                                                        return __result391__;
                                                                                                    }
                                                                                                    result_397=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value609=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"))));
                                                                                                    come_call_finalizer2(sSNameNode_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(_if_conditional605=self!=((void*)0)&&self->value!=((void*)0),                                                                                                    _if_conditional605) {
                                                                                                        __dec_obj225=result_397->value;
                                                                                                        result_397->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value610=sNode_clone(self->value))));
                                                                                                        if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                        if(right_value610) { right_value610 = come_decrement_ref_count2(right_value610, ((struct sNode*)right_value610)->finalize, ((struct sNode*)right_value610)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    }
                                                                                                    if(_if_conditional606=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                    _if_conditional606) {
                                                                                                        __dec_obj226=result_397->value_source;
                                                                                                        result_397->value_source=(char*)come_increment_ref_count(((char*)(right_value611=string_clone(self->value_source))));
                                                                                                        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value611 = come_decrement_ref_count2(right_value611, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    if(_if_conditional607=self!=((void*)0),                                                                                                    _if_conditional607) {
                                                                                                        result_397->sline=self->sline;
                                                                                                    }
                                                                                                    if(_if_conditional608=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                    _if_conditional608) {
                                                                                                        __dec_obj227=result_397->sname;
                                                                                                        result_397->sname=(char*)come_increment_ref_count(((char*)(right_value612=string_clone(self->sname))));
                                                                                                        __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value612 = come_decrement_ref_count2(right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    __result392__ = __result_obj__ = result_397;
                                                                                                    come_call_finalizer2(sSNameNode_finalize,result_397, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                    return __result392__;
                                                                                                    come_call_finalizer2(sSNameNode_finalize,result_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional610;
_Bool _if_conditional611;
_Bool _if_conditional612;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                        if(_if_conditional610=self!=((void*)0)&&self->value!=((void*)0),                                                                                                        _if_conditional610) {
                                                                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                        }
                                                                                                        if(_if_conditional611=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                        _if_conditional611) {
                                                                                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
                                                                                                        if(_if_conditional612=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                        _if_conditional612) {
                                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional613;
struct sCallerFuncNode* __result394__;
void* right_value616;
struct sCallerFuncNode* result_398;
_Bool _if_conditional614;
void* right_value617;
struct sNode* __dec_obj228;
_Bool _if_conditional615;
void* right_value618;
char* __dec_obj229;
_Bool _if_conditional616;
_Bool _if_conditional617;
void* right_value619;
char* __dec_obj230;
struct sCallerFuncNode* __result395__;
memset(&__result_obj__, 0, sizeof(void*));
right_value616 = (void*)0;
memset(&result_398, 0, sizeof(struct sCallerFuncNode*));
right_value617 = (void*)0;
right_value618 = (void*)0;
right_value619 = (void*)0;
                                                                                                        if(_if_conditional613=self==(void*)0,                                                                                                        _if_conditional613) {
                                                                                                            __result394__ = __result_obj__ = (void*)0;
                                                                                                            return __result394__;
                                                                                                        }
                                                                                                        result_398=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value616=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"))));
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(_if_conditional614=self!=((void*)0)&&self->value!=((void*)0),                                                                                                        _if_conditional614) {
                                                                                                            __dec_obj228=result_398->value;
                                                                                                            result_398->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value617=sNode_clone(self->value))));
                                                                                                            if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                            if(right_value617) { right_value617 = come_decrement_ref_count2(right_value617, ((struct sNode*)right_value617)->finalize, ((struct sNode*)right_value617)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        }
                                                                                                        if(_if_conditional615=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                        _if_conditional615) {
                                                                                                            __dec_obj229=result_398->value_source;
                                                                                                            result_398->value_source=(char*)come_increment_ref_count(((char*)(right_value618=string_clone(self->value_source))));
                                                                                                            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value618 = come_decrement_ref_count2(right_value618, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        if(_if_conditional616=self!=((void*)0),                                                                                                        _if_conditional616) {
                                                                                                            result_398->sline=self->sline;
                                                                                                        }
                                                                                                        if(_if_conditional617=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                        _if_conditional617) {
                                                                                                            __dec_obj230=result_398->sname;
                                                                                                            result_398->sname=(char*)come_increment_ref_count(((char*)(right_value619=string_clone(self->sname))));
                                                                                                            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value619 = come_decrement_ref_count2(right_value619, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        __result395__ = __result_obj__ = result_398;
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,result_398, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                        return __result395__;
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,result_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional619;
_Bool _if_conditional620;
_Bool _if_conditional621;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                            if(_if_conditional619=self!=((void*)0)&&self->value!=((void*)0),                                                                                                            _if_conditional619) {
                                                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                            }
                                                                                                            if(_if_conditional620=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                            _if_conditional620) {
                                                                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            }
                                                                                                            if(_if_conditional621=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                            _if_conditional621) {
                                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional622;
struct sCallerLineNode* __result397__;
void* right_value623;
struct sCallerLineNode* result_399;
_Bool _if_conditional623;
void* right_value624;
struct sNode* __dec_obj231;
_Bool _if_conditional624;
void* right_value625;
char* __dec_obj232;
_Bool _if_conditional625;
_Bool _if_conditional626;
void* right_value626;
char* __dec_obj233;
struct sCallerLineNode* __result398__;
memset(&__result_obj__, 0, sizeof(void*));
right_value623 = (void*)0;
memset(&result_399, 0, sizeof(struct sCallerLineNode*));
right_value624 = (void*)0;
right_value625 = (void*)0;
right_value626 = (void*)0;
                                                                                                            if(_if_conditional622=self==(void*)0,                                                                                                            _if_conditional622) {
                                                                                                                __result397__ = __result_obj__ = (void*)0;
                                                                                                                return __result397__;
                                                                                                            }
                                                                                                            result_399=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value623=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"))));
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            if(_if_conditional623=self!=((void*)0)&&self->value!=((void*)0),                                                                                                            _if_conditional623) {
                                                                                                                __dec_obj231=result_399->value;
                                                                                                                result_399->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value624=sNode_clone(self->value))));
                                                                                                                if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                if(right_value624) { right_value624 = come_decrement_ref_count2(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                            }
                                                                                                            if(_if_conditional624=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                            _if_conditional624) {
                                                                                                                __dec_obj232=result_399->value_source;
                                                                                                                result_399->value_source=(char*)come_increment_ref_count(((char*)(right_value625=string_clone(self->value_source))));
                                                                                                                __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                right_value625 = come_decrement_ref_count2(right_value625, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            if(_if_conditional625=self!=((void*)0),                                                                                                            _if_conditional625) {
                                                                                                                result_399->sline=self->sline;
                                                                                                            }
                                                                                                            if(_if_conditional626=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                            _if_conditional626) {
                                                                                                                __dec_obj233=result_399->sname;
                                                                                                                result_399->sname=(char*)come_increment_ref_count(((char*)(right_value626=string_clone(self->sname))));
                                                                                                                __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                right_value626 = come_decrement_ref_count2(right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            __result398__ = __result_obj__ = result_399;
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,result_399, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                            return __result398__;
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,result_399, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional628;
_Bool _if_conditional629;
_Bool _if_conditional630;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                if(_if_conditional628=self!=((void*)0)&&self->value!=((void*)0),                                                                                                                _if_conditional628) {
                                                                                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                }
                                                                                                                if(_if_conditional629=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                                _if_conditional629) {
                                                                                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                }
                                                                                                                if(_if_conditional630=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                                _if_conditional630) {
                                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional631;
struct sCallerSNameNode* __result400__;
void* right_value630;
struct sCallerSNameNode* result_400;
_Bool _if_conditional632;
void* right_value631;
struct sNode* __dec_obj234;
_Bool _if_conditional633;
void* right_value632;
char* __dec_obj235;
_Bool _if_conditional634;
_Bool _if_conditional635;
void* right_value633;
char* __dec_obj236;
struct sCallerSNameNode* __result401__;
memset(&__result_obj__, 0, sizeof(void*));
right_value630 = (void*)0;
memset(&result_400, 0, sizeof(struct sCallerSNameNode*));
right_value631 = (void*)0;
right_value632 = (void*)0;
right_value633 = (void*)0;
                                                                                                                if(_if_conditional631=self==(void*)0,                                                                                                                _if_conditional631) {
                                                                                                                    __result400__ = __result_obj__ = (void*)0;
                                                                                                                    return __result400__;
                                                                                                                }
                                                                                                                result_400=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value630=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"))));
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                if(_if_conditional632=self!=((void*)0)&&self->value!=((void*)0),                                                                                                                _if_conditional632) {
                                                                                                                    __dec_obj234=result_400->value;
                                                                                                                    result_400->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value631=sNode_clone(self->value))));
                                                                                                                    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value631) { right_value631 = come_decrement_ref_count2(right_value631, ((struct sNode*)right_value631)->finalize, ((struct sNode*)right_value631)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                }
                                                                                                                if(_if_conditional633=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                                _if_conditional633) {
                                                                                                                    __dec_obj235=result_400->value_source;
                                                                                                                    result_400->value_source=(char*)come_increment_ref_count(((char*)(right_value632=string_clone(self->value_source))));
                                                                                                                    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    right_value632 = come_decrement_ref_count2(right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                if(_if_conditional634=self!=((void*)0),                                                                                                                _if_conditional634) {
                                                                                                                    result_400->sline=self->sline;
                                                                                                                }
                                                                                                                if(_if_conditional635=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                                _if_conditional635) {
                                                                                                                    __dec_obj236=result_400->sname;
                                                                                                                    result_400->sname=(char*)come_increment_ref_count(((char*)(right_value633=string_clone(self->sname))));
                                                                                                                    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    right_value633 = come_decrement_ref_count2(right_value633, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                __result401__ = __result_obj__ = result_400;
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,result_400, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                return __result401__;
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,result_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_403;
unsigned int hash_404;
unsigned int it_405;
_Bool _while_condtional34;
_Bool _if_conditional638;
_Bool _if_conditional639;
struct sType* __result404__;
_Bool _if_conditional640;
_Bool _if_conditional641;
struct sType* __result405__;
struct sType* __result406__;
struct sType* __result407__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_403, 0, sizeof(struct sType*));
memset(&hash_404, 0, sizeof(unsigned int));
memset(&it_405, 0, sizeof(unsigned int));
                                                                                                                        memset(&default_value_403,0,sizeof(struct sType*));
                                                                                                                        hash_404=string_get_hash_key(((char*)key))%self->size;
                                                                                                                        it_405=hash_404;
                                                                                                                        while(_while_condtional34=(_Bool)1,                                                                                                                        _while_condtional34) {
                                                                                                                            if(_if_conditional638=self->item_existance[it_405],                                                                                                                            _if_conditional638) {
                                                                                                                                if(_if_conditional639=string_equals(self->keys[it_405],key),                                                                                                                                _if_conditional639) {
                                                                                                                                    __result404__ = __result_obj__ = self->items[it_405];
                                                                                                                                    come_call_finalizer2(sType_finalize,default_value_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                    return __result404__;
                                                                                                                                }
                                                                                                                                it_405++;
                                                                                                                                if(_if_conditional640=it_405>=self->size,                                                                                                                                _if_conditional640) {
                                                                                                                                    it_405=0;
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                    if(_if_conditional641=it_405==hash_404,                                                                                                                                    _if_conditional641) {
                                                                                                                                        __result405__ = __result_obj__ = default_value_403;
                                                                                                                                        come_call_finalizer2(sType_finalize,default_value_403, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                        return __result405__;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                __result406__ = __result_obj__ = default_value_403;
                                                                                                                                come_call_finalizer2(sType_finalize,default_value_403, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                return __result406__;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        __result407__ = __result_obj__ = default_value_403;
                                                                                                                        come_call_finalizer2(sType_finalize,default_value_403, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                        return __result407__;
                                                                                                                        come_call_finalizer2(sType_finalize,default_value_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_407;
unsigned int hash_408;
unsigned int it_409;
_Bool _while_condtional35;
_Bool _if_conditional643;
_Bool _if_conditional644;
struct sClass* __result408__;
_Bool _if_conditional651;
_Bool _if_conditional652;
struct sClass* __result409__;
struct sClass* __result410__;
struct sClass* __result411__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_407, 0, sizeof(struct sClass*));
memset(&hash_408, 0, sizeof(unsigned int));
memset(&it_409, 0, sizeof(unsigned int));
                                                                                                                            memset(&default_value_407,0,sizeof(struct sClass*));
                                                                                                                            hash_408=string_get_hash_key(((char*)key))%self->size;
                                                                                                                            it_409=hash_408;
                                                                                                                            while(_while_condtional35=(_Bool)1,                                                                                                                            _while_condtional35) {
                                                                                                                                if(_if_conditional643=self->item_existance[it_409],                                                                                                                                _if_conditional643) {
                                                                                                                                    if(_if_conditional644=string_equals(self->keys[it_409],key),                                                                                                                                    _if_conditional644) {
                                                                                                                                        __result408__ = __result_obj__ = self->items[it_409];
                                                                                                                                        come_call_finalizer2(sClass_finalize,default_value_407, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                        return __result408__;
                                                                                                                                    }
                                                                                                                                    it_409++;
                                                                                                                                    if(_if_conditional651=it_409>=self->size,                                                                                                                                    _if_conditional651) {
                                                                                                                                        it_409=0;
                                                                                                                                    }
                                                                                                                                    else {
                                                                                                                                        if(_if_conditional652=it_409==hash_408,                                                                                                                                        _if_conditional652) {
                                                                                                                                            __result409__ = __result_obj__ = default_value_407;
                                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_407, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                            return __result409__;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                    __result410__ = __result_obj__ = default_value_407;
                                                                                                                                    come_call_finalizer2(sClass_finalize,default_value_407, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                    return __result410__;
                                                                                                                                }
                                                                                                                            }
                                                                                                                            __result411__ = __result_obj__ = default_value_407;
                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_407, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                            return __result411__;
                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_407, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional645;
_Bool _if_conditional646;
_Bool _if_conditional650;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                            if(_if_conditional645=self!=((void*)0)&&self->mName!=((void*)0),                                                                                                                                            _if_conditional645) {
                                                                                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                            }
                                                                                                                                            if(_if_conditional646=self!=((void*)0)&&self->mFields!=((void*)0),                                                                                                                                            _if_conditional646) {
                                                                                                                                                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                            }
                                                                                                                                            if(_if_conditional650=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                                                                                            _if_conditional650) {
                                                                                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_410;
_Bool _while_condtional36;
struct list_item$1tuple2$2charphsTypephph* prev_it_411;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_410, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_411, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                                                                                    it_410=self->head;
                                                                                                                                                    while(_while_condtional36=it_410!=((void*)0),                                                                                                                                                    _while_condtional36) {
                                                                                                                                                        prev_it_411=it_410;
                                                                                                                                                        it_410=it_410->next;
                                                                                                                                                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_411, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional647;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                                            if(_if_conditional647=self!=((void*)0)&&self->item!=((void*)0),                                                                                                                                                            _if_conditional647) {
                                                                                                                                                                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional648;
_Bool _if_conditional649;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                                                    if(_if_conditional648=self!=((void*)0)&&self->v1!=((void*)0),                                                                                                                                                                    _if_conditional648) {
                                                                                                                                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                                                    }
                                                                                                                                                                    if(_if_conditional649=self!=((void*)0)&&self->v2!=((void*)0),                                                                                                                                                                    _if_conditional649) {
                                                                                                                                                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                                    }
}

static void sCastNode_finalize(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional664;
_Bool _if_conditional665;
_Bool _if_conditional666;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional664=self!=((void*)0)&&self->mType!=((void*)0),                                                                                            _if_conditional664) {
                                                                                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional665=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional665) {
                                                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional666=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional666) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional667;
struct sCastNode* __result417__;
void* right_value672;
struct sCastNode* result_437;
_Bool _if_conditional668;
void* right_value673;
struct sType* __dec_obj249;
_Bool _if_conditional669;
void* right_value674;
struct sNode* __dec_obj250;
_Bool _if_conditional670;
_Bool _if_conditional671;
void* right_value675;
char* __dec_obj251;
struct sCastNode* __result418__;
memset(&__result_obj__, 0, sizeof(void*));
right_value672 = (void*)0;
memset(&result_437, 0, sizeof(struct sCastNode*));
right_value673 = (void*)0;
right_value674 = (void*)0;
right_value675 = (void*)0;
                                                                                            if(_if_conditional667=self==(void*)0,                                                                                            _if_conditional667) {
                                                                                                __result417__ = __result_obj__ = (void*)0;
                                                                                                return __result417__;
                                                                                            }
                                                                                            result_437=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value672=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "sCastNode"))));
                                                                                            come_call_finalizer2(sCastNode_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional668=self!=((void*)0)&&self->mType!=((void*)0),                                                                                            _if_conditional668) {
                                                                                                __dec_obj249=result_437->mType;
                                                                                                result_437->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value673=sType_clone(self->mType))));
                                                                                                come_call_finalizer2(sType_finalize,__dec_obj249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sType_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional669=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional669) {
                                                                                                __dec_obj250=result_437->mLeft;
                                                                                                result_437->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value674=sNode_clone(self->mLeft))));
                                                                                                if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value674) { right_value674 = come_decrement_ref_count2(right_value674, ((struct sNode*)right_value674)->finalize, ((struct sNode*)right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional670=self!=((void*)0),                                                                                            _if_conditional670) {
                                                                                                result_437->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional671=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional671) {
                                                                                                __dec_obj251=result_437->sname;
                                                                                                result_437->sname=(char*)come_increment_ref_count(((char*)(right_value675=string_clone(self->sname))));
                                                                                                __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value675 = come_decrement_ref_count2(right_value675, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result418__ = __result_obj__ = result_437;
                                                                                            come_call_finalizer2(sCastNode_finalize,result_437, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result418__;
                                                                                            come_call_finalizer2(sCastNode_finalize,result_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParenNode_finalize(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional672;
_Bool _if_conditional673;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional672=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional672) {
                                                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional673=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional673) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional674;
struct sParenNode* __result420__;
void* right_value680;
struct sParenNode* result_439;
_Bool _if_conditional675;
void* right_value681;
struct sNode* __dec_obj252;
_Bool _if_conditional676;
_Bool _if_conditional677;
void* right_value682;
char* __dec_obj253;
struct sParenNode* __result421__;
memset(&__result_obj__, 0, sizeof(void*));
right_value680 = (void*)0;
memset(&result_439, 0, sizeof(struct sParenNode*));
right_value681 = (void*)0;
right_value682 = (void*)0;
                                                                                            if(_if_conditional674=self==(void*)0,                                                                                            _if_conditional674) {
                                                                                                __result420__ = __result_obj__ = (void*)0;
                                                                                                return __result420__;
                                                                                            }
                                                                                            result_439=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value680=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "sParenNode"))));
                                                                                            come_call_finalizer2(sParenNode_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional675=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional675) {
                                                                                                __dec_obj252=result_439->mLeft;
                                                                                                result_439->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value681=sNode_clone(self->mLeft))));
                                                                                                if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value681) { right_value681 = come_decrement_ref_count2(right_value681, ((struct sNode*)right_value681)->finalize, ((struct sNode*)right_value681)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional676=self!=((void*)0),                                                                                            _if_conditional676) {
                                                                                                result_439->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional677=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional677) {
                                                                                                __dec_obj253=result_439->sname;
                                                                                                result_439->sname=(char*)come_increment_ref_count(((char*)(right_value682=string_clone(self->sname))));
                                                                                                __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value682 = come_decrement_ref_count2(right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result421__ = __result_obj__ = result_439;
                                                                                            come_call_finalizer2(sParenNode_finalize,result_439, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result421__;
                                                                                            come_call_finalizer2(sParenNode_finalize,result_439, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__;
void* right_value687;
struct sNode* __result425__;
memset(&__result_obj__, 0, sizeof(void*));
right_value687 = (void*)0;
    __result425__ = __result_obj__ = ((struct sNode*)(right_value687=expression_node_v99(info)));
    if(right_value687) { right_value687 = come_decrement_ref_count2(right_value687, ((struct sNode*)right_value687)->finalize, ((struct sNode*)right_value687)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result425__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional678;
void* right_value688;
void* right_value689;
struct sNode* __dec_obj257;
struct sNode* __result426__;
_Bool _if_conditional679;
void* right_value690;
void* right_value691;
struct sNode* __dec_obj258;
struct sNode* __result427__;
struct sNode* __result428__;
memset(&__result_obj__, 0, sizeof(void*));
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
right_value691 = (void*)0;
    if(_if_conditional678=strmemcmp(info->p,"or"),    _if_conditional678) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj257=node;
        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value689=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value688=sNode_clone(node)))),info))));
        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value688) { right_value688 = come_decrement_ref_count2(right_value688, ((struct sNode*)right_value688)->finalize, ((struct sNode*)right_value688)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(right_value689) { right_value689 = come_decrement_ref_count2(right_value689, ((struct sNode*)right_value689)->finalize, ((struct sNode*)right_value689)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result426__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result426__;
    }
    else {
        if(_if_conditional679=strmemcmp(info->p,"and"),        _if_conditional679) {
            info->p+=strlen("and");
            skip_spaces_and_lf(info);
            __dec_obj258=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value691=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value690=sNode_clone(node)))),info))));
            if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value690) { right_value690 = come_decrement_ref_count2(right_value690, ((struct sNode*)right_value690)->finalize, ((struct sNode*)right_value690)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(right_value691) { right_value691 = come_decrement_ref_count2(right_value691, ((struct sNode*)right_value691)->finalize, ((struct sNode*)right_value691)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result427__ = __result_obj__ = node;
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result427__;
        }
    }
    __result428__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result428__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__;
void* right_value692;
struct sNode* node_441;
void* right_value693;
struct sNode* __dec_obj259;
struct sNode* __result429__;
memset(&__result_obj__, 0, sizeof(void*));
right_value692 = (void*)0;
memset(&node_441, 0, sizeof(struct sNode*));
right_value693 = (void*)0;
    node_441=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value692=expression_node_v99(info))));
    if(right_value692) { right_value692 = come_decrement_ref_count2(right_value692, ((struct sNode*)right_value692)->finalize, ((struct sNode*)right_value692)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj259=node_441;
    node_441=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value693=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_441),info))));
    if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value693) { right_value693 = come_decrement_ref_count2(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result429__ = __result_obj__ = node_441;
    if(node_441) { node_441 = come_decrement_ref_count2(node_441, ((struct sNode*)node_441)->finalize, ((struct sNode*)node_441)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result429__;
    if(node_441) { node_441 = come_decrement_ref_count2(node_441, ((struct sNode*)node_441)->finalize, ((struct sNode*)node_441)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
void* __result_obj__;
char* __dec_obj260;
void* right_value694;
struct sType* __dec_obj261;
void* right_value695;
char* __dec_obj262;
struct sNode* __dec_obj263;
char* __dec_obj264;
void* right_value705;
struct list$1tuple2$2sTypephcharphph* __dec_obj270;
void* right_value706;
char* __dec_obj271;
struct sGlobalVariable* __result436__;
memset(&__result_obj__, 0, sizeof(void*));
right_value694 = (void*)0;
right_value695 = (void*)0;
right_value705 = (void*)0;
right_value706 = (void*)0;
    self->sline=info->sline;
    __dec_obj260=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj261=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value694=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj262=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value695=__builtin_string(name))));
    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj263=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj264=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj270=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value705=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj271=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value706=__builtin_string(info->sname))));
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value706 = come_decrement_ref_count2(right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result436__ = __result_obj__ = self;
    come_call_finalizer2(sGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result436__;
    come_call_finalizer2(sGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional680;
struct list$1tuple2$2sTypephcharphph* __result430__;
void* right_value696;
void* right_value697;
struct list$1tuple2$2sTypephcharphph* result_444;
struct list_item$1tuple2$2sTypephcharphph* it_445;
_Bool _while_condtional39;
void* right_value704;
struct list$1tuple2$2sTypephcharphph* __result435__;
memset(&__result_obj__, 0, sizeof(void*));
right_value696 = (void*)0;
right_value697 = (void*)0;
memset(&result_444, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_445, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value704 = (void*)0;
        if(_if_conditional680=self==((void*)0),        _if_conditional680) {
            __result430__ = __result_obj__ = ((void*)0);
            return __result430__;
        }
        result_444=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value697=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value696=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 142, "list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_445=self->head;
        while(_while_condtional39=it_445!=((void*)0),        _while_condtional39) {
            list$1tuple2$2sTypephcharphph_add(result_444,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value704=tuple2$2sTypephcharphp_clone(it_445->item)))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value704, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_445=it_445->next;
        }
        __result435__ = __result_obj__ = result_444;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_444, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result435__;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_444, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list$1tuple2$2sTypephcharphph* __result431__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result431__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result431__;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list_item$1tuple2$2sTypephcharphph* it_442;
_Bool _while_condtional38;
struct list_item$1tuple2$2sTypephcharphph* prev_it_443;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_442, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&prev_it_443, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                it_442=self->head;
                while(_while_condtional38=it_442!=((void*)0),                _while_condtional38) {
                    prev_it_443=it_442;
                    it_442=it_442->next;
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,prev_it_443, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional681;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional681=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional681) {
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional682;
_Bool _if_conditional683;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional682=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional682) {
                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional683=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional683) {
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional684;
void* right_value698;
struct list_item$1tuple2$2sTypephcharphph* litem_446;
struct tuple2$2sTypephcharph* __dec_obj265;
_Bool _if_conditional687;
void* right_value699;
struct list_item$1tuple2$2sTypephcharphph* litem_447;
struct tuple2$2sTypephcharph* __dec_obj266;
void* right_value700;
struct list_item$1tuple2$2sTypephcharphph* litem_448;
struct tuple2$2sTypephcharph* __dec_obj267;
struct list$1tuple2$2sTypephcharphph* __result432__;
memset(&__result_obj__, 0, sizeof(void*));
right_value698 = (void*)0;
memset(&litem_446, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value699 = (void*)0;
memset(&litem_447, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value700 = (void*)0;
memset(&litem_448, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                if(_if_conditional684=self->len==0,                _if_conditional684) {
                    litem_446=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value698=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_446->prev=((void*)0);
                    litem_446->next=((void*)0);
                    __dec_obj265=litem_446->item;
                    litem_446->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_446;
                    self->head=litem_446;
                }
                else {
                    if(_if_conditional687=self->len==1,                    _if_conditional687) {
                        litem_447=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value699=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_447->prev=self->head;
                        litem_447->next=((void*)0);
                        __dec_obj266=litem_447->item;
                        litem_447->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_447;
                        self->head->next=litem_447;
                    }
                    else {
                        litem_448=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value700=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_448->prev=self->tail;
                        litem_448->next=((void*)0);
                        __dec_obj267=litem_448->item;
                        litem_448->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_448;
                        self->tail=litem_448;
                    }
                }
                self->len++;
                __result432__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result432__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional685;
_Bool _if_conditional686;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional685=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional685) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional686=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional686) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional688;
struct tuple2$2sTypephcharph* __result433__;
void* right_value701;
struct tuple2$2sTypephcharph* result_449;
_Bool _if_conditional689;
void* right_value702;
struct sType* __dec_obj268;
_Bool _if_conditional690;
void* right_value703;
char* __dec_obj269;
struct tuple2$2sTypephcharph* __result434__;
memset(&__result_obj__, 0, sizeof(void*));
right_value701 = (void*)0;
memset(&result_449, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value702 = (void*)0;
right_value703 = (void*)0;
                if(_if_conditional688=self==(void*)0,                _if_conditional688) {
                    __result433__ = __result_obj__ = (void*)0;
                    return __result433__;
                }
                result_449=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value701=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharphp_clone", 3, "tuple2$2sTypephcharph"))));
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value701, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional689=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional689) {
                    __dec_obj268=result_449->v1;
                    result_449->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value702=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value702, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional690=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional690) {
                    __dec_obj269=result_449->v2;
                    result_449->v2=(char*)come_increment_ref_count(((char*)(right_value703=string_clone(self->v2))));
                    __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value703 = come_decrement_ref_count2(right_value703, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result434__ = __result_obj__ = result_449;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_449, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result434__;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_449, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sGlobalVariable_sline(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
int __result437__;
memset(&__result_obj__, 0, sizeof(void*));
    __result437__ = self->sline;
    return __result437__;
}

char* sGlobalVariable_sname(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value707;
char* __result438__;
memset(&__result_obj__, 0, sizeof(void*));
right_value707 = (void*)0;
    __result438__ = __result_obj__ = ((char*)(right_value707=__builtin_string(self->sname)));
    right_value707 = come_decrement_ref_count2(right_value707, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result438__;
}

_Bool sGlobalVariable_terminated(){
void* __result_obj__;
_Bool __result439__;
memset(&__result_obj__, 0, sizeof(void*));
    __result439__ = (_Bool)0;
    return __result439__;
}

char* sGlobalVariable_kind(){
void* __result_obj__;
void* right_value708;
char* __result440__;
memset(&__result_obj__, 0, sizeof(void*));
right_value708 = (void*)0;
    __result440__ = __result_obj__ = ((char*)(right_value708=__builtin_string("sGlobalVariable")));
    right_value708 = come_decrement_ref_count2(right_value708, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result440__;
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value709;
struct sType* type_450;
void* right_value710;
char* name_451;
struct sNode* right_node_452;
void* right_value711;
char* array_initializer_453;
_Bool _if_conditional698;
struct list$1tuple2$2sTypephcharphph* o2_saved_454;
struct tuple2$2sTypephcharph* it_457;
struct tuple2$2sTypephcharph* multiple_assign_var9;
struct sType* type_460;
char* name_461;
_Bool _if_conditional703;
void* right_value712;
void* right_value713;
_Bool _if_conditional704;
_Bool _if_conditional705;
void* right_value714;
_Bool _if_conditional706;
_Bool _if_conditional707;
_Bool __result448__;
void* right_value715;
struct CVALUE* come_value_462;
_Bool _if_conditional708;
void* right_value716;
_Bool _if_conditional709;
void* right_value717;
_Bool __result449__;
memset(&__result_obj__, 0, sizeof(void*));
right_value709 = (void*)0;
memset(&type_450, 0, sizeof(struct sType*));
right_value710 = (void*)0;
memset(&name_451, 0, sizeof(char*));
memset(&right_node_452, 0, sizeof(struct sNode*));
right_value711 = (void*)0;
memset(&array_initializer_453, 0, sizeof(char*));
memset(&o2_saved_454, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_457, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_460, 0, sizeof(struct sType*));
memset(&name_461, 0, sizeof(char*));
memset(&type_460, 0, sizeof(struct sType*));
memset(&name_461, 0, sizeof(char*));
right_value712 = (void*)0;
right_value713 = (void*)0;
right_value714 = (void*)0;
right_value715 = (void*)0;
memset(&come_value_462, 0, sizeof(struct CVALUE*));
right_value716 = (void*)0;
right_value717 = (void*)0;
    type_450=(struct sType*)come_increment_ref_count(((struct sType*)(right_value709=sType_clone(self->type))));
    come_call_finalizer2(sType_finalize,right_value709, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    name_451=(char*)come_increment_ref_count(((char*)(right_value710=string_clone(self->name))));
    right_value710 = come_decrement_ref_count2(right_value710, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_node_452=self->right_node;
    array_initializer_453=(char*)come_increment_ref_count(((char*)(right_value711=string_clone(self->array_initializer))));
    right_value711 = come_decrement_ref_count2(right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->multiple_declare) {
        for(        o2_saved_454=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_457=list$1tuple2$2sTypephcharphph_begin((o2_saved_454));        !list$1tuple2$2sTypephcharphph_end((o2_saved_454));        it_457=list$1tuple2$2sTypephcharphph_next((o2_saved_454))        ){
            multiple_assign_var9=it_457;
            type_460=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_461=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(_if_conditional703=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional703) {
            }
            else {
                add_come_code_at_source_head(info,"%s;\n",((char*)(right_value712=make_define_var(type_460,name_461,(_Bool)0,info))));
                right_value712 = come_decrement_ref_count2(right_value712, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_460, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_461 = come_decrement_ref_count2(name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_451,(struct sType*)come_increment_ref_count(((struct sType*)(right_value713=sType_clone(type_450)))),info);
        come_call_finalizer2(sType_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(array_initializer_453) {
            if(_if_conditional705=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional705) {
            }
            else {
                add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value714=make_define_var(type_450,name_451,(_Bool)0,info))),array_initializer_453);
                right_value714 = come_decrement_ref_count2(right_value714, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        else {
            if(right_node_452) {
                if(_if_conditional707=!node_compile(right_node_452,info),                _if_conditional707) {
                    __result448__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,type_450, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_451 = come_decrement_ref_count2(name_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    array_initializer_453 = come_decrement_ref_count2(array_initializer_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result448__;
                }
                come_value_462=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value715=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                if(_if_conditional708=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional708) {
                }
                else {
                    add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value716=make_define_var(type_450,name_451,(_Bool)0,info))),come_value_462->c_value);
                    right_value716 = come_decrement_ref_count2(right_value716, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(CVALUE_finalize,come_value_462, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional709=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional709) {
                }
                else {
                    add_come_code_at_source_head(info,"%s;\n",((char*)(right_value717=make_define_var(type_450,name_451,(_Bool)0,info))));
                    right_value717 = come_decrement_ref_count2(right_value717, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    __result449__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,type_450, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_451 = come_decrement_ref_count2(name_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_453 = come_decrement_ref_count2(array_initializer_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result449__;
    come_call_finalizer2(sType_finalize,type_450, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_451 = come_decrement_ref_count2(name_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_453 = come_decrement_ref_count2(array_initializer_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional699;
struct tuple2$2sTypephcharph* result_455;
struct tuple2$2sTypephcharph* __result441__;
_Bool _if_conditional700;
struct tuple2$2sTypephcharph* __result442__;
struct tuple2$2sTypephcharph* result_456;
struct tuple2$2sTypephcharph* __result443__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_455, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_456, 0, sizeof(struct tuple2$2sTypephcharph*));
            if(_if_conditional699=self==((void*)0),            _if_conditional699) {
                memset(&result_455,0,sizeof(struct tuple2$2sTypephcharph*));
                __result441__ = __result_obj__ = result_455;
                return __result441__;
            }
            self->it=self->head;
            if(self->it) {
                __result442__ = __result_obj__ = self->it->item;
                return __result442__;
            }
            memset(&result_456,0,sizeof(struct tuple2$2sTypephcharph*));
            __result443__ = __result_obj__ = result_456;
            return __result443__;
}

static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __result444__;
memset(&__result_obj__, 0, sizeof(void*));
            __result444__ = self==((void*)0)||self->it==((void*)0);
            return __result444__;
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional701;
struct tuple2$2sTypephcharph* result_458;
struct tuple2$2sTypephcharph* __result445__;
_Bool _if_conditional702;
struct tuple2$2sTypephcharph* __result446__;
struct tuple2$2sTypephcharph* result_459;
struct tuple2$2sTypephcharph* __result447__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_458, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_459, 0, sizeof(struct tuple2$2sTypephcharph*));
            if(_if_conditional701=self==((void*)0)||self->it==((void*)0),            _if_conditional701) {
                memset(&result_458,0,sizeof(struct tuple2$2sTypephcharph*));
                __result445__ = __result_obj__ = result_458;
                return __result445__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result446__ = __result_obj__ = self->it->item;
                return __result446__;
            }
            memset(&result_459,0,sizeof(struct tuple2$2sTypephcharph*));
            __result447__ = __result_obj__ = result_459;
            return __result447__;
}

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value718;
struct sType* __dec_obj272;
void* right_value719;
char* __dec_obj273;
char* __dec_obj274;
void* right_value720;
struct list$1tuple2$2sTypephcharphph* __dec_obj275;
void* right_value721;
char* __dec_obj276;
struct sExternalGlobalVariable* __result450__;
memset(&__result_obj__, 0, sizeof(void*));
right_value718 = (void*)0;
right_value719 = (void*)0;
right_value720 = (void*)0;
right_value721 = (void*)0;
    __dec_obj272=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value718=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value718, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj273=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value719=__builtin_string(name))));
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value719 = come_decrement_ref_count2(right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj274=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj275=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value720=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value720, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj276=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value721=__builtin_string(info->sname))));
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value721 = come_decrement_ref_count2(right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result450__ = __result_obj__ = self;
    come_call_finalizer2(sExternalGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result450__;
    come_call_finalizer2(sExternalGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sExternalGlobalVariable_sline(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
int __result451__;
memset(&__result_obj__, 0, sizeof(void*));
    __result451__ = self->sline;
    return __result451__;
}

char* sExternalGlobalVariable_sname(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value722;
char* __result452__;
memset(&__result_obj__, 0, sizeof(void*));
right_value722 = (void*)0;
    __result452__ = __result_obj__ = ((char*)(right_value722=__builtin_string(self->sname)));
    right_value722 = come_decrement_ref_count2(right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result452__;
}

_Bool sExternalGlobalVariable_terminated(){
void* __result_obj__;
_Bool __result453__;
memset(&__result_obj__, 0, sizeof(void*));
    __result453__ = (_Bool)0;
    return __result453__;
}

char* sExternalGlobalVariable_kind(){
void* __result_obj__;
void* right_value723;
char* __result454__;
memset(&__result_obj__, 0, sizeof(void*));
right_value723 = (void*)0;
    __result454__ = __result_obj__ = ((char*)(right_value723=__builtin_string("sExternalGlobalVariable")));
    right_value723 = come_decrement_ref_count2(right_value723, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result454__;
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_463;
char* name_464;
_Bool _if_conditional715;
struct list$1tuple2$2sTypephcharphph* o2_saved_465;
struct tuple2$2sTypephcharph* it_466;
struct tuple2$2sTypephcharph* multiple_assign_var10;
struct sType* type_467;
char* name_468;
void* right_value724;
_Bool _if_conditional716;
void* right_value725;
void* right_value726;
_Bool _if_conditional717;
void* right_value727;
_Bool __result455__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_463, 0, sizeof(struct sType*));
memset(&name_464, 0, sizeof(char*));
memset(&o2_saved_465, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_466, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_467, 0, sizeof(struct sType*));
memset(&name_468, 0, sizeof(char*));
memset(&type_467, 0, sizeof(struct sType*));
memset(&name_468, 0, sizeof(char*));
right_value724 = (void*)0;
right_value725 = (void*)0;
right_value726 = (void*)0;
right_value727 = (void*)0;
    type_463=self->type;
    name_464=(char*)come_increment_ref_count(self->name);
    if(self->multiple_declare) {
        for(        o2_saved_465=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_466=list$1tuple2$2sTypephcharphph_begin((o2_saved_465));        !list$1tuple2$2sTypephcharphph_end((o2_saved_465));        it_466=list$1tuple2$2sTypephcharphph_next((o2_saved_465))        ){
            multiple_assign_var10=it_466;
            type_467=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_468=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            add_variable_to_global_table(name_468,(struct sType*)come_increment_ref_count(((struct sType*)(right_value724=sType_clone(type_467)))),info);
            come_call_finalizer2(sType_finalize,right_value724, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional716=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional716) {
            }
            else {
                add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value725=make_define_var(type_467,name_468,(_Bool)0,info))));
                right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_468 = come_decrement_ref_count2(name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_465, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_464,(struct sType*)come_increment_ref_count(((struct sType*)(right_value726=sType_clone(type_463)))),info);
        come_call_finalizer2(sType_finalize,right_value726, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional717=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),        _if_conditional717) {
        }
        else {
            add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value727=make_define_var(type_463,name_464,(_Bool)0,info))));
            right_value727 = come_decrement_ref_count2(right_value727, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __result455__ = (_Bool)1;
    name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result455__;
    name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_469;
void* right_value728;
void* right_value729;
struct buffer* buf_470;
_Bool _if_conditional718;
void* right_value730;
char* __dec_obj277;
_Bool _if_conditional719;
int i_471;
_Bool _if_conditional720;
void* right_value731;
char* __dec_obj278;
void* right_value732;
char* __dec_obj279;
int i_472;
_Bool _if_conditional721;
_Bool _if_conditional722;
void* right_value733;
void* right_value734;
char* __result457__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_469, 0, sizeof(char*));
right_value728 = (void*)0;
right_value729 = (void*)0;
memset(&buf_470, 0, sizeof(struct buffer*));
right_value730 = (void*)0;
memset(&i_471, 0, sizeof(int));
right_value731 = (void*)0;
right_value732 = (void*)0;
memset(&i_472, 0, sizeof(int));
right_value733 = (void*)0;
right_value734 = (void*)0;
    buf_470=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value729=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value728=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2836, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value728, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value729, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional718=string_operator_not_equals(obj_type->mOriginalTypeName,""),    _if_conditional718) {
        __dec_obj277=struct_name_469;
        struct_name_469=(char*)come_increment_ref_count(((char*)(right_value730=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value730 = come_decrement_ref_count2(right_value730, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional719=!obj_type->mClass->mStruct,        _if_conditional719) {
            for(            i_471=0;            i_471<obj_type->mOriginalTypeNamePointerNum;            i_471++            ){
                buffer_append_str(buf_470,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj278=struct_name_469;
            struct_name_469=(char*)come_increment_ref_count(((char*)(right_value731=__builtin_string(obj_type->mClass->mName))));
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value731 = come_decrement_ref_count2(right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj279=struct_name_469;
            struct_name_469=(char*)come_increment_ref_count(((char*)(right_value732=create_generics_name(obj_type,info))));
            __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value732 = come_decrement_ref_count2(right_value732, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_472=0;            i_472<obj_type->mPointerNum;            i_472++            ){
                buffer_append_str(buf_470,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_470,"a");
    }
    if(_if_conditional722=!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0,    _if_conditional722) {
        buffer_append_str(buf_470,"pa");
    }
    __result457__ = __result_obj__ = ((char*)(right_value734=xsprintf("%s%s_%s",struct_name_469,((char*)(right_value733=buffer_to_string(buf_470))),fun_name)));
    struct_name_469 = come_decrement_ref_count2(struct_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_470, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value733 = come_decrement_ref_count2(right_value733, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value734 = come_decrement_ref_count2(right_value734, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result457__;
    struct_name_469 = come_decrement_ref_count2(struct_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_470, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result456__;
memset(&__result_obj__, 0, sizeof(void*));
        __result456__ = self->len;
        return __result456__;
}

struct sNode* parse_global_variable(struct sInfo* info){
void* __result_obj__;
_Bool multiple_declare_473;
char* p_474;
int sline_475;
_Bool _if_conditional723;
void* right_value735;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_476;
char* name_477;
_Bool err_478;
_Bool _if_conditional724;
void* right_value736;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type_479;
char* name_480;
_Bool _if_conditional725;
_Bool _if_conditional726;
void* right_value737;
void* right_value738;
struct list$1tuple2$2sTypephcharphph* multiple_declare_481;
void* right_value739;
struct tuple3$3sTypephcharphbool* multiple_assign_var13;
struct sType* base_type_482;
char* name_483;
_Bool err_484;
_Bool _if_conditional727;
void* right_value740;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_485;
char* var_name_486;
void* right_value744;
void* right_value745;
_Bool _while_condtional40;
void* right_value746;
struct tuple2$2sTypephcharph* multiple_assign_var15;
struct sType* type2_490;
char* var_name_491;
void* right_value747;
void* right_value748;
struct sNode* right_node_492;
char* array_initializer_493;
void* right_value749;
char* var_name2_494;
_Bool _if_conditional730;
_Bool _if_conditional731;
void* right_value750;
void* right_value751;
struct sNode* _inf_value26;
struct sExternalGlobalVariable* _inf_obj_value26;
void* right_value758;
struct sNode* __result462__;
void* right_value759;
void* right_value760;
struct sNode* _inf_value27;
struct sGlobalVariable* _inf_obj_value27;
void* right_value769;
struct sNode* __result465__;
void* right_value770;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* result_type_497;
char* var_name_498;
_Bool err_499;
_Bool _if_conditional760;
struct sNode* right_node_500;
char* array_initializer_501;
_Bool _if_conditional761;
_Bool _if_conditional762;
void* right_value771;
void* right_value772;
struct buffer* buf_502;
_Bool squort_503;
_Bool dquort_504;
int nest_505;
_Bool _while_condtional41;
_Bool _if_conditional763;
_Bool _if_conditional764;
_Bool _if_conditional765;
_Bool _if_conditional766;
_Bool _if_conditional767;
_Bool _if_conditional768;
_Bool _if_conditional769;
_Bool _if_conditional770;
void* right_value773;
char* __dec_obj297;
void* right_value774;
struct sNode* __dec_obj298;
_Bool _if_conditional771;
_Bool _if_conditional772;
void* right_value775;
void* right_value776;
struct sNode* _inf_value28;
struct sExternalGlobalVariable* _inf_obj_value28;
void* right_value783;
struct sNode* __result468__;
void* right_value784;
void* right_value785;
struct sNode* _inf_value29;
struct sGlobalVariable* _inf_obj_value29;
void* right_value794;
struct sNode* __result471__;
struct sNode* __result472__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&multiple_declare_473, 0, sizeof(_Bool));
memset(&p_474, 0, sizeof(char*));
memset(&sline_475, 0, sizeof(int));
right_value735 = (void*)0;
memset(&type_476, 0, sizeof(struct sType*));
memset(&name_477, 0, sizeof(char*));
memset(&err_478, 0, sizeof(_Bool));
memset(&type_476, 0, sizeof(struct sType*));
memset(&name_477, 0, sizeof(char*));
memset(&err_478, 0, sizeof(_Bool));
right_value736 = (void*)0;
memset(&type_479, 0, sizeof(struct sType*));
memset(&name_480, 0, sizeof(char*));
memset(&type_479, 0, sizeof(struct sType*));
memset(&name_480, 0, sizeof(char*));
right_value737 = (void*)0;
right_value738 = (void*)0;
memset(&multiple_declare_481, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
right_value739 = (void*)0;
memset(&base_type_482, 0, sizeof(struct sType*));
memset(&name_483, 0, sizeof(char*));
memset(&err_484, 0, sizeof(_Bool));
memset(&base_type_482, 0, sizeof(struct sType*));
memset(&name_483, 0, sizeof(char*));
memset(&err_484, 0, sizeof(_Bool));
right_value740 = (void*)0;
memset(&type2_485, 0, sizeof(struct sType*));
memset(&var_name_486, 0, sizeof(char*));
memset(&type2_485, 0, sizeof(struct sType*));
memset(&var_name_486, 0, sizeof(char*));
right_value744 = (void*)0;
right_value745 = (void*)0;
right_value746 = (void*)0;
memset(&type2_490, 0, sizeof(struct sType*));
memset(&var_name_491, 0, sizeof(char*));
memset(&type2_490, 0, sizeof(struct sType*));
memset(&var_name_491, 0, sizeof(char*));
right_value747 = (void*)0;
right_value748 = (void*)0;
memset(&right_node_492, 0, sizeof(struct sNode*));
memset(&array_initializer_493, 0, sizeof(char*));
right_value749 = (void*)0;
memset(&var_name2_494, 0, sizeof(char*));
right_value750 = (void*)0;
right_value751 = (void*)0;
right_value758 = (void*)0;
right_value759 = (void*)0;
right_value760 = (void*)0;
right_value769 = (void*)0;
right_value770 = (void*)0;
memset(&result_type_497, 0, sizeof(struct sType*));
memset(&var_name_498, 0, sizeof(char*));
memset(&err_499, 0, sizeof(_Bool));
memset(&result_type_497, 0, sizeof(struct sType*));
memset(&var_name_498, 0, sizeof(char*));
memset(&err_499, 0, sizeof(_Bool));
memset(&right_node_500, 0, sizeof(struct sNode*));
memset(&array_initializer_501, 0, sizeof(char*));
right_value771 = (void*)0;
right_value772 = (void*)0;
memset(&buf_502, 0, sizeof(struct buffer*));
memset(&squort_503, 0, sizeof(_Bool));
memset(&dquort_504, 0, sizeof(_Bool));
memset(&nest_505, 0, sizeof(int));
right_value773 = (void*)0;
right_value774 = (void*)0;
right_value775 = (void*)0;
right_value776 = (void*)0;
right_value783 = (void*)0;
right_value784 = (void*)0;
right_value785 = (void*)0;
right_value794 = (void*)0;
    multiple_declare_473=(_Bool)0;
    {
        p_474=info->p;
        sline_475=info->sline;
        if(_if_conditional723=xisalpha(*info->p)||*info->p==95,        _if_conditional723) {
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value735=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_476=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_477=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_478=multiple_assign_var11->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value735, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(err_478) {
                multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value736=parse_variable_name((struct sType*)come_increment_ref_count(type_476),(_Bool)1,info)));
                type_479=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_480=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value736, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional725=!is_type_name(name_480,info)&&*info->p==44,                _if_conditional725) {
                    multiple_declare_473=(_Bool)1;
                }
                come_call_finalizer2(sType_finalize,type_479, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_480 = come_decrement_ref_count2(name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,type_476, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_477 = come_decrement_ref_count2(name_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_474;
        info->sline=sline_475;
    }
    if(multiple_declare_473) {
        multiple_declare_481=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value738=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value737=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "05function.c", 2903, "list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value737, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value738, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(right_value739=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_482=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
        name_483=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        err_484=multiple_assign_var13->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value739, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional727=!err_484,        _if_conditional727) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var14=((struct tuple2$2sTypephcharph*)(right_value740=parse_variable_name((struct sType*)come_increment_ref_count(base_type_482),(_Bool)1,info)));
        type2_485=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
        var_name_486=(char*)come_increment_ref_count(multiple_assign_var14->v2);
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        list$1tuple2$2sTypephcharphph_push_back(multiple_declare_481,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value745=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value744=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function.c", 2916, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type2_485),(char*)come_increment_ref_count(var_name_486))))));
        come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value744, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value745, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional40=*info->p==44,        _while_condtional40) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var15=((struct tuple2$2sTypephcharph*)(right_value746=parse_variable_name((struct sType*)come_increment_ref_count(base_type_482),(_Bool)0,info)));
            type2_490=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            var_name_491=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value746, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_481,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value748=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value747=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function.c", 2926, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type2_490),(char*)come_increment_ref_count(var_name_491))))));
            come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value747, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value748, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,type2_490, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_491 = come_decrement_ref_count2(var_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_492=((void*)0);
        array_initializer_493=((void*)0);
        var_name2_494=(char*)come_increment_ref_count(((char*)(right_value749=__builtin_string(""))));
        right_value749 = come_decrement_ref_count2(right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(base_type_482->mExtern) {
            if(right_node_492) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2938, "struct sNode");
            _inf_obj_value26=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value751=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value750=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "05function.c", 2938, "sExternalGlobalVariable")))),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_481),base_type_482,(char*)come_increment_ref_count(var_name2_494),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value26->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value26->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value26->sline=(void*)sExternalGlobalVariable_sline;
            _inf_value26->sname=(void*)sExternalGlobalVariable_sname;
            _inf_value26->terminated=(void*)sExternalGlobalVariable_terminated;
            _inf_value26->kind=(void*)sExternalGlobalVariable_kind;
            __result462__ = __result_obj__ = ((struct sNode*)(right_value758=_inf_value26));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_481, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_482, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_483 = come_decrement_ref_count2(name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_485, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_486 = come_decrement_ref_count2(var_name_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_492) { right_node_492 = come_decrement_ref_count2(right_node_492, ((struct sNode*)right_node_492)->finalize, ((struct sNode*)right_node_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_493 = come_decrement_ref_count2(array_initializer_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_494 = come_decrement_ref_count2(var_name2_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value750, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value751, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value758) { right_value758 = come_decrement_ref_count2(right_value758, ((struct sNode*)right_value758)->finalize, ((struct sNode*)right_value758)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result462__;
        }
        else {
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2941, "struct sNode");
            _inf_obj_value27=come_increment_ref_count(((struct sGlobalVariable*)(right_value760=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value759=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "05function.c", 2941, "sGlobalVariable")))),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_481),base_type_482,(char*)come_increment_ref_count(var_name2_494),(struct sNode*)come_increment_ref_count(right_node_492),(char*)come_increment_ref_count(array_initializer_493),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sGlobalVariable_finalize;
            _inf_value27->clone=(void*)sGlobalVariable_clone;
            _inf_value27->compile=(void*)sGlobalVariable_compile;
            _inf_value27->sline=(void*)sGlobalVariable_sline;
            _inf_value27->sname=(void*)sGlobalVariable_sname;
            _inf_value27->terminated=(void*)sGlobalVariable_terminated;
            _inf_value27->kind=(void*)sGlobalVariable_kind;
            __result465__ = __result_obj__ = ((struct sNode*)(right_value769=_inf_value27));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_481, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_482, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_483 = come_decrement_ref_count2(name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_485, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_486 = come_decrement_ref_count2(var_name_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_492) { right_node_492 = come_decrement_ref_count2(right_node_492, ((struct sNode*)right_node_492)->finalize, ((struct sNode*)right_node_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_493 = come_decrement_ref_count2(array_initializer_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_494 = come_decrement_ref_count2(var_name2_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGlobalVariable_finalize,right_value759, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGlobalVariable_finalize,right_value760, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value769) { right_value769 = come_decrement_ref_count2(right_value769, ((struct sNode*)right_value769)->finalize, ((struct sNode*)right_value769)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result465__;
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_481, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,base_type_482, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_483 = come_decrement_ref_count2(name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_485, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_486 = come_decrement_ref_count2(var_name_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_492) { right_node_492 = come_decrement_ref_count2(right_node_492, ((struct sNode*)right_node_492)->finalize, ((struct sNode*)right_node_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_493 = come_decrement_ref_count2(array_initializer_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        var_name2_494 = come_decrement_ref_count2(var_name2_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(right_value770=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        result_type_497=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
        var_name_498=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        err_499=multiple_assign_var16->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value770, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional760=!err_499,        _if_conditional760) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        right_node_500=((void*)0);
        array_initializer_501=((void*)0);
        if(_if_conditional761=*info->p==61,        _if_conditional761) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional762=*info->p==123,            _if_conditional762) {
                buf_502=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value772=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value771=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2960, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value771, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value772, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buffer_append_char(buf_502,*info->p);
                info->p++;
                squort_503=(_Bool)0;
                dquort_504=(_Bool)0;
                nest_505=1;
                while(_while_condtional41=1,                _while_condtional41) {
                    if(_if_conditional763=*info->p==0,                    _if_conditional763) {
                        err_msg(info,"unexpected source end in array initiailizer");
                        exit(2);
                    }
                    else {
                        if(_if_conditional764=*info->p==92,                        _if_conditional764) {
                            buffer_append_char(buf_502,*info->p);
                            info->p++;
                            buffer_append_char(buf_502,*info->p);
                            info->p++;
                        }
                        else {
                            if(_if_conditional765=!squort_503&&*info->p==34,                            _if_conditional765) {
                                buffer_append_char(buf_502,*info->p);
                                info->p++;
                                dquort_504=!dquort_504;
                            }
                            else {
                                if(_if_conditional766=!dquort_504&&*info->p==39,                                _if_conditional766) {
                                    buffer_append_char(buf_502,*info->p);
                                    info->p++;
                                    squort_503=!squort_503;
                                }
                                else {
                                    if(_if_conditional767=squort_503||dquort_504,                                    _if_conditional767) {
                                        buffer_append_char(buf_502,*info->p);
                                        info->p++;
                                    }
                                    else {
                                        if(_if_conditional768=*info->p==123,                                        _if_conditional768) {
                                            nest_505++;
                                            buffer_append_char(buf_502,*info->p);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional769=*info->p==125,                                            _if_conditional769) {
                                                nest_505--;
                                                buffer_append_char(buf_502,*info->p);
                                                info->p++;
                                                if(_if_conditional770=nest_505==0,                                                _if_conditional770) {
                                                    skip_spaces_and_lf(info);
                                                    break;
                                                }
                                            }
                                            else {
                                                buffer_append_char(buf_502,*info->p);
                                                info->p++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                __dec_obj297=array_initializer_501;
                array_initializer_501=(char*)come_increment_ref_count(((char*)(right_value773=buffer_to_string(buf_502))));
                __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value773 = come_decrement_ref_count2(right_value773, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,buf_502, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                parse_sharp_v5(info);
                __dec_obj298=right_node_500;
                right_node_500=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value774=expression_v13(info))));
                if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value774) { right_value774 = come_decrement_ref_count2(right_value774, ((struct sNode*)right_value774)->finalize, ((struct sNode*)right_value774)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                parse_sharp_v5(info);
            }
        }
        if(result_type_497->mExtern) {
            if(right_node_500) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3027, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value776=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value775=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "05function.c", 3027, "sExternalGlobalVariable")))),((void*)0),result_type_497,(char*)come_increment_ref_count(var_name_498),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value28->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value28->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value28->sline=(void*)sExternalGlobalVariable_sline;
            _inf_value28->sname=(void*)sExternalGlobalVariable_sname;
            _inf_value28->terminated=(void*)sExternalGlobalVariable_terminated;
            _inf_value28->kind=(void*)sExternalGlobalVariable_kind;
            __result468__ = __result_obj__ = ((struct sNode*)(right_value783=_inf_value28));
            come_call_finalizer2(sType_finalize,result_type_497, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_498 = come_decrement_ref_count2(var_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_500) { right_node_500 = come_decrement_ref_count2(right_node_500, ((struct sNode*)right_node_500)->finalize, ((struct sNode*)right_node_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_501 = come_decrement_ref_count2(array_initializer_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value775, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value776, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value783) { right_value783 = come_decrement_ref_count2(right_value783, ((struct sNode*)right_value783)->finalize, ((struct sNode*)right_value783)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result468__;
        }
        else {
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3030, "struct sNode");
            _inf_obj_value29=come_increment_ref_count(((struct sGlobalVariable*)(right_value785=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value784=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "05function.c", 3030, "sGlobalVariable")))),((void*)0),result_type_497,(char*)come_increment_ref_count(var_name_498),(struct sNode*)come_increment_ref_count(right_node_500),(char*)come_increment_ref_count(array_initializer_501),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sGlobalVariable_finalize;
            _inf_value29->clone=(void*)sGlobalVariable_clone;
            _inf_value29->compile=(void*)sGlobalVariable_compile;
            _inf_value29->sline=(void*)sGlobalVariable_sline;
            _inf_value29->sname=(void*)sGlobalVariable_sname;
            _inf_value29->terminated=(void*)sGlobalVariable_terminated;
            _inf_value29->kind=(void*)sGlobalVariable_kind;
            __result471__ = __result_obj__ = ((struct sNode*)(right_value794=_inf_value29));
            come_call_finalizer2(sType_finalize,result_type_497, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_498 = come_decrement_ref_count2(var_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_500) { right_node_500 = come_decrement_ref_count2(right_node_500, ((struct sNode*)right_node_500)->finalize, ((struct sNode*)right_node_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_501 = come_decrement_ref_count2(array_initializer_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGlobalVariable_finalize,right_value784, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGlobalVariable_finalize,right_value785, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value794) { right_value794 = come_decrement_ref_count2(right_value794, ((struct sNode*)right_value794)->finalize, ((struct sNode*)right_value794)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result471__;
        }
        come_call_finalizer2(sType_finalize,result_type_497, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_498 = come_decrement_ref_count2(var_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_500) { right_node_500 = come_decrement_ref_count2(right_node_500, ((struct sNode*)right_node_500)->finalize, ((struct sNode*)right_node_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_501 = come_decrement_ref_count2(array_initializer_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result472__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result472__;
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional728;
void* right_value741;
struct list_item$1tuple2$2sTypephcharphph* litem_487;
struct tuple2$2sTypephcharph* __dec_obj280;
_Bool _if_conditional729;
void* right_value742;
struct list_item$1tuple2$2sTypephcharphph* litem_488;
struct tuple2$2sTypephcharph* __dec_obj281;
void* right_value743;
struct list_item$1tuple2$2sTypephcharphph* litem_489;
struct tuple2$2sTypephcharph* __dec_obj282;
struct list$1tuple2$2sTypephcharphph* __result458__;
memset(&__result_obj__, 0, sizeof(void*));
right_value741 = (void*)0;
memset(&litem_487, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value742 = (void*)0;
memset(&litem_488, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value743 = (void*)0;
memset(&litem_489, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
            if(_if_conditional728=self->len==0,            _if_conditional728) {
                litem_487=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value741=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2sTypephcharphph"))));
                come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value741, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_487->prev=((void*)0);
                litem_487->next=((void*)0);
                __dec_obj280=litem_487->item;
                litem_487->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_487;
                self->head=litem_487;
            }
            else {
                if(_if_conditional729=self->len==1,                _if_conditional729) {
                    litem_488=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value742=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value742, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_488->prev=self->head;
                    litem_488->next=((void*)0);
                    __dec_obj281=litem_488->item;
                    litem_488->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_488;
                    self->head->next=litem_488;
                }
                else {
                    litem_489=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value743=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value743, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_489->prev=self->tail;
                    litem_489->next=((void*)0);
                    __dec_obj282=litem_489->item;
                    litem_489->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_489;
                    self->tail=litem_489;
                }
            }
            self->len++;
            __result458__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result458__;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj283;
char* __dec_obj284;
struct tuple2$2sTypephcharph* __result459__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj283=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer2(sType_finalize,__dec_obj283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __dec_obj284=self->v2;
            self->v2=(char*)come_increment_ref_count(v2);
            __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
            __result459__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result459__;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional773;
_Bool _if_conditional774;
_Bool _if_conditional775;
_Bool _if_conditional776;
_Bool _if_conditional777;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional773=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional773) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional774=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional774) {
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional775=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional775) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional776=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional776) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional777=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional777) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional778;
struct sExternalGlobalVariable* __result466__;
void* right_value777;
struct sExternalGlobalVariable* result_506;
_Bool _if_conditional779;
void* right_value778;
struct sType* __dec_obj299;
_Bool _if_conditional780;
void* right_value779;
char* __dec_obj300;
_Bool _if_conditional781;
_Bool _if_conditional782;
void* right_value780;
char* __dec_obj301;
_Bool _if_conditional783;
void* right_value781;
struct list$1tuple2$2sTypephcharphph* __dec_obj302;
_Bool _if_conditional784;
void* right_value782;
char* __dec_obj303;
struct sExternalGlobalVariable* __result467__;
memset(&__result_obj__, 0, sizeof(void*));
right_value777 = (void*)0;
memset(&result_506, 0, sizeof(struct sExternalGlobalVariable*));
right_value778 = (void*)0;
right_value779 = (void*)0;
right_value780 = (void*)0;
right_value781 = (void*)0;
right_value782 = (void*)0;
                if(_if_conditional778=self==(void*)0,                _if_conditional778) {
                    __result466__ = __result_obj__ = (void*)0;
                    return __result466__;
                }
                result_506=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value777=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "sExternalGlobalVariable_clone", 3, "sExternalGlobalVariable"))));
                come_call_finalizer2(sExternalGlobalVariable_finalize,right_value777, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional779=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional779) {
                    __dec_obj299=result_506->type;
                    result_506->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value778=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value778, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional780=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional780) {
                    __dec_obj300=result_506->name;
                    result_506->name=(char*)come_increment_ref_count(((char*)(right_value779=string_clone(self->name))));
                    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value779 = come_decrement_ref_count2(right_value779, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional781=self!=((void*)0),                _if_conditional781) {
                    result_506->sline=self->sline;
                }
                if(_if_conditional782=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional782) {
                    __dec_obj301=result_506->sname;
                    result_506->sname=(char*)come_increment_ref_count(((char*)(right_value780=string_clone(self->sname))));
                    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value780 = come_decrement_ref_count2(right_value780, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional783=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional783) {
                    __dec_obj302=result_506->multiple_declare;
                    result_506->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value781=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value781, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional784=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional784) {
                    __dec_obj303=result_506->mDeclareSName;
                    result_506->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value782=string_clone(self->mDeclareSName))));
                    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value782 = come_decrement_ref_count2(right_value782, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result467__ = __result_obj__ = result_506;
                come_call_finalizer2(sExternalGlobalVariable_finalize,result_506, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result467__;
                come_call_finalizer2(sExternalGlobalVariable_finalize,result_506, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGlobalVariable_finalize(struct sGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional785;
_Bool _if_conditional786;
_Bool _if_conditional787;
_Bool _if_conditional788;
_Bool _if_conditional789;
_Bool _if_conditional790;
_Bool _if_conditional791;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional785=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional785) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional786=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional786) {
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional787=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional787) {
                    if(self->right_node) { self->right_node = come_decrement_ref_count2(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional788=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional788) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional789=self!=((void*)0)&&self->array_initializer!=((void*)0),                _if_conditional789) {
                    self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional790=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional790) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional791=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional791) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional792;
struct sGlobalVariable* __result469__;
void* right_value786;
struct sGlobalVariable* result_507;
_Bool _if_conditional793;
void* right_value787;
struct sType* __dec_obj304;
_Bool _if_conditional794;
void* right_value788;
char* __dec_obj305;
_Bool _if_conditional795;
void* right_value789;
struct sNode* __dec_obj306;
_Bool _if_conditional796;
_Bool _if_conditional797;
void* right_value790;
char* __dec_obj307;
_Bool _if_conditional798;
void* right_value791;
char* __dec_obj308;
_Bool _if_conditional799;
void* right_value792;
struct list$1tuple2$2sTypephcharphph* __dec_obj309;
_Bool _if_conditional800;
void* right_value793;
char* __dec_obj310;
struct sGlobalVariable* __result470__;
memset(&__result_obj__, 0, sizeof(void*));
right_value786 = (void*)0;
memset(&result_507, 0, sizeof(struct sGlobalVariable*));
right_value787 = (void*)0;
right_value788 = (void*)0;
right_value789 = (void*)0;
right_value790 = (void*)0;
right_value791 = (void*)0;
right_value792 = (void*)0;
right_value793 = (void*)0;
                if(_if_conditional792=self==(void*)0,                _if_conditional792) {
                    __result469__ = __result_obj__ = (void*)0;
                    return __result469__;
                }
                result_507=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value786=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "sGlobalVariable_clone", 3, "sGlobalVariable"))));
                come_call_finalizer2(sGlobalVariable_finalize,right_value786, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional793=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional793) {
                    __dec_obj304=result_507->type;
                    result_507->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value787=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value787, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional794=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional794) {
                    __dec_obj305=result_507->name;
                    result_507->name=(char*)come_increment_ref_count(((char*)(right_value788=string_clone(self->name))));
                    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value788 = come_decrement_ref_count2(right_value788, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional795=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional795) {
                    __dec_obj306=result_507->right_node;
                    result_507->right_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value789=sNode_clone(self->right_node))));
                    if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value789) { right_value789 = come_decrement_ref_count2(right_value789, ((struct sNode*)right_value789)->finalize, ((struct sNode*)right_value789)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional796=self!=((void*)0),                _if_conditional796) {
                    result_507->sline=self->sline;
                }
                if(_if_conditional797=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional797) {
                    __dec_obj307=result_507->sname;
                    result_507->sname=(char*)come_increment_ref_count(((char*)(right_value790=string_clone(self->sname))));
                    __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value790 = come_decrement_ref_count2(right_value790, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional798=self!=((void*)0)&&self->array_initializer!=((void*)0),                _if_conditional798) {
                    __dec_obj308=result_507->array_initializer;
                    result_507->array_initializer=(char*)come_increment_ref_count(((char*)(right_value791=string_clone(self->array_initializer))));
                    __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value791 = come_decrement_ref_count2(right_value791, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional799=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional799) {
                    __dec_obj309=result_507->multiple_declare;
                    result_507->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value792=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value792, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional800=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional800) {
                    __dec_obj310=result_507->mDeclareSName;
                    result_507->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value793=string_clone(self->mDeclareSName))));
                    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value793 = come_decrement_ref_count2(right_value793, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result470__ = __result_obj__ = result_507;
                come_call_finalizer2(sGlobalVariable_finalize,result_507, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result470__;
                come_call_finalizer2(sGlobalVariable_finalize,result_507, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
struct sNode* __result473__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result473__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result473__;
}

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result474__;
memset(&__result_obj__, 0, sizeof(void*));
    __result474__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result474__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

