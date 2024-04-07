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
void* right_value121;
void* right_value122;
_Bool _if_conditional158;
void* right_value123;
struct sFun* come_fun_80;
_Bool _if_conditional159;
void* right_value124;
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
        if(_if_conditional158=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional158) {
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
        if(_if_conditional159=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional159) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value124=xsprintf("come_heap_final();\n"))));
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    __result72__ = (_Bool)1;
    return __result72__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value125;
char* __dec_obj52;
struct sLineNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value126;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    __result75__ = __result_obj__ = ((char*)(right_value126=__builtin_string(self->sname)));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value127;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
    __result77__ = __result_obj__ = ((char*)(right_value127=__builtin_string("sLineNode")));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
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
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&come_value_81, 0, sizeof(struct CVALUE*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
    come_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 279, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=come_value_81->c_value;
    come_value_81->c_value=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("%d",info->sline))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=come_value_81->type;
    come_value_81->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value130=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 282, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_81->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_81));
    add_come_last_code(info,"%s;\n",come_value_81->c_value);
    __result78__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result78__;
    come_call_finalizer2(CVALUE_finalize,come_value_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value132;
char* __dec_obj55;
struct sSNameNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
    self->sline=info->sline;
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value133;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value133=__builtin_string(self->sname)));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value134;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
    __result83__ = __result_obj__ = ((char*)(right_value134=__builtin_string("sSNameNode")));
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
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
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&come_value_82, 0, sizeof(struct CVALUE*));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
    come_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value135=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 330, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=come_value_82->c_value;
    come_value_82->c_value=(char*)come_increment_ref_count(((char*)(right_value136=xsprintf("\"%s\"",info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj57=come_value_82->type;
    come_value_82->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value137=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 333, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_82->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_82));
    add_come_last_code(info,"%s;\n",come_value_82->c_value);
    __result84__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer2(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value139;
char* __dec_obj58;
struct sFuncNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value140;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value140=__builtin_string(self->sname)));
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value141;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
    __result89__ = __result_obj__ = ((char*)(right_value141=__builtin_string("sFuncNode")));
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
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
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
memset(&come_value_83, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
    come_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 381, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=come_value_83->c_value;
    come_value_83->c_value=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("\"%s\"",info->come_fun->mName))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj60=come_value_83->type;
    come_value_83->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 384, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_83->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_83));
    add_come_last_code(info,"%s;\n",come_value_83->c_value);
    __result90__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result90__;
    come_call_finalizer2(CVALUE_finalize,come_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value146;
char* __dec_obj61;
struct sCallerFuncNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
    self->sline=info->sline;
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value147;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    __result93__ = __result_obj__ = ((char*)(right_value147=__builtin_string(self->sname)));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value148;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(right_value148=__builtin_string("sCallerFuncNode")));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value149;
struct CVALUE* come_value_84;
_Bool _if_conditional172;
void* right_value150;
char* __dec_obj62;
void* right_value151;
char* __dec_obj63;
void* right_value152;
void* right_value153;
struct sType* __dec_obj64;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
memset(&come_value_84, 0, sizeof(struct CVALUE*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
    come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 433, "CVALUE"))));
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
    come_value_84->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value152=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 441, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_84->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
    add_come_last_code(info,"%s;\n",come_value_84->c_value);
    __result96__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value154;
char* __dec_obj65;
struct sCallerLineNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
    self->sline=info->sline;
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value155;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value155=__builtin_string(self->sname)));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value156;
struct CVALUE* come_value_85;
void* right_value157;
char* __dec_obj66;
void* right_value158;
void* right_value159;
struct sType* __dec_obj67;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&come_value_85, 0, sizeof(struct CVALUE*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
    come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value156=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 485, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj66=come_value_85->c_value;
    come_value_85->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%d",info->caller_line))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj67=come_value_85->type;
    come_value_85->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value158=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 488, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_85->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_85));
    add_come_last_code(info,"%s;\n",come_value_85->c_value);
    __result101__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result101__;
    come_call_finalizer2(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(){
void* __result_obj__;
void* right_value160;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value160=__builtin_string("sCallerLineNode")));
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
char* __dec_obj68;
struct sCallerSNameNode* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    self->sline=info->sline;
    __dec_obj68=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string(info->sname))));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value162;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    __result105__ = __result_obj__ = ((char*)(right_value162=__builtin_string(self->sname)));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value163;
