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










struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
struct sNullNodeX* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result34__ = __result_obj__ = self;
    come_call_finalizer2(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNodeX_terminated(){
void* __result_obj__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = (_Bool)0;
    return __result35__;
}

char* sNullNodeX_kind(){
void* __result_obj__;
void* right_value50;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    __result36__ = __result_obj__ = ((char*)(right_value50=__builtin_string("sNullNodeX")));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
}

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __result37__ = (_Bool)1;
    return __result37__;
}

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = self->sline;
    return __result38__;
}

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value51;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
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
    __dec_obj36=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj37=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(info->sname))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value86;
char* __dec_obj35;
_Bool _if_conditional96;
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
        if(_if_conditional8=self==(void*)0,        _if_conditional8) {
            __result40__ = __result_obj__ = (void*)0;
            return __result40__;
        }
        result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional26=self!=((void*)0),        _if_conditional26) {
            result_11->mClass=self->mClass;
        }
        if(_if_conditional27=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional27) {
            __dec_obj16=result_11->mMultipleTypes;
            result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional31=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional31) {
            __dec_obj18=result_11->mNoSolvedGenericsType;
            result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value62=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional35=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional35) {
            __dec_obj19=result_11->mOriginalLoadVarType;
            result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value63=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional36=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional36) {
            __dec_obj20=result_11->mGenericsName;
            result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value64=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional37=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional37) {
            __dec_obj21=result_11->mGenericsTypes;
            result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value65=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional38=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional38) {
            __dec_obj25=result_11->mArrayNum;
            result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value73=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional51=self!=((void*)0),        _if_conditional51) {
            result_11->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional52=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional52) {
            __dec_obj26=result_11->mParamTypes;
            result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional53=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional53) {
            __dec_obj30=result_11->mParamNames;
            result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional57=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional57) {
            __dec_obj31=result_11->mResultType;
            result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value82=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_11->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional59=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional59) {
            __dec_obj32=result_11->mAlignas;
            result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value83=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value83) { right_value83 = come_decrement_ref_count2(right_value83, ((struct sNode*)right_value83)->finalize, ((struct sNode*)right_value83)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_11->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_11->mShort=self->mShort;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_11->mLong=self->mLong;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_11->mLongLong=self->mLongLong;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_11->mConstant=self->mConstant;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_11->mRegister=self->mRegister;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_11->mVolatile=self->mVolatile;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_11->mStatic=self->mStatic;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_11->mExtern=self->mExtern;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_11->mRestrict=self->mRestrict;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_11->mImmutable=self->mImmutable;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_11->mHeap=self->mHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_11->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_11->mDelegate=self->mDelegate;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_11->mShare=self->mShare;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_11->mClone=self->mClone;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_11->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_11->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_11->mRefference=self->mRefference;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_11->mException=self->mException;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_11->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional83=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional83) {
            __dec_obj33=result_11->mSizeNum;
            result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_11->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_11->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional86=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional86) {
            __dec_obj34=result_11->mOriginalTypeName;
            result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value85=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_11->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_11->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_11->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_11->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_11->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_11->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_11->mInline=self->mInline;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_11->mNullValue=self->mNullValue;
        }
        if(_if_conditional95=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional95) {
            __dec_obj35=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value86=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_11->mArrayPointerType=self->mArrayPointerType;
        }
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
            if(_if_conditional9=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional9) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional11=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional11) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional13=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional13) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional14) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional16=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional16) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional19=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional19) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional21=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional21) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional22) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional23=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional23) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional24=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional24) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional25=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional25) {
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
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional10=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional10) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional12=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional12) {
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
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional17) {
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
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional20) {
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
                if(_if_conditional28=self==((void*)0),                _if_conditional28) {
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value54=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value53=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_19=it_19->next;
                }
                __result44__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result44__;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
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
                        if(_if_conditional29=self->len==0,                        _if_conditional29) {
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj13=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional30=self->len==1,                            _if_conditional30) {
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj14=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj15=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
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
                if(_if_conditional32=self==(void*)0,                _if_conditional32) {
                    __result45__ = __result_obj__ = (void*)0;
                    return __result45__;
                }
                result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional34=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional34) {
                    __dec_obj17=result_23->v1;
                    result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result46__ = __result_obj__ = result_23;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result46__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional33=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional33) {
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
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value67=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value66=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional5=it_25!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value72=sNode_clone(it_25->item)))));
                    if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_25=it_25->next;
                }
                __result52__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result52__;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
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
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value68=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj22=litem_26->item;
                            litem_26->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value69=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj23=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value70=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj24=litem_28->item;
                                litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
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
                        if(_if_conditional42=self==(void*)0,                        _if_conditional42) {
                            __result50__ = __result_obj__ = (void*)0;
                            return __result50__;
                        }
                        result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value71=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value71) { right_value71 = come_decrement_ref_count2(right_value71, ((struct sNode*)right_value71)->finalize, ((struct sNode*)right_value71)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional43=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional43) {
                            result_29->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_29->finalize=self->finalize;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_29->clone=self->clone;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_29->compile=self->compile;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_29->sline=self->sline;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_29->sname=self->sname;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_29->terminated=self->terminated;
                        }
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            result_29->kind=self->kind;
                        }
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
                if(_if_conditional54=self==((void*)0),                _if_conditional54) {
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value75=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_31=self->head;
                while(_while_condtional6=it_31!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value80=string_clone(it_31->item)))));
                    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_31=it_31->next;
                }
                __result56__ = __result_obj__ = result_30;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
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
                        if(_if_conditional55=self->len==0,                        _if_conditional55) {
                            litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value77=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_32->prev=((void*)0);
                            litem_32->next=((void*)0);
                            __dec_obj27=litem_32->item;
                            litem_32->item=(char*)come_increment_ref_count(item);
                            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_32;
                            self->head=litem_32;
                        }
                        else {
                            if(_if_conditional56=self->len==1,                            _if_conditional56) {
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value78=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_33->prev=self->head;
                                litem_33->next=((void*)0);
                                __dec_obj28=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_33;
                                self->head->next=litem_33;
                            }
                            else {
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value79=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_34->prev=self->tail;
                                litem_34->next=((void*)0);
                                __dec_obj29=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_34;
                                self->tail=litem_34;
                            }
                        }
                        self->len++;
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
    __result59__ = self->sline;
    return __result59__;
}

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value89;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
    __result60__ = __result_obj__ = ((char*)(right_value89=__builtin_string(self->sname)));
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
}

_Bool sNewNode_terminated(){
void* __result_obj__;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    __result61__ = (_Bool)0;
    return __result61__;
}

char* sNewNode_kind(){
void* __result_obj__;
void* right_value90;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
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
_Bool _if_conditional105;
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
_Bool _if_conditional106;
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
    type_35=self->type;
    come_value_36=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 84, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    num_string_37=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value93=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value92=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 86, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_37,"1");
    for(    o2_saved_38=(struct list$1sNodeph*)come_increment_ref_count((type_35->mArrayNum)),it_41=list$1sNodeph_begin((o2_saved_38));    !list$1sNodeph_end((o2_saved_38));    it_41=list$1sNodeph_next((o2_saved_38))    ){
        if(_if_conditional105=!node_compile(it_41,info),        _if_conditional105) {
            __result70__ = (_Bool)0;
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,num_string_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result70__;
        }
        cvalue_44=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value94=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        buffer_append_str(num_string_37,((char*)(right_value95=xsprintf("*(%s)",cvalue_44->c_value))));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,cvalue_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type2_45=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=solve_generics(type_35,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_reset(type2_45->mArrayNum);
    type_name_48=(char*)come_increment_ref_count(((char*)(right_value97=make_type_name_string(type2_45,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type_name2_49=(char*)come_increment_ref_count(((char*)(right_value98=make_come_type_name_string(type2_45,info))));
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj38=come_value_36->c_value;
    come_value_36->c_value=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_48,type_name_48,((char*)(right_value99=buffer_to_string(num_string_37))),info->sname,info->sline,type_name2_49))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_45->mHeap=(_Bool)1;
    type2_45->mPointerNum++;
    if(type2_45->mNoSolvedGenericsType->v1) {
        type2_45->mNoSolvedGenericsType->v1->mPointerNum++;
        type2_45->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
    }
    __dec_obj39=come_value_36->c_value;
    come_value_36->c_value=(char*)come_increment_ref_count(((char*)(right_value101=append_object_to_right_values(come_value_36->c_value,(struct sType*)come_increment_ref_count(type2_45),info))));
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj40=come_value_36->type;
    come_value_36->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(type2_45))));
    come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_36->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_36->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_36));
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
_Bool _if_conditional99;
_Bool _if_conditional100;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional99=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional99) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional100=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional100) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional101;
struct sNode* result_39;
struct sNode* __result63__;
_Bool _if_conditional102;
struct sNode* __result64__;
struct sNode* result_40;
struct sNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct sNode*));
memset(&result_40, 0, sizeof(struct sNode*));
        if(_if_conditional101=self==((void*)0),        _if_conditional101) {
            memset(&result_39,0,sizeof(struct sNode*));
            __result63__ = __result_obj__ = result_39;
            return __result63__;
        }
        self->it=self->head;
        if(self->it) {
            __result64__ = __result_obj__ = self->it->item;
            return __result64__;
        }
        memset(&result_40,0,sizeof(struct sNode*));
        __result65__ = __result_obj__ = result_40;
        return __result65__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
        __result66__ = self==((void*)0)||self->it==((void*)0);
        return __result66__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional103;
struct sNode* result_42;
struct sNode* __result67__;
_Bool _if_conditional104;
struct sNode* __result68__;
struct sNode* result_43;
struct sNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct sNode*));
memset(&result_43, 0, sizeof(struct sNode*));
        if(_if_conditional103=self==((void*)0)||self->it==((void*)0),        _if_conditional103) {
            memset(&result_42,0,sizeof(struct sNode*));
            __result67__ = __result_obj__ = result_42;
            return __result67__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result68__ = __result_obj__ = self->it->item;
            return __result68__;
        }
        memset(&result_43,0,sizeof(struct sNode*));
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
        it_46=self->head;
        while(_while_condtional7=it_46!=((void*)0),        _while_condtional7) {
            prev_it_47=it_46;
            it_46=it_46->next;
            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result71__ = __result_obj__ = self;
        return __result71__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional107;
void* right_value103;
struct list_item$1CVALUEph* litem_50;
struct CVALUE* __dec_obj41;
_Bool _if_conditional109;
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
        if(_if_conditional107=self->len==0,        _if_conditional107) {
            litem_50=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value103=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_50->prev=((void*)0);
            litem_50->next=((void*)0);
            __dec_obj41=litem_50->item;
            litem_50->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_50;
            self->head=litem_50;
        }
        else {
            if(_if_conditional109=self->len==1,            _if_conditional109) {
                litem_51=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value104=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_51->prev=self->head;
                litem_51->next=((void*)0);
                __dec_obj42=litem_51->item;
                litem_51->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_51;
                self->head->next=litem_51;
            }
            else {
                litem_52=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value105=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_52->prev=self->tail;
                litem_52->next=((void*)0);
                __dec_obj43=litem_52->item;
                litem_52->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_52;
                self->tail=litem_52;
            }
        }
        self->len++;
        __result72__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result72__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional108;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional108=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional108) {
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
    __dec_obj46=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(obj_exp))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj47=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(inf_type))));
    come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(info->sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
    __result78__ = self->sline;
    return __result78__;
}

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value115;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
    __result79__ = __result_obj__ = ((char*)(right_value115=__builtin_string(self->sname)));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

_Bool sImplementsNode_terminated(){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = (_Bool)0;
    return __result80__;
}

char* sImplementsNode_kind(){
void* __result_obj__;
void* right_value116;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
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
_Bool _if_conditional119;
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
_Bool __result86__;
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
    obj_exp_54=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(self->obj_exp))));
    if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    inf_type_55=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(self->inf_type))));
    come_call_finalizer2(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional119=!node_compile(obj_exp_54,info),    _if_conditional119) {
        __result82__ = (_Bool)0;
        if(obj_exp_54) { obj_exp_54 = come_decrement_ref_count2(obj_exp_54, ((struct sNode*)obj_exp_54)->finalize, ((struct sNode*)obj_exp_54)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sType_finalize,inf_type_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result82__;
    }
    come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(come_value_56->type))));
    come_call_finalizer2(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_57->mPointerNum--;
    type_57->mHeap=(_Bool)0;
    klass_58=inf_type_55->mClass;
    come_value2_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 197, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(inf_type_55))));
    come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_61=(char*)come_increment_ref_count(((char*)(right_value123=make_type_name_string(inf_type_55,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type_name2_62=(char*)come_increment_ref_count(((char*)(right_value124=make_type_name_string(type_57,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buf_64=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s* _inf_value%d;\n",type_name_61,++inf_num_63))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf_64);
    buf2_65=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s* _inf_obj_value%d;\n",type_name2_62,inf_num_63))));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf2_65);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_63,type_name_61,type_name_61,info->sname,info->sline,type_name_61);
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_63,come_value_56->c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_63,inf_num_63);
    typeX_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(type_57))));
    come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    typeX_66->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(right_value128=create_finalizer_automatically(typeX_66,"finalize",info)));
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    ((struct tuple2$2sFunpcharph*)(right_value129=create_cloner_automatically(typeX_66,"clone",info)));
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_67=1;    i_67<list$1tuple2$2charphsTypephph_length(klass_58->mFields);    i_67++    ){
        multiple_assign_var1=list$1tuple2$2charphsTypephphp_operator_load_element(klass_58->mFields,i_67);
        name_71=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_72=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        method_name_73=(char*)come_increment_ref_count(((char*)(right_value130=create_method_name(type_57,(_Bool)0,name_71,info,(_Bool)1))));
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_63,name_71,method_name_73);
        name_71 = come_decrement_ref_count2(name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        method_name_73 = come_decrement_ref_count2(method_name_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj49=come_value2_59->c_value;
    come_value2_59->c_value=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("_inf_value%d",inf_num_63))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(inf_type_55))));
    come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type3_74->mPointerNum++;
    type3_74->mHeap=(_Bool)1;
    type2_60->mHeap=(_Bool)1;
    __dec_obj50=come_value2_59->type;
    come_value2_59->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(type2_60))));
    come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj51=come_value2_59->c_value;
    come_value2_59->c_value=(char*)come_increment_ref_count(((char*)(right_value134=append_object_to_right_values(come_value2_59->c_value,(struct sType*)come_increment_ref_count(type3_74),info))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_value2_59->type->mPointerNum++;
    come_value2_59->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_59->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_59));
    __result86__ = (_Bool)1;
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
    return __result86__;
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
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional120=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional120) {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
        __result83__ = self->len;
        return __result83__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool _if_conditional121;
struct list_item$1tuple2$2charphsTypephph* it_68;
int i_69;
_Bool _while_condtional8;
_Bool _if_conditional122;
struct tuple2$2charphsTypeph* __result84__;
struct tuple2$2charphsTypeph* default_value_70;
struct tuple2$2charphsTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_69, 0, sizeof(int));
memset(&default_value_70, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional121=position<0,            _if_conditional121) {
                position+=self->len;
            }
            it_68=self->head;
            i_69=0;
            while(_while_condtional8=it_68!=((void*)0),            _while_condtional8) {
                if(_if_conditional122=position==i_69,                _if_conditional122) {
                    __result84__ = __result_obj__ = it_68->item;
                    return __result84__;
                }
                it_68=it_68->next;
                i_69++;
            }
            memset(&default_value_70,0,sizeof(struct tuple2$2charphsTypeph*));
            __result85__ = __result_obj__ = default_value_70;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_70, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result85__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional123;
