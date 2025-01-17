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
struct sIsPointer
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

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self);
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

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);

int sIsPointer_sline(struct sIsPointer* self, struct sInfo* info);

char* sIsPointer_sname(struct sIsPointer* self, struct sInfo* info);

_Bool sIsPointer_terminated();

char* sIsPointer_kind();

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);

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
static void sIsPointer_finalize(struct sIsPointer* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
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










struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
struct sNullNodeX* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    # 11 "21obj.c"
    self->sline=info->sline;
    # 12 "21obj.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 14 "21obj.c"
    __result34__ = __result_obj__ = self;
    come_call_finalizer2(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNodeX_terminated(){
void* __result_obj__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    # 19 "21obj.c"
    __result35__ = (_Bool)0;
    return __result35__;
}

char* sNullNodeX_kind(){
void* __result_obj__;
void* right_value50;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    # 24 "21obj.c"
    __result36__ = __result_obj__ = ((char*)(right_value50=__builtin_string("sNullNodeX")));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
}

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    # 30 "21obj.c"
    __result37__ = (_Bool)1;
    return __result37__;
}

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    # 35 "21obj.c"
    __result38__ = self->sline;
    return __result38__;
}

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value51;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
    # 40 "21obj.c"
    __result39__ = __result_obj__ = ((char*)(right_value51=__builtin_string(self->sname)));
    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result39__;
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value87;
struct sType* __dec_obj36;
void* right_value88;
char* __dec_obj37;
struct sNewNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
right_value88 = (void*)0;
    # 52 "21obj.c"
    __dec_obj36=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 54 "21obj.c"
    self->sline=info->sline;
    # 55 "21obj.c"
    __dec_obj37=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(info->sname))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 57 "21obj.c"
    __result58__ = __result_obj__ = self;
    come_call_finalizer2(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result58__;
    come_call_finalizer2(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional8;
struct sType* __result40__;
void* right_value52;
struct sType* result_11;
_Bool _if_conditional26;
_Bool _if_conditional27;
void* right_value59;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional31;
void* right_value62;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional35;
void* right_value63;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional36;
void* right_value64;
char* __dec_obj20;
_Bool _if_conditional37;
void* right_value65;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional38;
void* right_value73;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value74;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional53;
void* right_value81;
struct list$1charph* __dec_obj30;
_Bool _if_conditional57;
void* right_value82;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional58;
_Bool _if_conditional59;
void* right_value83;
struct sNode* __dec_obj32;
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
_Bool _if_conditional83;
void* right_value84;
struct sNode* __dec_obj33;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value85;
char* __dec_obj34;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
void* right_value86;
char* __dec_obj35;
_Bool _if_conditional97;
struct sType* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&result_11, 0, sizeof(struct sType*));
right_value59 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional8=self==(void*)0,        _if_conditional8) {
            # 2 "sType_clone"
            __result40__ = __result_obj__ = (void*)0;
            return __result40__;
        }
        # 3 "sType_clone"
        result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional26=self!=((void*)0),        _if_conditional26) {
            # 4 "sType_clone"
            result_11->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional27=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional27) {
            # 5 "sType_clone"
            __dec_obj16=result_11->mMultipleTypes;
            result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional31=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional31) {
            # 6 "sType_clone"
            __dec_obj18=result_11->mNoSolvedGenericsType;
            result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value62=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional35=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional35) {
            # 7 "sType_clone"
            __dec_obj19=result_11->mOriginalLoadVarType;
            result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value63=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional36=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional36) {
            # 8 "sType_clone"
            __dec_obj20=result_11->mGenericsName;
            result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value64=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional37=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional37) {
            # 9 "sType_clone"
            __dec_obj21=result_11->mGenericsTypes;
            result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value65=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional38=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional38) {
            # 10 "sType_clone"
            __dec_obj25=result_11->mArrayNum;
            result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value73=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional51=self!=((void*)0),        _if_conditional51) {
            # 11 "sType_clone"
            result_11->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional52=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional52) {
            # 12 "sType_clone"
            __dec_obj26=result_11->mParamTypes;
            result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional53=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional53) {
            # 13 "sType_clone"
            __dec_obj30=result_11->mParamNames;
            result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional57=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional57) {
            # 14 "sType_clone"
            __dec_obj31=result_11->mResultType;
            result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value82=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            # 15 "sType_clone"
            result_11->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional59=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional59) {
            # 16 "sType_clone"
            __dec_obj32=result_11->mAlignas;
            result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value83=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value83) { right_value83 = come_decrement_ref_count2(right_value83, ((struct sNode*)right_value83)->finalize, ((struct sNode*)right_value83)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            # 17 "sType_clone"
            result_11->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            # 18 "sType_clone"
            result_11->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            # 19 "sType_clone"
            result_11->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            # 20 "sType_clone"
            result_11->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            # 21 "sType_clone"
            result_11->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            # 22 "sType_clone"
            result_11->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            # 23 "sType_clone"
            result_11->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            # 24 "sType_clone"
            result_11->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            # 25 "sType_clone"
            result_11->mExtern=self->mExtern;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 26 "sType_clone"
            result_11->mRestrict=self->mRestrict;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 27 "sType_clone"
            result_11->mImmutable=self->mImmutable;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 28 "sType_clone"
            result_11->mHeap=self->mHeap;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 29 "sType_clone"
            result_11->mDummyHeap=self->mDummyHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 30 "sType_clone"
            result_11->mDelegate=self->mDelegate;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 31 "sType_clone"
            result_11->mShare=self->mShare;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 32 "sType_clone"
            result_11->mClone=self->mClone;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 33 "sType_clone"
            result_11->mNoHeap=self->mNoHeap;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 34 "sType_clone"
            result_11->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 35 "sType_clone"
            result_11->mRefference=self->mRefference;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 36 "sType_clone"
            result_11->mException=self->mException;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 37 "sType_clone"
            result_11->mPointerNum=self->mPointerNum;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 38 "sType_clone"
            result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 39 "sType_clone"
            result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional83=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional83) {
            # 40 "sType_clone"
            __dec_obj33=result_11->mSizeNum;
            result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 41 "sType_clone"
            result_11->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 42 "sType_clone"
            result_11->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional86=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional86) {
            # 43 "sType_clone"
            __dec_obj34=result_11->mOriginalTypeName;
            result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value85=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 44 "sType_clone"
            result_11->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 45 "sType_clone"
            result_11->mFunctionParam=self->mFunctionParam;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 46 "sType_clone"
            result_11->mAllocaValue=self->mAllocaValue;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 47 "sType_clone"
            result_11->mGenericsStruct=self->mGenericsStruct;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 48 "sType_clone"
            result_11->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 49 "sType_clone"
            result_11->mComeMemCore=self->mComeMemCore;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 50 "sType_clone"
            result_11->mInline=self->mInline;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 51 "sType_clone"
            result_11->mNullValue=self->mNullValue;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 52 "sType_clone"
            result_11->mGuardValue=self->mGuardValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional96=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional96) {
            # 53 "sType_clone"
            __dec_obj35=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value86=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 54 "sType_clone"
            result_11->mArrayPointerType=self->mArrayPointerType;
        }
        # 55 "sType_clone"
        __result57__ = __result_obj__ = result_11;
        come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result57__;
        come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional9=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional9) {
                # 0 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional11=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional11) {
                # 1 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional13=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional13) {
                # 2 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional14=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional14) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional15=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional15) {
                # 4 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional16=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional16) {
                # 5 "sType_finalize"
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional18=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional18) {
                # 6 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional19=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional19) {
                # 7 "sType_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional21=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional21) {
                # 8 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional22=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional22) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional23=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional23) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional24) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional25=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional25) {
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
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional10=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional10) {
                                # 0 "list_item$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional12=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional12) {
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
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional17) {
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
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional20) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional28;
struct list$1sTypeph* __result41__;
void* right_value53;
void* right_value54;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional4;
void* right_value58;
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
right_value58 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional28=self==((void*)0),                _if_conditional28) {
                    # 140 "./comelang2.h"
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                # 142 "./comelang2.h"
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value54=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value53=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_19=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    # 146 "./comelang2.h"
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./comelang2.h"
                    it_19=it_19->next;
                }
                # 151 "./comelang2.h"
                __result44__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result44__;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result42__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result42__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional29;
void* right_value55;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj13;
_Bool _if_conditional30;
void* right_value56;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj14;
void* right_value57;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj15;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
right_value56 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
right_value57 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional29=self->len==0,                        _if_conditional29) {
                            # 156 "./comelang2.h"
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_20->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_20->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj13=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_20;
                            # 163 "./comelang2.h"
                            self->head=litem_20;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional30=self->len==1,                            _if_conditional30) {
                                # 166 "./comelang2.h"
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_21->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_21->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj14=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_21;
                                # 173 "./comelang2.h"
                                self->head->next=litem_21;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_22->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_22->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj15=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./comelang2.h"
                                self->tail->next=litem_22;
                                # 183 "./comelang2.h"
                                self->tail=litem_22;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result43__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result43__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
struct tuple1$1sTypeph* __result45__;
void* right_value60;
struct tuple1$1sTypeph* result_23;
_Bool _if_conditional34;
void* right_value61;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
memset(&result_23, 0, sizeof(struct tuple1$1sTypeph*));
right_value61 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional32=self==(void*)0,                _if_conditional32) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result45__ = __result_obj__ = (void*)0;
                    return __result45__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional34=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional34) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj17=result_23->v1;
                    result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result46__ = __result_obj__ = result_23;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result46__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional33=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional33) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional39;
struct list$1sNodeph* __result47__;
void* right_value66;
void* right_value67;
struct list$1sNodeph* result_24;
struct list_item$1sNodeph* it_25;
_Bool _while_condtional5;
void* right_value72;
struct list$1sNodeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value67 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1sNodeph*));
memset(&it_25, 0, sizeof(struct list_item$1sNodeph*));
right_value72 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    # 140 "./comelang2.h"
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                # 142 "./comelang2.h"
                result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value67=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value66=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_25=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional5=it_25!=((void*)0),                _while_condtional5) {
                    # 146 "./comelang2.h"
                    list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value72=sNode_clone(it_25->item)))));
                    if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 148 "./comelang2.h"
                    it_25=it_25->next;
                }
                # 151 "./comelang2.h"
                __result52__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result52__;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result48__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result48__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional40;
void* right_value68;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj22;
_Bool _if_conditional41;
void* right_value69;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj23;
void* right_value70;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
right_value69 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
right_value70 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            # 156 "./comelang2.h"
                            litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value68=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_26->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_26->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj22=litem_26->item;
                            litem_26->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                            # 162 "./comelang2.h"
                            self->tail=litem_26;
                            # 163 "./comelang2.h"
                            self->head=litem_26;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                # 166 "./comelang2.h"
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value69=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_27->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_27->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj23=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                # 172 "./comelang2.h"
                                self->tail=litem_27;
                                # 173 "./comelang2.h"
                                self->head->next=litem_27;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value70=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_28->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_28->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj24=litem_28->item;
                                litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                # 182 "./comelang2.h"
                                self->tail->next=litem_28;
                                # 183 "./comelang2.h"
                                self->tail=litem_28;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result49__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result49__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional42;
struct sNode* __result50__;
void* right_value71;
struct sNode* result_29;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
struct sNode* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
memset(&result_29, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional42=self==(void*)0,                        _if_conditional42) {
                            # 2 "sNode_clone"
                            __result50__ = __result_obj__ = (void*)0;
                            return __result50__;
                        }
                        # 3 "sNode_clone"
                        result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value71=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value71) { right_value71 = come_decrement_ref_count2(right_value71, ((struct sNode*)right_value71)->finalize, ((struct sNode*)right_value71)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional43=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional43) {
                            # 4 "sNode_clone"
                            result_29->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            # 5 "sNode_clone"
                            result_29->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            # 6 "sNode_clone"
                            result_29->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            # 7 "sNode_clone"
                            result_29->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            # 8 "sNode_clone"
                            result_29->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            # 9 "sNode_clone"
                            result_29->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            # 10 "sNode_clone"
                            result_29->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            # 11 "sNode_clone"
                            result_29->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result51__ = __result_obj__ = result_29;
                        if(result_29) { result_29 = come_decrement_ref_count2(result_29, ((struct sNode*)result_29)->finalize, ((struct sNode*)result_29)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result51__;
                        if(result_29) { result_29 = come_decrement_ref_count2(result_29, ((struct sNode*)result_29)->finalize, ((struct sNode*)result_29)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional54;
struct list$1charph* __result53__;
void* right_value75;
void* right_value76;
struct list$1charph* result_30;
struct list_item$1charph* it_31;
_Bool _while_condtional6;
void* right_value80;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
right_value76 = (void*)0;
memset(&result_30, 0, sizeof(struct list$1charph*));
memset(&it_31, 0, sizeof(struct list_item$1charph*));
right_value80 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional54=self==((void*)0),                _if_conditional54) {
                    # 140 "./comelang2.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 142 "./comelang2.h"
                result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value75=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_31=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional6=it_31!=((void*)0),                _while_condtional6) {
                    # 146 "./comelang2.h"
                    list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value80=string_clone(it_31->item)))));
                    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 148 "./comelang2.h"
                    it_31=it_31->next;
                }
                # 151 "./comelang2.h"
                __result56__ = __result_obj__ = result_30;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional55;
void* right_value77;
struct list_item$1charph* litem_32;
char* __dec_obj27;
_Bool _if_conditional56;
void* right_value78;
struct list_item$1charph* litem_33;
char* __dec_obj28;
void* right_value79;
struct list_item$1charph* litem_34;
char* __dec_obj29;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
right_value78 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
right_value79 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional55=self->len==0,                        _if_conditional55) {
                            # 156 "./comelang2.h"
                            litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value77=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_32->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_32->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj27=litem_32->item;
                            litem_32->item=(char*)come_increment_ref_count(item);
                            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_32;
                            # 163 "./comelang2.h"
                            self->head=litem_32;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional56=self->len==1,                            _if_conditional56) {
                                # 166 "./comelang2.h"
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value78=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_33->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_33->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj28=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_33;
                                # 173 "./comelang2.h"
                                self->head->next=litem_33;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value79=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_34->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_34->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj29=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 182 "./comelang2.h"
                                self->tail->next=litem_34;
                                # 183 "./comelang2.h"
                                self->tail=litem_34;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result55__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result55__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sNewNode_sline(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    # 62 "21obj.c"
    __result59__ = self->sline;
    return __result59__;
}

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value89;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
    # 67 "21obj.c"
    __result60__ = __result_obj__ = ((char*)(right_value89=__builtin_string(self->sname)));
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
}

_Bool sNewNode_terminated(){
void* __result_obj__;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    # 72 "21obj.c"
    __result61__ = (_Bool)0;
    return __result61__;
}