struct CVALUE* come_value_86;
void* right_value164;
char* __dec_obj69;
void* right_value165;
void* right_value166;
struct sType* __dec_obj70;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
memset(&come_value_86, 0, sizeof(struct CVALUE*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
    come_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 536, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj69=come_value_86->c_value;
    come_value_86->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("\"%s\"",info->caller_sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj70=come_value_86->type;
    come_value_86->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 539, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_86->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_86));
    add_come_last_code(info,"%s;\n",come_value_86->c_value);
    __result107__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result107__;
    come_call_finalizer2(CVALUE_finalize,come_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(){
void* __result_obj__;
void* right_value167;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    __result108__ = __result_obj__ = ((char*)(right_value167=__builtin_string("sCallerSNameNode")));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

struct sParentReturnNode* sParentReturnNode_initialize(struct sParentReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj71;
void* right_value168;
char* __dec_obj72;
void* right_value169;
char* __dec_obj73;
struct sParentReturnNode* __result109__;
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
void* right_value170;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value170=__builtin_string(self->sname)));
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value171;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value171=__builtin_string("sParentReturnNode")));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sParentReturnNode_compile(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional182;
_Bool __result114__;
struct sFun* come_fun_87;
void* right_value172;
struct sType* result_type_88;
void* right_value173;
struct sType* result_type2_89;
struct sType* result_type3_90;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool __result115__;
void* right_value174;
struct CVALUE* come_value_91;
_Bool _if_conditional186;
int right_value_id_92;
_Bool _if_conditional187;
void* right_value175;
char* __dec_obj74;
void* right_value176;
char* var_name2_93;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
_Bool _if_conditional188;
struct sFun* come_fun_94;
void* right_value181;
char* var_name2_95;
void* right_value182;
void* right_value183;
void* right_value184;
_Bool _if_conditional189;
_Bool __result116__;
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
    if(_if_conditional182=info->current_stack_frame_struct==((void*)0),    _if_conditional182) {
        err_msg(info,"not in method block");
        __result114__ = (_Bool)0;
        return __result114__;
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
        if(_if_conditional185=!node_compile(self->value,info),        _if_conditional185) {
            __result115__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result115__;
        }
        come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(_if_conditional186=come_value_91->type->mHeap&&come_value_91->var==((void*)0),        _if_conditional186) {
            right_value_id_92=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_91->c_value));
            if(_if_conditional187=right_value_id_92!=-1,            _if_conditional187) {
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
        if(_if_conditional188=string_operator_equals(result_type3_90->mClass->mName,"void")&&result_type3_90->mPointerNum==0,        _if_conditional188) {
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
        if(_if_conditional189=string_operator_equals(result_type3_90->mClass->mName,"void")&&result_type3_90->mPointerNum==0,        _if_conditional189) {
            add_come_code(info,"return;");
        }
        else {
            add_come_code(info,"return (void*)0;");
        }
        var_name2_95 = come_decrement_ref_count2(var_name2_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->last_statment_is_return=(_Bool)1;
    __result116__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result116__;
    come_call_finalizer2(sType_finalize,result_type_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sParentBreakNode* sParentBreakNode_initialize(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value185;
char* __dec_obj75;
struct sParentBreakNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
    self->sline=info->sline;
    __dec_obj75=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(info->sname))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value186;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
    __result119__ = __result_obj__ = ((char*)(right_value186=__builtin_string(self->sname)));
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value187;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
    __result121__ = __result_obj__ = ((char*)(right_value187=__builtin_string("sParentBreakNode")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result121__;
}

_Bool sParentBreakNode_compile(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional191;
_Bool __result122__;
struct sFun* come_fun_96;
void* right_value188;
struct sType* result_type_97;
void* right_value189;
struct sType* result_type2_98;
struct sType* result_type3_99;
_Bool _if_conditional192;
void* right_value190;
char* var_name2_100;
void* right_value191;
void* right_value192;
void* right_value193;
_Bool _if_conditional193;
_Bool __result123__;
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
    if(_if_conditional191=info->current_stack_frame_struct==((void*)0),    _if_conditional191) {
        err_msg(info,"not in method block");
        __result122__ = (_Bool)0;
        return __result122__;
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
    if(_if_conditional193=string_operator_equals(result_type3_99->mClass->mName,"void")&&result_type3_99->mPointerNum==0,    _if_conditional193) {
        add_come_code(info,"return;");
    }
    else {
        add_come_code(info,"return (void*)0;");
    }
    info->last_statment_is_return=(_Bool)1;
    __result123__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_100 = come_decrement_ref_count2(var_name2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result123__;
    come_call_finalizer2(sType_finalize,result_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_100 = come_decrement_ref_count2(var_name2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sParentContinueNode* sParentContinueNode_initialize(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value194;
char* __dec_obj76;
struct sParentContinueNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    self->sline=info->sline;
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value195;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
    __result126__ = __result_obj__ = ((char*)(right_value195=__builtin_string(self->sname)));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value196;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
    __result128__ = __result_obj__ = ((char*)(right_value196=__builtin_string("sParentContinueNode")));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result128__;
}

_Bool sParentContinueNode_compile(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional195;
_Bool __result129__;
struct sFun* come_fun_101;
void* right_value197;
struct sType* result_type_102;
void* right_value198;
struct sType* result_type2_103;
struct sType* result_type3_104;
_Bool _if_conditional196;
void* right_value199;
char* var_name2_105;
void* right_value200;
void* right_value201;
void* right_value202;
_Bool _if_conditional197;
_Bool __result130__;
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
    if(_if_conditional195=info->current_stack_frame_struct==((void*)0),    _if_conditional195) {
        err_msg(info,"not in method block");
        __result129__ = (_Bool)0;
        return __result129__;
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
    if(_if_conditional197=string_operator_equals(result_type3_104->mClass->mName,"void")&&result_type3_104->mPointerNum==0,    _if_conditional197) {
        add_come_code(info,"return;");
    }
    else {
        add_come_code(info,"return (void*)0;");
    }
    info->last_statment_is_return=(_Bool)1;
    __result130__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_105 = come_decrement_ref_count2(var_name2_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result130__;
    come_call_finalizer2(sType_finalize,result_type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_105 = come_decrement_ref_count2(var_name2_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj77;
void* right_value203;
char* __dec_obj78;
struct sDerefferenceNode* __result131__;
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
void* right_value204;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    __result133__ = __result_obj__ = ((char*)(right_value204=__builtin_string(self->sname)));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value205;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    __result135__ = __result_obj__ = ((char*)(right_value205=__builtin_string("sDerefferenceNode")));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_106;
_Bool _if_conditional200;
_Bool __result136__;
void* right_value206;
struct CVALUE* left_value_107;
_Bool _if_conditional201;
void* right_value207;
void* right_value208;
char* __dec_obj79;
struct sType* type_108;
char* fun_name_109;
_Bool calling_fun_110;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value209;
struct CVALUE* come_value_111;
void* right_value210;
char* __dec_obj80;
void* right_value211;
struct sType* __dec_obj81;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_106, 0, sizeof(struct sNode*));
right_value206 = (void*)0;
memset(&left_value_107, 0, sizeof(struct CVALUE*));
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&type_108, 0, sizeof(struct sType*));
memset(&fun_name_109, 0, sizeof(char*));
memset(&calling_fun_110, 0, sizeof(_Bool));
right_value209 = (void*)0;
memset(&come_value_111, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
    value_106=self->value;
    if(_if_conditional200=!node_compile(value_106,info),    _if_conditional200) {
        __result136__ = (_Bool)0;
        return __result136__;
    }
    left_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(gComeDebug) {
        __dec_obj79=left_value_107->c_value;
        left_value_107->c_value=(char*)come_increment_ref_count(((char*)(right_value208=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value207=make_type_name_string(left_value_107->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_107->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    type_108=(struct sType*)come_increment_ref_count(left_value_107->type);
    fun_name_109="operator_derefference";
    if(self->mQuote) {
        calling_fun_110=(_Bool)0;
    }
    else {
        calling_fun_110=operator_overload_fun_self(type_108,fun_name_109,left_value_107,info);
    }
    if(_if_conditional203=!calling_fun_110,    _if_conditional203) {
        come_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 894, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj80=come_value_111->c_value;
        come_value_111->c_value=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("*%s",left_value_107->c_value))));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj81=come_value_111->type;
        come_value_111->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(left_value_107->type))));
        come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_111->type->mPointerNum--;
        come_value_111->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_111->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_111));
        come_call_finalizer2(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result137__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result137__;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj82;
void* right_value212;
char* __dec_obj83;
struct sRefferenceNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
    __dec_obj82=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(info->sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value213;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
    __result140__ = __result_obj__ = ((char*)(right_value213=__builtin_string(self->sname)));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value214;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
    __result142__ = __result_obj__ = ((char*)(right_value214=__builtin_string("sRefferenceNode")));
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_112;
_Bool _if_conditional206;
_Bool __result143__;
void* right_value215;
struct CVALUE* left_value_113;
void* right_value216;
struct CVALUE* come_value_114;
void* right_value217;
char* __dec_obj84;
void* right_value218;
struct sType* __dec_obj85;
_Bool __result144__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_112, 0, sizeof(struct sNode*));
right_value215 = (void*)0;
memset(&left_value_113, 0, sizeof(struct CVALUE*));
right_value216 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value217 = (void*)0;
right_value218 = (void*)0;
    value_112=self->value;
    if(_if_conditional206=!node_compile(value_112,info),    _if_conditional206) {
        __result143__ = (_Bool)0;
        return __result143__;
    }
    left_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value215=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 957, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=come_value_114->c_value;
    come_value_114->c_value=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("&%s",left_value_113->c_value))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj85=come_value_114->type;
    come_value_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_clone(left_value_113->type))));
    come_call_finalizer2(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_114->type->mPointerNum++;
    come_value_114->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_114->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_114));
    __result144__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result144__;
    __result145__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result145__;
    come_call_finalizer2(CVALUE_finalize,left_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj86;
void* right_value219;
char* __dec_obj87;
struct sReverseNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
    __dec_obj86=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value220;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
    __result148__ = __result_obj__ = ((char*)(right_value220=__builtin_string(self->sname)));
    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value221;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
    __result150__ = __result_obj__ = ((char*)(right_value221=__builtin_string("sReverseNode")));
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_115;
_Bool _if_conditional209;
_Bool __result151__;
void* right_value222;
struct CVALUE* left_value_116;
void* right_value223;
struct CVALUE* come_value_117;
void* right_value224;
char* __dec_obj88;
void* right_value225;
struct sType* __dec_obj89;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_115, 0, sizeof(struct sNode*));
right_value222 = (void*)0;
memset(&left_value_116, 0, sizeof(struct CVALUE*));
right_value223 = (void*)0;
memset(&come_value_117, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
right_value225 = (void*)0;
    value_115=self->value;
    if(_if_conditional209=!node_compile(value_115,info),    _if_conditional209) {
        __result151__ = (_Bool)0;
        return __result151__;
    }
    left_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1020, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=come_value_117->c_value;
    come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("!%s",left_value_116->c_value))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj89=come_value_117->type;
    come_value_117->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(left_value_116->type))));
    come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_117->type->mPointerNum--;
    come_value_117->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_117->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
    __result152__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result152__;
    come_call_finalizer2(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value226;
char* __dec_obj90;
void* right_value236;
struct list$1tuple2$2charphsNodephph* __dec_obj96;
void* right_value237;
char* __dec_obj97;
struct sFunCallNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
    __dec_obj90=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(fun_name))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj96=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value236=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(info->sname))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result160__ = __result_obj__ = self;
    come_call_finalizer2(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result160__;
    come_call_finalizer2(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional210;
struct list$1tuple2$2charphsNodephph* __result154__;
void* right_value227;
void* right_value228;
struct list$1tuple2$2charphsNodephph* result_120;
struct list_item$1tuple2$2charphsNodephph* it_121;
_Bool _while_condtional11;
void* right_value235;
struct list$1tuple2$2charphsNodephph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&result_120, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_121, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value235 = (void*)0;
        if(_if_conditional210=self==((void*)0),        _if_conditional210) {
            __result154__ = __result_obj__ = ((void*)0);
            return __result154__;
        }
        result_120=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value228=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value227=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_121=self->head;
        while(_while_condtional11=it_121!=((void*)0),        _while_condtional11) {
            list$1tuple2$2charphsNodephph_add(result_120,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value235=tuple2$2charphsNodephp_clone(it_121->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_121=it_121->next;
        }
        __result159__ = __result_obj__ = result_120;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_120, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result159__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsNodephph* it_118;
_Bool _while_condtional10;
struct list_item$1tuple2$2charphsNodephph* prev_it_119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_118, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_118=self->head;
                while(_while_condtional10=it_118!=((void*)0),                _while_condtional10) {
                    prev_it_119=it_118;
                    it_118=it_118->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional211=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional211) {
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional212;
_Bool _if_conditional213;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional212=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional212) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional213=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional213) {
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional214;
void* right_value229;
struct list_item$1tuple2$2charphsNodephph* litem_122;
struct tuple2$2charphsNodeph* __dec_obj91;
_Bool _if_conditional217;
void* right_value230;
struct list_item$1tuple2$2charphsNodephph* litem_123;
struct tuple2$2charphsNodeph* __dec_obj92;
void* right_value231;
struct list_item$1tuple2$2charphsNodephph* litem_124;
struct tuple2$2charphsNodeph* __dec_obj93;
struct list$1tuple2$2charphsNodephph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value229 = (void*)0;
memset(&litem_122, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value230 = (void*)0;
memset(&litem_123, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value231 = (void*)0;
memset(&litem_124, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional214=self->len==0,                _if_conditional214) {
                    litem_122=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value229=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_122->prev=((void*)0);
                    litem_122->next=((void*)0);
                    __dec_obj91=litem_122->item;
                    litem_122->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_122;
                    self->head=litem_122;
                }
                else {
                    if(_if_conditional217=self->len==1,                    _if_conditional217) {
                        litem_123=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value230=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_123->prev=self->head;
                        litem_123->next=((void*)0);
                        __dec_obj92=litem_123->item;
                        litem_123->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_123;
                        self->head->next=litem_123;
                    }
                    else {
                        litem_124=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value231=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_124->prev=self->tail;
                        litem_124->next=((void*)0);
                        __dec_obj93=litem_124->item;
                        litem_124->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_124;
                        self->tail=litem_124;
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
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional215=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional215) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional216=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional216) {
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional218;
struct tuple2$2charphsNodeph* __result157__;
void* right_value232;
struct tuple2$2charphsNodeph* result_125;
_Bool _if_conditional219;
void* right_value233;
char* __dec_obj94;
_Bool _if_conditional220;
void* right_value234;
struct sNode* __dec_obj95;
struct tuple2$2charphsNodeph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
memset(&result_125, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value233 = (void*)0;
right_value234 = (void*)0;
                if(_if_conditional218=self==(void*)0,                _if_conditional218) {
                    __result157__ = __result_obj__ = (void*)0;
                    return __result157__;
                }
                result_125=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value232=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional219=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional219) {
                    __dec_obj94=result_125->v1;
                    result_125->v1=(char*)come_increment_ref_count(((char*)(right_value233=string_clone(self->v1))));
                    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional220=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional220) {
                    __dec_obj95=result_125->v2;
                    result_125->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=sNode_clone(self->v2))));
                    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value234) { right_value234 = come_decrement_ref_count2(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result158__ = __result_obj__ = result_125;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result158__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value238;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
    __result162__ = __result_obj__ = ((char*)(right_value238=__builtin_string(self->sname)));
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value239;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value239 = (void*)0;
    __result164__ = __result_obj__ = ((char*)(right_value239=__builtin_string("sFunCallNode")));
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_126;
struct list$1tuple2$2charphsNodephph* params_127;
struct sVar* var__128;
_Bool _if_conditional224;
_Bool _if_conditional225;
struct sType* lambda_type_129;
void* right_value240;
struct sType* result_type_130;
void* right_value241;
void* right_value242;
struct list$1CVALUEph* come_params_133;
_Bool _if_conditional226;
_Bool __result167__;
int i_134;
struct list$1tuple2$2charphsNodephph* o2_saved_135;
struct tuple2$2charphsNodeph* it_138;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_141;
struct sNode* node_142;
_Bool _if_conditional231;
_Bool __result175__;
void* right_value243;
struct CVALUE* come_value_143;
_Bool _if_conditional232;
void* right_value244;
void* right_value245;
void* right_value246;
_Bool _if_conditional233;
void* right_value247;
void* right_value248;
struct buffer* buf_144;
int j_145;
struct list$1CVALUEph* o2_saved_146;
struct CVALUE* it_149;
_Bool _if_conditional238;
void* right_value249;
struct CVALUE* come_value_152;
void* right_value250;
char* __dec_obj98;
_Bool _if_conditional239;
void* right_value251;
char* __dec_obj99;
void* right_value252;
struct sType* __dec_obj100;
_Bool _if_conditional240;
void* right_value253;
void* right_value254;
struct list$1CVALUEph* come_params_153;
struct list$1tuple2$2charphsNodephph* o2_saved_154;
struct tuple2$2charphsNodeph* it_155;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_156;
struct sNode* node_157;
_Bool _if_conditional241;
_Bool __result184__;
void* right_value255;
struct CVALUE* come_value_158;
void* right_value256;
void* right_value257;
struct buffer* buf_159;
int j_160;
struct list$1CVALUEph* o2_saved_161;
struct CVALUE* it_162;
_Bool _if_conditional242;
void* right_value258;
struct CVALUE* come_value_163;
void* right_value259;
char* __dec_obj101;
_Bool _if_conditional243;
void* right_value260;
void* right_value261;
struct sType* __dec_obj102;
_Bool _if_conditional244;
void* right_value262;
void* right_value263;
struct sType* __dec_obj103;
_Bool _if_conditional245;
void* right_value264;
void* right_value265;
struct sType* __dec_obj104;
_Bool _if_conditional246;
void* right_value266;
void* right_value267;
struct sType* __dec_obj105;
_Bool __result185__;
_Bool _if_conditional247;
void* right_value268;
char* __dec_obj106;
_Bool _if_conditional248;
void* right_value269;
char* __dec_obj107;
_Bool _if_conditional249;
char* p_164;
int version_165;
_Bool _while_condtional13;
_Bool _if_conditional250;
char* p2_166;
_Bool _while_condtional14;
int i_168;
void* right_value270;
char* new_fun_name_169;
_Bool _if_conditional251;
void* right_value271;
char* __dec_obj108;
_Bool _if_conditional252;
void* right_value272;
char* new_fun_name_170;
_Bool _if_conditional253;
void* right_value273;
char* __dec_obj109;
_Bool _if_conditional254;
_Bool __result186__;
int i_171;
void* right_value274;
char* new_fun_name_172;
_Bool _if_conditional255;
void* right_value275;
char* __dec_obj110;
struct sFun* fun_175;
_Bool _if_conditional260;
_Bool __result191__;
void* right_value276;
struct sType* result_type_176;
void* right_value277;
void* right_value278;
struct list$1sTypeph* param_types_177;
struct list$1sTypeph* o2_saved_178;
struct sType* it_181;
void* right_value279;
void* right_value280;
struct sType* it2_184;
void* right_value284;
void* right_value285;
struct sType* __dec_obj114;
void* right_value286;
void* right_value287;
struct list$1CVALUEph* come_params_188;
void* right_value288;
void* right_value294;
struct map$2charphCVALUEph* label_params_194;
int i_195;
struct list$1tuple2$2charphsNodephph* o2_saved_196;
struct tuple2$2charphsNodeph* it_197;
struct tuple2$2charphsNodeph* multiple_assign_var7;
char* label_198;
struct sNode* node_199;
_Bool _if_conditional271;
_Bool __result202__;
void* right_value295;
struct CVALUE* come_value_200;
_Bool _if_conditional272;
_Bool _if_conditional273;
int n_201;
struct list$1charph* o2_saved_202;
char* it_205;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value296;
void* right_value297;
void* right_value298;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value299;
void* right_value300;
void* right_value301;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value308;
_Bool _if_conditional331;
void* right_value309;
char* default_param_255;
char* param_name_256;
struct CVALUE* come_value_260;
_Bool _if_conditional338;
struct buffer* source_261;
char* p_262;
char* head_263;
int sline_264;
void* right_value310;
struct buffer* __dec_obj116;
void* right_value311;
struct sNode* node_265;
_Bool _if_conditional339;
_Bool __result240__;
struct buffer* __dec_obj117;
void* right_value312;
struct CVALUE* come_value_266;
void* right_value313;
void* right_value314;
void* right_value315;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool __result241__;
_Bool _if_conditional342;
char* param_name_267;
struct CVALUE* come_value_268;
_Bool _if_conditional343;
void* right_value316;
void* right_value317;
void* right_value318;
void* right_value322;
_Bool _if_conditional351;
_Bool __result248__;
void* right_value323;
void* right_value324;
struct buffer* buf_272;
int j_273;
struct list$1CVALUEph* o2_saved_274;
struct CVALUE* it_275;
_Bool _if_conditional352;
void* right_value325;
struct CVALUE* come_value_276;
void* right_value326;
char* __dec_obj121;
void* right_value327;
struct sType* __dec_obj122;
_Bool _if_conditional353;
void* right_value328;
char* __dec_obj123;
_Bool _if_conditional354;
_Bool _if_conditional355;
void* right_value329;
char* __dec_obj124;
_Bool __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_126, 0, sizeof(char*));
memset(&params_127, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&var__128, 0, sizeof(struct sVar*));
memset(&lambda_type_129, 0, sizeof(struct sType*));
right_value240 = (void*)0;
memset(&result_type_130, 0, sizeof(struct sType*));
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&come_params_133, 0, sizeof(struct list$1CVALUEph*));
memset(&i_134, 0, sizeof(int));
memset(&o2_saved_135, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_138, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_141, 0, sizeof(char*));
memset(&node_142, 0, sizeof(struct sNode*));
memset(&label_141, 0, sizeof(char*));
memset(&node_142, 0, sizeof(struct sNode*));
right_value243 = (void*)0;
memset(&come_value_143, 0, sizeof(struct CVALUE*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&buf_144, 0, sizeof(struct buffer*));
memset(&j_145, 0, sizeof(int));
memset(&o2_saved_146, 0, sizeof(struct list$1CVALUEph*));
memset(&it_149, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
memset(&come_value_152, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&come_params_153, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_154, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_155, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_156, 0, sizeof(char*));
memset(&node_157, 0, sizeof(struct sNode*));
memset(&label_156, 0, sizeof(char*));
memset(&node_157, 0, sizeof(struct sNode*));
right_value255 = (void*)0;
memset(&come_value_158, 0, sizeof(struct CVALUE*));
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&buf_159, 0, sizeof(struct buffer*));
memset(&j_160, 0, sizeof(int));
memset(&o2_saved_161, 0, sizeof(struct list$1CVALUEph*));
memset(&it_162, 0, sizeof(struct CVALUE*));
right_value258 = (void*)0;
memset(&come_value_163, 0, sizeof(struct CVALUE*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&p_164, 0, sizeof(char*));
memset(&version_165, 0, sizeof(int));
memset(&p2_166, 0, sizeof(char*));
memset(&i_168, 0, sizeof(int));
right_value270 = (void*)0;
memset(&new_fun_name_169, 0, sizeof(char*));
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&new_fun_name_170, 0, sizeof(char*));
right_value273 = (void*)0;
memset(&i_171, 0, sizeof(int));
right_value274 = (void*)0;
memset(&new_fun_name_172, 0, sizeof(char*));
right_value275 = (void*)0;
memset(&fun_175, 0, sizeof(struct sFun*));
right_value276 = (void*)0;
memset(&result_type_176, 0, sizeof(struct sType*));
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&param_types_177, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_178, 0, sizeof(struct list$1sTypeph*));
memset(&it_181, 0, sizeof(struct sType*));
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&it2_184, 0, sizeof(struct sType*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&come_params_188, 0, sizeof(struct list$1CVALUEph*));
right_value288 = (void*)0;
right_value294 = (void*)0;
memset(&label_params_194, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_195, 0, sizeof(int));
memset(&o2_saved_196, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_197, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_198, 0, sizeof(char*));
memset(&node_199, 0, sizeof(struct sNode*));
memset(&label_198, 0, sizeof(char*));
memset(&node_199, 0, sizeof(struct sNode*));
right_value295 = (void*)0;
memset(&come_value_200, 0, sizeof(struct CVALUE*));
memset(&n_201, 0, sizeof(int));
memset(&o2_saved_202, 0, sizeof(struct list$1charph*));
memset(&it_205, 0, sizeof(char*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&default_param_255, 0, sizeof(char*));
memset(&param_name_256, 0, sizeof(char*));
memset(&come_value_260, 0, sizeof(struct CVALUE*));
memset(&source_261, 0, sizeof(struct buffer*));
memset(&p_262, 0, sizeof(char*));
memset(&head_263, 0, sizeof(char*));
memset(&sline_264, 0, sizeof(int));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&node_265, 0, sizeof(struct sNode*));
right_value312 = (void*)0;
memset(&come_value_266, 0, sizeof(struct CVALUE*));
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
memset(&param_name_267, 0, sizeof(char*));
memset(&come_value_268, 0, sizeof(struct CVALUE*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&buf_272, 0, sizeof(struct buffer*));
memset(&j_273, 0, sizeof(int));
memset(&o2_saved_274, 0, sizeof(struct list$1CVALUEph*));
memset(&it_275, 0, sizeof(struct CVALUE*));
right_value325 = (void*)0;
memset(&come_value_276, 0, sizeof(struct CVALUE*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
    fun_name_126=(char*)come_increment_ref_count(self->fun_name);
    params_127=self->params;
    var__128=get_variable_from_table(info->lv_table,fun_name_126);
    if(_if_conditional224=var__128==((void*)0),    _if_conditional224) {
        var__128=get_variable_from_table(info->gv_table,fun_name_126);
    }
    if(var__128) {
        lambda_type_129=var__128->mType;
        result_type_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(lambda_type_129->mResultType->v1))));
        come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_130->mStatic=(_Bool)0;
        come_params_133=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value242=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value241=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1100, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional226=list$1sTypeph_length(lambda_type_129->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_127)&&!lambda_type_129->mVarArgs,        _if_conditional226) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_126,list$1sTypeph_length(lambda_type_129->mParamTypes),list$1tuple2$2charphsNodephph_length(params_127));
            __result167__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result167__;
        }
        i_134=0;
        for(        o2_saved_135=(params_127),it_138=list$1tuple2$2charphsNodephph_begin((o2_saved_135));        !list$1tuple2$2charphsNodephph_end((o2_saved_135));        it_138=list$1tuple2$2charphsNodephph_next((o2_saved_135))        ){
            multiple_assign_var5=it_138;
            label_141=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_142=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            if(_if_conditional231=!node_compile(node_142,info),            _if_conditional231) {
                __result175__ = (_Bool)0;
                label_141 = come_decrement_ref_count2(label_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_142) { node_142 = come_decrement_ref_count2(node_142, ((struct sNode*)node_142)->finalize, ((struct sNode*)node_142)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,result_type_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result175__;
            }
            come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional232=lambda_type_129->mVarArgs&&list$1sTypephp_operator_load_element(lambda_type_129->mParamTypes,i_134)==((void*)0),            _if_conditional232) {
            }
            else {
                check_assign_type(((char*)(right_value246=xsprintf("\%s calling param #\%s",((char*)(right_value244=string_to_string(fun_name_126))),((char*)(right_value245=int_to_string(i_134)))))),list$1sTypephp_operator_load_element(lambda_type_129->mParamTypes,i_134),come_value_143->type,come_value_143,(_Bool)0,(_Bool)1,info);
                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional233=list$1sTypephp_operator_load_element(lambda_type_129->mParamTypes,i_134)->mHeap&&come_value_143->type->mHeap,                _if_conditional233) {
                    std_move(list$1sTypephp_operator_load_element(lambda_type_129->mParamTypes,i_134),come_value_143->type,come_value_143,info);
                }
            }
            list$1CVALUEph_push_back(come_params_133,(struct CVALUE*)come_increment_ref_count(come_value_143));
            dec_stack_ptr(1,info);
            i_134++;
            label_141 = come_decrement_ref_count2(label_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_142) { node_142 = come_decrement_ref_count2(node_142, ((struct sNode*)node_142)->finalize, ((struct sNode*)node_142)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buf_144=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value248=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value247=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1131, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_144,var__128->mCValueName);
        buffer_append_str(buf_144,"(");
        j_145=0;
        for(        o2_saved_146=(struct list$1CVALUEph*)come_increment_ref_count((come_params_133)),it_149=list$1CVALUEph_begin((o2_saved_146));        !list$1CVALUEph_end((o2_saved_146));        it_149=list$1CVALUEph_next((o2_saved_146))        ){
            buffer_append_str(buf_144,it_149->c_value);
            if(_if_conditional238=j_145!=list$1CVALUEph_length(come_params_133)-1,            _if_conditional238) {
                buffer_append_str(buf_144,",");
            }
            j_145++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_144,")");
        come_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1148, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj98=come_value_152->c_value;
        come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value250=buffer_to_string(buf_144))));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(lambda_type_129->mResultType->v1->mHeap) {
            __dec_obj99=come_value_152->c_value;
            come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value251=append_object_to_right_values(come_value_152->c_value,(struct sType*)come_increment_ref_count(lambda_type_129->mResultType->v1),info))));
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj100=come_value_152->type;
        come_value_152->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(result_type_130))));
        come_call_finalizer2(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_152->type->mStatic=(_Bool)0;
        come_value_152->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_152->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_152));
        come_call_finalizer2(sType_finalize,result_type_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional240=string_operator_equals(fun_name_126,"__builtin_memmove")||string_operator_equals(fun_name_126,"__builtin_memset")||string_operator_equals(fun_name_126,"__builtin_ffs")||string_operator_equals(fun_name_126,"__builtin_ffsl")||string_operator_equals(fun_name_126,"__builtin_ffsll"),        _if_conditional240) {
            come_params_153=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value254=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value253=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1166, "list$1CVALUEph"))))))));
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_154=(params_127),it_155=list$1tuple2$2charphsNodephph_begin((o2_saved_154));            !list$1tuple2$2charphsNodephph_end((o2_saved_154));            it_155=list$1tuple2$2charphsNodephph_next((o2_saved_154))            ){
                multiple_assign_var6=it_155;
                label_156=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_157=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional241=!node_compile(node_157,info),                _if_conditional241) {
                    __result184__ = (_Bool)0;
                    label_156 = come_decrement_ref_count2(label_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_157) { node_157 = come_decrement_ref_count2(node_157, ((struct sNode*)node_157)->finalize, ((struct sNode*)node_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result184__;
                }
                come_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value255=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_153,(struct CVALUE*)come_increment_ref_count(come_value_158));
                label_156 = come_decrement_ref_count2(label_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_157) { node_157 = come_decrement_ref_count2(node_157, ((struct sNode*)node_157)->finalize, ((struct sNode*)node_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            buf_159=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value257=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value256=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1180, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_159,fun_name_126);
            buffer_append_str(buf_159,"(");
            j_160=0;
            for(            o2_saved_161=(struct list$1CVALUEph*)come_increment_ref_count((come_params_153)),it_162=list$1CVALUEph_begin((o2_saved_161));            !list$1CVALUEph_end((o2_saved_161));            it_162=list$1CVALUEph_next((o2_saved_161))            ){
                buffer_append_str(buf_159,it_162->c_value);
                if(_if_conditional242=j_160!=list$1CVALUEph_length(come_params_153)-1,                _if_conditional242) {
                    buffer_append_str(buf_159,",");
                }
                j_160++;
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_159,")");
            come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value258=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1197, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj101=come_value_163->c_value;
            come_value_163->c_value=(char*)come_increment_ref_count(((char*)(right_value259=buffer_to_string(buf_159))));
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional243=string_operator_equals(fun_name_126,"__builtin_memmove")||string_operator_equals(fun_name_126,"__builtin_memset"),            _if_conditional243) {
                __dec_obj102=come_value_163->type;
                come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1201, "sType")))),"void",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional244=string_operator_equals(fun_name_126,"__builtin_ffs"),                _if_conditional244) {
                    __dec_obj103=come_value_163->type;
                    come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1204, "sType")))),"int",(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional245=string_operator_equals(fun_name_126,"__builtin_ffsl"),                    _if_conditional245) {
                        __dec_obj104=come_value_163->type;
                        come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value264=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1207, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        if(_if_conditional246=string_operator_equals(fun_name_126,"__builtin_ffsll"),                        _if_conditional246) {
                            __dec_obj105=come_value_163->type;
                            come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1210, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
            }
            come_value_163->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_163->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
            __result185__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result185__;
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional247=string_operator_equals(fun_name_126,"string"),            _if_conditional247) {
                __dec_obj106=fun_name_126;
                fun_name_126=(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string("__builtin_string"))));
                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional248=string_operator_equals(fun_name_126,"wstring"),                _if_conditional248) {
                    __dec_obj107=fun_name_126;
                    fun_name_126=(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string("__builtin_wstring"))));
                    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional249=string_operator_equals(fun_name_126,"inherit"),                    _if_conditional249) {
                        p_164=info->come_fun->mName;
                        version_165=0;
                        while(_while_condtional13=*p_164,                        _while_condtional13) {
                            if(_if_conditional250=*p_164==95&&*(p_164+1)==118&&xisdigit(*(p_164+2)),                            _if_conditional250) {
                                p2_166=p_164+2;
                                version_165=0;
                                while(_while_condtional14=xisdigit(*p2_166),                                _while_condtional14) {
                                    version_165=version_165*10+(*p2_166-48);
                                    p2_166++;
                                }
                                break;
                            }
                            else {
                                p_164++;
                            }
                        }
                        char real_fun_name_167[2048];
                        memset(&real_fun_name_167, 0, sizeof(char)                        *(2048)                        );
                        memcpy(real_fun_name_167,info->come_fun->mName,p_164-info->come_fun->mName);
                        real_fun_name_167[p_164-info->come_fun->mName]=0;
                        for(                        i_168=version_165-1;                        i_168>=1;                        i_168--                        ){
                            new_fun_name_169=(char*)come_increment_ref_count(((char*)(right_value270=xsprintf("%s_v%d",real_fun_name_167,i_168))));
                            right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional251=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_169),                            _if_conditional251) {
                                __dec_obj108=fun_name_126;
                                fun_name_126=(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string(new_fun_name_169))));
                                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_169 = come_decrement_ref_count2(new_fun_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_169 = come_decrement_ref_count2(new_fun_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional252=i_168==0,                        _if_conditional252) {
                            new_fun_name_170=(char*)come_increment_ref_count(((char*)(right_value272=xsprintf("%s",real_fun_name_167))));
                            right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional253=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_170),                            _if_conditional253) {
                                __dec_obj109=fun_name_126;
                                fun_name_126=(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string(new_fun_name_170))));
                                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional254=string_operator_equals(fun_name_126,info->come_fun->mName),                            _if_conditional254) {
                                err_msg(info,"invalid inherit");
                                __result186__ = (_Bool)0;
                                new_fun_name_170 = come_decrement_ref_count2(new_fun_name_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result186__;
                            }
                            new_fun_name_170 = come_decrement_ref_count2(new_fun_name_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        for(                        i_171=128;                        i_171>=1;                        i_171--                        ){
                            new_fun_name_172=(char*)come_increment_ref_count(((char*)(right_value274=xsprintf("%s_v%d",fun_name_126,i_171))));
                            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional255=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_172),                            _if_conditional255) {
                                __dec_obj110=fun_name_126;
                                fun_name_126=(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string(new_fun_name_172))));
                                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_172 = come_decrement_ref_count2(new_fun_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_172 = come_decrement_ref_count2(new_fun_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        fun_175=map$2charphsFunph_at(info->funcs,fun_name_126,((void*)0));
        if(_if_conditional260=fun_175==((void*)0),        _if_conditional260) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_126);
            __result191__ = (_Bool)1;
            fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result191__;
        }
        result_type_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_clone(fun_175->mResultType))));
        come_call_finalizer2(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_176->mStatic=(_Bool)0;
        param_types_177=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value278=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value277=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1294, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_178=(struct list$1sTypeph*)come_increment_ref_count((fun_175->mParamTypes)),it_181=list$1sTypeph_begin((o2_saved_178));        !list$1sTypeph_end((o2_saved_178));        it_181=list$1sTypeph_next((o2_saved_178))        ){
            it2_184=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=solve_generics(((struct sType*)(right_value279=sType_clone(it_181))),info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(param_types_177,(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_clone(it2_184)))));
            come_call_finalizer2(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,it2_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj114=result_type_176;
        result_type_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=solve_generics(result_type_176,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_params_188=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value287=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value286=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1302, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        label_params_194=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value294=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value288=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "05function.c", 1304, "map$2charphCVALUEph"))))))));
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_195=0;
        for(        o2_saved_196=(params_127),it_197=list$1tuple2$2charphsNodephph_begin((o2_saved_196));        !list$1tuple2$2charphsNodephph_end((o2_saved_196));        it_197=list$1tuple2$2charphsNodephph_next((o2_saved_196))        ){
            multiple_assign_var7=it_197;
            label_198=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_199=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(_if_conditional271=!node_compile(node_199,info),            _if_conditional271) {
                __result202__ = (_Bool)0;
                label_198 = come_decrement_ref_count2(label_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_199) { node_199 = come_decrement_ref_count2(node_199, ((struct sNode*)node_199)->finalize, ((struct sNode*)node_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,result_type_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result202__;
            }
            come_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional272=fun_175->mVarArgs&&list$1sTypephp_operator_load_element(fun_175->mParamTypes,i_195)==((void*)0),            _if_conditional272) {
            }
            else {
                if(_if_conditional273=label_198!=((void*)0),                _if_conditional273) {
                    n_201=0;
                    for(                    o2_saved_202=(struct list$1charph*)come_increment_ref_count((fun_175->mParamNames)),it_205=list$1charph_begin((o2_saved_202));                    !list$1charph_end((o2_saved_202));                    it_205=list$1charph_next((o2_saved_202))                    ){
                        if(_if_conditional278=string_operator_equals(label_198,it_205),                        _if_conditional278) {
                            break;
                        }
                        n_201++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional279=n_201<list$1sTypeph_length(fun_175->mParamTypes),                    _if_conditional279) {
                        check_assign_type(((char*)(right_value298=xsprintf("\%s calling param(1) #\%s",((char*)(right_value296=string_to_string(fun_name_126))),((char*)(right_value297=int_to_string(n_201)))))),list$1sTypephp_operator_load_element(param_types_177,n_201),come_value_200->type,come_value_200,(_Bool)0,(_Bool)1,info);
                        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional280=n_201<list$1sTypeph_length(fun_175->mParamTypes)&&list$1sTypephp_operator_load_element(param_types_177,n_201)->mHeap&&come_value_200->type->mHeap,                    _if_conditional280) {
                        std_move(list$1sTypephp_operator_load_element(param_types_177,n_201),come_value_200->type,come_value_200,info);
                    }
                }
                else {
                    if(_if_conditional281=i_195<list$1sTypeph_length(fun_175->mParamTypes),                    _if_conditional281) {
                        check_assign_type(((char*)(right_value301=xsprintf("\%s calling param(2) #\%s",((char*)(right_value299=string_to_string(fun_name_126))),((char*)(right_value300=int_to_string(i_195)))))),list$1sTypephp_operator_load_element(param_types_177,i_195),come_value_200->type,come_value_200,(_Bool)0,(_Bool)1,info);
                        right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional282=i_195<list$1sTypeph_length(fun_175->mParamTypes)&&list$1sTypephp_operator_load_element(param_types_177,i_195)->mHeap&&come_value_200->type->mHeap,                    _if_conditional282) {
                        std_move(list$1sTypephp_operator_load_element(param_types_177,i_195),come_value_200->type,come_value_200,info);
                    }
                }
            }
            if(_if_conditional283=label_198==((void*)0),            _if_conditional283) {
                list$1CVALUEph_push_back(come_params_188,(struct CVALUE*)come_increment_ref_count(come_value_200));
                i_195++;
            }
            else {
                map$2charphCVALUEph_insert(label_params_194,(char*)come_increment_ref_count(((char*)(right_value308=__builtin_string(label_198)))),(struct CVALUE*)come_increment_ref_count(come_value_200));
                right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            dec_stack_ptr(1,info);
            label_198 = come_decrement_ref_count2(label_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_199) { node_199 = come_decrement_ref_count2(node_199, ((struct sNode*)node_199)->finalize, ((struct sNode*)node_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional331=list$1tuple2$2charphsNodephph_length(params_127)<list$1sTypeph_length(fun_175->mParamTypes),        _if_conditional331) {
            for(            ;            i_195<list$1sTypeph_length(fun_175->mParamTypes);            i_195++            ){
                default_param_255=(char*)come_increment_ref_count(((char*)(right_value309=string_clone(list$1charphp_operator_load_element(fun_175->mParamDefaultParametors,i_195)))));
                right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_256=list$1charphp_operator_load_element(fun_175->mParamNames,i_195);
                come_value_260=map$2charphCVALUEphp_operator_load_element(label_params_194,param_name_256);
                if(_if_conditional338=default_param_255&&string_operator_not_equals(default_param_255,""),                _if_conditional338) {
                    source_261=(struct buffer*)come_increment_ref_count(info->source);
                    p_262=info->p;
                    head_263=info->head;
                    sline_264=info->sline;
                    __dec_obj116=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value310=string_to_buffer(default_param_255))));
                    come_call_finalizer2(buffer_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=expression_v13(info))));
                    if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional339=!node_compile(node_265,info),                    _if_conditional339) {
                        __result240__ = (_Bool)0;
                        come_call_finalizer2(buffer_finalize,source_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(node_265) { node_265 = come_decrement_ref_count2(node_265, ((struct sNode*)node_265)->finalize, ((struct sNode*)node_265)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_255 = come_decrement_ref_count2(default_param_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result240__;
                    }
                    __dec_obj117=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_261);
                    come_call_finalizer2(buffer_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    info->p=p_262;
                    info->head=head_263;
                    info->sline=sline_264;
                    come_value_266=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    check_assign_type(((char*)(right_value315=xsprintf("\%s calling param(3) #\%s",((char*)(right_value313=string_to_string(fun_name_126))),((char*)(right_value314=int_to_string(i_195)))))),list$1sTypephp_operator_load_element(param_types_177,i_195),come_value_266->type,come_value_266,(_Bool)0,(_Bool)1,info);
                    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional340=list$1sTypephp_operator_load_element(param_types_177,i_195)->mHeap&&come_value_266->type->mHeap,                    _if_conditional340) {
                        std_move(list$1sTypephp_operator_load_element(param_types_177,i_195),come_value_266->type,come_value_266,info);
                    }
                    list$1CVALUEph_push_back(come_params_188,(struct CVALUE*)come_increment_ref_count(come_value_266));
                    dec_stack_ptr(1,info);
                    come_call_finalizer2(buffer_finalize,source_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(node_265) { node_265 = come_decrement_ref_count2(node_265, ((struct sNode*)node_265)->finalize, ((struct sNode*)node_265)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional341=come_value_260==((void*)0),                    _if_conditional341) {
                        err_msg(info,"require parametor(%s)",fun_175->mName);
                        __result241__ = (_Bool)0;
                        default_param_255 = come_decrement_ref_count2(default_param_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result241__;
                    }
                    else {
                        list$1CVALUEph_push_back(come_params_188,((void*)0));
                    }
                }
                default_param_255 = come_decrement_ref_count2(default_param_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(_if_conditional342=map$2charphCVALUEph_length(label_params_194)>0,        _if_conditional342) {
            for(            i_195=0;            i_195<list$1charph_length(fun_175->mParamNames);            i_195++            ){
                param_name_267=list$1charphp_operator_load_element(fun_175->mParamNames,i_195);
                come_value_268=map$2charphCVALUEphp_operator_load_element(label_params_194,param_name_267);
                if(come_value_268) {
                    check_assign_type(((char*)(right_value318=xsprintf("\%s calling param(4) \%s",((char*)(right_value316=string_to_string(fun_name_126))),((char*)(right_value317=int_to_string(i_195)))))),list$1sTypephp_operator_load_element(param_types_177,i_195),come_value_268->type,come_value_268,(_Bool)0,(_Bool)1,info);
                    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_replace(come_params_188,i_195,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value322=CVALUE_clone(come_value_268)))));
                    come_call_finalizer2(CVALUE_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
        }
        if(_if_conditional351=list$1sTypeph_length(fun_175->mParamTypes)!=list$1CVALUEph_length(come_params_188)&&!fun_175->mVarArgs&&string_operator_not_equals(fun_name_126,"__builtin_va_start")&&string_operator_not_equals(fun_name_126,"__builtin_va_end"),        _if_conditional351) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_126,list$1sTypeph_length(fun_175->mParamTypes),list$1tuple2$2charphsNodephph_length(params_127));
            __result248__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result248__;
        }
        buf_272=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1425, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_272,fun_name_126);
        buffer_append_str(buf_272,"(");
        j_273=0;
        for(        o2_saved_274=(struct list$1CVALUEph*)come_increment_ref_count((come_params_188)),it_275=list$1CVALUEph_begin((o2_saved_274));        !list$1CVALUEph_end((o2_saved_274));        it_275=list$1CVALUEph_next((o2_saved_274))        ){
            buffer_append_str(buf_272,it_275->c_value);
            if(_if_conditional352=j_273!=list$1CVALUEph_length(come_params_188)-1,            _if_conditional352) {
                buffer_append_str(buf_272,",");
            }
            j_273++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_272,")");
        come_value_276=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value325=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1442, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj121=come_value_276->c_value;
        come_value_276->c_value=(char*)come_increment_ref_count(((char*)(right_value326=buffer_to_string(buf_272))));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj122=come_value_276->type;
        come_value_276->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(result_type_176))));
        come_call_finalizer2(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_276->type->mStatic=(_Bool)0;
        come_value_276->var=((void*)0);
        if(fun_175->mResultType->mHeap) {
            __dec_obj123=come_value_276->c_value;
            come_value_276->c_value=(char*)come_increment_ref_count(((char*)(right_value328=append_object_to_right_values(come_value_276->c_value,(struct sType*)come_increment_ref_count(result_type_176),info))));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional354=string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free"),        _if_conditional354) {
            if(_if_conditional355=string_operator_not_equals(fun_name_126,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_126,"null_check")&&string_operator_not_equals(fun_name_126,"come_push_stackframe")&&string_operator_not_equals(fun_name_126,"come_pop_stackframe"),            _if_conditional355) {
                __dec_obj124=come_value_276->c_value;
                come_value_276->c_value=(char*)come_increment_ref_count(((char*)(right_value329=append_stackframe(come_value_276->c_value,come_value_276->type,info))));
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        add_come_last_code(info,"%s;\n",come_value_276->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_276));
        come_call_finalizer2(sType_finalize,result_type_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result249__ = (_Bool)1;
    fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result249__;
    fun_name_126 = come_decrement_ref_count2(fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1CVALUEph* it_131;
_Bool _while_condtional12;
struct list_item$1CVALUEph* prev_it_132;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_131, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_132, 0, sizeof(struct list_item$1CVALUEph*));
                it_131=self->head;
                while(_while_condtional12=it_131!=((void*)0),                _while_condtional12) {
                    prev_it_132=it_131;
                    it_131=it_131->next;
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional227;
struct tuple2$2charphsNodeph* result_136;
struct tuple2$2charphsNodeph* __result168__;
_Bool _if_conditional228;
struct tuple2$2charphsNodeph* __result169__;
struct tuple2$2charphsNodeph* result_137;
struct tuple2$2charphsNodeph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_136, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_137, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional227=self==((void*)0),            _if_conditional227) {
                memset(&result_136,0,sizeof(struct tuple2$2charphsNodeph*));
                __result168__ = __result_obj__ = result_136;
                return __result168__;
            }
            self->it=self->head;
            if(self->it) {
                __result169__ = __result_obj__ = self->it->item;
                return __result169__;
            }
            memset(&result_137,0,sizeof(struct tuple2$2charphsNodeph*));
            __result170__ = __result_obj__ = result_137;
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
_Bool _if_conditional229;
struct tuple2$2charphsNodeph* result_139;
struct tuple2$2charphsNodeph* __result172__;
_Bool _if_conditional230;
struct tuple2$2charphsNodeph* __result173__;
struct tuple2$2charphsNodeph* result_140;
struct tuple2$2charphsNodeph* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_139, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_140, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional229=self==((void*)0)||self->it==((void*)0),            _if_conditional229) {
                memset(&result_139,0,sizeof(struct tuple2$2charphsNodeph*));
                __result172__ = __result_obj__ = result_139;
                return __result172__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result173__ = __result_obj__ = self->it->item;
                return __result173__;
            }
            memset(&result_140,0,sizeof(struct tuple2$2charphsNodeph*));
            __result174__ = __result_obj__ = result_140;
            return __result174__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional234;
struct CVALUE* result_147;
struct CVALUE* __result176__;
_Bool _if_conditional235;
struct CVALUE* __result177__;
struct CVALUE* result_148;
struct CVALUE* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_147, 0, sizeof(struct CVALUE*));
memset(&result_148, 0, sizeof(struct CVALUE*));
            if(_if_conditional234=self==((void*)0),            _if_conditional234) {
                memset(&result_147,0,sizeof(struct CVALUE*));
                __result176__ = __result_obj__ = result_147;
                return __result176__;
            }
            self->it=self->head;
            if(self->it) {
                __result177__ = __result_obj__ = self->it->item;
                return __result177__;
            }
            memset(&result_148,0,sizeof(struct CVALUE*));
            __result178__ = __result_obj__ = result_148;
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
_Bool _if_conditional236;
struct CVALUE* result_150;
struct CVALUE* __result180__;
_Bool _if_conditional237;
struct CVALUE* __result181__;
struct CVALUE* result_151;
struct CVALUE* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_150, 0, sizeof(struct CVALUE*));
memset(&result_151, 0, sizeof(struct CVALUE*));
            if(_if_conditional236=self==((void*)0)||self->it==((void*)0),            _if_conditional236) {
                memset(&result_150,0,sizeof(struct CVALUE*));
                __result180__ = __result_obj__ = result_150;
                return __result180__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result181__ = __result_obj__ = self->it->item;
                return __result181__;
            }
            memset(&result_151,0,sizeof(struct CVALUE*));
            __result182__ = __result_obj__ = result_151;
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
unsigned int hash_173;
unsigned int it_174;
_Bool _while_condtional15;
_Bool _if_conditional256;
_Bool _if_conditional257;
struct sFun* __result187__;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct sFun* __result188__;
struct sFun* __result189__;
struct sFun* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_173, 0, sizeof(unsigned int));
memset(&it_174, 0, sizeof(unsigned int));
            hash_173=string_get_hash_key(((char*)key))%self->size;
            it_174=hash_173;
            while(_while_condtional15=(_Bool)1,            _while_condtional15) {
                if(_if_conditional256=self->item_existance[it_174],                _if_conditional256) {
                    if(_if_conditional257=string_equals(self->keys[it_174],key),                    _if_conditional257) {
                        __result187__ = __result_obj__ = self->items[it_174];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result187__;
                    }
                    it_174++;
                    if(_if_conditional258=it_174>=self->size,                    _if_conditional258) {
                        it_174=0;
                    }
                    else {
                        if(_if_conditional259=it_174==hash_173,                        _if_conditional259) {
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
_Bool _if_conditional261;
struct sType* result_179;
struct sType* __result192__;
_Bool _if_conditional262;
struct sType* __result193__;
struct sType* result_180;
struct sType* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_179, 0, sizeof(struct sType*));
memset(&result_180, 0, sizeof(struct sType*));
            if(_if_conditional261=self==((void*)0),            _if_conditional261) {
                memset(&result_179,0,sizeof(struct sType*));
                __result192__ = __result_obj__ = result_179;
                return __result192__;
            }
            self->it=self->head;
            if(self->it) {
                __result193__ = __result_obj__ = self->it->item;
                return __result193__;
            }
            memset(&result_180,0,sizeof(struct sType*));
            __result194__ = __result_obj__ = result_180;
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
_Bool _if_conditional263;
struct sType* result_182;
struct sType* __result196__;
_Bool _if_conditional264;
struct sType* __result197__;
struct sType* result_183;
struct sType* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_182, 0, sizeof(struct sType*));
memset(&result_183, 0, sizeof(struct sType*));
            if(_if_conditional263=self==((void*)0)||self->it==((void*)0),            _if_conditional263) {
                memset(&result_182,0,sizeof(struct sType*));
                __result196__ = __result_obj__ = result_182;
                return __result196__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result197__ = __result_obj__ = self->it->item;
                return __result197__;
            }
            memset(&result_183,0,sizeof(struct sType*));
            __result198__ = __result_obj__ = result_183;
            return __result198__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional265;
void* right_value281;
struct list_item$1sTypeph* litem_185;
struct sType* __dec_obj111;
_Bool _if_conditional266;
void* right_value282;
struct list_item$1sTypeph* litem_186;
struct sType* __dec_obj112;
void* right_value283;
struct list_item$1sTypeph* litem_187;
struct sType* __dec_obj113;
struct list$1sTypeph* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value281 = (void*)0;
memset(&litem_185, 0, sizeof(struct list_item$1sTypeph*));
right_value282 = (void*)0;
memset(&litem_186, 0, sizeof(struct list_item$1sTypeph*));
right_value283 = (void*)0;
memset(&litem_187, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional265=self->len==0,                _if_conditional265) {
                    litem_185=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value281=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_185->prev=((void*)0);
                    litem_185->next=((void*)0);
                    __dec_obj111=litem_185->item;
                    litem_185->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_185;
                    self->head=litem_185;
                }
                else {
                    if(_if_conditional266=self->len==1,                    _if_conditional266) {
                        litem_186=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value282=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_186->prev=self->head;
                        litem_186->next=((void*)0);
                        __dec_obj112=litem_186->item;
                        litem_186->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_186;
                        self->head->next=litem_186;
                    }
                    else {
                        litem_187=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value283=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_187->prev=self->tail;
                        litem_187->next=((void*)0);
                        __dec_obj113=litem_187->item;
                        litem_187->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_187;
                        self->tail=litem_187;
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
void* right_value289;
void* right_value290;
void* right_value291;
int i_189;
void* right_value292;
void* right_value293;
struct list$1charp* __dec_obj115;
struct map$2charphCVALUEph* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&i_189, 0, sizeof(int));
right_value292 = (void*)0;
right_value293 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value289=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
            right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value290=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1085, "CVALUE*%"))));
            come_call_finalizer2(CVALUE_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value291=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
            right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_189=0;            i_189<1024;            i_189++            ){
                self->item_existance[i_189]=(_Bool)0;
            }
            self->size=1024;
            self->len=0;
            __dec_obj115=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value293=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value292=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
struct list_item$1charp* it_190;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_191;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_190, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_191, 0, sizeof(struct list_item$1charp*));
                    it_190=self->head;
                    while(_while_condtional16=it_190!=((void*)0),                    _while_condtional16) {
                        prev_it_191=it_190;
                        it_190=it_190->next;
                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
int i_192;
_Bool _if_conditional267;
_Bool _if_conditional268;
int i_193;
_Bool _if_conditional269;
_Bool _if_conditional270;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_192, 0, sizeof(int));
memset(&i_193, 0, sizeof(int));
                for(                i_192=0;                i_192<self->size;                i_192++                ){
                    if(_if_conditional267=self->item_existance[i_192],                    _if_conditional267) {
                        if(_if_conditional268=1,                        _if_conditional268) {
                            come_call_finalizer2(CVALUE_finalize,self->items[i_192], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_193=0;                i_193<self->size;                i_193++                ){
                    if(_if_conditional269=self->item_existance[i_193],                    _if_conditional269) {
                        if(_if_conditional270=1,                        _if_conditional270) {
                            self->keys[i_193] = come_decrement_ref_count2(self->keys[i_193], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional274;
char* result_203;
char* __result203__;
_Bool _if_conditional275;
char* __result204__;
char* result_204;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(char*));
memset(&result_204, 0, sizeof(char*));
                        if(_if_conditional274=self==((void*)0),                        _if_conditional274) {
                            memset(&result_203,0,sizeof(char*));
                            __result203__ = __result_obj__ = result_203;
                            return __result203__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result204__ = __result_obj__ = self->it->item;
                            return __result204__;
                        }
                        memset(&result_204,0,sizeof(char*));
                        __result205__ = __result_obj__ = result_204;
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
_Bool _if_conditional276;
char* result_206;
char* __result207__;
_Bool _if_conditional277;
char* __result208__;
char* result_207;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(char*));
memset(&result_207, 0, sizeof(char*));
                        if(_if_conditional276=self==((void*)0)||self->it==((void*)0),                        _if_conditional276) {
                            memset(&result_206,0,sizeof(char*));
                            __result207__ = __result_obj__ = result_206;
                            return __result207__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result208__ = __result_obj__ = self->it->item;
                            return __result208__;
                        }
                        memset(&result_207,0,sizeof(char*));
                        __result209__ = __result_obj__ = result_207;
                        return __result209__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional284;
unsigned int hash_225;
unsigned int it_226;
_Bool _while_condtional19;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool same_key_exist_243;
char* it2_246;
_Bool _if_conditional327;
_Bool _if_conditional328;
struct map$2charphCVALUEph* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_225, 0, sizeof(unsigned int));
memset(&it_226, 0, sizeof(unsigned int));
memset(&same_key_exist_243, 0, sizeof(_Bool));
memset(&it2_246, 0, sizeof(char*));
                    if(_if_conditional284=self->len*10>=self->size,                    _if_conditional284) {
                        map$2charphCVALUEph_rehash(self);
                    }
                    hash_225=string_get_hash_key(key)%self->size;
                    it_226=hash_225;
                    while(_while_condtional19=(_Bool)1,                    _while_condtional19) {
                        if(_if_conditional296=self->item_existance[it_226],                        _if_conditional296) {
                            if(_if_conditional297=string_equals(self->keys[it_226],key),                            _if_conditional297) {
                                if(_if_conditional298=1,                                _if_conditional298) {
                                    list$1charp_remove(self->key_list,self->keys[it_226]);
                                    self->keys[it_226] = come_decrement_ref_count2(self->keys[it_226], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    self->keys[it_226]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    list$1charp_remove(self->key_list,self->keys[it_226]);
                                    self->keys[it_226]=key;
                                }
                                if(_if_conditional318=1,                                _if_conditional318) {
                                    come_call_finalizer2(CVALUE_finalize,self->items[it_226], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->items[it_226]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_226]=item;
                                }
                                break;
                            }
                            it_226++;
                            if(_if_conditional319=it_226>=self->size,                            _if_conditional319) {
                                it_226=0;
                            }
                            else {
                                if(_if_conditional320=it_226==hash_225,                                _if_conditional320) {
                                    printf("unexpected error in map.insert\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            self->item_existance[it_226]=(_Bool)1;
                            if(_if_conditional321=1,                            _if_conditional321) {
                                self->keys[it_226]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                self->keys[it_226]=key;
                            }
                            if(_if_conditional322=1,                            _if_conditional322) {
                                self->items[it_226]=(struct CVALUE*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_226]=item;
                            }
                            self->len++;
                            break;
                        }
                    }
                    same_key_exist_243=(_Bool)0;
                    for(                    it2_246=list$1charp_begin(self->key_list);                    !list$1charp_end(self->key_list);                    it2_246=list$1charp_next(self->key_list)                    ){
                        if(_if_conditional327=string_equals(it2_246,key),                        _if_conditional327) {
                            puts("SAME KEY");
                            same_key_exist_243=(_Bool)1;
                        }
                    }
                    if(_if_conditional328=!same_key_exist_243,                    _if_conditional328) {
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
int size_208;
void* right_value302;
char** keys_209;
void* right_value303;
struct CVALUE** items_210;
void* right_value304;
_Bool* item_existance_211;
int len_212;
char* it_215;
struct CVALUE* default_value_218;
struct CVALUE* it2_221;
unsigned int hash_222;
int n_223;
_Bool _while_condtional18;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct CVALUE* default_value_224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_208, 0, sizeof(int));
right_value302 = (void*)0;
memset(&keys_209, 0, sizeof(char**));
right_value303 = (void*)0;
memset(&items_210, 0, sizeof(struct CVALUE**));
right_value304 = (void*)0;
memset(&item_existance_211, 0, sizeof(_Bool*));
memset(&len_212, 0, sizeof(int));
memset(&it_215, 0, sizeof(char*));
memset(&default_value_218, 0, sizeof(struct CVALUE*));
memset(&it2_221, 0, sizeof(struct CVALUE*));
memset(&hash_222, 0, sizeof(unsigned int));
memset(&n_223, 0, sizeof(int));
memset(&default_value_224, 0, sizeof(struct CVALUE*));
                            size_208=self->size*10;
                            keys_209=(char**)come_increment_ref_count(((char**)(right_value302=(char**)come_calloc(1, sizeof(char*)*(1*(size_208)), "./comelang2.h", 1335, "char*%"))));
                            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            items_210=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value303=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_208)), "./comelang2.h", 1336, "CVALUE*%"))));
                            come_call_finalizer2(CVALUE_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            item_existance_211=(_Bool*)come_increment_ref_count(((_Bool*)(right_value304=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_208)), "./comelang2.h", 1337, "bool"))));
                            right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            len_212=0;
                            for(                            it_215=map$2charphCVALUEph_begin(self);                            !map$2charphCVALUEph_end(self);                            it_215=map$2charphCVALUEph_next(self)                            ){
                                memset(&default_value_218,0,sizeof(struct CVALUE*));
                                it2_221=map$2charphCVALUEph_at(self,it_215,default_value_218);
                                hash_222=string_get_hash_key(it_215)%size_208;
                                n_223=hash_222;
                                while(_while_condtional18=(_Bool)1,                                _while_condtional18) {
                                    if(_if_conditional293=item_existance_211[n_223],                                    _if_conditional293) {
                                        n_223++;
                                        if(_if_conditional294=n_223>=size_208,                                        _if_conditional294) {
                                            n_223=0;
                                        }
                                        else {
                                            if(_if_conditional295=n_223==hash_222,                                            _if_conditional295) {
                                                printf("unexpected error in map.rehash(1)\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        item_existance_211[n_223]=(_Bool)1;
                                        keys_209[n_223]=it_215;
                                        items_210[n_223]=map$2charphCVALUEph_at(self,it_215,default_value_224);
                                        len_212++;
                                        break;
                                    }
                                }
                            }
                            come_free((char*)self->items);
                            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_free((char*)self->keys);
                            self->keys=keys_209;
                            self->items=items_210;
                            self->item_existance=item_existance_211;
                            self->size=size_208;
                            self->len=len_212;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional285;
char* result_213;
char* __result210__;
_Bool _if_conditional286;
char* __result211__;
char* result_214;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_213, 0, sizeof(char*));
memset(&result_214, 0, sizeof(char*));
                                if(_if_conditional285=self==((void*)0),                                _if_conditional285) {
                                    memset(&result_213,0,sizeof(char*));
                                    __result210__ = __result_obj__ = result_213;
                                    return __result210__;
                                }
                                self->key_list->it=self->key_list->head;
                                if(self->key_list->it) {
                                    __result211__ = __result_obj__ = self->key_list->it->item;
                                    return __result211__;
                                }
                                memset(&result_214,0,sizeof(char*));
                                __result212__ = __result_obj__ = result_214;
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
_Bool _if_conditional287;
char* result_216;
char* __result214__;
_Bool _if_conditional288;
char* __result215__;
char* result_217;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_216, 0, sizeof(char*));
memset(&result_217, 0, sizeof(char*));
                                if(_if_conditional287=self==((void*)0)||self->key_list->it==((void*)0),                                _if_conditional287) {
                                    memset(&result_216,0,sizeof(char*));
                                    __result214__ = __result_obj__ = result_216;
                                    return __result214__;
                                }
                                self->key_list->it=self->key_list->it->next;
                                if(self->key_list->it) {
                                    __result215__ = __result_obj__ = self->key_list->it->item;
                                    return __result215__;
                                }
                                memset(&result_217,0,sizeof(char*));
                                __result216__ = __result_obj__ = result_217;
                                return __result216__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
unsigned int hash_219;
unsigned int it_220;
_Bool _while_condtional17;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct CVALUE* __result217__;
_Bool _if_conditional291;
_Bool _if_conditional292;
struct CVALUE* __result218__;
struct CVALUE* __result219__;
struct CVALUE* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_219, 0, sizeof(unsigned int));
memset(&it_220, 0, sizeof(unsigned int));
                                    hash_219=string_get_hash_key(((char*)key))%self->size;
                                    it_220=hash_219;
                                    while(_while_condtional17=(_Bool)1,                                    _while_condtional17) {
                                        if(_if_conditional289=self->item_existance[it_220],                                        _if_conditional289) {
                                            if(_if_conditional290=string_equals(self->keys[it_220],key),                                            _if_conditional290) {
                                                __result217__ = __result_obj__ = self->items[it_220];
                                                come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result217__;
                                            }
                                            it_220++;
                                            if(_if_conditional291=it_220>=self->size,                                            _if_conditional291) {
                                                it_220=0;
                                            }
                                            else {
                                                if(_if_conditional292=it_220==hash_219,                                                _if_conditional292) {
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
int it2_227;
struct list_item$1charp* it_228;
_Bool _while_condtional20;
_Bool _if_conditional299;
struct list$1charp* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_227, 0, sizeof(int));
memset(&it_228, 0, sizeof(struct list_item$1charp*));
                                        it2_227=0;
                                        it_228=self->head;
                                        while(_while_condtional20=it_228!=((void*)0),                                        _while_condtional20) {
                                            if(_if_conditional299=string_equals(it_228->item,item),                                            _if_conditional299) {
                                                list$1charp_delete(self,it2_227,it2_227+1);
                                                break;
                                            }
                                            it2_227++;
                                            it_228=it_228->next;
                                        }
                                        __result224__ = __result_obj__ = self;
                                        return __result224__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
int tmp_229;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list$1charp* __result221__;
_Bool _if_conditional306;
_Bool _if_conditional307;
struct list_item$1charp* it_232;
int i_233;
_Bool _while_condtional22;
_Bool _if_conditional308;
struct list_item$1charp* prev_it_234;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list_item$1charp* it_235;
int i_236;
_Bool _while_condtional23;
_Bool _if_conditional311;
_Bool _if_conditional312;
struct list_item$1charp* prev_it_237;
struct list_item$1charp* it_238;
struct list_item$1charp* head_prev_it_239;
struct list_item$1charp* tail_it_240;
int i_241;
_Bool _while_condtional24;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
struct list_item$1charp* prev_it_242;
_Bool _if_conditional316;
_Bool _if_conditional317;
struct list$1charp* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_229, 0, sizeof(int));
memset(&it_232, 0, sizeof(struct list_item$1charp*));
memset(&i_233, 0, sizeof(int));
memset(&prev_it_234, 0, sizeof(struct list_item$1charp*));
memset(&it_235, 0, sizeof(struct list_item$1charp*));
memset(&i_236, 0, sizeof(int));
memset(&prev_it_237, 0, sizeof(struct list_item$1charp*));
memset(&it_238, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_239, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_240, 0, sizeof(struct list_item$1charp*));
memset(&i_241, 0, sizeof(int));
memset(&prev_it_242, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional300=head<0,                                                    _if_conditional300) {
                                                        head+=self->len;
                                                    }
                                                    if(_if_conditional301=tail<0,                                                    _if_conditional301) {
                                                        tail+=self->len+1;
                                                    }
                                                    if(_if_conditional302=head>tail,                                                    _if_conditional302) {
                                                        tmp_229=tail;
                                                        tail=head;
                                                        head=tmp_229;
                                                    }
                                                    if(_if_conditional303=head<0,                                                    _if_conditional303) {
                                                        head=0;
                                                    }
                                                    if(_if_conditional304=tail>self->len,                                                    _if_conditional304) {
                                                        tail=self->len;
                                                    }
                                                    if(_if_conditional305=head==tail,                                                    _if_conditional305) {
                                                        __result221__ = __result_obj__ = self;
                                                        return __result221__;
                                                    }
                                                    if(_if_conditional306=head==0&&tail==self->len,                                                    _if_conditional306) {
                                                        list$1charp_reset(self);
                                                    }
                                                    else {
                                                        if(_if_conditional307=head==0,                                                        _if_conditional307) {
                                                            it_232=self->head;
                                                            i_233=0;
                                                            while(_while_condtional22=it_232!=((void*)0),                                                            _while_condtional22) {
                                                                if(_if_conditional308=i_233<tail,                                                                _if_conditional308) {
                                                                    prev_it_234=it_232;
                                                                    it_232=it_232->next;
                                                                    i_233++;
                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    self->len--;
                                                                }
                                                                else {
                                                                    if(_if_conditional309=i_233==tail,                                                                    _if_conditional309) {
                                                                        self->head=it_232;
                                                                        self->head->prev=((void*)0);
                                                                        break;
                                                                    }
                                                                    else {
                                                                        it_232=it_232->next;
                                                                        i_233++;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional310=tail==self->len,                                                            _if_conditional310) {
                                                                it_235=self->head;
                                                                i_236=0;
                                                                while(_while_condtional23=it_235!=((void*)0),                                                                _while_condtional23) {
                                                                    if(_if_conditional311=i_236==head,                                                                    _if_conditional311) {
                                                                        self->tail=it_235->prev;
                                                                        self->tail->next=((void*)0);
                                                                    }
                                                                    if(_if_conditional312=i_236>=head,                                                                    _if_conditional312) {
                                                                        prev_it_237=it_235;
                                                                        it_235=it_235->next;
                                                                        i_236++;
                                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->len--;
                                                                    }
                                                                    else {
                                                                        it_235=it_235->next;
                                                                        i_236++;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                it_238=self->head;
                                                                head_prev_it_239=((void*)0);
                                                                tail_it_240=((void*)0);
                                                                i_241=0;
                                                                while(_while_condtional24=it_238!=((void*)0),                                                                _while_condtional24) {
                                                                    if(_if_conditional313=i_241==head,                                                                    _if_conditional313) {
                                                                        head_prev_it_239=it_238->prev;
                                                                    }
                                                                    if(_if_conditional314=i_241==tail,                                                                    _if_conditional314) {
                                                                        tail_it_240=it_238;
                                                                    }
                                                                    if(_if_conditional315=i_241>=head&&i_241<tail,                                                                    _if_conditional315) {
                                                                        prev_it_242=it_238;
                                                                        it_238=it_238->next;
                                                                        i_241++;
                                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->len--;
                                                                    }
                                                                    else {
                                                                        it_238=it_238->next;
                                                                        i_241++;
                                                                    }
                                                                }
                                                                if(_if_conditional316=head_prev_it_239!=((void*)0),                                                                _if_conditional316) {
                                                                    head_prev_it_239->next=tail_it_240;
                                                                }
                                                                if(_if_conditional317=tail_it_240!=((void*)0),                                                                _if_conditional317) {
                                                                    tail_it_240->prev=head_prev_it_239;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    __result223__ = __result_obj__ = self;
                                                    return __result223__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_230;
_Bool _while_condtional21;
struct list_item$1charp* prev_it_231;
struct list$1charp* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_230, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_231, 0, sizeof(struct list_item$1charp*));
                                                            it_230=self->head;
                                                            while(_while_condtional21=it_230!=((void*)0),                                                            _while_condtional21) {
                                                                prev_it_231=it_230;
                                                                it_230=it_230->next;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            self->head=((void*)0);
                                                            self->tail=((void*)0);
                                                            self->len=0;
                                                            __result222__ = __result_obj__ = self;
                                                            return __result222__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional323;
char* result_244;
char* __result225__;
_Bool _if_conditional324;
char* __result226__;
char* result_245;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_244, 0, sizeof(char*));
memset(&result_245, 0, sizeof(char*));
                        if(_if_conditional323=self==((void*)0),                        _if_conditional323) {
                            memset(&result_244,0,sizeof(char*));
                            __result225__ = __result_obj__ = result_244;
                            return __result225__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result226__ = __result_obj__ = self->it->item;
                            return __result226__;
                        }
                        memset(&result_245,0,sizeof(char*));
                        __result227__ = __result_obj__ = result_245;
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
_Bool _if_conditional325;
char* result_247;
char* __result229__;
_Bool _if_conditional326;
char* __result230__;
char* result_248;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_247, 0, sizeof(char*));
memset(&result_248, 0, sizeof(char*));
                        if(_if_conditional325=self==((void*)0)||self->it==((void*)0),                        _if_conditional325) {
                            memset(&result_247,0,sizeof(char*));
                            __result229__ = __result_obj__ = result_247;
                            return __result229__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result230__ = __result_obj__ = self->it->item;
                            return __result230__;
                        }
                        memset(&result_248,0,sizeof(char*));
                        __result231__ = __result_obj__ = result_248;
                        return __result231__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional329;
void* right_value305;
struct list_item$1charp* litem_249;
_Bool _if_conditional330;
void* right_value306;
struct list_item$1charp* litem_250;
void* right_value307;
struct list_item$1charp* litem_251;
struct list$1charp* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value305 = (void*)0;
memset(&litem_249, 0, sizeof(struct list_item$1charp*));
right_value306 = (void*)0;
memset(&litem_250, 0, sizeof(struct list_item$1charp*));
right_value307 = (void*)0;
memset(&litem_251, 0, sizeof(struct list_item$1charp*));
                            if(_if_conditional329=self->len==0,                            _if_conditional329) {
                                litem_249=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value305=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                                come_call_finalizer2(list_item$1charpp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_249->prev=((void*)0);
                                litem_249->next=((void*)0);
                                litem_249->item=item;
                                self->tail=litem_249;
                                self->head=litem_249;
                            }
                            else {
                                if(_if_conditional330=self->len==1,                                _if_conditional330) {
                                    litem_250=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value306=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                                    come_call_finalizer2(list_item$1charpp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_250->prev=self->head;
                                    litem_250->next=((void*)0);
                                    litem_250->item=item;
                                    self->tail=litem_250;
                                    self->head->next=litem_250;
                                }
                                else {
                                    litem_251=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value307=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                                    come_call_finalizer2(list_item$1charpp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_251->prev=self->tail;
                                    litem_251->next=((void*)0);
                                    litem_251->item=item;
                                    self->tail->next=litem_251;
                                    self->tail=litem_251;
                                }
                            }
                            self->len++;
                            __result232__ = __result_obj__ = self;
                            return __result232__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional332;
struct list_item$1charph* it_252;
int i_253;
_Bool _while_condtional25;
_Bool _if_conditional333;
char* __result234__;
char* default_value_254;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_252, 0, sizeof(struct list_item$1charph*));
memset(&i_253, 0, sizeof(int));
memset(&default_value_254, 0, sizeof(char*));
                    if(_if_conditional332=position<0,                    _if_conditional332) {
                        position+=self->len;
                    }
                    it_252=self->head;
                    i_253=0;
                    while(_while_condtional25=it_252!=((void*)0),                    _while_condtional25) {
                        if(_if_conditional333=position==i_253,                        _if_conditional333) {
                            __result234__ = __result_obj__ = it_252->item;
                            return __result234__;
                        }
                        it_252=it_252->next;
                        i_253++;
                    }
                    memset(&default_value_254,0,sizeof(char*));
                    __result235__ = __result_obj__ = default_value_254;
                    default_value_254 = come_decrement_ref_count2(default_value_254, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result235__;
                    default_value_254 = come_decrement_ref_count2(default_value_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
struct CVALUE* default_value_257;
unsigned int hash_258;
unsigned int it_259;
_Bool _while_condtional26;
_Bool _if_conditional334;
_Bool _if_conditional335;
struct CVALUE* __result236__;
_Bool _if_conditional336;
_Bool _if_conditional337;
struct CVALUE* __result237__;
struct CVALUE* __result238__;
struct CVALUE* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_257, 0, sizeof(struct CVALUE*));
memset(&hash_258, 0, sizeof(unsigned int));
memset(&it_259, 0, sizeof(unsigned int));
                    memset(&default_value_257,0,sizeof(struct CVALUE*));
                    hash_258=string_get_hash_key(((char*)key))%self->size;
                    it_259=hash_258;
                    while(_while_condtional26=(_Bool)1,                    _while_condtional26) {
                        if(_if_conditional334=self->item_existance[it_259],                        _if_conditional334) {
                            if(_if_conditional335=string_equals(self->keys[it_259],key),                            _if_conditional335) {
                                __result236__ = __result_obj__ = self->items[it_259];
                                come_call_finalizer2(CVALUE_finalize,default_value_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result236__;
                            }
                            it_259++;
                            if(_if_conditional336=it_259>=self->size,                            _if_conditional336) {
                                it_259=0;
                            }
                            else {
                                if(_if_conditional337=it_259==hash_258,                                _if_conditional337) {
                                    __result237__ = __result_obj__ = default_value_257;
                                    come_call_finalizer2(CVALUE_finalize,default_value_257, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result237__;
                                }
                            }
                        }
                        else {
                            __result238__ = __result_obj__ = default_value_257;
                            come_call_finalizer2(CVALUE_finalize,default_value_257, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result238__;
                        }
                    }
                    __result239__ = __result_obj__ = default_value_257;
                    come_call_finalizer2(CVALUE_finalize,default_value_257, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result239__;
                    come_call_finalizer2(CVALUE_finalize,default_value_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional344;
_Bool _if_conditional345;
struct list$1CVALUEph* __result244__;
struct list_item$1CVALUEph* it_269;
int i_270;
_Bool _while_condtional27;
_Bool _if_conditional346;
struct CVALUE* __dec_obj118;
struct list$1CVALUEph* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_269, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_270, 0, sizeof(int));
                        if(_if_conditional344=position<0,                        _if_conditional344) {
                            position+=self->len;
                        }
                        if(_if_conditional345=position>=self->len,                        _if_conditional345) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result244__ = __result_obj__ = self;
                            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result244__;
                        }
                        it_269=self->head;
                        i_270=0;
                        while(_while_condtional27=it_269!=((void*)0),                        _while_condtional27) {
                            if(_if_conditional346=position==i_270,                            _if_conditional346) {
                                __dec_obj118=it_269->item;
                                it_269->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer2(CVALUE_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_269=it_269->next;
                            i_270++;
                        }
                        __result245__ = __result_obj__ = self;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result245__;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional347;
struct CVALUE* __result246__;
void* right_value319;
struct CVALUE* result_271;
_Bool _if_conditional348;
void* right_value320;
char* __dec_obj119;
_Bool _if_conditional349;
void* right_value321;
struct sType* __dec_obj120;
_Bool _if_conditional350;
struct CVALUE* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value319 = (void*)0;
memset(&result_271, 0, sizeof(struct CVALUE*));
right_value320 = (void*)0;
right_value321 = (void*)0;
                        if(_if_conditional347=self==(void*)0,                        _if_conditional347) {
                            __result246__ = __result_obj__ = (void*)0;
                            return __result246__;
                        }
                        result_271=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value319=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional348=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional348) {
                            __dec_obj119=result_271->c_value;
                            result_271->c_value=(char*)come_increment_ref_count(((char*)(right_value320=string_clone(self->c_value))));
                            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional349=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional349) {
                            __dec_obj120=result_271->type;
                            result_271->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=sType_clone(self->type))));
                            come_call_finalizer2(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional350=self!=((void*)0),                        _if_conditional350) {
                            result_271->var=self->var;
                        }
                        __result247__ = __result_obj__ = result_271;
                        come_call_finalizer2(CVALUE_finalize,result_271, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result247__;
                        come_call_finalizer2(CVALUE_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value330;
struct sType* __dec_obj125;
void* right_value331;
struct sNode* __dec_obj126;
void* right_value332;
char* __dec_obj127;
struct sCastNode* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
    __dec_obj125=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj126=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=sNode_clone(left))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj127=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value332=__builtin_string(info->sname))));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value333;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value333 = (void*)0;
    __result252__ = __result_obj__ = ((char*)(right_value333=__builtin_string(self->sname)));
    right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value334;
char* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
    __result254__ = __result_obj__ = ((char*)(right_value334=__builtin_string("sCastNode")));
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result254__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_277;
struct sNode* left_278;
_Bool _if_conditional359;
_Bool __result255__;
void* right_value335;
struct CVALUE* left_value_279;
void* right_value336;
void* right_value337;
struct sType* type2_280;
void* right_value338;
struct CVALUE* come_value_281;
void* right_value339;
void* right_value340;
char* __dec_obj128;
void* right_value341;
struct sType* __dec_obj129;
_Bool __result256__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_277, 0, sizeof(struct sType*));
memset(&left_278, 0, sizeof(struct sNode*));
right_value335 = (void*)0;
memset(&left_value_279, 0, sizeof(struct CVALUE*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&type2_280, 0, sizeof(struct sType*));
right_value338 = (void*)0;
memset(&come_value_281, 0, sizeof(struct CVALUE*));
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
    type_277=self->mType;
    left_278=self->mLeft;
    if(_if_conditional359=!node_compile(left_278,info),    _if_conditional359) {
        __result255__ = (_Bool)0;
        return __result255__;
    }
    left_value_279=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value335=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type2_280=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=solve_generics(((struct sType*)(right_value336=sType_clone(type_277))),info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_281=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value338=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1518, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    cast_type(type2_280,left_value_279->type,left_value_279,info);
    __dec_obj128=come_value_281->c_value;
    come_value_281->c_value=(char*)come_increment_ref_count(((char*)(right_value340=xsprintf("(%s)%s",((char*)(right_value339=make_type_name_string(type2_280,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_279->c_value))));
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj129=come_value_281->type;
    come_value_281->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(type2_280))));
    come_call_finalizer2(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_281->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_281->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_281));
    __result256__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result256__;
    come_call_finalizer2(CVALUE_finalize,left_value_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value342;
struct sNode* __dec_obj130;
void* right_value343;
char* __dec_obj131;
struct sParenNode* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value342 = (void*)0;
right_value343 = (void*)0;
    __dec_obj130=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=sNode_clone(left))));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj131=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string(info->sname))));
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value344;
char* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
right_value344 = (void*)0;
    __result259__ = __result_obj__ = ((char*)(right_value344=__builtin_string(self->sname)));
    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value345;
char* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
    __result261__ = __result_obj__ = ((char*)(right_value345=__builtin_string("sParenNode")));
    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result261__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_282;
_Bool _if_conditional362;
_Bool __result262__;
void* right_value346;
struct CVALUE* left_value_283;
void* right_value347;
struct CVALUE* come_value_284;
void* right_value348;
char* __dec_obj132;
void* right_value349;
struct sType* __dec_obj133;
_Bool __result263__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_282, 0, sizeof(struct sNode*));
right_value346 = (void*)0;
memset(&left_value_283, 0, sizeof(struct CVALUE*));
right_value347 = (void*)0;
memset(&come_value_284, 0, sizeof(struct CVALUE*));
right_value348 = (void*)0;
right_value349 = (void*)0;
    left_282=self->mLeft;
    if(_if_conditional362=!node_compile(left_282,info),    _if_conditional362) {
        __result262__ = (_Bool)0;
        return __result262__;
    }
    left_value_283=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value346=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_284=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value347=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1579, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj132=come_value_284->c_value;
    come_value_284->c_value=(char*)come_increment_ref_count(((char*)(right_value348=xsprintf("(%s)",left_value_283->c_value))));
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj133=come_value_284->type;
    come_value_284->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=sType_clone(left_value_283->type))));
    come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_284->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_284->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_284));
    __result263__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result263__;
    come_call_finalizer2(CVALUE_finalize,left_value_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value350;
void* right_value351;
struct list$1tuple2$2charphsNodephph* params_285;
_Bool _while_condtional28;
_Bool _if_conditional363;
char* p_286;
int sline_287;
_Bool err_flag_288;
void* right_value352;
char* label_289;
_Bool _if_conditional364;
void* right_value353;
char* __dec_obj134;
_Bool _if_conditional365;
char* __dec_obj135;
_Bool no_comma_290;
void* right_value354;
struct sNode* node_291;
void* right_value355;
struct sNode* __dec_obj136;
void* right_value359;
void* right_value360;
_Bool _if_conditional368;
_Bool _if_conditional369;
void* right_value361;
void* right_value362;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value367;
struct sNode* node_296;
struct sNode* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
right_value350 = (void*)0;
right_value351 = (void*)0;
memset(&params_285, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_286, 0, sizeof(char*));
memset(&sline_287, 0, sizeof(int));
memset(&err_flag_288, 0, sizeof(_Bool));
right_value352 = (void*)0;
memset(&label_289, 0, sizeof(char*));
right_value353 = (void*)0;
memset(&no_comma_290, 0, sizeof(_Bool));
right_value354 = (void*)0;
memset(&node_291, 0, sizeof(struct sNode*));
right_value355 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value367 = (void*)0;
memset(&node_296, 0, sizeof(struct sNode*));
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_285=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value351=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value350=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05function.c", 1598, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        if(_if_conditional363=*info->p==41,        _if_conditional363) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_286=info->p;
        sline_287=info->sline;
        err_flag_288=(_Bool)0;
        label_289=(char*)come_increment_ref_count(((char*)(right_value352=__builtin_string(""))));
        right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional364=xisalpha(*info->p)||*info->p==95,        _if_conditional364) {
            __dec_obj134=label_289;
            label_289=(char*)come_increment_ref_count(((char*)(right_value353=parse_word(info))));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            err_flag_288=(_Bool)1;
        }
        if(_if_conditional365=err_flag_288==(_Bool)1&&*info->p==58,        _if_conditional365) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj135=label_289;
            label_289=((void*)0);
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_286;
            info->sline=sline_287;
        }
        no_comma_290=info->no_comma;
        info->no_comma=(_Bool)1;
        node_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=expression_v13(info))));
        if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj136=node_291;
        node_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_291),info))));
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_290;
        list$1tuple2$2charphsNodephph_push_back(params_285,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value360=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value359=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05function.c", 1637, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_289),(struct sNode*)come_increment_ref_count(node_291))))));
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional368=*info->p==44,        _if_conditional368) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional369=*info->p==41,            _if_conditional369) {
                info->p++;
                skip_spaces_and_lf(info);
                label_289 = come_decrement_ref_count2(label_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_291) { node_291 = come_decrement_ref_count2(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_289 = come_decrement_ref_count2(label_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_291) { node_291 = come_decrement_ref_count2(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    parse_sharp_v5(info);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1655, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value362=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value361=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05function.c", 1655, "sFunCallNode")))),fun_name,params_285,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sFunCallNode_sline;
    _inf_value1->sname=(void*)sFunCallNode_sname;
    _inf_value1->terminated=(void*)sFunCallNode_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=_inf_value1)));
    come_call_finalizer2(sFunCallNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunCallNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result268__ = __result_obj__ = node_296;
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result268__;
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional366;
void* right_value356;
struct list_item$1tuple2$2charphsNodephph* litem_292;
struct tuple2$2charphsNodeph* __dec_obj137;
_Bool _if_conditional367;
void* right_value357;
struct list_item$1tuple2$2charphsNodephph* litem_293;
struct tuple2$2charphsNodeph* __dec_obj138;
void* right_value358;
struct list_item$1tuple2$2charphsNodephph* litem_294;
struct tuple2$2charphsNodeph* __dec_obj139;
struct list$1tuple2$2charphsNodephph* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
right_value356 = (void*)0;
memset(&litem_292, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value357 = (void*)0;
memset(&litem_293, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value358 = (void*)0;
memset(&litem_294, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            if(_if_conditional366=self->len==0,            _if_conditional366) {
                litem_292=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value356=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_292->prev=((void*)0);
                litem_292->next=((void*)0);
                __dec_obj137=litem_292->item;
                litem_292->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_292;
                self->head=litem_292;
            }
            else {
                if(_if_conditional367=self->len==1,                _if_conditional367) {
                    litem_293=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value357=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_293->prev=self->head;
                    litem_293->next=((void*)0);
                    __dec_obj138=litem_293->item;
                    litem_293->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_293;
                    self->head->next=litem_293;
                }
                else {
                    litem_294=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value358=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_294->prev=self->tail;
                    litem_294->next=((void*)0);
                    __dec_obj139=litem_294->item;
                    litem_294->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_294;
                    self->tail=litem_294;
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
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional370=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional370) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional371=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional371) {
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional372=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional372) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional373;
struct sFunCallNode* __result266__;
void* right_value363;
struct sFunCallNode* result_295;
_Bool _if_conditional374;
void* right_value364;
char* __dec_obj142;
_Bool _if_conditional375;
void* right_value365;
struct list$1tuple2$2charphsNodephph* __dec_obj143;
_Bool _if_conditional376;
_Bool _if_conditional377;
void* right_value366;
char* __dec_obj144;
struct sFunCallNode* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
right_value363 = (void*)0;
memset(&result_295, 0, sizeof(struct sFunCallNode*));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
        if(_if_conditional373=self==(void*)0,        _if_conditional373) {
            __result266__ = __result_obj__ = (void*)0;
            return __result266__;
        }
        result_295=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value363=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"))));
        come_call_finalizer2(sFunCallNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional374=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional374) {
            __dec_obj142=result_295->fun_name;
            result_295->fun_name=(char*)come_increment_ref_count(((char*)(right_value364=string_clone(self->fun_name))));
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional375=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional375) {
            __dec_obj143=result_295->params;
            result_295->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value365=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional376=self!=((void*)0),        _if_conditional376) {
            result_295->sline=self->sline;
        }
        if(_if_conditional377=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional377) {
            __dec_obj144=result_295->sname;
            result_295->sname=(char*)come_increment_ref_count(((char*)(right_value366=string_clone(self->sname))));
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result267__ = __result_obj__ = result_295;
        come_call_finalizer2(sFunCallNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result267__;
        come_call_finalizer2(sFunCallNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value368;
char* __dec_obj146;
struct sLogicalDenial* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
right_value368 = (void*)0;
    __dec_obj145=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj146=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value368=__builtin_string(info->sname))));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value369;
char* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
right_value369 = (void*)0;
    __result272__ = __result_obj__ = ((char*)(right_value369=__builtin_string("sLogicalDenial")));
    right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result272__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional380;
_Bool __result273__;
void* right_value370;
struct CVALUE* come_value_297;
void* right_value371;
struct CVALUE* come_value2_298;
void* right_value372;
char* __dec_obj147;
void* right_value373;
struct sType* __dec_obj148;
_Bool __result274__;
memset(&__result_obj__, 0, sizeof(void*));
right_value370 = (void*)0;
memset(&come_value_297, 0, sizeof(struct CVALUE*));
right_value371 = (void*)0;
memset(&come_value2_298, 0, sizeof(struct CVALUE*));
right_value372 = (void*)0;
right_value373 = (void*)0;
    if(_if_conditional380=!node_compile(self->value,info),    _if_conditional380) {
        __result273__ = (_Bool)0;
        return __result273__;
    }
    come_value_297=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value370=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_298=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value371=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1708, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj147=come_value2_298->c_value;
    come_value2_298->c_value=(char*)come_increment_ref_count(((char*)(right_value372=xsprintf("!%s",come_value_297->c_value))));
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj148=come_value2_298->type;
    come_value2_298->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value373=sType_clone(come_value_297->type))));
    come_call_finalizer2(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_298->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_298));
    add_come_last_code(info,"%s;\n",come_value2_298->c_value);
    __result274__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result274__;
    come_call_finalizer2(CVALUE_finalize,come_value_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value374;
char* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
right_value374 = (void*)0;
    __result276__ = __result_obj__ = ((char*)(right_value374=__builtin_string(self->sname)));
    right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result276__;
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj149;
void* right_value375;
char* __dec_obj150;
struct sMinusNode2* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
right_value375 = (void*)0;
    __dec_obj149=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj150=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value375=__builtin_string(info->sname))));
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value376;
char* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
right_value376 = (void*)0;
    __result279__ = __result_obj__ = ((char*)(right_value376=__builtin_string("sMinusNode2")));
    right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result279__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional383;