_Bool _if_conditional124;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional123=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional123) {
                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional124=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional124) {
                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value135;
char* __dec_obj52;
struct sTrueNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result87__ = __result_obj__ = self;
    come_call_finalizer2(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result87__;
    come_call_finalizer2(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = self->sline;
    return __result88__;
}

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value136;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    __result89__ = __result_obj__ = ((char*)(right_value136=__builtin_string(self->sname)));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

_Bool sTrueNode_terminated(){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = (_Bool)0;
    return __result90__;
}

char* sTrueNode_kind(){
void* __result_obj__;
void* right_value137;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value137=__builtin_string("sTrueNode")));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
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
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&come_value_75, 0, sizeof(struct CVALUE*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
    come_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 282, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=come_value_75->c_value;
    come_value_75->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("(_Bool)1"))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=come_value_75->type;
    come_value_75->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value140=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 285, "sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_75->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_75->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_75));
    __result92__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result92__;
    come_call_finalizer2(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__;
void* right_value142;
void* right_value143;
struct sNode* _inf_value2;
struct sTrueNode* _inf_obj_value2;
void* right_value146;
struct sNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value146 = (void*)0;
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
    __result95__ = __result_obj__ = ((struct sNode*)(right_value146=_inf_value2));
    come_call_finalizer2(sTrueNode_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sTrueNode_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result95__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value147;
char* __dec_obj56;
struct sFalseNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    self->sline=info->sline;
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result96__ = __result_obj__ = self;
    come_call_finalizer2(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result96__;
    come_call_finalizer2(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    __result97__ = self->sline;
    return __result97__;
}

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value148;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
    __result98__ = __result_obj__ = ((char*)(right_value148=__builtin_string(self->sname)));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

_Bool sFalseNode_terminated(){
void* __result_obj__;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
    __result99__ = (_Bool)0;
    return __result99__;
}

char* sFalseNode_kind(){
void* __result_obj__;
void* right_value149;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    __result100__ = __result_obj__ = ((char*)(right_value149=__builtin_string("sFalseNode")));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result100__;
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
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
memset(&come_value_77, 0, sizeof(struct CVALUE*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
    come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 335, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj57=come_value_77->c_value;
    come_value_77->c_value=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("(_Bool)0"))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj58=come_value_77->type;
    come_value_77->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value152=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 338, "sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_77->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_77->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
    __result101__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result101__;
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__;
void* right_value154;
void* right_value155;
struct sNode* _inf_value3;
struct sFalseNode* _inf_obj_value3;
void* right_value158;
struct sNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value158 = (void*)0;
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
    __result104__ = __result_obj__ = ((struct sNode*)(right_value158=_inf_value3));
    come_call_finalizer2(sFalseNode_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFalseNode_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result104__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value159;
struct sType* __dec_obj60;
void* right_value160;
char* __dec_obj61;
struct sSizeOfNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
right_value160 = (void*)0;
    __dec_obj60=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result105__ = __result_obj__ = self;
    come_call_finalizer2(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result105__;
    come_call_finalizer2(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = self->sline;
    return __result106__;
}

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(right_value161=__builtin_string(self->sname)));
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sSizeOfNode_terminated(){
void* __result_obj__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    __result108__ = (_Bool)0;
    return __result108__;
}

char* sSizeOfNode_kind(){
void* __result_obj__;
void* right_value162;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    __result109__ = __result_obj__ = ((char*)(right_value162=__builtin_string("sSizeOfNode")));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
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
_Bool __result110__;
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
    type_79=self->type;
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 393, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_81=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=solve_generics(type_79,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_82=(char*)come_increment_ref_count(((char*)(right_value165=make_type_name_string(type2_81,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj62=come_value_80->c_value;
    come_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("sizeof(%s)",type_name_82))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj63=come_value_80->type;
    come_value_80->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 400, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_80->type->mUnsigned=(_Bool)1;
    come_value_80->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_80->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_80));
    __result110__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_82 = come_decrement_ref_count2(type_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result110__;
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
struct sSizeOfExpNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
right_value170 = (void*)0;
    __dec_obj64=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=sNode_clone(exp))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value169) { right_value169 = come_decrement_ref_count2(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result111__ = __result_obj__ = self;
    come_call_finalizer2(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result111__;
    come_call_finalizer2(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = self->sline;
    return __result112__;
}

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value171;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value171=__builtin_string(self->sname)));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sSizeOfExpNode_terminated(){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __result114__ = (_Bool)0;
    return __result114__;
}

char* sSizeOfExpNode_kind(){
void* __result_obj__;
void* right_value172;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    __result115__ = __result_obj__ = ((char*)(right_value172=__builtin_string("sSizeOfExpNode")));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result115__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_83;
_Bool _if_conditional139;
_Bool __result116__;
void* right_value173;
struct CVALUE* come_value_84;
void* right_value174;
struct CVALUE* come_value2_85;
void* right_value175;
char* __dec_obj66;
void* right_value176;
void* right_value177;
struct sType* __dec_obj67;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_83, 0, sizeof(struct sNode*));
right_value173 = (void*)0;
memset(&come_value_84, 0, sizeof(struct CVALUE*));
right_value174 = (void*)0;
memset(&come_value2_85, 0, sizeof(struct CVALUE*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
    exp_83=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional139=!node_compile(exp_83,info),    _if_conditional139) {
        __result116__ = (_Bool)0;
        if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result116__;
    }
    come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 458, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj66=come_value2_85->c_value;
    come_value2_85->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("sizeof(%s)",come_value_84->c_value))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj67=come_value2_85->type;
    come_value2_85->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value176=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 461, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_85->type->mUnsigned=(_Bool)1;
    come_value2_85->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_85->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_85));
    __result117__ = (_Bool)1;
    if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result117__;
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
struct sTypeOfNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
right_value179 = (void*)0;
    __dec_obj68=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj69=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(info->sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result118__ = __result_obj__ = self;
    come_call_finalizer2(sTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result118__;
    come_call_finalizer2(sTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sTypeOfNode_sline(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __result119__ = self->sline;
    return __result119__;
}

char* sTypeOfNode_sname(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value180;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
    __result120__ = __result_obj__ = ((char*)(right_value180=__builtin_string(self->sname)));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sTypeOfNode_terminated(){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = (_Bool)0;
    return __result121__;
}

char* sTypeOfNode_kind(){
void* __result_obj__;
void* right_value181;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
    __result122__ = __result_obj__ = ((char*)(right_value181=__builtin_string("sTypeOfNode")));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result122__;
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
_Bool __result123__;
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
    type_86=self->type;
    come_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 512, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_88=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=solve_generics(type_86,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_89=(char*)come_increment_ref_count(((char*)(right_value184=make_type_name_string(type2_88,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj70=come_value_87->c_value;
    come_value_87->c_value=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("\"%s\"",type_name_89))));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj71=come_value_87->type;
    come_value_87->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value186=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 519, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_87->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_87->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_87));
    __result123__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_89 = come_decrement_ref_count2(type_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result123__;
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
struct sTypeOfExpNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value189 = (void*)0;
    __dec_obj72=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=sNode_clone(exp))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value188) { right_value188 = come_decrement_ref_count2(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj73=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string(info->sname))));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result124__ = __result_obj__ = self;
    come_call_finalizer2(sTypeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result124__;
    come_call_finalizer2(sTypeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sTypeOfExpNode_sline(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = self->sline;
    return __result125__;
}

char* sTypeOfExpNode_sname(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value190;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
    __result126__ = __result_obj__ = ((char*)(right_value190=__builtin_string(self->sname)));
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sTypeOfExpNode_terminated(){
void* __result_obj__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = (_Bool)0;
    return __result127__;
}

char* sTypeOfExpNode_kind(){
void* __result_obj__;
void* right_value191;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
    __result128__ = __result_obj__ = ((char*)(right_value191=__builtin_string("sTypeOfExpNode")));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result128__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_90;
_Bool _if_conditional144;
_Bool __result129__;
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
_Bool __result130__;
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
    exp_90=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional144=!node_compile(exp_90,info),    _if_conditional144) {
        __result129__ = (_Bool)0;
        if(exp_90) { exp_90 = come_decrement_ref_count2(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result129__;
    }
    come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(come_value_91->type))));
    come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=solve_generics(type_92,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_94=(char*)come_increment_ref_count(((char*)(right_value195=make_type_name_string(type2_93,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj74=come_value_91->c_value;
    come_value_91->c_value=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("\"%s\"",type_name_94))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj75=come_value_91->type;
    come_value_91->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 583, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_91->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_91->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_91));
    __result130__ = (_Bool)1;
    if(exp_90) { exp_90 = come_decrement_ref_count2(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_94 = come_decrement_ref_count2(type_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result130__;
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
struct sDynamicTypeOfNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
right_value200 = (void*)0;
    __dec_obj76=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(exp))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value199) { right_value199 = come_decrement_ref_count2(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj77=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string(info->sname))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result131__ = __result_obj__ = self;
    come_call_finalizer2(sDynamicTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result131__;
    come_call_finalizer2(sDynamicTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional145;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional145=self!=((void*)0)&&self->exp!=((void*)0),        _if_conditional145) {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional146=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional146) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

int sDynamicTypeOfNode_sline(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    __result132__ = self->sline;
    return __result132__;
}

char* sDynamicTypeOfNode_sname(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value201;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    __result133__ = __result_obj__ = ((char*)(right_value201=__builtin_string(self->sname)));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result133__;
}

_Bool sDynamicTypeOfNode_terminated(){
void* __result_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    __result134__ = (_Bool)0;
    return __result134__;
}

char* sDynamicTypeOfNode_kind(){
void* __result_obj__;
void* right_value202;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    __result135__ = __result_obj__ = ((char*)(right_value202=__builtin_string("sDynamicTypeOfNode")));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_95;
_Bool _if_conditional147;
_Bool __result136__;
void* right_value203;
struct CVALUE* come_value_96;
_Bool _if_conditional148;
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
_Bool __result137__;
void* right_value210;
struct CVALUE* come_value2_100;
void* right_value211;
char* __dec_obj80;
void* right_value212;
void* right_value213;
struct sType* __dec_obj81;
_Bool __result138__;
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
    exp_95=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional147=!node_compile(exp_95,info),    _if_conditional147) {
        __result136__ = (_Bool)0;
        if(exp_95) { exp_95 = come_decrement_ref_count2(exp_95, ((struct sNode*)exp_95)->finalize, ((struct sNode*)exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result136__;
    }
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional148=!come_value_96->type->mHeap,    _if_conditional148) {
        type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(come_value_96->type))));
        come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type2_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=solve_generics(type_97,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type_name_99=(char*)come_increment_ref_count(((char*)(right_value206=make_type_name_string(type2_98,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj78=come_value_96->c_value;
        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("\"%s\"",type_name_99))));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj79=come_value_96->type;
        come_value_96->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value208=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 648, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_96->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_96->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_96));
        __result137__ = (_Bool)1;
        come_call_finalizer2(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_99 = come_decrement_ref_count2(type_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_95) { exp_95 = come_decrement_ref_count2(exp_95, ((struct sNode*)exp_95)->finalize, ((struct sNode*)exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result137__;
        come_call_finalizer2(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_99 = come_decrement_ref_count2(type_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 658, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj80=come_value2_100->c_value;
        come_value2_100->c_value=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("come_dynamic_typeof(%s)",come_value_96->c_value))));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj81=come_value2_100->type;
        come_value2_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value212=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 661, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value2_100->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value2_100->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_100));
        come_call_finalizer2(CVALUE_finalize,come_value2_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result138__ = (_Bool)1;
    if(exp_95) { exp_95 = come_decrement_ref_count2(exp_95, ((struct sNode*)exp_95)->finalize, ((struct sNode*)exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result138__;
    if(exp_95) { exp_95 = come_decrement_ref_count2(exp_95, ((struct sNode*)exp_95)->finalize, ((struct sNode*)exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value214;
struct sType* __dec_obj82;
void* right_value215;
char* __dec_obj83;
struct sAlignOfNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
right_value215 = (void*)0;
    __dec_obj82=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(info->sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result139__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result139__;
    come_call_finalizer2(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = self->sline;
    return __result140__;
}

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value216;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
    __result141__ = __result_obj__ = ((char*)(right_value216=__builtin_string(self->sname)));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sAlignOfNode_terminated(){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = (_Bool)0;
    return __result142__;
}

char* sAlignOfNode_kind(){
void* __result_obj__;
void* right_value217;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
    __result143__ = __result_obj__ = ((char*)(right_value217=__builtin_string("sAlignOfNode")));
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
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
_Bool __result144__;
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
    type_101=self->type;
    come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 712, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=solve_generics(type_101,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_104=(char*)come_increment_ref_count(((char*)(right_value220=make_type_name_string(type2_103,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj84=come_value_102->c_value;
    come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("_Alignof(%s)",type_name_104))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj85=come_value_102->type;
    come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value222=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 719, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_102->type->mUnsigned=(_Bool)1;
    come_value_102->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_102->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
    __result144__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result144__;
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
struct sAlignOfExpNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
right_value225 = (void*)0;
    __dec_obj86=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=sNode_clone(exp))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result145__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result145__;
    come_call_finalizer2(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    __result146__ = self->sline;
    return __result146__;
}

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value226;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
    __result147__ = __result_obj__ = ((char*)(right_value226=__builtin_string(self->sname)));
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result147__;
}

_Bool sAlignOfExpNode_terminated(){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = (_Bool)0;
    return __result148__;
}

char* sAlignOfExpNode_kind(){
void* __result_obj__;
void* right_value227;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
    __result149__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sAlignOfExpNode")));
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_105;
_Bool _if_conditional153;
_Bool __result150__;
void* right_value228;
struct CVALUE* come_value_106;
void* right_value229;
struct CVALUE* come_value2_107;
void* right_value230;
char* __dec_obj88;
void* right_value231;
void* right_value232;
struct sType* __dec_obj89;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_105, 0, sizeof(struct sNode*));
right_value228 = (void*)0;
memset(&come_value_106, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
memset(&come_value2_107, 0, sizeof(struct CVALUE*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
    exp_105=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional153=!node_compile(exp_105,info),    _if_conditional153) {
        __result150__ = (_Bool)0;
        if(exp_105) { exp_105 = come_decrement_ref_count2(exp_105, ((struct sNode*)exp_105)->finalize, ((struct sNode*)exp_105)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result150__;
    }
    come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 777, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=come_value2_107->c_value;
    come_value2_107->c_value=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("_AlignOf(%s)",come_value_106->c_value))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj89=come_value2_107->type;
    come_value2_107->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 780, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_107->type->mUnsigned=(_Bool)1;
    come_value2_107->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_107->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_107));
    __result151__ = (_Bool)1;
    if(exp_105) { exp_105 = come_decrement_ref_count2(exp_105, ((struct sNode*)exp_105)->finalize, ((struct sNode*)exp_105)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result151__;
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
struct sAlignOfNode2* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
right_value234 = (void*)0;
    __dec_obj90=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj91=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(info->sname))));
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result152__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result152__;
    come_call_finalizer2(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    __result153__ = self->sline;
    return __result153__;
}

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value235;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
    __result154__ = __result_obj__ = ((char*)(right_value235=__builtin_string(self->sname)));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result154__;
}

_Bool sAlignOfNode2_terminated(){
void* __result_obj__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = (_Bool)0;
    return __result155__;
}

char* sAlignOfNode2_kind(){
void* __result_obj__;
void* right_value236;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
    __result156__ = __result_obj__ = ((char*)(right_value236=__builtin_string("sAlignOfNode2")));
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result156__;
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
_Bool __result157__;
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
    type_108=self->type;
    come_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 831, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=solve_generics(type_108,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_111=(char*)come_increment_ref_count(((char*)(right_value239=make_type_name_string(type2_110,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj92=come_value_109->c_value;
    come_value_109->c_value=(char*)come_increment_ref_count(((char*)(right_value240=xsprintf("__alignof__(%s)",type_name_111))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj93=come_value_109->type;
    come_value_109->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value241=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 838, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_109->type->mUnsigned=(_Bool)1;
    come_value_109->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_109->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_109));
    __result157__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_111 = come_decrement_ref_count2(type_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result157__;
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
struct sAlignOfExpNode2* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
right_value244 = (void*)0;
    __dec_obj94=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value243=sNode_clone(exp))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value243) { right_value243 = come_decrement_ref_count2(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj95=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(info->sname))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result158__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result158__;
    come_call_finalizer2(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = self->sline;
    return __result159__;
}

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value245;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
    __result160__ = __result_obj__ = ((char*)(right_value245=__builtin_string(self->sname)));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

_Bool sAlignOfExpNode2_terminated(){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = (_Bool)0;
    return __result161__;
}

char* sAlignOfExpNode2_kind(){
void* __result_obj__;
void* right_value246;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
    __result162__ = __result_obj__ = ((char*)(right_value246=__builtin_string("sAlignOfExpNode2")));
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result162__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_112;
_Bool _if_conditional158;
_Bool __result163__;
void* right_value247;
struct CVALUE* come_value_113;
void* right_value248;
struct CVALUE* come_value2_114;
void* right_value249;
char* __dec_obj96;
void* right_value250;
void* right_value251;
struct sType* __dec_obj97;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_112, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&come_value_113, 0, sizeof(struct CVALUE*));
right_value248 = (void*)0;
memset(&come_value2_114, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
    exp_112=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional158=!node_compile(exp_112,info),    _if_conditional158) {
        __result163__ = (_Bool)0;
        if(exp_112) { exp_112 = come_decrement_ref_count2(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result163__;
    }
    come_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 896, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj96=come_value2_114->c_value;
    come_value2_114->c_value=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("__alignof__(%s)",come_value_113->c_value))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj97=come_value2_114->type;
    come_value2_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 899, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_114->type->mUnsigned=(_Bool)1;
    come_value2_114->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_114->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_114));
    __result164__ = (_Bool)1;
    if(exp_112) { exp_112 = come_decrement_ref_count2(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result164__;
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
struct sAlignAsNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    __dec_obj98=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj99=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value253=__builtin_string(info->sname))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result165__ = __result_obj__ = self;
    come_call_finalizer2(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result165__;
    come_call_finalizer2(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = self->sline;
    return __result166__;
}

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value254;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
    __result167__ = __result_obj__ = ((char*)(right_value254=__builtin_string(self->sname)));
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sAlignAsNode_terminated(){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __result168__ = (_Bool)0;
    return __result168__;
}

char* sAlignAsNode_kind(){
void* __result_obj__;
void* right_value255;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    __result169__ = __result_obj__ = ((char*)(right_value255=__builtin_string("sAlignAsNode")));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result169__;
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
_Bool __result170__;
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
    type_115=self->type;
    come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 950, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=solve_generics(type_115,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_118=(char*)come_increment_ref_count(((char*)(right_value258=make_type_name_string(type2_117,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj100=come_value_116->c_value;
    come_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("_Alignas(%s)",type_name_118))));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj101=come_value_116->type;
    come_value_116->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 957, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_116->type->mUnsigned=(_Bool)1;
    come_value_116->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_116->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_116));
    __result170__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_118 = come_decrement_ref_count2(type_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result170__;
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
struct sAlignAsExpNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    __dec_obj102=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=sNode_clone(exp))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj103=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(info->sname))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result171__ = __result_obj__ = self;
    come_call_finalizer2(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result171__;
    come_call_finalizer2(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    __result172__ = self->sline;
    return __result172__;
}

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value264;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
    __result173__ = __result_obj__ = ((char*)(right_value264=__builtin_string(self->sname)));
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

_Bool sAlignAsExpNode_terminated(){
void* __result_obj__;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    __result174__ = (_Bool)0;
    return __result174__;
}

char* sAlignAsExpNode_kind(){
void* __result_obj__;
void* right_value265;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
    __result175__ = __result_obj__ = ((char*)(right_value265=__builtin_string("sAlignAsExpNode")));
    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result175__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_119;
_Bool _if_conditional163;
_Bool __result176__;
void* right_value266;
struct CVALUE* come_value_120;
void* right_value267;
struct CVALUE* come_value2_121;
void* right_value268;
char* __dec_obj104;
void* right_value269;
void* right_value270;
struct sType* __dec_obj105;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_119, 0, sizeof(struct sNode*));
right_value266 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value267 = (void*)0;
memset(&come_value2_121, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
    exp_119=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional163=!node_compile(exp_119,info),    _if_conditional163) {
        __result176__ = (_Bool)0;
        if(exp_119) { exp_119 = come_decrement_ref_count2(exp_119, ((struct sNode*)exp_119)->finalize, ((struct sNode*)exp_119)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result176__;
    }
    come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1016, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj104=come_value2_121->c_value;
    come_value2_121->c_value=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("_Alignas(%s)",come_value_120->c_value))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj105=come_value2_121->type;
    come_value2_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1019, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_121->type->mUnsigned=(_Bool)1;
    come_value2_121->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_121->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_121));
    __result177__ = (_Bool)1;
    if(exp_119) { exp_119 = come_decrement_ref_count2(exp_119, ((struct sNode*)exp_119)->finalize, ((struct sNode*)exp_119)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result177__;
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
struct sDeleteNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
right_value272 = (void*)0;
    __dec_obj106=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=sNode_clone(node))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj107=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string(info->sname))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result178__ = __result_obj__ = self;
    come_call_finalizer2(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result178__;
    come_call_finalizer2(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
int __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    __result179__ = self->sline;
    return __result179__;
}

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value273;
char* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
    __result180__ = __result_obj__ = ((char*)(right_value273=__builtin_string(self->sname)));
    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result180__;
}

_Bool sDeleteNode_terminated(){
void* __result_obj__;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
    __result181__ = (_Bool)0;
    return __result181__;
}

char* sDeleteNode_kind(){
void* __result_obj__;
void* right_value274;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
    __result182__ = __result_obj__ = ((char*)(right_value274=__builtin_string("sDeleteNode")));
    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result182__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_122;
_Bool _if_conditional166;
_Bool __result183__;
void* right_value275;
struct CVALUE* come_value_123;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_122, 0, sizeof(struct sNode*));
right_value275 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
    node_122=self->node;
    if(_if_conditional166=!node_compile(node_122,info),    _if_conditional166) {
        __result183__ = (_Bool)0;
        return __result183__;
    }
    come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    free_object(come_value_123->type,come_value_123->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result184__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result184__;
    come_call_finalizer2(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value276;
struct sNode* __dec_obj108;
void* right_value277;
char* __dec_obj109;
struct sForceDeleteNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
right_value277 = (void*)0;
    __dec_obj108=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=sNode_clone(node))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj109=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string(info->sname))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result185__ = __result_obj__ = self;
    come_call_finalizer2(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result185__;
    come_call_finalizer2(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    __result186__ = self->sline;
    return __result186__;
}

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value278;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
    __result187__ = __result_obj__ = ((char*)(right_value278=__builtin_string(self->sname)));
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result187__;
}

_Bool sForceDeleteNode_terminated(){
void* __result_obj__;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
    __result188__ = (_Bool)0;
    return __result188__;
}

char* sForceDeleteNode_kind(){
void* __result_obj__;
void* right_value279;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
    __result189__ = __result_obj__ = ((char*)(right_value279=__builtin_string("sForceDeleteNode")));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result189__;
}

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_124;
_Bool _if_conditional169;
_Bool __result190__;
void* right_value280;
struct CVALUE* come_value_125;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_124, 0, sizeof(struct sNode*));
right_value280 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
    node_124=self->node;
    if(_if_conditional169=!node_compile(node_124,info),    _if_conditional169) {
        __result190__ = (_Bool)0;
        return __result190__;
    }
    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    free_object(come_value_125->type,come_value_125->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    __result191__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result191__;
    come_call_finalizer2(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value281;
struct sNode* __dec_obj110;
void* right_value282;
char* __dec_obj111;
struct sDelegateNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value281 = (void*)0;
right_value282 = (void*)0;
    __dec_obj110=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=sNode_clone(node))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj111=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(info->sname))));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result192__ = __result_obj__ = self;
    come_call_finalizer2(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result192__;
    come_call_finalizer2(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
int __result193__;
memset(&__result_obj__, 0, sizeof(void*));
    __result193__ = self->sline;
    return __result193__;
}

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value283;
char* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
    __result194__ = __result_obj__ = ((char*)(right_value283=__builtin_string(self->sname)));
    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result194__;
}

_Bool sDelegateNode_terminated(){
void* __result_obj__;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
    __result195__ = (_Bool)0;
    return __result195__;
}

char* sDelegateNode_kind(){
void* __result_obj__;
void* right_value284;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
    __result196__ = __result_obj__ = ((char*)(right_value284=__builtin_string("sDelegateNode")));
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result196__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_126;
_Bool _if_conditional172;
_Bool __result197__;
void* right_value285;
struct CVALUE* come_value_127;
_Bool _if_conditional173;
_Bool __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_126, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
memset(&come_value_127, 0, sizeof(struct CVALUE*));
    node_126=self->node;
    if(_if_conditional172=!node_compile(node_126,info),    _if_conditional172) {
        __result197__ = (_Bool)0;
        return __result197__;
    }
    come_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value285=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_127->type->mDelegate=(_Bool)1;
    if(come_value_127->var) {
        come_value_127->var->mType->mDelegate=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_127));
    __result198__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result198__;
    come_call_finalizer2(CVALUE_finalize,come_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value286;
struct sNode* __dec_obj112;
void* right_value287;
char* __dec_obj113;
struct sShareNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
right_value287 = (void*)0;
    __dec_obj112=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(node))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj113=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string(info->sname))));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result199__ = __result_obj__ = self;
    come_call_finalizer2(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result199__;
    come_call_finalizer2(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sShareNode_sline(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
int __result200__;
memset(&__result_obj__, 0, sizeof(void*));
    __result200__ = self->sline;
    return __result200__;
}

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value288;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
    __result201__ = __result_obj__ = ((char*)(right_value288=__builtin_string(self->sname)));
    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result201__;
}

_Bool sShareNode_terminated(){
void* __result_obj__;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
    __result202__ = (_Bool)0;
    return __result202__;
}

char* sShareNode_kind(){
void* __result_obj__;
void* right_value289;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value289 = (void*)0;
    __result203__ = __result_obj__ = ((char*)(right_value289=__builtin_string("sShareNode")));
    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result203__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_128;
_Bool _if_conditional176;
_Bool __result204__;
void* right_value290;
struct CVALUE* come_value_129;
_Bool _if_conditional177;
_Bool __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_128, 0, sizeof(struct sNode*));
right_value290 = (void*)0;
memset(&come_value_129, 0, sizeof(struct CVALUE*));
    node_128=self->node;
    if(_if_conditional176=!node_compile(node_128,info),    _if_conditional176) {
        __result204__ = (_Bool)0;
        return __result204__;
    }
    come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_129->type->mShare=(_Bool)1;
    if(come_value_129->var) {
        come_value_129->var->mType->mShare=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_129));
    __result205__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result205__;
    come_call_finalizer2(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value291;
struct sNode* __dec_obj114;
void* right_value292;
char* __dec_obj115;
struct sBorrowNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value291 = (void*)0;
right_value292 = (void*)0;
    __dec_obj114=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=sNode_clone(node))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj115=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string(info->sname))));
    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result206__ = __result_obj__ = self;
    come_call_finalizer2(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result206__;
    come_call_finalizer2(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
int __result207__;
memset(&__result_obj__, 0, sizeof(void*));
    __result207__ = self->sline;
    return __result207__;
}

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value293;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
    __result208__ = __result_obj__ = ((char*)(right_value293=__builtin_string(self->sname)));
    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result208__;
}

_Bool sBorrowNode_terminated(){
void* __result_obj__;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
    __result209__ = (_Bool)0;
    return __result209__;
}

char* sBorrowNode_kind(){
void* __result_obj__;
void* right_value294;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
    __result210__ = __result_obj__ = ((char*)(right_value294=__builtin_string("sBorrowNode")));
    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result210__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_130;
_Bool _if_conditional180;
_Bool __result211__;
void* right_value295;
struct CVALUE* come_value_131;
int right_value_id_132;
_Bool _if_conditional181;
_Bool __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_130, 0, sizeof(struct sNode*));
right_value295 = (void*)0;
memset(&come_value_131, 0, sizeof(struct CVALUE*));
memset(&right_value_id_132, 0, sizeof(int));
    node_130=self->node;
    if(_if_conditional180=!node_compile(node_130,info),    _if_conditional180) {
        __result211__ = (_Bool)0;
        return __result211__;
    }
    come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_131->type->mHeap=(_Bool)0;
    right_value_id_132=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_131->c_value));
    if(_if_conditional181=right_value_id_132!=-1,    _if_conditional181) {
        remove_object_from_right_values(right_value_id_132,info);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
    __result212__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result212__;
    come_call_finalizer2(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value296;
struct sNode* __dec_obj116;
void* right_value297;
char* __dec_obj117;
struct sCloneNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
right_value297 = (void*)0;
    __dec_obj116=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=sNode_clone(node))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj117=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value297=__builtin_string(info->sname))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result213__ = __result_obj__ = self;
    come_call_finalizer2(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result213__;
    come_call_finalizer2(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
int __result214__;
memset(&__result_obj__, 0, sizeof(void*));
    __result214__ = self->sline;
    return __result214__;
}

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value298;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value298 = (void*)0;
    __result215__ = __result_obj__ = ((char*)(right_value298=__builtin_string(self->sname)));
    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result215__;
}

_Bool sCloneNode_terminated(){
void* __result_obj__;
_Bool __result216__;
memset(&__result_obj__, 0, sizeof(void*));
    __result216__ = (_Bool)0;
    return __result216__;
}

char* sCloneNode_kind(){
void* __result_obj__;
void* right_value299;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
right_value299 = (void*)0;
    __result217__ = __result_obj__ = ((char*)(right_value299=__builtin_string("sCloneNode")));
    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result217__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_133;
_Bool _if_conditional184;
_Bool __result218__;
void* right_value300;
struct CVALUE* left_value_134;
void* right_value301;
struct sType* left_type_135;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
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
_Bool __result219__;
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
    node_133=self->node;
    if(_if_conditional184=!node_compile(node_133,info),    _if_conditional184) {
        __result218__ = (_Bool)0;
        return __result218__;
    }
    left_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_value_134->type->mClone=(_Bool)1;
    left_type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_clone(left_value_134->type))));
    come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional185=left_type_135->mPointerNum==1&&string_operator_equals(left_type_135->mClass->mName,"void")&&left_type_135->mHeap==(_Bool)0,    _if_conditional185) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_134));
    }
    else {
        if(_if_conditional186=left_type_135->mPointerNum==0,        _if_conditional186) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_134));
        }
        else {
            if(_if_conditional187=left_type_135->mPointerNum>0,            _if_conditional187) {
                come_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1373, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var2=((struct tuple2$2sTypephcharph*)(right_value303=clone_object(left_type_135,left_value_134->c_value,info)));
                result_type_137=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
                c_value_138=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj118=come_value_136->c_value;
                come_value_136->c_value=(char*)come_increment_ref_count(c_value_138);
                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj119=come_value_136->type;
                come_value_136->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_type_135))));
                come_call_finalizer2(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_136->type->mHeap=(_Bool)1;
                come_value_136->type->mClone=(_Bool)1;
                come_value_136->var=((void*)0);
                __dec_obj120=come_value_136->c_value;
                come_value_136->c_value=(char*)come_increment_ref_count(((char*)(right_value305=append_object_to_right_values(come_value_136->c_value,(struct sType*)come_increment_ref_count(left_type_135),info))));
                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_136));
                come_call_finalizer2(CVALUE_finalize,come_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_138 = come_decrement_ref_count2(c_value_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result219__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result219__;
    come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional188;
_Bool _if_conditional189;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional188=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional188) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional189=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional189) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value306;
struct sNode* __dec_obj121;
void* right_value307;
char* __dec_obj122;
struct sDupeNode* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
right_value307 = (void*)0;
    __dec_obj121=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=sNode_clone(node))));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj122=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(info->sname))));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result220__ = __result_obj__ = self;
    come_call_finalizer2(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result220__;
    come_call_finalizer2(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
int __result221__;
memset(&__result_obj__, 0, sizeof(void*));
    __result221__ = self->sline;
    return __result221__;
}

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value308;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
    __result222__ = __result_obj__ = ((char*)(right_value308=__builtin_string(self->sname)));
    right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result222__;
}

_Bool sDupeNode_terminated(){
void* __result_obj__;
_Bool __result223__;
memset(&__result_obj__, 0, sizeof(void*));
    __result223__ = (_Bool)0;
    return __result223__;
}

char* sDupeNode_kind(){
void* __result_obj__;
void* right_value309;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value309 = (void*)0;
    __result224__ = __result_obj__ = ((char*)(right_value309=__builtin_string("sDupeNode")));
    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result224__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_139;
_Bool _if_conditional192;
_Bool __result225__;
void* right_value310;
struct CVALUE* left_value_140;
void* right_value311;
struct sType* left_type_141;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
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
_Bool __result226__;
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
    node_139=self->node;
    if(_if_conditional192=!node_compile(node_139,info),    _if_conditional192) {
        __result225__ = (_Bool)0;
        return __result225__;
    }
    left_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(left_value_140->type))));
    come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional193=left_type_141->mPointerNum==0,    _if_conditional193) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_140));
    }
    else {
        if(_if_conditional194=left_type_141->mPointerNum>0&&left_type_141->mHeap==(_Bool)0,        _if_conditional194) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_140));
        }
        else {
            if(_if_conditional195=left_type_141->mPointerNum>0,            _if_conditional195) {
                come_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1446, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(right_value313=clone_object(left_type_141,left_value_140->c_value,info)));
                result_type_143=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_144=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj123=come_value_142->c_value;
                come_value_142->c_value=(char*)come_increment_ref_count(c_value_144);
                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj124=come_value_142->type;
                come_value_142->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(left_type_141))));
                come_call_finalizer2(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_142->type->mHeap=(_Bool)1;
                come_value_142->var=((void*)0);
                __dec_obj125=come_value_142->c_value;
                come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value315=append_object_to_right_values(come_value_142->c_value,(struct sType*)come_increment_ref_count(left_type_141),info))));
                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_142));
                come_call_finalizer2(CVALUE_finalize,come_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result226__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result226__;
    come_call_finalizer2(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value316;
struct sNode* __dec_obj126;
void* right_value317;
char* __dec_obj127;
struct sDummyHeapNode* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
right_value316 = (void*)0;
right_value317 = (void*)0;
    __dec_obj126=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=sNode_clone(node))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj127=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value317=__builtin_string(info->sname))));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result227__ = __result_obj__ = self;
    come_call_finalizer2(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result227__;
    come_call_finalizer2(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
int __result228__;
memset(&__result_obj__, 0, sizeof(void*));
    __result228__ = self->sline;
    return __result228__;
}

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value318;
char* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
right_value318 = (void*)0;
    __result229__ = __result_obj__ = ((char*)(right_value318=__builtin_string(self->sname)));
    right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result229__;
}