char* sNewNode_kind(){
void* __result_obj__;
void* right_value90;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
    # 77 "21obj.c"
    __result62__ = __result_obj__ = ((char*)(right_value90=__builtin_string("sNewNode")));
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_35;
void* right_value91;
struct CVALUE* come_value_36;
void* right_value92;
void* right_value93;
struct buffer* num_string_37;
struct list$1sNodeph* o2_saved_38;
struct sNode* it_41;
_Bool _if_conditional106;
_Bool __result70__;
void* right_value94;
struct CVALUE* cvalue_44;
void* right_value95;
void* right_value96;
struct sType* type2_45;
void* right_value97;
char* type_name_48;
void* right_value98;
char* type_name2_49;
void* right_value99;
void* right_value100;
char* __dec_obj38;
_Bool _if_conditional107;
void* right_value101;
char* __dec_obj39;
void* right_value102;
struct sType* __dec_obj40;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_35, 0, sizeof(struct sType*));
right_value91 = (void*)0;
memset(&come_value_36, 0, sizeof(struct CVALUE*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&num_string_37, 0, sizeof(struct buffer*));
memset(&o2_saved_38, 0, sizeof(struct list$1sNodeph*));
memset(&it_41, 0, sizeof(struct sNode*));
right_value94 = (void*)0;
memset(&cvalue_44, 0, sizeof(struct CVALUE*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&type2_45, 0, sizeof(struct sType*));
right_value97 = (void*)0;
memset(&type_name_48, 0, sizeof(char*));
right_value98 = (void*)0;
memset(&type_name2_49, 0, sizeof(char*));
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
    # 82 "21obj.c"
    type_35=self->type;
    # 84 "21obj.c"
    come_value_36=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 84, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 86 "21obj.c"
    num_string_37=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value93=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value92=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 86, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 88 "21obj.c"
    buffer_append_str(num_string_37,"1");
    # 101 "21obj.c"
    for(    o2_saved_38=(struct list$1sNodeph*)come_increment_ref_count((type_35->mArrayNum)),it_41=list$1sNodeph_begin((o2_saved_38));    !list$1sNodeph_end((o2_saved_38));    it_41=list$1sNodeph_next((o2_saved_38))    ){
        # 95 "21obj.c"
        # 91 "21obj.c"
        if(_if_conditional106=!node_compile(it_41,info),        _if_conditional106) {
            # 92 "21obj.c"
            __result70__ = (_Bool)0;
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,num_string_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result70__;
        }
        # 95 "21obj.c"
        cvalue_44=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value94=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 96 "21obj.c"
        dec_stack_ptr(1,info);
        # 98 "21obj.c"
        buffer_append_str(num_string_37,((char*)(right_value95=xsprintf("*(%s)",cvalue_44->c_value))));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,cvalue_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 101 "21obj.c"
    type2_45=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=solve_generics(type_35,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 108 "21obj.c"
    list$1sNodeph_reset(type2_45->mArrayNum);
    # 110 "21obj.c"
    type_name_48=(char*)come_increment_ref_count(((char*)(right_value97=make_type_name_string(type2_45,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 112 "21obj.c"
    type_name2_49=(char*)come_increment_ref_count(((char*)(right_value98=make_come_type_name_string(type2_45,info))));
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 114 "21obj.c"
    __dec_obj38=come_value_36->c_value;
    come_value_36->c_value=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_48,type_name_48,((char*)(right_value99=buffer_to_string(num_string_37))),info->sname,info->sline,type_name2_49))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 116 "21obj.c"
    type2_45->mHeap=(_Bool)1;
    # 117 "21obj.c"
    type2_45->mPointerNum++;
    # 124 "21obj.c"
    # 119 "21obj.c"
    if(type2_45->mNoSolvedGenericsType->v1) {
        # 120 "21obj.c"
        type2_45->mNoSolvedGenericsType->v1->mPointerNum++;
        # 121 "21obj.c"
        type2_45->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
    }
    # 124 "21obj.c"
    __dec_obj39=come_value_36->c_value;
    come_value_36->c_value=(char*)come_increment_ref_count(((char*)(right_value101=append_object_to_right_values(come_value_36->c_value,(struct sType*)come_increment_ref_count(type2_45),info))));
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 125 "21obj.c"
    __dec_obj40=come_value_36->type;
    come_value_36->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(type2_45))));
    come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 126 "21obj.c"
    come_value_36->var=((void*)0);
    # 128 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_36->c_value);
    # 130 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_36));
    # 132 "21obj.c"
    __result73__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_48 = come_decrement_ref_count2(type_name_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_49 = come_decrement_ref_count2(type_name2_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result73__;
    come_call_finalizer2(CVALUE_finalize,come_value_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_48 = come_decrement_ref_count2(type_name_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_49 = come_decrement_ref_count2(type_name2_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional100;
_Bool _if_conditional101;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional100=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional100) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional101=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional101) {
            # 1 "CVALUE_finalize"
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional102;
struct sNode* result_39;
struct sNode* __result63__;
_Bool _if_conditional103;
struct sNode* __result64__;
struct sNode* result_40;
struct sNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct sNode*));
memset(&result_40, 0, sizeof(struct sNode*));
        # 290 "./comelang2.h"
        # 285 "./comelang2.h"
        if(_if_conditional102=self==((void*)0),        _if_conditional102) {
            # 286 "./comelang2.h"
            # 287 "./comelang2.h"
            memset(&result_39,0,sizeof(struct sNode*));
            # 288 "./comelang2.h"
            __result63__ = __result_obj__ = result_39;
            return __result63__;
        }
        # 290 "./comelang2.h"
        self->it=self->head;
        # 296 "./comelang2.h"
        # 292 "./comelang2.h"
        if(self->it) {
            # 293 "./comelang2.h"
            __result64__ = __result_obj__ = self->it->item;
            return __result64__;
        }
        # 296 "./comelang2.h"
        # 297 "./comelang2.h"
        memset(&result_40,0,sizeof(struct sNode*));
        # 298 "./comelang2.h"
        __result65__ = __result_obj__ = result_40;
        return __result65__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./comelang2.h"
        __result66__ = self==((void*)0)||self->it==((void*)0);
        return __result66__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional104;
struct sNode* result_42;
struct sNode* __result67__;
_Bool _if_conditional105;
struct sNode* __result68__;
struct sNode* result_43;
struct sNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct sNode*));
memset(&result_43, 0, sizeof(struct sNode*));
        # 308 "./comelang2.h"
        # 302 "./comelang2.h"
        if(_if_conditional104=self==((void*)0)||self->it==((void*)0),        _if_conditional104) {
            # 303 "./comelang2.h"
            # 304 "./comelang2.h"
            memset(&result_42,0,sizeof(struct sNode*));
            # 305 "./comelang2.h"
            __result67__ = __result_obj__ = result_42;
            return __result67__;
        }
        # 308 "./comelang2.h"
        self->it=self->it->next;
        # 314 "./comelang2.h"
        # 310 "./comelang2.h"
        if(self->it) {
            # 311 "./comelang2.h"
            __result68__ = __result_obj__ = self->it->item;
            return __result68__;
        }
        # 314 "./comelang2.h"
        # 315 "./comelang2.h"
        memset(&result_43,0,sizeof(struct sNode*));
        # 316 "./comelang2.h"
        __result69__ = __result_obj__ = result_43;
        return __result69__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_46;
_Bool _while_condtional7;
struct list_item$1sNodeph* prev_it_47;
struct list$1sNodeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_46, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_47, 0, sizeof(struct list_item$1sNodeph*));
        # 433 "./comelang2.h"
        it_46=self->head;
        # 440 "./comelang2.h"
        while(_while_condtional7=it_46!=((void*)0),        _while_condtional7) {
            # 435 "./comelang2.h"
            prev_it_47=it_46;
            # 436 "./comelang2.h"
            it_46=it_46->next;
            # 437 "./comelang2.h"
            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 440 "./comelang2.h"
        self->head=((void*)0);
        # 441 "./comelang2.h"
        self->tail=((void*)0);
        # 443 "./comelang2.h"
        self->len=0;
        # 445 "./comelang2.h"
        __result71__ = __result_obj__ = self;
        return __result71__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional108;
void* right_value103;
struct list_item$1CVALUEph* litem_50;
struct CVALUE* __dec_obj41;
_Bool _if_conditional110;
void* right_value104;
struct list_item$1CVALUEph* litem_51;
struct CVALUE* __dec_obj42;
void* right_value105;
struct list_item$1CVALUEph* litem_52;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&litem_50, 0, sizeof(struct list_item$1CVALUEph*));
right_value104 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1CVALUEph*));
right_value105 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1CVALUEph*));
        # 256 "./comelang2.h"
        # 225 "./comelang2.h"
        if(_if_conditional108=self->len==0,        _if_conditional108) {
            # 226 "./comelang2.h"
            litem_50=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value103=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./comelang2.h"
            litem_50->prev=((void*)0);
            # 229 "./comelang2.h"
            litem_50->next=((void*)0);
            # 230 "./comelang2.h"
            __dec_obj41=litem_50->item;
            litem_50->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./comelang2.h"
            self->tail=litem_50;
            # 233 "./comelang2.h"
            self->head=litem_50;
        }
        else {
            # 256 "./comelang2.h"
            # 235 "./comelang2.h"
            if(_if_conditional110=self->len==1,            _if_conditional110) {
                # 236 "./comelang2.h"
                litem_51=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value104=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./comelang2.h"
                litem_51->prev=self->head;
                # 239 "./comelang2.h"
                litem_51->next=((void*)0);
                # 240 "./comelang2.h"
                __dec_obj42=litem_51->item;
                litem_51->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./comelang2.h"
                self->tail=litem_51;
                # 243 "./comelang2.h"
                self->head->next=litem_51;
            }
            else {
                # 246 "./comelang2.h"
                litem_52=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value105=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./comelang2.h"
                litem_52->prev=self->tail;
                # 249 "./comelang2.h"
                litem_52->next=((void*)0);
                # 250 "./comelang2.h"
                __dec_obj43=litem_52->item;
                litem_52->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./comelang2.h"
                self->tail->next=litem_52;
                # 253 "./comelang2.h"
                self->tail=litem_52;
            }
        }
        # 256 "./comelang2.h"
        self->len++;
        # 258 "./comelang2.h"
        __result72__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result72__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional109;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional109=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional109) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sNode* create_object(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value106;
void* right_value107;
struct sNode* _inf_value1;
struct sNewNode* _inf_obj_value1;
void* right_value111;
struct sNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value111 = (void*)0;
    # 137 "21obj.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 137, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNewNode*)(right_value107=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value106=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 137, "sNewNode")))),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNewNode_sline;
    _inf_value1->sname=(void*)sNewNode_sname;
    _inf_value1->terminated=(void*)sNewNode_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    __result76__ = __result_obj__ = ((struct sNode*)(right_value111=_inf_value1));
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sNewNode_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNewNode_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result76__;
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__;
void* right_value112;
struct sNode* __dec_obj46;
void* right_value113;
struct sType* __dec_obj47;
void* right_value114;
char* __dec_obj48;
struct sImplementsNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
    # 150 "21obj.c"
    __dec_obj46=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(obj_exp))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 151 "21obj.c"
    __dec_obj47=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(inf_type))));
    come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 153 "21obj.c"
    self->sline=info->sline;
    # 154 "21obj.c"
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(info->sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 156 "21obj.c"
    __result77__ = __result_obj__ = self;
    come_call_finalizer2(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result77__;
    come_call_finalizer2(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    # 161 "21obj.c"
    __result78__ = self->sline;
    return __result78__;
}

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value115;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
    # 166 "21obj.c"
    __result79__ = __result_obj__ = ((char*)(right_value115=__builtin_string(self->sname)));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

_Bool sImplementsNode_terminated(){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    # 171 "21obj.c"
    __result80__ = (_Bool)0;
    return __result80__;
}

char* sImplementsNode_kind(){
void* __result_obj__;
void* right_value116;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
    # 176 "21obj.c"
    __result81__ = __result_obj__ = ((char*)(right_value116=__builtin_string("sImplementsNode")));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value117;
struct sNode* obj_exp_54;
void* right_value118;
struct sType* inf_type_55;
_Bool _if_conditional120;
_Bool __result82__;
void* right_value119;
struct CVALUE* come_value_56;
void* right_value120;
struct sType* type_57;
struct sClass* klass_58;
void* right_value121;
struct CVALUE* come_value2_59;
void* right_value122;
struct sType* type2_60;
void* right_value123;
char* type_name_61;
void* right_value124;
char* type_name2_62;
static int inf_num_63=0;
void* right_value125;
char* buf_64;
void* right_value126;
char* buf2_65;
void* right_value127;
struct sType* typeX_66;
void* right_value128;
void* right_value129;
int i_67;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_71;
struct sType* field_type_72;
void* right_value130;
char* method_name_73;
void* right_value131;
char* __dec_obj49;
void* right_value132;
struct sType* type3_74;
void* right_value133;
struct sType* __dec_obj50;
void* right_value134;
char* __dec_obj51;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&obj_exp_54, 0, sizeof(struct sNode*));
right_value118 = (void*)0;
memset(&inf_type_55, 0, sizeof(struct sType*));
right_value119 = (void*)0;
memset(&come_value_56, 0, sizeof(struct CVALUE*));
right_value120 = (void*)0;
memset(&type_57, 0, sizeof(struct sType*));
memset(&klass_58, 0, sizeof(struct sClass*));
right_value121 = (void*)0;
memset(&come_value2_59, 0, sizeof(struct CVALUE*));
right_value122 = (void*)0;
memset(&type2_60, 0, sizeof(struct sType*));
right_value123 = (void*)0;
memset(&type_name_61, 0, sizeof(char*));
right_value124 = (void*)0;
memset(&type_name2_62, 0, sizeof(char*));
right_value125 = (void*)0;
memset(&buf_64, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&buf2_65, 0, sizeof(char*));
right_value127 = (void*)0;
memset(&typeX_66, 0, sizeof(struct sType*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&i_67, 0, sizeof(int));
memset(&name_71, 0, sizeof(char*));
memset(&field_type_72, 0, sizeof(struct sType*));
memset(&name_71, 0, sizeof(char*));
memset(&field_type_72, 0, sizeof(struct sType*));
right_value130 = (void*)0;
memset(&method_name_73, 0, sizeof(char*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&type3_74, 0, sizeof(struct sType*));
right_value133 = (void*)0;
right_value134 = (void*)0;
    # 181 "21obj.c"
    obj_exp_54=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(self->obj_exp))));
    if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 182 "21obj.c"
    inf_type_55=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(self->inf_type))));
    come_call_finalizer2(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 188 "21obj.c"
    # 184 "21obj.c"
    if(_if_conditional120=!node_compile(obj_exp_54,info),    _if_conditional120) {
        # 185 "21obj.c"
        __result82__ = (_Bool)0;
        if(obj_exp_54) { obj_exp_54 = come_decrement_ref_count2(obj_exp_54, ((struct sNode*)obj_exp_54)->finalize, ((struct sNode*)obj_exp_54)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sType_finalize,inf_type_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result82__;
    }
    # 188 "21obj.c"
    come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 189 "21obj.c"
    dec_stack_ptr(1,info);
    # 191 "21obj.c"
    type_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(come_value_56->type))));
    come_call_finalizer2(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 192 "21obj.c"
    type_57->mPointerNum--;
    # 193 "21obj.c"
    type_57->mHeap=(_Bool)0;
    # 195 "21obj.c"
    klass_58=inf_type_55->mClass;
    # 197 "21obj.c"
    come_value2_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 197, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 199 "21obj.c"
    type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(inf_type_55))));
    come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 201 "21obj.c"
    type_name_61=(char*)come_increment_ref_count(((char*)(right_value123=make_type_name_string(inf_type_55,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 202 "21obj.c"
    type_name2_62=(char*)come_increment_ref_count(((char*)(right_value124=make_type_name_string(type_57,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 204 "21obj.c"
    # 206 "21obj.c"
    buf_64=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s* _inf_value%d;\n",type_name_61,++inf_num_63))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 207 "21obj.c"
    add_come_code_at_function_head(info,buf_64);
    # 208 "21obj.c"
    buf2_65=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s* _inf_obj_value%d;\n",type_name2_62,inf_num_63))));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 209 "21obj.c"
    add_come_code_at_function_head(info,buf2_65);
    # 211 "21obj.c"
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_63,type_name_61,type_name_61,info->sname,info->sline,type_name_61);
    # 212 "21obj.c"
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_63,come_value_56->c_value);
    # 213 "21obj.c"
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_63,inf_num_63);
    # 215 "21obj.c"
    typeX_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(type_57))));
    come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 216 "21obj.c"
    typeX_66->mPointerNum++;
    # 218 "21obj.c"
    ((struct tuple2$2sFunpcharph*)(right_value128=create_finalizer_automatically(typeX_66,"finalize",info)));
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 219 "21obj.c"
    ((struct tuple2$2sFunpcharph*)(right_value129=create_cloner_automatically(typeX_66,"clone",info)));
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 229 "21obj.c"
    for(    i_67=1;    i_67<list$1tuple2$2charphsTypephph_length(klass_58->mFields);    i_67++    ){
        # 222 "21obj.c"
        multiple_assign_var1=((struct tuple2$2charphsTypeph*)come_null_check(list$1tuple2$2charphsTypephphp_operator_load_element(klass_58->mFields,i_67), "21obj.c", 222, 0));
        name_71=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_72=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 224 "21obj.c"
        method_name_73=(char*)come_increment_ref_count(((char*)(right_value130=create_method_name(type_57,(_Bool)0,name_71,info,(_Bool)1))));
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 226 "21obj.c"
        add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_63,name_71,method_name_73);
        name_71 = come_decrement_ref_count2(name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        method_name_73 = come_decrement_ref_count2(method_name_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 229 "21obj.c"
    __dec_obj49=come_value2_59->c_value;
    come_value2_59->c_value=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("_inf_value%d",inf_num_63))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 230 "21obj.c"
    type3_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(inf_type_55))));
    come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 231 "21obj.c"
    type3_74->mPointerNum++;
    # 232 "21obj.c"
    type3_74->mHeap=(_Bool)1;
    # 233 "21obj.c"
    type2_60->mHeap=(_Bool)1;
    # 234 "21obj.c"
    __dec_obj50=come_value2_59->type;
    come_value2_59->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(type2_60))));
    come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 235 "21obj.c"
    __dec_obj51=come_value2_59->c_value;
    come_value2_59->c_value=(char*)come_increment_ref_count(((char*)(right_value134=append_object_to_right_values(come_value2_59->c_value,(struct sType*)come_increment_ref_count(type3_74),info))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 236 "21obj.c"
    come_value2_59->type->mPointerNum++;
    # 237 "21obj.c"
    come_value2_59->var=((void*)0);
    # 239 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_59->c_value);
    # 241 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_59));
    # 243 "21obj.c"
    __result87__ = (_Bool)1;
    if(obj_exp_54) { obj_exp_54 = come_decrement_ref_count2(obj_exp_54, ((struct sNode*)obj_exp_54)->finalize, ((struct sNode*)obj_exp_54)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_61 = come_decrement_ref_count2(type_name_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_62 = come_decrement_ref_count2(type_name2_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_64 = come_decrement_ref_count2(buf_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_65 = come_decrement_ref_count2(buf2_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,typeX_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result87__;
    if(obj_exp_54) { obj_exp_54 = come_decrement_ref_count2(obj_exp_54, ((struct sNode*)obj_exp_54)->finalize, ((struct sNode*)obj_exp_54)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_61 = come_decrement_ref_count2(type_name_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_62 = come_decrement_ref_count2(type_name2_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_64 = come_decrement_ref_count2(buf_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_65 = come_decrement_ref_count2(buf2_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,typeX_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional121;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple2$2sFunpcharphp_finalize"
        # 0 "tuple2$2sFunpcharphp_finalize"
        if(_if_conditional121=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional121) {
            # 0 "tuple2$2sFunpcharphp_finalize"
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional122;
int __result83__;
int __result84__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./comelang2.h"
        # 364 "./comelang2.h"
        if(_if_conditional122=self==((void*)0),        _if_conditional122) {
            # 365 "./comelang2.h"
            __result83__ = 0;
            return __result83__;
        }
        # 367 "./comelang2.h"
        __result84__ = self->len;
        return __result84__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool _if_conditional123;
struct list_item$1tuple2$2charphsTypephph* it_68;
int i_69;
_Bool _while_condtional8;
_Bool _if_conditional124;
struct tuple2$2charphsTypeph* __result85__;
struct tuple2$2charphsTypeph* default_value_70;
struct tuple2$2charphsTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_69, 0, sizeof(int));
memset(&default_value_70, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 686 "./comelang2.h"
            # 682 "./comelang2.h"
            if(_if_conditional123=position<0,            _if_conditional123) {
                # 683 "./comelang2.h"
                position+=self->len;
            }
            # 686 "./comelang2.h"
            it_68=self->head;
            # 687 "./comelang2.h"
            i_69=0;
            # 694 "./comelang2.h"
            while(_while_condtional8=it_68!=((void*)0),            _while_condtional8) {
                # 692 "./comelang2.h"
                # 689 "./comelang2.h"
                if(_if_conditional124=position==i_69,                _if_conditional124) {
                    # 690 "./comelang2.h"
                    __result85__ = __result_obj__ = it_68->item;
                    return __result85__;
                }
                # 692 "./comelang2.h"
                it_68=it_68->next;
                # 693 "./comelang2.h"
                i_69++;
            }
            # 696 "./comelang2.h"
            # 697 "./comelang2.h"
            memset(&default_value_70,0,sizeof(struct tuple2$2charphsTypeph*));
            # 698 "./comelang2.h"
            __result86__ = __result_obj__ = default_value_70;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_70, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result86__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional125;
_Bool _if_conditional126;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2charphsTypephp_finalize"
                # 0 "tuple2$2charphsTypephp_finalize"
                if(_if_conditional125=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional125) {
                    # 0 "tuple2$2charphsTypephp_finalize"
                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2charphsTypephp_finalize"
                # 1 "tuple2$2charphsTypephp_finalize"
                if(_if_conditional126=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional126) {
                    # 1 "tuple2$2charphsTypephp_finalize"
                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value135;
char* __dec_obj52;
struct sTrueNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    # 254 "21obj.c"
    self->sline=info->sline;
    # 255 "21obj.c"
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 257 "21obj.c"
    __result88__ = __result_obj__ = self;
    come_call_finalizer2(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result88__;
    come_call_finalizer2(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
int __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    # 262 "21obj.c"
    __result89__ = self->sline;
    return __result89__;
}

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value136;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    # 267 "21obj.c"
    __result90__ = __result_obj__ = ((char*)(right_value136=__builtin_string(self->sname)));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sTrueNode_terminated(){
void* __result_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    # 272 "21obj.c"
    __result91__ = (_Bool)0;
    return __result91__;
}

char* sTrueNode_kind(){
void* __result_obj__;
void* right_value137;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    # 277 "21obj.c"
    __result92__ = __result_obj__ = ((char*)(right_value137=__builtin_string("sTrueNode")));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value138;
struct CVALUE* come_value_75;
void* right_value139;
char* __dec_obj53;
void* right_value140;
void* right_value141;
struct sType* __dec_obj54;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&come_value_75, 0, sizeof(struct CVALUE*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
    # 282 "21obj.c"
    come_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 282, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 284 "21obj.c"
    __dec_obj53=come_value_75->c_value;
    come_value_75->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("(_Bool)1"))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 285 "21obj.c"
    __dec_obj54=come_value_75->type;
    come_value_75->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value140=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 285, "sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 286 "21obj.c"
    come_value_75->var=((void*)0);
    # 288 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_75->c_value);
    # 290 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_75));
    # 292 "21obj.c"
    __result93__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result93__;
    come_call_finalizer2(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__;
void* right_value142;
void* right_value143;
struct sNode* _inf_value2;
struct sTrueNode* _inf_obj_value2;
void* right_value146;
struct sNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value146 = (void*)0;
    # 297 "21obj.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 297, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sTrueNode*)(right_value143=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value142=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 297, "sTrueNode")))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sTrueNode_sline;
    _inf_value2->sname=(void*)sTrueNode_sname;
    _inf_value2->terminated=(void*)sTrueNode_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    __result96__ = __result_obj__ = ((struct sNode*)(right_value146=_inf_value2));
    come_call_finalizer2(sTrueNode_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sTrueNode_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result96__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value147;
char* __dec_obj56;
struct sFalseNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    # 307 "21obj.c"
    self->sline=info->sline;
    # 308 "21obj.c"
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 310 "21obj.c"
    __result97__ = __result_obj__ = self;
    come_call_finalizer2(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result97__;
    come_call_finalizer2(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    # 315 "21obj.c"
    __result98__ = self->sline;
    return __result98__;
}

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value148;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
    # 320 "21obj.c"
    __result99__ = __result_obj__ = ((char*)(right_value148=__builtin_string(self->sname)));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

_Bool sFalseNode_terminated(){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    # 325 "21obj.c"
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sFalseNode_kind(){
void* __result_obj__;
void* right_value149;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    # 330 "21obj.c"
    __result101__ = __result_obj__ = ((char*)(right_value149=__builtin_string("sFalseNode")));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
struct CVALUE* come_value_77;
void* right_value151;
char* __dec_obj57;
void* right_value152;
void* right_value153;
struct sType* __dec_obj58;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
memset(&come_value_77, 0, sizeof(struct CVALUE*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
    # 335 "21obj.c"
    come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 335, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 337 "21obj.c"
    __dec_obj57=come_value_77->c_value;
    come_value_77->c_value=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("(_Bool)0"))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 338 "21obj.c"
    __dec_obj58=come_value_77->type;
    come_value_77->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value152=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 338, "sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 339 "21obj.c"
    come_value_77->var=((void*)0);
    # 341 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_77->c_value);
    # 343 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
    # 345 "21obj.c"
    __result102__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result102__;
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__;
void* right_value154;
void* right_value155;
struct sNode* _inf_value3;
struct sFalseNode* _inf_obj_value3;
void* right_value158;
struct sNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value158 = (void*)0;
    # 350 "21obj.c"
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 350, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFalseNode*)(right_value155=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value154=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 350, "sFalseNode")))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sFalseNode_sline;
    _inf_value3->sname=(void*)sFalseNode_sname;
    _inf_value3->terminated=(void*)sFalseNode_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    __result105__ = __result_obj__ = ((struct sNode*)(right_value158=_inf_value3));
    come_call_finalizer2(sFalseNode_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFalseNode_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result105__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value159;
struct sType* __dec_obj60;
void* right_value160;
char* __dec_obj61;
struct sSizeOfNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
right_value160 = (void*)0;
    # 361 "21obj.c"
    __dec_obj60=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 363 "21obj.c"
    self->sline=info->sline;
    # 364 "21obj.c"
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 366 "21obj.c"
    __result106__ = __result_obj__ = self;
    come_call_finalizer2(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer2(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    # 371 "21obj.c"
    __result107__ = self->sline;
    return __result107__;
}

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    # 376 "21obj.c"
    __result108__ = __result_obj__ = ((char*)(right_value161=__builtin_string(self->sname)));
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

_Bool sSizeOfNode_terminated(){
void* __result_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    # 381 "21obj.c"
    __result109__ = (_Bool)0;
    return __result109__;
}

char* sSizeOfNode_kind(){
void* __result_obj__;
void* right_value162;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    # 386 "21obj.c"
    __result110__ = __result_obj__ = ((char*)(right_value162=__builtin_string("sSizeOfNode")));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_79;
void* right_value163;
struct CVALUE* come_value_80;
void* right_value164;
struct sType* type2_81;
void* right_value165;
char* type_name_82;
void* right_value166;
char* __dec_obj62;
void* right_value167;
void* right_value168;
struct sType* __dec_obj63;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_79, 0, sizeof(struct sType*));
right_value163 = (void*)0;
memset(&come_value_80, 0, sizeof(struct CVALUE*));
right_value164 = (void*)0;
memset(&type2_81, 0, sizeof(struct sType*));
right_value165 = (void*)0;
memset(&type_name_82, 0, sizeof(char*));
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
    # 391 "21obj.c"
    type_79=self->type;
    # 393 "21obj.c"
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 393, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 395 "21obj.c"
    type2_81=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=solve_generics(type_79,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 397 "21obj.c"
    type_name_82=(char*)come_increment_ref_count(((char*)(right_value165=make_type_name_string(type2_81,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 399 "21obj.c"
    __dec_obj62=come_value_80->c_value;
    come_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("sizeof(%s)",type_name_82))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 400 "21obj.c"
    __dec_obj63=come_value_80->type;
    come_value_80->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 400, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 401 "21obj.c"
    come_value_80->type->mUnsigned=(_Bool)1;
    # 402 "21obj.c"
    come_value_80->var=((void*)0);
    # 404 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_80->c_value);
    # 406 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_80));
    # 408 "21obj.c"
    __result111__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_82 = come_decrement_ref_count2(type_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result111__;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_82 = come_decrement_ref_count2(type_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value169;
struct sNode* __dec_obj64;
void* right_value170;
char* __dec_obj65;
struct sSizeOfExpNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
right_value170 = (void*)0;
    # 419 "21obj.c"
    __dec_obj64=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=sNode_clone(exp))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value169) { right_value169 = come_decrement_ref_count2(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 421 "21obj.c"
    self->sline=info->sline;
    # 422 "21obj.c"
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 424 "21obj.c"
    __result112__ = __result_obj__ = self;
    come_call_finalizer2(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result112__;
    come_call_finalizer2(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    # 429 "21obj.c"
    __result113__ = self->sline;
    return __result113__;
}

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value171;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    # 434 "21obj.c"
    __result114__ = __result_obj__ = ((char*)(right_value171=__builtin_string(self->sname)));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

_Bool sSizeOfExpNode_terminated(){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    # 439 "21obj.c"
    __result115__ = (_Bool)0;
    return __result115__;
}

char* sSizeOfExpNode_kind(){
void* __result_obj__;
void* right_value172;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    # 444 "21obj.c"
    __result116__ = __result_obj__ = ((char*)(right_value172=__builtin_string("sSizeOfExpNode")));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result116__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_83;
_Bool _if_conditional141;
_Bool __result117__;
void* right_value173;
struct CVALUE* come_value_84;
void* right_value174;
struct CVALUE* come_value2_85;
void* right_value175;
char* __dec_obj66;
void* right_value176;
void* right_value177;
struct sType* __dec_obj67;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_83, 0, sizeof(struct sNode*));
right_value173 = (void*)0;
memset(&come_value_84, 0, sizeof(struct CVALUE*));
right_value174 = (void*)0;
memset(&come_value2_85, 0, sizeof(struct CVALUE*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
    # 449 "21obj.c"
    exp_83=(struct sNode*)come_increment_ref_count(self->exp);
    # 455 "21obj.c"
    # 451 "21obj.c"
    if(_if_conditional141=!node_compile(exp_83,info),    _if_conditional141) {
        # 452 "21obj.c"
        __result117__ = (_Bool)0;
        if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result117__;
    }
    # 455 "21obj.c"
    come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 456 "21obj.c"
    dec_stack_ptr(1,info);
    # 458 "21obj.c"
    come_value2_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 458, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 460 "21obj.c"
    __dec_obj66=come_value2_85->c_value;
    come_value2_85->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("sizeof(%s)",come_value_84->c_value))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 461 "21obj.c"
    __dec_obj67=come_value2_85->type;
    come_value2_85->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value176=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 461, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 462 "21obj.c"
    come_value2_85->type->mUnsigned=(_Bool)1;
    # 463 "21obj.c"
    come_value2_85->var=((void*)0);
    # 465 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_85->c_value);
    # 467 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_85));
    # 469 "21obj.c"
    __result118__ = (_Bool)1;
    if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result118__;
    if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value178;
struct sType* __dec_obj68;
void* right_value179;
char* __dec_obj69;
struct sTypeOfNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
right_value179 = (void*)0;
    # 480 "21obj.c"
    __dec_obj68=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 482 "21obj.c"
    self->sline=info->sline;
    # 483 "21obj.c"
    __dec_obj69=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(info->sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 485 "21obj.c"
    __result119__ = __result_obj__ = self;
    come_call_finalizer2(sTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result119__;
    come_call_finalizer2(sTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sTypeOfNode_sline(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    # 490 "21obj.c"
    __result120__ = self->sline;
    return __result120__;
}

char* sTypeOfNode_sname(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value180;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
    # 495 "21obj.c"
    __result121__ = __result_obj__ = ((char*)(right_value180=__builtin_string(self->sname)));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result121__;
}

_Bool sTypeOfNode_terminated(){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    # 500 "21obj.c"
    __result122__ = (_Bool)0;
    return __result122__;
}

char* sTypeOfNode_kind(){
void* __result_obj__;
void* right_value181;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
    # 505 "21obj.c"
    __result123__ = __result_obj__ = ((char*)(right_value181=__builtin_string("sTypeOfNode")));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_86;
void* right_value182;
struct CVALUE* come_value_87;
void* right_value183;
struct sType* type2_88;
void* right_value184;
char* type_name_89;
void* right_value185;
char* __dec_obj70;
void* right_value186;
void* right_value187;
struct sType* __dec_obj71;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_86, 0, sizeof(struct sType*));
right_value182 = (void*)0;
memset(&come_value_87, 0, sizeof(struct CVALUE*));
right_value183 = (void*)0;
memset(&type2_88, 0, sizeof(struct sType*));
right_value184 = (void*)0;
memset(&type_name_89, 0, sizeof(char*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
    # 510 "21obj.c"
    type_86=self->type;
    # 512 "21obj.c"
    come_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 512, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 514 "21obj.c"
    type2_88=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=solve_generics(type_86,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 516 "21obj.c"
    type_name_89=(char*)come_increment_ref_count(((char*)(right_value184=make_type_name_string(type2_88,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 518 "21obj.c"
    __dec_obj70=come_value_87->c_value;
    come_value_87->c_value=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("\"%s\"",type_name_89))));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 519 "21obj.c"
    __dec_obj71=come_value_87->type;
    come_value_87->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value186=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 519, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 520 "21obj.c"
    come_value_87->var=((void*)0);
    # 522 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_87->c_value);
    # 524 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_87));
    # 526 "21obj.c"
    __result124__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_89 = come_decrement_ref_count2(type_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result124__;
    come_call_finalizer2(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_89 = come_decrement_ref_count2(type_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value188;
struct sNode* __dec_obj72;
void* right_value189;
char* __dec_obj73;
struct sTypeOfExpNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value189 = (void*)0;
    # 537 "21obj.c"
    __dec_obj72=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=sNode_clone(exp))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value188) { right_value188 = come_decrement_ref_count2(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 539 "21obj.c"
    self->sline=info->sline;
    # 540 "21obj.c"
    __dec_obj73=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string(info->sname))));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 542 "21obj.c"
    __result125__ = __result_obj__ = self;
    come_call_finalizer2(sTypeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result125__;
    come_call_finalizer2(sTypeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sTypeOfExpNode_sline(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    # 547 "21obj.c"
    __result126__ = self->sline;
    return __result126__;
}

char* sTypeOfExpNode_sname(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value190;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
    # 552 "21obj.c"
    __result127__ = __result_obj__ = ((char*)(right_value190=__builtin_string(self->sname)));
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
}

_Bool sTypeOfExpNode_terminated(){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    # 557 "21obj.c"
    __result128__ = (_Bool)0;
    return __result128__;
}

char* sTypeOfExpNode_kind(){
void* __result_obj__;
void* right_value191;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
    # 562 "21obj.c"
    __result129__ = __result_obj__ = ((char*)(right_value191=__builtin_string("sTypeOfExpNode")));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_90;
_Bool _if_conditional146;
_Bool __result130__;
void* right_value192;
struct CVALUE* come_value_91;
void* right_value193;
struct sType* type_92;
void* right_value194;
struct sType* type2_93;
void* right_value195;
char* type_name_94;
void* right_value196;
char* __dec_obj74;
void* right_value197;
void* right_value198;
struct sType* __dec_obj75;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_90, 0, sizeof(struct sNode*));
right_value192 = (void*)0;
memset(&come_value_91, 0, sizeof(struct CVALUE*));
right_value193 = (void*)0;
memset(&type_92, 0, sizeof(struct sType*));
right_value194 = (void*)0;
memset(&type2_93, 0, sizeof(struct sType*));
right_value195 = (void*)0;
memset(&type_name_94, 0, sizeof(char*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
    # 567 "21obj.c"
    exp_90=(struct sNode*)come_increment_ref_count(self->exp);
    # 573 "21obj.c"
    # 569 "21obj.c"
    if(_if_conditional146=!node_compile(exp_90,info),    _if_conditional146) {
        # 570 "21obj.c"
        __result130__ = (_Bool)0;
        if(exp_90) { exp_90 = come_decrement_ref_count2(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result130__;
    }
    # 573 "21obj.c"
    come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 574 "21obj.c"
    dec_stack_ptr(1,info);
    # 576 "21obj.c"
    type_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(come_value_91->type))));
    come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 578 "21obj.c"
    type2_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=solve_generics(type_92,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 580 "21obj.c"
    type_name_94=(char*)come_increment_ref_count(((char*)(right_value195=make_type_name_string(type2_93,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 582 "21obj.c"
    __dec_obj74=come_value_91->c_value;
    come_value_91->c_value=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("\"%s\"",type_name_94))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 583 "21obj.c"
    __dec_obj75=come_value_91->type;
    come_value_91->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 583, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 584 "21obj.c"
    come_value_91->var=((void*)0);
    # 586 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_91->c_value);
    # 588 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_91));
    # 590 "21obj.c"
    __result131__ = (_Bool)1;
    if(exp_90) { exp_90 = come_decrement_ref_count2(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_94 = come_decrement_ref_count2(type_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result131__;
    if(exp_90) { exp_90 = come_decrement_ref_count2(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_94 = come_decrement_ref_count2(type_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value199;
struct sNode* __dec_obj76;
void* right_value200;
char* __dec_obj77;
struct sDynamicTypeOfNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
right_value200 = (void*)0;
    # 601 "21obj.c"
    __dec_obj76=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(exp))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value199) { right_value199 = come_decrement_ref_count2(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 603 "21obj.c"
    self->sline=info->sline;
    # 604 "21obj.c"
    __dec_obj77=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string(info->sname))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 606 "21obj.c"
    __result132__ = __result_obj__ = self;
    come_call_finalizer2(sDynamicTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result132__;
    come_call_finalizer2(sDynamicTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional147;
_Bool _if_conditional148;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sDynamicTypeOfNode_finalize"
        # 0 "sDynamicTypeOfNode_finalize"
        if(_if_conditional147=self!=((void*)0)&&self->exp!=((void*)0),        _if_conditional147) {
            # 0 "sDynamicTypeOfNode_finalize"
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 2 "sDynamicTypeOfNode_finalize"
        # 1 "sDynamicTypeOfNode_finalize"
        if(_if_conditional148=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional148) {
            # 1 "sDynamicTypeOfNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

int sDynamicTypeOfNode_sline(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    # 611 "21obj.c"
    __result133__ = self->sline;
    return __result133__;
}

char* sDynamicTypeOfNode_sname(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value201;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    # 616 "21obj.c"
    __result134__ = __result_obj__ = ((char*)(right_value201=__builtin_string(self->sname)));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sDynamicTypeOfNode_terminated(){
void* __result_obj__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    # 621 "21obj.c"
    __result135__ = (_Bool)0;
    return __result135__;
}

char* sDynamicTypeOfNode_kind(){
void* __result_obj__;
void* right_value202;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    # 626 "21obj.c"
    __result136__ = __result_obj__ = ((char*)(right_value202=__builtin_string("sDynamicTypeOfNode")));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result136__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_95;
_Bool _if_conditional149;
_Bool __result137__;
void* right_value203;
struct CVALUE* come_value_96;
_Bool _if_conditional150;
void* right_value204;
struct sType* type_97;
void* right_value205;
struct sType* type2_98;
void* right_value206;
char* type_name_99;
void* right_value207;
char* __dec_obj78;
void* right_value208;
void* right_value209;
struct sType* __dec_obj79;
_Bool __result138__;
void* right_value210;
struct CVALUE* come_value2_100;
void* right_value211;
char* __dec_obj80;
void* right_value212;
void* right_value213;
struct sType* __dec_obj81;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_95, 0, sizeof(struct sNode*));
right_value203 = (void*)0;
memset(&come_value_96, 0, sizeof(struct CVALUE*));
right_value204 = (void*)0;
memset(&type_97, 0, sizeof(struct sType*));
right_value205 = (void*)0;
memset(&type2_98, 0, sizeof(struct sType*));
right_value206 = (void*)0;
memset(&type_name_99, 0, sizeof(char*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&come_value2_100, 0, sizeof(struct CVALUE*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
    # 631 "21obj.c"
    exp_95=(struct sNode*)come_increment_ref_count(self->exp);
    # 637 "21obj.c"
    # 633 "21obj.c"
    if(_if_conditional149=!node_compile(exp_95,info),    _if_conditional149) {
        # 634 "21obj.c"
        __result137__ = (_Bool)0;
        if(exp_95) { exp_95 = come_decrement_ref_count2(exp_95, ((struct sNode*)exp_95)->finalize, ((struct sNode*)exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result137__;
    }
    # 637 "21obj.c"
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 638 "21obj.c"
    dec_stack_ptr(1,info);
    # 669 "21obj.c"
    # 640 "21obj.c"
    if(_if_conditional150=!come_value_96->type->mHeap,    _if_conditional150) {
        # 641 "21obj.c"
        type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(come_value_96->type))));
        come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 643 "21obj.c"
        type2_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=solve_generics(type_97,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 645 "21obj.c"
        type_name_99=(char*)come_increment_ref_count(((char*)(right_value206=make_type_name_string(type2_98,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 647 "21obj.c"
        __dec_obj78=come_value_96->c_value;
        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("\"%s\"",type_name_99))));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 648 "21obj.c"
        __dec_obj79=come_value_96->type;
        come_value_96->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value208=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 648, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 649 "21obj.c"
        come_value_96->var=((void*)0);
        # 651 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_96->c_value);
        # 653 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_96));
        # 655 "21obj.c"
        __result138__ = (_Bool)1;
        come_call_finalizer2(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_99 = come_decrement_ref_count2(type_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_95) { exp_95 = come_decrement_ref_count2(exp_95, ((struct sNode*)exp_95)->finalize, ((struct sNode*)exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result138__;
        come_call_finalizer2(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_99 = come_decrement_ref_count2(type_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 658 "21obj.c"
        come_value2_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 658, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 660 "21obj.c"
        __dec_obj80=come_value2_100->c_value;
        come_value2_100->c_value=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("come_dynamic_typeof(%s)",come_value_96->c_value))));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 661 "21obj.c"
        __dec_obj81=come_value2_100->type;
        come_value2_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value212=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 661, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 662 "21obj.c"
        come_value2_100->var=((void*)0);
        # 664 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value2_100->c_value);
        # 666 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_100));
        come_call_finalizer2(CVALUE_finalize,come_value2_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 669 "21obj.c"
    __result139__ = (_Bool)1;
    if(exp_95) { exp_95 = come_decrement_ref_count2(exp_95, ((struct sNode*)exp_95)->finalize, ((struct sNode*)exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result139__;
    if(exp_95) { exp_95 = come_decrement_ref_count2(exp_95, ((struct sNode*)exp_95)->finalize, ((struct sNode*)exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value214;
struct sType* __dec_obj82;
void* right_value215;
char* __dec_obj83;
struct sAlignOfNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
right_value215 = (void*)0;
    # 680 "21obj.c"
    __dec_obj82=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 682 "21obj.c"
    self->sline=info->sline;
    # 683 "21obj.c"
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(info->sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 685 "21obj.c"
    __result140__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result140__;
    come_call_finalizer2(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    # 690 "21obj.c"
    __result141__ = self->sline;
    return __result141__;
}

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value216;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
    # 695 "21obj.c"
    __result142__ = __result_obj__ = ((char*)(right_value216=__builtin_string(self->sname)));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

_Bool sAlignOfNode_terminated(){
void* __result_obj__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    # 700 "21obj.c"
    __result143__ = (_Bool)0;
    return __result143__;
}

char* sAlignOfNode_kind(){
void* __result_obj__;
void* right_value217;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
    # 705 "21obj.c"
    __result144__ = __result_obj__ = ((char*)(right_value217=__builtin_string("sAlignOfNode")));
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result144__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_101;
void* right_value218;
struct CVALUE* come_value_102;
void* right_value219;
struct sType* type2_103;
void* right_value220;
char* type_name_104;
void* right_value221;
char* __dec_obj84;
void* right_value222;
void* right_value223;
struct sType* __dec_obj85;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_101, 0, sizeof(struct sType*));
right_value218 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
memset(&type2_103, 0, sizeof(struct sType*));
right_value220 = (void*)0;
memset(&type_name_104, 0, sizeof(char*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
    # 710 "21obj.c"
    type_101=self->type;
    # 712 "21obj.c"
    come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 712, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 714 "21obj.c"
    type2_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=solve_generics(type_101,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 716 "21obj.c"
    type_name_104=(char*)come_increment_ref_count(((char*)(right_value220=make_type_name_string(type2_103,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 718 "21obj.c"
    __dec_obj84=come_value_102->c_value;
    come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("_Alignof(%s)",type_name_104))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 719 "21obj.c"
    __dec_obj85=come_value_102->type;
    come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value222=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 719, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 720 "21obj.c"
    come_value_102->type->mUnsigned=(_Bool)1;
    # 721 "21obj.c"
    come_value_102->var=((void*)0);
    # 723 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_102->c_value);
    # 725 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
    # 727 "21obj.c"
    __result145__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result145__;
    come_call_finalizer2(CVALUE_finalize,come_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value224;
struct sNode* __dec_obj86;
void* right_value225;
char* __dec_obj87;
struct sAlignOfExpNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
right_value225 = (void*)0;
    # 738 "21obj.c"
    __dec_obj86=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=sNode_clone(exp))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 740 "21obj.c"
    self->sline=info->sline;
    # 741 "21obj.c"
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 743 "21obj.c"
    __result146__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result146__;
    come_call_finalizer2(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    # 748 "21obj.c"
    __result147__ = self->sline;
    return __result147__;
}

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value226;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
    # 753 "21obj.c"
    __result148__ = __result_obj__ = ((char*)(right_value226=__builtin_string(self->sname)));
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result148__;
}

_Bool sAlignOfExpNode_terminated(){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    # 758 "21obj.c"
    __result149__ = (_Bool)0;
    return __result149__;
}

char* sAlignOfExpNode_kind(){
void* __result_obj__;
void* right_value227;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
    # 763 "21obj.c"
    __result150__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sAlignOfExpNode")));
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_105;
_Bool _if_conditional155;
_Bool __result151__;
void* right_value228;
struct CVALUE* come_value_106;
void* right_value229;
struct CVALUE* come_value2_107;
void* right_value230;
char* __dec_obj88;
void* right_value231;
void* right_value232;
struct sType* __dec_obj89;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_105, 0, sizeof(struct sNode*));
right_value228 = (void*)0;
memset(&come_value_106, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
memset(&come_value2_107, 0, sizeof(struct CVALUE*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
    # 768 "21obj.c"
    exp_105=(struct sNode*)come_increment_ref_count(self->exp);
    # 774 "21obj.c"
    # 770 "21obj.c"
    if(_if_conditional155=!node_compile(exp_105,info),    _if_conditional155) {
        # 771 "21obj.c"
        __result151__ = (_Bool)0;
        if(exp_105) { exp_105 = come_decrement_ref_count2(exp_105, ((struct sNode*)exp_105)->finalize, ((struct sNode*)exp_105)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result151__;
    }
    # 774 "21obj.c"
    come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 775 "21obj.c"
    dec_stack_ptr(1,info);
    # 777 "21obj.c"
    come_value2_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 777, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 779 "21obj.c"
    __dec_obj88=come_value2_107->c_value;
    come_value2_107->c_value=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("_AlignOf(%s)",come_value_106->c_value))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 780 "21obj.c"
    __dec_obj89=come_value2_107->type;
    come_value2_107->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 780, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 781 "21obj.c"
    come_value2_107->type->mUnsigned=(_Bool)1;
    # 782 "21obj.c"
    come_value2_107->var=((void*)0);
    # 784 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_107->c_value);
    # 786 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_107));
    # 788 "21obj.c"
    __result152__ = (_Bool)1;
    if(exp_105) { exp_105 = come_decrement_ref_count2(exp_105, ((struct sNode*)exp_105)->finalize, ((struct sNode*)exp_105)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result152__;
    if(exp_105) { exp_105 = come_decrement_ref_count2(exp_105, ((struct sNode*)exp_105)->finalize, ((struct sNode*)exp_105)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value233;
struct sType* __dec_obj90;
void* right_value234;
char* __dec_obj91;
struct sAlignOfNode2* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
right_value234 = (void*)0;
    # 799 "21obj.c"
    __dec_obj90=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 801 "21obj.c"
    self->sline=info->sline;
    # 802 "21obj.c"
    __dec_obj91=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(info->sname))));
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 804 "21obj.c"
    __result153__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result153__;
    come_call_finalizer2(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    # 809 "21obj.c"
    __result154__ = self->sline;
    return __result154__;
}

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value235;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
    # 814 "21obj.c"
    __result155__ = __result_obj__ = ((char*)(right_value235=__builtin_string(self->sname)));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result155__;
}

_Bool sAlignOfNode2_terminated(){
void* __result_obj__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    # 819 "21obj.c"
    __result156__ = (_Bool)0;
    return __result156__;
}

char* sAlignOfNode2_kind(){
void* __result_obj__;
void* right_value236;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
    # 824 "21obj.c"
    __result157__ = __result_obj__ = ((char*)(right_value236=__builtin_string("sAlignOfNode2")));
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result157__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_108;
void* right_value237;
struct CVALUE* come_value_109;
void* right_value238;
struct sType* type2_110;
void* right_value239;
char* type_name_111;
void* right_value240;
char* __dec_obj92;
void* right_value241;
void* right_value242;
struct sType* __dec_obj93;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_108, 0, sizeof(struct sType*));
right_value237 = (void*)0;
memset(&come_value_109, 0, sizeof(struct CVALUE*));
right_value238 = (void*)0;
memset(&type2_110, 0, sizeof(struct sType*));
right_value239 = (void*)0;
memset(&type_name_111, 0, sizeof(char*));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
    # 829 "21obj.c"
    type_108=self->type;
    # 831 "21obj.c"
    come_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 831, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 833 "21obj.c"
    type2_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=solve_generics(type_108,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 835 "21obj.c"
    type_name_111=(char*)come_increment_ref_count(((char*)(right_value239=make_type_name_string(type2_110,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 837 "21obj.c"
    __dec_obj92=come_value_109->c_value;
    come_value_109->c_value=(char*)come_increment_ref_count(((char*)(right_value240=xsprintf("__alignof__(%s)",type_name_111))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 838 "21obj.c"
    __dec_obj93=come_value_109->type;
    come_value_109->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value241=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 838, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 839 "21obj.c"
    come_value_109->type->mUnsigned=(_Bool)1;
    # 840 "21obj.c"
    come_value_109->var=((void*)0);
    # 842 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_109->c_value);
    # 844 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_109));
    # 846 "21obj.c"
    __result158__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_111 = come_decrement_ref_count2(type_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result158__;
    come_call_finalizer2(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_111 = come_decrement_ref_count2(type_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value243;
struct sNode* __dec_obj94;
void* right_value244;
char* __dec_obj95;
struct sAlignOfExpNode2* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
right_value244 = (void*)0;
    # 857 "21obj.c"
    __dec_obj94=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value243=sNode_clone(exp))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value243) { right_value243 = come_decrement_ref_count2(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 859 "21obj.c"
    self->sline=info->sline;
    # 860 "21obj.c"
    __dec_obj95=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(info->sname))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 862 "21obj.c"
    __result159__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result159__;
    come_call_finalizer2(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    # 867 "21obj.c"
    __result160__ = self->sline;
    return __result160__;
}

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value245;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
    # 872 "21obj.c"
    __result161__ = __result_obj__ = ((char*)(right_value245=__builtin_string(self->sname)));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result161__;
}

_Bool sAlignOfExpNode2_terminated(){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    # 877 "21obj.c"
    __result162__ = (_Bool)0;
    return __result162__;
}

char* sAlignOfExpNode2_kind(){
void* __result_obj__;
void* right_value246;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
    # 882 "21obj.c"
    __result163__ = __result_obj__ = ((char*)(right_value246=__builtin_string("sAlignOfExpNode2")));
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_112;
_Bool _if_conditional160;
_Bool __result164__;
void* right_value247;
struct CVALUE* come_value_113;
void* right_value248;
struct CVALUE* come_value2_114;
void* right_value249;
char* __dec_obj96;
void* right_value250;
void* right_value251;
struct sType* __dec_obj97;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_112, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&come_value_113, 0, sizeof(struct CVALUE*));
right_value248 = (void*)0;
memset(&come_value2_114, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
    # 887 "21obj.c"
    exp_112=(struct sNode*)come_increment_ref_count(self->exp);
    # 893 "21obj.c"
    # 889 "21obj.c"
    if(_if_conditional160=!node_compile(exp_112,info),    _if_conditional160) {
        # 890 "21obj.c"
        __result164__ = (_Bool)0;
        if(exp_112) { exp_112 = come_decrement_ref_count2(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result164__;
    }
    # 893 "21obj.c"
    come_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 894 "21obj.c"
    dec_stack_ptr(1,info);
    # 896 "21obj.c"
    come_value2_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 896, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 898 "21obj.c"
    __dec_obj96=come_value2_114->c_value;
    come_value2_114->c_value=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("__alignof__(%s)",come_value_113->c_value))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 899 "21obj.c"
    __dec_obj97=come_value2_114->type;
    come_value2_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 899, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 900 "21obj.c"
    come_value2_114->type->mUnsigned=(_Bool)1;
    # 901 "21obj.c"
    come_value2_114->var=((void*)0);
    # 903 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_114->c_value);
    # 905 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_114));
    # 907 "21obj.c"
    __result165__ = (_Bool)1;
    if(exp_112) { exp_112 = come_decrement_ref_count2(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result165__;
    if(exp_112) { exp_112 = come_decrement_ref_count2(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value252;
struct sType* __dec_obj98;
void* right_value253;
char* __dec_obj99;
struct sAlignAsNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    # 918 "21obj.c"
    __dec_obj98=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 920 "21obj.c"
    self->sline=info->sline;
    # 921 "21obj.c"
    __dec_obj99=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value253=__builtin_string(info->sname))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 923 "21obj.c"
    __result166__ = __result_obj__ = self;
    come_call_finalizer2(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result166__;
    come_call_finalizer2(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
int __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    # 928 "21obj.c"
    __result167__ = self->sline;
    return __result167__;
}

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value254;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
    # 933 "21obj.c"
    __result168__ = __result_obj__ = ((char*)(right_value254=__builtin_string(self->sname)));
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result168__;
}

_Bool sAlignAsNode_terminated(){
void* __result_obj__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    # 938 "21obj.c"
    __result169__ = (_Bool)0;
    return __result169__;
}

char* sAlignAsNode_kind(){
void* __result_obj__;
void* right_value255;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    # 943 "21obj.c"
    __result170__ = __result_obj__ = ((char*)(right_value255=__builtin_string("sAlignAsNode")));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result170__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_115;
void* right_value256;
struct CVALUE* come_value_116;
void* right_value257;
struct sType* type2_117;
void* right_value258;
char* type_name_118;
void* right_value259;
char* __dec_obj100;
void* right_value260;
void* right_value261;
struct sType* __dec_obj101;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_115, 0, sizeof(struct sType*));
right_value256 = (void*)0;
memset(&come_value_116, 0, sizeof(struct CVALUE*));
right_value257 = (void*)0;
memset(&type2_117, 0, sizeof(struct sType*));
right_value258 = (void*)0;
memset(&type_name_118, 0, sizeof(char*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
    # 948 "21obj.c"
    type_115=self->type;
    # 950 "21obj.c"
    come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 950, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 952 "21obj.c"
    type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=solve_generics(type_115,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 954 "21obj.c"
    type_name_118=(char*)come_increment_ref_count(((char*)(right_value258=make_type_name_string(type2_117,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 956 "21obj.c"
    __dec_obj100=come_value_116->c_value;
    come_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("_Alignas(%s)",type_name_118))));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 957 "21obj.c"
    __dec_obj101=come_value_116->type;
    come_value_116->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 957, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 958 "21obj.c"
    come_value_116->type->mUnsigned=(_Bool)1;
    # 959 "21obj.c"
    come_value_116->var=((void*)0);
    # 961 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_116->c_value);
    # 963 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_116));
    # 965 "21obj.c"
    __result171__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_118 = come_decrement_ref_count2(type_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result171__;
    come_call_finalizer2(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_118 = come_decrement_ref_count2(type_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value262;
struct sNode* __dec_obj102;
void* right_value263;
char* __dec_obj103;
struct sAlignAsExpNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    # 976 "21obj.c"
    __dec_obj102=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=sNode_clone(exp))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 978 "21obj.c"
    self->sline=info->sline;
    # 979 "21obj.c"
    __dec_obj103=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(info->sname))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 981 "21obj.c"
    __result172__ = __result_obj__ = self;
    come_call_finalizer2(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result172__;
    come_call_finalizer2(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    # 986 "21obj.c"
    __result173__ = self->sline;
    return __result173__;
}

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value264;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
    # 991 "21obj.c"
    __result174__ = __result_obj__ = ((char*)(right_value264=__builtin_string(self->sname)));
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result174__;
}

_Bool sAlignAsExpNode_terminated(){
void* __result_obj__;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    # 996 "21obj.c"
    __result175__ = (_Bool)0;
    return __result175__;
}

char* sAlignAsExpNode_kind(){
void* __result_obj__;
void* right_value265;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
    # 1001 "21obj.c"
    __result176__ = __result_obj__ = ((char*)(right_value265=__builtin_string("sAlignAsExpNode")));
    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result176__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_119;
_Bool _if_conditional165;
_Bool __result177__;
void* right_value266;
struct CVALUE* come_value_120;
void* right_value267;
struct CVALUE* come_value2_121;
void* right_value268;
char* __dec_obj104;
void* right_value269;
void* right_value270;
struct sType* __dec_obj105;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_119, 0, sizeof(struct sNode*));
right_value266 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value267 = (void*)0;
memset(&come_value2_121, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
    # 1007 "21obj.c"
    exp_119=(struct sNode*)come_increment_ref_count(self->exp);
    # 1013 "21obj.c"
    # 1009 "21obj.c"
    if(_if_conditional165=!node_compile(exp_119,info),    _if_conditional165) {
        # 1010 "21obj.c"
        __result177__ = (_Bool)0;
        if(exp_119) { exp_119 = come_decrement_ref_count2(exp_119, ((struct sNode*)exp_119)->finalize, ((struct sNode*)exp_119)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result177__;
    }
    # 1013 "21obj.c"
    come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1014 "21obj.c"
    dec_stack_ptr(1,info);
    # 1016 "21obj.c"
    come_value2_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1016, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1018 "21obj.c"
    __dec_obj104=come_value2_121->c_value;
    come_value2_121->c_value=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("_Alignas(%s)",come_value_120->c_value))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1019 "21obj.c"
    __dec_obj105=come_value2_121->type;
    come_value2_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1019, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1020 "21obj.c"
    come_value2_121->type->mUnsigned=(_Bool)1;
    # 1021 "21obj.c"
    come_value2_121->var=((void*)0);
    # 1023 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_121->c_value);
    # 1025 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_121));
    # 1027 "21obj.c"
    __result178__ = (_Bool)1;
    if(exp_119) { exp_119 = come_decrement_ref_count2(exp_119, ((struct sNode*)exp_119)->finalize, ((struct sNode*)exp_119)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result178__;
    if(exp_119) { exp_119 = come_decrement_ref_count2(exp_119, ((struct sNode*)exp_119)->finalize, ((struct sNode*)exp_119)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value271;
struct sNode* __dec_obj106;
void* right_value272;
char* __dec_obj107;
struct sDeleteNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
right_value272 = (void*)0;
    # 1038 "21obj.c"
    __dec_obj106=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=sNode_clone(node))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1040 "21obj.c"
    self->sline=info->sline;
    # 1041 "21obj.c"
    __dec_obj107=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string(info->sname))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1043 "21obj.c"
    __result179__ = __result_obj__ = self;
    come_call_finalizer2(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result179__;
    come_call_finalizer2(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
int __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1048 "21obj.c"
    __result180__ = self->sline;
    return __result180__;
}

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value273;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
    # 1053 "21obj.c"
    __result181__ = __result_obj__ = ((char*)(right_value273=__builtin_string(self->sname)));
    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result181__;
}

_Bool sDeleteNode_terminated(){
void* __result_obj__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1058 "21obj.c"
    __result182__ = (_Bool)0;
    return __result182__;
}

char* sDeleteNode_kind(){
void* __result_obj__;
void* right_value274;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
    # 1063 "21obj.c"
    __result183__ = __result_obj__ = ((char*)(right_value274=__builtin_string("sDeleteNode")));
    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result183__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_122;
_Bool _if_conditional168;
_Bool __result184__;
void* right_value275;
struct CVALUE* come_value_123;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_122, 0, sizeof(struct sNode*));
right_value275 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
    # 1068 "21obj.c"
    node_122=self->node;
    # 1074 "21obj.c"
    # 1070 "21obj.c"
    if(_if_conditional168=!node_compile(node_122,info),    _if_conditional168) {
        # 1071 "21obj.c"
        __result184__ = (_Bool)0;
        return __result184__;
    }
    # 1074 "21obj.c"
    come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1075 "21obj.c"
    dec_stack_ptr(1,info);
    # 1077 "21obj.c"
    free_object(come_value_123->type,come_value_123->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    # 1079 "21obj.c"
    __result185__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result185__;
    come_call_finalizer2(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value276;
struct sNode* __dec_obj108;
void* right_value277;
char* __dec_obj109;
struct sForceDeleteNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
right_value277 = (void*)0;
    # 1090 "21obj.c"
    __dec_obj108=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=sNode_clone(node))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1092 "21obj.c"
    self->sline=info->sline;
    # 1093 "21obj.c"
    __dec_obj109=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string(info->sname))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1095 "21obj.c"
    __result186__ = __result_obj__ = self;
    come_call_finalizer2(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result186__;
    come_call_finalizer2(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
int __result187__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1100 "21obj.c"
    __result187__ = self->sline;
    return __result187__;
}

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value278;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
    # 1105 "21obj.c"
    __result188__ = __result_obj__ = ((char*)(right_value278=__builtin_string(self->sname)));
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result188__;
}

_Bool sForceDeleteNode_terminated(){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1110 "21obj.c"
    __result189__ = (_Bool)0;
    return __result189__;
}

char* sForceDeleteNode_kind(){
void* __result_obj__;
void* right_value279;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
    # 1115 "21obj.c"
    __result190__ = __result_obj__ = ((char*)(right_value279=__builtin_string("sForceDeleteNode")));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result190__;
}

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_124;
_Bool _if_conditional171;
_Bool __result191__;
void* right_value280;
struct CVALUE* come_value_125;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_124, 0, sizeof(struct sNode*));
right_value280 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
    # 1120 "21obj.c"
    node_124=self->node;
    # 1126 "21obj.c"
    # 1122 "21obj.c"
    if(_if_conditional171=!node_compile(node_124,info),    _if_conditional171) {
        # 1123 "21obj.c"
        __result191__ = (_Bool)0;
        return __result191__;
    }
    # 1126 "21obj.c"
    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1127 "21obj.c"
    dec_stack_ptr(1,info);
    # 1129 "21obj.c"
    free_object(come_value_125->type,come_value_125->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    # 1131 "21obj.c"
    __result192__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result192__;
    come_call_finalizer2(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value281;
struct sNode* __dec_obj110;
void* right_value282;
char* __dec_obj111;
struct sDelegateNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value281 = (void*)0;
right_value282 = (void*)0;
    # 1142 "21obj.c"
    __dec_obj110=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=sNode_clone(node))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1144 "21obj.c"
    self->sline=info->sline;
    # 1145 "21obj.c"
    __dec_obj111=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(info->sname))));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1147 "21obj.c"
    __result193__ = __result_obj__ = self;
    come_call_finalizer2(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result193__;
    come_call_finalizer2(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
int __result194__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1152 "21obj.c"
    __result194__ = self->sline;
    return __result194__;
}

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value283;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
    # 1157 "21obj.c"
    __result195__ = __result_obj__ = ((char*)(right_value283=__builtin_string(self->sname)));
    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result195__;
}

_Bool sDelegateNode_terminated(){
void* __result_obj__;
_Bool __result196__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1162 "21obj.c"
    __result196__ = (_Bool)0;
    return __result196__;
}

char* sDelegateNode_kind(){
void* __result_obj__;
void* right_value284;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
    # 1167 "21obj.c"
    __result197__ = __result_obj__ = ((char*)(right_value284=__builtin_string("sDelegateNode")));
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result197__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_126;
_Bool _if_conditional174;
_Bool __result198__;
void* right_value285;
struct CVALUE* come_value_127;
_Bool _if_conditional175;
_Bool __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_126, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
memset(&come_value_127, 0, sizeof(struct CVALUE*));
    # 1172 "21obj.c"
    node_126=self->node;
    # 1178 "21obj.c"
    # 1174 "21obj.c"
    if(_if_conditional174=!node_compile(node_126,info),    _if_conditional174) {
        # 1175 "21obj.c"
        __result198__ = (_Bool)0;
        return __result198__;
    }
    # 1178 "21obj.c"
    come_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value285=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1179 "21obj.c"
    dec_stack_ptr(1,info);
    # 1181 "21obj.c"
    come_value_127->type->mDelegate=(_Bool)1;
    # 1193 "21obj.c"
    # 1183 "21obj.c"
    if(come_value_127->var) {
        # 1184 "21obj.c"
        come_value_127->var->mType->mDelegate=(_Bool)1;
    }
    # 1193 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_127));
    # 1195 "21obj.c"
    __result199__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result199__;
    come_call_finalizer2(CVALUE_finalize,come_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value286;
struct sNode* __dec_obj112;
void* right_value287;
char* __dec_obj113;
struct sShareNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
right_value287 = (void*)0;
    # 1205 "21obj.c"
    __dec_obj112=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(node))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1207 "21obj.c"
    self->sline=info->sline;
    # 1208 "21obj.c"
    __dec_obj113=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string(info->sname))));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1210 "21obj.c"
    __result200__ = __result_obj__ = self;
    come_call_finalizer2(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result200__;
    come_call_finalizer2(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sShareNode_sline(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
int __result201__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1215 "21obj.c"
    __result201__ = self->sline;
    return __result201__;
}

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value288;
char* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
    # 1220 "21obj.c"
    __result202__ = __result_obj__ = ((char*)(right_value288=__builtin_string(self->sname)));
    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result202__;
}

_Bool sShareNode_terminated(){
void* __result_obj__;
_Bool __result203__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1225 "21obj.c"
    __result203__ = (_Bool)0;
    return __result203__;
}

char* sShareNode_kind(){
void* __result_obj__;
void* right_value289;
char* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value289 = (void*)0;
    # 1230 "21obj.c"
    __result204__ = __result_obj__ = ((char*)(right_value289=__builtin_string("sShareNode")));
    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result204__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_128;
_Bool _if_conditional178;
_Bool __result205__;
void* right_value290;
struct CVALUE* come_value_129;
_Bool _if_conditional179;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_128, 0, sizeof(struct sNode*));
right_value290 = (void*)0;
memset(&come_value_129, 0, sizeof(struct CVALUE*));
    # 1235 "21obj.c"
    node_128=self->node;
    # 1241 "21obj.c"
    # 1237 "21obj.c"
    if(_if_conditional178=!node_compile(node_128,info),    _if_conditional178) {
        # 1238 "21obj.c"
        __result205__ = (_Bool)0;
        return __result205__;
    }
    # 1241 "21obj.c"
    come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1242 "21obj.c"
    dec_stack_ptr(1,info);
    # 1244 "21obj.c"
    come_value_129->type->mShare=(_Bool)1;
    # 1250 "21obj.c"
    # 1246 "21obj.c"
    if(come_value_129->var) {
        # 1247 "21obj.c"
        come_value_129->var->mType->mShare=(_Bool)1;
    }
    # 1250 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_129));
    # 1252 "21obj.c"
    __result206__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result206__;
    come_call_finalizer2(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value291;
struct sNode* __dec_obj114;
void* right_value292;
char* __dec_obj115;
struct sBorrowNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value291 = (void*)0;
right_value292 = (void*)0;
    # 1263 "21obj.c"
    __dec_obj114=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=sNode_clone(node))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1265 "21obj.c"
    self->sline=info->sline;
    # 1266 "21obj.c"
    __dec_obj115=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string(info->sname))));
    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1268 "21obj.c"
    __result207__ = __result_obj__ = self;
    come_call_finalizer2(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result207__;
    come_call_finalizer2(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
int __result208__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1273 "21obj.c"
    __result208__ = self->sline;
    return __result208__;
}

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value293;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
    # 1278 "21obj.c"
    __result209__ = __result_obj__ = ((char*)(right_value293=__builtin_string(self->sname)));
    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result209__;
}

_Bool sBorrowNode_terminated(){
void* __result_obj__;
_Bool __result210__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1283 "21obj.c"
    __result210__ = (_Bool)0;
    return __result210__;
}

char* sBorrowNode_kind(){
void* __result_obj__;
void* right_value294;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
    # 1288 "21obj.c"
    __result211__ = __result_obj__ = ((char*)(right_value294=__builtin_string("sBorrowNode")));
    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result211__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_130;
_Bool _if_conditional182;
_Bool __result212__;
void* right_value295;
struct CVALUE* come_value_131;
int right_value_id_132;
_Bool _if_conditional183;
_Bool __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_130, 0, sizeof(struct sNode*));
right_value295 = (void*)0;
memset(&come_value_131, 0, sizeof(struct CVALUE*));
memset(&right_value_id_132, 0, sizeof(int));
    # 1293 "21obj.c"
    node_130=self->node;
    # 1299 "21obj.c"
    # 1295 "21obj.c"
    if(_if_conditional182=!node_compile(node_130,info),    _if_conditional182) {
        # 1296 "21obj.c"
        __result212__ = (_Bool)0;
        return __result212__;
    }
    # 1299 "21obj.c"
    come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1300 "21obj.c"
    dec_stack_ptr(1,info);
    # 1302 "21obj.c"
    come_value_131->type->mHeap=(_Bool)0;
    # 1304 "21obj.c"
    right_value_id_132=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_131->c_value));
    # 1310 "21obj.c"
    # 1306 "21obj.c"
    if(_if_conditional183=right_value_id_132!=-1,    _if_conditional183) {
        # 1307 "21obj.c"
        remove_object_from_right_values(right_value_id_132,info);
    }
    # 1310 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
    # 1312 "21obj.c"
    __result213__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result213__;
    come_call_finalizer2(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value296;
struct sNode* __dec_obj116;
void* right_value297;
char* __dec_obj117;
struct sCloneNode* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
right_value297 = (void*)0;
    # 1323 "21obj.c"
    __dec_obj116=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=sNode_clone(node))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1325 "21obj.c"
    self->sline=info->sline;
    # 1326 "21obj.c"
    __dec_obj117=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value297=__builtin_string(info->sname))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1328 "21obj.c"
    __result214__ = __result_obj__ = self;
    come_call_finalizer2(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result214__;
    come_call_finalizer2(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
int __result215__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1333 "21obj.c"
    __result215__ = self->sline;
    return __result215__;
}

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value298;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
right_value298 = (void*)0;
    # 1338 "21obj.c"
    __result216__ = __result_obj__ = ((char*)(right_value298=__builtin_string(self->sname)));
    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result216__;
}

_Bool sCloneNode_terminated(){
void* __result_obj__;
_Bool __result217__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1343 "21obj.c"
    __result217__ = (_Bool)0;
    return __result217__;
}

char* sCloneNode_kind(){
void* __result_obj__;
void* right_value299;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value299 = (void*)0;
    # 1348 "21obj.c"
    __result218__ = __result_obj__ = ((char*)(right_value299=__builtin_string("sCloneNode")));
    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result218__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_133;
_Bool _if_conditional186;
_Bool __result219__;
void* right_value300;
struct CVALUE* left_value_134;
void* right_value301;
struct sType* left_type_135;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value302;
struct CVALUE* come_value_136;
void* right_value303;
struct tuple2$2sTypephcharph* multiple_assign_var2;
struct sType* result_type_137;
char* c_value_138;
char* __dec_obj118;
void* right_value304;
struct sType* __dec_obj119;
void* right_value305;
char* __dec_obj120;
_Bool __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_133, 0, sizeof(struct sNode*));
right_value300 = (void*)0;
memset(&left_value_134, 0, sizeof(struct CVALUE*));
right_value301 = (void*)0;
memset(&left_type_135, 0, sizeof(struct sType*));
right_value302 = (void*)0;
memset(&come_value_136, 0, sizeof(struct CVALUE*));
right_value303 = (void*)0;
memset(&result_type_137, 0, sizeof(struct sType*));
memset(&c_value_138, 0, sizeof(char*));
memset(&result_type_137, 0, sizeof(struct sType*));
memset(&c_value_138, 0, sizeof(char*));
right_value304 = (void*)0;
right_value305 = (void*)0;
    # 1353 "21obj.c"
    node_133=self->node;
    # 1359 "21obj.c"
    # 1355 "21obj.c"
    if(_if_conditional186=!node_compile(node_133,info),    _if_conditional186) {
        # 1356 "21obj.c"
        __result219__ = (_Bool)0;
        return __result219__;
    }
    # 1359 "21obj.c"
    left_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1360 "21obj.c"
    dec_stack_ptr(1,info);
    # 1362 "21obj.c"
    left_value_134->type->mClone=(_Bool)1;
    # 1364 "21obj.c"
    left_type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_clone(left_value_134->type))));
    come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1387 "21obj.c"
    # 1366 "21obj.c"
    if(_if_conditional187=left_type_135->mPointerNum==1&&string_operator_equals(left_type_135->mClass->mName,"void")&&left_type_135->mHeap==(_Bool)0,    _if_conditional187) {
        # 1367 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_134));
    }
    else {
        # 1387 "21obj.c"
        # 1369 "21obj.c"
        if(_if_conditional188=left_type_135->mPointerNum==0,        _if_conditional188) {
            # 1370 "21obj.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_134));
        }
        else {
            # 1387 "21obj.c"
            # 1372 "21obj.c"
            if(_if_conditional189=left_type_135->mPointerNum>0,            _if_conditional189) {
                # 1373 "21obj.c"
                come_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1373, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1375 "21obj.c"
                multiple_assign_var2=((struct tuple2$2sTypephcharph*)(right_value303=clone_object(left_type_135,left_value_134->c_value,info)));
                result_type_137=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
                c_value_138=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1376 "21obj.c"
                __dec_obj118=come_value_136->c_value;
                come_value_136->c_value=(char*)come_increment_ref_count(c_value_138);
                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1377 "21obj.c"
                __dec_obj119=come_value_136->type;
                come_value_136->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_type_135))));
                come_call_finalizer2(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1378 "21obj.c"
                come_value_136->type->mHeap=(_Bool)1;
                # 1379 "21obj.c"
                come_value_136->type->mClone=(_Bool)1;
                # 1380 "21obj.c"
                come_value_136->var=((void*)0);
                # 1382 "21obj.c"
                __dec_obj120=come_value_136->c_value;
                come_value_136->c_value=(char*)come_increment_ref_count(((char*)(right_value305=append_object_to_right_values(come_value_136->c_value,(struct sType*)come_increment_ref_count(left_type_135),info))));
                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1384 "21obj.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_136));
                come_call_finalizer2(CVALUE_finalize,come_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_138 = come_decrement_ref_count2(c_value_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1387 "21obj.c"
    __result220__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result220__;
    come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional190;
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    # 0 "tuple2$2sTypephcharphp_finalize"
                    if(_if_conditional190=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional190) {
                        # 0 "tuple2$2sTypephcharphp_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2sTypephcharphp_finalize"
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    if(_if_conditional191=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional191) {
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value306;
struct sNode* __dec_obj121;
void* right_value307;
char* __dec_obj122;
struct sDupeNode* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
right_value307 = (void*)0;
    # 1398 "21obj.c"
    __dec_obj121=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=sNode_clone(node))));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1400 "21obj.c"
    self->sline=info->sline;
    # 1401 "21obj.c"
    __dec_obj122=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(info->sname))));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1403 "21obj.c"
    __result221__ = __result_obj__ = self;
    come_call_finalizer2(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result221__;
    come_call_finalizer2(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
int __result222__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1408 "21obj.c"
    __result222__ = self->sline;
    return __result222__;
}

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value308;
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
    # 1413 "21obj.c"
    __result223__ = __result_obj__ = ((char*)(right_value308=__builtin_string(self->sname)));
    right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result223__;
}

_Bool sDupeNode_terminated(){
void* __result_obj__;
_Bool __result224__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1418 "21obj.c"
    __result224__ = (_Bool)0;
    return __result224__;
}

char* sDupeNode_kind(){
void* __result_obj__;
void* right_value309;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
right_value309 = (void*)0;
    # 1423 "21obj.c"
    __result225__ = __result_obj__ = ((char*)(right_value309=__builtin_string("sDupeNode")));
    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result225__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_139;
_Bool _if_conditional194;
_Bool __result226__;
void* right_value310;
struct CVALUE* left_value_140;
void* right_value311;
struct sType* left_type_141;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value312;
struct CVALUE* come_value_142;
void* right_value313;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* result_type_143;
char* c_value_144;
char* __dec_obj123;
void* right_value314;
struct sType* __dec_obj124;
void* right_value315;
char* __dec_obj125;
_Bool __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_139, 0, sizeof(struct sNode*));
right_value310 = (void*)0;
memset(&left_value_140, 0, sizeof(struct CVALUE*));
right_value311 = (void*)0;
memset(&left_type_141, 0, sizeof(struct sType*));
right_value312 = (void*)0;
memset(&come_value_142, 0, sizeof(struct CVALUE*));
right_value313 = (void*)0;
memset(&result_type_143, 0, sizeof(struct sType*));
memset(&c_value_144, 0, sizeof(char*));
memset(&result_type_143, 0, sizeof(struct sType*));
memset(&c_value_144, 0, sizeof(char*));
right_value314 = (void*)0;
right_value315 = (void*)0;
    # 1428 "21obj.c"
    node_139=self->node;
    # 1434 "21obj.c"
    # 1430 "21obj.c"
    if(_if_conditional194=!node_compile(node_139,info),    _if_conditional194) {
        # 1431 "21obj.c"
        __result226__ = (_Bool)0;
        return __result226__;
    }
    # 1434 "21obj.c"
    left_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1435 "21obj.c"
    dec_stack_ptr(1,info);
    # 1437 "21obj.c"
    left_type_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(left_value_140->type))));
    come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1459 "21obj.c"
    # 1439 "21obj.c"
    if(_if_conditional195=left_type_141->mPointerNum==0,    _if_conditional195) {
        # 1440 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_140));
    }
    else {
        # 1459 "21obj.c"
        # 1442 "21obj.c"
        if(_if_conditional196=left_type_141->mPointerNum>0&&left_type_141->mHeap==(_Bool)0,        _if_conditional196) {
            # 1443 "21obj.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_140));
        }
        else {
            # 1459 "21obj.c"
            # 1445 "21obj.c"
            if(_if_conditional197=left_type_141->mPointerNum>0,            _if_conditional197) {
                # 1446 "21obj.c"
                come_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1446, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1448 "21obj.c"
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(right_value313=clone_object(left_type_141,left_value_140->c_value,info)));
                result_type_143=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_144=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1449 "21obj.c"
                __dec_obj123=come_value_142->c_value;
                come_value_142->c_value=(char*)come_increment_ref_count(c_value_144);
                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1450 "21obj.c"
                __dec_obj124=come_value_142->type;
                come_value_142->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(left_type_141))));
                come_call_finalizer2(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1451 "21obj.c"
                come_value_142->type->mHeap=(_Bool)1;
                # 1452 "21obj.c"
                come_value_142->var=((void*)0);
                # 1454 "21obj.c"
                __dec_obj125=come_value_142->c_value;
                come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value315=append_object_to_right_values(come_value_142->c_value,(struct sType*)come_increment_ref_count(left_type_141),info))));
                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1456 "21obj.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_142));
                come_call_finalizer2(CVALUE_finalize,come_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1459 "21obj.c"
    __result227__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result227__;
    come_call_finalizer2(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value316;
struct sNode* __dec_obj126;
void* right_value317;
char* __dec_obj127;
struct sDummyHeapNode* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value316 = (void*)0;
right_value317 = (void*)0;
    # 1470 "21obj.c"
    __dec_obj126=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=sNode_clone(node))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1472 "21obj.c"
    self->sline=info->sline;
    # 1473 "21obj.c"
    __dec_obj127=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value317=__builtin_string(info->sname))));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1475 "21obj.c"
    __result228__ = __result_obj__ = self;
    come_call_finalizer2(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result228__;
    come_call_finalizer2(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
int __result229__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1480 "21obj.c"
    __result229__ = self->sline;
    return __result229__;
}

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value318;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value318 = (void*)0;
    # 1485 "21obj.c"
    __result230__ = __result_obj__ = ((char*)(right_value318=__builtin_string(self->sname)));
    right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result230__;
}

_Bool sDummyHeapNode_terminated(){
void* __result_obj__;
_Bool __result231__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1490 "21obj.c"
    __result231__ = (_Bool)0;
    return __result231__;
}

char* sDummyHeapNode_kind(){
void* __result_obj__;
void* right_value319;
char* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value319 = (void*)0;
    # 1495 "21obj.c"
    __result232__ = __result_obj__ = ((char*)(right_value319=__builtin_string("sDummyHeapNode")));
    right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result232__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_145;
_Bool _if_conditional200;
_Bool __result233__;
void* right_value320;
struct CVALUE* come_value_146;
_Bool __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_145, 0, sizeof(struct sNode*));
right_value320 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
    # 1500 "21obj.c"
    node_145=self->node;
    # 1506 "21obj.c"
    # 1502 "21obj.c"
    if(_if_conditional200=!node_compile(node_145,info),    _if_conditional200) {
        # 1503 "21obj.c"
        __result233__ = (_Bool)0;
        return __result233__;
    }
    # 1506 "21obj.c"
    come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1507 "21obj.c"
    dec_stack_ptr(1,info);
    # 1509 "21obj.c"
    come_value_146->type->mHeap=(_Bool)1;
    # 1511 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_146));
    # 1513 "21obj.c"
    __result234__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result234__;
    come_call_finalizer2(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value321;
struct sNode* __dec_obj128;
void* right_value322;
char* __dec_obj129;
struct sGCIncNode* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value321 = (void*)0;
right_value322 = (void*)0;
    # 1524 "21obj.c"
    __dec_obj128=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=sNode_clone(node))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1526 "21obj.c"
    self->sline=info->sline;
    # 1527 "21obj.c"
    __dec_obj129=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value322=__builtin_string(info->sname))));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1529 "21obj.c"
    __result235__ = __result_obj__ = self;
    come_call_finalizer2(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result235__;
    come_call_finalizer2(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
int __result236__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1534 "21obj.c"
    __result236__ = self->sline;
    return __result236__;
}

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value323;
char* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
right_value323 = (void*)0;
    # 1539 "21obj.c"
    __result237__ = __result_obj__ = ((char*)(right_value323=__builtin_string(self->sname)));
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result237__;
}

_Bool sGCIncNode_terminated(){
void* __result_obj__;
_Bool __result238__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1544 "21obj.c"
    __result238__ = (_Bool)0;
    return __result238__;
}

char* sGCIncNode_kind(){
void* __result_obj__;
void* right_value324;
char* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
    # 1549 "21obj.c"
    __result239__ = __result_obj__ = ((char*)(right_value324=__builtin_string("sGCIncNode")));
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result239__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_147;
_Bool _if_conditional203;
_Bool __result240__;
void* right_value325;
struct CVALUE* come_value_148;
struct sType* type_149;
_Bool _if_conditional204;
void* right_value326;
char* type_name_150;
void* right_value327;
char* __dec_obj130;
_Bool __result241__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_147, 0, sizeof(struct sNode*));
right_value325 = (void*)0;
memset(&come_value_148, 0, sizeof(struct CVALUE*));
memset(&type_149, 0, sizeof(struct sType*));
right_value326 = (void*)0;
memset(&type_name_150, 0, sizeof(char*));
right_value327 = (void*)0;
    # 1554 "21obj.c"
    node_147=self->node;
    # 1560 "21obj.c"
    # 1556 "21obj.c"
    if(_if_conditional203=!node_compile(node_147,info),    _if_conditional203) {
        # 1557 "21obj.c"
        __result240__ = (_Bool)0;
        return __result240__;
    }
    # 1560 "21obj.c"
    come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value325=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1561 "21obj.c"
    dec_stack_ptr(1,info);
    # 1563 "21obj.c"
    type_149=come_value_148->type;
    # 1570 "21obj.c"
    # 1565 "21obj.c"
    if(come_value_148->type->mHeap) {
        # 1566 "21obj.c"
        type_name_150=(char*)come_increment_ref_count(((char*)(right_value326=make_type_name_string(type_149,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1567 "21obj.c"
        __dec_obj130=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value327=increment_ref_count_object(come_value_148->type,come_value_148->c_value,info))));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_150 = come_decrement_ref_count2(type_name_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1570 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
    # 1572 "21obj.c"
    __result241__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result241__;
    come_call_finalizer2(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value328;
struct sNode* __dec_obj131;
void* right_value329;
char* __dec_obj132;
struct sGCDecNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
right_value329 = (void*)0;
    # 1583 "21obj.c"
    __dec_obj131=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(node))));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value328) { right_value328 = come_decrement_ref_count2(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1585 "21obj.c"
    self->sline=info->sline;
    # 1586 "21obj.c"
    __dec_obj132=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string(info->sname))));
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1588 "21obj.c"
    __result242__ = __result_obj__ = self;
    come_call_finalizer2(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result242__;
    come_call_finalizer2(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
int __result243__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1593 "21obj.c"
    __result243__ = self->sline;
    return __result243__;
}

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value330;
char* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
    # 1598 "21obj.c"
    __result244__ = __result_obj__ = ((char*)(right_value330=__builtin_string(self->sname)));
    right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result244__;
}

_Bool sGCDecNode_terminated(){
void* __result_obj__;
_Bool __result245__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1603 "21obj.c"
    __result245__ = (_Bool)0;
    return __result245__;
}

char* sGCDecNode_kind(){
void* __result_obj__;
void* right_value331;
char* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
right_value331 = (void*)0;
    # 1608 "21obj.c"
    __result246__ = __result_obj__ = ((char*)(right_value331=__builtin_string("sGCDecNode")));
    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result246__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_151;
_Bool _if_conditional207;
_Bool __result247__;
void* right_value332;
struct CVALUE* come_value_152;
struct sType* type_153;
_Bool __result248__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_151, 0, sizeof(struct sNode*));
right_value332 = (void*)0;
memset(&come_value_152, 0, sizeof(struct CVALUE*));
memset(&type_153, 0, sizeof(struct sType*));
    # 1613 "21obj.c"
    node_151=self->node;
    # 1619 "21obj.c"
    # 1615 "21obj.c"
    if(_if_conditional207=!node_compile(node_151,info),    _if_conditional207) {
        # 1616 "21obj.c"
        __result247__ = (_Bool)0;
        return __result247__;
    }
    # 1619 "21obj.c"
    come_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1620 "21obj.c"
    dec_stack_ptr(1,info);
    # 1622 "21obj.c"
    type_153=come_value_152->type;
    # 1624 "21obj.c"
    decrement_ref_count_object(type_153,come_value_152->c_value,info,(_Bool)0);
    # 1626 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_152));
    # 1628 "21obj.c"
    __result248__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result248__;
    come_call_finalizer2(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value333;
struct sType* __dec_obj133;
void* right_value334;
char* __dec_obj134;
struct sIsHeap* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
right_value333 = (void*)0;
right_value334 = (void*)0;
    # 1639 "21obj.c"
    __dec_obj133=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1641 "21obj.c"
    self->sline=info->sline;
    # 1642 "21obj.c"
    __dec_obj134=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string(info->sname))));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1644 "21obj.c"
    __result249__ = __result_obj__ = self;
    come_call_finalizer2(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result249__;
    come_call_finalizer2(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
int __result250__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1649 "21obj.c"
    __result250__ = self->sline;
    return __result250__;
}

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
void* right_value335;
char* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
right_value335 = (void*)0;
    # 1654 "21obj.c"
    __result251__ = __result_obj__ = ((char*)(right_value335=__builtin_string(self->sname)));
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result251__;
}

_Bool sIsHeap_terminated(){
void* __result_obj__;
_Bool __result252__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1659 "21obj.c"
    __result252__ = (_Bool)0;
    return __result252__;
}

char* sIsHeap_kind(){
void* __result_obj__;
void* right_value336;
char* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
right_value336 = (void*)0;
    # 1664 "21obj.c"
    __result253__ = __result_obj__ = ((char*)(right_value336=__builtin_string("sIsHeap")));
    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result253__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_154;
_Bool _if_conditional210;
void* right_value337;
struct CVALUE* come_value_155;
void* right_value338;
char* __dec_obj135;
void* right_value339;
void* right_value340;
struct sType* __dec_obj136;
void* right_value341;
struct CVALUE* come_value_156;
void* right_value342;
char* __dec_obj137;
void* right_value343;
void* right_value344;
struct sType* __dec_obj138;
_Bool __result254__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_154, 0, sizeof(struct sType*));
right_value337 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&come_value_156, 0, sizeof(struct CVALUE*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
    # 1669 "21obj.c"
    node_154=self->type;
    # 1694 "21obj.c"
    # 1671 "21obj.c"
    if(self->type->mHeap) {
        # 1672 "21obj.c"
        come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value337=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1672, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1674 "21obj.c"
        __dec_obj135=come_value_155->c_value;
        come_value_155->c_value=(char*)come_increment_ref_count(((char*)(right_value338=xsprintf("1"))));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1675 "21obj.c"
        __dec_obj136=come_value_155->type;
        come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value339=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1675, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1676 "21obj.c"
        come_value_155->var=((void*)0);
        # 1678 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
        # 1680 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_155->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1683 "21obj.c"
        come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1683, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1685 "21obj.c"
        __dec_obj137=come_value_156->c_value;
        come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value342=xsprintf("0"))));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1686 "21obj.c"
        __dec_obj138=come_value_156->type;
        come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value344=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value343=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1686, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1687 "21obj.c"
        come_value_156->var=((void*)0);
        # 1689 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
        # 1691 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_156->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1694 "21obj.c"
    __result254__ = (_Bool)1;
    return __result254__;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value345;
struct sType* __dec_obj139;
void* right_value346;
char* __dec_obj140;
struct sIsPointer* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
right_value346 = (void*)0;
    # 1705 "21obj.c"
    __dec_obj139=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1707 "21obj.c"
    self->sline=info->sline;
    # 1708 "21obj.c"
    __dec_obj140=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value346=__builtin_string(info->sname))));
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1710 "21obj.c"
    __result255__ = __result_obj__ = self;
    come_call_finalizer2(sIsPointer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result255__;
    come_call_finalizer2(sIsPointer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sIsPointer_sline(struct sIsPointer* self, struct sInfo* info){
void* __result_obj__;
int __result256__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1715 "21obj.c"
    __result256__ = self->sline;
    return __result256__;
}

char* sIsPointer_sname(struct sIsPointer* self, struct sInfo* info){
void* __result_obj__;
void* right_value347;
char* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value347 = (void*)0;
    # 1720 "21obj.c"
    __result257__ = __result_obj__ = ((char*)(right_value347=__builtin_string(self->sname)));
    right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result257__;
}

_Bool sIsPointer_terminated(){
void* __result_obj__;
_Bool __result258__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1725 "21obj.c"
    __result258__ = (_Bool)0;
    return __result258__;
}

char* sIsPointer_kind(){
void* __result_obj__;
void* right_value348;
char* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
right_value348 = (void*)0;
    # 1730 "21obj.c"
    __result259__ = __result_obj__ = ((char*)(right_value348=__builtin_string("sIsPointer")));
    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result259__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_157;
_Bool _if_conditional213;
void* right_value349;
struct CVALUE* come_value_158;
void* right_value350;
char* __dec_obj141;
void* right_value351;
void* right_value352;
struct sType* __dec_obj142;
void* right_value353;
struct CVALUE* come_value_159;
void* right_value354;
char* __dec_obj143;
void* right_value355;
void* right_value356;
struct sType* __dec_obj144;
_Bool __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_157, 0, sizeof(struct sType*));
right_value349 = (void*)0;
memset(&come_value_158, 0, sizeof(struct CVALUE*));
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&come_value_159, 0, sizeof(struct CVALUE*));
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
    # 1735 "21obj.c"
    node_157=self->type;
    # 1760 "21obj.c"
    # 1737 "21obj.c"
    if(_if_conditional213=self->type->mPointerNum>0,    _if_conditional213) {
        # 1738 "21obj.c"
        come_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value349=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1738, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1740 "21obj.c"
        __dec_obj141=come_value_158->c_value;
        come_value_158->c_value=(char*)come_increment_ref_count(((char*)(right_value350=xsprintf("1"))));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1741 "21obj.c"
        __dec_obj142=come_value_158->type;
        come_value_158->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value352=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value351=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1741, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1742 "21obj.c"
        come_value_158->var=((void*)0);
        # 1744 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
        # 1746 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_158->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1749 "21obj.c"
        come_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value353=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1749, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1751 "21obj.c"
        __dec_obj143=come_value_159->c_value;
        come_value_159->c_value=(char*)come_increment_ref_count(((char*)(right_value354=xsprintf("0"))));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1752 "21obj.c"
        __dec_obj144=come_value_159->type;
        come_value_159->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value356=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value355=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1752, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1753 "21obj.c"
        come_value_159->var=((void*)0);
        # 1755 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_159));
        # 1757 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_159->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1760 "21obj.c"
    __result260__ = (_Bool)1;
    return __result260__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional214;
void* right_value357;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_160;
char* name_161;
_Bool err_162;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value358;
struct sType* inf_type_163;
void* right_value359;
struct sNode* node_164;
void* right_value360;
void* right_value361;
struct sNode* _inf_value4;
struct sImplementsNode* _inf_obj_value4;
void* right_value366;
struct sNode* __result263__;
void* right_value367;
void* right_value368;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* right_value372;
struct sNode* obj_167;
void* right_value373;
char* fun_name_168;
void* right_value374;
void* right_value375;
struct sNode* __result266__;
void* right_value376;
void* right_value377;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* right_value381;
struct sNode* __result269__;
_Bool _if_conditional240;
void* right_value382;
void* right_value383;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* right_value386;
struct sNode* __result272__;
_Bool _if_conditional245;
void* right_value387;
void* right_value388;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* right_value391;
struct sNode* __result275__;
_Bool _if_conditional250;
void* right_value392;
struct sNode* node_172;
void* right_value393;
void* right_value394;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* right_value398;
struct sNode* __result278__;
_Bool _if_conditional257;
void* right_value399;
struct sNode* node_174;
void* right_value400;
void* right_value401;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* right_value405;
struct sNode* __result281__;
_Bool _if_conditional264;
void* right_value406;
struct sNode* node_176;
void* right_value407;
void* right_value408;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* right_value412;
struct sNode* __result284__;
_Bool _if_conditional271;
void* right_value413;
struct sNode* node_178;
void* right_value414;
void* right_value415;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* right_value419;
struct sNode* __result287__;
_Bool _if_conditional278;
void* right_value420;
struct sNode* node_180;
void* right_value421;
void* right_value422;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* right_value426;
struct sNode* __result290__;
_Bool _if_conditional285;
void* right_value427;
struct sNode* node_182;
void* right_value428;
void* right_value429;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* right_value433;
struct sNode* __result293__;
_Bool _if_conditional292;
void* right_value434;
struct sNode* node_184;
void* right_value435;
void* right_value436;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* right_value440;
struct sNode* __result296__;
_Bool _if_conditional299;
void* right_value441;
struct sNode* node_186;
void* right_value442;
void* right_value443;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* right_value447;
struct sNode* __result299__;
_Bool _if_conditional306;
void* right_value448;
struct sNode* node_188;
void* right_value449;
void* right_value450;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* right_value454;
struct sNode* __result302__;
_Bool _if_conditional313;
void* right_value455;
struct sNode* node_190;
void* right_value456;
void* right_value457;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* right_value461;
struct sNode* __result305__;
_Bool _if_conditional320;
void* right_value462;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_192;
char* param_name_193;
_Bool err_194;
_Bool _if_conditional321;
void* right_value463;
struct sType* type2_195;
void* right_value464;
void* right_value465;
struct sNode* _inf_value19;
struct sIsHeap* _inf_obj_value19;
void* right_value469;
struct sNode* __result308__;
_Bool _if_conditional328;
void* right_value470;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_197;
char* param_name_198;
_Bool err_199;
_Bool _if_conditional329;
void* right_value471;
struct sType* type2_200;
void* right_value472;
void* right_value473;
struct sNode* _inf_value20;
struct sIsPointer* _inf_obj_value20;
void* right_value477;
struct sNode* __result311__;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value478;
void* right_value479;
struct sNode* _inf_value21;
struct sNullNodeX* _inf_obj_value21;
void* right_value482;
struct sNode* __result314__;
_Bool _if_conditional342;
_Bool _if_conditional343;
void* right_value483;
struct sNode* node_203;
struct sNode* __result315__;
void* right_value484;
void* right_value485;
struct sNode* _inf_value22;
struct sNullNodeX* _inf_obj_value22;
void* right_value488;
struct sNode* __result318__;
_Bool _if_conditional348;
void* right_value489;
void* right_value490;
struct sNode* _inf_value23;
struct sNullNodeX* _inf_obj_value23;
void* right_value493;
struct sNode* __result321__;
_Bool _if_conditional353;
void* right_value494;
void* right_value495;
struct sNode* _inf_value24;
struct sNullNodeX* _inf_obj_value24;
void* right_value498;
struct sNode* __result324__;
_Bool _if_conditional358;
void* right_value499;
void* right_value500;
struct sNode* _inf_value25;
struct sNullNodeX* _inf_obj_value25;
void* right_value503;
struct sNode* __result327__;
_Bool _if_conditional363;
void* right_value504;
void* right_value505;
struct sNode* _inf_value26;
struct sNullNodeX* _inf_obj_value26;
void* right_value508;
struct sNode* __result330__;
_Bool _if_conditional368;
_Bool is_type_name_flag_209;
char* p_210;
int sline_211;
_Bool _if_conditional369;
void* right_value509;
char* word_212;
_Bool _if_conditional370;
_Bool _if_conditional371;
void* right_value510;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_213;
char* name_214;
_Bool err_215;
_Bool _if_conditional372;
void* right_value511;
void* right_value512;
struct sNode* _inf_value27;
struct sSizeOfNode* _inf_obj_value27;
void* right_value516;
struct sNode* __result333__;
void* right_value517;
struct sNode* exp_217;
void* right_value518;
void* right_value519;
struct sNode* _inf_value28;
struct sSizeOfExpNode* _inf_obj_value28;
void* right_value523;
struct sNode* __result336__;
_Bool _if_conditional385;
_Bool is_type_name_flag_219;
char* p_220;
int sline_221;
_Bool _if_conditional386;
void* right_value524;
char* word_222;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value525;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_223;
char* name_224;
_Bool err_225;
_Bool _if_conditional389;
void* right_value526;
void* right_value527;
struct sNode* _inf_value29;
struct sTypeOfNode* _inf_obj_value29;
void* right_value531;
struct sNode* __result339__;
void* right_value532;
struct sNode* exp_227;
void* right_value533;
void* right_value534;
struct sNode* _inf_value30;
struct sTypeOfExpNode* _inf_obj_value30;
void* right_value538;
struct sNode* __result342__;
_Bool _if_conditional402;
_Bool is_type_name_flag_229;
char* p_230;
int sline_231;
_Bool _if_conditional403;
void* right_value539;
char* word_232;
_Bool _if_conditional404;
_Bool _if_conditional405;
void* right_value540;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_233;
char* name_234;
_Bool err_235;
_Bool _if_conditional406;
void* right_value541;
void* right_value542;
struct sNode* _inf_value31;
struct sAlignOfNode* _inf_obj_value31;
void* right_value546;
struct sNode* __result345__;
void* right_value547;
struct sNode* exp_237;
void* right_value548;
void* right_value549;
struct sNode* _inf_value32;
struct sAlignOfExpNode* _inf_obj_value32;
void* right_value553;
struct sNode* __result348__;
_Bool _if_conditional419;
_Bool is_type_name_flag_239;
char* p_240;
int sline_241;
_Bool _if_conditional420;
void* right_value554;
char* word_242;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value555;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_243;
char* name_244;
_Bool err_245;
_Bool _if_conditional423;
void* right_value556;
void* right_value557;
struct sNode* _inf_value33;
struct sAlignOfNode2* _inf_obj_value33;
void* right_value561;
struct sNode* __result351__;
void* right_value562;
struct sNode* exp_247;
void* right_value563;
void* right_value564;
struct sNode* _inf_value34;
struct sAlignOfExpNode2* _inf_obj_value34;
void* right_value568;
struct sNode* __result354__;
_Bool _if_conditional436;
_Bool is_type_name_flag_249;
char* p_250;
int sline_251;
_Bool _if_conditional437;
void* right_value569;
char* word_252;
_Bool _if_conditional438;
_Bool _if_conditional439;
void* right_value570;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_253;
char* name_254;
_Bool err_255;
_Bool _if_conditional440;
void* right_value571;
void* right_value572;
struct sNode* _inf_value35;
struct sAlignAsNode* _inf_obj_value35;
void* right_value576;
struct sNode* __result357__;
void* right_value577;
struct sNode* exp_257;
void* right_value578;
void* right_value579;
struct sNode* _inf_value36;
struct sAlignAsExpNode* _inf_obj_value36;
void* right_value583;
struct sNode* __result360__;
void* right_value584;
struct sNode* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value357 = (void*)0;
memset(&type_160, 0, sizeof(struct sType*));
memset(&name_161, 0, sizeof(char*));
memset(&err_162, 0, sizeof(_Bool));
memset(&type_160, 0, sizeof(struct sType*));
memset(&name_161, 0, sizeof(char*));
memset(&err_162, 0, sizeof(_Bool));
right_value358 = (void*)0;
memset(&inf_type_163, 0, sizeof(struct sType*));
right_value359 = (void*)0;
memset(&node_164, 0, sizeof(struct sNode*));
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value372 = (void*)0;
memset(&obj_167, 0, sizeof(struct sNode*));
right_value373 = (void*)0;
memset(&fun_name_168, 0, sizeof(char*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&node_172, 0, sizeof(struct sNode*));
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
memset(&node_174, 0, sizeof(struct sNode*));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&node_176, 0, sizeof(struct sNode*));
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
memset(&node_178, 0, sizeof(struct sNode*));
right_value414 = (void*)0;
right_value415 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
memset(&node_180, 0, sizeof(struct sNode*));
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
memset(&node_182, 0, sizeof(struct sNode*));
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
memset(&node_184, 0, sizeof(struct sNode*));
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
memset(&node_186, 0, sizeof(struct sNode*));
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
memset(&node_188, 0, sizeof(struct sNode*));
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
memset(&node_190, 0, sizeof(struct sNode*));
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
memset(&param_type_192, 0, sizeof(struct sType*));
memset(&param_name_193, 0, sizeof(char*));
memset(&err_194, 0, sizeof(_Bool));
memset(&param_type_192, 0, sizeof(struct sType*));
memset(&param_name_193, 0, sizeof(char*));
memset(&err_194, 0, sizeof(_Bool));
right_value463 = (void*)0;
memset(&type2_195, 0, sizeof(struct sType*));
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
memset(&param_type_197, 0, sizeof(struct sType*));
memset(&param_name_198, 0, sizeof(char*));
memset(&err_199, 0, sizeof(_Bool));
memset(&param_type_197, 0, sizeof(struct sType*));
memset(&param_name_198, 0, sizeof(char*));
memset(&err_199, 0, sizeof(_Bool));
right_value471 = (void*)0;
memset(&type2_200, 0, sizeof(struct sType*));
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value477 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
memset(&node_203, 0, sizeof(struct sNode*));
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value488 = (void*)0;
right_value489 = (void*)0;
right_value490 = (void*)0;
right_value493 = (void*)0;
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value505 = (void*)0;
right_value508 = (void*)0;
memset(&is_type_name_flag_209, 0, sizeof(_Bool));
memset(&p_210, 0, sizeof(char*));
memset(&sline_211, 0, sizeof(int));
right_value509 = (void*)0;
memset(&word_212, 0, sizeof(char*));
right_value510 = (void*)0;
memset(&type_213, 0, sizeof(struct sType*));
memset(&name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
memset(&type_213, 0, sizeof(struct sType*));
memset(&name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
right_value511 = (void*)0;
right_value512 = (void*)0;
right_value516 = (void*)0;
right_value517 = (void*)0;
memset(&exp_217, 0, sizeof(struct sNode*));
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value523 = (void*)0;
memset(&is_type_name_flag_219, 0, sizeof(_Bool));
memset(&p_220, 0, sizeof(char*));
memset(&sline_221, 0, sizeof(int));
right_value524 = (void*)0;
memset(&word_222, 0, sizeof(char*));
right_value525 = (void*)0;
memset(&type_223, 0, sizeof(struct sType*));
memset(&name_224, 0, sizeof(char*));
memset(&err_225, 0, sizeof(_Bool));
memset(&type_223, 0, sizeof(struct sType*));
memset(&name_224, 0, sizeof(char*));
memset(&err_225, 0, sizeof(_Bool));
right_value526 = (void*)0;
right_value527 = (void*)0;
right_value531 = (void*)0;
right_value532 = (void*)0;
memset(&exp_227, 0, sizeof(struct sNode*));
right_value533 = (void*)0;
right_value534 = (void*)0;
right_value538 = (void*)0;
memset(&is_type_name_flag_229, 0, sizeof(_Bool));
memset(&p_230, 0, sizeof(char*));
memset(&sline_231, 0, sizeof(int));
right_value539 = (void*)0;
memset(&word_232, 0, sizeof(char*));
right_value540 = (void*)0;
memset(&type_233, 0, sizeof(struct sType*));
memset(&name_234, 0, sizeof(char*));
memset(&err_235, 0, sizeof(_Bool));
memset(&type_233, 0, sizeof(struct sType*));
memset(&name_234, 0, sizeof(char*));
memset(&err_235, 0, sizeof(_Bool));
right_value541 = (void*)0;
right_value542 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
memset(&exp_237, 0, sizeof(struct sNode*));
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value553 = (void*)0;
memset(&is_type_name_flag_239, 0, sizeof(_Bool));
memset(&p_240, 0, sizeof(char*));
memset(&sline_241, 0, sizeof(int));
right_value554 = (void*)0;
memset(&word_242, 0, sizeof(char*));
right_value555 = (void*)0;
memset(&type_243, 0, sizeof(struct sType*));
memset(&name_244, 0, sizeof(char*));
memset(&err_245, 0, sizeof(_Bool));
memset(&type_243, 0, sizeof(struct sType*));
memset(&name_244, 0, sizeof(char*));
memset(&err_245, 0, sizeof(_Bool));
right_value556 = (void*)0;
right_value557 = (void*)0;
right_value561 = (void*)0;
right_value562 = (void*)0;
memset(&exp_247, 0, sizeof(struct sNode*));
right_value563 = (void*)0;
right_value564 = (void*)0;
right_value568 = (void*)0;
memset(&is_type_name_flag_249, 0, sizeof(_Bool));
memset(&p_250, 0, sizeof(char*));
memset(&sline_251, 0, sizeof(int));
right_value569 = (void*)0;
memset(&word_252, 0, sizeof(char*));
right_value570 = (void*)0;
memset(&type_253, 0, sizeof(struct sType*));
memset(&name_254, 0, sizeof(char*));
memset(&err_255, 0, sizeof(_Bool));
memset(&type_253, 0, sizeof(struct sType*));
memset(&name_254, 0, sizeof(char*));
memset(&err_255, 0, sizeof(_Bool));
right_value571 = (void*)0;
right_value572 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
memset(&exp_257, 0, sizeof(struct sNode*));
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value583 = (void*)0;
right_value584 = (void*)0;
    # 2163 "21obj.c"
    # 1765 "21obj.c"
    if(_if_conditional214=charp_operator_equals(buf,"new"),    _if_conditional214) {
        # 1766 "21obj.c"
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value357=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_160=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_161=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_162=multiple_assign_var4->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1772 "21obj.c"
        # 1767 "21obj.c"
        if(_if_conditional217=!err_162,        _if_conditional217) {
            # 1768 "21obj.c"
            err_msg(info,"parse_type failed");
            # 1769 "21obj.c"
            exit(2);
        }
        # 1795 "21obj.c"
        # 1772 "21obj.c"
        if(_if_conditional218=*info->p==40,        _if_conditional218) {
            # 1791 "21obj.c"
            # 1773 "21obj.c"
            if(type_160->mClass->mProtocol) {
                # 1774 "21obj.c"
                info->p++;
                # 1775 "21obj.c"
                skip_spaces_and_lf(info);
                # 1777 "21obj.c"
                inf_type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_clone(type_160))));
                come_call_finalizer2(sType_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1779 "21obj.c"
                node_164=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=expression_v13(info))));
                if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1781 "21obj.c"
                expected_next_character(41,info);
                # 1783 "21obj.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1783, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sImplementsNode*)(right_value361=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value360=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1783, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node_164),(struct sType*)come_increment_ref_count(inf_type_163),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sImplementsNode_finalize;
                _inf_value4->clone=(void*)sImplementsNode_clone;
                _inf_value4->compile=(void*)sImplementsNode_compile;
                _inf_value4->sline=(void*)sImplementsNode_sline;
                _inf_value4->sname=(void*)sImplementsNode_sname;
                _inf_value4->terminated=(void*)sImplementsNode_terminated;
                _inf_value4->kind=(void*)sImplementsNode_kind;
                __result263__ = __result_obj__ = ((struct sNode*)(right_value366=_inf_value4));
                come_call_finalizer2(sType_finalize,inf_type_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_164) { node_164 = come_decrement_ref_count2(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_161 = come_decrement_ref_count2(name_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sImplementsNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sImplementsNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result263__;
                come_call_finalizer2(sType_finalize,inf_type_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_164) { node_164 = come_decrement_ref_count2(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1786 "21obj.c"
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1786, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(right_value368=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value367=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1786, "sNewNode")))),(struct sType*)come_increment_ref_count(type_160),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sNewNode_finalize;
                _inf_value5->clone=(void*)sNewNode_clone;
                _inf_value5->compile=(void*)sNewNode_compile;
                _inf_value5->sline=(void*)sNewNode_sline;
                _inf_value5->sname=(void*)sNewNode_sname;
                _inf_value5->terminated=(void*)sNewNode_terminated;
                _inf_value5->kind=(void*)sNewNode_kind;
                obj_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=_inf_value5)));
                come_call_finalizer2(sNewNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sNewNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1787 "21obj.c"
                fun_name_168=(char*)come_increment_ref_count(((char*)(right_value373=__builtin_string("initialize"))));
                right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1789 "21obj.c"
                __result266__ = __result_obj__ = ((struct sNode*)(right_value375=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=sNode_clone(obj_167)))),(char*)come_increment_ref_count(fun_name_168),info)));
                if(obj_167) { obj_167 = come_decrement_ref_count2(obj_167, ((struct sNode*)obj_167)->finalize, ((struct sNode*)obj_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_168 = come_decrement_ref_count2(fun_name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_161 = come_decrement_ref_count2(name_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result266__;
                if(obj_167) { obj_167 = come_decrement_ref_count2(obj_167, ((struct sNode*)obj_167)->finalize, ((struct sNode*)obj_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_168 = come_decrement_ref_count2(fun_name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 1793 "21obj.c"
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1793, "struct sNode");
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(right_value377=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value376=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1793, "sNewNode")))),(struct sType*)come_increment_ref_count(type_160),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNewNode_sline;
            _inf_value6->sname=(void*)sNewNode_sname;
            _inf_value6->terminated=(void*)sNewNode_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result269__ = __result_obj__ = ((struct sNode*)(right_value381=_inf_value6));
            come_call_finalizer2(sType_finalize,type_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_161 = come_decrement_ref_count2(name_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sNewNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sNewNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result269__;
        }
        come_call_finalizer2(sType_finalize,type_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_161 = come_decrement_ref_count2(name_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 2163 "21obj.c"
        # 1796 "21obj.c"
        if(_if_conditional240=charp_operator_equals(buf,"true"),        _if_conditional240) {
            # 1797 "21obj.c"
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1797, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(right_value383=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value382=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1797, "sTrueNode")))),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sTrueNode_finalize;
            _inf_value7->clone=(void*)sTrueNode_clone;
            _inf_value7->compile=(void*)sTrueNode_compile;
            _inf_value7->sline=(void*)sTrueNode_sline;
            _inf_value7->sname=(void*)sTrueNode_sname;
            _inf_value7->terminated=(void*)sTrueNode_terminated;
            _inf_value7->kind=(void*)sTrueNode_kind;
            __result272__ = __result_obj__ = ((struct sNode*)(right_value386=_inf_value7));
            come_call_finalizer2(sTrueNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTrueNode_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result272__;
        }
        else {
            # 2163 "21obj.c"
            # 1799 "21obj.c"
            if(_if_conditional245=charp_operator_equals(buf,"false"),            _if_conditional245) {
                # 1800 "21obj.c"
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1800, "struct sNode");
                _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(right_value388=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value387=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1800, "sFalseNode")))),info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sFalseNode_finalize;
                _inf_value8->clone=(void*)sFalseNode_clone;
                _inf_value8->compile=(void*)sFalseNode_compile;
                _inf_value8->sline=(void*)sFalseNode_sline;
                _inf_value8->sname=(void*)sFalseNode_sname;
                _inf_value8->terminated=(void*)sFalseNode_terminated;
                _inf_value8->kind=(void*)sFalseNode_kind;
                __result275__ = __result_obj__ = ((struct sNode*)(right_value391=_inf_value8));
                come_call_finalizer2(sFalseNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFalseNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result275__;
            }
            else {
                # 2163 "21obj.c"
                # 1802 "21obj.c"
                if(_if_conditional250=charp_operator_equals(buf,"delete"),                _if_conditional250) {
                    # 1803 "21obj.c"
                    node_172=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=expression_v13(info))));
                    if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1805 "21obj.c"
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1805, "struct sNode");
                    _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(right_value394=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value393=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1805, "sDeleteNode")))),(struct sNode*)come_increment_ref_count(node_172),info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sDeleteNode_finalize;
                    _inf_value9->clone=(void*)sDeleteNode_clone;
                    _inf_value9->compile=(void*)sDeleteNode_compile;
                    _inf_value9->sline=(void*)sDeleteNode_sline;
                    _inf_value9->sname=(void*)sDeleteNode_sname;
                    _inf_value9->terminated=(void*)sDeleteNode_terminated;
                    _inf_value9->kind=(void*)sDeleteNode_kind;
                    __result278__ = __result_obj__ = ((struct sNode*)(right_value398=_inf_value9));
                    if(node_172) { node_172 = come_decrement_ref_count2(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sDeleteNode_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sDeleteNode_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result278__;
                    if(node_172) { node_172 = come_decrement_ref_count2(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 2163 "21obj.c"
                    # 1807 "21obj.c"
                    if(_if_conditional257=charp_operator_equals(buf,"force_delete"),                    _if_conditional257) {
                        # 1808 "21obj.c"
                        node_174=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=expression_v13(info))));
                        if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1810 "21obj.c"
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1810, "struct sNode");
                        _inf_obj_value10=come_increment_ref_count(((struct sForceDeleteNode*)(right_value401=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value400=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1810, "sForceDeleteNode")))),(struct sNode*)come_increment_ref_count(node_174),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value10->clone=(void*)sForceDeleteNode_clone;
                        _inf_value10->compile=(void*)sForceDeleteNode_compile;
                        _inf_value10->sline=(void*)sForceDeleteNode_sline;
                        _inf_value10->sname=(void*)sForceDeleteNode_sname;
                        _inf_value10->terminated=(void*)sForceDeleteNode_terminated;
                        _inf_value10->kind=(void*)sForceDeleteNode_kind;
                        __result281__ = __result_obj__ = ((struct sNode*)(right_value405=_inf_value10));
                        if(node_174) { node_174 = come_decrement_ref_count2(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sForceDeleteNode_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sForceDeleteNode_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result281__;
                        if(node_174) { node_174 = come_decrement_ref_count2(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 2163 "21obj.c"
                        # 1813 "21obj.c"
                        if(_if_conditional264=charp_operator_equals(buf,"borrow"),                        _if_conditional264) {
                            # 1814 "21obj.c"
                            node_176=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=expression_v13(info))));
                            if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1816 "21obj.c"
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1816, "struct sNode");
                            _inf_obj_value11=come_increment_ref_count(((struct sBorrowNode*)(right_value408=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value407=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1816, "sBorrowNode")))),(struct sNode*)come_increment_ref_count(node_176),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sBorrowNode_finalize;
                            _inf_value11->clone=(void*)sBorrowNode_clone;
                            _inf_value11->compile=(void*)sBorrowNode_compile;
                            _inf_value11->sline=(void*)sBorrowNode_sline;
                            _inf_value11->sname=(void*)sBorrowNode_sname;
                            _inf_value11->terminated=(void*)sBorrowNode_terminated;
                            _inf_value11->kind=(void*)sBorrowNode_kind;
                            __result284__ = __result_obj__ = ((struct sNode*)(right_value412=_inf_value11));
                            if(node_176) { node_176 = come_decrement_ref_count2(node_176, ((struct sNode*)node_176)->finalize, ((struct sNode*)node_176)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sBorrowNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sBorrowNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result284__;
                            if(node_176) { node_176 = come_decrement_ref_count2(node_176, ((struct sNode*)node_176)->finalize, ((struct sNode*)node_176)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 2163 "21obj.c"
                            # 1818 "21obj.c"
                            if(_if_conditional271=charp_operator_equals(buf,"delegate"),                            _if_conditional271) {
                                # 1819 "21obj.c"
                                node_178=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=expression_v13(info))));
                                if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1821 "21obj.c"
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1821, "struct sNode");
                                _inf_obj_value12=come_increment_ref_count(((struct sDelegateNode*)(right_value415=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value414=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1821, "sDelegateNode")))),(struct sNode*)come_increment_ref_count(node_178),info))));
                                _inf_value12->_protocol_obj=_inf_obj_value12;
                                _inf_value12->finalize=(void*)sDelegateNode_finalize;
                                _inf_value12->clone=(void*)sDelegateNode_clone;
                                _inf_value12->compile=(void*)sDelegateNode_compile;
                                _inf_value12->sline=(void*)sDelegateNode_sline;
                                _inf_value12->sname=(void*)sDelegateNode_sname;
                                _inf_value12->terminated=(void*)sDelegateNode_terminated;
                                _inf_value12->kind=(void*)sDelegateNode_kind;
                                __result287__ = __result_obj__ = ((struct sNode*)(right_value419=_inf_value12));
                                if(node_178) { node_178 = come_decrement_ref_count2(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sDelegateNode_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sDelegateNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result287__;
                                if(node_178) { node_178 = come_decrement_ref_count2(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 2163 "21obj.c"
                                # 1823 "21obj.c"
                                if(_if_conditional278=charp_operator_equals(buf,"share"),                                _if_conditional278) {
                                    # 1824 "21obj.c"
                                    node_180=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value420=expression_v13(info))));
                                    if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1826 "21obj.c"
                                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1826, "struct sNode");
                                    _inf_obj_value13=come_increment_ref_count(((struct sShareNode*)(right_value422=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value421=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1826, "sShareNode")))),(struct sNode*)come_increment_ref_count(node_180),info))));
                                    _inf_value13->_protocol_obj=_inf_obj_value13;
                                    _inf_value13->finalize=(void*)sShareNode_finalize;
                                    _inf_value13->clone=(void*)sShareNode_clone;
                                    _inf_value13->compile=(void*)sShareNode_compile;
                                    _inf_value13->sline=(void*)sShareNode_sline;
                                    _inf_value13->sname=(void*)sShareNode_sname;
                                    _inf_value13->terminated=(void*)sShareNode_terminated;
                                    _inf_value13->kind=(void*)sShareNode_kind;
                                    __result290__ = __result_obj__ = ((struct sNode*)(right_value426=_inf_value13));
                                    if(node_180) { node_180 = come_decrement_ref_count2(node_180, ((struct sNode*)node_180)->finalize, ((struct sNode*)node_180)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sShareNode_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sShareNode_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result290__;
                                    if(node_180) { node_180 = come_decrement_ref_count2(node_180, ((struct sNode*)node_180)->finalize, ((struct sNode*)node_180)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 2163 "21obj.c"
                                    # 1828 "21obj.c"
                                    if(_if_conditional285=charp_operator_equals(buf,"clone"),                                    _if_conditional285) {
                                        # 1829 "21obj.c"
                                        node_182=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value427=expression_v13(info))));
                                        if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 1831 "21obj.c"
                                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1831, "struct sNode");
                                        _inf_obj_value14=come_increment_ref_count(((struct sCloneNode*)(right_value429=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value428=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1831, "sCloneNode")))),(struct sNode*)come_increment_ref_count(node_182),info))));
                                        _inf_value14->_protocol_obj=_inf_obj_value14;
                                        _inf_value14->finalize=(void*)sCloneNode_finalize;
                                        _inf_value14->clone=(void*)sCloneNode_clone;
                                        _inf_value14->compile=(void*)sCloneNode_compile;
                                        _inf_value14->sline=(void*)sCloneNode_sline;
                                        _inf_value14->sname=(void*)sCloneNode_sname;
                                        _inf_value14->terminated=(void*)sCloneNode_terminated;
                                        _inf_value14->kind=(void*)sCloneNode_kind;
                                        __result293__ = __result_obj__ = ((struct sNode*)(right_value433=_inf_value14));
                                        if(node_182) { node_182 = come_decrement_ref_count2(node_182, ((struct sNode*)node_182)->finalize, ((struct sNode*)node_182)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sCloneNode_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sCloneNode_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result293__;
                                        if(node_182) { node_182 = come_decrement_ref_count2(node_182, ((struct sNode*)node_182)->finalize, ((struct sNode*)node_182)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 2163 "21obj.c"
                                        # 1833 "21obj.c"
                                        if(_if_conditional292=charp_operator_equals(buf,"dupe"),                                        _if_conditional292) {
                                            # 1834 "21obj.c"
                                            node_184=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=expression_v13(info))));
                                            if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            # 1836 "21obj.c"
                                            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1836, "struct sNode");
                                            _inf_obj_value15=come_increment_ref_count(((struct sDupeNode*)(right_value436=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value435=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1836, "sDupeNode")))),(struct sNode*)come_increment_ref_count(node_184),info))));
                                            _inf_value15->_protocol_obj=_inf_obj_value15;
                                            _inf_value15->finalize=(void*)sDupeNode_finalize;
                                            _inf_value15->clone=(void*)sDupeNode_clone;
                                            _inf_value15->compile=(void*)sDupeNode_compile;
                                            _inf_value15->sline=(void*)sDupeNode_sline;
                                            _inf_value15->sname=(void*)sDupeNode_sname;
                                            _inf_value15->terminated=(void*)sDupeNode_terminated;
                                            _inf_value15->kind=(void*)sDupeNode_kind;
                                            __result296__ = __result_obj__ = ((struct sNode*)(right_value440=_inf_value15));
                                            if(node_184) { node_184 = come_decrement_ref_count2(node_184, ((struct sNode*)node_184)->finalize, ((struct sNode*)node_184)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sDupeNode_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sDupeNode_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result296__;
                                            if(node_184) { node_184 = come_decrement_ref_count2(node_184, ((struct sNode*)node_184)->finalize, ((struct sNode*)node_184)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            # 2163 "21obj.c"
                                            # 1838 "21obj.c"
                                            if(_if_conditional299=charp_operator_equals(buf,"dummy_heap"),                                            _if_conditional299) {
                                                # 1839 "21obj.c"
                                                node_186=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=expression_v13(info))));
                                                if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1841 "21obj.c"
                                                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1841, "struct sNode");
                                                _inf_obj_value16=come_increment_ref_count(((struct sDummyHeapNode*)(right_value443=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value442=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1841, "sDummyHeapNode")))),(struct sNode*)come_increment_ref_count(node_186),info))));
                                                _inf_value16->_protocol_obj=_inf_obj_value16;
                                                _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value16->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value16->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value16->sline=(void*)sDummyHeapNode_sline;
                                                _inf_value16->sname=(void*)sDummyHeapNode_sname;
                                                _inf_value16->terminated=(void*)sDummyHeapNode_terminated;
                                                _inf_value16->kind=(void*)sDummyHeapNode_kind;
                                                __result299__ = __result_obj__ = ((struct sNode*)(right_value447=_inf_value16));
                                                if(node_186) { node_186 = come_decrement_ref_count2(node_186, ((struct sNode*)node_186)->finalize, ((struct sNode*)node_186)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sDummyHeapNode_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(sDummyHeapNode_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result299__;
                                                if(node_186) { node_186 = come_decrement_ref_count2(node_186, ((struct sNode*)node_186)->finalize, ((struct sNode*)node_186)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 2163 "21obj.c"
                                                # 1843 "21obj.c"
                                                if(_if_conditional306=charp_operator_equals(buf,"gc_inc")&&*info->p==40,                                                _if_conditional306) {
                                                    # 1844 "21obj.c"
                                                    info->p++;
                                                    # 1845 "21obj.c"
                                                    skip_spaces_and_lf(info);
                                                    # 1847 "21obj.c"
                                                    node_188=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value448=expression_v13(info))));
                                                    if(right_value448) { right_value448 = come_decrement_ref_count2(right_value448, ((struct sNode*)right_value448)->finalize, ((struct sNode*)right_value448)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1849 "21obj.c"
                                                    expected_next_character(41,info);
                                                    # 1851 "21obj.c"
                                                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1851, "struct sNode");
                                                    _inf_obj_value17=come_increment_ref_count(((struct sGCIncNode*)(right_value450=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value449=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1851, "sGCIncNode")))),(struct sNode*)come_increment_ref_count(node_188),info))));
                                                    _inf_value17->_protocol_obj=_inf_obj_value17;
                                                    _inf_value17->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value17->clone=(void*)sGCIncNode_clone;
                                                    _inf_value17->compile=(void*)sGCIncNode_compile;
                                                    _inf_value17->sline=(void*)sGCIncNode_sline;
                                                    _inf_value17->sname=(void*)sGCIncNode_sname;
                                                    _inf_value17->terminated=(void*)sGCIncNode_terminated;
                                                    _inf_value17->kind=(void*)sGCIncNode_kind;
                                                    __result302__ = __result_obj__ = ((struct sNode*)(right_value454=_inf_value17));
                                                    if(node_188) { node_188 = come_decrement_ref_count2(node_188, ((struct sNode*)node_188)->finalize, ((struct sNode*)node_188)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer2(sGCIncNode_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sGCIncNode_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result302__;
                                                    if(node_188) { node_188 = come_decrement_ref_count2(node_188, ((struct sNode*)node_188)->finalize, ((struct sNode*)node_188)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    # 2163 "21obj.c"
                                                    # 1853 "21obj.c"
                                                    if(_if_conditional313=charp_operator_equals(buf,"gc_dec")&&*info->p==40,                                                    _if_conditional313) {
                                                        # 1854 "21obj.c"
                                                        info->p++;
                                                        # 1855 "21obj.c"
                                                        skip_spaces_and_lf(info);
                                                        # 1857 "21obj.c"
                                                        node_190=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=expression_v13(info))));
                                                        if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        # 1859 "21obj.c"
                                                        expected_next_character(41,info);
                                                        # 1861 "21obj.c"
                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1861, "struct sNode");
                                                        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNode*)(right_value457=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value456=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1861, "sGCDecNode")))),(struct sNode*)come_increment_ref_count(node_190),info))));
                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                        _inf_value18->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value18->clone=(void*)sGCDecNode_clone;
                                                        _inf_value18->compile=(void*)sGCDecNode_compile;
                                                        _inf_value18->sline=(void*)sGCDecNode_sline;
                                                        _inf_value18->sname=(void*)sGCDecNode_sname;
                                                        _inf_value18->terminated=(void*)sGCDecNode_terminated;
                                                        _inf_value18->kind=(void*)sGCDecNode_kind;
                                                        __result305__ = __result_obj__ = ((struct sNode*)(right_value461=_inf_value18));
                                                        if(node_190) { node_190 = come_decrement_ref_count2(node_190, ((struct sNode*)node_190)->finalize, ((struct sNode*)node_190)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer2(sGCDecNode_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sGCDecNode_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value461) { right_value461 = come_decrement_ref_count2(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result305__;
                                                        if(node_190) { node_190 = come_decrement_ref_count2(node_190, ((struct sNode*)node_190)->finalize, ((struct sNode*)node_190)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        # 2163 "21obj.c"
                                                        # 1863 "21obj.c"
                                                        if(_if_conditional320=charp_operator_equals(buf,"isheap")&&*info->p==40,                                                        _if_conditional320) {
                                                            # 1864 "21obj.c"
                                                            info->p++;
                                                            # 1865 "21obj.c"
                                                            skip_spaces_and_lf(info);
                                                            # 1867 "21obj.c"
                                                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value462=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                            param_type_192=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                            param_name_193=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                            err_194=multiple_assign_var5->v3;
                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 1873 "21obj.c"
                                                            # 1868 "21obj.c"
                                                            if(_if_conditional321=!err_194,                                                            _if_conditional321) {
                                                                # 1869 "21obj.c"
                                                                err_msg(info,"parse_type failed");
                                                                # 1870 "21obj.c"
                                                                exit(2);
                                                            }
                                                            # 1873 "21obj.c"
                                                            type2_195=(struct sType*)come_increment_ref_count(((struct sType*)(right_value463=solve_generics(param_type_192,info->generics_type,info))));
                                                            come_call_finalizer2(sType_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 1875 "21obj.c"
                                                            expected_next_character(41,info);
                                                            # 1877 "21obj.c"
                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1877, "struct sNode");
                                                            _inf_obj_value19=come_increment_ref_count(((struct sIsHeap*)(right_value465=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value464=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1877, "sIsHeap")))),(struct sType*)come_increment_ref_count(type2_195),info))));
                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                            _inf_value19->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value19->clone=(void*)sIsHeap_clone;
                                                            _inf_value19->compile=(void*)sIsHeap_compile;
                                                            _inf_value19->sline=(void*)sIsHeap_sline;
                                                            _inf_value19->sname=(void*)sIsHeap_sname;
                                                            _inf_value19->terminated=(void*)sIsHeap_terminated;
                                                            _inf_value19->kind=(void*)sIsHeap_kind;
                                                            __result308__ = __result_obj__ = ((struct sNode*)(right_value469=_inf_value19));
                                                            come_call_finalizer2(sType_finalize,param_type_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            param_name_193 = come_decrement_ref_count2(param_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,type2_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sIsHeap_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(sIsHeap_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result308__;
                                                            come_call_finalizer2(sType_finalize,param_type_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            param_name_193 = come_decrement_ref_count2(param_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,type2_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            # 2163 "21obj.c"
                                                            # 1879 "21obj.c"
                                                            if(_if_conditional328=charp_operator_equals(buf,"ispointer")&&*info->p==40,                                                            _if_conditional328) {
                                                                # 1880 "21obj.c"
                                                                info->p++;
                                                                # 1881 "21obj.c"
                                                                skip_spaces_and_lf(info);
                                                                # 1883 "21obj.c"
                                                                multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value470=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                param_type_197=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                param_name_198=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                err_199=multiple_assign_var6->v3;
                                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 1889 "21obj.c"
                                                                # 1884 "21obj.c"
                                                                if(_if_conditional329=!err_199,                                                                _if_conditional329) {
                                                                    # 1885 "21obj.c"
                                                                    err_msg(info,"parse_type failed");
                                                                    # 1886 "21obj.c"
                                                                    exit(2);
                                                                }
                                                                # 1889 "21obj.c"
                                                                type2_200=(struct sType*)come_increment_ref_count(((struct sType*)(right_value471=solve_generics(param_type_197,info->generics_type,info))));
                                                                come_call_finalizer2(sType_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 1891 "21obj.c"
                                                                expected_next_character(41,info);
                                                                # 1893 "21obj.c"
                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1893, "struct sNode");
                                                                _inf_obj_value20=come_increment_ref_count(((struct sIsPointer*)(right_value473=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(right_value472=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1893, "sIsPointer")))),(struct sType*)come_increment_ref_count(type2_200),info))));
                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                _inf_value20->finalize=(void*)sIsPointer_finalize;
                                                                _inf_value20->clone=(void*)sIsPointer_clone;
                                                                _inf_value20->compile=(void*)sIsPointer_compile;
                                                                _inf_value20->sline=(void*)sIsPointer_sline;
                                                                _inf_value20->sname=(void*)sIsPointer_sname;
                                                                _inf_value20->terminated=(void*)sIsPointer_terminated;
                                                                _inf_value20->kind=(void*)sIsPointer_kind;
                                                                __result311__ = __result_obj__ = ((struct sNode*)(right_value477=_inf_value20));
                                                                come_call_finalizer2(sType_finalize,param_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                param_name_198 = come_decrement_ref_count2(param_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(sType_finalize,type2_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(sIsPointer_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(sIsPointer_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(right_value477) { right_value477 = come_decrement_ref_count2(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result311__;
                                                                come_call_finalizer2(sType_finalize,param_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                param_name_198 = come_decrement_ref_count2(param_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(sType_finalize,type2_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            else {
                                                                # 2163 "21obj.c"
                                                                # 1895 "21obj.c"
                                                                if(_if_conditional336=charp_operator_equals(buf,"using"),                                                                _if_conditional336) {
                                                                    # 1950 "21obj.c"
                                                                    # 1896 "21obj.c"
                                                                    if(_if_conditional337=strmemcmp(info->p,"comelang"),                                                                    _if_conditional337) {
                                                                        # 1897 "21obj.c"
                                                                        info->p+=strlen("comelang");
                                                                        # 1898 "21obj.c"
                                                                        skip_spaces_and_lf(info);
                                                                        # 1900 "21obj.c"
                                                                        gComeC=(_Bool)0;
                                                                        # 1902 "21obj.c"
                                                                        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1902, "struct sNode");
                                                                        _inf_obj_value21=come_increment_ref_count(((struct sNullNodeX*)(right_value479=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value478=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1902, "sNullNodeX")))),info))));
                                                                        _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                        _inf_value21->finalize=(void*)sNullNodeX_finalize;
                                                                        _inf_value21->clone=(void*)sNullNodeX_clone;
                                                                        _inf_value21->compile=(void*)sNullNodeX_compile;
                                                                        _inf_value21->sline=(void*)sNullNodeX_sline;
                                                                        _inf_value21->sname=(void*)sNullNodeX_sname;
                                                                        _inf_value21->terminated=(void*)sNullNodeX_terminated;
                                                                        _inf_value21->kind=(void*)sNullNodeX_kind;
                                                                        __result314__ = __result_obj__ = ((struct sNode*)(right_value482=_inf_value21));
                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value482) { right_value482 = come_decrement_ref_count2(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result314__;
                                                                    }
                                                                    else {
                                                                        # 1950 "21obj.c"
                                                                        # 1904 "21obj.c"
                                                                        if(_if_conditional342=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),                                                                        _if_conditional342) {
                                                                            # 1905 "21obj.c"
                                                                            info->p+=strlen("c");
                                                                            # 1906 "21obj.c"
                                                                            skip_spaces_and_lf(info);
                                                                            # 1908 "21obj.c"
                                                                            gComeC=(_Bool)1;
                                                                            # 1920 "21obj.c"
                                                                            # 1910 "21obj.c"
                                                                            if(_if_conditional343=*info->p==123,                                                                            _if_conditional343) {
                                                                                # 1911 "21obj.c"
                                                                                node_203=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value483=parse_normal_block(info))));
                                                                                if(right_value483) { right_value483 = come_decrement_ref_count2(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                # 1913 "21obj.c"
                                                                                gComeC=(_Bool)0;
                                                                                # 1915 "21obj.c"
                                                                                __result315__ = __result_obj__ = node_203;
                                                                                if(node_203) { node_203 = come_decrement_ref_count2(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result315__;
                                                                                if(node_203) { node_203 = come_decrement_ref_count2(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            else {
                                                                                # 1918 "21obj.c"
                                                                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1918, "struct sNode");
                                                                                _inf_obj_value22=come_increment_ref_count(((struct sNullNodeX*)(right_value485=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value484=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1918, "sNullNodeX")))),info))));
                                                                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                _inf_value22->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value22->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value22->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value22->sline=(void*)sNullNodeX_sline;
                                                                                _inf_value22->sname=(void*)sNullNodeX_sname;
                                                                                _inf_value22->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value22->kind=(void*)sNullNodeX_kind;
                                                                                __result318__ = __result_obj__ = ((struct sNode*)(right_value488=_inf_value22));
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value488) { right_value488 = come_decrement_ref_count2(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result318__;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1950 "21obj.c"
                                                                            # 1921 "21obj.c"
                                                                            if(_if_conditional348=strmemcmp(info->p,"gc"),                                                                            _if_conditional348) {
                                                                                # 1922 "21obj.c"
                                                                                info->p+=strlen("gc");
                                                                                # 1923 "21obj.c"
                                                                                skip_spaces_and_lf(info);
                                                                                # 1925 "21obj.c"
                                                                                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1925, "struct sNode");
                                                                                _inf_obj_value23=come_increment_ref_count(((struct sNullNodeX*)(right_value490=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value489=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1925, "sNullNodeX")))),info))));
                                                                                _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                _inf_value23->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value23->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value23->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value23->sline=(void*)sNullNodeX_sline;
                                                                                _inf_value23->sname=(void*)sNullNodeX_sname;
                                                                                _inf_value23->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value23->kind=(void*)sNullNodeX_kind;
                                                                                __result321__ = __result_obj__ = ((struct sNode*)(right_value493=_inf_value23));
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value493) { right_value493 = come_decrement_ref_count2(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result321__;
                                                                            }
                                                                            else {
                                                                                # 1950 "21obj.c"
                                                                                # 1927 "21obj.c"
                                                                                if(_if_conditional353=strmemcmp(info->p,"no-gc"),                                                                                _if_conditional353) {
                                                                                    # 1928 "21obj.c"
                                                                                    info->p+=strlen("no-gc");
                                                                                    # 1929 "21obj.c"
                                                                                    skip_spaces_and_lf(info);
                                                                                    # 1932 "21obj.c"
                                                                                    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1932, "struct sNode");
                                                                                    _inf_obj_value24=come_increment_ref_count(((struct sNullNodeX*)(right_value495=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value494=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1932, "sNullNodeX")))),info))));
                                                                                    _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                    _inf_value24->finalize=(void*)sNullNodeX_finalize;
                                                                                    _inf_value24->clone=(void*)sNullNodeX_clone;
                                                                                    _inf_value24->compile=(void*)sNullNodeX_compile;
                                                                                    _inf_value24->sline=(void*)sNullNodeX_sline;
                                                                                    _inf_value24->sname=(void*)sNullNodeX_sname;
                                                                                    _inf_value24->terminated=(void*)sNullNodeX_terminated;
                                                                                    _inf_value24->kind=(void*)sNullNodeX_kind;
                                                                                    __result324__ = __result_obj__ = ((struct sNode*)(right_value498=_inf_value24));
                                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value498) { right_value498 = come_decrement_ref_count2(right_value498, ((struct sNode*)right_value498)->finalize, ((struct sNode*)right_value498)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result324__;
                                                                                }
                                                                                else {
                                                                                    # 1950 "21obj.c"
                                                                                    # 1934 "21obj.c"
                                                                                    if(_if_conditional358=strmemcmp(info->p,"unsafe"),                                                                                    _if_conditional358) {
                                                                                        # 1935 "21obj.c"
                                                                                        info->p+=strlen("unsafe");
                                                                                        # 1936 "21obj.c"
                                                                                        skip_spaces_and_lf(info);
                                                                                        # 1938 "21obj.c"
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1938, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sNullNodeX*)(right_value500=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value499=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1938, "sNullNodeX")))),info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sNullNodeX_finalize;
                                                                                        _inf_value25->clone=(void*)sNullNodeX_clone;
                                                                                        _inf_value25->compile=(void*)sNullNodeX_compile;
                                                                                        _inf_value25->sline=(void*)sNullNodeX_sline;
                                                                                        _inf_value25->sname=(void*)sNullNodeX_sname;
                                                                                        _inf_value25->terminated=(void*)sNullNodeX_terminated;
                                                                                        _inf_value25->kind=(void*)sNullNodeX_kind;
                                                                                        __result327__ = __result_obj__ = ((struct sNode*)(right_value503=_inf_value25));
                                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value503) { right_value503 = come_decrement_ref_count2(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result327__;
                                                                                    }
                                                                                    else {
                                                                                        # 1950 "21obj.c"
                                                                                        # 1940 "21obj.c"
                                                                                        if(_if_conditional363=strmemcmp(info->p,"no-null-check"),                                                                                        _if_conditional363) {
                                                                                            # 1941 "21obj.c"
                                                                                            info->p+=strlen("no-null-check");
                                                                                            # 1942 "21obj.c"
                                                                                            skip_spaces_and_lf(info);
                                                                                            # 1944 "21obj.c"
                                                                                            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1944, "struct sNode");
                                                                                            _inf_obj_value26=come_increment_ref_count(((struct sNullNodeX*)(right_value505=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value504=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1944, "sNullNodeX")))),info))));
                                                                                            _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                                            _inf_value26->finalize=(void*)sNullNodeX_finalize;
                                                                                            _inf_value26->clone=(void*)sNullNodeX_clone;
                                                                                            _inf_value26->compile=(void*)sNullNodeX_compile;
                                                                                            _inf_value26->sline=(void*)sNullNodeX_sline;
                                                                                            _inf_value26->sname=(void*)sNullNodeX_sname;
                                                                                            _inf_value26->terminated=(void*)sNullNodeX_terminated;
                                                                                            _inf_value26->kind=(void*)sNullNodeX_kind;
                                                                                            __result330__ = __result_obj__ = ((struct sNode*)(right_value508=_inf_value26));
                                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value508) { right_value508 = come_decrement_ref_count2(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result330__;
                                                                                        }
                                                                                        else {
                                                                                            # 1947 "21obj.c"
                                                                                            err_msg(info,"invalid using");
                                                                                            # 1948 "21obj.c"
                                                                                            exit(2);
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 2163 "21obj.c"
                                                                    # 1951 "21obj.c"
                                                                    if(_if_conditional368=charp_operator_equals(buf,"sizeof"),                                                                    _if_conditional368) {
                                                                        # 1952 "21obj.c"
                                                                        expected_next_character(40,info);
                                                                        # 1955 "21obj.c"
                                                                        is_type_name_flag_209=(_Bool)0;
                                                                        # 1972 "21obj.c"
                                                                        {
                                                                            # 1957 "21obj.c"
                                                                            p_210=info->p;
                                                                            # 1958 "21obj.c"
                                                                            sline_211=info->sline;
                                                                            # 1968 "21obj.c"
                                                                            # 1960 "21obj.c"
                                                                            if(_if_conditional369=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional369) {
                                                                                # 1961 "21obj.c"
                                                                                word_212=(char*)come_increment_ref_count(((char*)(right_value509=parse_word(info))));
                                                                                right_value509 = come_decrement_ref_count2(right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1966 "21obj.c"
                                                                                # 1963 "21obj.c"
                                                                                if(_if_conditional370=is_type_name(word_212,info),                                                                                _if_conditional370) {
                                                                                    # 1964 "21obj.c"
                                                                                    is_type_name_flag_209=(_Bool)1;
                                                                                }
                                                                                word_212 = come_decrement_ref_count2(word_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 1968 "21obj.c"
                                                                            info->p=p_210;
                                                                            # 1969 "21obj.c"
                                                                            info->sline=sline_211;
                                                                        }
                                                                        # 1990 "21obj.c"
                                                                        # 1972 "21obj.c"
                                                                        if(is_type_name_flag_209) {
                                                                            # 1973 "21obj.c"
                                                                            multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value510=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                            type_213=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                            name_214=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                            err_215=multiple_assign_var7->v3;
                                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            # 1979 "21obj.c"
                                                                            # 1974 "21obj.c"
                                                                            if(_if_conditional372=!err_215,                                                                            _if_conditional372) {
                                                                                # 1975 "21obj.c"
                                                                                err_msg(info,"parse type");
                                                                                # 1976 "21obj.c"
                                                                                exit(2);
                                                                            }
                                                                            # 1979 "21obj.c"
                                                                            expected_next_character(41,info);
                                                                            # 1981 "21obj.c"
                                                                            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1981, "struct sNode");
                                                                            _inf_obj_value27=come_increment_ref_count(((struct sSizeOfNode*)(right_value512=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value511=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1981, "sSizeOfNode")))),(struct sType*)come_increment_ref_count(type_213),info))));
                                                                            _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                            _inf_value27->finalize=(void*)sSizeOfNode_finalize;
                                                                            _inf_value27->clone=(void*)sSizeOfNode_clone;
                                                                            _inf_value27->compile=(void*)sSizeOfNode_compile;
                                                                            _inf_value27->sline=(void*)sSizeOfNode_sline;
                                                                            _inf_value27->sname=(void*)sSizeOfNode_sname;
                                                                            _inf_value27->terminated=(void*)sSizeOfNode_terminated;
                                                                            _inf_value27->kind=(void*)sSizeOfNode_kind;
                                                                            __result333__ = __result_obj__ = ((struct sNode*)(right_value516=_inf_value27));
                                                                            come_call_finalizer2(sType_finalize,type_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer2(sSizeOfNode_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sSizeOfNode_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value516) { right_value516 = come_decrement_ref_count2(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result333__;
                                                                            come_call_finalizer2(sType_finalize,type_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            # 1984 "21obj.c"
                                                                            exp_217=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value517=expression_v13(info))));
                                                                            if(right_value517) { right_value517 = come_decrement_ref_count2(right_value517, ((struct sNode*)right_value517)->finalize, ((struct sNode*)right_value517)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            # 1986 "21obj.c"
                                                                            expected_next_character(41,info);
                                                                            # 1988 "21obj.c"
                                                                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1988, "struct sNode");
                                                                            _inf_obj_value28=come_increment_ref_count(((struct sSizeOfExpNode*)(right_value519=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value518=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1988, "sSizeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_217),info))));
                                                                            _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                            _inf_value28->finalize=(void*)sSizeOfExpNode_finalize;
                                                                            _inf_value28->clone=(void*)sSizeOfExpNode_clone;
                                                                            _inf_value28->compile=(void*)sSizeOfExpNode_compile;
                                                                            _inf_value28->sline=(void*)sSizeOfExpNode_sline;
                                                                            _inf_value28->sname=(void*)sSizeOfExpNode_sname;
                                                                            _inf_value28->terminated=(void*)sSizeOfExpNode_terminated;
                                                                            _inf_value28->kind=(void*)sSizeOfExpNode_kind;
                                                                            __result336__ = __result_obj__ = ((struct sNode*)(right_value523=_inf_value28));
                                                                            if(exp_217) { exp_217 = come_decrement_ref_count2(exp_217, ((struct sNode*)exp_217)->finalize, ((struct sNode*)exp_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value523) { right_value523 = come_decrement_ref_count2(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result336__;
                                                                            if(exp_217) { exp_217 = come_decrement_ref_count2(exp_217, ((struct sNode*)exp_217)->finalize, ((struct sNode*)exp_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 2163 "21obj.c"
                                                                        # 1991 "21obj.c"
                                                                        if(_if_conditional385=charp_operator_equals(buf,"typeof"),                                                                        _if_conditional385) {
                                                                            # 1992 "21obj.c"
                                                                            expected_next_character(40,info);
                                                                            # 1995 "21obj.c"
                                                                            is_type_name_flag_219=(_Bool)0;
                                                                            # 2012 "21obj.c"
                                                                            {
                                                                                # 1997 "21obj.c"
                                                                                p_220=info->p;
                                                                                # 1998 "21obj.c"
                                                                                sline_221=info->sline;
                                                                                # 2008 "21obj.c"
                                                                                # 2000 "21obj.c"
                                                                                if(_if_conditional386=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional386) {
                                                                                    # 2001 "21obj.c"
                                                                                    word_222=(char*)come_increment_ref_count(((char*)(right_value524=parse_word(info))));
                                                                                    right_value524 = come_decrement_ref_count2(right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 2006 "21obj.c"
                                                                                    # 2003 "21obj.c"
                                                                                    if(_if_conditional387=is_type_name(word_222,info),                                                                                    _if_conditional387) {
                                                                                        # 2004 "21obj.c"
                                                                                        is_type_name_flag_219=(_Bool)1;
                                                                                    }
                                                                                    word_222 = come_decrement_ref_count2(word_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2008 "21obj.c"
                                                                                info->p=p_220;
                                                                                # 2009 "21obj.c"
                                                                                info->sline=sline_221;
                                                                            }
                                                                            # 2030 "21obj.c"
                                                                            # 2012 "21obj.c"
                                                                            if(is_type_name_flag_219) {
                                                                                # 2013 "21obj.c"
                                                                                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value525=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                type_223=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                name_224=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                err_225=multiple_assign_var8->v3;
                                                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                # 2019 "21obj.c"
                                                                                # 2014 "21obj.c"
                                                                                if(_if_conditional389=!err_225,                                                                                _if_conditional389) {
                                                                                    # 2015 "21obj.c"
                                                                                    err_msg(info,"parse type");
                                                                                    # 2016 "21obj.c"
                                                                                    exit(2);
                                                                                }
                                                                                # 2019 "21obj.c"
                                                                                expected_next_character(41,info);
                                                                                # 2021 "21obj.c"
                                                                                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2021, "struct sNode");
                                                                                _inf_obj_value29=come_increment_ref_count(((struct sTypeOfNode*)(right_value527=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value526=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 2021, "sTypeOfNode")))),(struct sType*)come_increment_ref_count(type_223),info))));
                                                                                _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                                _inf_value29->finalize=(void*)sTypeOfNode_finalize;
                                                                                _inf_value29->clone=(void*)sTypeOfNode_clone;
                                                                                _inf_value29->compile=(void*)sTypeOfNode_compile;
                                                                                _inf_value29->sline=(void*)sTypeOfNode_sline;
                                                                                _inf_value29->sname=(void*)sTypeOfNode_sname;
                                                                                _inf_value29->terminated=(void*)sTypeOfNode_terminated;
                                                                                _inf_value29->kind=(void*)sTypeOfNode_kind;
                                                                                __result339__ = __result_obj__ = ((struct sNode*)(right_value531=_inf_value29));
                                                                                come_call_finalizer2(sType_finalize,type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                name_224 = come_decrement_ref_count2(name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer2(sTypeOfNode_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sTypeOfNode_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value531) { right_value531 = come_decrement_ref_count2(right_value531, ((struct sNode*)right_value531)->finalize, ((struct sNode*)right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result339__;
                                                                                come_call_finalizer2(sType_finalize,type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                name_224 = come_decrement_ref_count2(name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                # 2024 "21obj.c"
                                                                                exp_227=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value532=expression_v13(info))));
                                                                                if(right_value532) { right_value532 = come_decrement_ref_count2(right_value532, ((struct sNode*)right_value532)->finalize, ((struct sNode*)right_value532)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                # 2026 "21obj.c"
                                                                                expected_next_character(41,info);
                                                                                # 2028 "21obj.c"
                                                                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2028, "struct sNode");
                                                                                _inf_obj_value30=come_increment_ref_count(((struct sTypeOfExpNode*)(right_value534=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value533=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 2028, "sTypeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_227),info))));
                                                                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                _inf_value30->finalize=(void*)sTypeOfExpNode_finalize;
                                                                                _inf_value30->clone=(void*)sTypeOfExpNode_clone;
                                                                                _inf_value30->compile=(void*)sTypeOfExpNode_compile;
                                                                                _inf_value30->sline=(void*)sTypeOfExpNode_sline;
                                                                                _inf_value30->sname=(void*)sTypeOfExpNode_sname;
                                                                                _inf_value30->terminated=(void*)sTypeOfExpNode_terminated;
                                                                                _inf_value30->kind=(void*)sTypeOfExpNode_kind;
                                                                                __result342__ = __result_obj__ = ((struct sNode*)(right_value538=_inf_value30));
                                                                                if(exp_227) { exp_227 = come_decrement_ref_count2(exp_227, ((struct sNode*)exp_227)->finalize, ((struct sNode*)exp_227)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                come_call_finalizer2(sTypeOfExpNode_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sTypeOfExpNode_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value538) { right_value538 = come_decrement_ref_count2(right_value538, ((struct sNode*)right_value538)->finalize, ((struct sNode*)right_value538)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result342__;
                                                                                if(exp_227) { exp_227 = come_decrement_ref_count2(exp_227, ((struct sNode*)exp_227)->finalize, ((struct sNode*)exp_227)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 2163 "21obj.c"
                                                                            # 2042 "21obj.c"
                                                                            if(_if_conditional402=charp_operator_equals(buf,"_Alignof"),                                                                            _if_conditional402) {
                                                                                # 2043 "21obj.c"
                                                                                expected_next_character(40,info);
                                                                                # 2046 "21obj.c"
                                                                                is_type_name_flag_229=(_Bool)0;
                                                                                # 2063 "21obj.c"
                                                                                {
                                                                                    # 2048 "21obj.c"
                                                                                    p_230=info->p;
                                                                                    # 2049 "21obj.c"
                                                                                    sline_231=info->sline;
                                                                                    # 2059 "21obj.c"
                                                                                    # 2051 "21obj.c"
                                                                                    if(_if_conditional403=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional403) {
                                                                                        # 2052 "21obj.c"
                                                                                        word_232=(char*)come_increment_ref_count(((char*)(right_value539=parse_word(info))));
                                                                                        right_value539 = come_decrement_ref_count2(right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        # 2057 "21obj.c"
                                                                                        # 2054 "21obj.c"
                                                                                        if(_if_conditional404=is_type_name(word_232,info),                                                                                        _if_conditional404) {
                                                                                            # 2055 "21obj.c"
                                                                                            is_type_name_flag_229=(_Bool)1;
                                                                                        }
                                                                                        word_232 = come_decrement_ref_count2(word_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2059 "21obj.c"
                                                                                    info->p=p_230;
                                                                                    # 2060 "21obj.c"
                                                                                    info->sline=sline_231;
                                                                                }
                                                                                # 2081 "21obj.c"
                                                                                # 2063 "21obj.c"
                                                                                if(is_type_name_flag_229) {
                                                                                    # 2064 "21obj.c"
                                                                                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value540=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                    type_233=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                    name_234=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                    err_235=multiple_assign_var9->v3;
                                                                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    # 2070 "21obj.c"
                                                                                    # 2065 "21obj.c"
                                                                                    if(_if_conditional406=!err_235,                                                                                    _if_conditional406) {
                                                                                        # 2066 "21obj.c"
                                                                                        err_msg(info,"parse type");
                                                                                        # 2067 "21obj.c"
                                                                                        exit(2);
                                                                                    }
                                                                                    # 2070 "21obj.c"
                                                                                    expected_next_character(41,info);
                                                                                    # 2072 "21obj.c"
                                                                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2072, "struct sNode");
                                                                                    _inf_obj_value31=come_increment_ref_count(((struct sAlignOfNode*)(right_value542=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value541=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 2072, "sAlignOfNode")))),(struct sType*)come_increment_ref_count(type_233),info))));
                                                                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                    _inf_value31->finalize=(void*)sAlignOfNode_finalize;
                                                                                    _inf_value31->clone=(void*)sAlignOfNode_clone;
                                                                                    _inf_value31->compile=(void*)sAlignOfNode_compile;
                                                                                    _inf_value31->sline=(void*)sAlignOfNode_sline;
                                                                                    _inf_value31->sname=(void*)sAlignOfNode_sname;
                                                                                    _inf_value31->terminated=(void*)sAlignOfNode_terminated;
                                                                                    _inf_value31->kind=(void*)sAlignOfNode_kind;
                                                                                    __result345__ = __result_obj__ = ((struct sNode*)(right_value546=_inf_value31));
                                                                                    come_call_finalizer2(sType_finalize,type_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    name_234 = come_decrement_ref_count2(name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer2(sAlignOfNode_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sAlignOfNode_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value546) { right_value546 = come_decrement_ref_count2(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result345__;
                                                                                    come_call_finalizer2(sType_finalize,type_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    name_234 = come_decrement_ref_count2(name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    # 2075 "21obj.c"
                                                                                    exp_237=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value547=expression_v13(info))));
                                                                                    if(right_value547) { right_value547 = come_decrement_ref_count2(right_value547, ((struct sNode*)right_value547)->finalize, ((struct sNode*)right_value547)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    # 2077 "21obj.c"
                                                                                    expected_next_character(41,info);
                                                                                    # 2079 "21obj.c"
                                                                                    _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2079, "struct sNode");
                                                                                    _inf_obj_value32=come_increment_ref_count(((struct sAlignOfExpNode*)(right_value549=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value548=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 2079, "sAlignOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_237),info))));
                                                                                    _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                    _inf_value32->finalize=(void*)sAlignOfExpNode_finalize;
                                                                                    _inf_value32->clone=(void*)sAlignOfExpNode_clone;
                                                                                    _inf_value32->compile=(void*)sAlignOfExpNode_compile;
                                                                                    _inf_value32->sline=(void*)sAlignOfExpNode_sline;
                                                                                    _inf_value32->sname=(void*)sAlignOfExpNode_sname;
                                                                                    _inf_value32->terminated=(void*)sAlignOfExpNode_terminated;
                                                                                    _inf_value32->kind=(void*)sAlignOfExpNode_kind;
                                                                                    __result348__ = __result_obj__ = ((struct sNode*)(right_value553=_inf_value32));
                                                                                    if(exp_237) { exp_237 = come_decrement_ref_count2(exp_237, ((struct sNode*)exp_237)->finalize, ((struct sNode*)exp_237)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    come_call_finalizer2(sAlignOfExpNode_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sAlignOfExpNode_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value553) { right_value553 = come_decrement_ref_count2(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result348__;
                                                                                    if(exp_237) { exp_237 = come_decrement_ref_count2(exp_237, ((struct sNode*)exp_237)->finalize, ((struct sNode*)exp_237)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 2163 "21obj.c"
                                                                                # 2082 "21obj.c"
                                                                                if(_if_conditional419=charp_operator_equals(buf,"__alignof__"),                                                                                _if_conditional419) {
                                                                                    # 2083 "21obj.c"
                                                                                    expected_next_character(40,info);
                                                                                    # 2086 "21obj.c"
                                                                                    is_type_name_flag_239=(_Bool)0;
                                                                                    # 2103 "21obj.c"
                                                                                    {
                                                                                        # 2088 "21obj.c"
                                                                                        p_240=info->p;
                                                                                        # 2089 "21obj.c"
                                                                                        sline_241=info->sline;
                                                                                        # 2099 "21obj.c"
                                                                                        # 2091 "21obj.c"
                                                                                        if(_if_conditional420=xisalpha(*info->p)||*info->p==95,                                                                                        _if_conditional420) {
                                                                                            # 2092 "21obj.c"
                                                                                            word_242=(char*)come_increment_ref_count(((char*)(right_value554=parse_word(info))));
                                                                                            right_value554 = come_decrement_ref_count2(right_value554, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            # 2097 "21obj.c"
                                                                                            # 2094 "21obj.c"
                                                                                            if(_if_conditional421=is_type_name(word_242,info),                                                                                            _if_conditional421) {
                                                                                                # 2095 "21obj.c"
                                                                                                is_type_name_flag_239=(_Bool)1;
                                                                                            }
                                                                                            word_242 = come_decrement_ref_count2(word_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 2099 "21obj.c"
                                                                                        info->p=p_240;
                                                                                        # 2100 "21obj.c"
                                                                                        info->sline=sline_241;
                                                                                    }
                                                                                    # 2121 "21obj.c"
                                                                                    # 2103 "21obj.c"
                                                                                    if(is_type_name_flag_239) {
                                                                                        # 2104 "21obj.c"
                                                                                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value555=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_243=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                                                                                        name_244=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                                                                                        err_245=multiple_assign_var10->v3;
                                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        # 2110 "21obj.c"
                                                                                        # 2105 "21obj.c"
                                                                                        if(_if_conditional423=!err_245,                                                                                        _if_conditional423) {
                                                                                            # 2106 "21obj.c"
                                                                                            err_msg(info,"parse type");
                                                                                            # 2107 "21obj.c"
                                                                                            exit(2);
                                                                                        }
                                                                                        # 2110 "21obj.c"
                                                                                        expected_next_character(41,info);
                                                                                        # 2112 "21obj.c"
                                                                                        _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2112, "struct sNode");
                                                                                        _inf_obj_value33=come_increment_ref_count(((struct sAlignOfNode2*)(right_value557=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value556=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 2112, "sAlignOfNode2")))),(struct sType*)come_increment_ref_count(type_243),info))));
                                                                                        _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                        _inf_value33->finalize=(void*)sAlignOfNode2_finalize;
                                                                                        _inf_value33->clone=(void*)sAlignOfNode2_clone;
                                                                                        _inf_value33->compile=(void*)sAlignOfNode2_compile;
                                                                                        _inf_value33->sline=(void*)sAlignOfNode2_sline;
                                                                                        _inf_value33->sname=(void*)sAlignOfNode2_sname;
                                                                                        _inf_value33->terminated=(void*)sAlignOfNode2_terminated;
                                                                                        _inf_value33->kind=(void*)sAlignOfNode2_kind;
                                                                                        __result351__ = __result_obj__ = ((struct sNode*)(right_value561=_inf_value33));
                                                                                        come_call_finalizer2(sType_finalize,type_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sAlignOfNode2_finalize,right_value556, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sAlignOfNode2_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value561) { right_value561 = come_decrement_ref_count2(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result351__;
                                                                                        come_call_finalizer2(sType_finalize,type_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        # 2115 "21obj.c"
                                                                                        exp_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value562=expression_v13(info))));
                                                                                        if(right_value562) { right_value562 = come_decrement_ref_count2(right_value562, ((struct sNode*)right_value562)->finalize, ((struct sNode*)right_value562)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        # 2117 "21obj.c"
                                                                                        expected_next_character(41,info);
                                                                                        # 2119 "21obj.c"
                                                                                        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2119, "struct sNode");
                                                                                        _inf_obj_value34=come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value564=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value563=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 2119, "sAlignOfExpNode2")))),(struct sNode*)come_increment_ref_count(exp_247),info))));
                                                                                        _inf_value34->_protocol_obj=_inf_obj_value34;
                                                                                        _inf_value34->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                        _inf_value34->clone=(void*)sAlignOfExpNode2_clone;
                                                                                        _inf_value34->compile=(void*)sAlignOfExpNode2_compile;
                                                                                        _inf_value34->sline=(void*)sAlignOfExpNode2_sline;
                                                                                        _inf_value34->sname=(void*)sAlignOfExpNode2_sname;
                                                                                        _inf_value34->terminated=(void*)sAlignOfExpNode2_terminated;
                                                                                        _inf_value34->kind=(void*)sAlignOfExpNode2_kind;
                                                                                        __result354__ = __result_obj__ = ((struct sNode*)(right_value568=_inf_value34));
                                                                                        if(exp_247) { exp_247 = come_decrement_ref_count2(exp_247, ((struct sNode*)exp_247)->finalize, ((struct sNode*)exp_247)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer2(sAlignOfExpNode2_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sAlignOfExpNode2_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value568) { right_value568 = come_decrement_ref_count2(right_value568, ((struct sNode*)right_value568)->finalize, ((struct sNode*)right_value568)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result354__;
                                                                                        if(exp_247) { exp_247 = come_decrement_ref_count2(exp_247, ((struct sNode*)exp_247)->finalize, ((struct sNode*)exp_247)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    # 2163 "21obj.c"
                                                                                    # 2122 "21obj.c"
                                                                                    if(_if_conditional436=charp_operator_equals(buf,"_Alignas"),                                                                                    _if_conditional436) {
                                                                                        # 2123 "21obj.c"
                                                                                        expected_next_character(40,info);
                                                                                        # 2126 "21obj.c"
                                                                                        is_type_name_flag_249=(_Bool)0;
                                                                                        # 2143 "21obj.c"
                                                                                        {
                                                                                            # 2128 "21obj.c"
                                                                                            p_250=info->p;
                                                                                            # 2129 "21obj.c"
                                                                                            sline_251=info->sline;
                                                                                            # 2139 "21obj.c"
                                                                                            # 2131 "21obj.c"
                                                                                            if(_if_conditional437=xisalpha(*info->p)||*info->p==95,                                                                                            _if_conditional437) {
                                                                                                # 2132 "21obj.c"
                                                                                                word_252=(char*)come_increment_ref_count(((char*)(right_value569=parse_word(info))));
                                                                                                right_value569 = come_decrement_ref_count2(right_value569, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                # 2137 "21obj.c"
                                                                                                # 2134 "21obj.c"
                                                                                                if(_if_conditional438=is_type_name(word_252,info),                                                                                                _if_conditional438) {
                                                                                                    # 2135 "21obj.c"
                                                                                                    is_type_name_flag_249=(_Bool)1;
                                                                                                }
                                                                                                word_252 = come_decrement_ref_count2(word_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            # 2139 "21obj.c"
                                                                                            info->p=p_250;
                                                                                            # 2140 "21obj.c"
                                                                                            info->sline=sline_251;
                                                                                        }
                                                                                        # 2161 "21obj.c"
                                                                                        # 2143 "21obj.c"
                                                                                        if(is_type_name_flag_249) {
                                                                                            # 2144 "21obj.c"
                                                                                            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value570=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                            type_253=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                                                                                            name_254=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                                                                                            err_255=multiple_assign_var11->v3;
                                                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            # 2150 "21obj.c"
                                                                                            # 2145 "21obj.c"
                                                                                            if(_if_conditional440=!err_255,                                                                                            _if_conditional440) {
                                                                                                # 2146 "21obj.c"
                                                                                                err_msg(info,"parse type");
                                                                                                # 2147 "21obj.c"
                                                                                                exit(2);
                                                                                            }
                                                                                            # 2150 "21obj.c"
                                                                                            expected_next_character(41,info);
                                                                                            # 2152 "21obj.c"
                                                                                            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2152, "struct sNode");
                                                                                            _inf_obj_value35=come_increment_ref_count(((struct sAlignAsNode*)(right_value572=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value571=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 2152, "sAlignAsNode")))),(struct sType*)come_increment_ref_count(type_253),info))));
                                                                                            _inf_value35->_protocol_obj=_inf_obj_value35;
                                                                                            _inf_value35->finalize=(void*)sAlignAsNode_finalize;
                                                                                            _inf_value35->clone=(void*)sAlignAsNode_clone;
                                                                                            _inf_value35->compile=(void*)sAlignAsNode_compile;
                                                                                            _inf_value35->sline=(void*)sAlignAsNode_sline;
                                                                                            _inf_value35->sname=(void*)sAlignAsNode_sname;
                                                                                            _inf_value35->terminated=(void*)sAlignAsNode_terminated;
                                                                                            _inf_value35->kind=(void*)sAlignAsNode_kind;
                                                                                            __result357__ = __result_obj__ = ((struct sNode*)(right_value576=_inf_value35));
                                                                                            come_call_finalizer2(sType_finalize,type_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            name_254 = come_decrement_ref_count2(name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sAlignAsNode_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sAlignAsNode_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value576) { right_value576 = come_decrement_ref_count2(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result357__;
                                                                                            come_call_finalizer2(sType_finalize,type_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            name_254 = come_decrement_ref_count2(name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            # 2155 "21obj.c"
                                                                                            exp_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value577=expression_v13(info))));
                                                                                            if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            # 2157 "21obj.c"
                                                                                            expected_next_character(41,info);
                                                                                            # 2159 "21obj.c"
                                                                                            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2159, "struct sNode");
                                                                                            _inf_obj_value36=come_increment_ref_count(((struct sAlignAsExpNode*)(right_value579=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value578=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 2159, "sAlignAsExpNode")))),(struct sNode*)come_increment_ref_count(exp_257),info))));
                                                                                            _inf_value36->_protocol_obj=_inf_obj_value36;
                                                                                            _inf_value36->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                            _inf_value36->clone=(void*)sAlignAsExpNode_clone;
                                                                                            _inf_value36->compile=(void*)sAlignAsExpNode_compile;
                                                                                            _inf_value36->sline=(void*)sAlignAsExpNode_sline;
                                                                                            _inf_value36->sname=(void*)sAlignAsExpNode_sname;
                                                                                            _inf_value36->terminated=(void*)sAlignAsExpNode_terminated;
                                                                                            _inf_value36->kind=(void*)sAlignAsExpNode_kind;
                                                                                            __result360__ = __result_obj__ = ((struct sNode*)(right_value583=_inf_value36));
                                                                                            if(exp_257) { exp_257 = come_decrement_ref_count2(exp_257, ((struct sNode*)exp_257)->finalize, ((struct sNode*)exp_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            come_call_finalizer2(sAlignAsExpNode_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sAlignAsExpNode_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value583) { right_value583 = come_decrement_ref_count2(right_value583, ((struct sNode*)right_value583)->finalize, ((struct sNode*)right_value583)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result360__;
                                                                                            if(exp_257) { exp_257 = come_decrement_ref_count2(exp_257, ((struct sNode*)exp_257)->finalize, ((struct sNode*)exp_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    # 2163 "21obj.c"
    __result361__ = __result_obj__ = ((struct sNode*)(right_value584=string_node_v20(buf,head,head_sline,info)));
    if(right_value584) { right_value584 = come_decrement_ref_count2(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result361__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional215=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional215) {
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple3$3sTypephcharphboolp_finalize"
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional216=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional216) {
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sNewNode_finalize(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional234;
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sNewNode_finalize"
                # 0 "sNewNode_finalize"
                if(_if_conditional234=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional234) {
                    # 0 "sNewNode_finalize"
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sNewNode_finalize"
                # 1 "sNewNode_finalize"
                if(_if_conditional235=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional235) {
                    # 1 "sNewNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional236;
struct sNewNode* __result267__;
void* right_value378;
struct sNewNode* result_169;
_Bool _if_conditional237;
void* right_value379;
struct sType* __dec_obj150;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value380;
char* __dec_obj151;
struct sNewNode* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
right_value378 = (void*)0;
memset(&result_169, 0, sizeof(struct sNewNode*));
right_value379 = (void*)0;
right_value380 = (void*)0;
                # 3 "sNewNode_clone"
                # 2 "sNewNode_clone"
                if(_if_conditional236=self==(void*)0,                _if_conditional236) {
                    # 2 "sNewNode_clone"
                    __result267__ = __result_obj__ = (void*)0;
                    return __result267__;
                }
                # 3 "sNewNode_clone"
                result_169=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value378=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "sNewNode"))));
                come_call_finalizer2(sNewNode_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sNewNode_clone"
                # 4 "sNewNode_clone"
                if(_if_conditional237=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional237) {
                    # 4 "sNewNode_clone"
                    __dec_obj150=result_169->type;
                    result_169->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value379=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "sNewNode_clone"
                # 5 "sNewNode_clone"
                if(_if_conditional238=self!=((void*)0),                _if_conditional238) {
                    # 5 "sNewNode_clone"
                    result_169->sline=self->sline;
                }
                # 7 "sNewNode_clone"
                # 6 "sNewNode_clone"
                if(_if_conditional239=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional239) {
                    # 6 "sNewNode_clone"
                    __dec_obj151=result_169->sname;
                    result_169->sname=(char*)come_increment_ref_count(((char*)(right_value380=string_clone(self->sname))));
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sNewNode_clone"
                __result268__ = __result_obj__ = result_169;
                come_call_finalizer2(sNewNode_finalize,result_169, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result268__;
                come_call_finalizer2(sNewNode_finalize,result_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTrueNode_finalize(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional241;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sTrueNode_finalize"
                # 0 "sTrueNode_finalize"
                if(_if_conditional241=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional241) {
                    # 0 "sTrueNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional242;
struct sTrueNode* __result270__;
void* right_value384;
struct sTrueNode* result_170;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value385;
char* __dec_obj152;
struct sTrueNode* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
right_value384 = (void*)0;
memset(&result_170, 0, sizeof(struct sTrueNode*));
right_value385 = (void*)0;
                # 3 "sTrueNode_clone"
                # 2 "sTrueNode_clone"
                if(_if_conditional242=self==(void*)0,                _if_conditional242) {
                    # 2 "sTrueNode_clone"
                    __result270__ = __result_obj__ = (void*)0;
                    return __result270__;
                }
                # 3 "sTrueNode_clone"
                result_170=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value384=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "sTrueNode"))));
                come_call_finalizer2(sTrueNode_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sTrueNode_clone"
                # 4 "sTrueNode_clone"
                if(_if_conditional243=self!=((void*)0),                _if_conditional243) {
                    # 4 "sTrueNode_clone"
                    result_170->sline=self->sline;
                }
                # 6 "sTrueNode_clone"
                # 5 "sTrueNode_clone"
                if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional244) {
                    # 5 "sTrueNode_clone"
                    __dec_obj152=result_170->sname;
                    result_170->sname=(char*)come_increment_ref_count(((char*)(right_value385=string_clone(self->sname))));
                    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sTrueNode_clone"
                __result271__ = __result_obj__ = result_170;
                come_call_finalizer2(sTrueNode_finalize,result_170, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result271__;
                come_call_finalizer2(sTrueNode_finalize,result_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFalseNode_finalize(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional246;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sFalseNode_finalize"
                    # 0 "sFalseNode_finalize"
                    if(_if_conditional246=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional246) {
                        # 0 "sFalseNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional247;
struct sFalseNode* __result273__;
void* right_value389;
struct sFalseNode* result_171;
_Bool _if_conditional248;
_Bool _if_conditional249;
void* right_value390;
char* __dec_obj153;
struct sFalseNode* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
memset(&result_171, 0, sizeof(struct sFalseNode*));
right_value390 = (void*)0;
                    # 3 "sFalseNode_clone"
                    # 2 "sFalseNode_clone"
                    if(_if_conditional247=self==(void*)0,                    _if_conditional247) {
                        # 2 "sFalseNode_clone"
                        __result273__ = __result_obj__ = (void*)0;
                        return __result273__;
                    }
                    # 3 "sFalseNode_clone"
                    result_171=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value389=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "sFalseNode"))));
                    come_call_finalizer2(sFalseNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sFalseNode_clone"
                    # 4 "sFalseNode_clone"
                    if(_if_conditional248=self!=((void*)0),                    _if_conditional248) {
                        # 4 "sFalseNode_clone"
                        result_171->sline=self->sline;
                    }
                    # 6 "sFalseNode_clone"
                    # 5 "sFalseNode_clone"
                    if(_if_conditional249=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional249) {
                        # 5 "sFalseNode_clone"
                        __dec_obj153=result_171->sname;
                        result_171->sname=(char*)come_increment_ref_count(((char*)(right_value390=string_clone(self->sname))));
                        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sFalseNode_clone"
                    __result274__ = __result_obj__ = result_171;
                    come_call_finalizer2(sFalseNode_finalize,result_171, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result274__;
                    come_call_finalizer2(sFalseNode_finalize,result_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional251;
_Bool _if_conditional252;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sDeleteNode_finalize"
                        # 0 "sDeleteNode_finalize"
                        if(_if_conditional251=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional251) {
                            # 0 "sDeleteNode_finalize"
                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sDeleteNode_finalize"
                        # 1 "sDeleteNode_finalize"
                        if(_if_conditional252=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional252) {
                            # 1 "sDeleteNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional253;
struct sDeleteNode* __result276__;
void* right_value395;
struct sDeleteNode* result_173;
_Bool _if_conditional254;
void* right_value396;
struct sNode* __dec_obj154;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value397;
char* __dec_obj155;
struct sDeleteNode* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
right_value395 = (void*)0;
memset(&result_173, 0, sizeof(struct sDeleteNode*));
right_value396 = (void*)0;
right_value397 = (void*)0;
                        # 3 "sDeleteNode_clone"
                        # 2 "sDeleteNode_clone"
                        if(_if_conditional253=self==(void*)0,                        _if_conditional253) {
                            # 2 "sDeleteNode_clone"
                            __result276__ = __result_obj__ = (void*)0;
                            return __result276__;
                        }
                        # 3 "sDeleteNode_clone"
                        result_173=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value395=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "sDeleteNode"))));
                        come_call_finalizer2(sDeleteNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sDeleteNode_clone"
                        # 4 "sDeleteNode_clone"
                        if(_if_conditional254=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional254) {
                            # 4 "sDeleteNode_clone"
                            __dec_obj154=result_173->node;
                            result_173->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=sNode_clone(self->node))));
                            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sDeleteNode_clone"
                        # 5 "sDeleteNode_clone"
                        if(_if_conditional255=self!=((void*)0),                        _if_conditional255) {
                            # 5 "sDeleteNode_clone"
                            result_173->sline=self->sline;
                        }
                        # 7 "sDeleteNode_clone"
                        # 6 "sDeleteNode_clone"
                        if(_if_conditional256=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional256) {
                            # 6 "sDeleteNode_clone"
                            __dec_obj155=result_173->sname;
                            result_173->sname=(char*)come_increment_ref_count(((char*)(right_value397=string_clone(self->sname))));
                            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sDeleteNode_clone"
                        __result277__ = __result_obj__ = result_173;
                        come_call_finalizer2(sDeleteNode_finalize,result_173, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result277__;
                        come_call_finalizer2(sDeleteNode_finalize,result_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional258;
_Bool _if_conditional259;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sForceDeleteNode_finalize"
                            # 0 "sForceDeleteNode_finalize"
                            if(_if_conditional258=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional258) {
                                # 0 "sForceDeleteNode_finalize"
                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 2 "sForceDeleteNode_finalize"
                            # 1 "sForceDeleteNode_finalize"
                            if(_if_conditional259=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional259) {
                                # 1 "sForceDeleteNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional260;
struct sForceDeleteNode* __result279__;
void* right_value402;
struct sForceDeleteNode* result_175;
_Bool _if_conditional261;
void* right_value403;
struct sNode* __dec_obj156;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value404;
char* __dec_obj157;
struct sForceDeleteNode* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
right_value402 = (void*)0;
memset(&result_175, 0, sizeof(struct sForceDeleteNode*));
right_value403 = (void*)0;
right_value404 = (void*)0;
                            # 3 "sForceDeleteNode_clone"
                            # 2 "sForceDeleteNode_clone"
                            if(_if_conditional260=self==(void*)0,                            _if_conditional260) {
                                # 2 "sForceDeleteNode_clone"
                                __result279__ = __result_obj__ = (void*)0;
                                return __result279__;
                            }
                            # 3 "sForceDeleteNode_clone"
                            result_175=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value402=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "sForceDeleteNode"))));
                            come_call_finalizer2(sForceDeleteNode_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "sForceDeleteNode_clone"
                            # 4 "sForceDeleteNode_clone"
                            if(_if_conditional261=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional261) {
                                # 4 "sForceDeleteNode_clone"
                                __dec_obj156=result_175->node;
                                result_175->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=sNode_clone(self->node))));
                                if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 6 "sForceDeleteNode_clone"
                            # 5 "sForceDeleteNode_clone"
                            if(_if_conditional262=self!=((void*)0),                            _if_conditional262) {
                                # 5 "sForceDeleteNode_clone"
                                result_175->sline=self->sline;
                            }
                            # 7 "sForceDeleteNode_clone"
                            # 6 "sForceDeleteNode_clone"
                            if(_if_conditional263=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional263) {
                                # 6 "sForceDeleteNode_clone"
                                __dec_obj157=result_175->sname;
                                result_175->sname=(char*)come_increment_ref_count(((char*)(right_value404=string_clone(self->sname))));
                                __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sForceDeleteNode_clone"
                            __result280__ = __result_obj__ = result_175;
                            come_call_finalizer2(sForceDeleteNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result280__;
                            come_call_finalizer2(sForceDeleteNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional265;
_Bool _if_conditional266;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sBorrowNode_finalize"
                                # 0 "sBorrowNode_finalize"
                                if(_if_conditional265=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional265) {
                                    # 0 "sBorrowNode_finalize"
                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 2 "sBorrowNode_finalize"
                                # 1 "sBorrowNode_finalize"
                                if(_if_conditional266=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional266) {
                                    # 1 "sBorrowNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional267;
struct sBorrowNode* __result282__;
void* right_value409;
struct sBorrowNode* result_177;
_Bool _if_conditional268;
void* right_value410;
struct sNode* __dec_obj158;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value411;
char* __dec_obj159;
struct sBorrowNode* __result283__;
memset(&__result_obj__, 0, sizeof(void*));
right_value409 = (void*)0;
memset(&result_177, 0, sizeof(struct sBorrowNode*));
right_value410 = (void*)0;
right_value411 = (void*)0;
                                # 3 "sBorrowNode_clone"
                                # 2 "sBorrowNode_clone"
                                if(_if_conditional267=self==(void*)0,                                _if_conditional267) {
                                    # 2 "sBorrowNode_clone"
                                    __result282__ = __result_obj__ = (void*)0;
                                    return __result282__;
                                }
                                # 3 "sBorrowNode_clone"
                                result_177=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value409=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "sBorrowNode"))));
                                come_call_finalizer2(sBorrowNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sBorrowNode_clone"
                                # 4 "sBorrowNode_clone"
                                if(_if_conditional268=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional268) {
                                    # 4 "sBorrowNode_clone"
                                    __dec_obj158=result_177->node;
                                    result_177->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=sNode_clone(self->node))));
                                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 6 "sBorrowNode_clone"
                                # 5 "sBorrowNode_clone"
                                if(_if_conditional269=self!=((void*)0),                                _if_conditional269) {
                                    # 5 "sBorrowNode_clone"
                                    result_177->sline=self->sline;
                                }
                                # 7 "sBorrowNode_clone"
                                # 6 "sBorrowNode_clone"
                                if(_if_conditional270=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional270) {
                                    # 6 "sBorrowNode_clone"
                                    __dec_obj159=result_177->sname;
                                    result_177->sname=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(self->sname))));
                                    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sBorrowNode_clone"
                                __result283__ = __result_obj__ = result_177;
                                come_call_finalizer2(sBorrowNode_finalize,result_177, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result283__;
                                come_call_finalizer2(sBorrowNode_finalize,result_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional272;
_Bool _if_conditional273;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sDelegateNode_finalize"
                                    # 0 "sDelegateNode_finalize"
                                    if(_if_conditional272=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional272) {
                                        # 0 "sDelegateNode_finalize"
                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 2 "sDelegateNode_finalize"
                                    # 1 "sDelegateNode_finalize"
                                    if(_if_conditional273=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional273) {
                                        # 1 "sDelegateNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional274;
struct sDelegateNode* __result285__;
void* right_value416;
struct sDelegateNode* result_179;
_Bool _if_conditional275;
void* right_value417;
struct sNode* __dec_obj160;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value418;
char* __dec_obj161;
struct sDelegateNode* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
right_value416 = (void*)0;
memset(&result_179, 0, sizeof(struct sDelegateNode*));
right_value417 = (void*)0;
right_value418 = (void*)0;
                                    # 3 "sDelegateNode_clone"
                                    # 2 "sDelegateNode_clone"
                                    if(_if_conditional274=self==(void*)0,                                    _if_conditional274) {
                                        # 2 "sDelegateNode_clone"
                                        __result285__ = __result_obj__ = (void*)0;
                                        return __result285__;
                                    }
                                    # 3 "sDelegateNode_clone"
                                    result_179=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value416=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "sDelegateNode"))));
                                    come_call_finalizer2(sDelegateNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sDelegateNode_clone"
                                    # 4 "sDelegateNode_clone"
                                    if(_if_conditional275=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional275) {
                                        # 4 "sDelegateNode_clone"
                                        __dec_obj160=result_179->node;
                                        result_179->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=sNode_clone(self->node))));
                                        if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 6 "sDelegateNode_clone"
                                    # 5 "sDelegateNode_clone"
                                    if(_if_conditional276=self!=((void*)0),                                    _if_conditional276) {
                                        # 5 "sDelegateNode_clone"
                                        result_179->sline=self->sline;
                                    }
                                    # 7 "sDelegateNode_clone"
                                    # 6 "sDelegateNode_clone"
                                    if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional277) {
                                        # 6 "sDelegateNode_clone"
                                        __dec_obj161=result_179->sname;
                                        result_179->sname=(char*)come_increment_ref_count(((char*)(right_value418=string_clone(self->sname))));
                                        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sDelegateNode_clone"
                                    __result286__ = __result_obj__ = result_179;
                                    come_call_finalizer2(sDelegateNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result286__;
                                    come_call_finalizer2(sDelegateNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sShareNode_finalize(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional279;
_Bool _if_conditional280;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sShareNode_finalize"
                                        # 0 "sShareNode_finalize"
                                        if(_if_conditional279=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional279) {
                                            # 0 "sShareNode_finalize"
                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 2 "sShareNode_finalize"
                                        # 1 "sShareNode_finalize"
                                        if(_if_conditional280=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional280) {
                                            # 1 "sShareNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional281;
struct sShareNode* __result288__;
void* right_value423;
struct sShareNode* result_181;
_Bool _if_conditional282;
void* right_value424;
struct sNode* __dec_obj162;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value425;
char* __dec_obj163;
struct sShareNode* __result289__;
memset(&__result_obj__, 0, sizeof(void*));
right_value423 = (void*)0;
memset(&result_181, 0, sizeof(struct sShareNode*));
right_value424 = (void*)0;
right_value425 = (void*)0;
                                        # 3 "sShareNode_clone"
                                        # 2 "sShareNode_clone"
                                        if(_if_conditional281=self==(void*)0,                                        _if_conditional281) {
                                            # 2 "sShareNode_clone"
                                            __result288__ = __result_obj__ = (void*)0;
                                            return __result288__;
                                        }
                                        # 3 "sShareNode_clone"
                                        result_181=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value423=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "sShareNode"))));
                                        come_call_finalizer2(sShareNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sShareNode_clone"
                                        # 4 "sShareNode_clone"
                                        if(_if_conditional282=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional282) {
                                            # 4 "sShareNode_clone"
                                            __dec_obj162=result_181->node;
                                            result_181->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value424=sNode_clone(self->node))));
                                            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 6 "sShareNode_clone"
                                        # 5 "sShareNode_clone"
                                        if(_if_conditional283=self!=((void*)0),                                        _if_conditional283) {
                                            # 5 "sShareNode_clone"
                                            result_181->sline=self->sline;
                                        }
                                        # 7 "sShareNode_clone"
                                        # 6 "sShareNode_clone"
                                        if(_if_conditional284=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional284) {
                                            # 6 "sShareNode_clone"
                                            __dec_obj163=result_181->sname;
                                            result_181->sname=(char*)come_increment_ref_count(((char*)(right_value425=string_clone(self->sname))));
                                            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sShareNode_clone"
                                        __result289__ = __result_obj__ = result_181;
                                        come_call_finalizer2(sShareNode_finalize,result_181, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result289__;
                                        come_call_finalizer2(sShareNode_finalize,result_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCloneNode_finalize(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional286;
_Bool _if_conditional287;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sCloneNode_finalize"
                                            # 0 "sCloneNode_finalize"
                                            if(_if_conditional286=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional286) {
                                                # 0 "sCloneNode_finalize"
                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 2 "sCloneNode_finalize"
                                            # 1 "sCloneNode_finalize"
                                            if(_if_conditional287=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional287) {
                                                # 1 "sCloneNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional288;
struct sCloneNode* __result291__;
void* right_value430;
struct sCloneNode* result_183;
_Bool _if_conditional289;
void* right_value431;
struct sNode* __dec_obj164;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value432;
char* __dec_obj165;
struct sCloneNode* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
right_value430 = (void*)0;
memset(&result_183, 0, sizeof(struct sCloneNode*));
right_value431 = (void*)0;
right_value432 = (void*)0;
                                            # 3 "sCloneNode_clone"
                                            # 2 "sCloneNode_clone"
                                            if(_if_conditional288=self==(void*)0,                                            _if_conditional288) {
                                                # 2 "sCloneNode_clone"
                                                __result291__ = __result_obj__ = (void*)0;
                                                return __result291__;
                                            }
                                            # 3 "sCloneNode_clone"
                                            result_183=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value430=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "sCloneNode"))));
                                            come_call_finalizer2(sCloneNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sCloneNode_clone"
                                            # 4 "sCloneNode_clone"
                                            if(_if_conditional289=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional289) {
                                                # 4 "sCloneNode_clone"
                                                __dec_obj164=result_183->node;
                                                result_183->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=sNode_clone(self->node))));
                                                if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 6 "sCloneNode_clone"
                                            # 5 "sCloneNode_clone"
                                            if(_if_conditional290=self!=((void*)0),                                            _if_conditional290) {
                                                # 5 "sCloneNode_clone"
                                                result_183->sline=self->sline;
                                            }
                                            # 7 "sCloneNode_clone"
                                            # 6 "sCloneNode_clone"
                                            if(_if_conditional291=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional291) {
                                                # 6 "sCloneNode_clone"
                                                __dec_obj165=result_183->sname;
                                                result_183->sname=(char*)come_increment_ref_count(((char*)(right_value432=string_clone(self->sname))));
                                                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sCloneNode_clone"
                                            __result292__ = __result_obj__ = result_183;
                                            come_call_finalizer2(sCloneNode_finalize,result_183, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result292__;
                                            come_call_finalizer2(sCloneNode_finalize,result_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDupeNode_finalize(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional293;
_Bool _if_conditional294;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sDupeNode_finalize"
                                                # 0 "sDupeNode_finalize"
                                                if(_if_conditional293=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional293) {
                                                    # 0 "sDupeNode_finalize"
                                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                # 2 "sDupeNode_finalize"
                                                # 1 "sDupeNode_finalize"
                                                if(_if_conditional294=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional294) {
                                                    # 1 "sDupeNode_finalize"
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional295;
struct sDupeNode* __result294__;
void* right_value437;
struct sDupeNode* result_185;
_Bool _if_conditional296;
void* right_value438;
struct sNode* __dec_obj166;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value439;
char* __dec_obj167;
struct sDupeNode* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
right_value437 = (void*)0;
memset(&result_185, 0, sizeof(struct sDupeNode*));
right_value438 = (void*)0;
right_value439 = (void*)0;
                                                # 3 "sDupeNode_clone"
                                                # 2 "sDupeNode_clone"
                                                if(_if_conditional295=self==(void*)0,                                                _if_conditional295) {
                                                    # 2 "sDupeNode_clone"
                                                    __result294__ = __result_obj__ = (void*)0;
                                                    return __result294__;
                                                }
                                                # 3 "sDupeNode_clone"
                                                result_185=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value437=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "sDupeNode"))));
                                                come_call_finalizer2(sDupeNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sDupeNode_clone"
                                                # 4 "sDupeNode_clone"
                                                if(_if_conditional296=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional296) {
                                                    # 4 "sDupeNode_clone"
                                                    __dec_obj166=result_185->node;
                                                    result_185->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=sNode_clone(self->node))));
                                                    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                # 6 "sDupeNode_clone"
                                                # 5 "sDupeNode_clone"
                                                if(_if_conditional297=self!=((void*)0),                                                _if_conditional297) {
                                                    # 5 "sDupeNode_clone"
                                                    result_185->sline=self->sline;
                                                }
                                                # 7 "sDupeNode_clone"
                                                # 6 "sDupeNode_clone"
                                                if(_if_conditional298=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional298) {
                                                    # 6 "sDupeNode_clone"
                                                    __dec_obj167=result_185->sname;
                                                    result_185->sname=(char*)come_increment_ref_count(((char*)(right_value439=string_clone(self->sname))));
                                                    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 7 "sDupeNode_clone"
                                                __result295__ = __result_obj__ = result_185;
                                                come_call_finalizer2(sDupeNode_finalize,result_185, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result295__;
                                                come_call_finalizer2(sDupeNode_finalize,result_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional300;
_Bool _if_conditional301;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "sDummyHeapNode_finalize"
                                                    # 0 "sDummyHeapNode_finalize"
                                                    if(_if_conditional300=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional300) {
                                                        # 0 "sDummyHeapNode_finalize"
                                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    # 2 "sDummyHeapNode_finalize"
                                                    # 1 "sDummyHeapNode_finalize"
                                                    if(_if_conditional301=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional301) {
                                                        # 1 "sDummyHeapNode_finalize"
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional302;
struct sDummyHeapNode* __result297__;
void* right_value444;
struct sDummyHeapNode* result_187;
_Bool _if_conditional303;
void* right_value445;
struct sNode* __dec_obj168;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value446;
char* __dec_obj169;
struct sDummyHeapNode* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
right_value444 = (void*)0;
memset(&result_187, 0, sizeof(struct sDummyHeapNode*));
right_value445 = (void*)0;
right_value446 = (void*)0;
                                                    # 3 "sDummyHeapNode_clone"
                                                    # 2 "sDummyHeapNode_clone"
                                                    if(_if_conditional302=self==(void*)0,                                                    _if_conditional302) {
                                                        # 2 "sDummyHeapNode_clone"
                                                        __result297__ = __result_obj__ = (void*)0;
                                                        return __result297__;
                                                    }
                                                    # 3 "sDummyHeapNode_clone"
                                                    result_187=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value444=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "sDummyHeapNode"))));
                                                    come_call_finalizer2(sDummyHeapNode_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 5 "sDummyHeapNode_clone"
                                                    # 4 "sDummyHeapNode_clone"
                                                    if(_if_conditional303=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional303) {
                                                        # 4 "sDummyHeapNode_clone"
                                                        __dec_obj168=result_187->node;
                                                        result_187->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=sNode_clone(self->node))));
                                                        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    # 6 "sDummyHeapNode_clone"
                                                    # 5 "sDummyHeapNode_clone"
                                                    if(_if_conditional304=self!=((void*)0),                                                    _if_conditional304) {
                                                        # 5 "sDummyHeapNode_clone"
                                                        result_187->sline=self->sline;
                                                    }
                                                    # 7 "sDummyHeapNode_clone"
                                                    # 6 "sDummyHeapNode_clone"
                                                    if(_if_conditional305=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional305) {
                                                        # 6 "sDummyHeapNode_clone"
                                                        __dec_obj169=result_187->sname;
                                                        result_187->sname=(char*)come_increment_ref_count(((char*)(right_value446=string_clone(self->sname))));
                                                        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    # 7 "sDummyHeapNode_clone"
                                                    __result298__ = __result_obj__ = result_187;
                                                    come_call_finalizer2(sDummyHeapNode_finalize,result_187, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result298__;
                                                    come_call_finalizer2(sDummyHeapNode_finalize,result_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional307;
_Bool _if_conditional308;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sGCIncNode_finalize"
                                                        # 0 "sGCIncNode_finalize"
                                                        if(_if_conditional307=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional307) {
                                                            # 0 "sGCIncNode_finalize"
                                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        # 2 "sGCIncNode_finalize"
                                                        # 1 "sGCIncNode_finalize"
                                                        if(_if_conditional308=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional308) {
                                                            # 1 "sGCIncNode_finalize"
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional309;
struct sGCIncNode* __result300__;
void* right_value451;
struct sGCIncNode* result_189;
_Bool _if_conditional310;
void* right_value452;
struct sNode* __dec_obj170;
_Bool _if_conditional311;
_Bool _if_conditional312;
void* right_value453;
char* __dec_obj171;
struct sGCIncNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value451 = (void*)0;
memset(&result_189, 0, sizeof(struct sGCIncNode*));
right_value452 = (void*)0;
right_value453 = (void*)0;
                                                        # 3 "sGCIncNode_clone"
                                                        # 2 "sGCIncNode_clone"
                                                        if(_if_conditional309=self==(void*)0,                                                        _if_conditional309) {
                                                            # 2 "sGCIncNode_clone"
                                                            __result300__ = __result_obj__ = (void*)0;
                                                            return __result300__;
                                                        }
                                                        # 3 "sGCIncNode_clone"
                                                        result_189=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value451=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "sGCIncNode"))));
                                                        come_call_finalizer2(sGCIncNode_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sGCIncNode_clone"
                                                        # 4 "sGCIncNode_clone"
                                                        if(_if_conditional310=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional310) {
                                                            # 4 "sGCIncNode_clone"
                                                            __dec_obj170=result_189->node;
                                                            result_189->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value452=sNode_clone(self->node))));
                                                            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value452) { right_value452 = come_decrement_ref_count2(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        # 6 "sGCIncNode_clone"
                                                        # 5 "sGCIncNode_clone"
                                                        if(_if_conditional311=self!=((void*)0),                                                        _if_conditional311) {
                                                            # 5 "sGCIncNode_clone"
                                                            result_189->sline=self->sline;
                                                        }
                                                        # 7 "sGCIncNode_clone"
                                                        # 6 "sGCIncNode_clone"
                                                        if(_if_conditional312=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional312) {
                                                            # 6 "sGCIncNode_clone"
                                                            __dec_obj171=result_189->sname;
                                                            result_189->sname=(char*)come_increment_ref_count(((char*)(right_value453=string_clone(self->sname))));
                                                            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value453 = come_decrement_ref_count2(right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 7 "sGCIncNode_clone"
                                                        __result301__ = __result_obj__ = result_189;
                                                        come_call_finalizer2(sGCIncNode_finalize,result_189, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result301__;
                                                        come_call_finalizer2(sGCIncNode_finalize,result_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional314;
_Bool _if_conditional315;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "sGCDecNode_finalize"
                                                            # 0 "sGCDecNode_finalize"
                                                            if(_if_conditional314=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional314) {
                                                                # 0 "sGCDecNode_finalize"
                                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            # 2 "sGCDecNode_finalize"
                                                            # 1 "sGCDecNode_finalize"
                                                            if(_if_conditional315=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional315) {
                                                                # 1 "sGCDecNode_finalize"
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional316;
struct sGCDecNode* __result303__;
void* right_value458;
struct sGCDecNode* result_191;
_Bool _if_conditional317;
void* right_value459;
struct sNode* __dec_obj172;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value460;
char* __dec_obj173;
struct sGCDecNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value458 = (void*)0;
memset(&result_191, 0, sizeof(struct sGCDecNode*));
right_value459 = (void*)0;
right_value460 = (void*)0;
                                                            # 3 "sGCDecNode_clone"
                                                            # 2 "sGCDecNode_clone"
                                                            if(_if_conditional316=self==(void*)0,                                                            _if_conditional316) {
                                                                # 2 "sGCDecNode_clone"
                                                                __result303__ = __result_obj__ = (void*)0;
                                                                return __result303__;
                                                            }
                                                            # 3 "sGCDecNode_clone"
                                                            result_191=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value458=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "sGCDecNode"))));
                                                            come_call_finalizer2(sGCDecNode_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 5 "sGCDecNode_clone"
                                                            # 4 "sGCDecNode_clone"
                                                            if(_if_conditional317=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional317) {
                                                                # 4 "sGCDecNode_clone"
                                                                __dec_obj172=result_191->node;
                                                                result_191->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value459=sNode_clone(self->node))));
                                                                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value459) { right_value459 = come_decrement_ref_count2(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            # 6 "sGCDecNode_clone"
                                                            # 5 "sGCDecNode_clone"
                                                            if(_if_conditional318=self!=((void*)0),                                                            _if_conditional318) {
                                                                # 5 "sGCDecNode_clone"
                                                                result_191->sline=self->sline;
                                                            }
                                                            # 7 "sGCDecNode_clone"
                                                            # 6 "sGCDecNode_clone"
                                                            if(_if_conditional319=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional319) {
                                                                # 6 "sGCDecNode_clone"
                                                                __dec_obj173=result_191->sname;
                                                                result_191->sname=(char*)come_increment_ref_count(((char*)(right_value460=string_clone(self->sname))));
                                                                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value460 = come_decrement_ref_count2(right_value460, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            # 7 "sGCDecNode_clone"
                                                            __result304__ = __result_obj__ = result_191;
                                                            come_call_finalizer2(sGCDecNode_finalize,result_191, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result304__;
                                                            come_call_finalizer2(sGCDecNode_finalize,result_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sIsHeap_finalize(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional322;
_Bool _if_conditional323;
memset(&__result_obj__, 0, sizeof(void*));
                                                                # 1 "sIsHeap_finalize"
                                                                # 0 "sIsHeap_finalize"
                                                                if(_if_conditional322=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional322) {
                                                                    # 0 "sIsHeap_finalize"
                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                # 2 "sIsHeap_finalize"
                                                                # 1 "sIsHeap_finalize"
                                                                if(_if_conditional323=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional323) {
                                                                    # 1 "sIsHeap_finalize"
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional324;
struct sIsHeap* __result306__;
void* right_value466;
struct sIsHeap* result_196;
_Bool _if_conditional325;
void* right_value467;
struct sType* __dec_obj174;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value468;
char* __dec_obj175;
struct sIsHeap* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
right_value466 = (void*)0;
memset(&result_196, 0, sizeof(struct sIsHeap*));
right_value467 = (void*)0;
right_value468 = (void*)0;
                                                                # 3 "sIsHeap_clone"
                                                                # 2 "sIsHeap_clone"
                                                                if(_if_conditional324=self==(void*)0,                                                                _if_conditional324) {
                                                                    # 2 "sIsHeap_clone"
                                                                    __result306__ = __result_obj__ = (void*)0;
                                                                    return __result306__;
                                                                }
                                                                # 3 "sIsHeap_clone"
                                                                result_196=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value466=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "sIsHeap"))));
                                                                come_call_finalizer2(sIsHeap_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 5 "sIsHeap_clone"
                                                                # 4 "sIsHeap_clone"
                                                                if(_if_conditional325=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional325) {
                                                                    # 4 "sIsHeap_clone"
                                                                    __dec_obj174=result_196->type;
                                                                    result_196->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value467=sType_clone(self->type))));
                                                                    come_call_finalizer2(sType_finalize,__dec_obj174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(sType_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                }
                                                                # 6 "sIsHeap_clone"
                                                                # 5 "sIsHeap_clone"
                                                                if(_if_conditional326=self!=((void*)0),                                                                _if_conditional326) {
                                                                    # 5 "sIsHeap_clone"
                                                                    result_196->sline=self->sline;
                                                                }
                                                                # 7 "sIsHeap_clone"
                                                                # 6 "sIsHeap_clone"
                                                                if(_if_conditional327=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional327) {
                                                                    # 6 "sIsHeap_clone"
                                                                    __dec_obj175=result_196->sname;
                                                                    result_196->sname=(char*)come_increment_ref_count(((char*)(right_value468=string_clone(self->sname))));
                                                                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value468 = come_decrement_ref_count2(right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                # 7 "sIsHeap_clone"
                                                                __result307__ = __result_obj__ = result_196;
                                                                come_call_finalizer2(sIsHeap_finalize,result_196, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result307__;
                                                                come_call_finalizer2(sIsHeap_finalize,result_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sIsPointer_finalize(struct sIsPointer* self){
void* __result_obj__;
_Bool _if_conditional330;
_Bool _if_conditional331;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1 "sIsPointer_finalize"
                                                                    # 0 "sIsPointer_finalize"
                                                                    if(_if_conditional330=self!=((void*)0)&&self->type!=((void*)0),                                                                    _if_conditional330) {
                                                                        # 0 "sIsPointer_finalize"
                                                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    # 2 "sIsPointer_finalize"
                                                                    # 1 "sIsPointer_finalize"
                                                                    if(_if_conditional331=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional331) {
                                                                        # 1 "sIsPointer_finalize"
                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__;
_Bool _if_conditional332;
struct sIsPointer* __result309__;
void* right_value474;
struct sIsPointer* result_201;
_Bool _if_conditional333;
void* right_value475;
struct sType* __dec_obj176;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value476;
char* __dec_obj177;
struct sIsPointer* __result310__;
memset(&__result_obj__, 0, sizeof(void*));
right_value474 = (void*)0;
memset(&result_201, 0, sizeof(struct sIsPointer*));
right_value475 = (void*)0;
right_value476 = (void*)0;
                                                                    # 3 "sIsPointer_clone"
                                                                    # 2 "sIsPointer_clone"
                                                                    if(_if_conditional332=self==(void*)0,                                                                    _if_conditional332) {
                                                                        # 2 "sIsPointer_clone"
                                                                        __result309__ = __result_obj__ = (void*)0;
                                                                        return __result309__;
                                                                    }
                                                                    # 3 "sIsPointer_clone"
                                                                    result_201=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(right_value474=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "sIsPointer"))));
                                                                    come_call_finalizer2(sIsPointer_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    # 5 "sIsPointer_clone"
                                                                    # 4 "sIsPointer_clone"
                                                                    if(_if_conditional333=self!=((void*)0)&&self->type!=((void*)0),                                                                    _if_conditional333) {
                                                                        # 4 "sIsPointer_clone"
                                                                        __dec_obj176=result_201->type;
                                                                        result_201->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value475=sType_clone(self->type))));
                                                                        come_call_finalizer2(sType_finalize,__dec_obj176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        come_call_finalizer2(sType_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    # 6 "sIsPointer_clone"
                                                                    # 5 "sIsPointer_clone"
                                                                    if(_if_conditional334=self!=((void*)0),                                                                    _if_conditional334) {
                                                                        # 5 "sIsPointer_clone"
                                                                        result_201->sline=self->sline;
                                                                    }
                                                                    # 7 "sIsPointer_clone"
                                                                    # 6 "sIsPointer_clone"
                                                                    if(_if_conditional335=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional335) {
                                                                        # 6 "sIsPointer_clone"
                                                                        __dec_obj177=result_201->sname;
                                                                        result_201->sname=(char*)come_increment_ref_count(((char*)(right_value476=string_clone(self->sname))));
                                                                        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value476 = come_decrement_ref_count2(right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    # 7 "sIsPointer_clone"
                                                                    __result310__ = __result_obj__ = result_201;
                                                                    come_call_finalizer2(sIsPointer_finalize,result_201, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result310__;
                                                                    come_call_finalizer2(sIsPointer_finalize,result_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional373;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "sSizeOfNode_finalize"
                                                                                # 0 "sSizeOfNode_finalize"
                                                                                if(_if_conditional373=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional373) {
                                                                                    # 0 "sSizeOfNode_finalize"
                                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2 "sSizeOfNode_finalize"
                                                                                # 1 "sSizeOfNode_finalize"
                                                                                if(_if_conditional374=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional374) {
                                                                                    # 1 "sSizeOfNode_finalize"
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional375;
struct sSizeOfNode* __result331__;
void* right_value513;
struct sSizeOfNode* result_216;
_Bool _if_conditional376;
void* right_value514;
struct sType* __dec_obj184;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value515;
char* __dec_obj185;
struct sSizeOfNode* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value513 = (void*)0;
memset(&result_216, 0, sizeof(struct sSizeOfNode*));
right_value514 = (void*)0;
right_value515 = (void*)0;
                                                                                # 3 "sSizeOfNode_clone"
                                                                                # 2 "sSizeOfNode_clone"
                                                                                if(_if_conditional375=self==(void*)0,                                                                                _if_conditional375) {
                                                                                    # 2 "sSizeOfNode_clone"
                                                                                    __result331__ = __result_obj__ = (void*)0;
                                                                                    return __result331__;
                                                                                }
                                                                                # 3 "sSizeOfNode_clone"
                                                                                result_216=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value513=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "sSizeOfNode"))));
                                                                                come_call_finalizer2(sSizeOfNode_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                # 5 "sSizeOfNode_clone"
                                                                                # 4 "sSizeOfNode_clone"
                                                                                if(_if_conditional376=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional376) {
                                                                                    # 4 "sSizeOfNode_clone"
                                                                                    __dec_obj184=result_216->type;
                                                                                    result_216->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value514=sType_clone(self->type))));
                                                                                    come_call_finalizer2(sType_finalize,__dec_obj184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer2(sType_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 6 "sSizeOfNode_clone"
                                                                                # 5 "sSizeOfNode_clone"
                                                                                if(_if_conditional377=self!=((void*)0),                                                                                _if_conditional377) {
                                                                                    # 5 "sSizeOfNode_clone"
                                                                                    result_216->sline=self->sline;
                                                                                }
                                                                                # 7 "sSizeOfNode_clone"
                                                                                # 6 "sSizeOfNode_clone"
                                                                                if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional378) {
                                                                                    # 6 "sSizeOfNode_clone"
                                                                                    __dec_obj185=result_216->sname;
                                                                                    result_216->sname=(char*)come_increment_ref_count(((char*)(right_value515=string_clone(self->sname))));
                                                                                    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value515 = come_decrement_ref_count2(right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 7 "sSizeOfNode_clone"
                                                                                __result332__ = __result_obj__ = result_216;
                                                                                come_call_finalizer2(sSizeOfNode_finalize,result_216, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result332__;
                                                                                come_call_finalizer2(sSizeOfNode_finalize,result_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional379;
_Bool _if_conditional380;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "sSizeOfExpNode_finalize"
                                                                                # 0 "sSizeOfExpNode_finalize"
                                                                                if(_if_conditional379=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional379) {
                                                                                    # 0 "sSizeOfExpNode_finalize"
                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                # 2 "sSizeOfExpNode_finalize"
                                                                                # 1 "sSizeOfExpNode_finalize"
                                                                                if(_if_conditional380=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional380) {
                                                                                    # 1 "sSizeOfExpNode_finalize"
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional381;
struct sSizeOfExpNode* __result334__;
void* right_value520;
struct sSizeOfExpNode* result_218;
_Bool _if_conditional382;
void* right_value521;
struct sNode* __dec_obj186;
_Bool _if_conditional383;
_Bool _if_conditional384;
void* right_value522;
char* __dec_obj187;
struct sSizeOfExpNode* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
right_value520 = (void*)0;
memset(&result_218, 0, sizeof(struct sSizeOfExpNode*));
right_value521 = (void*)0;
right_value522 = (void*)0;
                                                                                # 3 "sSizeOfExpNode_clone"
                                                                                # 2 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional381=self==(void*)0,                                                                                _if_conditional381) {
                                                                                    # 2 "sSizeOfExpNode_clone"
                                                                                    __result334__ = __result_obj__ = (void*)0;
                                                                                    return __result334__;
                                                                                }
                                                                                # 3 "sSizeOfExpNode_clone"
                                                                                result_218=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value520=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "sSizeOfExpNode"))));
                                                                                come_call_finalizer2(sSizeOfExpNode_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                # 5 "sSizeOfExpNode_clone"
                                                                                # 4 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional382=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional382) {
                                                                                    # 4 "sSizeOfExpNode_clone"
                                                                                    __dec_obj186=result_218->exp;
                                                                                    result_218->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value521=sNode_clone(self->exp))));
                                                                                    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value521) { right_value521 = come_decrement_ref_count2(right_value521, ((struct sNode*)right_value521)->finalize, ((struct sNode*)right_value521)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                }
                                                                                # 6 "sSizeOfExpNode_clone"
                                                                                # 5 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional383=self!=((void*)0),                                                                                _if_conditional383) {
                                                                                    # 5 "sSizeOfExpNode_clone"
                                                                                    result_218->sline=self->sline;
                                                                                }
                                                                                # 7 "sSizeOfExpNode_clone"
                                                                                # 6 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional384=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional384) {
                                                                                    # 6 "sSizeOfExpNode_clone"
                                                                                    __dec_obj187=result_218->sname;
                                                                                    result_218->sname=(char*)come_increment_ref_count(((char*)(right_value522=string_clone(self->sname))));
                                                                                    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value522 = come_decrement_ref_count2(right_value522, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 7 "sSizeOfExpNode_clone"
                                                                                __result335__ = __result_obj__ = result_218;
                                                                                come_call_finalizer2(sSizeOfExpNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result335__;
                                                                                come_call_finalizer2(sSizeOfExpNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional390;
_Bool _if_conditional391;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sTypeOfNode_finalize"
                                                                                    # 0 "sTypeOfNode_finalize"
                                                                                    if(_if_conditional390=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional390) {
                                                                                        # 0 "sTypeOfNode_finalize"
                                                                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2 "sTypeOfNode_finalize"
                                                                                    # 1 "sTypeOfNode_finalize"
                                                                                    if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional391) {
                                                                                        # 1 "sTypeOfNode_finalize"
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional392;
struct sTypeOfNode* __result337__;
void* right_value528;
struct sTypeOfNode* result_226;
_Bool _if_conditional393;
void* right_value529;
struct sType* __dec_obj188;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value530;
char* __dec_obj189;
struct sTypeOfNode* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value528 = (void*)0;
memset(&result_226, 0, sizeof(struct sTypeOfNode*));
right_value529 = (void*)0;
right_value530 = (void*)0;
                                                                                    # 3 "sTypeOfNode_clone"
                                                                                    # 2 "sTypeOfNode_clone"
                                                                                    if(_if_conditional392=self==(void*)0,                                                                                    _if_conditional392) {
                                                                                        # 2 "sTypeOfNode_clone"
                                                                                        __result337__ = __result_obj__ = (void*)0;
                                                                                        return __result337__;
                                                                                    }
                                                                                    # 3 "sTypeOfNode_clone"
                                                                                    result_226=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value528=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "sTypeOfNode"))));
                                                                                    come_call_finalizer2(sTypeOfNode_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    # 5 "sTypeOfNode_clone"
                                                                                    # 4 "sTypeOfNode_clone"
                                                                                    if(_if_conditional393=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional393) {
                                                                                        # 4 "sTypeOfNode_clone"
                                                                                        __dec_obj188=result_226->type;
                                                                                        result_226->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value529=sType_clone(self->type))));
                                                                                        come_call_finalizer2(sType_finalize,__dec_obj188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sType_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 6 "sTypeOfNode_clone"
                                                                                    # 5 "sTypeOfNode_clone"
                                                                                    if(_if_conditional394=self!=((void*)0),                                                                                    _if_conditional394) {
                                                                                        # 5 "sTypeOfNode_clone"
                                                                                        result_226->sline=self->sline;
                                                                                    }
                                                                                    # 7 "sTypeOfNode_clone"
                                                                                    # 6 "sTypeOfNode_clone"
                                                                                    if(_if_conditional395=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional395) {
                                                                                        # 6 "sTypeOfNode_clone"
                                                                                        __dec_obj189=result_226->sname;
                                                                                        result_226->sname=(char*)come_increment_ref_count(((char*)(right_value530=string_clone(self->sname))));
                                                                                        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value530 = come_decrement_ref_count2(right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 7 "sTypeOfNode_clone"
                                                                                    __result338__ = __result_obj__ = result_226;
                                                                                    come_call_finalizer2(sTypeOfNode_finalize,result_226, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result338__;
                                                                                    come_call_finalizer2(sTypeOfNode_finalize,result_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional396;
_Bool _if_conditional397;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sTypeOfExpNode_finalize"
                                                                                    # 0 "sTypeOfExpNode_finalize"
                                                                                    if(_if_conditional396=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional396) {
                                                                                        # 0 "sTypeOfExpNode_finalize"
                                                                                        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                    # 2 "sTypeOfExpNode_finalize"
                                                                                    # 1 "sTypeOfExpNode_finalize"
                                                                                    if(_if_conditional397=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional397) {
                                                                                        # 1 "sTypeOfExpNode_finalize"
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional398;
struct sTypeOfExpNode* __result340__;
void* right_value535;
struct sTypeOfExpNode* result_228;
_Bool _if_conditional399;
void* right_value536;
struct sNode* __dec_obj190;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value537;
char* __dec_obj191;
struct sTypeOfExpNode* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
right_value535 = (void*)0;
memset(&result_228, 0, sizeof(struct sTypeOfExpNode*));
right_value536 = (void*)0;
right_value537 = (void*)0;
                                                                                    # 3 "sTypeOfExpNode_clone"
                                                                                    # 2 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional398=self==(void*)0,                                                                                    _if_conditional398) {
                                                                                        # 2 "sTypeOfExpNode_clone"
                                                                                        __result340__ = __result_obj__ = (void*)0;
                                                                                        return __result340__;
                                                                                    }
                                                                                    # 3 "sTypeOfExpNode_clone"
                                                                                    result_228=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value535=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "sTypeOfExpNode"))));
                                                                                    come_call_finalizer2(sTypeOfExpNode_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    # 5 "sTypeOfExpNode_clone"
                                                                                    # 4 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional399=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional399) {
                                                                                        # 4 "sTypeOfExpNode_clone"
                                                                                        __dec_obj190=result_228->exp;
                                                                                        result_228->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value536=sNode_clone(self->exp))));
                                                                                        if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value536) { right_value536 = come_decrement_ref_count2(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    }
                                                                                    # 6 "sTypeOfExpNode_clone"
                                                                                    # 5 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional400=self!=((void*)0),                                                                                    _if_conditional400) {
                                                                                        # 5 "sTypeOfExpNode_clone"
                                                                                        result_228->sline=self->sline;
                                                                                    }
                                                                                    # 7 "sTypeOfExpNode_clone"
                                                                                    # 6 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional401=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional401) {
                                                                                        # 6 "sTypeOfExpNode_clone"
                                                                                        __dec_obj191=result_228->sname;
                                                                                        result_228->sname=(char*)come_increment_ref_count(((char*)(right_value537=string_clone(self->sname))));
                                                                                        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value537 = come_decrement_ref_count2(right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 7 "sTypeOfExpNode_clone"
                                                                                    __result341__ = __result_obj__ = result_228;
                                                                                    come_call_finalizer2(sTypeOfExpNode_finalize,result_228, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result341__;
                                                                                    come_call_finalizer2(sTypeOfExpNode_finalize,result_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional407;
_Bool _if_conditional408;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        # 1 "sAlignOfNode_finalize"
                                                                                        # 0 "sAlignOfNode_finalize"
                                                                                        if(_if_conditional407=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional407) {
                                                                                            # 0 "sAlignOfNode_finalize"
                                                                                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 2 "sAlignOfNode_finalize"
                                                                                        # 1 "sAlignOfNode_finalize"
                                                                                        if(_if_conditional408=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional408) {
                                                                                            # 1 "sAlignOfNode_finalize"
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional409;
struct sAlignOfNode* __result343__;
void* right_value543;
struct sAlignOfNode* result_236;
_Bool _if_conditional410;
void* right_value544;
struct sType* __dec_obj192;
_Bool _if_conditional411;
_Bool _if_conditional412;
void* right_value545;
char* __dec_obj193;
struct sAlignOfNode* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
right_value543 = (void*)0;
memset(&result_236, 0, sizeof(struct sAlignOfNode*));
right_value544 = (void*)0;
right_value545 = (void*)0;
                                                                                        # 3 "sAlignOfNode_clone"
                                                                                        # 2 "sAlignOfNode_clone"
                                                                                        if(_if_conditional409=self==(void*)0,                                                                                        _if_conditional409) {
                                                                                            # 2 "sAlignOfNode_clone"
                                                                                            __result343__ = __result_obj__ = (void*)0;
                                                                                            return __result343__;
                                                                                        }
                                                                                        # 3 "sAlignOfNode_clone"
                                                                                        result_236=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value543=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "sAlignOfNode"))));
                                                                                        come_call_finalizer2(sAlignOfNode_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        # 5 "sAlignOfNode_clone"
                                                                                        # 4 "sAlignOfNode_clone"
                                                                                        if(_if_conditional410=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional410) {
                                                                                            # 4 "sAlignOfNode_clone"
                                                                                            __dec_obj192=result_236->type;
                                                                                            result_236->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value544=sType_clone(self->type))));
                                                                                            come_call_finalizer2(sType_finalize,__dec_obj192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sType_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 6 "sAlignOfNode_clone"
                                                                                        # 5 "sAlignOfNode_clone"
                                                                                        if(_if_conditional411=self!=((void*)0),                                                                                        _if_conditional411) {
                                                                                            # 5 "sAlignOfNode_clone"
                                                                                            result_236->sline=self->sline;
                                                                                        }
                                                                                        # 7 "sAlignOfNode_clone"
                                                                                        # 6 "sAlignOfNode_clone"
                                                                                        if(_if_conditional412=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional412) {
                                                                                            # 6 "sAlignOfNode_clone"
                                                                                            __dec_obj193=result_236->sname;
                                                                                            result_236->sname=(char*)come_increment_ref_count(((char*)(right_value545=string_clone(self->sname))));
                                                                                            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value545 = come_decrement_ref_count2(right_value545, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 7 "sAlignOfNode_clone"
                                                                                        __result344__ = __result_obj__ = result_236;
                                                                                        come_call_finalizer2(sAlignOfNode_finalize,result_236, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result344__;
                                                                                        come_call_finalizer2(sAlignOfNode_finalize,result_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        # 1 "sAlignOfExpNode_finalize"
                                                                                        # 0 "sAlignOfExpNode_finalize"
                                                                                        if(_if_conditional413=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional413) {
                                                                                            # 0 "sAlignOfExpNode_finalize"
                                                                                            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
                                                                                        # 2 "sAlignOfExpNode_finalize"
                                                                                        # 1 "sAlignOfExpNode_finalize"
                                                                                        if(_if_conditional414=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional414) {
                                                                                            # 1 "sAlignOfExpNode_finalize"
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional415;
struct sAlignOfExpNode* __result346__;
void* right_value550;
struct sAlignOfExpNode* result_238;
_Bool _if_conditional416;
void* right_value551;
struct sNode* __dec_obj194;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value552;
char* __dec_obj195;
struct sAlignOfExpNode* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
right_value550 = (void*)0;
memset(&result_238, 0, sizeof(struct sAlignOfExpNode*));
right_value551 = (void*)0;
right_value552 = (void*)0;
                                                                                        # 3 "sAlignOfExpNode_clone"
                                                                                        # 2 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional415=self==(void*)0,                                                                                        _if_conditional415) {
                                                                                            # 2 "sAlignOfExpNode_clone"
                                                                                            __result346__ = __result_obj__ = (void*)0;
                                                                                            return __result346__;
                                                                                        }
                                                                                        # 3 "sAlignOfExpNode_clone"
                                                                                        result_238=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value550=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "sAlignOfExpNode"))));
                                                                                        come_call_finalizer2(sAlignOfExpNode_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        # 5 "sAlignOfExpNode_clone"
                                                                                        # 4 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional416=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional416) {
                                                                                            # 4 "sAlignOfExpNode_clone"
                                                                                            __dec_obj194=result_238->exp;
                                                                                            result_238->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value551=sNode_clone(self->exp))));
                                                                                            if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                            if(right_value551) { right_value551 = come_decrement_ref_count2(right_value551, ((struct sNode*)right_value551)->finalize, ((struct sNode*)right_value551)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        }
                                                                                        # 6 "sAlignOfExpNode_clone"
                                                                                        # 5 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional417=self!=((void*)0),                                                                                        _if_conditional417) {
                                                                                            # 5 "sAlignOfExpNode_clone"
                                                                                            result_238->sline=self->sline;
                                                                                        }
                                                                                        # 7 "sAlignOfExpNode_clone"
                                                                                        # 6 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional418) {
                                                                                            # 6 "sAlignOfExpNode_clone"
                                                                                            __dec_obj195=result_238->sname;
                                                                                            result_238->sname=(char*)come_increment_ref_count(((char*)(right_value552=string_clone(self->sname))));
                                                                                            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value552 = come_decrement_ref_count2(right_value552, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 7 "sAlignOfExpNode_clone"
                                                                                        __result347__ = __result_obj__ = result_238;
                                                                                        come_call_finalizer2(sAlignOfExpNode_finalize,result_238, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result347__;
                                                                                        come_call_finalizer2(sAlignOfExpNode_finalize,result_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional424;
_Bool _if_conditional425;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            # 1 "sAlignOfNode2_finalize"
                                                                                            # 0 "sAlignOfNode2_finalize"
                                                                                            if(_if_conditional424=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional424) {
                                                                                                # 0 "sAlignOfNode2_finalize"
                                                                                                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            # 2 "sAlignOfNode2_finalize"
                                                                                            # 1 "sAlignOfNode2_finalize"
                                                                                            if(_if_conditional425=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional425) {
                                                                                                # 1 "sAlignOfNode2_finalize"
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional426;
struct sAlignOfNode2* __result349__;
void* right_value558;
struct sAlignOfNode2* result_246;
_Bool _if_conditional427;
void* right_value559;
struct sType* __dec_obj196;
_Bool _if_conditional428;
_Bool _if_conditional429;
void* right_value560;
char* __dec_obj197;
struct sAlignOfNode2* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value558 = (void*)0;
memset(&result_246, 0, sizeof(struct sAlignOfNode2*));
right_value559 = (void*)0;
right_value560 = (void*)0;
                                                                                            # 3 "sAlignOfNode2_clone"
                                                                                            # 2 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional426=self==(void*)0,                                                                                            _if_conditional426) {
                                                                                                # 2 "sAlignOfNode2_clone"
                                                                                                __result349__ = __result_obj__ = (void*)0;
                                                                                                return __result349__;
                                                                                            }
                                                                                            # 3 "sAlignOfNode2_clone"
                                                                                            result_246=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value558=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "sAlignOfNode2"))));
                                                                                            come_call_finalizer2(sAlignOfNode2_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            # 5 "sAlignOfNode2_clone"
                                                                                            # 4 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional427=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional427) {
                                                                                                # 4 "sAlignOfNode2_clone"
                                                                                                __dec_obj196=result_246->type;
                                                                                                result_246->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value559=sType_clone(self->type))));
                                                                                                come_call_finalizer2(sType_finalize,__dec_obj196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sType_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 6 "sAlignOfNode2_clone"
                                                                                            # 5 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional428=self!=((void*)0),                                                                                            _if_conditional428) {
                                                                                                # 5 "sAlignOfNode2_clone"
                                                                                                result_246->sline=self->sline;
                                                                                            }
                                                                                            # 7 "sAlignOfNode2_clone"
                                                                                            # 6 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional429=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional429) {
                                                                                                # 6 "sAlignOfNode2_clone"
                                                                                                __dec_obj197=result_246->sname;
                                                                                                result_246->sname=(char*)come_increment_ref_count(((char*)(right_value560=string_clone(self->sname))));
                                                                                                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value560 = come_decrement_ref_count2(right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 7 "sAlignOfNode2_clone"
                                                                                            __result350__ = __result_obj__ = result_246;
                                                                                            come_call_finalizer2(sAlignOfNode2_finalize,result_246, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result350__;
                                                                                            come_call_finalizer2(sAlignOfNode2_finalize,result_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional430;
_Bool _if_conditional431;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            # 1 "sAlignOfExpNode2_finalize"
                                                                                            # 0 "sAlignOfExpNode2_finalize"
                                                                                            if(_if_conditional430=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional430) {
                                                                                                # 0 "sAlignOfExpNode2_finalize"
                                                                                                if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            # 2 "sAlignOfExpNode2_finalize"
                                                                                            # 1 "sAlignOfExpNode2_finalize"
                                                                                            if(_if_conditional431=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional431) {
                                                                                                # 1 "sAlignOfExpNode2_finalize"
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional432;
struct sAlignOfExpNode2* __result352__;
void* right_value565;
struct sAlignOfExpNode2* result_248;
_Bool _if_conditional433;
void* right_value566;
struct sNode* __dec_obj198;
_Bool _if_conditional434;
_Bool _if_conditional435;
void* right_value567;
char* __dec_obj199;
struct sAlignOfExpNode2* __result353__;
memset(&__result_obj__, 0, sizeof(void*));
right_value565 = (void*)0;
memset(&result_248, 0, sizeof(struct sAlignOfExpNode2*));
right_value566 = (void*)0;
right_value567 = (void*)0;
                                                                                            # 3 "sAlignOfExpNode2_clone"
                                                                                            # 2 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional432=self==(void*)0,                                                                                            _if_conditional432) {
                                                                                                # 2 "sAlignOfExpNode2_clone"
                                                                                                __result352__ = __result_obj__ = (void*)0;
                                                                                                return __result352__;
                                                                                            }
                                                                                            # 3 "sAlignOfExpNode2_clone"
                                                                                            result_248=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value565=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "sAlignOfExpNode2"))));
                                                                                            come_call_finalizer2(sAlignOfExpNode2_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            # 5 "sAlignOfExpNode2_clone"
                                                                                            # 4 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional433=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional433) {
                                                                                                # 4 "sAlignOfExpNode2_clone"
                                                                                                __dec_obj198=result_248->exp;
                                                                                                result_248->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value566=sNode_clone(self->exp))));
                                                                                                if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value566) { right_value566 = come_decrement_ref_count2(right_value566, ((struct sNode*)right_value566)->finalize, ((struct sNode*)right_value566)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            # 6 "sAlignOfExpNode2_clone"
                                                                                            # 5 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional434=self!=((void*)0),                                                                                            _if_conditional434) {
                                                                                                # 5 "sAlignOfExpNode2_clone"
                                                                                                result_248->sline=self->sline;
                                                                                            }
                                                                                            # 7 "sAlignOfExpNode2_clone"
                                                                                            # 6 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional435=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional435) {
                                                                                                # 6 "sAlignOfExpNode2_clone"
                                                                                                __dec_obj199=result_248->sname;
                                                                                                result_248->sname=(char*)come_increment_ref_count(((char*)(right_value567=string_clone(self->sname))));
                                                                                                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value567 = come_decrement_ref_count2(right_value567, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 7 "sAlignOfExpNode2_clone"
                                                                                            __result353__ = __result_obj__ = result_248;
                                                                                            come_call_finalizer2(sAlignOfExpNode2_finalize,result_248, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result353__;
                                                                                            come_call_finalizer2(sAlignOfExpNode2_finalize,result_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional441;
_Bool _if_conditional442;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                # 1 "sAlignAsNode_finalize"
                                                                                                # 0 "sAlignAsNode_finalize"
                                                                                                if(_if_conditional441=self!=((void*)0)&&self->type!=((void*)0),                                                                                                _if_conditional441) {
                                                                                                    # 0 "sAlignAsNode_finalize"
                                                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                # 2 "sAlignAsNode_finalize"
                                                                                                # 1 "sAlignAsNode_finalize"
                                                                                                if(_if_conditional442=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional442) {
                                                                                                    # 1 "sAlignAsNode_finalize"
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional443;
struct sAlignAsNode* __result355__;
void* right_value573;
struct sAlignAsNode* result_256;
_Bool _if_conditional444;
void* right_value574;
struct sType* __dec_obj200;
_Bool _if_conditional445;
_Bool _if_conditional446;
void* right_value575;
char* __dec_obj201;
struct sAlignAsNode* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
right_value573 = (void*)0;
memset(&result_256, 0, sizeof(struct sAlignAsNode*));
right_value574 = (void*)0;
right_value575 = (void*)0;
                                                                                                # 3 "sAlignAsNode_clone"
                                                                                                # 2 "sAlignAsNode_clone"
                                                                                                if(_if_conditional443=self==(void*)0,                                                                                                _if_conditional443) {
                                                                                                    # 2 "sAlignAsNode_clone"
                                                                                                    __result355__ = __result_obj__ = (void*)0;
                                                                                                    return __result355__;
                                                                                                }
                                                                                                # 3 "sAlignAsNode_clone"
                                                                                                result_256=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value573=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "sAlignAsNode"))));
                                                                                                come_call_finalizer2(sAlignAsNode_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                # 5 "sAlignAsNode_clone"
                                                                                                # 4 "sAlignAsNode_clone"
                                                                                                if(_if_conditional444=self!=((void*)0)&&self->type!=((void*)0),                                                                                                _if_conditional444) {
                                                                                                    # 4 "sAlignAsNode_clone"
                                                                                                    __dec_obj200=result_256->type;
                                                                                                    result_256->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value574=sType_clone(self->type))));
                                                                                                    come_call_finalizer2(sType_finalize,__dec_obj200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer2(sType_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 6 "sAlignAsNode_clone"
                                                                                                # 5 "sAlignAsNode_clone"
                                                                                                if(_if_conditional445=self!=((void*)0),                                                                                                _if_conditional445) {
                                                                                                    # 5 "sAlignAsNode_clone"
                                                                                                    result_256->sline=self->sline;
                                                                                                }
                                                                                                # 7 "sAlignAsNode_clone"
                                                                                                # 6 "sAlignAsNode_clone"
                                                                                                if(_if_conditional446=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional446) {
                                                                                                    # 6 "sAlignAsNode_clone"
                                                                                                    __dec_obj201=result_256->sname;
                                                                                                    result_256->sname=(char*)come_increment_ref_count(((char*)(right_value575=string_clone(self->sname))));
                                                                                                    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 7 "sAlignAsNode_clone"
                                                                                                __result356__ = __result_obj__ = result_256;
                                                                                                come_call_finalizer2(sAlignAsNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result356__;
                                                                                                come_call_finalizer2(sAlignAsNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional447;
_Bool _if_conditional448;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                # 1 "sAlignAsExpNode_finalize"
                                                                                                # 0 "sAlignAsExpNode_finalize"
                                                                                                if(_if_conditional447=self!=((void*)0)&&self->exp!=((void*)0),                                                                                                _if_conditional447) {
                                                                                                    # 0 "sAlignAsExpNode_finalize"
                                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
                                                                                                # 2 "sAlignAsExpNode_finalize"
                                                                                                # 1 "sAlignAsExpNode_finalize"
                                                                                                if(_if_conditional448=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional448) {
                                                                                                    # 1 "sAlignAsExpNode_finalize"
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional449;
struct sAlignAsExpNode* __result358__;
void* right_value580;
struct sAlignAsExpNode* result_258;
_Bool _if_conditional450;
void* right_value581;
struct sNode* __dec_obj202;
_Bool _if_conditional451;
_Bool _if_conditional452;
void* right_value582;
char* __dec_obj203;
struct sAlignAsExpNode* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
right_value580 = (void*)0;
memset(&result_258, 0, sizeof(struct sAlignAsExpNode*));
right_value581 = (void*)0;
right_value582 = (void*)0;
                                                                                                # 3 "sAlignAsExpNode_clone"
                                                                                                # 2 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional449=self==(void*)0,                                                                                                _if_conditional449) {
                                                                                                    # 2 "sAlignAsExpNode_clone"
                                                                                                    __result358__ = __result_obj__ = (void*)0;
                                                                                                    return __result358__;
                                                                                                }
                                                                                                # 3 "sAlignAsExpNode_clone"
                                                                                                result_258=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value580=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "sAlignAsExpNode"))));
                                                                                                come_call_finalizer2(sAlignAsExpNode_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                # 5 "sAlignAsExpNode_clone"
                                                                                                # 4 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional450=self!=((void*)0)&&self->exp!=((void*)0),                                                                                                _if_conditional450) {
                                                                                                    # 4 "sAlignAsExpNode_clone"
                                                                                                    __dec_obj202=result_258->exp;
                                                                                                    result_258->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value581=sNode_clone(self->exp))));
                                                                                                    if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value581) { right_value581 = come_decrement_ref_count2(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                # 6 "sAlignAsExpNode_clone"
                                                                                                # 5 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional451=self!=((void*)0),                                                                                                _if_conditional451) {
                                                                                                    # 5 "sAlignAsExpNode_clone"
                                                                                                    result_258->sline=self->sline;
                                                                                                }
                                                                                                # 7 "sAlignAsExpNode_clone"
                                                                                                # 6 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional452=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional452) {
                                                                                                    # 6 "sAlignAsExpNode_clone"
                                                                                                    __dec_obj203=result_258->sname;
                                                                                                    result_258->sname=(char*)come_increment_ref_count(((char*)(right_value582=string_clone(self->sname))));
                                                                                                    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value582 = come_decrement_ref_count2(right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 7 "sAlignAsExpNode_clone"
                                                                                                __result359__ = __result_obj__ = result_258;
                                                                                                come_call_finalizer2(sAlignAsExpNode_finalize,result_258, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result359__;
                                                                                                come_call_finalizer2(sAlignAsExpNode_finalize,result_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
_Bool _if_conditional459;
void* right_value585;
void* right_value586;
struct sNode* _inf_value37;
struct sNullNodeX* _inf_obj_value37;
void* right_value589;
struct sNode* __result364__;
void* right_value590;
struct sNode* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
right_value585 = (void*)0;
right_value586 = (void*)0;
right_value589 = (void*)0;
right_value590 = (void*)0;
    # 2213 "21obj.c"
    # 2168 "21obj.c"
    if(_if_conditional453=charp_operator_equals(buf,"using"),    _if_conditional453) {
        # 2210 "21obj.c"
        # 2169 "21obj.c"
        if(_if_conditional454=strmemcmp(info->p,"comelang"),        _if_conditional454) {
            # 2170 "21obj.c"
            info->p+=strlen("comelang");
            # 2171 "21obj.c"
            skip_spaces_and_lf(info);
            # 2173 "21obj.c"
            gComeC=(_Bool)0;
        }
        else {
            # 2210 "21obj.c"
            # 2175 "21obj.c"
            if(_if_conditional455=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),            _if_conditional455) {
                # 2176 "21obj.c"
                info->p+=strlen("c");
                # 2177 "21obj.c"
                skip_spaces_and_lf(info);
                # 2192 "21obj.c"
                # 2179 "21obj.c"
                if(_if_conditional456=*info->p==123,                _if_conditional456) {
                    # 2180 "21obj.c"
                    info->p++;
                    # 2181 "21obj.c"
                    skip_spaces_and_lf(info);
                    # 2183 "21obj.c"
                    gComeC=(_Bool)1;
                    # 2185 "21obj.c"
                    transpile_toplevel((_Bool)1,info);
                    # 2187 "21obj.c"
                    gComeC=(_Bool)0;
                }
                else {
                    # 2190 "21obj.c"
                    gComeC=(_Bool)1;
                }
            }
            else {
                # 2210 "21obj.c"
                # 2193 "21obj.c"
                if(_if_conditional457=strmemcmp(info->p,"gc"),                _if_conditional457) {
                    # 2194 "21obj.c"
                    info->p+=strlen("gc");
                    # 2195 "21obj.c"
                    skip_spaces_and_lf(info);
                }
                else {
                    # 2210 "21obj.c"
                    # 2197 "21obj.c"
                    if(_if_conditional458=strmemcmp(info->p,"no-gc"),                    _if_conditional458) {
                        # 2198 "21obj.c"
                        info->p+=strlen("no-gc");
                        # 2199 "21obj.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 2210 "21obj.c"
                        # 2201 "21obj.c"
                        if(_if_conditional459=strmemcmp(info->p,"unsafe"),                        _if_conditional459) {
                            # 2202 "21obj.c"
                            info->p+=strlen("unsafe");
                            # 2203 "21obj.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 2206 "21obj.c"
                            err_msg(info,"invalid using");
                            # 2207 "21obj.c"
                            exit(2);
                        }
                    }
                }
            }
        }
        # 2210 "21obj.c"
        _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2210, "struct sNode");
        _inf_obj_value37=come_increment_ref_count(((struct sNullNodeX*)(right_value586=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value585=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 2210, "sNullNodeX")))),info))));
        _inf_value37->_protocol_obj=_inf_obj_value37;
        _inf_value37->finalize=(void*)sNullNodeX_finalize;
        _inf_value37->clone=(void*)sNullNodeX_clone;
        _inf_value37->compile=(void*)sNullNodeX_compile;
        _inf_value37->sline=(void*)sNullNodeX_sline;
        _inf_value37->sname=(void*)sNullNodeX_sname;
        _inf_value37->terminated=(void*)sNullNodeX_terminated;
        _inf_value37->kind=(void*)sNullNodeX_kind;
        __result364__ = __result_obj__ = ((struct sNode*)(right_value589=_inf_value37));
        come_call_finalizer2(sNullNodeX_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sNullNodeX_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result364__;
    }
    # 2213 "21obj.c"
    __result365__ = __result_obj__ = ((struct sNode*)(right_value590=top_level_v93(buf,head,head_sline,info)));
    if(right_value590) { right_value590 = come_decrement_ref_count2(right_value590, ((struct sNode*)right_value590)->finalize, ((struct sNode*)right_value590)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result365__;
}

static void sNullNodeX_finalize(struct sNullNodeX* self){
void* __result_obj__;
_Bool _if_conditional460;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sNullNodeX_finalize"
            # 0 "sNullNodeX_finalize"
            if(_if_conditional460=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional460) {
                # 0 "sNullNodeX_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self){
void* __result_obj__;
_Bool _if_conditional461;
struct sNullNodeX* __result362__;
void* right_value587;
struct sNullNodeX* result_259;
_Bool _if_conditional462;
_Bool _if_conditional463;
void* right_value588;
char* __dec_obj204;
struct sNullNodeX* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
right_value587 = (void*)0;
memset(&result_259, 0, sizeof(struct sNullNodeX*));
right_value588 = (void*)0;
            # 3 "sNullNodeX_clone"
            # 2 "sNullNodeX_clone"
            if(_if_conditional461=self==(void*)0,            _if_conditional461) {
                # 2 "sNullNodeX_clone"
                __result362__ = __result_obj__ = (void*)0;
                return __result362__;
            }
            # 3 "sNullNodeX_clone"
            result_259=(struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value587=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "sNullNodeX_clone", 3, "sNullNodeX"))));
            come_call_finalizer2(sNullNodeX_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sNullNodeX_clone"
            # 4 "sNullNodeX_clone"
            if(_if_conditional462=self!=((void*)0),            _if_conditional462) {
                # 4 "sNullNodeX_clone"
                result_259->sline=self->sline;
            }
            # 6 "sNullNodeX_clone"
            # 5 "sNullNodeX_clone"
            if(_if_conditional463=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional463) {
                # 5 "sNullNodeX_clone"
                __dec_obj204=result_259->sname;
                result_259->sname=(char*)come_increment_ref_count(((char*)(right_value588=string_clone(self->sname))));
                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value588 = come_decrement_ref_count2(right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sNullNodeX_clone"
            __result363__ = __result_obj__ = result_259;
            come_call_finalizer2(sNullNodeX_finalize,result_259, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result363__;
            come_call_finalizer2(sNullNodeX_finalize,result_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional464;
void* right_value591;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* type3_260;
char* name2_261;
_Bool err_262;
_Bool _if_conditional465;
void* right_value592;
struct sType* inf_type_263;
void* right_value593;
void* right_value594;
struct sNode* _inf_value38;
struct sImplementsNode* _inf_obj_value38;
void* right_value599;
struct sNode* __result368__;
_Bool _if_conditional474;
_Bool _while_condtional9;
void* right_value600;
struct sNode* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
right_value591 = (void*)0;
memset(&type3_260, 0, sizeof(struct sType*));
memset(&name2_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
memset(&type3_260, 0, sizeof(struct sType*));
memset(&name2_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
right_value592 = (void*)0;
memset(&inf_type_263, 0, sizeof(struct sType*));
right_value593 = (void*)0;
right_value594 = (void*)0;
right_value599 = (void*)0;
right_value600 = (void*)0;
    # 2240 "21obj.c"
    # 2218 "21obj.c"
    if(_if_conditional464=strmemcmp(info->p,"implements"),    _if_conditional464) {
        # 2219 "21obj.c"
        info->p+=strlen("implements");
        # 2220 "21obj.c"
        skip_spaces_and_lf(info);
        # 2222 "21obj.c"
        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(right_value591=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_260=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        name2_261=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        err_262=multiple_assign_var12->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2228 "21obj.c"
        # 2223 "21obj.c"
        if(_if_conditional465=!err_262,        _if_conditional465) {
            # 2224 "21obj.c"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 2225 "21obj.c"
            exit(2);
        }
        # 2228 "21obj.c"
        inf_type_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value592=sType_clone(type3_260))));
        come_call_finalizer2(sType_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2230 "21obj.c"
        _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2230, "struct sNode");
        _inf_obj_value38=come_increment_ref_count(((struct sImplementsNode*)(right_value594=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value593=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2230, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_263),info))));
        _inf_value38->_protocol_obj=_inf_obj_value38;
        _inf_value38->finalize=(void*)sImplementsNode_finalize;
        _inf_value38->clone=(void*)sImplementsNode_clone;
        _inf_value38->compile=(void*)sImplementsNode_compile;
        _inf_value38->sline=(void*)sImplementsNode_sline;
        _inf_value38->sname=(void*)sImplementsNode_sname;
        _inf_value38->terminated=(void*)sImplementsNode_terminated;
        _inf_value38->kind=(void*)sImplementsNode_kind;
        __result368__ = __result_obj__ = ((struct sNode*)(right_value599=_inf_value38));
        come_call_finalizer2(sType_finalize,type3_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name2_261 = come_decrement_ref_count2(name2_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,inf_type_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer2(sImplementsNode_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sImplementsNode_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value599) { right_value599 = come_decrement_ref_count2(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result368__;
        come_call_finalizer2(sType_finalize,type3_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name2_261 = come_decrement_ref_count2(name2_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,inf_type_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 2240 "21obj.c"
        # 2232 "21obj.c"
        if(_if_conditional474=*info->p==64,        _if_conditional474) {
            # 2233 "21obj.c"
            info->p++;
            # 2237 "21obj.c"
            while(_while_condtional9=xisalnum(*info->p)||*info->p==95,            _while_condtional9) {
                # 2235 "21obj.c"
                info->p++;
            }
            # 2237 "21obj.c"
            skip_spaces_and_lf(info);
        }
    }
    # 2240 "21obj.c"
    __result369__ = __result_obj__ = ((struct sNode*)(right_value600=post_position_operator3_v20((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value600) { right_value600 = come_decrement_ref_count2(right_value600, ((struct sNode*)right_value600)->finalize, ((struct sNode*)right_value600)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result369__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional466;
_Bool _if_conditional467;
_Bool _if_conditional468;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sImplementsNode_finalize"
            # 0 "sImplementsNode_finalize"
            if(_if_conditional466=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional466) {
                # 0 "sImplementsNode_finalize"
                if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 2 "sImplementsNode_finalize"
            # 1 "sImplementsNode_finalize"
            if(_if_conditional467=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional467) {
                # 1 "sImplementsNode_finalize"
                come_call_finalizer2(sType_finalize,self->inf_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sImplementsNode_finalize"
            # 2 "sImplementsNode_finalize"
            if(_if_conditional468=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional468) {
                # 2 "sImplementsNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional469;
struct sImplementsNode* __result366__;
void* right_value595;
struct sImplementsNode* result_264;
_Bool _if_conditional470;
void* right_value596;
struct sNode* __dec_obj205;
_Bool _if_conditional471;
void* right_value597;
struct sType* __dec_obj206;
_Bool _if_conditional472;
_Bool _if_conditional473;
void* right_value598;
char* __dec_obj207;
struct sImplementsNode* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
right_value595 = (void*)0;
memset(&result_264, 0, sizeof(struct sImplementsNode*));
right_value596 = (void*)0;
right_value597 = (void*)0;
right_value598 = (void*)0;
            # 3 "sImplementsNode_clone"
            # 2 "sImplementsNode_clone"
            if(_if_conditional469=self==(void*)0,            _if_conditional469) {
                # 2 "sImplementsNode_clone"
                __result366__ = __result_obj__ = (void*)0;
                return __result366__;
            }
            # 3 "sImplementsNode_clone"
            result_264=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value595=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "sImplementsNode"))));
            come_call_finalizer2(sImplementsNode_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sImplementsNode_clone"
            # 4 "sImplementsNode_clone"
            if(_if_conditional470=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional470) {
                # 4 "sImplementsNode_clone"
                __dec_obj205=result_264->obj_exp;
                result_264->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value596=sNode_clone(self->obj_exp))));
                if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value596) { right_value596 = come_decrement_ref_count2(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 6 "sImplementsNode_clone"
            # 5 "sImplementsNode_clone"
            if(_if_conditional471=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional471) {
                # 5 "sImplementsNode_clone"
                __dec_obj206=result_264->inf_type;
                result_264->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value597=sType_clone(self->inf_type))));
                come_call_finalizer2(sType_finalize,__dec_obj206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value597, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sImplementsNode_clone"
            # 6 "sImplementsNode_clone"
            if(_if_conditional472=self!=((void*)0),            _if_conditional472) {
                # 6 "sImplementsNode_clone"
                result_264->sline=self->sline;
            }
            # 8 "sImplementsNode_clone"
            # 7 "sImplementsNode_clone"
            if(_if_conditional473=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional473) {
                # 7 "sImplementsNode_clone"
                __dec_obj207=result_264->sname;
                result_264->sname=(char*)come_increment_ref_count(((char*)(right_value598=string_clone(self->sname))));
                __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value598 = come_decrement_ref_count2(right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 8 "sImplementsNode_clone"
            __result367__ = __result_obj__ = result_264;
            come_call_finalizer2(sImplementsNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result367__;
            come_call_finalizer2(sImplementsNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