_Bool __result280__;
void* right_value377;
struct CVALUE* come_value_299;
void* right_value378;
struct CVALUE* come_value2_300;
void* right_value379;
char* __dec_obj151;
void* right_value380;
struct sType* __dec_obj152;
_Bool __result281__;
memset(&__result_obj__, 0, sizeof(void*));
right_value377 = (void*)0;
memset(&come_value_299, 0, sizeof(struct CVALUE*));
right_value378 = (void*)0;
memset(&come_value2_300, 0, sizeof(struct CVALUE*));
right_value379 = (void*)0;
right_value380 = (void*)0;
    if(_if_conditional383=!node_compile(self->value,info),    _if_conditional383) {
        __result280__ = (_Bool)0;
        return __result280__;
    }
    come_value_299=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value377=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_300=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value378=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1767, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj151=come_value2_300->c_value;
    come_value2_300->c_value=(char*)come_increment_ref_count(((char*)(right_value379=xsprintf("-%s",come_value_299->c_value))));
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj152=come_value2_300->type;
    come_value2_300->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value380=sType_clone(come_value_299->type))));
    come_call_finalizer2(sType_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_300->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_300));
    add_come_last_code(info,"%s;\n",come_value2_300->c_value);
    __result281__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result281__;
    come_call_finalizer2(CVALUE_finalize,come_value_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value381;
char* __result283__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
    __result283__ = __result_obj__ = ((char*)(right_value381=__builtin_string(self->sname)));
    right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result283__;
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj153;
void* right_value382;
char* __dec_obj154;
struct sPlusPlusNode2* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
    __dec_obj153=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj154=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value382=__builtin_string(info->sname))));
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value383;
char* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
right_value383 = (void*)0;
    __result286__ = __result_obj__ = ((char*)(right_value383=__builtin_string("sPlusPlusNode2")));
    right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result286__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional386;
_Bool __result287__;
void* right_value384;
struct CVALUE* come_value_301;
void* right_value385;
struct CVALUE* come_value2_302;
void* right_value386;
char* __dec_obj155;
void* right_value387;
struct sType* __dec_obj156;
_Bool __result288__;
memset(&__result_obj__, 0, sizeof(void*));
right_value384 = (void*)0;
memset(&come_value_301, 0, sizeof(struct CVALUE*));
right_value385 = (void*)0;
memset(&come_value2_302, 0, sizeof(struct CVALUE*));
right_value386 = (void*)0;
right_value387 = (void*)0;
    if(_if_conditional386=!node_compile(self->value,info),    _if_conditional386) {
        __result287__ = (_Bool)0;
        return __result287__;
    }
    come_value_301=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value384=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_302=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value385=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1826, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj155=come_value2_302->c_value;
    come_value2_302->c_value=(char*)come_increment_ref_count(((char*)(right_value386=xsprintf("++%s",come_value_301->c_value))));
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj156=come_value2_302->type;
    come_value2_302->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value387=sType_clone(come_value_301->type))));
    come_call_finalizer2(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_302->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_302));
    add_come_last_code(info,"%s;\n",come_value2_302->c_value);
    __result288__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result288__;
    come_call_finalizer2(CVALUE_finalize,come_value_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value388;
char* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
right_value388 = (void*)0;
    __result290__ = __result_obj__ = ((char*)(right_value388=__builtin_string(self->sname)));
    right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result290__;
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj157;
void* right_value389;
char* __dec_obj158;
struct sMinusMinusNode2* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
    __dec_obj157=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj158=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value389=__builtin_string(info->sname))));
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value390;
char* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
    __result293__ = __result_obj__ = ((char*)(right_value390=__builtin_string("sMinusMinusNode2")));
    right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result293__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional389;
_Bool __result294__;
void* right_value391;
struct CVALUE* come_value_303;
void* right_value392;
struct CVALUE* come_value2_304;
void* right_value393;
char* __dec_obj159;
void* right_value394;
struct sType* __dec_obj160;
_Bool __result295__;
memset(&__result_obj__, 0, sizeof(void*));
right_value391 = (void*)0;
memset(&come_value_303, 0, sizeof(struct CVALUE*));
right_value392 = (void*)0;
memset(&come_value2_304, 0, sizeof(struct CVALUE*));
right_value393 = (void*)0;
right_value394 = (void*)0;
    if(_if_conditional389=!node_compile(self->value,info),    _if_conditional389) {
        __result294__ = (_Bool)0;
        return __result294__;
    }
    come_value_303=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value391=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_304=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value392=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1885, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj159=come_value2_304->c_value;
    come_value2_304->c_value=(char*)come_increment_ref_count(((char*)(right_value393=xsprintf("--%s",come_value_303->c_value))));
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj160=come_value2_304->type;
    come_value2_304->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value394=sType_clone(come_value_303->type))));
    come_call_finalizer2(sType_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_304->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_304));
    add_come_last_code(info,"%s;\n",come_value2_304->c_value);
    __result295__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result295__;
    come_call_finalizer2(CVALUE_finalize,come_value_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value395;
char* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
right_value395 = (void*)0;
    __result297__ = __result_obj__ = ((char*)(right_value395=__builtin_string(self->sname)));
    right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result297__;
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj161;
void* right_value396;
char* __dec_obj162;
struct sComplement* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
right_value396 = (void*)0;
    __dec_obj161=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj162=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value396=__builtin_string(info->sname))));
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value397;
char* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
right_value397 = (void*)0;
    __result300__ = __result_obj__ = ((char*)(right_value397=__builtin_string("sComplement")));
    right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result300__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional392;
_Bool __result301__;
void* right_value398;
struct CVALUE* come_value_305;
void* right_value399;
struct CVALUE* come_value2_306;
void* right_value400;
char* __dec_obj163;
void* right_value401;
struct sType* __dec_obj164;
_Bool __result302__;
memset(&__result_obj__, 0, sizeof(void*));
right_value398 = (void*)0;
memset(&come_value_305, 0, sizeof(struct CVALUE*));
right_value399 = (void*)0;
memset(&come_value2_306, 0, sizeof(struct CVALUE*));
right_value400 = (void*)0;
right_value401 = (void*)0;
    if(_if_conditional392=!node_compile(self->value,info),    _if_conditional392) {
        __result301__ = (_Bool)0;
        return __result301__;
    }
    come_value_305=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value398=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_306=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value399=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1944, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj163=come_value2_306->c_value;
    come_value2_306->c_value=(char*)come_increment_ref_count(((char*)(right_value400=xsprintf("~%s",come_value_305->c_value))));
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj164=come_value2_306->type;
    come_value2_306->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value401=sType_clone(come_value_305->type))));
    come_call_finalizer2(sType_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_306->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_306));
    add_come_last_code(info,"%s;\n",come_value2_306->c_value);
    __result302__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result302__;
    come_call_finalizer2(CVALUE_finalize,come_value_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value402;
char* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value402 = (void*)0;
    __result304__ = __result_obj__ = ((char*)(right_value402=__builtin_string(self->sname)));
    right_value402 = come_decrement_ref_count2(right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result304__;
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value403;
char* __dec_obj165;
void* right_value421;
struct sBlock* __dec_obj171;
struct sNormalBlock* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
right_value403 = (void*)0;
right_value421 = (void*)0;
    self->sline=info->sline;
    __dec_obj165=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value403=__builtin_string(info->sname))));
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj171=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value421=sBlock_clone(block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result324__ = __result_obj__ = self;
    come_call_finalizer2(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result324__;
    come_call_finalizer2(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional393;
struct sBlock* __result305__;
void* right_value404;
struct sBlock* result_307;
_Bool _if_conditional394;
void* right_value405;
struct list$1sNodeph* __dec_obj166;
_Bool _if_conditional395;
void* right_value420;
struct sVarTable* __dec_obj170;
struct sBlock* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
right_value404 = (void*)0;
memset(&result_307, 0, sizeof(struct sBlock*));
right_value405 = (void*)0;
right_value420 = (void*)0;
        if(_if_conditional393=self==(void*)0,        _if_conditional393) {
            __result305__ = __result_obj__ = (void*)0;
            return __result305__;
        }
        result_307=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value404=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional394=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional394) {
            __dec_obj166=result_307->mNodes;
            result_307->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value405=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional395=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional395) {
            __dec_obj170=result_307->mVarTable;
            result_307->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value420=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result323__ = __result_obj__ = result_307;
        come_call_finalizer2(sBlock_finalize,result_307, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result323__;
        come_call_finalizer2(sBlock_finalize,result_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional396;
struct sVarTable* __result306__;
void* right_value406;
struct sVarTable* result_308;
_Bool _if_conditional397;
void* right_value419;
struct map$2charphsVarph* __dec_obj169;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
struct sVarTable* __result322__;
memset(&__result_obj__, 0, sizeof(void*));
right_value406 = (void*)0;
memset(&result_308, 0, sizeof(struct sVarTable*));
right_value419 = (void*)0;
                if(_if_conditional396=self==(void*)0,                _if_conditional396) {
                    __result306__ = __result_obj__ = (void*)0;
                    return __result306__;
                }
                result_308=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value406=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional397=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional397) {
                    __dec_obj169=result_308->mVars;
                    result_308->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value419=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional430=self!=((void*)0),                _if_conditional430) {
                    result_308->mGlobal=self->mGlobal;
                }
                if(_if_conditional431=self!=((void*)0),                _if_conditional431) {
                    result_308->mParent=self->mParent;
                }
                if(_if_conditional432=self!=((void*)0),                _if_conditional432) {
                    result_308->mID=self->mID;
                }
                __result322__ = __result_obj__ = result_308;
                come_call_finalizer2(sVarTable_finalize,result_308, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result322__;
                come_call_finalizer2(sVarTable_finalize,result_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional398;
struct map$2charphsVarph* __result307__;
void* right_value407;
void* right_value413;
struct map$2charphsVarph* result_312;
void* right_value414;
void* right_value415;
struct list$1charp* __dec_obj168;
char* it_315;
struct sVar* default_value_318;
struct sVar* it2_321;
struct map$2charphsVarph* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
right_value407 = (void*)0;
right_value413 = (void*)0;
memset(&result_312, 0, sizeof(struct map$2charphsVarph*));
right_value414 = (void*)0;
right_value415 = (void*)0;
memset(&it_315, 0, sizeof(char*));
memset(&default_value_318, 0, sizeof(struct sVar*));
memset(&it2_321, 0, sizeof(struct sVar*));
                        if(_if_conditional398=self==((void*)0),                        _if_conditional398) {
                            __result307__ = __result_obj__ = ((void*)0);
                            return __result307__;
                        }
                        result_312=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value413=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value407=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1178, "map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj168=result_312->key_list;
                        result_312->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value415=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value414=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1180, "list$1charp"))))))));
                        come_call_finalizer2(list$1charp_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charpp_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charpp_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(                        it_315=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_315=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_318,0,sizeof(struct sVar*));
                            it2_321=map$2charphsVarph_at(self,it_315,default_value_318);
                            map$2charphsVarph_insert2(result_312,it_315,it2_321);
                        }
                        __result321__ = __result_obj__ = result_312;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_312, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result321__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_312, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value408;
void* right_value409;
void* right_value410;
int i_309;
void* right_value411;
void* right_value412;
struct list$1charp* __dec_obj167;
struct map$2charphsVarph* __result308__;
memset(&__result_obj__, 0, sizeof(void*));
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&i_309, 0, sizeof(int));
right_value411 = (void*)0;
right_value412 = (void*)0;
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value408=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
                            right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value409=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1085, "sVar*%"))));
                            come_call_finalizer2(sVar_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value410=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
                            right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_309=0;                            i_309<1024;                            i_309++                            ){
                                self->item_existance[i_309]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj167=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value412=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value411=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
                            come_call_finalizer2(list$1charp_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charpp_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charpp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->it=0;
                            __result308__ = __result_obj__ = self;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result308__;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional399=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional399) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional400=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional400) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional401=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional401) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional402=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional402) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_310;