_Bool sDummyHeapNode_terminated(){
void* __result_obj__;
_Bool __result230__;
memset(&__result_obj__, 0, sizeof(void*));
    __result230__ = (_Bool)0;
    return __result230__;
}

char* sDummyHeapNode_kind(){
void* __result_obj__;
void* right_value319;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
right_value319 = (void*)0;
    __result231__ = __result_obj__ = ((char*)(right_value319=__builtin_string("sDummyHeapNode")));
    right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result231__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_145;
_Bool _if_conditional198;
_Bool __result232__;
void* right_value320;
struct CVALUE* come_value_146;
_Bool __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_145, 0, sizeof(struct sNode*));
right_value320 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
    node_145=self->node;
    if(_if_conditional198=!node_compile(node_145,info),    _if_conditional198) {
        __result232__ = (_Bool)0;
        return __result232__;
    }
    come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_146->type->mHeap=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_146));
    __result233__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result233__;
    come_call_finalizer2(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value321;
struct sNode* __dec_obj128;
void* right_value322;
char* __dec_obj129;
struct sGCIncNode* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
right_value321 = (void*)0;
right_value322 = (void*)0;
    __dec_obj128=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=sNode_clone(node))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj129=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value322=__builtin_string(info->sname))));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result234__ = __result_obj__ = self;
    come_call_finalizer2(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result234__;
    come_call_finalizer2(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
int __result235__;
memset(&__result_obj__, 0, sizeof(void*));
    __result235__ = self->sline;
    return __result235__;
}

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value323;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value323 = (void*)0;
    __result236__ = __result_obj__ = ((char*)(right_value323=__builtin_string(self->sname)));
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result236__;
}

_Bool sGCIncNode_terminated(){
void* __result_obj__;
_Bool __result237__;
memset(&__result_obj__, 0, sizeof(void*));
    __result237__ = (_Bool)0;
    return __result237__;
}

char* sGCIncNode_kind(){
void* __result_obj__;
void* right_value324;
char* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
    __result238__ = __result_obj__ = ((char*)(right_value324=__builtin_string("sGCIncNode")));
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result238__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_147;
_Bool _if_conditional201;
_Bool __result239__;
void* right_value325;
struct CVALUE* come_value_148;
struct sType* type_149;
_Bool _if_conditional202;
void* right_value326;
char* type_name_150;
void* right_value327;
char* __dec_obj130;
_Bool __result240__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_147, 0, sizeof(struct sNode*));
right_value325 = (void*)0;
memset(&come_value_148, 0, sizeof(struct CVALUE*));
memset(&type_149, 0, sizeof(struct sType*));
right_value326 = (void*)0;
memset(&type_name_150, 0, sizeof(char*));
right_value327 = (void*)0;
    node_147=self->node;
    if(_if_conditional201=!node_compile(node_147,info),    _if_conditional201) {
        __result239__ = (_Bool)0;
        return __result239__;
    }
    come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value325=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_149=come_value_148->type;
    if(come_value_148->type->mHeap) {
        type_name_150=(char*)come_increment_ref_count(((char*)(right_value326=make_type_name_string(type_149,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj130=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value327=increment_ref_count_object(come_value_148->type,come_value_148->c_value,info))));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_150 = come_decrement_ref_count2(type_name_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
    __result240__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result240__;
    come_call_finalizer2(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value328;
struct sNode* __dec_obj131;
void* right_value329;
char* __dec_obj132;
struct sGCDecNode* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
right_value329 = (void*)0;
    __dec_obj131=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(node))));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value328) { right_value328 = come_decrement_ref_count2(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj132=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string(info->sname))));
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result241__ = __result_obj__ = self;
    come_call_finalizer2(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result241__;
    come_call_finalizer2(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
int __result242__;
memset(&__result_obj__, 0, sizeof(void*));
    __result242__ = self->sline;
    return __result242__;
}

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value330;
char* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
    __result243__ = __result_obj__ = ((char*)(right_value330=__builtin_string(self->sname)));
    right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result243__;
}

_Bool sGCDecNode_terminated(){
void* __result_obj__;
_Bool __result244__;
memset(&__result_obj__, 0, sizeof(void*));
    __result244__ = (_Bool)0;
    return __result244__;
}

char* sGCDecNode_kind(){
void* __result_obj__;
void* right_value331;
char* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
right_value331 = (void*)0;
    __result245__ = __result_obj__ = ((char*)(right_value331=__builtin_string("sGCDecNode")));
    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result245__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_151;
_Bool _if_conditional205;
_Bool __result246__;
void* right_value332;
struct CVALUE* come_value_152;
struct sType* type_153;
_Bool __result247__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_151, 0, sizeof(struct sNode*));
right_value332 = (void*)0;
memset(&come_value_152, 0, sizeof(struct CVALUE*));
memset(&type_153, 0, sizeof(struct sType*));
    node_151=self->node;
    if(_if_conditional205=!node_compile(node_151,info),    _if_conditional205) {
        __result246__ = (_Bool)0;
        return __result246__;
    }
    come_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_153=come_value_152->type;
    decrement_ref_count_object(type_153,come_value_152->c_value,info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_152));
    __result247__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result247__;
    come_call_finalizer2(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value333;
struct sType* __dec_obj133;
void* right_value334;
char* __dec_obj134;
struct sIsHeap* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value333 = (void*)0;
right_value334 = (void*)0;
    __dec_obj133=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj134=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string(info->sname))));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result248__ = __result_obj__ = self;
    come_call_finalizer2(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result248__;
    come_call_finalizer2(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
int __result249__;
memset(&__result_obj__, 0, sizeof(void*));
    __result249__ = self->sline;
    return __result249__;
}

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
void* right_value335;
char* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value335 = (void*)0;
    __result250__ = __result_obj__ = ((char*)(right_value335=__builtin_string(self->sname)));
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result250__;
}

_Bool sIsHeap_terminated(){
void* __result_obj__;
_Bool __result251__;
memset(&__result_obj__, 0, sizeof(void*));
    __result251__ = (_Bool)0;
    return __result251__;
}

char* sIsHeap_kind(){
void* __result_obj__;
void* right_value336;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value336 = (void*)0;
    __result252__ = __result_obj__ = ((char*)(right_value336=__builtin_string("sIsHeap")));
    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_154;
_Bool _if_conditional208;
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
_Bool __result253__;
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
    node_154=self->type;
    if(self->type->mHeap) {
        come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value337=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1672, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj135=come_value_155->c_value;
        come_value_155->c_value=(char*)come_increment_ref_count(((char*)(right_value338=xsprintf("1"))));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj136=come_value_155->type;
        come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value339=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1675, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_155->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
        add_come_last_code(info,"%s;\n",come_value_155->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1683, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj137=come_value_156->c_value;
        come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value342=xsprintf("0"))));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj138=come_value_156->type;
        come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value344=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value343=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1686, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_156->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
        add_come_last_code(info,"%s;\n",come_value_156->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result253__ = (_Bool)1;
    return __result253__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional209;
void* right_value345;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_157;
char* name_158;
_Bool err_159;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value346;
struct sType* inf_type_160;
void* right_value347;
struct sNode* node_161;
void* right_value348;
void* right_value349;
struct sNode* _inf_value4;
struct sImplementsNode* _inf_obj_value4;
void* right_value354;
struct sNode* __result256__;
void* right_value355;
void* right_value356;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* right_value360;
struct sNode* obj_164;
void* right_value361;
char* fun_name_165;
void* right_value362;
void* right_value363;
struct sNode* __result259__;
void* right_value364;
void* right_value365;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* right_value369;
struct sNode* __result262__;
_Bool _if_conditional235;
void* right_value370;
void* right_value371;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* right_value374;
struct sNode* __result265__;
_Bool _if_conditional240;
void* right_value375;
void* right_value376;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* right_value379;
struct sNode* __result268__;
_Bool _if_conditional245;
void* right_value380;
struct sNode* node_169;
void* right_value381;
void* right_value382;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* right_value386;
struct sNode* __result271__;
_Bool _if_conditional252;
void* right_value387;
struct sNode* node_171;
void* right_value388;
void* right_value389;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* right_value393;
struct sNode* __result274__;
_Bool _if_conditional259;
void* right_value394;
struct sNode* node_173;
void* right_value395;
void* right_value396;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* right_value400;
struct sNode* __result277__;
_Bool _if_conditional266;
void* right_value401;
struct sNode* node_175;
void* right_value402;
void* right_value403;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* right_value407;
struct sNode* __result280__;
_Bool _if_conditional273;
void* right_value408;
struct sNode* node_177;
void* right_value409;
void* right_value410;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* right_value414;
struct sNode* __result283__;
_Bool _if_conditional280;
void* right_value415;
struct sNode* node_179;
void* right_value416;
void* right_value417;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* right_value421;
struct sNode* __result286__;
_Bool _if_conditional287;
void* right_value422;
struct sNode* node_181;
void* right_value423;
void* right_value424;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* right_value428;
struct sNode* __result289__;
_Bool _if_conditional294;
void* right_value429;
struct sNode* node_183;
void* right_value430;
void* right_value431;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* right_value435;
struct sNode* __result292__;
_Bool _if_conditional301;
void* right_value436;
struct sNode* node_185;
void* right_value437;
void* right_value438;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* right_value442;
struct sNode* __result295__;
_Bool _if_conditional308;
void* right_value443;
struct sNode* node_187;
void* right_value444;
void* right_value445;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* right_value449;
struct sNode* __result298__;
_Bool _if_conditional315;
void* right_value450;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_189;
char* param_name_190;
_Bool err_191;
_Bool _if_conditional316;
void* right_value451;
struct sType* type2_192;
void* right_value452;
void* right_value453;
struct sNode* _inf_value19;
struct sIsHeap* _inf_obj_value19;
void* right_value457;
struct sNode* __result301__;
_Bool _if_conditional323;
_Bool _if_conditional324;
void* right_value458;
void* right_value459;
struct sNode* _inf_value20;
struct sNullNodeX* _inf_obj_value20;
void* right_value462;
struct sNode* __result304__;
_Bool _if_conditional329;
_Bool _if_conditional330;
void* right_value463;
struct sNode* node_195;
struct sNode* __result305__;
void* right_value464;
void* right_value465;
struct sNode* _inf_value21;
struct sNullNodeX* _inf_obj_value21;
void* right_value468;
struct sNode* __result308__;
_Bool _if_conditional335;
void* right_value469;
void* right_value470;
struct sNode* _inf_value22;
struct sNullNodeX* _inf_obj_value22;
void* right_value473;
struct sNode* __result311__;
_Bool _if_conditional340;
void* right_value474;
void* right_value475;
struct sNode* _inf_value23;
struct sNullNodeX* _inf_obj_value23;
void* right_value478;
struct sNode* __result314__;
_Bool _if_conditional345;
void* right_value479;
void* right_value480;
struct sNode* _inf_value24;
struct sNullNodeX* _inf_obj_value24;
void* right_value483;
struct sNode* __result317__;
_Bool _if_conditional350;
void* right_value484;
void* right_value485;
struct sNode* _inf_value25;
struct sNullNodeX* _inf_obj_value25;
void* right_value488;
struct sNode* __result320__;
_Bool _if_conditional355;
_Bool is_type_name_flag_201;
char* p_202;
int sline_203;
_Bool _if_conditional356;
void* right_value489;
char* word_204;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value490;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_205;
char* name_206;
_Bool err_207;
_Bool _if_conditional359;
void* right_value491;
void* right_value492;
struct sNode* _inf_value26;
struct sSizeOfNode* _inf_obj_value26;
void* right_value496;
struct sNode* __result323__;
void* right_value497;
struct sNode* exp_209;
void* right_value498;
void* right_value499;
struct sNode* _inf_value27;
struct sSizeOfExpNode* _inf_obj_value27;
void* right_value503;
struct sNode* __result326__;
_Bool _if_conditional372;
_Bool is_type_name_flag_211;
char* p_212;
int sline_213;
_Bool _if_conditional373;
void* right_value504;
char* word_214;
_Bool _if_conditional374;
_Bool _if_conditional375;
void* right_value505;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_215;
char* name_216;
_Bool err_217;
_Bool _if_conditional376;
void* right_value506;
void* right_value507;
struct sNode* _inf_value28;
struct sTypeOfNode* _inf_obj_value28;
void* right_value511;
struct sNode* __result329__;
void* right_value512;
struct sNode* exp_219;
void* right_value513;
void* right_value514;
struct sNode* _inf_value29;
struct sTypeOfExpNode* _inf_obj_value29;
void* right_value518;
struct sNode* __result332__;
_Bool _if_conditional389;
_Bool is_type_name_flag_221;
char* p_222;
int sline_223;
_Bool _if_conditional390;
void* right_value519;
char* word_224;
_Bool _if_conditional391;
_Bool _if_conditional392;
void* right_value520;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_225;
char* name_226;
_Bool err_227;
_Bool _if_conditional393;
void* right_value521;
void* right_value522;
struct sNode* _inf_value30;
struct sAlignOfNode* _inf_obj_value30;
void* right_value526;
struct sNode* __result335__;
void* right_value527;
struct sNode* exp_229;
void* right_value528;
void* right_value529;
struct sNode* _inf_value31;
struct sAlignOfExpNode* _inf_obj_value31;
void* right_value533;
struct sNode* __result338__;
_Bool _if_conditional406;
_Bool is_type_name_flag_231;
char* p_232;
int sline_233;
_Bool _if_conditional407;
void* right_value534;
char* word_234;
_Bool _if_conditional408;
_Bool _if_conditional409;
void* right_value535;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_235;
char* name_236;
_Bool err_237;
_Bool _if_conditional410;
void* right_value536;
void* right_value537;
struct sNode* _inf_value32;
struct sAlignOfNode2* _inf_obj_value32;
void* right_value541;
struct sNode* __result341__;
void* right_value542;
struct sNode* exp_239;
void* right_value543;
void* right_value544;
struct sNode* _inf_value33;
struct sAlignOfExpNode2* _inf_obj_value33;
void* right_value548;
struct sNode* __result344__;
_Bool _if_conditional423;
_Bool is_type_name_flag_241;
char* p_242;
int sline_243;
_Bool _if_conditional424;
void* right_value549;
char* word_244;
_Bool _if_conditional425;
_Bool _if_conditional426;
void* right_value550;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_245;
char* name_246;
_Bool err_247;
_Bool _if_conditional427;
void* right_value551;
void* right_value552;
struct sNode* _inf_value34;
struct sAlignAsNode* _inf_obj_value34;
void* right_value556;
struct sNode* __result347__;
void* right_value557;
struct sNode* exp_249;
void* right_value558;
void* right_value559;
struct sNode* _inf_value35;
struct sAlignAsExpNode* _inf_obj_value35;
void* right_value563;
struct sNode* __result350__;
void* right_value564;
struct sNode* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
memset(&type_157, 0, sizeof(struct sType*));
memset(&name_158, 0, sizeof(char*));
memset(&err_159, 0, sizeof(_Bool));
memset(&type_157, 0, sizeof(struct sType*));
memset(&name_158, 0, sizeof(char*));
memset(&err_159, 0, sizeof(_Bool));
right_value346 = (void*)0;
memset(&inf_type_160, 0, sizeof(struct sType*));
right_value347 = (void*)0;
memset(&node_161, 0, sizeof(struct sNode*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value360 = (void*)0;
memset(&obj_164, 0, sizeof(struct sNode*));
right_value361 = (void*)0;
memset(&fun_name_165, 0, sizeof(char*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
memset(&node_169, 0, sizeof(struct sNode*));
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&node_171, 0, sizeof(struct sNode*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&node_173, 0, sizeof(struct sNode*));
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
memset(&node_175, 0, sizeof(struct sNode*));
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
memset(&node_177, 0, sizeof(struct sNode*));
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value414 = (void*)0;
right_value415 = (void*)0;
memset(&node_179, 0, sizeof(struct sNode*));
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
memset(&node_181, 0, sizeof(struct sNode*));
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
memset(&node_183, 0, sizeof(struct sNode*));
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
memset(&node_185, 0, sizeof(struct sNode*));
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value442 = (void*)0;
right_value443 = (void*)0;
memset(&node_187, 0, sizeof(struct sNode*));
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
memset(&param_type_189, 0, sizeof(struct sType*));
memset(&param_name_190, 0, sizeof(char*));
memset(&err_191, 0, sizeof(_Bool));
memset(&param_type_189, 0, sizeof(struct sType*));
memset(&param_name_190, 0, sizeof(char*));
memset(&err_191, 0, sizeof(_Bool));
right_value451 = (void*)0;
memset(&type2_192, 0, sizeof(struct sType*));
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
memset(&node_195, 0, sizeof(struct sNode*));
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value488 = (void*)0;
memset(&is_type_name_flag_201, 0, sizeof(_Bool));
memset(&p_202, 0, sizeof(char*));
memset(&sline_203, 0, sizeof(int));
right_value489 = (void*)0;
memset(&word_204, 0, sizeof(char*));
right_value490 = (void*)0;
memset(&type_205, 0, sizeof(struct sType*));
memset(&name_206, 0, sizeof(char*));
memset(&err_207, 0, sizeof(_Bool));
memset(&type_205, 0, sizeof(struct sType*));
memset(&name_206, 0, sizeof(char*));
memset(&err_207, 0, sizeof(_Bool));
right_value491 = (void*)0;
right_value492 = (void*)0;
right_value496 = (void*)0;
right_value497 = (void*)0;
memset(&exp_209, 0, sizeof(struct sNode*));
right_value498 = (void*)0;
right_value499 = (void*)0;
right_value503 = (void*)0;
memset(&is_type_name_flag_211, 0, sizeof(_Bool));
memset(&p_212, 0, sizeof(char*));
memset(&sline_213, 0, sizeof(int));
right_value504 = (void*)0;
memset(&word_214, 0, sizeof(char*));
right_value505 = (void*)0;
memset(&type_215, 0, sizeof(struct sType*));
memset(&name_216, 0, sizeof(char*));
memset(&err_217, 0, sizeof(_Bool));
memset(&type_215, 0, sizeof(struct sType*));
memset(&name_216, 0, sizeof(char*));
memset(&err_217, 0, sizeof(_Bool));
right_value506 = (void*)0;
right_value507 = (void*)0;
right_value511 = (void*)0;
right_value512 = (void*)0;
memset(&exp_219, 0, sizeof(struct sNode*));
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value518 = (void*)0;
memset(&is_type_name_flag_221, 0, sizeof(_Bool));
memset(&p_222, 0, sizeof(char*));
memset(&sline_223, 0, sizeof(int));
right_value519 = (void*)0;
memset(&word_224, 0, sizeof(char*));
right_value520 = (void*)0;
memset(&type_225, 0, sizeof(struct sType*));
memset(&name_226, 0, sizeof(char*));
memset(&err_227, 0, sizeof(_Bool));
memset(&type_225, 0, sizeof(struct sType*));
memset(&name_226, 0, sizeof(char*));
memset(&err_227, 0, sizeof(_Bool));
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value526 = (void*)0;
right_value527 = (void*)0;
memset(&exp_229, 0, sizeof(struct sNode*));
right_value528 = (void*)0;
right_value529 = (void*)0;
right_value533 = (void*)0;
memset(&is_type_name_flag_231, 0, sizeof(_Bool));
memset(&p_232, 0, sizeof(char*));
memset(&sline_233, 0, sizeof(int));
right_value534 = (void*)0;
memset(&word_234, 0, sizeof(char*));
right_value535 = (void*)0;
memset(&type_235, 0, sizeof(struct sType*));
memset(&name_236, 0, sizeof(char*));
memset(&err_237, 0, sizeof(_Bool));
memset(&type_235, 0, sizeof(struct sType*));
memset(&name_236, 0, sizeof(char*));
memset(&err_237, 0, sizeof(_Bool));
right_value536 = (void*)0;
right_value537 = (void*)0;
right_value541 = (void*)0;
right_value542 = (void*)0;
memset(&exp_239, 0, sizeof(struct sNode*));
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value548 = (void*)0;
memset(&is_type_name_flag_241, 0, sizeof(_Bool));
memset(&p_242, 0, sizeof(char*));
memset(&sline_243, 0, sizeof(int));
right_value549 = (void*)0;
memset(&word_244, 0, sizeof(char*));
right_value550 = (void*)0;
memset(&type_245, 0, sizeof(struct sType*));
memset(&name_246, 0, sizeof(char*));
memset(&err_247, 0, sizeof(_Bool));
memset(&type_245, 0, sizeof(struct sType*));
memset(&name_246, 0, sizeof(char*));
memset(&err_247, 0, sizeof(_Bool));
right_value551 = (void*)0;
right_value552 = (void*)0;
right_value556 = (void*)0;
right_value557 = (void*)0;
memset(&exp_249, 0, sizeof(struct sNode*));
right_value558 = (void*)0;
right_value559 = (void*)0;
right_value563 = (void*)0;
right_value564 = (void*)0;
    if(_if_conditional209=charp_operator_equals(buf,"new"),    _if_conditional209) {
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value345=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_157=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_158=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_159=multiple_assign_var4->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional212=!err_159,        _if_conditional212) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(_if_conditional213=*info->p==40,        _if_conditional213) {
            if(type_157->mClass->mProtocol) {
                info->p++;
                skip_spaces_and_lf(info);
                inf_type_160=(struct sType*)come_increment_ref_count(((struct sType*)(right_value346=sType_clone(type_157))));
                come_call_finalizer2(sType_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                node_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=expression_v13(info))));
                if(right_value347) { right_value347 = come_decrement_ref_count2(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                expected_next_character(41,info);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1717, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sImplementsNode*)(right_value349=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value348=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1717, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node_161),(struct sType*)come_increment_ref_count(inf_type_160),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sImplementsNode_finalize;
                _inf_value4->clone=(void*)sImplementsNode_clone;
                _inf_value4->compile=(void*)sImplementsNode_compile;
                _inf_value4->sline=(void*)sImplementsNode_sline;
                _inf_value4->sname=(void*)sImplementsNode_sname;
                _inf_value4->terminated=(void*)sImplementsNode_terminated;
                _inf_value4->kind=(void*)sImplementsNode_kind;
                __result256__ = __result_obj__ = ((struct sNode*)(right_value354=_inf_value4));
                come_call_finalizer2(sType_finalize,inf_type_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_158 = come_decrement_ref_count2(name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sImplementsNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sImplementsNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result256__;
                come_call_finalizer2(sType_finalize,inf_type_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1720, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(right_value356=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value355=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1720, "sNewNode")))),(struct sType*)come_increment_ref_count(type_157),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sNewNode_finalize;
                _inf_value5->clone=(void*)sNewNode_clone;
                _inf_value5->compile=(void*)sNewNode_compile;
                _inf_value5->sline=(void*)sNewNode_sline;
                _inf_value5->sname=(void*)sNewNode_sname;
                _inf_value5->terminated=(void*)sNewNode_terminated;
                _inf_value5->kind=(void*)sNewNode_kind;
                obj_164=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=_inf_value5)));
                come_call_finalizer2(sNewNode_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sNewNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                fun_name_165=(char*)come_increment_ref_count(((char*)(right_value361=__builtin_string("initialize"))));
                right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __result259__ = __result_obj__ = ((struct sNode*)(right_value363=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=sNode_clone(obj_164)))),(char*)come_increment_ref_count(fun_name_165),info)));
                if(obj_164) { obj_164 = come_decrement_ref_count2(obj_164, ((struct sNode*)obj_164)->finalize, ((struct sNode*)obj_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_165 = come_decrement_ref_count2(fun_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_158 = come_decrement_ref_count2(name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result259__;
                if(obj_164) { obj_164 = come_decrement_ref_count2(obj_164, ((struct sNode*)obj_164)->finalize, ((struct sNode*)obj_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_165 = come_decrement_ref_count2(fun_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1727, "struct sNode");
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(right_value365=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value364=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1727, "sNewNode")))),(struct sType*)come_increment_ref_count(type_157),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNewNode_sline;
            _inf_value6->sname=(void*)sNewNode_sname;
            _inf_value6->terminated=(void*)sNewNode_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result262__ = __result_obj__ = ((struct sNode*)(right_value369=_inf_value6));
            come_call_finalizer2(sType_finalize,type_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_158 = come_decrement_ref_count2(name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sNewNode_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sNewNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value369) { right_value369 = come_decrement_ref_count2(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result262__;
        }
        come_call_finalizer2(sType_finalize,type_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_158 = come_decrement_ref_count2(name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional235=charp_operator_equals(buf,"true"),        _if_conditional235) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1731, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(right_value371=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value370=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1731, "sTrueNode")))),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sTrueNode_finalize;
            _inf_value7->clone=(void*)sTrueNode_clone;
            _inf_value7->compile=(void*)sTrueNode_compile;
            _inf_value7->sline=(void*)sTrueNode_sline;
            _inf_value7->sname=(void*)sTrueNode_sname;
            _inf_value7->terminated=(void*)sTrueNode_terminated;
            _inf_value7->kind=(void*)sTrueNode_kind;
            __result265__ = __result_obj__ = ((struct sNode*)(right_value374=_inf_value7));
            come_call_finalizer2(sTrueNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTrueNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result265__;
        }
        else {
            if(_if_conditional240=charp_operator_equals(buf,"false"),            _if_conditional240) {
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1734, "struct sNode");
                _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(right_value376=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value375=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1734, "sFalseNode")))),info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sFalseNode_finalize;
                _inf_value8->clone=(void*)sFalseNode_clone;
                _inf_value8->compile=(void*)sFalseNode_compile;
                _inf_value8->sline=(void*)sFalseNode_sline;
                _inf_value8->sname=(void*)sFalseNode_sname;
                _inf_value8->terminated=(void*)sFalseNode_terminated;
                _inf_value8->kind=(void*)sFalseNode_kind;
                __result268__ = __result_obj__ = ((struct sNode*)(right_value379=_inf_value8));
                come_call_finalizer2(sFalseNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFalseNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result268__;
            }
            else {
                if(_if_conditional245=charp_operator_equals(buf,"delete"),                _if_conditional245) {
                    node_169=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=expression_v13(info))));
                    if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1739, "struct sNode");
                    _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(right_value382=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value381=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1739, "sDeleteNode")))),(struct sNode*)come_increment_ref_count(node_169),info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sDeleteNode_finalize;
                    _inf_value9->clone=(void*)sDeleteNode_clone;
                    _inf_value9->compile=(void*)sDeleteNode_compile;
                    _inf_value9->sline=(void*)sDeleteNode_sline;
                    _inf_value9->sname=(void*)sDeleteNode_sname;
                    _inf_value9->terminated=(void*)sDeleteNode_terminated;
                    _inf_value9->kind=(void*)sDeleteNode_kind;
                    __result271__ = __result_obj__ = ((struct sNode*)(right_value386=_inf_value9));
                    if(node_169) { node_169 = come_decrement_ref_count2(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sDeleteNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sDeleteNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result271__;
                    if(node_169) { node_169 = come_decrement_ref_count2(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional252=charp_operator_equals(buf,"force_delete"),                    _if_conditional252) {
                        node_171=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=expression_v13(info))));
                        if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1744, "struct sNode");
                        _inf_obj_value10=come_increment_ref_count(((struct sForceDeleteNode*)(right_value389=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value388=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1744, "sForceDeleteNode")))),(struct sNode*)come_increment_ref_count(node_171),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value10->clone=(void*)sForceDeleteNode_clone;
                        _inf_value10->compile=(void*)sForceDeleteNode_compile;
                        _inf_value10->sline=(void*)sForceDeleteNode_sline;
                        _inf_value10->sname=(void*)sForceDeleteNode_sname;
                        _inf_value10->terminated=(void*)sForceDeleteNode_terminated;
                        _inf_value10->kind=(void*)sForceDeleteNode_kind;
                        __result274__ = __result_obj__ = ((struct sNode*)(right_value393=_inf_value10));
                        if(node_171) { node_171 = come_decrement_ref_count2(node_171, ((struct sNode*)node_171)->finalize, ((struct sNode*)node_171)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sForceDeleteNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sForceDeleteNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result274__;
                        if(node_171) { node_171 = come_decrement_ref_count2(node_171, ((struct sNode*)node_171)->finalize, ((struct sNode*)node_171)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional259=charp_operator_equals(buf,"borrow"),                        _if_conditional259) {
                            node_173=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=expression_v13(info))));
                            if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1750, "struct sNode");
                            _inf_obj_value11=come_increment_ref_count(((struct sBorrowNode*)(right_value396=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value395=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1750, "sBorrowNode")))),(struct sNode*)come_increment_ref_count(node_173),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sBorrowNode_finalize;
                            _inf_value11->clone=(void*)sBorrowNode_clone;
                            _inf_value11->compile=(void*)sBorrowNode_compile;
                            _inf_value11->sline=(void*)sBorrowNode_sline;
                            _inf_value11->sname=(void*)sBorrowNode_sname;
                            _inf_value11->terminated=(void*)sBorrowNode_terminated;
                            _inf_value11->kind=(void*)sBorrowNode_kind;
                            __result277__ = __result_obj__ = ((struct sNode*)(right_value400=_inf_value11));
                            if(node_173) { node_173 = come_decrement_ref_count2(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sBorrowNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sBorrowNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result277__;
                            if(node_173) { node_173 = come_decrement_ref_count2(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional266=charp_operator_equals(buf,"delegate"),                            _if_conditional266) {
                                node_175=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=expression_v13(info))));
                                if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1755, "struct sNode");
                                _inf_obj_value12=come_increment_ref_count(((struct sDelegateNode*)(right_value403=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value402=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1755, "sDelegateNode")))),(struct sNode*)come_increment_ref_count(node_175),info))));
                                _inf_value12->_protocol_obj=_inf_obj_value12;
                                _inf_value12->finalize=(void*)sDelegateNode_finalize;
                                _inf_value12->clone=(void*)sDelegateNode_clone;
                                _inf_value12->compile=(void*)sDelegateNode_compile;
                                _inf_value12->sline=(void*)sDelegateNode_sline;
                                _inf_value12->sname=(void*)sDelegateNode_sname;
                                _inf_value12->terminated=(void*)sDelegateNode_terminated;
                                _inf_value12->kind=(void*)sDelegateNode_kind;
                                __result280__ = __result_obj__ = ((struct sNode*)(right_value407=_inf_value12));
                                if(node_175) { node_175 = come_decrement_ref_count2(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sDelegateNode_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sDelegateNode_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result280__;
                                if(node_175) { node_175 = come_decrement_ref_count2(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional273=charp_operator_equals(buf,"share"),                                _if_conditional273) {
                                    node_177=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=expression_v13(info))));
                                    if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1760, "struct sNode");
                                    _inf_obj_value13=come_increment_ref_count(((struct sShareNode*)(right_value410=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value409=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1760, "sShareNode")))),(struct sNode*)come_increment_ref_count(node_177),info))));
                                    _inf_value13->_protocol_obj=_inf_obj_value13;
                                    _inf_value13->finalize=(void*)sShareNode_finalize;
                                    _inf_value13->clone=(void*)sShareNode_clone;
                                    _inf_value13->compile=(void*)sShareNode_compile;
                                    _inf_value13->sline=(void*)sShareNode_sline;
                                    _inf_value13->sname=(void*)sShareNode_sname;
                                    _inf_value13->terminated=(void*)sShareNode_terminated;
                                    _inf_value13->kind=(void*)sShareNode_kind;
                                    __result283__ = __result_obj__ = ((struct sNode*)(right_value414=_inf_value13));
                                    if(node_177) { node_177 = come_decrement_ref_count2(node_177, ((struct sNode*)node_177)->finalize, ((struct sNode*)node_177)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sShareNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sShareNode_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result283__;
                                    if(node_177) { node_177 = come_decrement_ref_count2(node_177, ((struct sNode*)node_177)->finalize, ((struct sNode*)node_177)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional280=charp_operator_equals(buf,"clone"),                                    _if_conditional280) {
                                        node_179=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=expression_v13(info))));
                                        if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1765, "struct sNode");
                                        _inf_obj_value14=come_increment_ref_count(((struct sCloneNode*)(right_value417=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value416=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1765, "sCloneNode")))),(struct sNode*)come_increment_ref_count(node_179),info))));
                                        _inf_value14->_protocol_obj=_inf_obj_value14;
                                        _inf_value14->finalize=(void*)sCloneNode_finalize;
                                        _inf_value14->clone=(void*)sCloneNode_clone;
                                        _inf_value14->compile=(void*)sCloneNode_compile;
                                        _inf_value14->sline=(void*)sCloneNode_sline;
                                        _inf_value14->sname=(void*)sCloneNode_sname;
                                        _inf_value14->terminated=(void*)sCloneNode_terminated;
                                        _inf_value14->kind=(void*)sCloneNode_kind;
                                        __result286__ = __result_obj__ = ((struct sNode*)(right_value421=_inf_value14));
                                        if(node_179) { node_179 = come_decrement_ref_count2(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sCloneNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sCloneNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result286__;
                                        if(node_179) { node_179 = come_decrement_ref_count2(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional287=charp_operator_equals(buf,"dupe"),                                        _if_conditional287) {
                                            node_181=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=expression_v13(info))));
                                            if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1770, "struct sNode");
                                            _inf_obj_value15=come_increment_ref_count(((struct sDupeNode*)(right_value424=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value423=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1770, "sDupeNode")))),(struct sNode*)come_increment_ref_count(node_181),info))));
                                            _inf_value15->_protocol_obj=_inf_obj_value15;
                                            _inf_value15->finalize=(void*)sDupeNode_finalize;
                                            _inf_value15->clone=(void*)sDupeNode_clone;
                                            _inf_value15->compile=(void*)sDupeNode_compile;
                                            _inf_value15->sline=(void*)sDupeNode_sline;
                                            _inf_value15->sname=(void*)sDupeNode_sname;
                                            _inf_value15->terminated=(void*)sDupeNode_terminated;
                                            _inf_value15->kind=(void*)sDupeNode_kind;
                                            __result289__ = __result_obj__ = ((struct sNode*)(right_value428=_inf_value15));
                                            if(node_181) { node_181 = come_decrement_ref_count2(node_181, ((struct sNode*)node_181)->finalize, ((struct sNode*)node_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sDupeNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sDupeNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value428) { right_value428 = come_decrement_ref_count2(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result289__;
                                            if(node_181) { node_181 = come_decrement_ref_count2(node_181, ((struct sNode*)node_181)->finalize, ((struct sNode*)node_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional294=charp_operator_equals(buf,"dummy_heap"),                                            _if_conditional294) {
                                                node_183=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value429=expression_v13(info))));
                                                if(right_value429) { right_value429 = come_decrement_ref_count2(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1775, "struct sNode");
                                                _inf_obj_value16=come_increment_ref_count(((struct sDummyHeapNode*)(right_value431=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value430=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1775, "sDummyHeapNode")))),(struct sNode*)come_increment_ref_count(node_183),info))));
                                                _inf_value16->_protocol_obj=_inf_obj_value16;
                                                _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value16->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value16->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value16->sline=(void*)sDummyHeapNode_sline;
                                                _inf_value16->sname=(void*)sDummyHeapNode_sname;
                                                _inf_value16->terminated=(void*)sDummyHeapNode_terminated;
                                                _inf_value16->kind=(void*)sDummyHeapNode_kind;
                                                __result292__ = __result_obj__ = ((struct sNode*)(right_value435=_inf_value16));
                                                if(node_183) { node_183 = come_decrement_ref_count2(node_183, ((struct sNode*)node_183)->finalize, ((struct sNode*)node_183)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sDummyHeapNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(sDummyHeapNode_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result292__;
                                                if(node_183) { node_183 = come_decrement_ref_count2(node_183, ((struct sNode*)node_183)->finalize, ((struct sNode*)node_183)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional301=charp_operator_equals(buf,"gc_inc")&&*info->p==40,                                                _if_conditional301) {
                                                    info->p++;
                                                    skip_spaces_and_lf(info);
                                                    node_185=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=expression_v13(info))));
                                                    if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    expected_next_character(41,info);
                                                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1785, "struct sNode");
                                                    _inf_obj_value17=come_increment_ref_count(((struct sGCIncNode*)(right_value438=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value437=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1785, "sGCIncNode")))),(struct sNode*)come_increment_ref_count(node_185),info))));
                                                    _inf_value17->_protocol_obj=_inf_obj_value17;
                                                    _inf_value17->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value17->clone=(void*)sGCIncNode_clone;
                                                    _inf_value17->compile=(void*)sGCIncNode_compile;
                                                    _inf_value17->sline=(void*)sGCIncNode_sline;
                                                    _inf_value17->sname=(void*)sGCIncNode_sname;
                                                    _inf_value17->terminated=(void*)sGCIncNode_terminated;
                                                    _inf_value17->kind=(void*)sGCIncNode_kind;
                                                    __result295__ = __result_obj__ = ((struct sNode*)(right_value442=_inf_value17));
                                                    if(node_185) { node_185 = come_decrement_ref_count2(node_185, ((struct sNode*)node_185)->finalize, ((struct sNode*)node_185)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer2(sGCIncNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sGCIncNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result295__;
                                                    if(node_185) { node_185 = come_decrement_ref_count2(node_185, ((struct sNode*)node_185)->finalize, ((struct sNode*)node_185)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(_if_conditional308=charp_operator_equals(buf,"gc_dec")&&*info->p==40,                                                    _if_conditional308) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                        node_187=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=expression_v13(info))));
                                                        if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        expected_next_character(41,info);
                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1795, "struct sNode");
                                                        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNode*)(right_value445=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value444=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1795, "sGCDecNode")))),(struct sNode*)come_increment_ref_count(node_187),info))));
                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                        _inf_value18->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value18->clone=(void*)sGCDecNode_clone;
                                                        _inf_value18->compile=(void*)sGCDecNode_compile;
                                                        _inf_value18->sline=(void*)sGCDecNode_sline;
                                                        _inf_value18->sname=(void*)sGCDecNode_sname;
                                                        _inf_value18->terminated=(void*)sGCDecNode_terminated;
                                                        _inf_value18->kind=(void*)sGCDecNode_kind;
                                                        __result298__ = __result_obj__ = ((struct sNode*)(right_value449=_inf_value18));
                                                        if(node_187) { node_187 = come_decrement_ref_count2(node_187, ((struct sNode*)node_187)->finalize, ((struct sNode*)node_187)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer2(sGCDecNode_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sGCDecNode_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value449) { right_value449 = come_decrement_ref_count2(right_value449, ((struct sNode*)right_value449)->finalize, ((struct sNode*)right_value449)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result298__;
                                                        if(node_187) { node_187 = come_decrement_ref_count2(node_187, ((struct sNode*)node_187)->finalize, ((struct sNode*)node_187)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(_if_conditional315=charp_operator_equals(buf,"isheap")&&*info->p==40,                                                        _if_conditional315) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value450=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                            param_type_189=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                            param_name_190=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                            err_191=multiple_assign_var5->v3;
                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional316=!err_191,                                                            _if_conditional316) {
                                                                err_msg(info,"parse_type failed");
                                                                exit(2);
                                                            }
                                                            type2_192=(struct sType*)come_increment_ref_count(((struct sType*)(right_value451=solve_generics(param_type_189,info->generics_type,info))));
                                                            come_call_finalizer2(sType_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            expected_next_character(41,info);
                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1811, "struct sNode");
                                                            _inf_obj_value19=come_increment_ref_count(((struct sIsHeap*)(right_value453=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value452=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1811, "sIsHeap")))),(struct sType*)come_increment_ref_count(type2_192),info))));
                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                            _inf_value19->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value19->clone=(void*)sIsHeap_clone;
                                                            _inf_value19->compile=(void*)sIsHeap_compile;
                                                            _inf_value19->sline=(void*)sIsHeap_sline;
                                                            _inf_value19->sname=(void*)sIsHeap_sname;
                                                            _inf_value19->terminated=(void*)sIsHeap_terminated;
                                                            _inf_value19->kind=(void*)sIsHeap_kind;
                                                            __result301__ = __result_obj__ = ((struct sNode*)(right_value457=_inf_value19));
                                                            come_call_finalizer2(sType_finalize,param_type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            param_name_190 = come_decrement_ref_count2(param_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,type2_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sIsHeap_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(sIsHeap_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value457) { right_value457 = come_decrement_ref_count2(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result301__;
                                                            come_call_finalizer2(sType_finalize,param_type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            param_name_190 = come_decrement_ref_count2(param_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,type2_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            if(_if_conditional323=charp_operator_equals(buf,"using"),                                                            _if_conditional323) {
                                                                if(_if_conditional324=strmemcmp(info->p,"comelang"),                                                                _if_conditional324) {
                                                                    info->p+=strlen("comelang");
                                                                    skip_spaces_and_lf(info);
                                                                    gComeC=(_Bool)0;
                                                                    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1820, "struct sNode");
                                                                    _inf_obj_value20=come_increment_ref_count(((struct sNullNodeX*)(right_value459=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value458=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1820, "sNullNodeX")))),info))));
                                                                    _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                    _inf_value20->finalize=(void*)sNullNodeX_finalize;
                                                                    _inf_value20->clone=(void*)sNullNodeX_clone;
                                                                    _inf_value20->compile=(void*)sNullNodeX_compile;
                                                                    _inf_value20->sline=(void*)sNullNodeX_sline;
                                                                    _inf_value20->sname=(void*)sNullNodeX_sname;
                                                                    _inf_value20->terminated=(void*)sNullNodeX_terminated;
                                                                    _inf_value20->kind=(void*)sNullNodeX_kind;
                                                                    __result304__ = __result_obj__ = ((struct sNode*)(right_value462=_inf_value20));
                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    return __result304__;
                                                                }
                                                                else {
                                                                    if(_if_conditional329=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),                                                                    _if_conditional329) {
                                                                        info->p+=strlen("c");
                                                                        skip_spaces_and_lf(info);
                                                                        gComeC=(_Bool)1;
                                                                        if(_if_conditional330=*info->p==123,                                                                        _if_conditional330) {
                                                                            node_195=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value463=parse_normal_block(info))));
                                                                            if(right_value463) { right_value463 = come_decrement_ref_count2(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            gComeC=(_Bool)0;
                                                                            __result305__ = __result_obj__ = node_195;
                                                                            if(node_195) { node_195 = come_decrement_ref_count2(node_195, ((struct sNode*)node_195)->finalize, ((struct sNode*)node_195)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                            return __result305__;
                                                                            if(node_195) { node_195 = come_decrement_ref_count2(node_195, ((struct sNode*)node_195)->finalize, ((struct sNode*)node_195)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                        else {
                                                                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1836, "struct sNode");
                                                                            _inf_obj_value21=come_increment_ref_count(((struct sNullNodeX*)(right_value465=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value464=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1836, "sNullNodeX")))),info))));
                                                                            _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                            _inf_value21->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value21->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value21->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value21->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value21->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value21->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value21->kind=(void*)sNullNodeX_kind;
                                                                            __result308__ = __result_obj__ = ((struct sNode*)(right_value468=_inf_value21));
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value468) { right_value468 = come_decrement_ref_count2(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result308__;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional335=strmemcmp(info->p,"gc"),                                                                        _if_conditional335) {
                                                                            info->p+=strlen("gc");
                                                                            skip_spaces_and_lf(info);
                                                                            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1843, "struct sNode");
                                                                            _inf_obj_value22=come_increment_ref_count(((struct sNullNodeX*)(right_value470=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value469=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1843, "sNullNodeX")))),info))));
                                                                            _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                            _inf_value22->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value22->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value22->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value22->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value22->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value22->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value22->kind=(void*)sNullNodeX_kind;
                                                                            __result311__ = __result_obj__ = ((struct sNode*)(right_value473=_inf_value22));
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value473) { right_value473 = come_decrement_ref_count2(right_value473, ((struct sNode*)right_value473)->finalize, ((struct sNode*)right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result311__;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional340=strmemcmp(info->p,"no-gc"),                                                                            _if_conditional340) {
                                                                                info->p+=strlen("no-gc");
                                                                                skip_spaces_and_lf(info);
                                                                                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1850, "struct sNode");
                                                                                _inf_obj_value23=come_increment_ref_count(((struct sNullNodeX*)(right_value475=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value474=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1850, "sNullNodeX")))),info))));
                                                                                _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                _inf_value23->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value23->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value23->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value23->sline=(void*)sNullNodeX_sline;
                                                                                _inf_value23->sname=(void*)sNullNodeX_sname;
                                                                                _inf_value23->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value23->kind=(void*)sNullNodeX_kind;
                                                                                __result314__ = __result_obj__ = ((struct sNode*)(right_value478=_inf_value23));
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result314__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional345=strmemcmp(info->p,"unsafe"),                                                                                _if_conditional345) {
                                                                                    info->p+=strlen("unsafe");
                                                                                    skip_spaces_and_lf(info);
                                                                                    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1856, "struct sNode");
                                                                                    _inf_obj_value24=come_increment_ref_count(((struct sNullNodeX*)(right_value480=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value479=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1856, "sNullNodeX")))),info))));
                                                                                    _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                    _inf_value24->finalize=(void*)sNullNodeX_finalize;
                                                                                    _inf_value24->clone=(void*)sNullNodeX_clone;
                                                                                    _inf_value24->compile=(void*)sNullNodeX_compile;
                                                                                    _inf_value24->sline=(void*)sNullNodeX_sline;
                                                                                    _inf_value24->sname=(void*)sNullNodeX_sname;
                                                                                    _inf_value24->terminated=(void*)sNullNodeX_terminated;
                                                                                    _inf_value24->kind=(void*)sNullNodeX_kind;
                                                                                    __result317__ = __result_obj__ = ((struct sNode*)(right_value483=_inf_value24));
                                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value483) { right_value483 = come_decrement_ref_count2(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result317__;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional350=strmemcmp(info->p,"no-null-check"),                                                                                    _if_conditional350) {
                                                                                        info->p+=strlen("no-null-check");
                                                                                        skip_spaces_and_lf(info);
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1862, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sNullNodeX*)(right_value485=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value484=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1862, "sNullNodeX")))),info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sNullNodeX_finalize;
                                                                                        _inf_value25->clone=(void*)sNullNodeX_clone;
                                                                                        _inf_value25->compile=(void*)sNullNodeX_compile;
                                                                                        _inf_value25->sline=(void*)sNullNodeX_sline;
                                                                                        _inf_value25->sname=(void*)sNullNodeX_sname;
                                                                                        _inf_value25->terminated=(void*)sNullNodeX_terminated;
                                                                                        _inf_value25->kind=(void*)sNullNodeX_kind;
                                                                                        __result320__ = __result_obj__ = ((struct sNode*)(right_value488=_inf_value25));
                                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value488) { right_value488 = come_decrement_ref_count2(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result320__;
                                                                                    }
                                                                                    else {
                                                                                        err_msg(info,"invalid using");
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                if(_if_conditional355=charp_operator_equals(buf,"sizeof"),                                                                _if_conditional355) {
                                                                    expected_next_character(40,info);
                                                                    is_type_name_flag_201=(_Bool)0;
                                                                    {
                                                                        p_202=info->p;
                                                                        sline_203=info->sline;
                                                                        if(_if_conditional356=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional356) {
                                                                            word_204=(char*)come_increment_ref_count(((char*)(right_value489=parse_word(info))));
                                                                            right_value489 = come_decrement_ref_count2(right_value489, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional357=is_type_name(word_204,info),                                                                            _if_conditional357) {
                                                                                is_type_name_flag_201=(_Bool)1;
                                                                            }
                                                                            word_204 = come_decrement_ref_count2(word_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        info->p=p_202;
                                                                        info->sline=sline_203;
                                                                    }
                                                                    if(is_type_name_flag_201) {
                                                                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value490=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                        type_205=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                        name_206=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                        err_207=multiple_assign_var6->v3;
                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional359=!err_207,                                                                        _if_conditional359) {
                                                                            err_msg(info,"parse type");
                                                                            exit(2);
                                                                        }
                                                                        expected_next_character(41,info);
                                                                        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1899, "struct sNode");
                                                                        _inf_obj_value26=come_increment_ref_count(((struct sSizeOfNode*)(right_value492=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value491=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1899, "sSizeOfNode")))),(struct sType*)come_increment_ref_count(type_205),info))));
                                                                        _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                        _inf_value26->finalize=(void*)sSizeOfNode_finalize;
                                                                        _inf_value26->clone=(void*)sSizeOfNode_clone;
                                                                        _inf_value26->compile=(void*)sSizeOfNode_compile;
                                                                        _inf_value26->sline=(void*)sSizeOfNode_sline;
                                                                        _inf_value26->sname=(void*)sSizeOfNode_sname;
                                                                        _inf_value26->terminated=(void*)sSizeOfNode_terminated;
                                                                        _inf_value26->kind=(void*)sSizeOfNode_kind;
                                                                        __result323__ = __result_obj__ = ((struct sNode*)(right_value496=_inf_value26));
                                                                        come_call_finalizer2(sType_finalize,type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        come_call_finalizer2(sSizeOfNode_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sSizeOfNode_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value496) { right_value496 = come_decrement_ref_count2(right_value496, ((struct sNode*)right_value496)->finalize, ((struct sNode*)right_value496)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result323__;
                                                                        come_call_finalizer2(sType_finalize,type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    else {
                                                                        exp_209=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value497=expression_v13(info))));
                                                                        if(right_value497) { right_value497 = come_decrement_ref_count2(right_value497, ((struct sNode*)right_value497)->finalize, ((struct sNode*)right_value497)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        expected_next_character(41,info);
                                                                        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1906, "struct sNode");
                                                                        _inf_obj_value27=come_increment_ref_count(((struct sSizeOfExpNode*)(right_value499=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value498=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1906, "sSizeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_209),info))));
                                                                        _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                        _inf_value27->finalize=(void*)sSizeOfExpNode_finalize;
                                                                        _inf_value27->clone=(void*)sSizeOfExpNode_clone;
                                                                        _inf_value27->compile=(void*)sSizeOfExpNode_compile;
                                                                        _inf_value27->sline=(void*)sSizeOfExpNode_sline;
                                                                        _inf_value27->sname=(void*)sSizeOfExpNode_sname;
                                                                        _inf_value27->terminated=(void*)sSizeOfExpNode_terminated;
                                                                        _inf_value27->kind=(void*)sSizeOfExpNode_kind;
                                                                        __result326__ = __result_obj__ = ((struct sNode*)(right_value503=_inf_value27));
                                                                        if(exp_209) { exp_209 = come_decrement_ref_count2(exp_209, ((struct sNode*)exp_209)->finalize, ((struct sNode*)exp_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        come_call_finalizer2(sSizeOfExpNode_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sSizeOfExpNode_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value503) { right_value503 = come_decrement_ref_count2(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result326__;
                                                                        if(exp_209) { exp_209 = come_decrement_ref_count2(exp_209, ((struct sNode*)exp_209)->finalize, ((struct sNode*)exp_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional372=charp_operator_equals(buf,"typeof"),                                                                    _if_conditional372) {
                                                                        expected_next_character(40,info);
                                                                        is_type_name_flag_211=(_Bool)0;
                                                                        {
                                                                            p_212=info->p;
                                                                            sline_213=info->sline;
                                                                            if(_if_conditional373=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional373) {
                                                                                word_214=(char*)come_increment_ref_count(((char*)(right_value504=parse_word(info))));
                                                                                right_value504 = come_decrement_ref_count2(right_value504, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional374=is_type_name(word_214,info),                                                                                _if_conditional374) {
                                                                                    is_type_name_flag_211=(_Bool)1;
                                                                                }
                                                                                word_214 = come_decrement_ref_count2(word_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            info->p=p_212;
                                                                            info->sline=sline_213;
                                                                        }
                                                                        if(is_type_name_flag_211) {
                                                                            multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value505=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                            type_215=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                            name_216=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                            err_217=multiple_assign_var7->v3;
                                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional376=!err_217,                                                                            _if_conditional376) {
                                                                                err_msg(info,"parse type");
                                                                                exit(2);
                                                                            }
                                                                            expected_next_character(41,info);
                                                                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1939, "struct sNode");
                                                                            _inf_obj_value28=come_increment_ref_count(((struct sTypeOfNode*)(right_value507=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value506=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1939, "sTypeOfNode")))),(struct sType*)come_increment_ref_count(type_215),info))));
                                                                            _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                            _inf_value28->finalize=(void*)sTypeOfNode_finalize;
                                                                            _inf_value28->clone=(void*)sTypeOfNode_clone;
                                                                            _inf_value28->compile=(void*)sTypeOfNode_compile;
                                                                            _inf_value28->sline=(void*)sTypeOfNode_sline;
                                                                            _inf_value28->sname=(void*)sTypeOfNode_sname;
                                                                            _inf_value28->terminated=(void*)sTypeOfNode_terminated;
                                                                            _inf_value28->kind=(void*)sTypeOfNode_kind;
                                                                            __result329__ = __result_obj__ = ((struct sNode*)(right_value511=_inf_value28));
                                                                            come_call_finalizer2(sType_finalize,type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            name_216 = come_decrement_ref_count2(name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer2(sTypeOfNode_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sTypeOfNode_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result329__;
                                                                            come_call_finalizer2(sType_finalize,type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            name_216 = come_decrement_ref_count2(name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            exp_219=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value512=expression_v13(info))));
                                                                            if(right_value512) { right_value512 = come_decrement_ref_count2(right_value512, ((struct sNode*)right_value512)->finalize, ((struct sNode*)right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            expected_next_character(41,info);
                                                                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1946, "struct sNode");
                                                                            _inf_obj_value29=come_increment_ref_count(((struct sTypeOfExpNode*)(right_value514=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value513=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1946, "sTypeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_219),info))));
                                                                            _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                            _inf_value29->finalize=(void*)sTypeOfExpNode_finalize;
                                                                            _inf_value29->clone=(void*)sTypeOfExpNode_clone;
                                                                            _inf_value29->compile=(void*)sTypeOfExpNode_compile;
                                                                            _inf_value29->sline=(void*)sTypeOfExpNode_sline;
                                                                            _inf_value29->sname=(void*)sTypeOfExpNode_sname;
                                                                            _inf_value29->terminated=(void*)sTypeOfExpNode_terminated;
                                                                            _inf_value29->kind=(void*)sTypeOfExpNode_kind;
                                                                            __result332__ = __result_obj__ = ((struct sNode*)(right_value518=_inf_value29));
                                                                            if(exp_219) { exp_219 = come_decrement_ref_count2(exp_219, ((struct sNode*)exp_219)->finalize, ((struct sNode*)exp_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            come_call_finalizer2(sTypeOfExpNode_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sTypeOfExpNode_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value518) { right_value518 = come_decrement_ref_count2(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result332__;
                                                                            if(exp_219) { exp_219 = come_decrement_ref_count2(exp_219, ((struct sNode*)exp_219)->finalize, ((struct sNode*)exp_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional389=charp_operator_equals(buf,"_Alignof"),                                                                        _if_conditional389) {
                                                                            expected_next_character(40,info);
                                                                            is_type_name_flag_221=(_Bool)0;
                                                                            {
                                                                                p_222=info->p;
                                                                                sline_223=info->sline;
                                                                                if(_if_conditional390=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional390) {
                                                                                    word_224=(char*)come_increment_ref_count(((char*)(right_value519=parse_word(info))));
                                                                                    right_value519 = come_decrement_ref_count2(right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional391=is_type_name(word_224,info),                                                                                    _if_conditional391) {
                                                                                        is_type_name_flag_221=(_Bool)1;
                                                                                    }
                                                                                    word_224 = come_decrement_ref_count2(word_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                info->p=p_222;
                                                                                info->sline=sline_223;
                                                                            }
                                                                            if(is_type_name_flag_221) {
                                                                                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value520=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                type_225=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                name_226=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                err_227=multiple_assign_var8->v3;
                                                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional393=!err_227,                                                                                _if_conditional393) {
                                                                                    err_msg(info,"parse type");
                                                                                    exit(2);
                                                                                }
                                                                                expected_next_character(41,info);
                                                                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1990, "struct sNode");
                                                                                _inf_obj_value30=come_increment_ref_count(((struct sAlignOfNode*)(right_value522=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value521=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1990, "sAlignOfNode")))),(struct sType*)come_increment_ref_count(type_225),info))));
                                                                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                _inf_value30->finalize=(void*)sAlignOfNode_finalize;
                                                                                _inf_value30->clone=(void*)sAlignOfNode_clone;
                                                                                _inf_value30->compile=(void*)sAlignOfNode_compile;
                                                                                _inf_value30->sline=(void*)sAlignOfNode_sline;
                                                                                _inf_value30->sname=(void*)sAlignOfNode_sname;
                                                                                _inf_value30->terminated=(void*)sAlignOfNode_terminated;
                                                                                _inf_value30->kind=(void*)sAlignOfNode_kind;
                                                                                __result335__ = __result_obj__ = ((struct sNode*)(right_value526=_inf_value30));
                                                                                come_call_finalizer2(sType_finalize,type_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                name_226 = come_decrement_ref_count2(name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer2(sAlignOfNode_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sAlignOfNode_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value526) { right_value526 = come_decrement_ref_count2(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result335__;
                                                                                come_call_finalizer2(sType_finalize,type_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                name_226 = come_decrement_ref_count2(name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                exp_229=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value527=expression_v13(info))));
                                                                                if(right_value527) { right_value527 = come_decrement_ref_count2(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                expected_next_character(41,info);
                                                                                _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1997, "struct sNode");
                                                                                _inf_obj_value31=come_increment_ref_count(((struct sAlignOfExpNode*)(right_value529=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value528=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1997, "sAlignOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_229),info))));
                                                                                _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                _inf_value31->finalize=(void*)sAlignOfExpNode_finalize;
                                                                                _inf_value31->clone=(void*)sAlignOfExpNode_clone;
                                                                                _inf_value31->compile=(void*)sAlignOfExpNode_compile;
                                                                                _inf_value31->sline=(void*)sAlignOfExpNode_sline;
                                                                                _inf_value31->sname=(void*)sAlignOfExpNode_sname;
                                                                                _inf_value31->terminated=(void*)sAlignOfExpNode_terminated;
                                                                                _inf_value31->kind=(void*)sAlignOfExpNode_kind;
                                                                                __result338__ = __result_obj__ = ((struct sNode*)(right_value533=_inf_value31));
                                                                                if(exp_229) { exp_229 = come_decrement_ref_count2(exp_229, ((struct sNode*)exp_229)->finalize, ((struct sNode*)exp_229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                come_call_finalizer2(sAlignOfExpNode_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sAlignOfExpNode_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value533) { right_value533 = come_decrement_ref_count2(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result338__;
                                                                                if(exp_229) { exp_229 = come_decrement_ref_count2(exp_229, ((struct sNode*)exp_229)->finalize, ((struct sNode*)exp_229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional406=charp_operator_equals(buf,"__alignof__"),                                                                            _if_conditional406) {
                                                                                expected_next_character(40,info);
                                                                                is_type_name_flag_231=(_Bool)0;
                                                                                {
                                                                                    p_232=info->p;
                                                                                    sline_233=info->sline;
                                                                                    if(_if_conditional407=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional407) {
                                                                                        word_234=(char*)come_increment_ref_count(((char*)(right_value534=parse_word(info))));
                                                                                        right_value534 = come_decrement_ref_count2(right_value534, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional408=is_type_name(word_234,info),                                                                                        _if_conditional408) {
                                                                                            is_type_name_flag_231=(_Bool)1;
                                                                                        }
                                                                                        word_234 = come_decrement_ref_count2(word_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    info->p=p_232;
                                                                                    info->sline=sline_233;
                                                                                }
                                                                                if(is_type_name_flag_231) {
                                                                                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value535=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                    type_235=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                    name_236=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                    err_237=multiple_assign_var9->v3;
                                                                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional410=!err_237,                                                                                    _if_conditional410) {
                                                                                        err_msg(info,"parse type");
                                                                                        exit(2);
                                                                                    }
                                                                                    expected_next_character(41,info);
                                                                                    _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2030, "struct sNode");
                                                                                    _inf_obj_value32=come_increment_ref_count(((struct sAlignOfNode2*)(right_value537=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value536=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 2030, "sAlignOfNode2")))),(struct sType*)come_increment_ref_count(type_235),info))));
                                                                                    _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                    _inf_value32->finalize=(void*)sAlignOfNode2_finalize;
                                                                                    _inf_value32->clone=(void*)sAlignOfNode2_clone;
                                                                                    _inf_value32->compile=(void*)sAlignOfNode2_compile;
                                                                                    _inf_value32->sline=(void*)sAlignOfNode2_sline;
                                                                                    _inf_value32->sname=(void*)sAlignOfNode2_sname;
                                                                                    _inf_value32->terminated=(void*)sAlignOfNode2_terminated;
                                                                                    _inf_value32->kind=(void*)sAlignOfNode2_kind;
                                                                                    __result341__ = __result_obj__ = ((struct sNode*)(right_value541=_inf_value32));
                                                                                    come_call_finalizer2(sType_finalize,type_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    name_236 = come_decrement_ref_count2(name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer2(sAlignOfNode2_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sAlignOfNode2_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value541) { right_value541 = come_decrement_ref_count2(right_value541, ((struct sNode*)right_value541)->finalize, ((struct sNode*)right_value541)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result341__;
                                                                                    come_call_finalizer2(sType_finalize,type_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    name_236 = come_decrement_ref_count2(name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    exp_239=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value542=expression_v13(info))));
                                                                                    if(right_value542) { right_value542 = come_decrement_ref_count2(right_value542, ((struct sNode*)right_value542)->finalize, ((struct sNode*)right_value542)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    expected_next_character(41,info);
                                                                                    _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2037, "struct sNode");
                                                                                    _inf_obj_value33=come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value544=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value543=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 2037, "sAlignOfExpNode2")))),(struct sNode*)come_increment_ref_count(exp_239),info))));
                                                                                    _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                    _inf_value33->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                    _inf_value33->clone=(void*)sAlignOfExpNode2_clone;
                                                                                    _inf_value33->compile=(void*)sAlignOfExpNode2_compile;
                                                                                    _inf_value33->sline=(void*)sAlignOfExpNode2_sline;
                                                                                    _inf_value33->sname=(void*)sAlignOfExpNode2_sname;
                                                                                    _inf_value33->terminated=(void*)sAlignOfExpNode2_terminated;
                                                                                    _inf_value33->kind=(void*)sAlignOfExpNode2_kind;
                                                                                    __result344__ = __result_obj__ = ((struct sNode*)(right_value548=_inf_value33));
                                                                                    if(exp_239) { exp_239 = come_decrement_ref_count2(exp_239, ((struct sNode*)exp_239)->finalize, ((struct sNode*)exp_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    come_call_finalizer2(sAlignOfExpNode2_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sAlignOfExpNode2_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value548) { right_value548 = come_decrement_ref_count2(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result344__;
                                                                                    if(exp_239) { exp_239 = come_decrement_ref_count2(exp_239, ((struct sNode*)exp_239)->finalize, ((struct sNode*)exp_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                            }
                                                                            else {
                                                                                if(_if_conditional423=charp_operator_equals(buf,"_Alignas"),                                                                                _if_conditional423) {
                                                                                    expected_next_character(40,info);
                                                                                    is_type_name_flag_241=(_Bool)0;
                                                                                    {
                                                                                        p_242=info->p;
                                                                                        sline_243=info->sline;
                                                                                        if(_if_conditional424=xisalpha(*info->p)||*info->p==95,                                                                                        _if_conditional424) {
                                                                                            word_244=(char*)come_increment_ref_count(((char*)(right_value549=parse_word(info))));
                                                                                            right_value549 = come_decrement_ref_count2(right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional425=is_type_name(word_244,info),                                                                                            _if_conditional425) {
                                                                                                is_type_name_flag_241=(_Bool)1;
                                                                                            }
                                                                                            word_244 = come_decrement_ref_count2(word_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        info->p=p_242;
                                                                                        info->sline=sline_243;
                                                                                    }
                                                                                    if(is_type_name_flag_241) {
                                                                                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value550=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_245=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                                                                                        name_246=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                                                                                        err_247=multiple_assign_var10->v3;
                                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional427=!err_247,                                                                                        _if_conditional427) {
                                                                                            err_msg(info,"parse type");
                                                                                            exit(2);
                                                                                        }
                                                                                        expected_next_character(41,info);
                                                                                        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2070, "struct sNode");
                                                                                        _inf_obj_value34=come_increment_ref_count(((struct sAlignAsNode*)(right_value552=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value551=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 2070, "sAlignAsNode")))),(struct sType*)come_increment_ref_count(type_245),info))));
                                                                                        _inf_value34->_protocol_obj=_inf_obj_value34;
                                                                                        _inf_value34->finalize=(void*)sAlignAsNode_finalize;
                                                                                        _inf_value34->clone=(void*)sAlignAsNode_clone;
                                                                                        _inf_value34->compile=(void*)sAlignAsNode_compile;
                                                                                        _inf_value34->sline=(void*)sAlignAsNode_sline;
                                                                                        _inf_value34->sname=(void*)sAlignAsNode_sname;
                                                                                        _inf_value34->terminated=(void*)sAlignAsNode_terminated;
                                                                                        _inf_value34->kind=(void*)sAlignAsNode_kind;
                                                                                        __result347__ = __result_obj__ = ((struct sNode*)(right_value556=_inf_value34));
                                                                                        come_call_finalizer2(sType_finalize,type_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_246 = come_decrement_ref_count2(name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sAlignAsNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sAlignAsNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value556) { right_value556 = come_decrement_ref_count2(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result347__;
                                                                                        come_call_finalizer2(sType_finalize,type_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_246 = come_decrement_ref_count2(name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        exp_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value557=expression_v13(info))));
                                                                                        if(right_value557) { right_value557 = come_decrement_ref_count2(right_value557, ((struct sNode*)right_value557)->finalize, ((struct sNode*)right_value557)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        expected_next_character(41,info);
                                                                                        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2077, "struct sNode");
                                                                                        _inf_obj_value35=come_increment_ref_count(((struct sAlignAsExpNode*)(right_value559=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value558=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 2077, "sAlignAsExpNode")))),(struct sNode*)come_increment_ref_count(exp_249),info))));
                                                                                        _inf_value35->_protocol_obj=_inf_obj_value35;
                                                                                        _inf_value35->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                        _inf_value35->clone=(void*)sAlignAsExpNode_clone;
                                                                                        _inf_value35->compile=(void*)sAlignAsExpNode_compile;
                                                                                        _inf_value35->sline=(void*)sAlignAsExpNode_sline;
                                                                                        _inf_value35->sname=(void*)sAlignAsExpNode_sname;
                                                                                        _inf_value35->terminated=(void*)sAlignAsExpNode_terminated;
                                                                                        _inf_value35->kind=(void*)sAlignAsExpNode_kind;
                                                                                        __result350__ = __result_obj__ = ((struct sNode*)(right_value563=_inf_value35));
                                                                                        if(exp_249) { exp_249 = come_decrement_ref_count2(exp_249, ((struct sNode*)exp_249)->finalize, ((struct sNode*)exp_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer2(sAlignAsExpNode_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sAlignAsExpNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value563) { right_value563 = come_decrement_ref_count2(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result350__;
                                                                                        if(exp_249) { exp_249 = come_decrement_ref_count2(exp_249, ((struct sNode*)exp_249)->finalize, ((struct sNode*)exp_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result351__ = __result_obj__ = ((struct sNode*)(right_value564=string_node_v20(buf,head,head_sline,info)));
    if(right_value564) { right_value564 = come_decrement_ref_count2(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result351__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional210;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional210=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional210) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional211=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional211) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sNewNode_finalize(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional229;
_Bool _if_conditional230;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional229=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional229) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional230=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional230) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional231;
struct sNewNode* __result260__;
void* right_value366;
struct sNewNode* result_166;
_Bool _if_conditional232;
void* right_value367;
struct sType* __dec_obj144;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value368;
char* __dec_obj145;
struct sNewNode* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value366 = (void*)0;
memset(&result_166, 0, sizeof(struct sNewNode*));
right_value367 = (void*)0;
right_value368 = (void*)0;
                if(_if_conditional231=self==(void*)0,                _if_conditional231) {
                    __result260__ = __result_obj__ = (void*)0;
                    return __result260__;
                }
                result_166=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value366=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "sNewNode"))));
                come_call_finalizer2(sNewNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional232=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional232) {
                    __dec_obj144=result_166->type;
                    result_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value367=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional233=self!=((void*)0),                _if_conditional233) {
                    result_166->sline=self->sline;
                }
                if(_if_conditional234=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional234) {
                    __dec_obj145=result_166->sname;
                    result_166->sname=(char*)come_increment_ref_count(((char*)(right_value368=string_clone(self->sname))));
                    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result261__ = __result_obj__ = result_166;
                come_call_finalizer2(sNewNode_finalize,result_166, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result261__;
                come_call_finalizer2(sNewNode_finalize,result_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTrueNode_finalize(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional236;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional236=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional236) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional237;
struct sTrueNode* __result263__;
void* right_value372;
struct sTrueNode* result_167;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value373;
char* __dec_obj146;
struct sTrueNode* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
right_value372 = (void*)0;
memset(&result_167, 0, sizeof(struct sTrueNode*));
right_value373 = (void*)0;
                if(_if_conditional237=self==(void*)0,                _if_conditional237) {
                    __result263__ = __result_obj__ = (void*)0;
                    return __result263__;
                }
                result_167=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value372=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "sTrueNode"))));
                come_call_finalizer2(sTrueNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional238=self!=((void*)0),                _if_conditional238) {
                    result_167->sline=self->sline;
                }
                if(_if_conditional239=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional239) {
                    __dec_obj146=result_167->sname;
                    result_167->sname=(char*)come_increment_ref_count(((char*)(right_value373=string_clone(self->sname))));
                    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result264__ = __result_obj__ = result_167;
                come_call_finalizer2(sTrueNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result264__;
                come_call_finalizer2(sTrueNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFalseNode_finalize(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional241;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional241=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional241) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional242;
struct sFalseNode* __result266__;
void* right_value377;
struct sFalseNode* result_168;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value378;
char* __dec_obj147;
struct sFalseNode* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
right_value377 = (void*)0;
memset(&result_168, 0, sizeof(struct sFalseNode*));
right_value378 = (void*)0;
                    if(_if_conditional242=self==(void*)0,                    _if_conditional242) {
                        __result266__ = __result_obj__ = (void*)0;
                        return __result266__;
                    }
                    result_168=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value377=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "sFalseNode"))));
                    come_call_finalizer2(sFalseNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional243=self!=((void*)0),                    _if_conditional243) {
                        result_168->sline=self->sline;
                    }
                    if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional244) {
                        __dec_obj147=result_168->sname;
                        result_168->sname=(char*)come_increment_ref_count(((char*)(right_value378=string_clone(self->sname))));
                        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result267__ = __result_obj__ = result_168;
                    come_call_finalizer2(sFalseNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result267__;
                    come_call_finalizer2(sFalseNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional246;
_Bool _if_conditional247;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional246=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional246) {
                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional247=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional247) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional248;
struct sDeleteNode* __result269__;
void* right_value383;
struct sDeleteNode* result_170;
_Bool _if_conditional249;
void* right_value384;
struct sNode* __dec_obj148;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value385;
char* __dec_obj149;
struct sDeleteNode* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
right_value383 = (void*)0;
memset(&result_170, 0, sizeof(struct sDeleteNode*));
right_value384 = (void*)0;
right_value385 = (void*)0;
                        if(_if_conditional248=self==(void*)0,                        _if_conditional248) {
                            __result269__ = __result_obj__ = (void*)0;
                            return __result269__;
                        }
                        result_170=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value383=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "sDeleteNode"))));
                        come_call_finalizer2(sDeleteNode_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional249=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional249) {
                            __dec_obj148=result_170->node;
                            result_170->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=sNode_clone(self->node))));
                            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional250=self!=((void*)0),                        _if_conditional250) {
                            result_170->sline=self->sline;
                        }
                        if(_if_conditional251=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional251) {
                            __dec_obj149=result_170->sname;
                            result_170->sname=(char*)come_increment_ref_count(((char*)(right_value385=string_clone(self->sname))));
                            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result270__ = __result_obj__ = result_170;
                        come_call_finalizer2(sDeleteNode_finalize,result_170, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result270__;
                        come_call_finalizer2(sDeleteNode_finalize,result_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional253;
_Bool _if_conditional254;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional253=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional253) {
                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional254=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional254) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional255;
struct sForceDeleteNode* __result272__;
void* right_value390;
struct sForceDeleteNode* result_172;
_Bool _if_conditional256;
void* right_value391;
struct sNode* __dec_obj150;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value392;
char* __dec_obj151;
struct sForceDeleteNode* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
memset(&result_172, 0, sizeof(struct sForceDeleteNode*));
right_value391 = (void*)0;
right_value392 = (void*)0;
                            if(_if_conditional255=self==(void*)0,                            _if_conditional255) {
                                __result272__ = __result_obj__ = (void*)0;
                                return __result272__;
                            }
                            result_172=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value390=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "sForceDeleteNode"))));
                            come_call_finalizer2(sForceDeleteNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional256=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional256) {
                                __dec_obj150=result_172->node;
                                result_172->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=sNode_clone(self->node))));
                                if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional257=self!=((void*)0),                            _if_conditional257) {
                                result_172->sline=self->sline;
                            }
                            if(_if_conditional258=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional258) {
                                __dec_obj151=result_172->sname;
                                result_172->sname=(char*)come_increment_ref_count(((char*)(right_value392=string_clone(self->sname))));
                                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result273__ = __result_obj__ = result_172;
                            come_call_finalizer2(sForceDeleteNode_finalize,result_172, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result273__;
                            come_call_finalizer2(sForceDeleteNode_finalize,result_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional260;
_Bool _if_conditional261;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional260=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional260) {
                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional261=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional261) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional262;
struct sBorrowNode* __result275__;
void* right_value397;
struct sBorrowNode* result_174;
_Bool _if_conditional263;
void* right_value398;
struct sNode* __dec_obj152;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value399;
char* __dec_obj153;
struct sBorrowNode* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
right_value397 = (void*)0;
memset(&result_174, 0, sizeof(struct sBorrowNode*));
right_value398 = (void*)0;
right_value399 = (void*)0;
                                if(_if_conditional262=self==(void*)0,                                _if_conditional262) {
                                    __result275__ = __result_obj__ = (void*)0;
                                    return __result275__;
                                }
                                result_174=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value397=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "sBorrowNode"))));
                                come_call_finalizer2(sBorrowNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional263=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional263) {
                                    __dec_obj152=result_174->node;
                                    result_174->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(self->node))));
                                    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional264=self!=((void*)0),                                _if_conditional264) {
                                    result_174->sline=self->sline;
                                }
                                if(_if_conditional265=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional265) {
                                    __dec_obj153=result_174->sname;
                                    result_174->sname=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(self->sname))));
                                    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result276__ = __result_obj__ = result_174;
                                come_call_finalizer2(sBorrowNode_finalize,result_174, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result276__;
                                come_call_finalizer2(sBorrowNode_finalize,result_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional267=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional267) {
                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional268=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional268) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional269;
struct sDelegateNode* __result278__;
void* right_value404;
struct sDelegateNode* result_176;
_Bool _if_conditional270;
void* right_value405;
struct sNode* __dec_obj154;
_Bool _if_conditional271;
_Bool _if_conditional272;
void* right_value406;
char* __dec_obj155;
struct sDelegateNode* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
right_value404 = (void*)0;
memset(&result_176, 0, sizeof(struct sDelegateNode*));
right_value405 = (void*)0;
right_value406 = (void*)0;
                                    if(_if_conditional269=self==(void*)0,                                    _if_conditional269) {
                                        __result278__ = __result_obj__ = (void*)0;
                                        return __result278__;
                                    }
                                    result_176=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value404=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "sDelegateNode"))));
                                    come_call_finalizer2(sDelegateNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional270=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional270) {
                                        __dec_obj154=result_176->node;
                                        result_176->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=sNode_clone(self->node))));
                                        if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional271=self!=((void*)0),                                    _if_conditional271) {
                                        result_176->sline=self->sline;
                                    }
                                    if(_if_conditional272=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional272) {
                                        __dec_obj155=result_176->sname;
                                        result_176->sname=(char*)come_increment_ref_count(((char*)(right_value406=string_clone(self->sname))));
                                        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result279__ = __result_obj__ = result_176;
                                    come_call_finalizer2(sDelegateNode_finalize,result_176, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result279__;
                                    come_call_finalizer2(sDelegateNode_finalize,result_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sShareNode_finalize(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional274;
_Bool _if_conditional275;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional274=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional274) {
                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional275=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional275) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional276;
struct sShareNode* __result281__;
void* right_value411;
struct sShareNode* result_178;
_Bool _if_conditional277;
void* right_value412;
struct sNode* __dec_obj156;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value413;
char* __dec_obj157;
struct sShareNode* __result282__;
memset(&__result_obj__, 0, sizeof(void*));
right_value411 = (void*)0;
memset(&result_178, 0, sizeof(struct sShareNode*));
right_value412 = (void*)0;
right_value413 = (void*)0;
                                        if(_if_conditional276=self==(void*)0,                                        _if_conditional276) {
                                            __result281__ = __result_obj__ = (void*)0;
                                            return __result281__;
                                        }
                                        result_178=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value411=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "sShareNode"))));
                                        come_call_finalizer2(sShareNode_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional277=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional277) {
                                            __dec_obj156=result_178->node;
                                            result_178->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=sNode_clone(self->node))));
                                            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional278=self!=((void*)0),                                        _if_conditional278) {
                                            result_178->sline=self->sline;
                                        }
                                        if(_if_conditional279=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional279) {
                                            __dec_obj157=result_178->sname;
                                            result_178->sname=(char*)come_increment_ref_count(((char*)(right_value413=string_clone(self->sname))));
                                            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result282__ = __result_obj__ = result_178;
                                        come_call_finalizer2(sShareNode_finalize,result_178, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result282__;
                                        come_call_finalizer2(sShareNode_finalize,result_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCloneNode_finalize(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional281;
_Bool _if_conditional282;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional281=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional281) {
                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional282) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional283;
struct sCloneNode* __result284__;
void* right_value418;
struct sCloneNode* result_180;
_Bool _if_conditional284;
void* right_value419;
struct sNode* __dec_obj158;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value420;
char* __dec_obj159;
struct sCloneNode* __result285__;
memset(&__result_obj__, 0, sizeof(void*));
right_value418 = (void*)0;
memset(&result_180, 0, sizeof(struct sCloneNode*));
right_value419 = (void*)0;
right_value420 = (void*)0;
                                            if(_if_conditional283=self==(void*)0,                                            _if_conditional283) {
                                                __result284__ = __result_obj__ = (void*)0;
                                                return __result284__;
                                            }
                                            result_180=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value418=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "sCloneNode"))));
                                            come_call_finalizer2(sCloneNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional284=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional284) {
                                                __dec_obj158=result_180->node;
                                                result_180->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value419=sNode_clone(self->node))));
                                                if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional285=self!=((void*)0),                                            _if_conditional285) {
                                                result_180->sline=self->sline;
                                            }
                                            if(_if_conditional286=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional286) {
                                                __dec_obj159=result_180->sname;
                                                result_180->sname=(char*)come_increment_ref_count(((char*)(right_value420=string_clone(self->sname))));
                                                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result285__ = __result_obj__ = result_180;
                                            come_call_finalizer2(sCloneNode_finalize,result_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result285__;
                                            come_call_finalizer2(sCloneNode_finalize,result_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDupeNode_finalize(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional288;
_Bool _if_conditional289;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional288=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional288) {
                                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                if(_if_conditional289=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional289) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional290;
struct sDupeNode* __result287__;
void* right_value425;
struct sDupeNode* result_182;
_Bool _if_conditional291;
void* right_value426;
struct sNode* __dec_obj160;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value427;
char* __dec_obj161;
struct sDupeNode* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
right_value425 = (void*)0;
memset(&result_182, 0, sizeof(struct sDupeNode*));
right_value426 = (void*)0;
right_value427 = (void*)0;
                                                if(_if_conditional290=self==(void*)0,                                                _if_conditional290) {
                                                    __result287__ = __result_obj__ = (void*)0;
                                                    return __result287__;
                                                }
                                                result_182=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value425=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "sDupeNode"))));
                                                come_call_finalizer2(sDupeNode_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional291=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional291) {
                                                    __dec_obj160=result_182->node;
                                                    result_182->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=sNode_clone(self->node))));
                                                    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                if(_if_conditional292=self!=((void*)0),                                                _if_conditional292) {
                                                    result_182->sline=self->sline;
                                                }
                                                if(_if_conditional293=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional293) {
                                                    __dec_obj161=result_182->sname;
                                                    result_182->sname=(char*)come_increment_ref_count(((char*)(right_value427=string_clone(self->sname))));
                                                    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                __result288__ = __result_obj__ = result_182;
                                                come_call_finalizer2(sDupeNode_finalize,result_182, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result288__;
                                                come_call_finalizer2(sDupeNode_finalize,result_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional295;
_Bool _if_conditional296;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional295=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional295) {
                                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional296=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional296) {
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional297;
struct sDummyHeapNode* __result290__;
void* right_value432;
struct sDummyHeapNode* result_184;
_Bool _if_conditional298;
void* right_value433;
struct sNode* __dec_obj162;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value434;
char* __dec_obj163;
struct sDummyHeapNode* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
right_value432 = (void*)0;
memset(&result_184, 0, sizeof(struct sDummyHeapNode*));
right_value433 = (void*)0;
right_value434 = (void*)0;
                                                    if(_if_conditional297=self==(void*)0,                                                    _if_conditional297) {
                                                        __result290__ = __result_obj__ = (void*)0;
                                                        return __result290__;
                                                    }
                                                    result_184=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value432=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "sDummyHeapNode"))));
                                                    come_call_finalizer2(sDummyHeapNode_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional298=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional298) {
                                                        __dec_obj162=result_184->node;
                                                        result_184->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=sNode_clone(self->node))));
                                                        if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    if(_if_conditional299=self!=((void*)0),                                                    _if_conditional299) {
                                                        result_184->sline=self->sline;
                                                    }
                                                    if(_if_conditional300=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional300) {
                                                        __dec_obj163=result_184->sname;
                                                        result_184->sname=(char*)come_increment_ref_count(((char*)(right_value434=string_clone(self->sname))));
                                                        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    __result291__ = __result_obj__ = result_184;
                                                    come_call_finalizer2(sDummyHeapNode_finalize,result_184, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result291__;
                                                    come_call_finalizer2(sDummyHeapNode_finalize,result_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional302;
_Bool _if_conditional303;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional302=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional302) {
                                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional303=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional303) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional304;
struct sGCIncNode* __result293__;
void* right_value439;
struct sGCIncNode* result_186;
_Bool _if_conditional305;
void* right_value440;
struct sNode* __dec_obj164;
_Bool _if_conditional306;
_Bool _if_conditional307;
void* right_value441;
char* __dec_obj165;
struct sGCIncNode* __result294__;
memset(&__result_obj__, 0, sizeof(void*));
right_value439 = (void*)0;
memset(&result_186, 0, sizeof(struct sGCIncNode*));
right_value440 = (void*)0;
right_value441 = (void*)0;
                                                        if(_if_conditional304=self==(void*)0,                                                        _if_conditional304) {
                                                            __result293__ = __result_obj__ = (void*)0;
                                                            return __result293__;
                                                        }
                                                        result_186=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value439=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "sGCIncNode"))));
                                                        come_call_finalizer2(sGCIncNode_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional305=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional305) {
                                                            __dec_obj164=result_186->node;
                                                            result_186->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=sNode_clone(self->node))));
                                                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional306=self!=((void*)0),                                                        _if_conditional306) {
                                                            result_186->sline=self->sline;
                                                        }
                                                        if(_if_conditional307=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional307) {
                                                            __dec_obj165=result_186->sname;
                                                            result_186->sname=(char*)come_increment_ref_count(((char*)(right_value441=string_clone(self->sname))));
                                                            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        __result294__ = __result_obj__ = result_186;
                                                        come_call_finalizer2(sGCIncNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result294__;
                                                        come_call_finalizer2(sGCIncNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional309;
_Bool _if_conditional310;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional309=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional309) {
                                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional310=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional310) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional311;
struct sGCDecNode* __result296__;
void* right_value446;
struct sGCDecNode* result_188;
_Bool _if_conditional312;
void* right_value447;
struct sNode* __dec_obj166;
_Bool _if_conditional313;
_Bool _if_conditional314;
void* right_value448;
char* __dec_obj167;
struct sGCDecNode* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
right_value446 = (void*)0;
memset(&result_188, 0, sizeof(struct sGCDecNode*));
right_value447 = (void*)0;
right_value448 = (void*)0;
                                                            if(_if_conditional311=self==(void*)0,                                                            _if_conditional311) {
                                                                __result296__ = __result_obj__ = (void*)0;
                                                                return __result296__;
                                                            }
                                                            result_188=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value446=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "sGCDecNode"))));
                                                            come_call_finalizer2(sGCDecNode_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional312=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional312) {
                                                                __dec_obj166=result_188->node;
                                                                result_188->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=sNode_clone(self->node))));
                                                                if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional313=self!=((void*)0),                                                            _if_conditional313) {
                                                                result_188->sline=self->sline;
                                                            }
                                                            if(_if_conditional314=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional314) {
                                                                __dec_obj167=result_188->sname;
                                                                result_188->sname=(char*)come_increment_ref_count(((char*)(right_value448=string_clone(self->sname))));
                                                                __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result297__ = __result_obj__ = result_188;
                                                            come_call_finalizer2(sGCDecNode_finalize,result_188, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result297__;
                                                            come_call_finalizer2(sGCDecNode_finalize,result_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sIsHeap_finalize(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional317;
_Bool _if_conditional318;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional317=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional317) {
                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional318=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional318) {
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional319;
struct sIsHeap* __result299__;
void* right_value454;
struct sIsHeap* result_193;
_Bool _if_conditional320;
void* right_value455;
struct sType* __dec_obj168;
_Bool _if_conditional321;
_Bool _if_conditional322;
void* right_value456;
char* __dec_obj169;
struct sIsHeap* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
right_value454 = (void*)0;
memset(&result_193, 0, sizeof(struct sIsHeap*));
right_value455 = (void*)0;
right_value456 = (void*)0;
                                                                if(_if_conditional319=self==(void*)0,                                                                _if_conditional319) {
                                                                    __result299__ = __result_obj__ = (void*)0;
                                                                    return __result299__;
                                                                }
                                                                result_193=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value454=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "sIsHeap"))));
                                                                come_call_finalizer2(sIsHeap_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional320=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional320) {
                                                                    __dec_obj168=result_193->type;
                                                                    result_193->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value455=sType_clone(self->type))));
                                                                    come_call_finalizer2(sType_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(sType_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                }
                                                                if(_if_conditional321=self!=((void*)0),                                                                _if_conditional321) {
                                                                    result_193->sline=self->sline;
                                                                }
                                                                if(_if_conditional322=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional322) {
                                                                    __dec_obj169=result_193->sname;
                                                                    result_193->sname=(char*)come_increment_ref_count(((char*)(right_value456=string_clone(self->sname))));
                                                                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value456 = come_decrement_ref_count2(right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                __result300__ = __result_obj__ = result_193;
                                                                come_call_finalizer2(sIsHeap_finalize,result_193, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result300__;
                                                                come_call_finalizer2(sIsHeap_finalize,result_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional360;
_Bool _if_conditional361;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional360=self!=((void*)0)&&self->type!=((void*)0),                                                                            _if_conditional360) {
                                                                                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional361=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional361) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional362;
struct sSizeOfNode* __result321__;
void* right_value493;
struct sSizeOfNode* result_208;
_Bool _if_conditional363;
void* right_value494;
struct sType* __dec_obj176;
_Bool _if_conditional364;
_Bool _if_conditional365;
void* right_value495;
char* __dec_obj177;
struct sSizeOfNode* __result322__;
memset(&__result_obj__, 0, sizeof(void*));
right_value493 = (void*)0;
memset(&result_208, 0, sizeof(struct sSizeOfNode*));
right_value494 = (void*)0;
right_value495 = (void*)0;
                                                                            if(_if_conditional362=self==(void*)0,                                                                            _if_conditional362) {
                                                                                __result321__ = __result_obj__ = (void*)0;
                                                                                return __result321__;
                                                                            }
                                                                            result_208=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value493=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "sSizeOfNode"))));
                                                                            come_call_finalizer2(sSizeOfNode_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional363=self!=((void*)0)&&self->type!=((void*)0),                                                                            _if_conditional363) {
                                                                                __dec_obj176=result_208->type;
                                                                                result_208->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value494=sType_clone(self->type))));
                                                                                come_call_finalizer2(sType_finalize,__dec_obj176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer2(sType_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            if(_if_conditional364=self!=((void*)0),                                                                            _if_conditional364) {
                                                                                result_208->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional365=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional365) {
                                                                                __dec_obj177=result_208->sname;
                                                                                result_208->sname=(char*)come_increment_ref_count(((char*)(right_value495=string_clone(self->sname))));
                                                                                __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value495 = come_decrement_ref_count2(right_value495, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result322__ = __result_obj__ = result_208;
                                                                            come_call_finalizer2(sSizeOfNode_finalize,result_208, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result322__;
                                                                            come_call_finalizer2(sSizeOfNode_finalize,result_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional366;
_Bool _if_conditional367;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional366=self!=((void*)0)&&self->exp!=((void*)0),                                                                            _if_conditional366) {
                                                                                if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            if(_if_conditional367=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional367) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional368;
struct sSizeOfExpNode* __result324__;
void* right_value500;
struct sSizeOfExpNode* result_210;
_Bool _if_conditional369;
void* right_value501;
struct sNode* __dec_obj178;
_Bool _if_conditional370;
_Bool _if_conditional371;
void* right_value502;
char* __dec_obj179;
struct sSizeOfExpNode* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
right_value500 = (void*)0;
memset(&result_210, 0, sizeof(struct sSizeOfExpNode*));
right_value501 = (void*)0;
right_value502 = (void*)0;
                                                                            if(_if_conditional368=self==(void*)0,                                                                            _if_conditional368) {
                                                                                __result324__ = __result_obj__ = (void*)0;
                                                                                return __result324__;
                                                                            }
                                                                            result_210=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value500=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "sSizeOfExpNode"))));
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional369=self!=((void*)0)&&self->exp!=((void*)0),                                                                            _if_conditional369) {
                                                                                __dec_obj178=result_210->exp;
                                                                                result_210->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value501=sNode_clone(self->exp))));
                                                                                if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value501) { right_value501 = come_decrement_ref_count2(right_value501, ((struct sNode*)right_value501)->finalize, ((struct sNode*)right_value501)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            }
                                                                            if(_if_conditional370=self!=((void*)0),                                                                            _if_conditional370) {
                                                                                result_210->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional371=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional371) {
                                                                                __dec_obj179=result_210->sname;
                                                                                result_210->sname=(char*)come_increment_ref_count(((char*)(right_value502=string_clone(self->sname))));
                                                                                __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value502 = come_decrement_ref_count2(right_value502, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result325__ = __result_obj__ = result_210;
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,result_210, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result325__;
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,result_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional377;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional377=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional377) {
                                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional378) {
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional379;
struct sTypeOfNode* __result327__;
void* right_value508;
struct sTypeOfNode* result_218;
_Bool _if_conditional380;
void* right_value509;
struct sType* __dec_obj180;
_Bool _if_conditional381;
_Bool _if_conditional382;
void* right_value510;
char* __dec_obj181;
struct sTypeOfNode* __result328__;
memset(&__result_obj__, 0, sizeof(void*));
right_value508 = (void*)0;
memset(&result_218, 0, sizeof(struct sTypeOfNode*));
right_value509 = (void*)0;
right_value510 = (void*)0;
                                                                                if(_if_conditional379=self==(void*)0,                                                                                _if_conditional379) {
                                                                                    __result327__ = __result_obj__ = (void*)0;
                                                                                    return __result327__;
                                                                                }
                                                                                result_218=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value508=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "sTypeOfNode"))));
                                                                                come_call_finalizer2(sTypeOfNode_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional380=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional380) {
                                                                                    __dec_obj180=result_218->type;
                                                                                    result_218->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value509=sType_clone(self->type))));
                                                                                    come_call_finalizer2(sType_finalize,__dec_obj180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer2(sType_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                if(_if_conditional381=self!=((void*)0),                                                                                _if_conditional381) {
                                                                                    result_218->sline=self->sline;
                                                                                }
                                                                                if(_if_conditional382=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional382) {
                                                                                    __dec_obj181=result_218->sname;
                                                                                    result_218->sname=(char*)come_increment_ref_count(((char*)(right_value510=string_clone(self->sname))));
                                                                                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value510 = come_decrement_ref_count2(right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                __result328__ = __result_obj__ = result_218;
                                                                                come_call_finalizer2(sTypeOfNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result328__;
                                                                                come_call_finalizer2(sTypeOfNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional383;
_Bool _if_conditional384;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional383=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional383) {
                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                if(_if_conditional384=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional384) {
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional385;
struct sTypeOfExpNode* __result330__;
void* right_value515;
struct sTypeOfExpNode* result_220;
_Bool _if_conditional386;
void* right_value516;
struct sNode* __dec_obj182;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value517;
char* __dec_obj183;
struct sTypeOfExpNode* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
right_value515 = (void*)0;
memset(&result_220, 0, sizeof(struct sTypeOfExpNode*));
right_value516 = (void*)0;
right_value517 = (void*)0;
                                                                                if(_if_conditional385=self==(void*)0,                                                                                _if_conditional385) {
                                                                                    __result330__ = __result_obj__ = (void*)0;
                                                                                    return __result330__;
                                                                                }
                                                                                result_220=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value515=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "sTypeOfExpNode"))));
                                                                                come_call_finalizer2(sTypeOfExpNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional386=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional386) {
                                                                                    __dec_obj182=result_220->exp;
                                                                                    result_220->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value516=sNode_clone(self->exp))));
                                                                                    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value516) { right_value516 = come_decrement_ref_count2(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                }
                                                                                if(_if_conditional387=self!=((void*)0),                                                                                _if_conditional387) {
                                                                                    result_220->sline=self->sline;
                                                                                }
                                                                                if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional388) {
                                                                                    __dec_obj183=result_220->sname;
                                                                                    result_220->sname=(char*)come_increment_ref_count(((char*)(right_value517=string_clone(self->sname))));
                                                                                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value517 = come_decrement_ref_count2(right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                __result331__ = __result_obj__ = result_220;
                                                                                come_call_finalizer2(sTypeOfExpNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result331__;
                                                                                come_call_finalizer2(sTypeOfExpNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional394;
_Bool _if_conditional395;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    if(_if_conditional394=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional394) {
                                                                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    if(_if_conditional395=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional395) {
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional396;
struct sAlignOfNode* __result333__;
void* right_value523;
struct sAlignOfNode* result_228;
_Bool _if_conditional397;
void* right_value524;
struct sType* __dec_obj184;
_Bool _if_conditional398;
_Bool _if_conditional399;
void* right_value525;
char* __dec_obj185;
struct sAlignOfNode* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
right_value523 = (void*)0;
memset(&result_228, 0, sizeof(struct sAlignOfNode*));
right_value524 = (void*)0;
right_value525 = (void*)0;
                                                                                    if(_if_conditional396=self==(void*)0,                                                                                    _if_conditional396) {
                                                                                        __result333__ = __result_obj__ = (void*)0;
                                                                                        return __result333__;
                                                                                    }
                                                                                    result_228=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value523=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "sAlignOfNode"))));
                                                                                    come_call_finalizer2(sAlignOfNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional397=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional397) {
                                                                                        __dec_obj184=result_228->type;
                                                                                        result_228->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value524=sType_clone(self->type))));
                                                                                        come_call_finalizer2(sType_finalize,__dec_obj184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sType_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    if(_if_conditional398=self!=((void*)0),                                                                                    _if_conditional398) {
                                                                                        result_228->sline=self->sline;
                                                                                    }
                                                                                    if(_if_conditional399=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional399) {
                                                                                        __dec_obj185=result_228->sname;
                                                                                        result_228->sname=(char*)come_increment_ref_count(((char*)(right_value525=string_clone(self->sname))));
                                                                                        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value525 = come_decrement_ref_count2(right_value525, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    __result334__ = __result_obj__ = result_228;
                                                                                    come_call_finalizer2(sAlignOfNode_finalize,result_228, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result334__;
                                                                                    come_call_finalizer2(sAlignOfNode_finalize,result_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional400;
_Bool _if_conditional401;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    if(_if_conditional400=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional400) {
                                                                                        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                    if(_if_conditional401=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional401) {
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional402;
struct sAlignOfExpNode* __result336__;
void* right_value530;
struct sAlignOfExpNode* result_230;
_Bool _if_conditional403;
void* right_value531;
struct sNode* __dec_obj186;
_Bool _if_conditional404;
_Bool _if_conditional405;
void* right_value532;
char* __dec_obj187;
struct sAlignOfExpNode* __result337__;
memset(&__result_obj__, 0, sizeof(void*));
right_value530 = (void*)0;
memset(&result_230, 0, sizeof(struct sAlignOfExpNode*));
right_value531 = (void*)0;
right_value532 = (void*)0;
                                                                                    if(_if_conditional402=self==(void*)0,                                                                                    _if_conditional402) {
                                                                                        __result336__ = __result_obj__ = (void*)0;
                                                                                        return __result336__;
                                                                                    }
                                                                                    result_230=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value530=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "sAlignOfExpNode"))));
                                                                                    come_call_finalizer2(sAlignOfExpNode_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional403=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional403) {
                                                                                        __dec_obj186=result_230->exp;
                                                                                        result_230->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value531=sNode_clone(self->exp))));
                                                                                        if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value531) { right_value531 = come_decrement_ref_count2(right_value531, ((struct sNode*)right_value531)->finalize, ((struct sNode*)right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    }
                                                                                    if(_if_conditional404=self!=((void*)0),                                                                                    _if_conditional404) {
                                                                                        result_230->sline=self->sline;
                                                                                    }
                                                                                    if(_if_conditional405=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional405) {
                                                                                        __dec_obj187=result_230->sname;
                                                                                        result_230->sname=(char*)come_increment_ref_count(((char*)(right_value532=string_clone(self->sname))));
                                                                                        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    __result337__ = __result_obj__ = result_230;
                                                                                    come_call_finalizer2(sAlignOfExpNode_finalize,result_230, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result337__;
                                                                                    come_call_finalizer2(sAlignOfExpNode_finalize,result_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional411;
_Bool _if_conditional412;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        if(_if_conditional411=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional411) {
                                                                                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        if(_if_conditional412=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional412) {
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional413;
struct sAlignOfNode2* __result339__;
void* right_value538;
struct sAlignOfNode2* result_238;
_Bool _if_conditional414;
void* right_value539;
struct sType* __dec_obj188;
_Bool _if_conditional415;
_Bool _if_conditional416;
void* right_value540;
char* __dec_obj189;
struct sAlignOfNode2* __result340__;
memset(&__result_obj__, 0, sizeof(void*));
right_value538 = (void*)0;
memset(&result_238, 0, sizeof(struct sAlignOfNode2*));
right_value539 = (void*)0;
right_value540 = (void*)0;
                                                                                        if(_if_conditional413=self==(void*)0,                                                                                        _if_conditional413) {
                                                                                            __result339__ = __result_obj__ = (void*)0;
                                                                                            return __result339__;
                                                                                        }
                                                                                        result_238=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value538=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "sAlignOfNode2"))));
                                                                                        come_call_finalizer2(sAlignOfNode2_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional414=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional414) {
                                                                                            __dec_obj188=result_238->type;
                                                                                            result_238->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value539=sType_clone(self->type))));
                                                                                            come_call_finalizer2(sType_finalize,__dec_obj188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sType_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        if(_if_conditional415=self!=((void*)0),                                                                                        _if_conditional415) {
                                                                                            result_238->sline=self->sline;
                                                                                        }
                                                                                        if(_if_conditional416=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional416) {
                                                                                            __dec_obj189=result_238->sname;
                                                                                            result_238->sname=(char*)come_increment_ref_count(((char*)(right_value540=string_clone(self->sname))));
                                                                                            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value540 = come_decrement_ref_count2(right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        __result340__ = __result_obj__ = result_238;
                                                                                        come_call_finalizer2(sAlignOfNode2_finalize,result_238, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result340__;
                                                                                        come_call_finalizer2(sAlignOfNode2_finalize,result_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional417;
_Bool _if_conditional418;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        if(_if_conditional417=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional417) {
                                                                                            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
                                                                                        if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional418) {
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional419;
struct sAlignOfExpNode2* __result342__;
void* right_value545;
struct sAlignOfExpNode2* result_240;
_Bool _if_conditional420;
void* right_value546;
struct sNode* __dec_obj190;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value547;
char* __dec_obj191;
struct sAlignOfExpNode2* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
right_value545 = (void*)0;
memset(&result_240, 0, sizeof(struct sAlignOfExpNode2*));
right_value546 = (void*)0;
right_value547 = (void*)0;
                                                                                        if(_if_conditional419=self==(void*)0,                                                                                        _if_conditional419) {
                                                                                            __result342__ = __result_obj__ = (void*)0;
                                                                                            return __result342__;
                                                                                        }
                                                                                        result_240=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value545=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "sAlignOfExpNode2"))));
                                                                                        come_call_finalizer2(sAlignOfExpNode2_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional420=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional420) {
                                                                                            __dec_obj190=result_240->exp;
                                                                                            result_240->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value546=sNode_clone(self->exp))));
                                                                                            if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                            if(right_value546) { right_value546 = come_decrement_ref_count2(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        }
                                                                                        if(_if_conditional421=self!=((void*)0),                                                                                        _if_conditional421) {
                                                                                            result_240->sline=self->sline;
                                                                                        }
                                                                                        if(_if_conditional422=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional422) {
                                                                                            __dec_obj191=result_240->sname;
                                                                                            result_240->sname=(char*)come_increment_ref_count(((char*)(right_value547=string_clone(self->sname))));
                                                                                            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        __result343__ = __result_obj__ = result_240;
                                                                                        come_call_finalizer2(sAlignOfExpNode2_finalize,result_240, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result343__;
                                                                                        come_call_finalizer2(sAlignOfExpNode2_finalize,result_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional428;
_Bool _if_conditional429;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional428=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional428) {
                                                                                                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional429=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional429) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional430;
struct sAlignAsNode* __result345__;
void* right_value553;
struct sAlignAsNode* result_248;
_Bool _if_conditional431;
void* right_value554;
struct sType* __dec_obj192;
_Bool _if_conditional432;
_Bool _if_conditional433;
void* right_value555;
char* __dec_obj193;
struct sAlignAsNode* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
right_value553 = (void*)0;
memset(&result_248, 0, sizeof(struct sAlignAsNode*));
right_value554 = (void*)0;
right_value555 = (void*)0;
                                                                                            if(_if_conditional430=self==(void*)0,                                                                                            _if_conditional430) {
                                                                                                __result345__ = __result_obj__ = (void*)0;
                                                                                                return __result345__;
                                                                                            }
                                                                                            result_248=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value553=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "sAlignAsNode"))));
                                                                                            come_call_finalizer2(sAlignAsNode_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional431=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional431) {
                                                                                                __dec_obj192=result_248->type;
                                                                                                result_248->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value554=sType_clone(self->type))));
                                                                                                come_call_finalizer2(sType_finalize,__dec_obj192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sType_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional432=self!=((void*)0),                                                                                            _if_conditional432) {
                                                                                                result_248->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional433=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional433) {
                                                                                                __dec_obj193=result_248->sname;
                                                                                                result_248->sname=(char*)come_increment_ref_count(((char*)(right_value555=string_clone(self->sname))));
                                                                                                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value555 = come_decrement_ref_count2(right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result346__ = __result_obj__ = result_248;
                                                                                            come_call_finalizer2(sAlignAsNode_finalize,result_248, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result346__;
                                                                                            come_call_finalizer2(sAlignAsNode_finalize,result_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional434;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional434=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional434) {
                                                                                                if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional435=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional435) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional436;
struct sAlignAsExpNode* __result348__;
void* right_value560;
struct sAlignAsExpNode* result_250;
_Bool _if_conditional437;
void* right_value561;
struct sNode* __dec_obj194;
_Bool _if_conditional438;
_Bool _if_conditional439;
void* right_value562;
char* __dec_obj195;
struct sAlignAsExpNode* __result349__;
memset(&__result_obj__, 0, sizeof(void*));
right_value560 = (void*)0;
memset(&result_250, 0, sizeof(struct sAlignAsExpNode*));
right_value561 = (void*)0;
right_value562 = (void*)0;
                                                                                            if(_if_conditional436=self==(void*)0,                                                                                            _if_conditional436) {
                                                                                                __result348__ = __result_obj__ = (void*)0;
                                                                                                return __result348__;
                                                                                            }
                                                                                            result_250=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value560=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "sAlignAsExpNode"))));
                                                                                            come_call_finalizer2(sAlignAsExpNode_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional437=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional437) {
                                                                                                __dec_obj194=result_250->exp;
                                                                                                result_250->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value561=sNode_clone(self->exp))));
                                                                                                if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value561) { right_value561 = come_decrement_ref_count2(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional438=self!=((void*)0),                                                                                            _if_conditional438) {
                                                                                                result_250->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional439=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional439) {
                                                                                                __dec_obj195=result_250->sname;
                                                                                                result_250->sname=(char*)come_increment_ref_count(((char*)(right_value562=string_clone(self->sname))));
                                                                                                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value562 = come_decrement_ref_count2(right_value562, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result349__ = __result_obj__ = result_250;
                                                                                            come_call_finalizer2(sAlignAsExpNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result349__;
                                                                                            come_call_finalizer2(sAlignAsExpNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
void* right_value565;
void* right_value566;
struct sNode* _inf_value36;
struct sNullNodeX* _inf_obj_value36;
void* right_value569;
struct sNode* __result354__;
void* right_value570;
struct sNode* __result355__;
memset(&__result_obj__, 0, sizeof(void*));
right_value565 = (void*)0;
right_value566 = (void*)0;
right_value569 = (void*)0;
right_value570 = (void*)0;
    if(_if_conditional440=charp_operator_equals(buf,"using"),    _if_conditional440) {
        if(_if_conditional441=strmemcmp(info->p,"comelang"),        _if_conditional441) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else {
            if(_if_conditional442=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),            _if_conditional442) {
                info->p+=strlen("c");
                skip_spaces_and_lf(info);
                if(_if_conditional443=*info->p==123,                _if_conditional443) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    gComeC=(_Bool)1;
                    transpile_toplevel((_Bool)1,info);
                    gComeC=(_Bool)0;
                }
                else {
                    gComeC=(_Bool)1;
                }
            }
            else {
                if(_if_conditional444=strmemcmp(info->p,"gc"),                _if_conditional444) {
                    info->p+=strlen("gc");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional445=strmemcmp(info->p,"no-gc"),                    _if_conditional445) {
                        info->p+=strlen("no-gc");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional446=strmemcmp(info->p,"unsafe"),                        _if_conditional446) {
                            info->p+=strlen("unsafe");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid using");
                            exit(2);
                        }
                    }
                }
            }
        }
        _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2128, "struct sNode");
        _inf_obj_value36=come_increment_ref_count(((struct sNullNodeX*)(right_value566=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value565=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 2128, "sNullNodeX")))),info))));
        _inf_value36->_protocol_obj=_inf_obj_value36;
        _inf_value36->finalize=(void*)sNullNodeX_finalize;
        _inf_value36->clone=(void*)sNullNodeX_clone;
        _inf_value36->compile=(void*)sNullNodeX_compile;
        _inf_value36->sline=(void*)sNullNodeX_sline;
        _inf_value36->sname=(void*)sNullNodeX_sname;
        _inf_value36->terminated=(void*)sNullNodeX_terminated;
        _inf_value36->kind=(void*)sNullNodeX_kind;
        __result354__ = __result_obj__ = ((struct sNode*)(right_value569=_inf_value36));
        come_call_finalizer2(sNullNodeX_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sNullNodeX_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value569) { right_value569 = come_decrement_ref_count2(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result354__;
    }
    __result355__ = __result_obj__ = ((struct sNode*)(right_value570=top_level_v93(buf,head,head_sline,info)));
    if(right_value570) { right_value570 = come_decrement_ref_count2(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result355__;
}

static void sNullNodeX_finalize(struct sNullNodeX* self){
void* __result_obj__;
_Bool _if_conditional447;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional447=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional447) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self){
void* __result_obj__;
_Bool _if_conditional448;
struct sNullNodeX* __result352__;
void* right_value567;
struct sNullNodeX* result_251;
_Bool _if_conditional449;
_Bool _if_conditional450;
void* right_value568;
char* __dec_obj196;
struct sNullNodeX* __result353__;
memset(&__result_obj__, 0, sizeof(void*));
right_value567 = (void*)0;
memset(&result_251, 0, sizeof(struct sNullNodeX*));
right_value568 = (void*)0;
            if(_if_conditional448=self==(void*)0,            _if_conditional448) {
                __result352__ = __result_obj__ = (void*)0;
                return __result352__;
            }
            result_251=(struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value567=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "sNullNodeX_clone", 3, "sNullNodeX"))));
            come_call_finalizer2(sNullNodeX_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional449=self!=((void*)0),            _if_conditional449) {
                result_251->sline=self->sline;
            }
            if(_if_conditional450=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional450) {
                __dec_obj196=result_251->sname;
                result_251->sname=(char*)come_increment_ref_count(((char*)(right_value568=string_clone(self->sname))));
                __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value568 = come_decrement_ref_count2(right_value568, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result353__ = __result_obj__ = result_251;
            come_call_finalizer2(sNullNodeX_finalize,result_251, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result353__;
            come_call_finalizer2(sNullNodeX_finalize,result_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional451;
void* right_value571;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type3_252;
char* name2_253;
_Bool err_254;
_Bool _if_conditional452;
void* right_value572;
struct sType* inf_type_255;
void* right_value573;
void* right_value574;
struct sNode* _inf_value37;
struct sImplementsNode* _inf_obj_value37;
void* right_value579;
struct sNode* __result358__;
_Bool _if_conditional461;
_Bool _while_condtional9;
void* right_value580;
struct sNode* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
right_value571 = (void*)0;
memset(&type3_252, 0, sizeof(struct sType*));
memset(&name2_253, 0, sizeof(char*));
memset(&err_254, 0, sizeof(_Bool));
memset(&type3_252, 0, sizeof(struct sType*));
memset(&name2_253, 0, sizeof(char*));
memset(&err_254, 0, sizeof(_Bool));
right_value572 = (void*)0;
memset(&inf_type_255, 0, sizeof(struct sType*));
right_value573 = (void*)0;
right_value574 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
    if(_if_conditional451=strmemcmp(info->p,"implements"),    _if_conditional451) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value571=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_252=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
        name2_253=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        err_254=multiple_assign_var11->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional452=!err_254,        _if_conditional452) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_255=(struct sType*)come_increment_ref_count(((struct sType*)(right_value572=sType_clone(type3_252))));
        come_call_finalizer2(sType_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2148, "struct sNode");
        _inf_obj_value37=come_increment_ref_count(((struct sImplementsNode*)(right_value574=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value573=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2148, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_255),info))));
        _inf_value37->_protocol_obj=_inf_obj_value37;
        _inf_value37->finalize=(void*)sImplementsNode_finalize;
        _inf_value37->clone=(void*)sImplementsNode_clone;
        _inf_value37->compile=(void*)sImplementsNode_compile;
        _inf_value37->sline=(void*)sImplementsNode_sline;
        _inf_value37->sname=(void*)sImplementsNode_sname;
        _inf_value37->terminated=(void*)sImplementsNode_terminated;
        _inf_value37->kind=(void*)sImplementsNode_kind;
        __result358__ = __result_obj__ = ((struct sNode*)(right_value579=_inf_value37));
        come_call_finalizer2(sType_finalize,type3_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name2_253 = come_decrement_ref_count2(name2_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,inf_type_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer2(sImplementsNode_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sImplementsNode_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value579) { right_value579 = come_decrement_ref_count2(right_value579, ((struct sNode*)right_value579)->finalize, ((struct sNode*)right_value579)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result358__;
        come_call_finalizer2(sType_finalize,type3_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name2_253 = come_decrement_ref_count2(name2_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,inf_type_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional461=*info->p==64,        _if_conditional461) {
            info->p++;
            while(_while_condtional9=xisalnum(*info->p)||*info->p==95,            _while_condtional9) {
                info->p++;
            }
            skip_spaces_and_lf(info);
        }
    }
    __result359__ = __result_obj__ = ((struct sNode*)(right_value580=post_position_operator3_v20((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value580) { right_value580 = come_decrement_ref_count2(right_value580, ((struct sNode*)right_value580)->finalize, ((struct sNode*)right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result359__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional453=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional453) {
                if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional454=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional454) {
                come_call_finalizer2(sType_finalize,self->inf_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional455=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional455) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional456;
struct sImplementsNode* __result356__;
void* right_value575;
struct sImplementsNode* result_256;
_Bool _if_conditional457;
void* right_value576;
struct sNode* __dec_obj197;
_Bool _if_conditional458;
void* right_value577;
struct sType* __dec_obj198;
_Bool _if_conditional459;
_Bool _if_conditional460;
void* right_value578;
char* __dec_obj199;
struct sImplementsNode* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
right_value575 = (void*)0;
memset(&result_256, 0, sizeof(struct sImplementsNode*));
right_value576 = (void*)0;
right_value577 = (void*)0;
right_value578 = (void*)0;
            if(_if_conditional456=self==(void*)0,            _if_conditional456) {
                __result356__ = __result_obj__ = (void*)0;
                return __result356__;
            }
            result_256=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value575=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "sImplementsNode"))));
            come_call_finalizer2(sImplementsNode_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional457=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional457) {
                __dec_obj197=result_256->obj_exp;
                result_256->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value576=sNode_clone(self->obj_exp))));
                if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value576) { right_value576 = come_decrement_ref_count2(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional458=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional458) {
                __dec_obj198=result_256->inf_type;
                result_256->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value577=sType_clone(self->inf_type))));
                come_call_finalizer2(sType_finalize,__dec_obj198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional459=self!=((void*)0),            _if_conditional459) {
                result_256->sline=self->sline;
            }
            if(_if_conditional460=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional460) {
                __dec_obj199=result_256->sname;
                result_256->sname=(char*)come_increment_ref_count(((char*)(right_value578=string_clone(self->sname))));
                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value578 = come_decrement_ref_count2(right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result357__ = __result_obj__ = result_256;
            come_call_finalizer2(sImplementsNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result357__;
            come_call_finalizer2(sImplementsNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