_Bool _if_conditional403;
_Bool _if_conditional404;
int i_311;
_Bool _if_conditional405;
_Bool _if_conditional406;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_310, 0, sizeof(int));
memset(&i_311, 0, sizeof(int));
                                for(                                i_310=0;                                i_310<self->size;                                i_310++                                ){
                                    if(_if_conditional403=self->item_existance[i_310],                                    _if_conditional403) {
                                        if(_if_conditional404=1,                                        _if_conditional404) {
                                            come_call_finalizer2(sVar_finalize,self->items[i_310], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(                                i_311=0;                                i_311<self->size;                                i_311++                                ){
                                    if(_if_conditional405=self->item_existance[i_311],                                    _if_conditional405) {
                                        if(_if_conditional406=1,                                        _if_conditional406) {
                                            self->keys[i_311] = come_decrement_ref_count2(self->keys[i_311], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->keys);
                                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional407;
char* result_313;
char* __result309__;
_Bool _if_conditional408;
char* __result310__;
char* result_314;
char* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_313, 0, sizeof(char*));
memset(&result_314, 0, sizeof(char*));
                            if(_if_conditional407=self==((void*)0),                            _if_conditional407) {
                                memset(&result_313,0,sizeof(char*));
                                __result309__ = __result_obj__ = result_313;
                                return __result309__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result310__ = __result_obj__ = self->key_list->it->item;
                                return __result310__;
                            }
                            memset(&result_314,0,sizeof(char*));
                            __result311__ = __result_obj__ = result_314;
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
_Bool _if_conditional409;
char* result_316;
char* __result313__;
_Bool _if_conditional410;
char* __result314__;
char* result_317;
char* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_316, 0, sizeof(char*));
memset(&result_317, 0, sizeof(char*));
                            if(_if_conditional409=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional409) {
                                memset(&result_316,0,sizeof(char*));
                                __result313__ = __result_obj__ = result_316;
                                return __result313__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result314__ = __result_obj__ = self->key_list->it->item;
                                return __result314__;
                            }
                            memset(&result_317,0,sizeof(char*));
                            __result315__ = __result_obj__ = result_317;
                            return __result315__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_319;
unsigned int it_320;
_Bool _while_condtional29;
_Bool _if_conditional411;
_Bool _if_conditional412;
struct sVar* __result316__;
_Bool _if_conditional413;
_Bool _if_conditional414;
struct sVar* __result317__;
struct sVar* __result318__;
struct sVar* __result319__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_319, 0, sizeof(unsigned int));
memset(&it_320, 0, sizeof(unsigned int));
                                hash_319=string_get_hash_key(((char*)key))%self->size;
                                it_320=hash_319;
                                while(_while_condtional29=(_Bool)1,                                _while_condtional29) {
                                    if(_if_conditional411=self->item_existance[it_320],                                    _if_conditional411) {
                                        if(_if_conditional412=string_equals(self->keys[it_320],key),                                        _if_conditional412) {
                                            __result316__ = __result_obj__ = self->items[it_320];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result316__;
                                        }
                                        it_320++;
                                        if(_if_conditional413=it_320>=self->size,                                        _if_conditional413) {
                                            it_320=0;
                                        }
                                        else {
                                            if(_if_conditional414=it_320==hash_319,                                            _if_conditional414) {
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
_Bool _if_conditional415;
unsigned int hash_333;
int it_334;
_Bool _while_condtional31;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool same_key_exist_335;
char* it2_336;
_Bool _if_conditional427;
_Bool _if_conditional428;
struct map$2charphsVarph* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_333, 0, sizeof(unsigned int));
memset(&it_334, 0, sizeof(int));
memset(&same_key_exist_335, 0, sizeof(_Bool));
memset(&it2_336, 0, sizeof(char*));
                                if(_if_conditional415=self->len*2>=self->size,                                _if_conditional415) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_333=string_get_hash_key(key)%self->size;
                                it_334=hash_333;
                                while(_while_condtional31=(_Bool)1,                                _while_condtional31) {
                                    if(_if_conditional419=self->item_existance[it_334],                                    _if_conditional419) {
                                        if(_if_conditional420=string_equals(self->keys[it_334],key),                                        _if_conditional420) {
                                            if(_if_conditional421=1,                                            _if_conditional421) {
                                                self->keys[it_334] = come_decrement_ref_count2(self->keys[it_334], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_334]);
                                                self->keys[it_334]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_334]);
                                                self->keys[it_334]=key;
                                            }
                                            if(_if_conditional422=1,                                            _if_conditional422) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_334], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->items[it_334]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_334]=item;
                                            }
                                            break;
                                        }
                                        it_334++;
                                        if(_if_conditional423=it_334>=self->size,                                        _if_conditional423) {
                                            it_334=0;
                                        }
                                        else {
                                            if(_if_conditional424=it_334==hash_333,                                            _if_conditional424) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_334]=(_Bool)1;
                                        if(_if_conditional425=1,                                        _if_conditional425) {
                                            self->keys[it_334]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_334]=key;
                                        }
                                        if(_if_conditional426=1,                                        _if_conditional426) {
                                            self->items[it_334]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_334]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_335=(_Bool)0;
                                for(                                it2_336=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_336=list$1charp_next(self->key_list)                                ){
                                    if(_if_conditional427=string_equals(it2_336,key),                                    _if_conditional427) {
                                        same_key_exist_335=(_Bool)1;
                                    }
                                }
                                if(_if_conditional428=!same_key_exist_335,                                _if_conditional428) {
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
int size_322;
void* right_value416;
char** keys_323;
void* right_value417;
struct sVar** items_324;
void* right_value418;
_Bool* item_existance_325;
int len_326;
char* it_327;
struct sVar* default_value_328;
struct sVar* it2_329;
unsigned int hash_330;
int n_331;
_Bool _while_condtional30;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
struct sVar* default_value_332;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_322, 0, sizeof(int));
right_value416 = (void*)0;
memset(&keys_323, 0, sizeof(char**));
right_value417 = (void*)0;
memset(&items_324, 0, sizeof(struct sVar**));
right_value418 = (void*)0;
memset(&item_existance_325, 0, sizeof(_Bool*));
memset(&len_326, 0, sizeof(int));
memset(&it_327, 0, sizeof(char*));
memset(&default_value_328, 0, sizeof(struct sVar*));
memset(&it2_329, 0, sizeof(struct sVar*));
memset(&hash_330, 0, sizeof(unsigned int));
memset(&n_331, 0, sizeof(int));
memset(&default_value_332, 0, sizeof(struct sVar*));
                                        size_322=self->size*10;
                                        keys_323=(char**)come_increment_ref_count(((char**)(right_value416=(char**)come_calloc(1, sizeof(char*)*(1*(size_322)), "./comelang2.h", 1335, "char*%"))));
                                        right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_324=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value417=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_322)), "./comelang2.h", 1336, "sVar*%"))));
                                        come_call_finalizer2(sVar_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_325=(_Bool*)come_increment_ref_count(((_Bool*)(right_value418=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_322)), "./comelang2.h", 1337, "bool"))));
                                        right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_326=0;
                                        for(                                        it_327=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_327=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_328,0,sizeof(struct sVar*));
                                            it2_329=map$2charphsVarph_at(self,it_327,default_value_328);
                                            hash_330=string_get_hash_key(it_327)%size_322;
                                            n_331=hash_330;
                                            while(_while_condtional30=(_Bool)1,                                            _while_condtional30) {
                                                if(_if_conditional416=item_existance_325[n_331],                                                _if_conditional416) {
                                                    n_331++;
                                                    if(_if_conditional417=n_331>=size_322,                                                    _if_conditional417) {
                                                        n_331=0;
                                                    }
                                                    else {
                                                        if(_if_conditional418=n_331==hash_330,                                                        _if_conditional418) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_325[n_331]=(_Bool)1;
                                                    keys_323[n_331]=it_327;
                                                    items_324[n_331]=map$2charphsVarph_at(self,it_327,default_value_332);
                                                    len_326++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_free((char*)self->keys);
                                        self->keys=keys_323;
                                        self->items=items_324;
                                        self->item_existance=item_existance_325;
                                        self->size=size_322;
                                        self->len=len_326;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional429;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional429=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional429) {
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
void* right_value422;
char* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value422 = (void*)0;
    __result326__ = __result_obj__ = ((char*)(right_value422=__builtin_string("sNormalBlock")));
    right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result326__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* block_337;
_Bool __result327__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&block_337, 0, sizeof(struct sBlock*));
    block_337=self->mBlock;
    add_come_code(info,"{\n");
    transpile_block(block_337,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
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
void* right_value423;
char* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
right_value423 = (void*)0;
    __result329__ = __result_obj__ = ((char*)(right_value423=__builtin_string(self->sname)));
    right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result329__;
}

struct sNode* parse_normal_block(struct sInfo* info){
void* __result_obj__;
void* right_value424;
struct sBlock* block_338;
void* right_value425;
void* right_value426;
struct sNode* _inf_value2;
struct sNormalBlock* _inf_obj_value2;
void* right_value430;
struct sNode* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value424 = (void*)0;
memset(&block_338, 0, sizeof(struct sBlock*));
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value430 = (void*)0;
    block_338=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value424=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2025, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sNormalBlock*)(right_value426=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value425=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05function.c", 2025, "sNormalBlock")))),block_338,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNormalBlock_finalize;
    _inf_value2->clone=(void*)sNormalBlock_clone;
    _inf_value2->compile=(void*)sNormalBlock_compile;
    _inf_value2->sline=(void*)sNormalBlock_sline;
    _inf_value2->sname=(void*)sNormalBlock_sname;
    _inf_value2->terminated=(void*)sNormalBlock_terminated;
    _inf_value2->kind=(void*)sNormalBlock_kind;
    __result332__ = __result_obj__ = ((struct sNode*)(right_value430=_inf_value2));
    come_call_finalizer2(sBlock_finalize,block_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sNormalBlock_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNormalBlock_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result332__;
    come_call_finalizer2(sBlock_finalize,block_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional435;
_Bool _if_conditional436;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional435=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional435) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional436=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional436) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional437;
struct sNormalBlock* __result330__;
void* right_value427;
struct sNormalBlock* result_339;
_Bool _if_conditional438;
void* right_value428;
struct sBlock* __dec_obj172;
_Bool _if_conditional439;
_Bool _if_conditional440;
void* right_value429;
char* __dec_obj173;
struct sNormalBlock* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
right_value427 = (void*)0;
memset(&result_339, 0, sizeof(struct sNormalBlock*));
right_value428 = (void*)0;
right_value429 = (void*)0;
        if(_if_conditional437=self==(void*)0,        _if_conditional437) {
            __result330__ = __result_obj__ = (void*)0;
            return __result330__;
        }
        result_339=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value427=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "sNormalBlock"))));
        come_call_finalizer2(sNormalBlock_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional438=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional438) {
            __dec_obj172=result_339->mBlock;
            result_339->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value428=sBlock_clone(self->mBlock))));
            come_call_finalizer2(sBlock_finalize,__dec_obj172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional439=self!=((void*)0),        _if_conditional439) {
            result_339->sline=self->sline;
        }
        if(_if_conditional440=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional440) {
            __dec_obj173=result_339->sname;
            result_339->sname=(char*)come_increment_ref_count(((char*)(right_value429=string_clone(self->sname))));
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result331__ = __result_obj__ = result_339;
        come_call_finalizer2(sNormalBlock_finalize,result_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result331__;
        come_call_finalizer2(sNormalBlock_finalize,result_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void backtrace_parse_type(struct sInfo* info){
void* __result_obj__;
void* right_value431;
memset(&__result_obj__, 0, sizeof(void*));
right_value431 = (void*)0;
    info->no_output_err=(_Bool)1;
    ((struct tuple3$3sTypephcharphbool*)(right_value431=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional441;
_Bool _if_conditional442;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional441=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional441) {
            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional442=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional442) {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value432;
void* right_value433;
void* right_value434;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* right_value438;
struct sNode* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value438 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2037, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sLogicalDenial*)(right_value434=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value432=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05function.c", 2037, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=sNode_clone(node)))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sLogicalDenial_finalize;
    _inf_value3->clone=(void*)sLogicalDenial_clone;
    _inf_value3->compile=(void*)sLogicalDenial_compile;
    _inf_value3->sline=(void*)sLogicalDenial_sline;
    _inf_value3->sname=(void*)sLogicalDenial_sname;
    _inf_value3->terminated=(void*)sLogicalDenial_terminated;
    _inf_value3->kind=(void*)sLogicalDenial_kind;
    __result335__ = __result_obj__ = ((struct sNode*)(right_value438=_inf_value3));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sLogicalDenial_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(sLogicalDenial_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result335__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* expression_node_v99(struct sInfo* info){
void* __result_obj__;
_Bool refference_341;
char* p_342;
int sline_343;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _while_condtional32;
_Bool _if_conditional452;
_Bool _if_conditional453;
void* right_value439;
struct sNode* __result336__;
_Bool _if_conditional454;
void* right_value440;
struct sNode* node_344;
void* right_value441;
void* right_value442;
struct sNode* _inf_value4;
struct sLogicalDenial* _inf_obj_value4;
void* right_value446;
struct sNode* __result339__;
_Bool _if_conditional461;
void* right_value447;
struct sNode* node_346;
void* right_value448;
void* right_value449;
struct sNode* _inf_value5;
struct sMinusMinusNode2* _inf_obj_value5;
void* right_value453;
struct sNode* __result342__;
_Bool _if_conditional468;
void* right_value454;
struct sNode* node_348;
void* right_value455;
void* right_value456;
struct sNode* _inf_value6;
struct sMinusNode2* _inf_obj_value6;
void* right_value460;
struct sNode* __result345__;
_Bool _if_conditional475;
void* right_value461;
struct sNode* node_350;
void* right_value462;
void* right_value463;
struct sNode* _inf_value7;
struct sPlusPlusNode2* _inf_obj_value7;
void* right_value467;
struct sNode* __result348__;
_Bool _if_conditional482;
void* right_value468;
struct sNode* node_352;
void* right_value469;
void* right_value470;
struct sNode* _inf_value8;
struct sComplement* _inf_obj_value8;
void* right_value474;
struct sNode* __result351__;
_Bool _if_conditional489;
void* right_value475;
struct sNode* node_354;
void* right_value476;
struct sNode* __dec_obj186;
struct sNode* __result352__;
_Bool _if_conditional490;
void* right_value477;
struct sNode* node_355;
void* right_value478;
struct sNode* __dec_obj187;
struct sNode* __result353__;
_Bool _if_conditional491;
void* right_value479;
struct sNode* node_356;
void* right_value480;
struct sNode* __dec_obj188;
struct sNode* __result354__;
_Bool _if_conditional492;
void* right_value481;
struct sNode* node_357;
void* right_value482;
struct sNode* __dec_obj189;
struct sNode* __result355__;
_Bool _if_conditional493;
_Bool _if_conditional494;
void* right_value483;
void* right_value484;
void* right_value485;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* right_value490;
struct sNode* __result358__;
char* head_359;
void* right_value491;
struct sNode* value_360;
char* tail_361;
void* right_value492;
struct sNode* __dec_obj193;
void* right_value493;
struct sNode* __dec_obj194;
void* right_value494;
void* right_value495;
void* right_value496;
struct sNode* _inf_value10;
struct sReturnNode* _inf_obj_value10;
void* right_value501;
struct sNode* __result361__;
_Bool _if_conditional511;
_Bool _if_conditional512;
void* right_value502;
void* right_value503;
void* right_value504;
struct sNode* _inf_value11;
struct sParentReturnNode* _inf_obj_value11;
void* right_value509;
struct sNode* __result364__;
char* head_365;
void* right_value510;
struct sNode* value_366;
char* tail_367;
void* right_value511;
struct sNode* __dec_obj201;
void* right_value512;
struct sNode* __dec_obj202;
void* right_value513;
void* right_value514;
void* right_value515;
struct sNode* _inf_value12;
struct sParentReturnNode* _inf_obj_value12;
void* right_value520;
struct sNode* __result367__;
_Bool _if_conditional529;
void* right_value521;
void* right_value522;
struct sNode* _inf_value13;
struct sParentBreakNode* _inf_obj_value13;
void* right_value525;
struct sNode* __result370__;
_Bool _if_conditional534;
void* right_value526;
void* right_value527;
struct sNode* _inf_value14;
struct sParentContinueNode* _inf_obj_value14;
void* right_value530;
struct sNode* __result373__;
_Bool _if_conditional539;
_Bool quote_372;
_Bool _if_conditional540;
_Bool no_assign_373;
void* right_value531;
struct sNode* value_374;
void* right_value532;
void* right_value533;
struct sNode* _inf_value15;
struct sDerefferenceNode* _inf_obj_value15;
void* right_value537;
struct sNode* __result376__;
_Bool _if_conditional548;
void* right_value538;
struct sNode* value_376;
void* right_value539;
void* right_value540;
struct sNode* _inf_value16;
struct sRefferenceNode* _inf_obj_value16;
void* right_value544;
struct sNode* __result379__;
_Bool _if_conditional555;
void* right_value545;
struct sNode* value_378;
void* right_value546;
void* right_value547;
struct sNode* _inf_value17;
struct sReverseNode* _inf_obj_value17;
void* right_value551;
struct sNode* __result382__;
_Bool _if_conditional562;
char* head_380;
int head_sline_381;
char* buf_382;
char* p_383;
int sline_384;
_Bool _if_conditional563;
void* right_value552;
char* __dec_obj214;
void* right_value553;
char* __dec_obj215;
_Bool is_type_name__385;
_Bool define_function_pointer_flag_386;
_Bool _if_conditional564;
_Bool _if_conditional565;
_Bool _if_conditional566;
_Bool lambda_flag_387;
_Bool _if_conditional567;
_Bool _if_conditional568;
void* right_value554;
char* word2_388;
_Bool _if_conditional569;
_Bool fun_name_with_type_name_389;
_Bool _if_conditional570;
_Bool _if_conditional571;
void* right_value555;
char* word2_390;
_Bool _while_condtional33;
_Bool _if_conditional572;
_Bool _if_conditional573;
void* right_value556;
char* __dec_obj216;
_Bool _if_conditional574;
void* right_value557;
struct sNode* __result383__;
_Bool _if_conditional575;
void* right_value558;
struct sNode* node_391;
void* right_value559;
struct sNode* __dec_obj217;
void* right_value560;
struct sNode* __dec_obj218;
struct sNode* __result384__;
_Bool _if_conditional576;
void* right_value561;
void* right_value562;
struct sNode* _inf_value18;
struct sFuncNode* _inf_obj_value18;
void* right_value567;
struct sNode* __result387__;
_Bool _if_conditional585;
void* right_value568;
void* right_value569;
struct sNode* _inf_value19;
struct sLineNode* _inf_obj_value19;
void* right_value574;
struct sNode* __result390__;
_Bool _if_conditional594;
void* right_value575;
void* right_value576;
struct sNode* _inf_value20;
struct sSNameNode* _inf_obj_value20;
void* right_value581;
struct sNode* __result393__;
_Bool _if_conditional603;
void* right_value582;
void* right_value583;
struct sNode* _inf_value21;
struct sCallerFuncNode* _inf_obj_value21;
void* right_value588;
struct sNode* __result396__;
_Bool _if_conditional612;
void* right_value589;
void* right_value590;
struct sNode* _inf_value22;
struct sCallerLineNode* _inf_obj_value22;
void* right_value595;
struct sNode* __result399__;
_Bool _if_conditional621;
void* right_value596;
void* right_value597;
struct sNode* _inf_value23;
struct sCallerSNameNode* _inf_obj_value23;
void* right_value602;
struct sNode* __result402__;
_Bool _if_conditional630;
void* right_value603;
struct sNode* node_398;
void* right_value604;
struct sNode* __dec_obj237;
struct sNode* __result403__;
_Bool _if_conditional631;
void* right_value605;
void* right_value606;
struct buffer* fun_name_399;
void* right_value607;
void* right_value608;
struct sType* type_403;
_Bool _if_conditional636;
void* right_value609;
struct sClass* klass_409;
_Bool _if_conditional647;
void* right_value610;
void* right_value611;
struct sType* __dec_obj238;
_Bool _while_condtional37;
_Bool _if_conditional648;
void* right_value612;
char* buf2_410;
void* right_value613;
void* right_value614;
struct sNode* node_411;
void* right_value615;
struct sNode* __dec_obj239;
void* right_value616;
struct sNode* __dec_obj240;
struct sNode* __result412__;
_Bool _if_conditional649;
void* right_value617;
void* right_value618;
struct buffer* fun_name_412;
void* right_value619;
char* buf2_413;
void* right_value620;
void* right_value621;
struct sNode* node_414;
void* right_value622;
struct sNode* __dec_obj241;
void* right_value623;
struct sNode* __dec_obj242;
struct sNode* __result413__;
_Bool _if_conditional650;
void* right_value624;
struct sNode* node_415;
void* right_value625;
struct sNode* __dec_obj243;
void* right_value626;
struct sNode* __dec_obj244;
struct sNode* __result414__;
void* right_value627;
struct sNode* node_416;
void* right_value628;
struct sNode* __dec_obj245;
struct sNode* __result415__;
_Bool _if_conditional651;
_Bool cast_expression_flag_417;
char* p_418;
int sline_419;
void* right_value629;
char* word_420;
_Bool _if_conditional652;
void* right_value630;
char* __dec_obj246;
_Bool _if_conditional653;
_Bool tuple_expression_flag_421;
char* p_422;
int sline_423;
_Bool no_comma_424;
_Bool no_output_err_425;
_Bool no_output_come_code_426;
void* right_value631;
struct sNode* node_427;
void* right_value632;
struct sNode* node2_428;
_Bool _if_conditional654;
_Bool _if_conditional655;
void* right_value633;
struct sNode* node_429;
void* right_value634;
struct sNode* __dec_obj247;
struct sNode* __result416__;
_Bool _if_conditional656;
void* right_value635;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_430;
char* name_431;
_Bool err_432;
_Bool _if_conditional657;
void* right_value636;
struct sNode* node_433;
void* right_value637;
struct sNode* __dec_obj248;
void* right_value638;
void* right_value639;
struct sNode* _inf_value24;
struct sCastNode* _inf_obj_value24;
void* right_value644;
struct sNode* __result419__;
void* right_value645;
struct sNode* node_435;
void* right_value646;
void* right_value647;
struct sNode* _inf_value25;
struct sParenNode* _inf_obj_value25;
void* right_value651;
struct sNode* __dec_obj254;
void* right_value652;
struct sNode* __dec_obj255;
struct sNode* __result422__;
void* right_value653;
struct sNode* node_437;
void* right_value654;
struct sNode* __dec_obj256;
struct sNode* __result423__;
struct sNode* __result424__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&refference_341, 0, sizeof(_Bool));
memset(&p_342, 0, sizeof(char*));
memset(&sline_343, 0, sizeof(int));
right_value439 = (void*)0;
right_value440 = (void*)0;
memset(&node_344, 0, sizeof(struct sNode*));
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
memset(&node_346, 0, sizeof(struct sNode*));
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
memset(&node_348, 0, sizeof(struct sNode*));
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
memset(&node_350, 0, sizeof(struct sNode*));
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value467 = (void*)0;
right_value468 = (void*)0;
memset(&node_352, 0, sizeof(struct sNode*));
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
memset(&node_354, 0, sizeof(struct sNode*));
right_value476 = (void*)0;
right_value477 = (void*)0;
memset(&node_355, 0, sizeof(struct sNode*));
right_value478 = (void*)0;
right_value479 = (void*)0;
memset(&node_356, 0, sizeof(struct sNode*));
right_value480 = (void*)0;
right_value481 = (void*)0;
memset(&node_357, 0, sizeof(struct sNode*));
right_value482 = (void*)0;
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value490 = (void*)0;
memset(&head_359, 0, sizeof(char*));
right_value491 = (void*)0;
memset(&value_360, 0, sizeof(struct sNode*));
memset(&tail_361, 0, sizeof(char*));
right_value492 = (void*)0;
right_value493 = (void*)0;
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value496 = (void*)0;
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value509 = (void*)0;
memset(&head_365, 0, sizeof(char*));
right_value510 = (void*)0;
memset(&value_366, 0, sizeof(struct sNode*));
memset(&tail_367, 0, sizeof(char*));
right_value511 = (void*)0;
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value520 = (void*)0;
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
right_value527 = (void*)0;
right_value530 = (void*)0;
memset(&quote_372, 0, sizeof(_Bool));
memset(&no_assign_373, 0, sizeof(_Bool));
right_value531 = (void*)0;
memset(&value_374, 0, sizeof(struct sNode*));
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value537 = (void*)0;
right_value538 = (void*)0;
memset(&value_376, 0, sizeof(struct sNode*));
right_value539 = (void*)0;
right_value540 = (void*)0;
right_value544 = (void*)0;
right_value545 = (void*)0;
memset(&value_378, 0, sizeof(struct sNode*));
right_value546 = (void*)0;
right_value547 = (void*)0;
right_value551 = (void*)0;
memset(&head_380, 0, sizeof(char*));
memset(&head_sline_381, 0, sizeof(int));
memset(&buf_382, 0, sizeof(char*));
memset(&p_383, 0, sizeof(char*));
memset(&sline_384, 0, sizeof(int));
right_value552 = (void*)0;
right_value553 = (void*)0;
memset(&is_type_name__385, 0, sizeof(_Bool));
memset(&define_function_pointer_flag_386, 0, sizeof(_Bool));
memset(&lambda_flag_387, 0, sizeof(_Bool));
right_value554 = (void*)0;
memset(&word2_388, 0, sizeof(char*));
memset(&fun_name_with_type_name_389, 0, sizeof(_Bool));
right_value555 = (void*)0;
memset(&word2_390, 0, sizeof(char*));
right_value556 = (void*)0;
right_value557 = (void*)0;
right_value558 = (void*)0;
memset(&node_391, 0, sizeof(struct sNode*));
right_value559 = (void*)0;
right_value560 = (void*)0;
right_value561 = (void*)0;
right_value562 = (void*)0;
right_value567 = (void*)0;
right_value568 = (void*)0;
right_value569 = (void*)0;
right_value574 = (void*)0;
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value581 = (void*)0;
right_value582 = (void*)0;
right_value583 = (void*)0;
right_value588 = (void*)0;
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value595 = (void*)0;
right_value596 = (void*)0;
right_value597 = (void*)0;
right_value602 = (void*)0;
right_value603 = (void*)0;
memset(&node_398, 0, sizeof(struct sNode*));
right_value604 = (void*)0;
right_value605 = (void*)0;
right_value606 = (void*)0;
memset(&fun_name_399, 0, sizeof(struct buffer*));
right_value607 = (void*)0;
right_value608 = (void*)0;
memset(&type_403, 0, sizeof(struct sType*));
right_value609 = (void*)0;
memset(&klass_409, 0, sizeof(struct sClass*));
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value612 = (void*)0;
memset(&buf2_410, 0, sizeof(char*));
right_value613 = (void*)0;
right_value614 = (void*)0;
memset(&node_411, 0, sizeof(struct sNode*));
right_value615 = (void*)0;
right_value616 = (void*)0;
right_value617 = (void*)0;
right_value618 = (void*)0;
memset(&fun_name_412, 0, sizeof(struct buffer*));
right_value619 = (void*)0;
memset(&buf2_413, 0, sizeof(char*));
right_value620 = (void*)0;
right_value621 = (void*)0;
memset(&node_414, 0, sizeof(struct sNode*));
right_value622 = (void*)0;
right_value623 = (void*)0;
right_value624 = (void*)0;
memset(&node_415, 0, sizeof(struct sNode*));
right_value625 = (void*)0;
right_value626 = (void*)0;
right_value627 = (void*)0;
memset(&node_416, 0, sizeof(struct sNode*));
right_value628 = (void*)0;
memset(&cast_expression_flag_417, 0, sizeof(_Bool));
memset(&p_418, 0, sizeof(char*));
memset(&sline_419, 0, sizeof(int));
right_value629 = (void*)0;
memset(&word_420, 0, sizeof(char*));
right_value630 = (void*)0;
memset(&tuple_expression_flag_421, 0, sizeof(_Bool));
memset(&p_422, 0, sizeof(char*));
memset(&sline_423, 0, sizeof(int));
memset(&no_comma_424, 0, sizeof(_Bool));
memset(&no_output_err_425, 0, sizeof(_Bool));
memset(&no_output_come_code_426, 0, sizeof(_Bool));
right_value631 = (void*)0;
memset(&node_427, 0, sizeof(struct sNode*));
right_value632 = (void*)0;
memset(&node2_428, 0, sizeof(struct sNode*));
right_value633 = (void*)0;
memset(&node_429, 0, sizeof(struct sNode*));
right_value634 = (void*)0;
right_value635 = (void*)0;
memset(&type_430, 0, sizeof(struct sType*));
memset(&name_431, 0, sizeof(char*));
memset(&err_432, 0, sizeof(_Bool));
memset(&type_430, 0, sizeof(struct sType*));
memset(&name_431, 0, sizeof(char*));
memset(&err_432, 0, sizeof(_Bool));
right_value636 = (void*)0;
memset(&node_433, 0, sizeof(struct sNode*));
right_value637 = (void*)0;
right_value638 = (void*)0;
right_value639 = (void*)0;
right_value644 = (void*)0;
right_value645 = (void*)0;
memset(&node_435, 0, sizeof(struct sNode*));
right_value646 = (void*)0;
right_value647 = (void*)0;
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value653 = (void*)0;
memset(&node_437, 0, sizeof(struct sNode*));
right_value654 = (void*)0;
    skip_spaces_and_lf(info);
    refference_341=(_Bool)0;
    {
        p_342=info->p;
        sline_343=info->sline;
        if(_if_conditional449=*info->p==38,        _if_conditional449) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional450=xisalpha(*info->p)||*info->p==95,            _if_conditional450) {
                refference_341=(_Bool)1;
            }
            else {
                if(_if_conditional451=*info->p==40,                _if_conditional451) {
                    while(_while_condtional32=*info->p==40,                    _while_condtional32) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional452=xisalpha(*info->p)||*info->p==95,                    _if_conditional452) {
                        refference_341=(_Bool)1;
                    }
                }
            }
        }
        info->p=p_342;
        info->sline=sline_343;
    }
    parse_sharp_v5(info);
    if(_if_conditional453=*info->p==123,    _if_conditional453) {
        __result336__ = __result_obj__ = ((struct sNode*)(right_value439=parse_normal_block(info)));
        if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result336__;
    }
    else {
        if(_if_conditional454=*info->p==33,        _if_conditional454) {
            info->p++;
            skip_spaces_and_lf(info);
            node_344=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=expression_node_v99(info))));
            if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2084, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sLogicalDenial*)(right_value442=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value441=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05function.c", 2084, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(node_344),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLogicalDenial_finalize;
            _inf_value4->clone=(void*)sLogicalDenial_clone;
            _inf_value4->compile=(void*)sLogicalDenial_compile;
            _inf_value4->sline=(void*)sLogicalDenial_sline;
            _inf_value4->sname=(void*)sLogicalDenial_sname;
            _inf_value4->terminated=(void*)sLogicalDenial_terminated;
            _inf_value4->kind=(void*)sLogicalDenial_kind;
            __result339__ = __result_obj__ = ((struct sNode*)(right_value446=_inf_value4));
            if(node_344) { node_344 = come_decrement_ref_count2(node_344, ((struct sNode*)node_344)->finalize, ((struct sNode*)node_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sLogicalDenial_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLogicalDenial_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value446) { right_value446 = come_decrement_ref_count2(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result339__;
            if(node_344) { node_344 = come_decrement_ref_count2(node_344, ((struct sNode*)node_344)->finalize, ((struct sNode*)node_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional461=*info->p==45&&*(info->p+1)==45,            _if_conditional461) {
                info->p+=2;
                skip_spaces_and_lf(info);
                node_346=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=expression_node_v99(info))));
                if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2092, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sMinusMinusNode2*)(right_value449=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value448=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05function.c", 2092, "sMinusMinusNode2")))),(struct sNode*)come_increment_ref_count(node_346),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sMinusMinusNode2_finalize;
                _inf_value5->clone=(void*)sMinusMinusNode2_clone;
                _inf_value5->compile=(void*)sMinusMinusNode2_compile;
                _inf_value5->sline=(void*)sMinusMinusNode2_sline;
                _inf_value5->sname=(void*)sMinusMinusNode2_sname;
                _inf_value5->terminated=(void*)sMinusMinusNode2_terminated;
                _inf_value5->kind=(void*)sMinusMinusNode2_kind;
                __result342__ = __result_obj__ = ((struct sNode*)(right_value453=_inf_value5));
                if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sMinusMinusNode2_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sMinusMinusNode2_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value453) { right_value453 = come_decrement_ref_count2(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result342__;
                if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional468=*info->p==45,                _if_conditional468) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_348=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=expression_node_v99(info))));
                    if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2100, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sMinusNode2*)(right_value456=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value455=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05function.c", 2100, "sMinusNode2")))),(struct sNode*)come_increment_ref_count(node_348),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sMinusNode2_finalize;
                    _inf_value6->clone=(void*)sMinusNode2_clone;
                    _inf_value6->compile=(void*)sMinusNode2_compile;
                    _inf_value6->sline=(void*)sMinusNode2_sline;
                    _inf_value6->sname=(void*)sMinusNode2_sname;
                    _inf_value6->terminated=(void*)sMinusNode2_terminated;
                    _inf_value6->kind=(void*)sMinusNode2_kind;
                    __result345__ = __result_obj__ = ((struct sNode*)(right_value460=_inf_value6));
                    if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sMinusNode2_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sMinusNode2_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value460) { right_value460 = come_decrement_ref_count2(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result345__;
                    if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional475=*info->p==43&&*(info->p+1)==43,                    _if_conditional475) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        node_350=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value461=expression_node_v99(info))));
                        if(right_value461) { right_value461 = come_decrement_ref_count2(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2108, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sPlusPlusNode2*)(right_value463=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value462=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05function.c", 2108, "sPlusPlusNode2")))),(struct sNode*)come_increment_ref_count(node_350),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sPlusPlusNode2_finalize;
                        _inf_value7->clone=(void*)sPlusPlusNode2_clone;
                        _inf_value7->compile=(void*)sPlusPlusNode2_compile;
                        _inf_value7->sline=(void*)sPlusPlusNode2_sline;
                        _inf_value7->sname=(void*)sPlusPlusNode2_sname;
                        _inf_value7->terminated=(void*)sPlusPlusNode2_terminated;
                        _inf_value7->kind=(void*)sPlusPlusNode2_kind;
                        __result348__ = __result_obj__ = ((struct sNode*)(right_value467=_inf_value7));
                        if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sPlusPlusNode2_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sPlusPlusNode2_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value467) { right_value467 = come_decrement_ref_count2(right_value467, ((struct sNode*)right_value467)->finalize, ((struct sNode*)right_value467)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result348__;
                        if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional482=*info->p==126,                        _if_conditional482) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            node_352=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value468=expression_node_v99(info))));
                            if(right_value468) { right_value468 = come_decrement_ref_count2(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2116, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sComplement*)(right_value470=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value469=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05function.c", 2116, "sComplement")))),(struct sNode*)come_increment_ref_count(node_352),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sComplement_finalize;
                            _inf_value8->clone=(void*)sComplement_clone;
                            _inf_value8->compile=(void*)sComplement_compile;
                            _inf_value8->sline=(void*)sComplement_sline;
                            _inf_value8->sname=(void*)sComplement_sname;
                            _inf_value8->terminated=(void*)sComplement_terminated;
                            _inf_value8->kind=(void*)sComplement_kind;
                            __result351__ = __result_obj__ = ((struct sNode*)(right_value474=_inf_value8));
                            if(node_352) { node_352 = come_decrement_ref_count2(node_352, ((struct sNode*)node_352)->finalize, ((struct sNode*)node_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sComplement_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sComplement_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value474) { right_value474 = come_decrement_ref_count2(right_value474, ((struct sNode*)right_value474)->finalize, ((struct sNode*)right_value474)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result351__;
                            if(node_352) { node_352 = come_decrement_ref_count2(node_352, ((struct sNode*)node_352)->finalize, ((struct sNode*)node_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional489=*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88),                            _if_conditional489) {
                                info->p+=2;
                                node_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value475=get_hex_number((_Bool)0,info))));
                                if(right_value475) { right_value475 = come_decrement_ref_count2(right_value475, ((struct sNode*)right_value475)->finalize, ((struct sNode*)right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __dec_obj186=node_354;
                                node_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_354),info))));
                                if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value476) { right_value476 = come_decrement_ref_count2(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __result352__ = __result_obj__ = node_354;
                                if(node_354) { node_354 = come_decrement_ref_count2(node_354, ((struct sNode*)node_354)->finalize, ((struct sNode*)node_354)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result352__;
                                if(node_354) { node_354 = come_decrement_ref_count2(node_354, ((struct sNode*)node_354)->finalize, ((struct sNode*)node_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional490=*info->p==48&&xisdigit(*(info->p+1)),                                _if_conditional490) {
                                    info->p++;
                                    node_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value477=get_oct_number(info))));
                                    if(right_value477) { right_value477 = come_decrement_ref_count2(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __dec_obj187=node_355;
                                    node_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value478=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_355),info))));
                                    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __result353__ = __result_obj__ = node_355;
                                    if(node_355) { node_355 = come_decrement_ref_count2(node_355, ((struct sNode*)node_355)->finalize, ((struct sNode*)node_355)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    return __result353__;
                                    if(node_355) { node_355 = come_decrement_ref_count2(node_355, ((struct sNode*)node_355)->finalize, ((struct sNode*)node_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional491=xisdigit(*info->p),                                    _if_conditional491) {
                                        node_356=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=get_number((_Bool)0,info))));
                                        if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        __dec_obj188=node_356;
                                        node_356=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value480=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_356),info))));
                                        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value480) { right_value480 = come_decrement_ref_count2(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        __result354__ = __result_obj__ = node_356;
                                        if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        return __result354__;
                                        if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional492=*info->p==45&&xisdigit(*(info->p+1)),                                        _if_conditional492) {
                                            info->p++;
                                            node_357=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value481=get_number((_Bool)1,info))));
                                            if(right_value481) { right_value481 = come_decrement_ref_count2(right_value481, ((struct sNode*)right_value481)->finalize, ((struct sNode*)right_value481)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            __dec_obj189=node_357;
                                            node_357=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value482=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_357),info))));
                                            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value482) { right_value482 = come_decrement_ref_count2(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            __result355__ = __result_obj__ = node_357;
                                            if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            return __result355__;
                                            if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional493=parsecmp("return",info),                                            _if_conditional493) {
                                                info->p+=strlen("return");
                                                skip_spaces_and_lf(info);
                                                if(_if_conditional494=*info->p==59,                                                _if_conditional494) {
                                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2160, "struct sNode");
                                                    _inf_obj_value9=come_increment_ref_count(((struct sReturnNode*)(right_value485=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value483=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05function.c", 2160, "sReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value484=__builtin_string("0")))),info))));
                                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                                    _inf_value9->finalize=(void*)sReturnNode_finalize;
                                                    _inf_value9->clone=(void*)sReturnNode_clone;
                                                    _inf_value9->compile=(void*)sReturnNode_compile;
                                                    _inf_value9->sline=(void*)sReturnNode_sline;
                                                    _inf_value9->sname=(void*)sReturnNode_sname;
                                                    _inf_value9->terminated=(void*)sReturnNode_terminated;
                                                    _inf_value9->kind=(void*)sReturnNode_kind;
                                                    __result358__ = __result_obj__ = ((struct sNode*)(right_value490=_inf_value9));
                                                    come_call_finalizer2(sReturnNode_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sReturnNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result358__;
                                                }
                                                else {
                                                    head_359=info->p;
                                                    value_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value491=expression_v13(info))));
                                                    if(right_value491) { right_value491 = come_decrement_ref_count2(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    tail_361=info->p;
                                                    __dec_obj193=value_360;
                                                    value_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value492=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_360),info))));
                                                    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value492) { right_value492 = come_decrement_ref_count2(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    __dec_obj194=value_360;
                                                    value_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value493=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_360),info))));
                                                    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value493) { right_value493 = come_decrement_ref_count2(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    char buf_362[tail_361-head_359+1];
                                                    memset(&buf_362, 0, sizeof(char)                                                    *(tail_361-head_359+1)                                                    );
                                                    memcpy(buf_362,head_359,tail_361-head_359);
                                                    buf_362[tail_361-head_359]=0;
                                                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2173, "struct sNode");
                                                    _inf_obj_value10=come_increment_ref_count(((struct sReturnNode*)(right_value496=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value494=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05function.c", 2173, "sReturnNode")))),(struct sNode*)come_increment_ref_count(value_360),(char*)come_increment_ref_count(((char*)(right_value495=__builtin_string(buf_362)))),info))));
                                                    _inf_value10->_protocol_obj=_inf_obj_value10;
                                                    _inf_value10->finalize=(void*)sReturnNode_finalize;
                                                    _inf_value10->clone=(void*)sReturnNode_clone;
                                                    _inf_value10->compile=(void*)sReturnNode_compile;
                                                    _inf_value10->sline=(void*)sReturnNode_sline;
                                                    _inf_value10->sname=(void*)sReturnNode_sname;
                                                    _inf_value10->terminated=(void*)sReturnNode_terminated;
                                                    _inf_value10->kind=(void*)sReturnNode_kind;
                                                    __result361__ = __result_obj__ = ((struct sNode*)(right_value501=_inf_value10));
                                                    if(value_360) { value_360 = come_decrement_ref_count2(value_360, ((struct sNode*)value_360)->finalize, ((struct sNode*)value_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer2(sReturnNode_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    right_value495 = come_decrement_ref_count2(right_value495, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sReturnNode_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value501) { right_value501 = come_decrement_ref_count2(right_value501, ((struct sNode*)right_value501)->finalize, ((struct sNode*)right_value501)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result361__;
                                                    if(value_360) { value_360 = come_decrement_ref_count2(value_360, ((struct sNode*)value_360)->finalize, ((struct sNode*)value_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                if(_if_conditional511=parsecmp("return!",info),                                                _if_conditional511) {
                                                    info->p+=strlen("return!");
                                                    skip_spaces_and_lf(info);
                                                    if(_if_conditional512=*info->p==59,                                                    _if_conditional512) {
                                                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2181, "struct sNode");
                                                        _inf_obj_value11=come_increment_ref_count(((struct sParentReturnNode*)(right_value504=sParentReturnNode_initialize((struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value502=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "05function.c", 2181, "sParentReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value503=__builtin_string("0")))),info))));
                                                        _inf_value11->_protocol_obj=_inf_obj_value11;
                                                        _inf_value11->finalize=(void*)sParentReturnNode_finalize;
                                                        _inf_value11->clone=(void*)sParentReturnNode_clone;
                                                        _inf_value11->compile=(void*)sParentReturnNode_compile;
                                                        _inf_value11->sline=(void*)sParentReturnNode_sline;
                                                        _inf_value11->sname=(void*)sParentReturnNode_sname;
                                                        _inf_value11->terminated=(void*)sParentReturnNode_terminated;
                                                        _inf_value11->kind=(void*)sParentReturnNode_kind;
                                                        __result364__ = __result_obj__ = ((struct sNode*)(right_value509=_inf_value11));
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        right_value503 = come_decrement_ref_count2(right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value509) { right_value509 = come_decrement_ref_count2(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result364__;
                                                    }
                                                    else {
                                                        head_365=info->p;
                                                        value_366=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value510=expression_v13(info))));
                                                        if(right_value510) { right_value510 = come_decrement_ref_count2(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        tail_367=info->p;
                                                        __dec_obj201=value_366;
                                                        value_366=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_366),info))));
                                                        if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        __dec_obj202=value_366;
                                                        value_366=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value512=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_366),info))));
                                                        if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value512) { right_value512 = come_decrement_ref_count2(right_value512, ((struct sNode*)right_value512)->finalize, ((struct sNode*)right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        char buf_368[tail_367-head_365+1];
                                                        memset(&buf_368, 0, sizeof(char)                                                        *(tail_367-head_365+1)                                                        );
                                                        memcpy(buf_368,head_365,tail_367-head_365);
                                                        buf_368[tail_367-head_365]=0;
                                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2194, "struct sNode");
                                                        _inf_obj_value12=come_increment_ref_count(((struct sParentReturnNode*)(right_value515=sParentReturnNode_initialize((struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value513=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "05function.c", 2194, "sParentReturnNode")))),(struct sNode*)come_increment_ref_count(value_366),(char*)come_increment_ref_count(((char*)(right_value514=__builtin_string(buf_368)))),info))));
                                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                                        _inf_value12->finalize=(void*)sParentReturnNode_finalize;
                                                        _inf_value12->clone=(void*)sParentReturnNode_clone;
                                                        _inf_value12->compile=(void*)sParentReturnNode_compile;
                                                        _inf_value12->sline=(void*)sParentReturnNode_sline;
                                                        _inf_value12->sname=(void*)sParentReturnNode_sname;
                                                        _inf_value12->terminated=(void*)sParentReturnNode_terminated;
                                                        _inf_value12->kind=(void*)sParentReturnNode_kind;
                                                        __result367__ = __result_obj__ = ((struct sNode*)(right_value520=_inf_value12));
                                                        if(value_366) { value_366 = come_decrement_ref_count2(value_366, ((struct sNode*)value_366)->finalize, ((struct sNode*)value_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        right_value514 = come_decrement_ref_count2(right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value520) { right_value520 = come_decrement_ref_count2(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result367__;
                                                        if(value_366) { value_366 = come_decrement_ref_count2(value_366, ((struct sNode*)value_366)->finalize, ((struct sNode*)value_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional529=parsecmp("break!",info),                                                    _if_conditional529) {
                                                        info->p+=strlen("break!");
                                                        skip_spaces_and_lf(info);
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2201, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sParentBreakNode*)(right_value522=sParentBreakNode_initialize((struct sParentBreakNode*)come_increment_ref_count(((struct sParentBreakNode*)(right_value521=(struct sParentBreakNode*)come_calloc(1, sizeof(struct sParentBreakNode)*(1), "05function.c", 2201, "sParentBreakNode")))),info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sParentBreakNode_finalize;
                                                        _inf_value13->clone=(void*)sParentBreakNode_clone;
                                                        _inf_value13->compile=(void*)sParentBreakNode_compile;
                                                        _inf_value13->sline=(void*)sParentBreakNode_sline;
                                                        _inf_value13->sname=(void*)sParentBreakNode_sname;
                                                        _inf_value13->terminated=(void*)sParentBreakNode_terminated;
                                                        _inf_value13->kind=(void*)sParentBreakNode_kind;
                                                        __result370__ = __result_obj__ = ((struct sNode*)(right_value525=_inf_value13));
                                                        come_call_finalizer2(sParentBreakNode_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentBreakNode_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value525) { right_value525 = come_decrement_ref_count2(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result370__;
                                                    }
                                                    else {
                                                        if(_if_conditional534=parsecmp("continue!",info),                                                        _if_conditional534) {
                                                            info->p+=strlen("continue!");
                                                            skip_spaces_and_lf(info);
                                                            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2207, "struct sNode");
                                                            _inf_obj_value14=come_increment_ref_count(((struct sParentContinueNode*)(right_value527=sParentContinueNode_initialize((struct sParentContinueNode*)come_increment_ref_count(((struct sParentContinueNode*)(right_value526=(struct sParentContinueNode*)come_calloc(1, sizeof(struct sParentContinueNode)*(1), "05function.c", 2207, "sParentContinueNode")))),info))));
                                                            _inf_value14->_protocol_obj=_inf_obj_value14;
                                                            _inf_value14->finalize=(void*)sParentContinueNode_finalize;
                                                            _inf_value14->clone=(void*)sParentContinueNode_clone;
                                                            _inf_value14->compile=(void*)sParentContinueNode_compile;
                                                            _inf_value14->sline=(void*)sParentContinueNode_sline;
                                                            _inf_value14->sname=(void*)sParentContinueNode_sname;
                                                            _inf_value14->terminated=(void*)sParentContinueNode_terminated;
                                                            _inf_value14->kind=(void*)sParentContinueNode_kind;
                                                            __result373__ = __result_obj__ = ((struct sNode*)(right_value530=_inf_value14));
                                                            come_call_finalizer2(sParentContinueNode_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(sParentContinueNode_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value530) { right_value530 = come_decrement_ref_count2(right_value530, ((struct sNode*)right_value530)->finalize, ((struct sNode*)right_value530)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result373__;
                                                        }
                                                        else {
                                                            if(_if_conditional539=(*info->p==92&&*(info->p+1)==42)||*info->p==42,                                                            _if_conditional539) {
                                                                if(_if_conditional540=*info->p==92,                                                                _if_conditional540) {
                                                                    info->p+=2;
                                                                    skip_spaces_and_lf(info);
                                                                    quote_372=(_Bool)1;
                                                                }
                                                                else {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    quote_372=(_Bool)0;
                                                                }
                                                                no_assign_373=info->no_assign;
                                                                info->no_assign=(_Bool)1;
                                                                value_374=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value531=expression_node_v99(info))));
                                                                if(right_value531) { right_value531 = come_decrement_ref_count2(right_value531, ((struct sNode*)right_value531)->finalize, ((struct sNode*)right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                info->no_assign=no_assign_373;
                                                                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2228, "struct sNode");
                                                                _inf_obj_value15=come_increment_ref_count(((struct sDerefferenceNode*)(right_value533=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value532=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05function.c", 2227, "sDerefferenceNode")))),(struct sNode*)come_increment_ref_count(value_374),quote_372,info))));
                                                                _inf_value15->_protocol_obj=_inf_obj_value15;
                                                                _inf_value15->finalize=(void*)sDerefferenceNode_finalize;
                                                                _inf_value15->clone=(void*)sDerefferenceNode_clone;
                                                                _inf_value15->compile=(void*)sDerefferenceNode_compile;
                                                                _inf_value15->sline=(void*)sDerefferenceNode_sline;
                                                                _inf_value15->sname=(void*)sDerefferenceNode_sname;
                                                                _inf_value15->terminated=(void*)sDerefferenceNode_terminated;
                                                                _inf_value15->kind=(void*)sDerefferenceNode_kind;
                                                                __result376__ = __result_obj__ = ((struct sNode*)(right_value537=_inf_value15));
                                                                if(value_374) { value_374 = come_decrement_ref_count2(value_374, ((struct sNode*)value_374)->finalize, ((struct sNode*)value_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                come_call_finalizer2(sDerefferenceNode_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(sDerefferenceNode_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(right_value537) { right_value537 = come_decrement_ref_count2(right_value537, ((struct sNode*)right_value537)->finalize, ((struct sNode*)right_value537)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result376__;
                                                                if(value_374) { value_374 = come_decrement_ref_count2(value_374, ((struct sNode*)value_374)->finalize, ((struct sNode*)value_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                if(_if_conditional548=*info->p==38&&refference_341,                                                                _if_conditional548) {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    value_376=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value538=expression_node_v99(info))));
                                                                    if(right_value538) { right_value538 = come_decrement_ref_count2(right_value538, ((struct sNode*)right_value538)->finalize, ((struct sNode*)right_value538)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2235, "struct sNode");
                                                                    _inf_obj_value16=come_increment_ref_count(((struct sRefferenceNode*)(right_value540=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value539=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05function.c", 2235, "sRefferenceNode")))),(struct sNode*)come_increment_ref_count(value_376),info))));
                                                                    _inf_value16->_protocol_obj=_inf_obj_value16;
                                                                    _inf_value16->finalize=(void*)sRefferenceNode_finalize;
                                                                    _inf_value16->clone=(void*)sRefferenceNode_clone;
                                                                    _inf_value16->compile=(void*)sRefferenceNode_compile;
                                                                    _inf_value16->sline=(void*)sRefferenceNode_sline;
                                                                    _inf_value16->sname=(void*)sRefferenceNode_sname;
                                                                    _inf_value16->terminated=(void*)sRefferenceNode_terminated;
                                                                    _inf_value16->kind=(void*)sRefferenceNode_kind;
                                                                    __result379__ = __result_obj__ = ((struct sNode*)(right_value544=_inf_value16));
                                                                    if(value_376) { value_376 = come_decrement_ref_count2(value_376, ((struct sNode*)value_376)->finalize, ((struct sNode*)value_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    come_call_finalizer2(sRefferenceNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(sRefferenceNode_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(right_value544) { right_value544 = come_decrement_ref_count2(right_value544, ((struct sNode*)right_value544)->finalize, ((struct sNode*)right_value544)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    return __result379__;
                                                                    if(value_376) { value_376 = come_decrement_ref_count2(value_376, ((struct sNode*)value_376)->finalize, ((struct sNode*)value_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                                else {
                                                                    if(_if_conditional555=*info->p==33,                                                                    _if_conditional555) {
                                                                        info->p++;
                                                                        skip_spaces_and_lf(info);
                                                                        value_378=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value545=expression_node_v99(info))));
                                                                        if(right_value545) { right_value545 = come_decrement_ref_count2(right_value545, ((struct sNode*)right_value545)->finalize, ((struct sNode*)right_value545)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2243, "struct sNode");
                                                                        _inf_obj_value17=come_increment_ref_count(((struct sReverseNode*)(right_value547=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value546=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05function.c", 2243, "sReverseNode")))),(struct sNode*)come_increment_ref_count(value_378),info))));
                                                                        _inf_value17->_protocol_obj=_inf_obj_value17;
                                                                        _inf_value17->finalize=(void*)sReverseNode_finalize;
                                                                        _inf_value17->clone=(void*)sReverseNode_clone;
                                                                        _inf_value17->compile=(void*)sReverseNode_compile;
                                                                        _inf_value17->sline=(void*)sReverseNode_sline;
                                                                        _inf_value17->sname=(void*)sReverseNode_sname;
                                                                        _inf_value17->terminated=(void*)sReverseNode_terminated;
                                                                        _inf_value17->kind=(void*)sReverseNode_kind;
                                                                        __result382__ = __result_obj__ = ((struct sNode*)(right_value551=_inf_value17));
                                                                        if(value_378) { value_378 = come_decrement_ref_count2(value_378, ((struct sNode*)value_378)->finalize, ((struct sNode*)value_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        come_call_finalizer2(sReverseNode_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sReverseNode_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value551) { right_value551 = come_decrement_ref_count2(right_value551, ((struct sNode*)right_value551)->finalize, ((struct sNode*)right_value551)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result382__;
                                                                        if(value_378) { value_378 = come_decrement_ref_count2(value_378, ((struct sNode*)value_378)->finalize, ((struct sNode*)value_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                    else {
                                                                        if(_if_conditional562=(xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34),                                                                        _if_conditional562) {
                                                                            head_380=info->p;
                                                                            head_sline_381=info->sline;
                                                                            {
                                                                                p_383=info->p;
                                                                                sline_384=info->sline;
                                                                                if(_if_conditional563=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional563) {
                                                                                    __dec_obj214=buf_382;
                                                                                    buf_382=(char*)come_increment_ref_count(((char*)(right_value552=parse_word(info))));
                                                                                    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value552 = come_decrement_ref_count2(right_value552, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    __dec_obj215=buf_382;
                                                                                    buf_382=(char*)come_increment_ref_count(((char*)(right_value553=__builtin_string(""))));
                                                                                    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                info->p=p_383;
                                                                                info->sline=sline_384;
                                                                            }
                                                                            is_type_name__385=is_type_name(buf_382,info);
                                                                            define_function_pointer_flag_386=(_Bool)0;
                                                                            if(_if_conditional564=string_operator_not_equals(buf_382,"if")&&string_operator_not_equals(buf_382,"while")&&string_operator_not_equals(buf_382,"for")&&string_operator_not_equals(buf_382,"switch")&&string_operator_not_equals(buf_382,"return")&&string_operator_not_equals(buf_382,"sizeof")&&string_operator_not_equals(buf_382,"isheap")&&string_operator_not_equals(buf_382,"__typeof__")&&string_operator_not_equals(buf_382,"dynamic_typeof")&&string_operator_not_equals(buf_382,"typeof")&&string_operator_not_equals(buf_382,"gc_inc")&&string_operator_not_equals(buf_382,"gc_dec")&&string_operator_not_equals(buf_382,"case")&&string_operator_not_equals(buf_382,"_Alignof")&&string_operator_not_equals(buf_382,"_Alignas")&&string_operator_not_equals(buf_382,"__alignof__")&&*info->p==40&&*(info->p+1)!=42,                                                                            _if_conditional564) {
                                                                                backtrace_parse_type(info);
                                                                                if(_if_conditional565=*info->p==40,                                                                                _if_conditional565) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                    if(_if_conditional566=*info->p==42,                                                                                    _if_conditional566) {
                                                                                        info->p++;
                                                                                        skip_spaces_and_lf(info);
                                                                                        define_function_pointer_flag_386=(_Bool)1;
                                                                                    }
                                                                                }
                                                                                info->p=head_380;
                                                                                info->sline=head_sline_381;
                                                                            }
                                                                            lambda_flag_387=(_Bool)0;
                                                                            if(_if_conditional567=string_operator_not_equals(buf_382,"if")&&string_operator_not_equals(buf_382,"while")&&string_operator_not_equals(buf_382,"for")&&string_operator_not_equals(buf_382,"switch")&&string_operator_not_equals(buf_382,"return")&&string_operator_not_equals(buf_382,"sizeof")&&string_operator_not_equals(buf_382,"_Alignof")&&string_operator_not_equals(buf_382,"__alignof__")&&string_operator_not_equals(buf_382,"_Alignas")&&string_operator_not_equals(buf_382,"isheap")&&string_operator_not_equals(buf_382,"__typeof__")&&string_operator_not_equals(buf_382,"dynamic_typeof")&&string_operator_not_equals(buf_382,"typeof")&&string_operator_not_equals(buf_382,"gc_inc")&&string_operator_not_equals(buf_382,"gc_dec")&&string_operator_not_equals(buf_382,"case")&&is_type_name__385,                                                                            _if_conditional567) {
                                                                                info->p=head_380;
                                                                                info->sline=head_sline_381;
                                                                                backtrace_parse_type(info);
                                                                                if(_if_conditional568=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional568) {
                                                                                    word2_388=(char*)come_increment_ref_count(((char*)(right_value554=parse_word(info))));
                                                                                    right_value554 = come_decrement_ref_count2(right_value554, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional569=string_operator_equals(word2_388,"lambda"),                                                                                    _if_conditional569) {
                                                                                        lambda_flag_387=(_Bool)1;
                                                                                    }
                                                                                    word2_388 = come_decrement_ref_count2(word2_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                info->p=head_380;
                                                                                info->sline=head_sline_381;
                                                                            }
                                                                            fun_name_with_type_name_389=(_Bool)0;
                                                                            if(_if_conditional570=string_operator_not_equals(buf_382,"if")&&string_operator_not_equals(buf_382,"while")&&string_operator_not_equals(buf_382,"for")&&string_operator_not_equals(buf_382,"switch")&&string_operator_not_equals(buf_382,"return")&&string_operator_not_equals(buf_382,"sizeof")&&string_operator_not_equals(buf_382,"_Alignof")&&string_operator_not_equals(buf_382,"__alignof__")&&string_operator_not_equals(buf_382,"_Alignas")&&string_operator_not_equals(buf_382,"isheap")&&string_operator_not_equals(buf_382,"dynamic_typeof")&&string_operator_not_equals(buf_382,"__typeof__")&&string_operator_not_equals(buf_382,"typeof")&&string_operator_not_equals(buf_382,"gc_inc")&&string_operator_not_equals(buf_382,"gc_dec")&&string_operator_not_equals(buf_382,"case"),                                                                            _if_conditional570) {
                                                                                info->p=head_380;
                                                                                info->sline=head_sline_381;
                                                                                info->no_output_err=(_Bool)1;
                                                                                if(_if_conditional571=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional571) {
                                                                                    word2_390=(char*)come_increment_ref_count(((char*)(right_value555=parse_word(info))));
                                                                                    right_value555 = come_decrement_ref_count2(right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    word2_390 = come_decrement_ref_count2(word2_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                while(_while_condtional33=*info->p==42,                                                                                _while_condtional33) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                }
                                                                                if(_if_conditional572=*info->p==58&&*(info->p+1)==58,                                                                                _if_conditional572) {
                                                                                    info->p+=2;
                                                                                    skip_spaces_and_lf(info);
                                                                                    if(_if_conditional573=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional573) {
                                                                                        fun_name_with_type_name_389=(_Bool)1;
                                                                                    }
                                                                                }
                                                                                info->no_output_err=(_Bool)0;
                                                                                info->p=head_380;
                                                                                info->sline=head_sline_381;
                                                                            }
                                                                            __dec_obj216=buf_382;
                                                                            buf_382=(char*)come_increment_ref_count(((char*)(right_value556=parse_word(info))));
                                                                            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value556 = come_decrement_ref_count2(right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(lambda_flag_387) {
                                                                                info->p=head_380;
                                                                                info->sline=head_sline_381;
                                                                                __result383__ = __result_obj__ = ((struct sNode*)(right_value557=parse_function(info)));
                                                                                buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                if(right_value557) { right_value557 = come_decrement_ref_count2(right_value557, ((struct sNode*)right_value557)->finalize, ((struct sNode*)right_value557)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result383__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional575=(string_operator_equals(buf_382,"string")||string_operator_equals(buf_382,"wstring"))&&*info->p==40,                                                                                _if_conditional575) {
                                                                                    node_391=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value558=parse_function_call(buf_382,info))));
                                                                                    if(right_value558) { right_value558 = come_decrement_ref_count2(right_value558, ((struct sNode*)right_value558)->finalize, ((struct sNode*)right_value558)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj217=node_391;
                                                                                    node_391=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value559=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_391),info))));
                                                                                    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value559) { right_value559 = come_decrement_ref_count2(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj218=node_391;
                                                                                    node_391=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value560=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_391),info))));
                                                                                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value560) { right_value560 = come_decrement_ref_count2(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __result384__ = __result_obj__ = node_391;
                                                                                    if(node_391) { node_391 = come_decrement_ref_count2(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                    buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    return __result384__;
                                                                                    if(node_391) { node_391 = come_decrement_ref_count2(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional576=string_operator_equals(buf_382,"__func__"),                                                                                    _if_conditional576) {
                                                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2358, "struct sNode");
                                                                                        _inf_obj_value18=come_increment_ref_count(((struct sFuncNode*)(right_value562=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value561=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05function.c", 2358, "sFuncNode")))),info))));
                                                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                                                        _inf_value18->finalize=(void*)sFuncNode_finalize;
                                                                                        _inf_value18->clone=(void*)sFuncNode_clone;
                                                                                        _inf_value18->compile=(void*)sFuncNode_compile;
                                                                                        _inf_value18->sline=(void*)sFuncNode_sline;
                                                                                        _inf_value18->sname=(void*)sFuncNode_sname;
                                                                                        _inf_value18->terminated=(void*)sFuncNode_terminated;
                                                                                        _inf_value18->kind=(void*)sFuncNode_kind;
                                                                                        __result387__ = __result_obj__ = ((struct sNode*)(right_value567=_inf_value18));
                                                                                        buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sFuncNode_finalize,right_value561, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sFuncNode_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value567) { right_value567 = come_decrement_ref_count2(right_value567, ((struct sNode*)right_value567)->finalize, ((struct sNode*)right_value567)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result387__;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional585=string_operator_equals(buf_382,"__line__"),                                                                                        _if_conditional585) {
                                                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2361, "struct sNode");
                                                                                            _inf_obj_value19=come_increment_ref_count(((struct sLineNode*)(right_value569=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value568=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05function.c", 2361, "sLineNode")))),info))));
                                                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                                                            _inf_value19->finalize=(void*)sLineNode_finalize;
                                                                                            _inf_value19->clone=(void*)sLineNode_clone;
                                                                                            _inf_value19->compile=(void*)sLineNode_compile;
                                                                                            _inf_value19->sline=(void*)sLineNode_sline;
                                                                                            _inf_value19->sname=(void*)sLineNode_sname;
                                                                                            _inf_value19->terminated=(void*)sLineNode_terminated;
                                                                                            _inf_value19->kind=(void*)sLineNode_kind;
                                                                                            __result390__ = __result_obj__ = ((struct sNode*)(right_value574=_inf_value19));
                                                                                            buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sLineNode_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sLineNode_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value574) { right_value574 = come_decrement_ref_count2(right_value574, ((struct sNode*)right_value574)->finalize, ((struct sNode*)right_value574)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result390__;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional594=string_operator_equals(buf_382,"__sname__"),                                                                                            _if_conditional594) {
                                                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2364, "struct sNode");
                                                                                                _inf_obj_value20=come_increment_ref_count(((struct sSNameNode*)(right_value576=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value575=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05function.c", 2364, "sSNameNode")))),info))));
                                                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                                                _inf_value20->finalize=(void*)sSNameNode_finalize;
                                                                                                _inf_value20->clone=(void*)sSNameNode_clone;
                                                                                                _inf_value20->compile=(void*)sSNameNode_compile;
                                                                                                _inf_value20->sline=(void*)sSNameNode_sline;
                                                                                                _inf_value20->sname=(void*)sSNameNode_sname;
                                                                                                _inf_value20->terminated=(void*)sSNameNode_terminated;
                                                                                                _inf_value20->kind=(void*)sSNameNode_kind;
                                                                                                __result393__ = __result_obj__ = ((struct sNode*)(right_value581=_inf_value20));
                                                                                                buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sSNameNode_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                come_call_finalizer2(sSNameNode_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(right_value581) { right_value581 = come_decrement_ref_count2(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                return __result393__;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional603=string_operator_equals(buf_382,"__caller_func__"),                                                                                                _if_conditional603) {
                                                                                                    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2367, "struct sNode");
                                                                                                    _inf_obj_value21=come_increment_ref_count(((struct sCallerFuncNode*)(right_value583=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value582=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05function.c", 2367, "sCallerFuncNode")))),info))));
                                                                                                    _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                                                    _inf_value21->finalize=(void*)sCallerFuncNode_finalize;
                                                                                                    _inf_value21->clone=(void*)sCallerFuncNode_clone;
                                                                                                    _inf_value21->compile=(void*)sCallerFuncNode_compile;
                                                                                                    _inf_value21->sline=(void*)sCallerFuncNode_sline;
                                                                                                    _inf_value21->sname=(void*)sCallerFuncNode_sname;
                                                                                                    _inf_value21->terminated=(void*)sCallerFuncNode_terminated;
                                                                                                    _inf_value21->kind=(void*)sCallerFuncNode_kind;
                                                                                                    __result396__ = __result_obj__ = ((struct sNode*)(right_value588=_inf_value21));
                                                                                                    buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer2(sCallerFuncNode_finalize,right_value582, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    come_call_finalizer2(sCallerFuncNode_finalize,right_value583, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(right_value588) { right_value588 = come_decrement_ref_count2(right_value588, ((struct sNode*)right_value588)->finalize, ((struct sNode*)right_value588)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    return __result396__;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional612=string_operator_equals(buf_382,"__caller_line__"),                                                                                                    _if_conditional612) {
                                                                                                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2370, "struct sNode");
                                                                                                        _inf_obj_value22=come_increment_ref_count(((struct sCallerLineNode*)(right_value590=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value589=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05function.c", 2370, "sCallerLineNode")))),info))));
                                                                                                        _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                                        _inf_value22->finalize=(void*)sCallerLineNode_finalize;
                                                                                                        _inf_value22->clone=(void*)sCallerLineNode_clone;
                                                                                                        _inf_value22->compile=(void*)sCallerLineNode_compile;
                                                                                                        _inf_value22->sline=(void*)sCallerLineNode_sline;
                                                                                                        _inf_value22->sname=(void*)sCallerLineNode_sname;
                                                                                                        _inf_value22->terminated=(void*)sCallerLineNode_terminated;
                                                                                                        _inf_value22->kind=(void*)sCallerLineNode_kind;
                                                                                                        __result399__ = __result_obj__ = ((struct sNode*)(right_value595=_inf_value22));
                                                                                                        buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        come_call_finalizer2(sCallerLineNode_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        come_call_finalizer2(sCallerLineNode_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(right_value595) { right_value595 = come_decrement_ref_count2(right_value595, ((struct sNode*)right_value595)->finalize, ((struct sNode*)right_value595)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        return __result399__;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(_if_conditional621=string_operator_equals(buf_382,"__caller_sname__"),                                                                                                        _if_conditional621) {
                                                                                                            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2373, "struct sNode");
                                                                                                            _inf_obj_value23=come_increment_ref_count(((struct sCallerSNameNode*)(right_value597=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value596=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05function.c", 2373, "sCallerSNameNode")))),info))));
                                                                                                            _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                                            _inf_value23->finalize=(void*)sCallerSNameNode_finalize;
                                                                                                            _inf_value23->clone=(void*)sCallerSNameNode_clone;
                                                                                                            _inf_value23->compile=(void*)sCallerSNameNode_compile;
                                                                                                            _inf_value23->sline=(void*)sCallerSNameNode_sline;
                                                                                                            _inf_value23->sname=(void*)sCallerSNameNode_sname;
                                                                                                            _inf_value23->terminated=(void*)sCallerSNameNode_terminated;
                                                                                                            _inf_value23->kind=(void*)sCallerSNameNode_kind;
                                                                                                            __result402__ = __result_obj__ = ((struct sNode*)(right_value602=_inf_value23));
                                                                                                            buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            come_call_finalizer2(sCallerSNameNode_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            come_call_finalizer2(sCallerSNameNode_finalize,right_value597, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            if(right_value602) { right_value602 = come_decrement_ref_count2(right_value602, ((struct sNode*)right_value602)->finalize, ((struct sNode*)right_value602)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                            return __result402__;
                                                                                                        }
                                                                                                        else {
                                                                                                            if(_if_conditional630=(string_operator_equals(buf_382,"sizeof")||string_operator_equals(buf_382,"_Alignof")||string_operator_equals(buf_382,"_Alignas")||string_operator_equals(buf_382,"__alignof__"))&&*info->p==40,                                                                                                            _if_conditional630) {
                                                                                                                node_398=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value603=string_node_v21(buf_382,head_380,head_sline_381,info))));
                                                                                                                if(right_value603) { right_value603 = come_decrement_ref_count2(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                __dec_obj237=node_398;
                                                                                                                node_398=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value604=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_398),info))));
                                                                                                                if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                if(right_value604) { right_value604 = come_decrement_ref_count2(right_value604, ((struct sNode*)right_value604)->finalize, ((struct sNode*)right_value604)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                __result403__ = __result_obj__ = node_398;
                                                                                                                if(node_398) { node_398 = come_decrement_ref_count2(node_398, ((struct sNode*)node_398)->finalize, ((struct sNode*)node_398)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                return __result403__;
                                                                                                                if(node_398) { node_398 = come_decrement_ref_count2(node_398, ((struct sNode*)node_398)->finalize, ((struct sNode*)node_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                            }
                                                                                                            else {
                                                                                                                if(fun_name_with_type_name_389) {
                                                                                                                    fun_name_399=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value606=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value605=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2383, "buffer"))))))));
                                                                                                                    come_call_finalizer2(buffer_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(buffer_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    buffer_append_str(fun_name_399,buf_382);
                                                                                                                    type_403=(struct sType*)come_increment_ref_count(((struct sType*)(right_value608=sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(right_value607=buffer_to_string(fun_name_399))))))));
                                                                                                                    right_value607 = come_decrement_ref_count2(right_value607, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(sType_finalize,right_value608, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    if(_if_conditional636=type_403==((void*)0),                                                                                                                    _if_conditional636) {
                                                                                                                        klass_409=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value609=buffer_to_string(fun_name_399))));
                                                                                                                        right_value609 = come_decrement_ref_count2(right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        if(klass_409) {
                                                                                                                            __dec_obj238=type_403;
                                                                                                                            type_403=(struct sType*)come_increment_ref_count(((struct sType*)(right_value611=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value610=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2393, "sType")))),buf_382,(_Bool)0,info))));
                                                                                                                            come_call_finalizer2(sType_finalize,__dec_obj238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                            come_call_finalizer2(sType_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                            come_call_finalizer2(sType_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        }
                                                                                                                        else {
                                                                                                                            err_msg(info,"null type(%s)",buf_382);
                                                                                                                            exit(2);
                                                                                                                        }
                                                                                                                    }
                                                                                                                    while(_while_condtional37=*info->p==42,                                                                                                                    _while_condtional37) {
                                                                                                                        info->p++;
                                                                                                                        skip_spaces_and_lf(info);
                                                                                                                        if(_if_conditional648=type_403->mClass->mStruct==(_Bool)0,                                                                                                                        _if_conditional648) {
                                                                                                                            buffer_append_str(fun_name_399,"p");
                                                                                                                        }
                                                                                                                    }
                                                                                                                    expected_next_character(58,info);
                                                                                                                    expected_next_character(58,info);
                                                                                                                    buffer_append_str(fun_name_399,"_");
                                                                                                                    buf2_410=(char*)come_increment_ref_count(((char*)(right_value612=parse_word(info))));
                                                                                                                    right_value612 = come_decrement_ref_count2(right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    buffer_append_str(fun_name_399,buf2_410);
                                                                                                                    node_411=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value614=parse_function_call(((char*)(right_value613=buffer_to_string(fun_name_399))),info))));
                                                                                                                    right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    if(right_value614) { right_value614 = come_decrement_ref_count2(right_value614, ((struct sNode*)right_value614)->finalize, ((struct sNode*)right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __dec_obj239=node_411;
                                                                                                                    node_411=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value615=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_411),info))));
                                                                                                                    if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value615) { right_value615 = come_decrement_ref_count2(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __dec_obj240=node_411;
                                                                                                                    node_411=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value616=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_411),info))));
                                                                                                                    if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value616) { right_value616 = come_decrement_ref_count2(right_value616, ((struct sNode*)right_value616)->finalize, ((struct sNode*)right_value616)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __result412__ = __result_obj__ = node_411;
                                                                                                                    come_call_finalizer2(buffer_finalize,fun_name_399, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    come_call_finalizer2(sType_finalize,type_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    buf2_410 = come_decrement_ref_count2(buf2_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    if(node_411) { node_411 = come_decrement_ref_count2(node_411, ((struct sNode*)node_411)->finalize, ((struct sNode*)node_411)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                    buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    return __result412__;
                                                                                                                    come_call_finalizer2(buffer_finalize,fun_name_399, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    come_call_finalizer2(sType_finalize,type_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    buf2_410 = come_decrement_ref_count2(buf2_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    if(node_411) { node_411 = come_decrement_ref_count2(node_411, ((struct sNode*)node_411)->finalize, ((struct sNode*)node_411)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                }
                                                                                                                else {
                                                                                                                    if(_if_conditional649=*info->p==58&&*(info->p+1)==58,                                                                                                                    _if_conditional649) {
                                                                                                                        info->p+=2;
                                                                                                                        skip_spaces_and_lf(info);
                                                                                                                        fun_name_412=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value618=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value617=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2430, "buffer"))))))));
                                                                                                                        come_call_finalizer2(buffer_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        come_call_finalizer2(buffer_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        buffer_append_str(fun_name_412,buf_382);
                                                                                                                        buffer_append_str(fun_name_412,"_");
                                                                                                                        buf2_413=(char*)come_increment_ref_count(((char*)(right_value619=parse_word(info))));
                                                                                                                        right_value619 = come_decrement_ref_count2(right_value619, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        buffer_append_str(fun_name_412,buf2_413);
                                                                                                                        node_414=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value621=parse_function_call(((char*)(right_value620=buffer_to_string(fun_name_412))),info))));
                                                                                                                        right_value620 = come_decrement_ref_count2(right_value620, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        if(right_value621) { right_value621 = come_decrement_ref_count2(right_value621, ((struct sNode*)right_value621)->finalize, ((struct sNode*)right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __dec_obj241=node_414;
                                                                                                                        node_414=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value622=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_414),info))));
                                                                                                                        if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                        if(right_value622) { right_value622 = come_decrement_ref_count2(right_value622, ((struct sNode*)right_value622)->finalize, ((struct sNode*)right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __dec_obj242=node_414;
                                                                                                                        node_414=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value623=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_414),info))));
                                                                                                                        if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                        if(right_value623) { right_value623 = come_decrement_ref_count2(right_value623, ((struct sNode*)right_value623)->finalize, ((struct sNode*)right_value623)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __result413__ = __result_obj__ = node_414;
                                                                                                                        come_call_finalizer2(buffer_finalize,fun_name_412, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                        buf2_413 = come_decrement_ref_count2(buf2_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                        buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        return __result413__;
                                                                                                                        come_call_finalizer2(buffer_finalize,fun_name_412, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                        buf2_413 = come_decrement_ref_count2(buf2_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                    }
                                                                                                                    else {
                                                                                                                        if(_if_conditional650=string_operator_not_equals(buf_382,"if")&&string_operator_not_equals(buf_382,"while")&&string_operator_not_equals(buf_382,"for")&&string_operator_not_equals(buf_382,"switch")&&string_operator_not_equals(buf_382,"return")&&string_operator_not_equals(buf_382,"sizeof")&&string_operator_not_equals(buf_382,"isheap")&&string_operator_not_equals(buf_382,"__typeof__")&&string_operator_not_equals(buf_382,"dynamic_typeof")&&string_operator_not_equals(buf_382,"typeof")&&string_operator_not_equals(buf_382,"gc_inc")&&string_operator_not_equals(buf_382,"gc_dec")&&string_operator_not_equals(buf_382,"case")&&string_operator_not_equals(buf_382,"_Alignof")&&string_operator_not_equals(buf_382,"__alignof__")&&string_operator_not_equals(buf_382,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__385),                                                                                                                        _if_conditional650) {
                                                                                                                            node_415=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value624=parse_function_call(buf_382,info))));
                                                                                                                            if(right_value624) { right_value624 = come_decrement_ref_count2(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj243=node_415;
                                                                                                                            node_415=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value625=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_415),info))));
                                                                                                                            if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value625) { right_value625 = come_decrement_ref_count2(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj244=node_415;
                                                                                                                            node_415=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value626=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_415),info))));
                                                                                                                            if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value626) { right_value626 = come_decrement_ref_count2(right_value626, ((struct sNode*)right_value626)->finalize, ((struct sNode*)right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __result414__ = __result_obj__ = node_415;
                                                                                                                            if(node_415) { node_415 = come_decrement_ref_count2(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                            buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                            return __result414__;
                                                                                                                            if(node_415) { node_415 = come_decrement_ref_count2(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                        }
                                                                                                                        else {
                                                                                                                            node_416=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value627=string_node_v21(buf_382,head_380,head_sline_381,info))));
                                                                                                                            if(right_value627) { right_value627 = come_decrement_ref_count2(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj245=node_416;
                                                                                                                            node_416=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value628=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_416),info))));
                                                                                                                            if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value628) { right_value628 = come_decrement_ref_count2(right_value628, ((struct sNode*)right_value628)->finalize, ((struct sNode*)right_value628)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __result415__ = __result_obj__ = node_416;
                                                                                                                            if(node_416) { node_416 = come_decrement_ref_count2(node_416, ((struct sNode*)node_416)->finalize, ((struct sNode*)node_416)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                            buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                            return __result415__;
                                                                                                                            if(node_416) { node_416 = come_decrement_ref_count2(node_416, ((struct sNode*)node_416)->finalize, ((struct sNode*)node_416)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                                                                            buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            if(_if_conditional651=*info->p==40,                                                                            _if_conditional651) {
                                                                                info->p++;
                                                                                skip_spaces_and_lf(info);
                                                                                cast_expression_flag_417=(_Bool)0;
                                                                                {
                                                                                    p_418=info->p;
                                                                                    sline_419=info->sline;
                                                                                    word_420=(char*)come_increment_ref_count(((char*)(right_value629=__builtin_string(""))));
                                                                                    right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional652=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional652) {
                                                                                        __dec_obj246=word_420;
                                                                                        word_420=(char*)come_increment_ref_count(((char*)(right_value630=parse_word(info))));
                                                                                        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value630 = come_decrement_ref_count2(right_value630, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    if(_if_conditional653=is_type_name(word_420,info),                                                                                    _if_conditional653) {
                                                                                        cast_expression_flag_417=(_Bool)1;
                                                                                    }
                                                                                    info->p=p_418;
                                                                                    info->sline=sline_419;
                                                                                    word_420 = come_decrement_ref_count2(word_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                tuple_expression_flag_421=(_Bool)0;
                                                                                {
                                                                                    p_422=info->p;
                                                                                    sline_423=info->sline;
                                                                                    no_comma_424=info->no_comma;
                                                                                    info->no_comma=(_Bool)1;
                                                                                    no_output_err_425=info->no_output_err;
                                                                                    info->no_output_err=(_Bool)1;
                                                                                    no_output_come_code_426=info->no_output_come_code;
                                                                                    info->no_output_come_code=(_Bool)1;
                                                                                    node_427=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value631=expression_v13(info))));
                                                                                    if(right_value631) { right_value631 = come_decrement_ref_count2(right_value631, ((struct sNode*)right_value631)->finalize, ((struct sNode*)right_value631)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    node2_428=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value632=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_427),info))));
                                                                                    if(right_value632) { right_value632 = come_decrement_ref_count2(right_value632, ((struct sNode*)right_value632)->finalize, ((struct sNode*)right_value632)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    info->no_comma=no_comma_424;
                                                                                    info->no_output_err=no_output_err_425;
                                                                                    info->no_output_come_code=no_output_come_code_426;
                                                                                    if(_if_conditional654=*info->p==44,                                                                                    _if_conditional654) {
                                                                                        tuple_expression_flag_421=(_Bool)1;
                                                                                    }
                                                                                    info->p=p_422;
                                                                                    info->sline=sline_423;
                                                                                    if(node_427) { node_427 = come_decrement_ref_count2(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    if(node2_428) { node2_428 = come_decrement_ref_count2(node2_428, ((struct sNode*)node2_428)->finalize, ((struct sNode*)node2_428)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                if(_if_conditional655=!gComeC&&tuple_expression_flag_421,                                                                                _if_conditional655) {
                                                                                    node_429=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value633=parse_tuple(info))));
                                                                                    if(right_value633) { right_value633 = come_decrement_ref_count2(right_value633, ((struct sNode*)right_value633)->finalize, ((struct sNode*)right_value633)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj247=node_429;
                                                                                    node_429=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value634=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_429),info))));
                                                                                    if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value634) { right_value634 = come_decrement_ref_count2(right_value634, ((struct sNode*)right_value634)->finalize, ((struct sNode*)right_value634)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __result416__ = __result_obj__ = node_429;
                                                                                    if(node_429) { node_429 = come_decrement_ref_count2(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                    return __result416__;
                                                                                    if(node_429) { node_429 = come_decrement_ref_count2(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                else {
                                                                                    if(cast_expression_flag_417) {
                                                                                        parse_sharp_v5(info);
                                                                                        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value635=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_430=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                        name_431=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                        err_432=multiple_assign_var8->v3;
                                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional657=!err_432,                                                                                        _if_conditional657) {
                                                                                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                                                                            exit(2);
                                                                                        }
                                                                                        parse_sharp_v5(info);
                                                                                        expected_next_character(41,info);
                                                                                        node_433=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value636=expression_node_v99(info))));
                                                                                        if(right_value636) { right_value636 = come_decrement_ref_count2(right_value636, ((struct sNode*)right_value636)->finalize, ((struct sNode*)right_value636)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __dec_obj248=node_433;
                                                                                        node_433=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value637=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_433),info))));
                                                                                        if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value637) { right_value637 = come_decrement_ref_count2(right_value637, ((struct sNode*)right_value637)->finalize, ((struct sNode*)right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2538, "struct sNode");
                                                                                        _inf_obj_value24=come_increment_ref_count(((struct sCastNode*)(right_value639=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value638=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05function.c", 2538, "sCastNode")))),type_430,node_433,info))));
                                                                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                        _inf_value24->finalize=(void*)sCastNode_finalize;
                                                                                        _inf_value24->clone=(void*)sCastNode_clone;
                                                                                        _inf_value24->compile=(void*)sCastNode_compile;
                                                                                        _inf_value24->sline=(void*)sCastNode_sline;
                                                                                        _inf_value24->sname=(void*)sCastNode_sname;
                                                                                        _inf_value24->terminated=(void*)sCastNode_terminated;
                                                                                        _inf_value24->kind=(void*)sCastNode_kind;
                                                                                        __result419__ = __result_obj__ = ((struct sNode*)(right_value644=_inf_value24));
                                                                                        come_call_finalizer2(sType_finalize,type_430, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_431 = come_decrement_ref_count2(name_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        if(node_433) { node_433 = come_decrement_ref_count2(node_433, ((struct sNode*)node_433)->finalize, ((struct sNode*)node_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer2(sCastNode_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sCastNode_finalize,right_value639, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value644) { right_value644 = come_decrement_ref_count2(right_value644, ((struct sNode*)right_value644)->finalize, ((struct sNode*)right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result419__;
                                                                                        come_call_finalizer2(sType_finalize,type_430, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_431 = come_decrement_ref_count2(name_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        if(node_433) { node_433 = come_decrement_ref_count2(node_433, ((struct sNode*)node_433)->finalize, ((struct sNode*)node_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                    else {
                                                                                        parse_sharp_v5(info);
                                                                                        node_435=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value645=expression_v13(info))));
                                                                                        if(right_value645) { right_value645 = come_decrement_ref_count2(right_value645, ((struct sNode*)right_value645)->finalize, ((struct sNode*)right_value645)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        parse_sharp_v5(info);
                                                                                        expected_next_character(41,info);
                                                                                        parse_sharp_v5(info);
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2548, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sParenNode*)(right_value647=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value646=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05function.c", 2548, "sParenNode")))),node_435,info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sParenNode_finalize;
                                                                                        _inf_value25->clone=(void*)sParenNode_clone;
                                                                                        _inf_value25->compile=(void*)sParenNode_compile;
                                                                                        _inf_value25->sline=(void*)sParenNode_sline;
                                                                                        _inf_value25->sname=(void*)sParenNode_sname;
                                                                                        _inf_value25->terminated=(void*)sParenNode_terminated;
                                                                                        _inf_value25->kind=(void*)sParenNode_kind;
                                                                                        __dec_obj254=node_435;
                                                                                        node_435=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value651=_inf_value25)));
                                                                                        if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        come_call_finalizer2(sParenNode_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sParenNode_finalize,right_value647, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value651) { right_value651 = come_decrement_ref_count2(right_value651, ((struct sNode*)right_value651)->finalize, ((struct sNode*)right_value651)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __dec_obj255=node_435;
                                                                                        node_435=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value652=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_435),info))));
                                                                                        if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value652) { right_value652 = come_decrement_ref_count2(right_value652, ((struct sNode*)right_value652)->finalize, ((struct sNode*)right_value652)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __result422__ = __result_obj__ = node_435;
                                                                                        if(node_435) { node_435 = come_decrement_ref_count2(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                        return __result422__;
                                                                                        if(node_435) { node_435 = come_decrement_ref_count2(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                node_437=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value653=expression_node_v98(info))));
                                                                                if(right_value653) { right_value653 = come_decrement_ref_count2(right_value653, ((struct sNode*)right_value653)->finalize, ((struct sNode*)right_value653)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                __dec_obj256=node_437;
                                                                                node_437=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value654=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_437),info))));
                                                                                if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value654) { right_value654 = come_decrement_ref_count2(right_value654, ((struct sNode*)right_value654)->finalize, ((struct sNode*)right_value654)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                __result423__ = __result_obj__ = node_437;
                                                                                if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result423__;
                                                                                if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
_Bool _if_conditional455;
_Bool _if_conditional456;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional455=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional455) {
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional456=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional456) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional457;
struct sLogicalDenial* __result337__;
void* right_value443;
struct sLogicalDenial* result_345;
_Bool _if_conditional458;
void* right_value444;
struct sNode* __dec_obj176;
_Bool _if_conditional459;
_Bool _if_conditional460;
void* right_value445;
char* __dec_obj177;
struct sLogicalDenial* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value443 = (void*)0;
memset(&result_345, 0, sizeof(struct sLogicalDenial*));
right_value444 = (void*)0;
right_value445 = (void*)0;
                if(_if_conditional457=self==(void*)0,                _if_conditional457) {
                    __result337__ = __result_obj__ = (void*)0;
                    return __result337__;
                }
                result_345=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value443=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "sLogicalDenial"))));
                come_call_finalizer2(sLogicalDenial_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional458=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional458) {
                    __dec_obj176=result_345->value;
                    result_345->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=sNode_clone(self->value))));
                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional459=self!=((void*)0),                _if_conditional459) {
                    result_345->sline=self->sline;
                }
                if(_if_conditional460=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional460) {
                    __dec_obj177=result_345->sname;
                    result_345->sname=(char*)come_increment_ref_count(((char*)(right_value445=string_clone(self->sname))));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result338__ = __result_obj__ = result_345;
                come_call_finalizer2(sLogicalDenial_finalize,result_345, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result338__;
                come_call_finalizer2(sLogicalDenial_finalize,result_345, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional462;
_Bool _if_conditional463;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional462=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional462) {
                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional463=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional463) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional464;
struct sMinusMinusNode2* __result340__;
void* right_value450;
struct sMinusMinusNode2* result_347;
_Bool _if_conditional465;
void* right_value451;
struct sNode* __dec_obj178;
_Bool _if_conditional466;
_Bool _if_conditional467;
void* right_value452;
char* __dec_obj179;
struct sMinusMinusNode2* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
right_value450 = (void*)0;
memset(&result_347, 0, sizeof(struct sMinusMinusNode2*));
right_value451 = (void*)0;
right_value452 = (void*)0;
                    if(_if_conditional464=self==(void*)0,                    _if_conditional464) {
                        __result340__ = __result_obj__ = (void*)0;
                        return __result340__;
                    }
                    result_347=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value450=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "sMinusMinusNode2"))));
                    come_call_finalizer2(sMinusMinusNode2_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional465=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional465) {
                        __dec_obj178=result_347->value;
                        result_347->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=sNode_clone(self->value))));
                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional466=self!=((void*)0),                    _if_conditional466) {
                        result_347->sline=self->sline;
                    }
                    if(_if_conditional467=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional467) {
                        __dec_obj179=result_347->sname;
                        result_347->sname=(char*)come_increment_ref_count(((char*)(right_value452=string_clone(self->sname))));
                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value452 = come_decrement_ref_count2(right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result341__ = __result_obj__ = result_347;
                    come_call_finalizer2(sMinusMinusNode2_finalize,result_347, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result341__;
                    come_call_finalizer2(sMinusMinusNode2_finalize,result_347, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional469;
_Bool _if_conditional470;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional469=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional469) {
                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional470=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional470) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional471;
struct sMinusNode2* __result343__;
void* right_value457;
struct sMinusNode2* result_349;
_Bool _if_conditional472;
void* right_value458;
struct sNode* __dec_obj180;
_Bool _if_conditional473;
_Bool _if_conditional474;
void* right_value459;
char* __dec_obj181;
struct sMinusNode2* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
right_value457 = (void*)0;
memset(&result_349, 0, sizeof(struct sMinusNode2*));
right_value458 = (void*)0;
right_value459 = (void*)0;
                        if(_if_conditional471=self==(void*)0,                        _if_conditional471) {
                            __result343__ = __result_obj__ = (void*)0;
                            return __result343__;
                        }
                        result_349=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value457=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "sMinusNode2"))));
                        come_call_finalizer2(sMinusNode2_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional472=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional472) {
                            __dec_obj180=result_349->value;
                            result_349->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=sNode_clone(self->value))));
                            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value458) { right_value458 = come_decrement_ref_count2(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional473=self!=((void*)0),                        _if_conditional473) {
                            result_349->sline=self->sline;
                        }
                        if(_if_conditional474=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional474) {
                            __dec_obj181=result_349->sname;
                            result_349->sname=(char*)come_increment_ref_count(((char*)(right_value459=string_clone(self->sname))));
                            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value459 = come_decrement_ref_count2(right_value459, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result344__ = __result_obj__ = result_349;
                        come_call_finalizer2(sMinusNode2_finalize,result_349, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result344__;
                        come_call_finalizer2(sMinusNode2_finalize,result_349, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional476;
_Bool _if_conditional477;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional476=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional476) {
                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional477=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional477) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional478;
struct sPlusPlusNode2* __result346__;
void* right_value464;
struct sPlusPlusNode2* result_351;
_Bool _if_conditional479;
void* right_value465;
struct sNode* __dec_obj182;
_Bool _if_conditional480;
_Bool _if_conditional481;
void* right_value466;
char* __dec_obj183;
struct sPlusPlusNode2* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
right_value464 = (void*)0;
memset(&result_351, 0, sizeof(struct sPlusPlusNode2*));
right_value465 = (void*)0;
right_value466 = (void*)0;
                            if(_if_conditional478=self==(void*)0,                            _if_conditional478) {
                                __result346__ = __result_obj__ = (void*)0;
                                return __result346__;
                            }
                            result_351=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value464=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "sPlusPlusNode2"))));
                            come_call_finalizer2(sPlusPlusNode2_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional479=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional479) {
                                __dec_obj182=result_351->value;
                                result_351->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value465=sNode_clone(self->value))));
                                if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value465) { right_value465 = come_decrement_ref_count2(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional480=self!=((void*)0),                            _if_conditional480) {
                                result_351->sline=self->sline;
                            }
                            if(_if_conditional481=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional481) {
                                __dec_obj183=result_351->sname;
                                result_351->sname=(char*)come_increment_ref_count(((char*)(right_value466=string_clone(self->sname))));
                                __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value466 = come_decrement_ref_count2(right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result347__ = __result_obj__ = result_351;
                            come_call_finalizer2(sPlusPlusNode2_finalize,result_351, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result347__;
                            come_call_finalizer2(sPlusPlusNode2_finalize,result_351, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sComplement_finalize(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional483;
_Bool _if_conditional484;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional483=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional483) {
                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional484=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional484) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional485;
struct sComplement* __result349__;
void* right_value471;
struct sComplement* result_353;
_Bool _if_conditional486;
void* right_value472;
struct sNode* __dec_obj184;
_Bool _if_conditional487;
_Bool _if_conditional488;
void* right_value473;
char* __dec_obj185;
struct sComplement* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value471 = (void*)0;
memset(&result_353, 0, sizeof(struct sComplement*));
right_value472 = (void*)0;
right_value473 = (void*)0;
                                if(_if_conditional485=self==(void*)0,                                _if_conditional485) {
                                    __result349__ = __result_obj__ = (void*)0;
                                    return __result349__;
                                }
                                result_353=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value471=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "sComplement"))));
                                come_call_finalizer2(sComplement_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional486=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional486) {
                                    __dec_obj184=result_353->value;
                                    result_353->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value472=sNode_clone(self->value))));
                                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value472) { right_value472 = come_decrement_ref_count2(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional487=self!=((void*)0),                                _if_conditional487) {
                                    result_353->sline=self->sline;
                                }
                                if(_if_conditional488=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional488) {
                                    __dec_obj185=result_353->sname;
                                    result_353->sname=(char*)come_increment_ref_count(((char*)(right_value473=string_clone(self->sname))));
                                    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value473 = come_decrement_ref_count2(right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result350__ = __result_obj__ = result_353;
                                come_call_finalizer2(sComplement_finalize,result_353, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result350__;
                                come_call_finalizer2(sComplement_finalize,result_353, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sReturnNode_finalize(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional503;
_Bool _if_conditional504;
_Bool _if_conditional505;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional503=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional503) {
                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional504=self!=((void*)0)&&self->value_source!=((void*)0),                                                        _if_conditional504) {
                                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional505=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional505) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional506;
struct sReturnNode* __result359__;
void* right_value497;
struct sReturnNode* result_363;
_Bool _if_conditional507;
void* right_value498;
struct sNode* __dec_obj195;
_Bool _if_conditional508;
void* right_value499;
char* __dec_obj196;
_Bool _if_conditional509;
_Bool _if_conditional510;
void* right_value500;
char* __dec_obj197;
struct sReturnNode* __result360__;
memset(&__result_obj__, 0, sizeof(void*));
right_value497 = (void*)0;
memset(&result_363, 0, sizeof(struct sReturnNode*));
right_value498 = (void*)0;
right_value499 = (void*)0;
right_value500 = (void*)0;
                                                        if(_if_conditional506=self==(void*)0,                                                        _if_conditional506) {
                                                            __result359__ = __result_obj__ = (void*)0;
                                                            return __result359__;
                                                        }
                                                        result_363=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value497=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"))));
                                                        come_call_finalizer2(sReturnNode_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional507=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional507) {
                                                            __dec_obj195=result_363->value;
                                                            result_363->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value498=sNode_clone(self->value))));
                                                            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value498) { right_value498 = come_decrement_ref_count2(right_value498, ((struct sNode*)right_value498)->finalize, ((struct sNode*)right_value498)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional508=self!=((void*)0)&&self->value_source!=((void*)0),                                                        _if_conditional508) {
                                                            __dec_obj196=result_363->value_source;
                                                            result_363->value_source=(char*)come_increment_ref_count(((char*)(right_value499=string_clone(self->value_source))));
                                                            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional509=self!=((void*)0),                                                        _if_conditional509) {
                                                            result_363->sline=self->sline;
                                                        }
                                                        if(_if_conditional510=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional510) {
                                                            __dec_obj197=result_363->sname;
                                                            result_363->sname=(char*)come_increment_ref_count(((char*)(right_value500=string_clone(self->sname))));
                                                            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value500 = come_decrement_ref_count2(right_value500, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        __result360__ = __result_obj__ = result_363;
                                                        come_call_finalizer2(sReturnNode_finalize,result_363, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result360__;
                                                        come_call_finalizer2(sReturnNode_finalize,result_363, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentReturnNode_finalize(struct sParentReturnNode* self){
void* __result_obj__;
_Bool _if_conditional521;
_Bool _if_conditional522;
_Bool _if_conditional523;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional521=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional521) {
                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional522=self!=((void*)0)&&self->value_source!=((void*)0),                                                            _if_conditional522) {
                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            if(_if_conditional523=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional523) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sParentReturnNode* sParentReturnNode_clone(struct sParentReturnNode* self){
void* __result_obj__;
_Bool _if_conditional524;
struct sParentReturnNode* __result365__;
void* right_value516;
struct sParentReturnNode* result_369;
_Bool _if_conditional525;
void* right_value517;
struct sNode* __dec_obj203;
_Bool _if_conditional526;
void* right_value518;
char* __dec_obj204;
_Bool _if_conditional527;
_Bool _if_conditional528;
void* right_value519;
char* __dec_obj205;
struct sParentReturnNode* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
right_value516 = (void*)0;
memset(&result_369, 0, sizeof(struct sParentReturnNode*));
right_value517 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
                                                            if(_if_conditional524=self==(void*)0,                                                            _if_conditional524) {
                                                                __result365__ = __result_obj__ = (void*)0;
                                                                return __result365__;
                                                            }
                                                            result_369=(struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value516=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "sParentReturnNode_clone", 3, "sParentReturnNode"))));
                                                            come_call_finalizer2(sParentReturnNode_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional525=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional525) {
                                                                __dec_obj203=result_369->value;
                                                                result_369->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value517=sNode_clone(self->value))));
                                                                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value517) { right_value517 = come_decrement_ref_count2(right_value517, ((struct sNode*)right_value517)->finalize, ((struct sNode*)right_value517)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional526=self!=((void*)0)&&self->value_source!=((void*)0),                                                            _if_conditional526) {
                                                                __dec_obj204=result_369->value_source;
                                                                result_369->value_source=(char*)come_increment_ref_count(((char*)(right_value518=string_clone(self->value_source))));
                                                                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value518 = come_decrement_ref_count2(right_value518, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            if(_if_conditional527=self!=((void*)0),                                                            _if_conditional527) {
                                                                result_369->sline=self->sline;
                                                            }
                                                            if(_if_conditional528=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional528) {
                                                                __dec_obj205=result_369->sname;
                                                                result_369->sname=(char*)come_increment_ref_count(((char*)(right_value519=string_clone(self->sname))));
                                                                __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value519 = come_decrement_ref_count2(right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result366__ = __result_obj__ = result_369;
                                                            come_call_finalizer2(sParentReturnNode_finalize,result_369, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result366__;
                                                            come_call_finalizer2(sParentReturnNode_finalize,result_369, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentBreakNode_finalize(struct sParentBreakNode* self){
void* __result_obj__;
_Bool _if_conditional530;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional530=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional530) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sParentBreakNode* sParentBreakNode_clone(struct sParentBreakNode* self){
void* __result_obj__;
_Bool _if_conditional531;
struct sParentBreakNode* __result368__;
void* right_value523;
struct sParentBreakNode* result_370;
_Bool _if_conditional532;
_Bool _if_conditional533;
void* right_value524;
char* __dec_obj206;
struct sParentBreakNode* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
right_value523 = (void*)0;
memset(&result_370, 0, sizeof(struct sParentBreakNode*));
right_value524 = (void*)0;
                                                            if(_if_conditional531=self==(void*)0,                                                            _if_conditional531) {
                                                                __result368__ = __result_obj__ = (void*)0;
                                                                return __result368__;
                                                            }
                                                            result_370=(struct sParentBreakNode*)come_increment_ref_count(((struct sParentBreakNode*)(right_value523=(struct sParentBreakNode*)come_calloc(1, sizeof(struct sParentBreakNode)*(1), "sParentBreakNode_clone", 3, "sParentBreakNode"))));
                                                            come_call_finalizer2(sParentBreakNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional532=self!=((void*)0),                                                            _if_conditional532) {
                                                                result_370->sline=self->sline;
                                                            }
                                                            if(_if_conditional533=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional533) {
                                                                __dec_obj206=result_370->sname;
                                                                result_370->sname=(char*)come_increment_ref_count(((char*)(right_value524=string_clone(self->sname))));
                                                                __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value524 = come_decrement_ref_count2(right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result369__ = __result_obj__ = result_370;
                                                            come_call_finalizer2(sParentBreakNode_finalize,result_370, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result369__;
                                                            come_call_finalizer2(sParentBreakNode_finalize,result_370, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentContinueNode_finalize(struct sParentContinueNode* self){
void* __result_obj__;
_Bool _if_conditional535;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional535=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional535) {
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sParentContinueNode* sParentContinueNode_clone(struct sParentContinueNode* self){
void* __result_obj__;
_Bool _if_conditional536;
struct sParentContinueNode* __result371__;
void* right_value528;
struct sParentContinueNode* result_371;
_Bool _if_conditional537;
_Bool _if_conditional538;
void* right_value529;
char* __dec_obj207;
struct sParentContinueNode* __result372__;
memset(&__result_obj__, 0, sizeof(void*));
right_value528 = (void*)0;
memset(&result_371, 0, sizeof(struct sParentContinueNode*));
right_value529 = (void*)0;
                                                                if(_if_conditional536=self==(void*)0,                                                                _if_conditional536) {
                                                                    __result371__ = __result_obj__ = (void*)0;
                                                                    return __result371__;
                                                                }
                                                                result_371=(struct sParentContinueNode*)come_increment_ref_count(((struct sParentContinueNode*)(right_value528=(struct sParentContinueNode*)come_calloc(1, sizeof(struct sParentContinueNode)*(1), "sParentContinueNode_clone", 3, "sParentContinueNode"))));
                                                                come_call_finalizer2(sParentContinueNode_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional537=self!=((void*)0),                                                                _if_conditional537) {
                                                                    result_371->sline=self->sline;
                                                                }
                                                                if(_if_conditional538=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional538) {
                                                                    __dec_obj207=result_371->sname;
                                                                    result_371->sname=(char*)come_increment_ref_count(((char*)(right_value529=string_clone(self->sname))));
                                                                    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value529 = come_decrement_ref_count2(right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                __result372__ = __result_obj__ = result_371;
                                                                come_call_finalizer2(sParentContinueNode_finalize,result_371, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result372__;
                                                                come_call_finalizer2(sParentContinueNode_finalize,result_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional541;
_Bool _if_conditional542;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional541=self!=((void*)0)&&self->value!=((void*)0),                                                                    _if_conditional541) {
                                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                    if(_if_conditional542=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional542) {
                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional543;
struct sDerefferenceNode* __result374__;
void* right_value534;
struct sDerefferenceNode* result_375;
_Bool _if_conditional544;
void* right_value535;
struct sNode* __dec_obj208;
_Bool _if_conditional545;
_Bool _if_conditional546;
_Bool _if_conditional547;
void* right_value536;
char* __dec_obj209;
struct sDerefferenceNode* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
right_value534 = (void*)0;
memset(&result_375, 0, sizeof(struct sDerefferenceNode*));
right_value535 = (void*)0;
right_value536 = (void*)0;
                                                                    if(_if_conditional543=self==(void*)0,                                                                    _if_conditional543) {
                                                                        __result374__ = __result_obj__ = (void*)0;
                                                                        return __result374__;
                                                                    }
                                                                    result_375=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value534=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "sDerefferenceNode"))));
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional544=self!=((void*)0)&&self->value!=((void*)0),                                                                    _if_conditional544) {
                                                                        __dec_obj208=result_375->value;
                                                                        result_375->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value535=sNode_clone(self->value))));
                                                                        if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); }
                                                                        if(right_value535) { right_value535 = come_decrement_ref_count2(right_value535, ((struct sNode*)right_value535)->finalize, ((struct sNode*)right_value535)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    }
                                                                    if(_if_conditional545=self!=((void*)0),                                                                    _if_conditional545) {
                                                                        result_375->mQuote=self->mQuote;
                                                                    }
                                                                    if(_if_conditional546=self!=((void*)0),                                                                    _if_conditional546) {
                                                                        result_375->sline=self->sline;
                                                                    }
                                                                    if(_if_conditional547=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional547) {
                                                                        __dec_obj209=result_375->sname;
                                                                        result_375->sname=(char*)come_increment_ref_count(((char*)(right_value536=string_clone(self->sname))));
                                                                        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value536 = come_decrement_ref_count2(right_value536, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    __result375__ = __result_obj__ = result_375;
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,result_375, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result375__;
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,result_375, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional549;
_Bool _if_conditional550;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional549=self!=((void*)0)&&self->value!=((void*)0),                                                                        _if_conditional549) {
                                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                        if(_if_conditional550=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional550) {
                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional551;
struct sRefferenceNode* __result377__;
void* right_value541;
struct sRefferenceNode* result_377;
_Bool _if_conditional552;
void* right_value542;
struct sNode* __dec_obj210;
_Bool _if_conditional553;
_Bool _if_conditional554;
void* right_value543;
char* __dec_obj211;
struct sRefferenceNode* __result378__;
memset(&__result_obj__, 0, sizeof(void*));
right_value541 = (void*)0;
memset(&result_377, 0, sizeof(struct sRefferenceNode*));
right_value542 = (void*)0;
right_value543 = (void*)0;
                                                                        if(_if_conditional551=self==(void*)0,                                                                        _if_conditional551) {
                                                                            __result377__ = __result_obj__ = (void*)0;
                                                                            return __result377__;
                                                                        }
                                                                        result_377=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value541=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "sRefferenceNode"))));
                                                                        come_call_finalizer2(sRefferenceNode_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional552=self!=((void*)0)&&self->value!=((void*)0),                                                                        _if_conditional552) {
                                                                            __dec_obj210=result_377->value;
                                                                            result_377->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value542=sNode_clone(self->value))));
                                                                            if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); }
                                                                            if(right_value542) { right_value542 = come_decrement_ref_count2(right_value542, ((struct sNode*)right_value542)->finalize, ((struct sNode*)right_value542)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        }
                                                                        if(_if_conditional553=self!=((void*)0),                                                                        _if_conditional553) {
                                                                            result_377->sline=self->sline;
                                                                        }
                                                                        if(_if_conditional554=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional554) {
                                                                            __dec_obj211=result_377->sname;
                                                                            result_377->sname=(char*)come_increment_ref_count(((char*)(right_value543=string_clone(self->sname))));
                                                                            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value543 = come_decrement_ref_count2(right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        __result378__ = __result_obj__ = result_377;
                                                                        come_call_finalizer2(sRefferenceNode_finalize,result_377, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result378__;
                                                                        come_call_finalizer2(sRefferenceNode_finalize,result_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sReverseNode_finalize(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional556;
_Bool _if_conditional557;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional556=self!=((void*)0)&&self->value!=((void*)0),                                                                            _if_conditional556) {
                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            if(_if_conditional557=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional557) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional558;
struct sReverseNode* __result380__;
void* right_value548;
struct sReverseNode* result_379;
_Bool _if_conditional559;
void* right_value549;
struct sNode* __dec_obj212;
_Bool _if_conditional560;
_Bool _if_conditional561;
void* right_value550;
char* __dec_obj213;
struct sReverseNode* __result381__;
memset(&__result_obj__, 0, sizeof(void*));
right_value548 = (void*)0;
memset(&result_379, 0, sizeof(struct sReverseNode*));
right_value549 = (void*)0;
right_value550 = (void*)0;
                                                                            if(_if_conditional558=self==(void*)0,                                                                            _if_conditional558) {
                                                                                __result380__ = __result_obj__ = (void*)0;
                                                                                return __result380__;
                                                                            }
                                                                            result_379=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value548=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "sReverseNode"))));
                                                                            come_call_finalizer2(sReverseNode_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional559=self!=((void*)0)&&self->value!=((void*)0),                                                                            _if_conditional559) {
                                                                                __dec_obj212=result_379->value;
                                                                                result_379->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value549=sNode_clone(self->value))));
                                                                                if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value549) { right_value549 = come_decrement_ref_count2(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            }
                                                                            if(_if_conditional560=self!=((void*)0),                                                                            _if_conditional560) {
                                                                                result_379->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional561=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional561) {
                                                                                __dec_obj213=result_379->sname;
                                                                                result_379->sname=(char*)come_increment_ref_count(((char*)(right_value550=string_clone(self->sname))));
                                                                                __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value550 = come_decrement_ref_count2(right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result381__ = __result_obj__ = result_379;
                                                                            come_call_finalizer2(sReverseNode_finalize,result_379, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result381__;
                                                                            come_call_finalizer2(sReverseNode_finalize,result_379, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional577;
_Bool _if_conditional578;
_Bool _if_conditional579;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional577=self!=((void*)0)&&self->value!=((void*)0),                                                                                            _if_conditional577) {
                                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional578=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                            _if_conditional578) {
                                                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional579=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional579) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional580;
struct sFuncNode* __result385__;
void* right_value563;
struct sFuncNode* result_392;
_Bool _if_conditional581;
void* right_value564;
struct sNode* __dec_obj219;
_Bool _if_conditional582;
void* right_value565;
char* __dec_obj220;
_Bool _if_conditional583;
_Bool _if_conditional584;
void* right_value566;
char* __dec_obj221;
struct sFuncNode* __result386__;
memset(&__result_obj__, 0, sizeof(void*));
right_value563 = (void*)0;
memset(&result_392, 0, sizeof(struct sFuncNode*));
right_value564 = (void*)0;
right_value565 = (void*)0;
right_value566 = (void*)0;
                                                                                            if(_if_conditional580=self==(void*)0,                                                                                            _if_conditional580) {
                                                                                                __result385__ = __result_obj__ = (void*)0;
                                                                                                return __result385__;
                                                                                            }
                                                                                            result_392=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value563=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"))));
                                                                                            come_call_finalizer2(sFuncNode_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional581=self!=((void*)0)&&self->value!=((void*)0),                                                                                            _if_conditional581) {
                                                                                                __dec_obj219=result_392->value;
                                                                                                result_392->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value564=sNode_clone(self->value))));
                                                                                                if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value564) { right_value564 = come_decrement_ref_count2(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional582=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                            _if_conditional582) {
                                                                                                __dec_obj220=result_392->value_source;
                                                                                                result_392->value_source=(char*)come_increment_ref_count(((char*)(right_value565=string_clone(self->value_source))));
                                                                                                __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value565 = come_decrement_ref_count2(right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional583=self!=((void*)0),                                                                                            _if_conditional583) {
                                                                                                result_392->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional584=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional584) {
                                                                                                __dec_obj221=result_392->sname;
                                                                                                result_392->sname=(char*)come_increment_ref_count(((char*)(right_value566=string_clone(self->sname))));
                                                                                                __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value566 = come_decrement_ref_count2(right_value566, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result386__ = __result_obj__ = result_392;
                                                                                            come_call_finalizer2(sFuncNode_finalize,result_392, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result386__;
                                                                                            come_call_finalizer2(sFuncNode_finalize,result_392, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional586;
_Bool _if_conditional587;
_Bool _if_conditional588;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                if(_if_conditional586=self!=((void*)0)&&self->value!=((void*)0),                                                                                                _if_conditional586) {
                                                                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
                                                                                                if(_if_conditional587=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                _if_conditional587) {
                                                                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                if(_if_conditional588=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional588) {
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional589;
struct sLineNode* __result388__;
void* right_value570;
struct sLineNode* result_393;
_Bool _if_conditional590;
void* right_value571;
struct sNode* __dec_obj222;
_Bool _if_conditional591;
void* right_value572;
char* __dec_obj223;
_Bool _if_conditional592;
_Bool _if_conditional593;
void* right_value573;
char* __dec_obj224;
struct sLineNode* __result389__;
memset(&__result_obj__, 0, sizeof(void*));
right_value570 = (void*)0;
memset(&result_393, 0, sizeof(struct sLineNode*));
right_value571 = (void*)0;
right_value572 = (void*)0;
right_value573 = (void*)0;
                                                                                                if(_if_conditional589=self==(void*)0,                                                                                                _if_conditional589) {
                                                                                                    __result388__ = __result_obj__ = (void*)0;
                                                                                                    return __result388__;
                                                                                                }
                                                                                                result_393=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value570=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"))));
                                                                                                come_call_finalizer2(sLineNode_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional590=self!=((void*)0)&&self->value!=((void*)0),                                                                                                _if_conditional590) {
                                                                                                    __dec_obj222=result_393->value;
                                                                                                    result_393->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value571=sNode_clone(self->value))));
                                                                                                    if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value571) { right_value571 = come_decrement_ref_count2(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                if(_if_conditional591=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                _if_conditional591) {
                                                                                                    __dec_obj223=result_393->value_source;
                                                                                                    result_393->value_source=(char*)come_increment_ref_count(((char*)(right_value572=string_clone(self->value_source))));
                                                                                                    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value572 = come_decrement_ref_count2(right_value572, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                if(_if_conditional592=self!=((void*)0),                                                                                                _if_conditional592) {
                                                                                                    result_393->sline=self->sline;
                                                                                                }
                                                                                                if(_if_conditional593=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional593) {
                                                                                                    __dec_obj224=result_393->sname;
                                                                                                    result_393->sname=(char*)come_increment_ref_count(((char*)(right_value573=string_clone(self->sname))));
                                                                                                    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value573 = come_decrement_ref_count2(right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                __result389__ = __result_obj__ = result_393;
                                                                                                come_call_finalizer2(sLineNode_finalize,result_393, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result389__;
                                                                                                come_call_finalizer2(sLineNode_finalize,result_393, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional595;
_Bool _if_conditional596;
_Bool _if_conditional597;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                    if(_if_conditional595=self!=((void*)0)&&self->value!=((void*)0),                                                                                                    _if_conditional595) {
                                                                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                    }
                                                                                                    if(_if_conditional596=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                    _if_conditional596) {
                                                                                                        self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
                                                                                                    if(_if_conditional597=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                    _if_conditional597) {
                                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional598;
struct sSNameNode* __result391__;
void* right_value577;
struct sSNameNode* result_394;
_Bool _if_conditional599;
void* right_value578;
struct sNode* __dec_obj225;
_Bool _if_conditional600;
void* right_value579;
char* __dec_obj226;
_Bool _if_conditional601;
_Bool _if_conditional602;
void* right_value580;
char* __dec_obj227;
struct sSNameNode* __result392__;
memset(&__result_obj__, 0, sizeof(void*));
right_value577 = (void*)0;
memset(&result_394, 0, sizeof(struct sSNameNode*));
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
                                                                                                    if(_if_conditional598=self==(void*)0,                                                                                                    _if_conditional598) {
                                                                                                        __result391__ = __result_obj__ = (void*)0;
                                                                                                        return __result391__;
                                                                                                    }
                                                                                                    result_394=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value577=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"))));
                                                                                                    come_call_finalizer2(sSNameNode_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(_if_conditional599=self!=((void*)0)&&self->value!=((void*)0),                                                                                                    _if_conditional599) {
                                                                                                        __dec_obj225=result_394->value;
                                                                                                        result_394->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value578=sNode_clone(self->value))));
                                                                                                        if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                        if(right_value578) { right_value578 = come_decrement_ref_count2(right_value578, ((struct sNode*)right_value578)->finalize, ((struct sNode*)right_value578)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    }
                                                                                                    if(_if_conditional600=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                    _if_conditional600) {
                                                                                                        __dec_obj226=result_394->value_source;
                                                                                                        result_394->value_source=(char*)come_increment_ref_count(((char*)(right_value579=string_clone(self->value_source))));
                                                                                                        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value579 = come_decrement_ref_count2(right_value579, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    if(_if_conditional601=self!=((void*)0),                                                                                                    _if_conditional601) {
                                                                                                        result_394->sline=self->sline;
                                                                                                    }
                                                                                                    if(_if_conditional602=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                    _if_conditional602) {
                                                                                                        __dec_obj227=result_394->sname;
                                                                                                        result_394->sname=(char*)come_increment_ref_count(((char*)(right_value580=string_clone(self->sname))));
                                                                                                        __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value580 = come_decrement_ref_count2(right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    __result392__ = __result_obj__ = result_394;
                                                                                                    come_call_finalizer2(sSNameNode_finalize,result_394, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                    return __result392__;
                                                                                                    come_call_finalizer2(sSNameNode_finalize,result_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional604;
_Bool _if_conditional605;
_Bool _if_conditional606;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                        if(_if_conditional604=self!=((void*)0)&&self->value!=((void*)0),                                                                                                        _if_conditional604) {
                                                                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                        }
                                                                                                        if(_if_conditional605=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                        _if_conditional605) {
                                                                                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
                                                                                                        if(_if_conditional606=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                        _if_conditional606) {
                                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional607;
struct sCallerFuncNode* __result394__;
void* right_value584;
struct sCallerFuncNode* result_395;
_Bool _if_conditional608;
void* right_value585;
struct sNode* __dec_obj228;
_Bool _if_conditional609;
void* right_value586;
char* __dec_obj229;
_Bool _if_conditional610;
_Bool _if_conditional611;
void* right_value587;
char* __dec_obj230;
struct sCallerFuncNode* __result395__;
memset(&__result_obj__, 0, sizeof(void*));
right_value584 = (void*)0;
memset(&result_395, 0, sizeof(struct sCallerFuncNode*));
right_value585 = (void*)0;
right_value586 = (void*)0;
right_value587 = (void*)0;
                                                                                                        if(_if_conditional607=self==(void*)0,                                                                                                        _if_conditional607) {
                                                                                                            __result394__ = __result_obj__ = (void*)0;
                                                                                                            return __result394__;
                                                                                                        }
                                                                                                        result_395=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value584=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"))));
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(_if_conditional608=self!=((void*)0)&&self->value!=((void*)0),                                                                                                        _if_conditional608) {
                                                                                                            __dec_obj228=result_395->value;
                                                                                                            result_395->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value585=sNode_clone(self->value))));
                                                                                                            if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                            if(right_value585) { right_value585 = come_decrement_ref_count2(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        }
                                                                                                        if(_if_conditional609=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                        _if_conditional609) {
                                                                                                            __dec_obj229=result_395->value_source;
                                                                                                            result_395->value_source=(char*)come_increment_ref_count(((char*)(right_value586=string_clone(self->value_source))));
                                                                                                            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value586 = come_decrement_ref_count2(right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        if(_if_conditional610=self!=((void*)0),                                                                                                        _if_conditional610) {
                                                                                                            result_395->sline=self->sline;
                                                                                                        }
                                                                                                        if(_if_conditional611=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                        _if_conditional611) {
                                                                                                            __dec_obj230=result_395->sname;
                                                                                                            result_395->sname=(char*)come_increment_ref_count(((char*)(right_value587=string_clone(self->sname))));
                                                                                                            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value587 = come_decrement_ref_count2(right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        __result395__ = __result_obj__ = result_395;
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,result_395, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                        return __result395__;
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,result_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional613;
_Bool _if_conditional614;
_Bool _if_conditional615;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                            if(_if_conditional613=self!=((void*)0)&&self->value!=((void*)0),                                                                                                            _if_conditional613) {
                                                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                            }
                                                                                                            if(_if_conditional614=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                            _if_conditional614) {
                                                                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            }
                                                                                                            if(_if_conditional615=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                            _if_conditional615) {
                                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional616;
struct sCallerLineNode* __result397__;
void* right_value591;
struct sCallerLineNode* result_396;
_Bool _if_conditional617;
void* right_value592;
struct sNode* __dec_obj231;
_Bool _if_conditional618;
void* right_value593;
char* __dec_obj232;
_Bool _if_conditional619;
_Bool _if_conditional620;
void* right_value594;
char* __dec_obj233;
struct sCallerLineNode* __result398__;
memset(&__result_obj__, 0, sizeof(void*));
right_value591 = (void*)0;
memset(&result_396, 0, sizeof(struct sCallerLineNode*));
right_value592 = (void*)0;
right_value593 = (void*)0;
right_value594 = (void*)0;
                                                                                                            if(_if_conditional616=self==(void*)0,                                                                                                            _if_conditional616) {
                                                                                                                __result397__ = __result_obj__ = (void*)0;
                                                                                                                return __result397__;
                                                                                                            }
                                                                                                            result_396=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value591=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"))));
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            if(_if_conditional617=self!=((void*)0)&&self->value!=((void*)0),                                                                                                            _if_conditional617) {
                                                                                                                __dec_obj231=result_396->value;
                                                                                                                result_396->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value592=sNode_clone(self->value))));
                                                                                                                if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                if(right_value592) { right_value592 = come_decrement_ref_count2(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                            }
                                                                                                            if(_if_conditional618=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                            _if_conditional618) {
                                                                                                                __dec_obj232=result_396->value_source;
                                                                                                                result_396->value_source=(char*)come_increment_ref_count(((char*)(right_value593=string_clone(self->value_source))));
                                                                                                                __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                right_value593 = come_decrement_ref_count2(right_value593, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            if(_if_conditional619=self!=((void*)0),                                                                                                            _if_conditional619) {
                                                                                                                result_396->sline=self->sline;
                                                                                                            }
                                                                                                            if(_if_conditional620=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                            _if_conditional620) {
                                                                                                                __dec_obj233=result_396->sname;
                                                                                                                result_396->sname=(char*)come_increment_ref_count(((char*)(right_value594=string_clone(self->sname))));
                                                                                                                __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                right_value594 = come_decrement_ref_count2(right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            __result398__ = __result_obj__ = result_396;
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,result_396, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                            return __result398__;
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,result_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional622;
_Bool _if_conditional623;
_Bool _if_conditional624;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                if(_if_conditional622=self!=((void*)0)&&self->value!=((void*)0),                                                                                                                _if_conditional622) {
                                                                                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                }
                                                                                                                if(_if_conditional623=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                                _if_conditional623) {
                                                                                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                }
                                                                                                                if(_if_conditional624=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                                _if_conditional624) {
                                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional625;
struct sCallerSNameNode* __result400__;
void* right_value598;
struct sCallerSNameNode* result_397;
_Bool _if_conditional626;
void* right_value599;
struct sNode* __dec_obj234;
_Bool _if_conditional627;
void* right_value600;
char* __dec_obj235;
_Bool _if_conditional628;
_Bool _if_conditional629;
void* right_value601;
char* __dec_obj236;
struct sCallerSNameNode* __result401__;
memset(&__result_obj__, 0, sizeof(void*));
right_value598 = (void*)0;
memset(&result_397, 0, sizeof(struct sCallerSNameNode*));
right_value599 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
                                                                                                                if(_if_conditional625=self==(void*)0,                                                                                                                _if_conditional625) {
                                                                                                                    __result400__ = __result_obj__ = (void*)0;
                                                                                                                    return __result400__;
                                                                                                                }
                                                                                                                result_397=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value598=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"))));
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                if(_if_conditional626=self!=((void*)0)&&self->value!=((void*)0),                                                                                                                _if_conditional626) {
                                                                                                                    __dec_obj234=result_397->value;
                                                                                                                    result_397->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value599=sNode_clone(self->value))));
                                                                                                                    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value599) { right_value599 = come_decrement_ref_count2(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                }
                                                                                                                if(_if_conditional627=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                                _if_conditional627) {
                                                                                                                    __dec_obj235=result_397->value_source;
                                                                                                                    result_397->value_source=(char*)come_increment_ref_count(((char*)(right_value600=string_clone(self->value_source))));
                                                                                                                    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    right_value600 = come_decrement_ref_count2(right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                if(_if_conditional628=self!=((void*)0),                                                                                                                _if_conditional628) {
                                                                                                                    result_397->sline=self->sline;
                                                                                                                }
                                                                                                                if(_if_conditional629=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                                _if_conditional629) {
                                                                                                                    __dec_obj236=result_397->sname;
                                                                                                                    result_397->sname=(char*)come_increment_ref_count(((char*)(right_value601=string_clone(self->sname))));
                                                                                                                    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    right_value601 = come_decrement_ref_count2(right_value601, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                __result401__ = __result_obj__ = result_397;
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,result_397, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                return __result401__;
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,result_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_400;
unsigned int hash_401;
unsigned int it_402;
_Bool _while_condtional34;
_Bool _if_conditional632;
_Bool _if_conditional633;
struct sType* __result404__;
_Bool _if_conditional634;
_Bool _if_conditional635;
struct sType* __result405__;
struct sType* __result406__;
struct sType* __result407__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_400, 0, sizeof(struct sType*));
memset(&hash_401, 0, sizeof(unsigned int));
memset(&it_402, 0, sizeof(unsigned int));
                                                                                                                        memset(&default_value_400,0,sizeof(struct sType*));
                                                                                                                        hash_401=string_get_hash_key(((char*)key))%self->size;
                                                                                                                        it_402=hash_401;
                                                                                                                        while(_while_condtional34=(_Bool)1,                                                                                                                        _while_condtional34) {
                                                                                                                            if(_if_conditional632=self->item_existance[it_402],                                                                                                                            _if_conditional632) {
                                                                                                                                if(_if_conditional633=string_equals(self->keys[it_402],key),                                                                                                                                _if_conditional633) {
                                                                                                                                    __result404__ = __result_obj__ = self->items[it_402];
                                                                                                                                    come_call_finalizer2(sType_finalize,default_value_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                    return __result404__;
                                                                                                                                }
                                                                                                                                it_402++;
                                                                                                                                if(_if_conditional634=it_402>=self->size,                                                                                                                                _if_conditional634) {
                                                                                                                                    it_402=0;
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                    if(_if_conditional635=it_402==hash_401,                                                                                                                                    _if_conditional635) {
                                                                                                                                        __result405__ = __result_obj__ = default_value_400;
                                                                                                                                        come_call_finalizer2(sType_finalize,default_value_400, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                        return __result405__;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                __result406__ = __result_obj__ = default_value_400;
                                                                                                                                come_call_finalizer2(sType_finalize,default_value_400, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                return __result406__;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        __result407__ = __result_obj__ = default_value_400;
                                                                                                                        come_call_finalizer2(sType_finalize,default_value_400, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                        return __result407__;
                                                                                                                        come_call_finalizer2(sType_finalize,default_value_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_404;
unsigned int hash_405;
unsigned int it_406;
_Bool _while_condtional35;
_Bool _if_conditional637;
_Bool _if_conditional638;
struct sClass* __result408__;
_Bool _if_conditional645;
_Bool _if_conditional646;
struct sClass* __result409__;
struct sClass* __result410__;
struct sClass* __result411__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_404, 0, sizeof(struct sClass*));
memset(&hash_405, 0, sizeof(unsigned int));
memset(&it_406, 0, sizeof(unsigned int));
                                                                                                                            memset(&default_value_404,0,sizeof(struct sClass*));
                                                                                                                            hash_405=string_get_hash_key(((char*)key))%self->size;
                                                                                                                            it_406=hash_405;
                                                                                                                            while(_while_condtional35=(_Bool)1,                                                                                                                            _while_condtional35) {
                                                                                                                                if(_if_conditional637=self->item_existance[it_406],                                                                                                                                _if_conditional637) {
                                                                                                                                    if(_if_conditional638=string_equals(self->keys[it_406],key),                                                                                                                                    _if_conditional638) {
                                                                                                                                        __result408__ = __result_obj__ = self->items[it_406];
                                                                                                                                        come_call_finalizer2(sClass_finalize,default_value_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                        return __result408__;
                                                                                                                                    }
                                                                                                                                    it_406++;
                                                                                                                                    if(_if_conditional645=it_406>=self->size,                                                                                                                                    _if_conditional645) {
                                                                                                                                        it_406=0;
                                                                                                                                    }
                                                                                                                                    else {
                                                                                                                                        if(_if_conditional646=it_406==hash_405,                                                                                                                                        _if_conditional646) {
                                                                                                                                            __result409__ = __result_obj__ = default_value_404;
                                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_404, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                            return __result409__;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                    __result410__ = __result_obj__ = default_value_404;
                                                                                                                                    come_call_finalizer2(sClass_finalize,default_value_404, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                    return __result410__;
                                                                                                                                }
                                                                                                                            }
                                                                                                                            __result411__ = __result_obj__ = default_value_404;
                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_404, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                            return __result411__;
                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional639;
_Bool _if_conditional640;
_Bool _if_conditional644;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                            if(_if_conditional639=self!=((void*)0)&&self->mName!=((void*)0),                                                                                                                                            _if_conditional639) {
                                                                                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                            }
                                                                                                                                            if(_if_conditional640=self!=((void*)0)&&self->mFields!=((void*)0),                                                                                                                                            _if_conditional640) {
                                                                                                                                                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                            }
                                                                                                                                            if(_if_conditional644=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                                                                                            _if_conditional644) {
                                                                                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_407;
_Bool _while_condtional36;
struct list_item$1tuple2$2charphsTypephph* prev_it_408;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_407, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_408, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                                                                                    it_407=self->head;
                                                                                                                                                    while(_while_condtional36=it_407!=((void*)0),                                                                                                                                                    _while_condtional36) {
                                                                                                                                                        prev_it_408=it_407;
                                                                                                                                                        it_407=it_407->next;
                                                                                                                                                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_408, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional641;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                                            if(_if_conditional641=self!=((void*)0)&&self->item!=((void*)0),                                                                                                                                                            _if_conditional641) {
                                                                                                                                                                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional642;
_Bool _if_conditional643;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                                                    if(_if_conditional642=self!=((void*)0)&&self->v1!=((void*)0),                                                                                                                                                                    _if_conditional642) {
                                                                                                                                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                                                    }
                                                                                                                                                                    if(_if_conditional643=self!=((void*)0)&&self->v2!=((void*)0),                                                                                                                                                                    _if_conditional643) {
                                                                                                                                                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                                    }
}

static void sCastNode_finalize(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional658;
_Bool _if_conditional659;
_Bool _if_conditional660;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional658=self!=((void*)0)&&self->mType!=((void*)0),                                                                                            _if_conditional658) {
                                                                                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional659=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional659) {
                                                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional660=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional660) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional661;
struct sCastNode* __result417__;
void* right_value640;
struct sCastNode* result_434;
_Bool _if_conditional662;
void* right_value641;
struct sType* __dec_obj249;
_Bool _if_conditional663;
void* right_value642;
struct sNode* __dec_obj250;
_Bool _if_conditional664;
_Bool _if_conditional665;
void* right_value643;
char* __dec_obj251;
struct sCastNode* __result418__;
memset(&__result_obj__, 0, sizeof(void*));
right_value640 = (void*)0;
memset(&result_434, 0, sizeof(struct sCastNode*));
right_value641 = (void*)0;
right_value642 = (void*)0;
right_value643 = (void*)0;
                                                                                            if(_if_conditional661=self==(void*)0,                                                                                            _if_conditional661) {
                                                                                                __result417__ = __result_obj__ = (void*)0;
                                                                                                return __result417__;
                                                                                            }
                                                                                            result_434=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value640=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "sCastNode"))));
                                                                                            come_call_finalizer2(sCastNode_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional662=self!=((void*)0)&&self->mType!=((void*)0),                                                                                            _if_conditional662) {
                                                                                                __dec_obj249=result_434->mType;
                                                                                                result_434->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value641=sType_clone(self->mType))));
                                                                                                come_call_finalizer2(sType_finalize,__dec_obj249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sType_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional663=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional663) {
                                                                                                __dec_obj250=result_434->mLeft;
                                                                                                result_434->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value642=sNode_clone(self->mLeft))));
                                                                                                if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value642) { right_value642 = come_decrement_ref_count2(right_value642, ((struct sNode*)right_value642)->finalize, ((struct sNode*)right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional664=self!=((void*)0),                                                                                            _if_conditional664) {
                                                                                                result_434->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional665=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional665) {
                                                                                                __dec_obj251=result_434->sname;
                                                                                                result_434->sname=(char*)come_increment_ref_count(((char*)(right_value643=string_clone(self->sname))));
                                                                                                __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value643 = come_decrement_ref_count2(right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result418__ = __result_obj__ = result_434;
                                                                                            come_call_finalizer2(sCastNode_finalize,result_434, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result418__;
                                                                                            come_call_finalizer2(sCastNode_finalize,result_434, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParenNode_finalize(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional666;
_Bool _if_conditional667;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional666=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional666) {
                                                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional667=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional667) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional668;
struct sParenNode* __result420__;
void* right_value648;
struct sParenNode* result_436;
_Bool _if_conditional669;
void* right_value649;
struct sNode* __dec_obj252;
_Bool _if_conditional670;
_Bool _if_conditional671;
void* right_value650;
char* __dec_obj253;
struct sParenNode* __result421__;
memset(&__result_obj__, 0, sizeof(void*));
right_value648 = (void*)0;
memset(&result_436, 0, sizeof(struct sParenNode*));
right_value649 = (void*)0;
right_value650 = (void*)0;
                                                                                            if(_if_conditional668=self==(void*)0,                                                                                            _if_conditional668) {
                                                                                                __result420__ = __result_obj__ = (void*)0;
                                                                                                return __result420__;
                                                                                            }
                                                                                            result_436=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value648=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "sParenNode"))));
                                                                                            come_call_finalizer2(sParenNode_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional669=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional669) {
                                                                                                __dec_obj252=result_436->mLeft;
                                                                                                result_436->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value649=sNode_clone(self->mLeft))));
                                                                                                if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value649) { right_value649 = come_decrement_ref_count2(right_value649, ((struct sNode*)right_value649)->finalize, ((struct sNode*)right_value649)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional670=self!=((void*)0),                                                                                            _if_conditional670) {
                                                                                                result_436->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional671=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional671) {
                                                                                                __dec_obj253=result_436->sname;
                                                                                                result_436->sname=(char*)come_increment_ref_count(((char*)(right_value650=string_clone(self->sname))));
                                                                                                __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value650 = come_decrement_ref_count2(right_value650, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result421__ = __result_obj__ = result_436;
                                                                                            come_call_finalizer2(sParenNode_finalize,result_436, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result421__;
                                                                                            come_call_finalizer2(sParenNode_finalize,result_436, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__;
void* right_value655;
struct sNode* __result425__;
memset(&__result_obj__, 0, sizeof(void*));
right_value655 = (void*)0;
    __result425__ = __result_obj__ = ((struct sNode*)(right_value655=expression_node_v99(info)));
    if(right_value655) { right_value655 = come_decrement_ref_count2(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result425__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional672;
void* right_value656;
void* right_value657;
struct sNode* __dec_obj257;
struct sNode* __result426__;
_Bool _if_conditional673;
void* right_value658;
void* right_value659;
struct sNode* __dec_obj258;
struct sNode* __result427__;
struct sNode* __result428__;
memset(&__result_obj__, 0, sizeof(void*));
right_value656 = (void*)0;
right_value657 = (void*)0;
right_value658 = (void*)0;
right_value659 = (void*)0;
    if(_if_conditional672=strmemcmp(info->p,"or"),    _if_conditional672) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj257=node;
        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value657=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value656=sNode_clone(node)))),info))));
        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value656) { right_value656 = come_decrement_ref_count2(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(right_value657) { right_value657 = come_decrement_ref_count2(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result426__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result426__;
    }
    else {
        if(_if_conditional673=strmemcmp(info->p,"and"),        _if_conditional673) {
            info->p+=strlen("and");
            skip_spaces_and_lf(info);
            __dec_obj258=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value659=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value658=sNode_clone(node)))),info))));
            if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value658) { right_value658 = come_decrement_ref_count2(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(right_value659) { right_value659 = come_decrement_ref_count2(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
void* right_value660;
struct sNode* node_438;
void* right_value661;
struct sNode* __dec_obj259;
struct sNode* __result429__;
memset(&__result_obj__, 0, sizeof(void*));
right_value660 = (void*)0;
memset(&node_438, 0, sizeof(struct sNode*));
right_value661 = (void*)0;
    node_438=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value660=expression_node_v99(info))));
    if(right_value660) { right_value660 = come_decrement_ref_count2(right_value660, ((struct sNode*)right_value660)->finalize, ((struct sNode*)right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj259=node_438;
    node_438=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value661=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_438),info))));
    if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value661) { right_value661 = come_decrement_ref_count2(right_value661, ((struct sNode*)right_value661)->finalize, ((struct sNode*)right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result429__ = __result_obj__ = node_438;
    if(node_438) { node_438 = come_decrement_ref_count2(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result429__;
    if(node_438) { node_438 = come_decrement_ref_count2(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
void* __result_obj__;
char* __dec_obj260;
void* right_value662;
struct sType* __dec_obj261;
void* right_value663;
char* __dec_obj262;
struct sNode* __dec_obj263;
char* __dec_obj264;
void* right_value673;
struct list$1tuple2$2sTypephcharphph* __dec_obj270;
void* right_value674;
char* __dec_obj271;
struct sGlobalVariable* __result436__;
memset(&__result_obj__, 0, sizeof(void*));
right_value662 = (void*)0;
right_value663 = (void*)0;
right_value673 = (void*)0;
right_value674 = (void*)0;
    self->sline=info->sline;
    __dec_obj260=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj261=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value662=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj262=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value663=__builtin_string(name))));
    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj263=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj264=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj270=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value673=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj271=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value674=__builtin_string(info->sname))));
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value674 = come_decrement_ref_count2(right_value674, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional674;
struct list$1tuple2$2sTypephcharphph* __result430__;
void* right_value664;
void* right_value665;
struct list$1tuple2$2sTypephcharphph* result_441;
struct list_item$1tuple2$2sTypephcharphph* it_442;
_Bool _while_condtional39;
void* right_value672;
struct list$1tuple2$2sTypephcharphph* __result435__;
memset(&__result_obj__, 0, sizeof(void*));
right_value664 = (void*)0;
right_value665 = (void*)0;
memset(&result_441, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_442, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value672 = (void*)0;
        if(_if_conditional674=self==((void*)0),        _if_conditional674) {
            __result430__ = __result_obj__ = ((void*)0);
            return __result430__;
        }
        result_441=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value665=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value664=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 142, "list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value665, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_442=self->head;
        while(_while_condtional39=it_442!=((void*)0),        _while_condtional39) {
            list$1tuple2$2sTypephcharphph_add(result_441,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value672=tuple2$2sTypephcharphp_clone(it_442->item)))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_442=it_442->next;
        }
        __result435__ = __result_obj__ = result_441;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_441, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result435__;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2sTypephcharphph* it_439;
_Bool _while_condtional38;
struct list_item$1tuple2$2sTypephcharphph* prev_it_440;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_439, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&prev_it_440, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                it_439=self->head;
                while(_while_condtional38=it_439!=((void*)0),                _while_condtional38) {
                    prev_it_440=it_439;
                    it_439=it_439->next;
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,prev_it_440, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional675;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional675=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional675) {
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional676;
_Bool _if_conditional677;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional676=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional676) {
                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional677=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional677) {
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional678;
void* right_value666;
struct list_item$1tuple2$2sTypephcharphph* litem_443;
struct tuple2$2sTypephcharph* __dec_obj265;
_Bool _if_conditional681;
void* right_value667;
struct list_item$1tuple2$2sTypephcharphph* litem_444;
struct tuple2$2sTypephcharph* __dec_obj266;
void* right_value668;
struct list_item$1tuple2$2sTypephcharphph* litem_445;
struct tuple2$2sTypephcharph* __dec_obj267;
struct list$1tuple2$2sTypephcharphph* __result432__;
memset(&__result_obj__, 0, sizeof(void*));
right_value666 = (void*)0;
memset(&litem_443, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value667 = (void*)0;
memset(&litem_444, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value668 = (void*)0;
memset(&litem_445, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                if(_if_conditional678=self->len==0,                _if_conditional678) {
                    litem_443=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value666=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_443->prev=((void*)0);
                    litem_443->next=((void*)0);
                    __dec_obj265=litem_443->item;
                    litem_443->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_443;
                    self->head=litem_443;
                }
                else {
                    if(_if_conditional681=self->len==1,                    _if_conditional681) {
                        litem_444=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value667=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_444->prev=self->head;
                        litem_444->next=((void*)0);
                        __dec_obj266=litem_444->item;
                        litem_444->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_444;
                        self->head->next=litem_444;
                    }
                    else {
                        litem_445=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value668=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_445->prev=self->tail;
                        litem_445->next=((void*)0);
                        __dec_obj267=litem_445->item;
                        litem_445->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_445;
                        self->tail=litem_445;
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
_Bool _if_conditional679;
_Bool _if_conditional680;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional679=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional679) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional680=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional680) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional682;
struct tuple2$2sTypephcharph* __result433__;
void* right_value669;
struct tuple2$2sTypephcharph* result_446;
_Bool _if_conditional683;
void* right_value670;
struct sType* __dec_obj268;
_Bool _if_conditional684;
void* right_value671;
char* __dec_obj269;
struct tuple2$2sTypephcharph* __result434__;
memset(&__result_obj__, 0, sizeof(void*));
right_value669 = (void*)0;
memset(&result_446, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value670 = (void*)0;
right_value671 = (void*)0;
                if(_if_conditional682=self==(void*)0,                _if_conditional682) {
                    __result433__ = __result_obj__ = (void*)0;
                    return __result433__;
                }
                result_446=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value669=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharphp_clone", 3, "tuple2$2sTypephcharph"))));
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional683=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional683) {
                    __dec_obj268=result_446->v1;
                    result_446->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value670=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional684=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional684) {
                    __dec_obj269=result_446->v2;
                    result_446->v2=(char*)come_increment_ref_count(((char*)(right_value671=string_clone(self->v2))));
                    __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value671 = come_decrement_ref_count2(right_value671, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result434__ = __result_obj__ = result_446;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_446, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result434__;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_446, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value675;
char* __result438__;
memset(&__result_obj__, 0, sizeof(void*));
right_value675 = (void*)0;
    __result438__ = __result_obj__ = ((char*)(right_value675=__builtin_string(self->sname)));
    right_value675 = come_decrement_ref_count2(right_value675, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value676;
char* __result440__;
memset(&__result_obj__, 0, sizeof(void*));
right_value676 = (void*)0;
    __result440__ = __result_obj__ = ((char*)(right_value676=__builtin_string("sGlobalVariable")));
    right_value676 = come_decrement_ref_count2(right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result440__;
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value677;
struct sType* type_447;
void* right_value678;
char* name_448;
struct sNode* right_node_449;
void* right_value679;
char* array_initializer_450;
_Bool _if_conditional692;
struct list$1tuple2$2sTypephcharphph* o2_saved_451;
struct tuple2$2sTypephcharph* it_454;
struct tuple2$2sTypephcharph* multiple_assign_var9;
struct sType* type_457;
char* name_458;
_Bool _if_conditional697;
void* right_value680;
void* right_value681;
_Bool _if_conditional698;
_Bool _if_conditional699;
void* right_value682;
_Bool _if_conditional700;
_Bool _if_conditional701;
_Bool __result448__;
void* right_value683;
struct CVALUE* come_value_459;
_Bool _if_conditional702;
void* right_value684;
_Bool _if_conditional703;
void* right_value685;
_Bool __result449__;
memset(&__result_obj__, 0, sizeof(void*));
right_value677 = (void*)0;
memset(&type_447, 0, sizeof(struct sType*));
right_value678 = (void*)0;
memset(&name_448, 0, sizeof(char*));
memset(&right_node_449, 0, sizeof(struct sNode*));
right_value679 = (void*)0;
memset(&array_initializer_450, 0, sizeof(char*));
memset(&o2_saved_451, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_454, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_457, 0, sizeof(struct sType*));
memset(&name_458, 0, sizeof(char*));
memset(&type_457, 0, sizeof(struct sType*));
memset(&name_458, 0, sizeof(char*));
right_value680 = (void*)0;
right_value681 = (void*)0;
right_value682 = (void*)0;
right_value683 = (void*)0;
memset(&come_value_459, 0, sizeof(struct CVALUE*));
right_value684 = (void*)0;
right_value685 = (void*)0;
    type_447=(struct sType*)come_increment_ref_count(((struct sType*)(right_value677=sType_clone(self->type))));
    come_call_finalizer2(sType_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    name_448=(char*)come_increment_ref_count(((char*)(right_value678=string_clone(self->name))));
    right_value678 = come_decrement_ref_count2(right_value678, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_node_449=self->right_node;
    array_initializer_450=(char*)come_increment_ref_count(((char*)(right_value679=string_clone(self->array_initializer))));
    right_value679 = come_decrement_ref_count2(right_value679, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->multiple_declare) {
        for(        o2_saved_451=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_454=list$1tuple2$2sTypephcharphph_begin((o2_saved_451));        !list$1tuple2$2sTypephcharphph_end((o2_saved_451));        it_454=list$1tuple2$2sTypephcharphph_next((o2_saved_451))        ){
            multiple_assign_var9=it_454;
            type_457=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_458=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(_if_conditional697=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional697) {
            }
            else {
                add_come_code_at_source_head(info,"%s;\n",((char*)(right_value680=make_define_var(type_457,name_458,(_Bool)0,info))));
                right_value680 = come_decrement_ref_count2(right_value680, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_458 = come_decrement_ref_count2(name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_448,(struct sType*)come_increment_ref_count(((struct sType*)(right_value681=sType_clone(type_447)))),info);
        come_call_finalizer2(sType_finalize,right_value681, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(array_initializer_450) {
            if(_if_conditional699=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional699) {
            }
            else {
                add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value682=make_define_var(type_447,name_448,(_Bool)0,info))),array_initializer_450);
                right_value682 = come_decrement_ref_count2(right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        else {
            if(right_node_449) {
                if(_if_conditional701=!node_compile(right_node_449,info),                _if_conditional701) {
                    __result448__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,type_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_448 = come_decrement_ref_count2(name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    array_initializer_450 = come_decrement_ref_count2(array_initializer_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result448__;
                }
                come_value_459=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value683=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value683, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                if(_if_conditional702=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional702) {
                }
                else {
                    add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value684=make_define_var(type_447,name_448,(_Bool)0,info))),come_value_459->c_value);
                    right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(CVALUE_finalize,come_value_459, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional703=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional703) {
                }
                else {
                    add_come_code_at_source_head(info,"%s;\n",((char*)(right_value685=make_define_var(type_447,name_448,(_Bool)0,info))));
                    right_value685 = come_decrement_ref_count2(right_value685, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    __result449__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,type_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_448 = come_decrement_ref_count2(name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_450 = come_decrement_ref_count2(array_initializer_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result449__;
    come_call_finalizer2(sType_finalize,type_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_448 = come_decrement_ref_count2(name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_450 = come_decrement_ref_count2(array_initializer_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional693;
struct tuple2$2sTypephcharph* result_452;
struct tuple2$2sTypephcharph* __result441__;
_Bool _if_conditional694;
struct tuple2$2sTypephcharph* __result442__;
struct tuple2$2sTypephcharph* result_453;
struct tuple2$2sTypephcharph* __result443__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_452, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_453, 0, sizeof(struct tuple2$2sTypephcharph*));
            if(_if_conditional693=self==((void*)0),            _if_conditional693) {
                memset(&result_452,0,sizeof(struct tuple2$2sTypephcharph*));
                __result441__ = __result_obj__ = result_452;
                return __result441__;
            }
            self->it=self->head;
            if(self->it) {
                __result442__ = __result_obj__ = self->it->item;
                return __result442__;
            }
            memset(&result_453,0,sizeof(struct tuple2$2sTypephcharph*));
            __result443__ = __result_obj__ = result_453;
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
_Bool _if_conditional695;
struct tuple2$2sTypephcharph* result_455;
struct tuple2$2sTypephcharph* __result445__;
_Bool _if_conditional696;
struct tuple2$2sTypephcharph* __result446__;
struct tuple2$2sTypephcharph* result_456;
struct tuple2$2sTypephcharph* __result447__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_455, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_456, 0, sizeof(struct tuple2$2sTypephcharph*));
            if(_if_conditional695=self==((void*)0)||self->it==((void*)0),            _if_conditional695) {
                memset(&result_455,0,sizeof(struct tuple2$2sTypephcharph*));
                __result445__ = __result_obj__ = result_455;
                return __result445__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result446__ = __result_obj__ = self->it->item;
                return __result446__;
            }
            memset(&result_456,0,sizeof(struct tuple2$2sTypephcharph*));
            __result447__ = __result_obj__ = result_456;
            return __result447__;
}

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value686;
struct sType* __dec_obj272;
void* right_value687;
char* __dec_obj273;
char* __dec_obj274;
void* right_value688;
struct list$1tuple2$2sTypephcharphph* __dec_obj275;
void* right_value689;
char* __dec_obj276;
struct sExternalGlobalVariable* __result450__;
memset(&__result_obj__, 0, sizeof(void*));
right_value686 = (void*)0;
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
    __dec_obj272=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value686=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj273=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value687=__builtin_string(name))));
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj274=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj275=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value688=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj276=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value689=__builtin_string(info->sname))));
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value689 = come_decrement_ref_count2(right_value689, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value690;
char* __result452__;
memset(&__result_obj__, 0, sizeof(void*));
right_value690 = (void*)0;
    __result452__ = __result_obj__ = ((char*)(right_value690=__builtin_string(self->sname)));
    right_value690 = come_decrement_ref_count2(right_value690, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value691;
char* __result454__;
memset(&__result_obj__, 0, sizeof(void*));
right_value691 = (void*)0;
    __result454__ = __result_obj__ = ((char*)(right_value691=__builtin_string("sExternalGlobalVariable")));
    right_value691 = come_decrement_ref_count2(right_value691, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result454__;
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_460;
char* name_461;
_Bool _if_conditional709;
struct list$1tuple2$2sTypephcharphph* o2_saved_462;
struct tuple2$2sTypephcharph* it_463;
struct tuple2$2sTypephcharph* multiple_assign_var10;
struct sType* type_464;
char* name_465;
void* right_value692;
_Bool _if_conditional710;
void* right_value693;
void* right_value694;
_Bool _if_conditional711;
void* right_value695;
_Bool __result455__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_460, 0, sizeof(struct sType*));
memset(&name_461, 0, sizeof(char*));
memset(&o2_saved_462, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_463, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_464, 0, sizeof(struct sType*));
memset(&name_465, 0, sizeof(char*));
memset(&type_464, 0, sizeof(struct sType*));
memset(&name_465, 0, sizeof(char*));
right_value692 = (void*)0;
right_value693 = (void*)0;
right_value694 = (void*)0;
right_value695 = (void*)0;
    type_460=self->type;
    name_461=(char*)come_increment_ref_count(self->name);
    if(self->multiple_declare) {
        for(        o2_saved_462=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_463=list$1tuple2$2sTypephcharphph_begin((o2_saved_462));        !list$1tuple2$2sTypephcharphph_end((o2_saved_462));        it_463=list$1tuple2$2sTypephcharphph_next((o2_saved_462))        ){
            multiple_assign_var10=it_463;
            type_464=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_465=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            add_variable_to_global_table(name_465,(struct sType*)come_increment_ref_count(((struct sType*)(right_value692=sType_clone(type_464)))),info);
            come_call_finalizer2(sType_finalize,right_value692, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional710=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional710) {
            }
            else {
                add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value693=make_define_var(type_464,name_465,(_Bool)0,info))));
                right_value693 = come_decrement_ref_count2(right_value693, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_464, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_465 = come_decrement_ref_count2(name_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_462, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_461,(struct sType*)come_increment_ref_count(((struct sType*)(right_value694=sType_clone(type_460)))),info);
        come_call_finalizer2(sType_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional711=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),        _if_conditional711) {
        }
        else {
            add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value695=make_define_var(type_460,name_461,(_Bool)0,info))));
            right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __result455__ = (_Bool)1;
    name_461 = come_decrement_ref_count2(name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result455__;
    name_461 = come_decrement_ref_count2(name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_466;
void* right_value696;
void* right_value697;
struct buffer* buf_467;
_Bool _if_conditional712;
void* right_value698;
char* __dec_obj277;
_Bool _if_conditional713;
int i_468;
_Bool _if_conditional714;
void* right_value699;
char* __dec_obj278;
void* right_value700;
char* __dec_obj279;
int i_469;
_Bool _if_conditional715;
_Bool _if_conditional716;
void* right_value701;
void* right_value702;
char* __result457__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_466, 0, sizeof(char*));
right_value696 = (void*)0;
right_value697 = (void*)0;
memset(&buf_467, 0, sizeof(struct buffer*));
right_value698 = (void*)0;
memset(&i_468, 0, sizeof(int));
right_value699 = (void*)0;
right_value700 = (void*)0;
memset(&i_469, 0, sizeof(int));
right_value701 = (void*)0;
right_value702 = (void*)0;
    buf_467=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value697=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value696=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2794, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional712=string_operator_not_equals(obj_type->mOriginalTypeName,""),    _if_conditional712) {
        __dec_obj277=struct_name_466;
        struct_name_466=(char*)come_increment_ref_count(((char*)(right_value698=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value698 = come_decrement_ref_count2(right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional713=!obj_type->mClass->mStruct,        _if_conditional713) {
            for(            i_468=0;            i_468<obj_type->mOriginalTypeNamePointerNum;            i_468++            ){
                buffer_append_str(buf_467,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj278=struct_name_466;
            struct_name_466=(char*)come_increment_ref_count(((char*)(right_value699=__builtin_string(obj_type->mClass->mName))));
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value699 = come_decrement_ref_count2(right_value699, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj279=struct_name_466;
            struct_name_466=(char*)come_increment_ref_count(((char*)(right_value700=create_generics_name(obj_type,info))));
            __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value700 = come_decrement_ref_count2(right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_469=0;            i_469<obj_type->mPointerNum;            i_469++            ){
                buffer_append_str(buf_467,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_467,"a");
    }
    if(_if_conditional716=!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0,    _if_conditional716) {
        buffer_append_str(buf_467,"pa");
    }
    __result457__ = __result_obj__ = ((char*)(right_value702=xsprintf("%s%s_%s",struct_name_466,((char*)(right_value701=buffer_to_string(buf_467))),fun_name)));
    struct_name_466 = come_decrement_ref_count2(struct_name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value701 = come_decrement_ref_count2(right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result457__;
    struct_name_466 = come_decrement_ref_count2(struct_name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool multiple_declare_470;
char* p_471;
int sline_472;
_Bool _if_conditional717;
void* right_value703;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_473;
char* name_474;
_Bool err_475;
_Bool _if_conditional718;
void* right_value704;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type_476;
char* name_477;
_Bool _if_conditional719;
_Bool _if_conditional720;
void* right_value705;
void* right_value706;
struct list$1tuple2$2sTypephcharphph* multiple_declare_478;
void* right_value707;
struct tuple3$3sTypephcharphbool* multiple_assign_var13;
struct sType* base_type_479;
char* name_480;
_Bool err_481;
_Bool _if_conditional721;
void* right_value708;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_482;
char* var_name_483;
void* right_value712;
void* right_value713;
_Bool _while_condtional40;
void* right_value714;
struct tuple2$2sTypephcharph* multiple_assign_var15;
struct sType* type2_487;
char* var_name_488;
void* right_value715;
void* right_value716;
struct sNode* right_node_489;
char* array_initializer_490;
void* right_value717;
char* var_name2_491;
_Bool _if_conditional724;
_Bool _if_conditional725;
void* right_value718;
void* right_value719;
struct sNode* _inf_value26;
struct sExternalGlobalVariable* _inf_obj_value26;
void* right_value726;
struct sNode* __result462__;
void* right_value727;
void* right_value728;
struct sNode* _inf_value27;
struct sGlobalVariable* _inf_obj_value27;
void* right_value737;
struct sNode* __result465__;
void* right_value738;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* result_type_494;
char* var_name_495;
_Bool err_496;
_Bool _if_conditional754;
struct sNode* right_node_497;
char* array_initializer_498;
_Bool _if_conditional755;
_Bool _if_conditional756;
void* right_value739;
void* right_value740;
struct buffer* buf_499;
_Bool squort_500;
_Bool dquort_501;
int nest_502;
_Bool _while_condtional41;
_Bool _if_conditional757;
_Bool _if_conditional758;
_Bool _if_conditional759;
_Bool _if_conditional760;
_Bool _if_conditional761;
_Bool _if_conditional762;
_Bool _if_conditional763;
_Bool _if_conditional764;
void* right_value741;
char* __dec_obj297;
void* right_value742;
struct sNode* __dec_obj298;
_Bool _if_conditional765;
_Bool _if_conditional766;
void* right_value743;
void* right_value744;
struct sNode* _inf_value28;
struct sExternalGlobalVariable* _inf_obj_value28;
void* right_value751;
struct sNode* __result468__;
void* right_value752;
void* right_value753;
struct sNode* _inf_value29;
struct sGlobalVariable* _inf_obj_value29;
void* right_value762;
struct sNode* __result471__;
struct sNode* __result472__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&multiple_declare_470, 0, sizeof(_Bool));
memset(&p_471, 0, sizeof(char*));
memset(&sline_472, 0, sizeof(int));
right_value703 = (void*)0;
memset(&type_473, 0, sizeof(struct sType*));
memset(&name_474, 0, sizeof(char*));
memset(&err_475, 0, sizeof(_Bool));
memset(&type_473, 0, sizeof(struct sType*));
memset(&name_474, 0, sizeof(char*));
memset(&err_475, 0, sizeof(_Bool));
right_value704 = (void*)0;
memset(&type_476, 0, sizeof(struct sType*));
memset(&name_477, 0, sizeof(char*));
memset(&type_476, 0, sizeof(struct sType*));
memset(&name_477, 0, sizeof(char*));
right_value705 = (void*)0;
right_value706 = (void*)0;
memset(&multiple_declare_478, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
right_value707 = (void*)0;
memset(&base_type_479, 0, sizeof(struct sType*));
memset(&name_480, 0, sizeof(char*));
memset(&err_481, 0, sizeof(_Bool));
memset(&base_type_479, 0, sizeof(struct sType*));
memset(&name_480, 0, sizeof(char*));
memset(&err_481, 0, sizeof(_Bool));
right_value708 = (void*)0;
memset(&type2_482, 0, sizeof(struct sType*));
memset(&var_name_483, 0, sizeof(char*));
memset(&type2_482, 0, sizeof(struct sType*));
memset(&var_name_483, 0, sizeof(char*));
right_value712 = (void*)0;
right_value713 = (void*)0;
right_value714 = (void*)0;
memset(&type2_487, 0, sizeof(struct sType*));
memset(&var_name_488, 0, sizeof(char*));
memset(&type2_487, 0, sizeof(struct sType*));
memset(&var_name_488, 0, sizeof(char*));
right_value715 = (void*)0;
right_value716 = (void*)0;
memset(&right_node_489, 0, sizeof(struct sNode*));
memset(&array_initializer_490, 0, sizeof(char*));
right_value717 = (void*)0;
memset(&var_name2_491, 0, sizeof(char*));
right_value718 = (void*)0;
right_value719 = (void*)0;
right_value726 = (void*)0;
right_value727 = (void*)0;
right_value728 = (void*)0;
right_value737 = (void*)0;
right_value738 = (void*)0;
memset(&result_type_494, 0, sizeof(struct sType*));
memset(&var_name_495, 0, sizeof(char*));
memset(&err_496, 0, sizeof(_Bool));
memset(&result_type_494, 0, sizeof(struct sType*));
memset(&var_name_495, 0, sizeof(char*));
memset(&err_496, 0, sizeof(_Bool));
memset(&right_node_497, 0, sizeof(struct sNode*));
memset(&array_initializer_498, 0, sizeof(char*));
right_value739 = (void*)0;
right_value740 = (void*)0;
memset(&buf_499, 0, sizeof(struct buffer*));
memset(&squort_500, 0, sizeof(_Bool));
memset(&dquort_501, 0, sizeof(_Bool));
memset(&nest_502, 0, sizeof(int));
right_value741 = (void*)0;
right_value742 = (void*)0;
right_value743 = (void*)0;
right_value744 = (void*)0;
right_value751 = (void*)0;
right_value752 = (void*)0;
right_value753 = (void*)0;
right_value762 = (void*)0;
    multiple_declare_470=(_Bool)0;
    {
        p_471=info->p;
        sline_472=info->sline;
        if(_if_conditional717=xisalpha(*info->p)||*info->p==95,        _if_conditional717) {
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value703=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_473=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_474=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_475=multiple_assign_var11->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value703, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(err_475) {
                multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value704=parse_variable_name((struct sType*)come_increment_ref_count(type_473),(_Bool)1,info)));
                type_476=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_477=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value704, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional719=!is_type_name(name_477,info)&&*info->p==44,                _if_conditional719) {
                    multiple_declare_470=(_Bool)1;
                }
                come_call_finalizer2(sType_finalize,type_476, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_477 = come_decrement_ref_count2(name_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,type_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_474 = come_decrement_ref_count2(name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_471;
        info->sline=sline_472;
    }
    if(multiple_declare_470) {
        multiple_declare_478=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value706=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value705=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "05function.c", 2861, "list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value706, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(right_value707=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_479=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
        name_480=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        err_481=multiple_assign_var13->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional721=!err_481,        _if_conditional721) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var14=((struct tuple2$2sTypephcharph*)(right_value708=parse_variable_name((struct sType*)come_increment_ref_count(base_type_479),(_Bool)1,info)));
        type2_482=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
        var_name_483=(char*)come_increment_ref_count(multiple_assign_var14->v2);
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        list$1tuple2$2sTypephcharphph_push_back(multiple_declare_478,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value713=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value712=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function.c", 2874, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type2_482),(char*)come_increment_ref_count(var_name_483))))));
        come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value712, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional40=*info->p==44,        _while_condtional40) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var15=((struct tuple2$2sTypephcharph*)(right_value714=parse_variable_name((struct sType*)come_increment_ref_count(base_type_479),(_Bool)0,info)));
            type2_487=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            var_name_488=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_478,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value716=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value715=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function.c", 2884, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type2_487),(char*)come_increment_ref_count(var_name_488))))));
            come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value716, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,type2_487, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_489=((void*)0);
        array_initializer_490=((void*)0);
        var_name2_491=(char*)come_increment_ref_count(((char*)(right_value717=__builtin_string(""))));
        right_value717 = come_decrement_ref_count2(right_value717, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(base_type_479->mExtern) {
            if(right_node_489) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2896, "struct sNode");
            _inf_obj_value26=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value719=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value718=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "05function.c", 2896, "sExternalGlobalVariable")))),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_478),base_type_479,(char*)come_increment_ref_count(var_name2_491),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value26->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value26->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value26->sline=(void*)sExternalGlobalVariable_sline;
            _inf_value26->sname=(void*)sExternalGlobalVariable_sname;
            _inf_value26->terminated=(void*)sExternalGlobalVariable_terminated;
            _inf_value26->kind=(void*)sExternalGlobalVariable_kind;
            __result462__ = __result_obj__ = ((struct sNode*)(right_value726=_inf_value26));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_479, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_480 = come_decrement_ref_count2(name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_482, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_489) { right_node_489 = come_decrement_ref_count2(right_node_489, ((struct sNode*)right_node_489)->finalize, ((struct sNode*)right_node_489)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_490 = come_decrement_ref_count2(array_initializer_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_491 = come_decrement_ref_count2(var_name2_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value718, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value719, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value726) { right_value726 = come_decrement_ref_count2(right_value726, ((struct sNode*)right_value726)->finalize, ((struct sNode*)right_value726)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result462__;
        }
        else {
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2899, "struct sNode");
            _inf_obj_value27=come_increment_ref_count(((struct sGlobalVariable*)(right_value728=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value727=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "05function.c", 2899, "sGlobalVariable")))),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_478),base_type_479,(char*)come_increment_ref_count(var_name2_491),(struct sNode*)come_increment_ref_count(right_node_489),(char*)come_increment_ref_count(array_initializer_490),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sGlobalVariable_finalize;
            _inf_value27->clone=(void*)sGlobalVariable_clone;
            _inf_value27->compile=(void*)sGlobalVariable_compile;
            _inf_value27->sline=(void*)sGlobalVariable_sline;
            _inf_value27->sname=(void*)sGlobalVariable_sname;
            _inf_value27->terminated=(void*)sGlobalVariable_terminated;
            _inf_value27->kind=(void*)sGlobalVariable_kind;
            __result465__ = __result_obj__ = ((struct sNode*)(right_value737=_inf_value27));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_479, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_480 = come_decrement_ref_count2(name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_482, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_489) { right_node_489 = come_decrement_ref_count2(right_node_489, ((struct sNode*)right_node_489)->finalize, ((struct sNode*)right_node_489)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_490 = come_decrement_ref_count2(array_initializer_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_491 = come_decrement_ref_count2(var_name2_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGlobalVariable_finalize,right_value727, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGlobalVariable_finalize,right_value728, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value737) { right_value737 = come_decrement_ref_count2(right_value737, ((struct sNode*)right_value737)->finalize, ((struct sNode*)right_value737)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result465__;
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,base_type_479, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_480 = come_decrement_ref_count2(name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_482, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_483 = come_decrement_ref_count2(var_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_489) { right_node_489 = come_decrement_ref_count2(right_node_489, ((struct sNode*)right_node_489)->finalize, ((struct sNode*)right_node_489)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_490 = come_decrement_ref_count2(array_initializer_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        var_name2_491 = come_decrement_ref_count2(var_name2_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(right_value738=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        result_type_494=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
        var_name_495=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        err_496=multiple_assign_var16->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value738, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional754=!err_496,        _if_conditional754) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        right_node_497=((void*)0);
        array_initializer_498=((void*)0);
        if(_if_conditional755=*info->p==61,        _if_conditional755) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional756=*info->p==123,            _if_conditional756) {
                buf_499=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value740=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value739=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2918, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value739, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buffer_append_char(buf_499,*info->p);
                info->p++;
                squort_500=(_Bool)0;
                dquort_501=(_Bool)0;
                nest_502=1;
                while(_while_condtional41=1,                _while_condtional41) {
                    if(_if_conditional757=*info->p==0,                    _if_conditional757) {
                        err_msg(info,"unexpected source end in array initiailizer");
                        exit(2);
                    }
                    else {
                        if(_if_conditional758=*info->p==92,                        _if_conditional758) {
                            buffer_append_char(buf_499,*info->p);
                            info->p++;
                            buffer_append_char(buf_499,*info->p);
                            info->p++;
                        }
                        else {
                            if(_if_conditional759=!squort_500&&*info->p==34,                            _if_conditional759) {
                                buffer_append_char(buf_499,*info->p);
                                info->p++;
                                dquort_501=!dquort_501;
                            }
                            else {
                                if(_if_conditional760=!dquort_501&&*info->p==39,                                _if_conditional760) {
                                    buffer_append_char(buf_499,*info->p);
                                    info->p++;
                                    squort_500=!squort_500;
                                }
                                else {
                                    if(_if_conditional761=squort_500||dquort_501,                                    _if_conditional761) {
                                        buffer_append_char(buf_499,*info->p);
                                        info->p++;
                                    }
                                    else {
                                        if(_if_conditional762=*info->p==123,                                        _if_conditional762) {
                                            nest_502++;
                                            buffer_append_char(buf_499,*info->p);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional763=*info->p==125,                                            _if_conditional763) {
                                                nest_502--;
                                                buffer_append_char(buf_499,*info->p);
                                                info->p++;
                                                if(_if_conditional764=nest_502==0,                                                _if_conditional764) {
                                                    skip_spaces_and_lf(info);
                                                    break;
                                                }
                                            }
                                            else {
                                                buffer_append_char(buf_499,*info->p);
                                                info->p++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                __dec_obj297=array_initializer_498;
                array_initializer_498=(char*)come_increment_ref_count(((char*)(right_value741=buffer_to_string(buf_499))));
                __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value741 = come_decrement_ref_count2(right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,buf_499, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                parse_sharp_v5(info);
                __dec_obj298=right_node_497;
                right_node_497=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value742=expression_v13(info))));
                if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value742) { right_value742 = come_decrement_ref_count2(right_value742, ((struct sNode*)right_value742)->finalize, ((struct sNode*)right_value742)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                parse_sharp_v5(info);
            }
        }
        if(result_type_494->mExtern) {
            if(right_node_497) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2985, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value744=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value743=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "05function.c", 2985, "sExternalGlobalVariable")))),((void*)0),result_type_494,(char*)come_increment_ref_count(var_name_495),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value28->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value28->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value28->sline=(void*)sExternalGlobalVariable_sline;
            _inf_value28->sname=(void*)sExternalGlobalVariable_sname;
            _inf_value28->terminated=(void*)sExternalGlobalVariable_terminated;
            _inf_value28->kind=(void*)sExternalGlobalVariable_kind;
            __result468__ = __result_obj__ = ((struct sNode*)(right_value751=_inf_value28));
            come_call_finalizer2(sType_finalize,result_type_494, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_495 = come_decrement_ref_count2(var_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_497) { right_node_497 = come_decrement_ref_count2(right_node_497, ((struct sNode*)right_node_497)->finalize, ((struct sNode*)right_node_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_498 = come_decrement_ref_count2(array_initializer_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value743, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value744, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value751) { right_value751 = come_decrement_ref_count2(right_value751, ((struct sNode*)right_value751)->finalize, ((struct sNode*)right_value751)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result468__;
        }
        else {
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2988, "struct sNode");
            _inf_obj_value29=come_increment_ref_count(((struct sGlobalVariable*)(right_value753=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value752=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "05function.c", 2988, "sGlobalVariable")))),((void*)0),result_type_494,(char*)come_increment_ref_count(var_name_495),(struct sNode*)come_increment_ref_count(right_node_497),(char*)come_increment_ref_count(array_initializer_498),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sGlobalVariable_finalize;
            _inf_value29->clone=(void*)sGlobalVariable_clone;
            _inf_value29->compile=(void*)sGlobalVariable_compile;
            _inf_value29->sline=(void*)sGlobalVariable_sline;
            _inf_value29->sname=(void*)sGlobalVariable_sname;
            _inf_value29->terminated=(void*)sGlobalVariable_terminated;
            _inf_value29->kind=(void*)sGlobalVariable_kind;
            __result471__ = __result_obj__ = ((struct sNode*)(right_value762=_inf_value29));
            come_call_finalizer2(sType_finalize,result_type_494, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_495 = come_decrement_ref_count2(var_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_497) { right_node_497 = come_decrement_ref_count2(right_node_497, ((struct sNode*)right_node_497)->finalize, ((struct sNode*)right_node_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_498 = come_decrement_ref_count2(array_initializer_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGlobalVariable_finalize,right_value752, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGlobalVariable_finalize,right_value753, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value762) { right_value762 = come_decrement_ref_count2(right_value762, ((struct sNode*)right_value762)->finalize, ((struct sNode*)right_value762)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result471__;
        }
        come_call_finalizer2(sType_finalize,result_type_494, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_495 = come_decrement_ref_count2(var_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_497) { right_node_497 = come_decrement_ref_count2(right_node_497, ((struct sNode*)right_node_497)->finalize, ((struct sNode*)right_node_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_498 = come_decrement_ref_count2(array_initializer_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result472__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result472__;
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional722;
void* right_value709;
struct list_item$1tuple2$2sTypephcharphph* litem_484;
struct tuple2$2sTypephcharph* __dec_obj280;
_Bool _if_conditional723;
void* right_value710;
struct list_item$1tuple2$2sTypephcharphph* litem_485;
struct tuple2$2sTypephcharph* __dec_obj281;
void* right_value711;
struct list_item$1tuple2$2sTypephcharphph* litem_486;
struct tuple2$2sTypephcharph* __dec_obj282;
struct list$1tuple2$2sTypephcharphph* __result458__;
memset(&__result_obj__, 0, sizeof(void*));
right_value709 = (void*)0;
memset(&litem_484, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value710 = (void*)0;
memset(&litem_485, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value711 = (void*)0;
memset(&litem_486, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
            if(_if_conditional722=self->len==0,            _if_conditional722) {
                litem_484=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value709=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2sTypephcharphph"))));
                come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value709, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_484->prev=((void*)0);
                litem_484->next=((void*)0);
                __dec_obj280=litem_484->item;
                litem_484->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_484;
                self->head=litem_484;
            }
            else {
                if(_if_conditional723=self->len==1,                _if_conditional723) {
                    litem_485=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value710=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value710, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_485->prev=self->head;
                    litem_485->next=((void*)0);
                    __dec_obj281=litem_485->item;
                    litem_485->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_485;
                    self->head->next=litem_485;
                }
                else {
                    litem_486=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value711=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value711, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_486->prev=self->tail;
                    litem_486->next=((void*)0);
                    __dec_obj282=litem_486->item;
                    litem_486->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_486;
                    self->tail=litem_486;
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
_Bool _if_conditional767;
_Bool _if_conditional768;
_Bool _if_conditional769;
_Bool _if_conditional770;
_Bool _if_conditional771;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional767=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional767) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional768=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional768) {
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional769=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional769) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional770=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional770) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional771=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional771) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional772;
struct sExternalGlobalVariable* __result466__;
void* right_value745;
struct sExternalGlobalVariable* result_503;
_Bool _if_conditional773;
void* right_value746;
struct sType* __dec_obj299;
_Bool _if_conditional774;
void* right_value747;
char* __dec_obj300;
_Bool _if_conditional775;
_Bool _if_conditional776;
void* right_value748;
char* __dec_obj301;
_Bool _if_conditional777;
void* right_value749;
struct list$1tuple2$2sTypephcharphph* __dec_obj302;
_Bool _if_conditional778;
void* right_value750;
char* __dec_obj303;
struct sExternalGlobalVariable* __result467__;
memset(&__result_obj__, 0, sizeof(void*));
right_value745 = (void*)0;
memset(&result_503, 0, sizeof(struct sExternalGlobalVariable*));
right_value746 = (void*)0;
right_value747 = (void*)0;
right_value748 = (void*)0;
right_value749 = (void*)0;
right_value750 = (void*)0;
                if(_if_conditional772=self==(void*)0,                _if_conditional772) {
                    __result466__ = __result_obj__ = (void*)0;
                    return __result466__;
                }
                result_503=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value745=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "sExternalGlobalVariable_clone", 3, "sExternalGlobalVariable"))));
                come_call_finalizer2(sExternalGlobalVariable_finalize,right_value745, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional773=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional773) {
                    __dec_obj299=result_503->type;
                    result_503->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value746=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value746, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional774=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional774) {
                    __dec_obj300=result_503->name;
                    result_503->name=(char*)come_increment_ref_count(((char*)(right_value747=string_clone(self->name))));
                    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value747 = come_decrement_ref_count2(right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional775=self!=((void*)0),                _if_conditional775) {
                    result_503->sline=self->sline;
                }
                if(_if_conditional776=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional776) {
                    __dec_obj301=result_503->sname;
                    result_503->sname=(char*)come_increment_ref_count(((char*)(right_value748=string_clone(self->sname))));
                    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value748 = come_decrement_ref_count2(right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional777=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional777) {
                    __dec_obj302=result_503->multiple_declare;
                    result_503->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value749=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value749, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional778=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional778) {
                    __dec_obj303=result_503->mDeclareSName;
                    result_503->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value750=string_clone(self->mDeclareSName))));
                    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value750 = come_decrement_ref_count2(right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result467__ = __result_obj__ = result_503;
                come_call_finalizer2(sExternalGlobalVariable_finalize,result_503, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result467__;
                come_call_finalizer2(sExternalGlobalVariable_finalize,result_503, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGlobalVariable_finalize(struct sGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional779;
_Bool _if_conditional780;
_Bool _if_conditional781;
_Bool _if_conditional782;
_Bool _if_conditional783;
_Bool _if_conditional784;
_Bool _if_conditional785;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional779=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional779) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional780=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional780) {
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional781=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional781) {
                    if(self->right_node) { self->right_node = come_decrement_ref_count2(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional782=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional782) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional783=self!=((void*)0)&&self->array_initializer!=((void*)0),                _if_conditional783) {
                    self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional784=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional784) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional785=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional785) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional786;
struct sGlobalVariable* __result469__;
void* right_value754;
struct sGlobalVariable* result_504;
_Bool _if_conditional787;
void* right_value755;
struct sType* __dec_obj304;
_Bool _if_conditional788;
void* right_value756;
char* __dec_obj305;
_Bool _if_conditional789;
void* right_value757;
struct sNode* __dec_obj306;
_Bool _if_conditional790;
_Bool _if_conditional791;
void* right_value758;
char* __dec_obj307;
_Bool _if_conditional792;
void* right_value759;
char* __dec_obj308;
_Bool _if_conditional793;
void* right_value760;
struct list$1tuple2$2sTypephcharphph* __dec_obj309;
_Bool _if_conditional794;
void* right_value761;
char* __dec_obj310;
struct sGlobalVariable* __result470__;
memset(&__result_obj__, 0, sizeof(void*));
right_value754 = (void*)0;
memset(&result_504, 0, sizeof(struct sGlobalVariable*));
right_value755 = (void*)0;
right_value756 = (void*)0;
right_value757 = (void*)0;
right_value758 = (void*)0;
right_value759 = (void*)0;
right_value760 = (void*)0;
right_value761 = (void*)0;
                if(_if_conditional786=self==(void*)0,                _if_conditional786) {
                    __result469__ = __result_obj__ = (void*)0;
                    return __result469__;
                }
                result_504=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value754=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "sGlobalVariable_clone", 3, "sGlobalVariable"))));
                come_call_finalizer2(sGlobalVariable_finalize,right_value754, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional787=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional787) {
                    __dec_obj304=result_504->type;
                    result_504->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value755=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value755, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional788=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional788) {
                    __dec_obj305=result_504->name;
                    result_504->name=(char*)come_increment_ref_count(((char*)(right_value756=string_clone(self->name))));
                    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value756 = come_decrement_ref_count2(right_value756, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional789=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional789) {
                    __dec_obj306=result_504->right_node;
                    result_504->right_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value757=sNode_clone(self->right_node))));
                    if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value757) { right_value757 = come_decrement_ref_count2(right_value757, ((struct sNode*)right_value757)->finalize, ((struct sNode*)right_value757)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional790=self!=((void*)0),                _if_conditional790) {
                    result_504->sline=self->sline;
                }
                if(_if_conditional791=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional791) {
                    __dec_obj307=result_504->sname;
                    result_504->sname=(char*)come_increment_ref_count(((char*)(right_value758=string_clone(self->sname))));
                    __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value758 = come_decrement_ref_count2(right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional792=self!=((void*)0)&&self->array_initializer!=((void*)0),                _if_conditional792) {
                    __dec_obj308=result_504->array_initializer;
                    result_504->array_initializer=(char*)come_increment_ref_count(((char*)(right_value759=string_clone(self->array_initializer))));
                    __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value759 = come_decrement_ref_count2(right_value759, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional793=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional793) {
                    __dec_obj309=result_504->multiple_declare;
                    result_504->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value760=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value760, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional794=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional794) {
                    __dec_obj310=result_504->mDeclareSName;
                    result_504->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value761=string_clone(self->mDeclareSName))));
                    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value761 = come_decrement_ref_count2(right_value761, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result470__ = __result_obj__ = result_504;
                come_call_finalizer2(sGlobalVariable_finalize,result_504, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result470__;
                come_call_finalizer2(sGlobalVariable_finalize,result_504, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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

