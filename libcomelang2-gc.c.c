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
struct anonymous_typeX4
{
    long long __ll;
    long double __ld;
};
typedef struct anonymous_typeX4 max_align_t;
typedef long ptrdiff_t;
typedef void* GC_PTR;
typedef unsigned long int GC_word;
typedef long GC_signed_word;
extern unsigned long int GC_gc_no;
typedef void* (*GC_oom_func)(unsigned long int);
extern void* (*GC_oom_fn)(unsigned long int);
typedef void (*GC_on_heap_resize_proc)(unsigned long int);
extern void (*GC_on_heap_resize)(unsigned long int);
enum anonymous_typeY5 { GC_EVENT_START
,GC_EVENT_MARK_START
,GC_EVENT_MARK_END
,GC_EVENT_RECLAIM_START
,GC_EVENT_RECLAIM_END
,GC_EVENT_END
,GC_EVENT_PRE_STOP_WORLD
,GC_EVENT_POST_STOP_WORLD
,GC_EVENT_PRE_START_WORLD
,GC_EVENT_POST_START_WORLD
,GC_EVENT_THREAD_SUSPENDED
,GC_EVENT_THREAD_UNSUSPENDED
};
typedef enum anonymous_typeY5 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY5);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();
extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long int GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long int GC_free_space_divisor;
extern unsigned long int GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long int GC_time_limit;
struct GC_timeval_s
{
    unsigned long int tv_ms;
    unsigned long int tv_nsec;
};
typedef int (*GC_stop_func)();
struct GC_prof_stats_s
{
    unsigned long int heapsize_full;
    unsigned long int free_bytes_full;
    unsigned long int unmapped_bytes;
    unsigned long int bytes_allocd_since_gc;
    unsigned long int allocd_bytes_before_gc;
    unsigned long int non_gc_bytes;
    unsigned long int gc_no;
    unsigned long int markers_m1;
    unsigned long int bytes_reclaimed_since_gc;
    unsigned long int reclaimed_bytes_before_gc;
    unsigned long int expl_freed_bytes_since_gc;
    unsigned long int obtained_from_os_bytes;
};
typedef void (*GC_finalization_proc)(void*,void*);
enum anonymous_typeY6 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY6 GC_ToggleRefStatus;
typedef enum anonymous_typeY6 (*GC_toggleref_func)(void*);
typedef void (*GC_await_finalize_proc)(void*);
typedef void (*GC_warn_proc)(char*,unsigned long int);
typedef void (*GC_abort_func)(const char*);
typedef unsigned long int GC_hidden_pointer;
typedef void* (*GC_fn_type)(void*);
struct GC_stack_base
{
    void* mem_base;
};
typedef void* (*GC_stack_base_func)(struct GC_stack_base*,void*);
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long int);
char* gComeStackFrameSName[16];
int gComeStackFrameSLine[16];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;

// header function
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

char* dirname(char* anonymous_var_nameX492);

char* basename(char* anonymous_var_nameX493);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX495)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX497)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX499)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX500);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX501);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX502);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX503);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX504)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX505);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX506);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX507);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX508);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX509);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX510);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX511);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX512);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX513);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX514);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX515);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX516);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX517);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX518);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX519);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX520);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX521);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX522);

char* GC_strdup(const char* anonymous_var_nameX523);

char* GC_strndup(const char* anonymous_var_nameX524, unsigned long int anonymous_var_nameX525);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX526);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX527);

void* GC_memalign(unsigned long int anonymous_var_nameX528, unsigned long int anonymous_var_nameX529);

int GC_posix_memalign(void** anonymous_var_nameX530, unsigned long int anonymous_var_nameX531, unsigned long int anonymous_var_nameX532);

void GC_free(void* anonymous_var_nameX533);

void GC_change_stubborn(const void* anonymous_var_nameX534);

void GC_end_stubborn_change(const void* anonymous_var_nameX535);

void* GC_base(void* anonymous_var_nameX536);

int GC_is_heap_ptr(const void* anonymous_var_nameX537);

unsigned long int GC_size(const void* anonymous_var_nameX538);

void* GC_realloc(void* anonymous_var_nameX539, unsigned long int anonymous_var_nameX540);

int GC_expand_hp(unsigned long int anonymous_var_nameX541);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX542);

void GC_exclude_static_roots(void* anonymous_var_nameX543, void* anonymous_var_nameX544);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX545, void* anonymous_var_nameX546);

void GC_remove_roots(void* anonymous_var_nameX547, void* anonymous_var_nameX548);

void GC_register_displacement(unsigned long int anonymous_var_nameX549);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX550);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX551)());

void GC_set_stop_func(int (*anonymous_var_nameX552)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX553, unsigned long int* anonymous_var_nameX554, unsigned long int* anonymous_var_nameX555, unsigned long int* anonymous_var_nameX556, unsigned long int* anonymous_var_nameX557);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX558, unsigned long int anonymous_var_nameX559);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX560);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX561);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX562);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX563);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX564, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX565, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX566, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX567, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX568, unsigned long int anonymous_var_nameX569, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX570, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX571, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX572, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX573, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX574);

void* GC_debug_realloc(void* anonymous_var_nameX575, unsigned long int anonymous_var_nameX576, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX577);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX578);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX579);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX580, unsigned long int anonymous_var_nameX581);

void GC_register_finalizer(void* anonymous_var_nameX584, void (*anonymous_var_nameX585)(void*,void*), void* anonymous_var_nameX586, void (*anonymous_var_nameX587)(void*,void*), void** anonymous_var_nameX588);

void GC_debug_register_finalizer(void* anonymous_var_nameX589, void (*anonymous_var_nameX590)(void*,void*), void* anonymous_var_nameX591, void (*anonymous_var_nameX592)(void*,void*), void** anonymous_var_nameX593);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX594, void (*anonymous_var_nameX595)(void*,void*), void* anonymous_var_nameX596, void (*anonymous_var_nameX597)(void*,void*), void** anonymous_var_nameX598);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX599, void (*anonymous_var_nameX600)(void*,void*), void* anonymous_var_nameX601, void (*anonymous_var_nameX602)(void*,void*), void** anonymous_var_nameX603);

void GC_register_finalizer_no_order(void* anonymous_var_nameX604, void (*anonymous_var_nameX605)(void*,void*), void* anonymous_var_nameX606, void (*anonymous_var_nameX607)(void*,void*), void** anonymous_var_nameX608);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX609, void (*anonymous_var_nameX610)(void*,void*), void* anonymous_var_nameX611, void (*anonymous_var_nameX612)(void*,void*), void** anonymous_var_nameX613);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX614, void (*anonymous_var_nameX615)(void*,void*), void* anonymous_var_nameX616, void (*anonymous_var_nameX617)(void*,void*), void** anonymous_var_nameX618);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX619, void (*anonymous_var_nameX620)(void*,void*), void* anonymous_var_nameX621, void (*anonymous_var_nameX622)(void*,void*), void** anonymous_var_nameX623);

int GC_register_disappearing_link(void** anonymous_var_nameX624);

int GC_general_register_disappearing_link(void** anonymous_var_nameX625, const void* anonymous_var_nameX626);

int GC_move_disappearing_link(void** anonymous_var_nameX627, void** anonymous_var_nameX628);

int GC_unregister_disappearing_link(void** anonymous_var_nameX629);

int GC_register_long_link(void** anonymous_var_nameX630, const void* anonymous_var_nameX631);

int GC_move_long_link(void** anonymous_var_nameX632, void** anonymous_var_nameX633);

int GC_unregister_long_link(void** anonymous_var_nameX634);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX636)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX637, int anonymous_var_nameX638);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX640)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX641);

void GC_set_warn_proc(void (*anonymous_var_nameX644)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX645, unsigned long int anonymous_var_nameX646);

void GC_set_log_fd(int anonymous_var_nameX647);

void GC_set_abort_func(void (*anonymous_var_nameX649)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX651)(void*), void* anonymous_var_nameX652);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX655)(struct GC_stack_base*,void*), void* anonymous_var_nameX656);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX657)(void*), void* anonymous_var_nameX658);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX659)(void*), void* anonymous_var_nameX660);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX661);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX662);

void GC_set_stackbottom(void* anonymous_var_nameX663, const struct GC_stack_base* anonymous_var_nameX664);

void* GC_same_obj(void* anonymous_var_nameX665, void* anonymous_var_nameX666);

void* GC_pre_incr(void** anonymous_var_nameX667, long anonymous_var_nameX668);

void* GC_post_incr(void** anonymous_var_nameX669, long anonymous_var_nameX670);

void* GC_is_visible(void* anonymous_var_nameX671);

void* GC_is_valid_displacement(void* anonymous_var_nameX672);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX673);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX674, const void* anonymous_var_nameX675);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX676, const void* anonymous_var_nameX677);

void* GC_malloc_many(unsigned long int anonymous_var_nameX698);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX702)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX703);

int GC_get_force_unmap_on_gcollect();

void GC_win32_free_heap();

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void exception_stackframe();

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self);

int int_catch(int self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_value(int self);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(char* mem);
void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

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

struct buffer* buffer_append_str(struct buffer* self, char* mem);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool int_equals(int self, int right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(unsigned long int self, unsigned long int right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool string_equals(char* self, char* right);

_Bool charp_equals(char* self, char* right);

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

unsigned int short_get_hash_key(short int value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(unsigned long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

unsigned long int size_t_clone(unsigned long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(unsigned int c);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* xsprintf(char* msg, ...);

char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);

char* xbasename(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xextname(char* path);

char* xrealpath(char* path);

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

int size_t_compare(unsigned long int left, unsigned long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

char* FILE_read(struct _IO_FILE* f);

int FILE_write(struct _IO_FILE* f, char* str);

int FILE_fclose(struct _IO_FILE* f);

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* string_read(char* file_name);

char* charp_read(char* file_name);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

char* charp_puts(char* self);

char* charp_print(char* self);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

char* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

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
struct smart_pointer$1char* result_0;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
    result_0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1950, "struct smart_pointer$1char");
    result_0->memory=buffer_clone(self);
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    return __result2__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1char* result_1;
struct smart_pointer$1char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
    result_1=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1960, "struct smart_pointer$1char");
    result_1->memory=buffer_clone(self);
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    return __result3__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1short* result_2;
struct smart_pointer$1short* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
    result_2=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1970, "struct smart_pointer$1short");
    result_2->memory=buffer_clone(self);
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    return __result4__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1int* result_3;
struct smart_pointer$1int* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
    result_3=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1980, "struct smart_pointer$1int");
    result_3->memory=buffer_clone(self);
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    return __result5__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1long* result_4;
struct smart_pointer$1long* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
    result_4=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1990, "struct smart_pointer$1long");
    result_4->memory=buffer_clone(self);
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    return __result6__;
}

// body function






void come_push_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
int i_5;
_Bool _for_condtionalA1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_5, 0, sizeof(int));
    if(_if_conditional1=gNumComeStackFrame==16,    _if_conditional1) {
        for(
        i_5=0 ,        0;        _for_condtionalA1=        i_5<16-1 ,        _for_condtionalA1;        i_5++ ,        0        ){
            gComeStackFrameSName[i_5]=gComeStackFrameSName[i_5+1];
            gComeStackFrameSLine[i_5]=gComeStackFrameSLine[i_5+1];
        }
        gComeStackFrameSName[i_5]=sname;
        gComeStackFrameSLine[i_5]=sline;
    }
    else {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional2=gNumComeStackFrame>0,    _if_conditional2) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* buf_6;
int i_7;
_Bool _for_condtionalA2;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_6, 0, sizeof(struct buffer*));
memset(&i_7, 0, sizeof(int));
    buf_6=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 50, "struct buffer"));
    buffer_append_str(buf_6,xsprintf("%s %d\n",sname,sline));
    for(
    i_7=gNumComeStackFrame-2 ,    0;    _for_condtionalA2=    i_7>=0 ,    _for_condtionalA2;    i_7-- ,    0    ){
        buffer_append_str(buf_6,xsprintf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]));
    }
    if(_if_conditional3=gComeStackFrameBuffer,    _if_conditional3) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(buffer_to_string(buf_6));
}

void exception_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf("%s",gComeStackFrameBuffer);
}

void stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_8;
_Bool _for_condtionalA3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_8, 0, sizeof(int));
    for(
    i_8=gNumComeStackFrame-1 ,    0;    _for_condtionalA3=    i_8>=0 ,    _for_condtionalA3;    i_8-- ,    0    ){
        printf("%s %d\n",gComeStackFrameSName[i_8],gComeStackFrameSLine[i_8]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result7__ = __result_obj__ = __builtin_string(gComeStackFrameBuffer);
    return __result7__;
}

void* come_null_check(void* mem, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
void* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional4=mem==((void*)0),    _if_conditional4) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result8__ = __result_obj__ = mem;
    return __result8__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
void* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional5=mem==((void*)0),    _if_conditional5) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional6=mem<begin,    _if_conditional6) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional7=mem>=end,    _if_conditional7) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result9__ = __result_obj__ = mem;
    return __result9__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool __result10__;
_Bool __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional8=!self,    _if_conditional8) {
        block(parent);
        if(_if_conditional9=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional9) {
            __result10__ = self;
            return __result10__;
        }
        stackframe();
        exit(1);
    }
    __result11__ = self;
    return __result11__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result12__ = self;
    return __result12__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
_Bool _if_conditional11;
int __result13__;
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional10=self<0,    _if_conditional10) {
        block(parent);
        if(_if_conditional11=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional11) {
            __result13__ = self;
            return __result13__;
        }
    }
    __result14__ = self;
    return __result14__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
_Bool _if_conditional13;
int __result15__;
int __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional12=self<0,    _if_conditional12) {
        block(parent);
        if(_if_conditional13=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional13) {
            __result15__ = self;
            return __result15__;
        }
        stackframe();
        exit(1);
    }
    __result16__ = self;
    return __result16__;
}

int int_value(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result17__ = self;
    return __result17__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result18__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional14=self<0,    _if_conditional14) {
        block(parent);
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            __result18__ = self;
            return __result18__;
        }
    }
    __result19__ = self;
    return __result19__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool __result20__;
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional16=!self,    _if_conditional16) {
        block(parent);
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            __result20__ = self;
            return __result20__;
        }
    }
    __result21__ = self;
    return __result21__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool __result22__;
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional18=!self,    _if_conditional18) {
        block(parent);
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            __result22__ = self;
            return __result22__;
        }
    }
    __result23__ = self;
    return __result23__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf("%s...",msg);
    if(_if_conditional20=!test,    _if_conditional20) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    gComeMallocLib=(_Bool)0;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    if(_if_conditional21=gComeGCLib,    _if_conditional21) {
        GC_init();
        GC_set_warn_proc(GC_ignore_warn_proc);
        GC_enable_incremental();
    }
    gComeStackFrameBuffer=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional22=gComeStackFrameBuffer,    _if_conditional22) {
        free(gComeStackFrameBuffer);
    }
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
void* result_9;
void* __result24__;
void* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_9, 0, sizeof(void*));
    if(_if_conditional23=gComeGCLib,    _if_conditional23) {
        result_9=GC_malloc(size);
        memset(result_9,0,size);
        __result24__ = __result_obj__ = result_9;
        return __result24__;
    }
    else {
        __result25__ = __result_obj__ = calloc(1,size);
        return __result25__;
    }
}

static void come_free_mem_of_heap_pool(char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional24=mem,    _if_conditional24) {
        if(_if_conditional25=gComeGCLib,        _if_conditional25) {
        }
        else {
            free(mem);
        }
    }
}

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_10;
unsigned long int* ref_count_11;
unsigned long int* size2_12;
void* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_10, 0, sizeof(char*));
memset(&ref_count_11, 0, sizeof(unsigned long int*));
memset(&size2_12, 0, sizeof(unsigned long int*));
    mem_10=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    ref_count_11=(unsigned long int*)mem_10;
    *ref_count_11=0;
    size2_12=(unsigned long int*)(mem_10+sizeof(unsigned long int));
    *size2_12=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    __result26__ = __result_obj__ = mem_10+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result26__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
unsigned long int* ref_count_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_13, 0, sizeof(unsigned long int*));
    if(_if_conditional26=mem==((void*)0),    _if_conditional26) {
        return;
    }
    ref_count_13=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_13);
}

void come_free(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
unsigned long int* ref_count_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_14, 0, sizeof(unsigned long int*));
    if(_if_conditional27=mem==((void*)0),    _if_conditional27) {
        return;
    }
    ref_count_14=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_14);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
void* __result27__;
char* mem_15;
unsigned long int* size_p_16;
unsigned long int size_17;
void* result_18;
void* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_15, 0, sizeof(char*));
memset(&size_p_16, 0, sizeof(unsigned long int*));
memset(&size_17, 0, sizeof(unsigned long int));
memset(&result_18, 0, sizeof(void*));
    if(_if_conditional28=!block,    _if_conditional28) {
        __result27__ = __result_obj__ = ((void*)0);
        return __result27__;
    }
    mem_15=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_16=(unsigned long int*)(mem_15+sizeof(unsigned long int));
    size_17=*size_p_16-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_18=come_calloc(1,size_17,sname,sline,class_name);
    memcpy(result_18,block,size_17);
    __result28__ = __result_obj__ = result_18;
    return __result28__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
void* __result29__;
unsigned long int* ref_count_19;
void* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_19, 0, sizeof(unsigned long int*));
    if(_if_conditional29=mem==((void*)0),    _if_conditional29) {
        __result29__ = __result_obj__ = mem;
        return __result29__;
    }
    ref_count_19=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*ref_count_19)++;
    __result30__ = __result_obj__ = mem;
    return __result30__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
void* __result31__;
unsigned long int* ref_count_20;
void* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_20, 0, sizeof(unsigned long int*));
    if(_if_conditional30=mem==((void*)0),    _if_conditional30) {
        __result31__ = __result_obj__ = mem;
        return __result31__;
    }
    ref_count_20=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    printf("ref_count %ld\n",*ref_count_20);
    __result32__ = __result_obj__ = mem;
    return __result32__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
void* __result33__;
unsigned long int* ref_count_21;
_Bool _if_conditional32;
unsigned long int count_22;
_Bool _if_conditional33;
_Bool _if_conditional34;
void (*finalizer_23)(void*);
void* __result34__;
void* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_21, 0, sizeof(unsigned long int*));
memset(&count_22, 0, sizeof(unsigned long int));
memset(&finalizer_23, 0, sizeof(void (*)(void*)));
    if(_if_conditional31=mem==((void*)0),    _if_conditional31) {
        __result33__ = __result_obj__ = ((void*)0);
        return __result33__;
    }
    ref_count_21=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional32=!no_decrement,    _if_conditional32) {
        (*ref_count_21)--;
    }
    count_22=*ref_count_21;
    if(_if_conditional33=!no_free&&(count_22<=0||force_delete_),    _if_conditional33) {
        if(_if_conditional34=protocol_obj&&protocol_fun,        _if_conditional34) {
            finalizer_23=protocol_fun;
            finalizer_23(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result34__ = __result_obj__ = ((void*)0);
        return __result34__;
    }
    __result35__ = __result_obj__ = mem;
    return __result35__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
void (*finalizer_24)(void*);
void (*finalizer_25)(void*);
unsigned long int* ref_count_26;
_Bool _if_conditional39;
unsigned long int count_27;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
void (*finalizer_28)(void*);
_Bool _if_conditional43;
void (*finalizer_29)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_24, 0, sizeof(void (*)(void*)));
memset(&finalizer_25, 0, sizeof(void (*)(void*)));
memset(&ref_count_26, 0, sizeof(unsigned long int*));
memset(&count_27, 0, sizeof(unsigned long int));
memset(&finalizer_28, 0, sizeof(void (*)(void*)));
memset(&finalizer_29, 0, sizeof(void (*)(void*)));
    if(_if_conditional35=mem==((void*)0),    _if_conditional35) {
        return;
    }
    if(_if_conditional36=call_finalizer_only,    _if_conditional36) {
        if(_if_conditional37=fun,        _if_conditional37) {
            if(_if_conditional38=protocol_obj&&protocol_fun,            _if_conditional38) {
                finalizer_24=protocol_fun;
                finalizer_24(protocol_obj);
            }
            finalizer_25=fun;
            finalizer_25(mem);
        }
    }
    else {
        ref_count_26=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional39=!no_decrement,        _if_conditional39) {
            (*ref_count_26)--;
        }
        count_27=*ref_count_26;
        if(_if_conditional40=!no_free&&(count_27<=0||force_delete_),        _if_conditional40) {
            if(_if_conditional41=mem,            _if_conditional41) {
                if(_if_conditional42=protocol_obj&&protocol_fun,                _if_conditional42) {
                    finalizer_28=protocol_fun;
                    finalizer_28(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(_if_conditional43=fun,                _if_conditional43) {
                    finalizer_29=fun;
                    finalizer_29(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional44;
char* __result36__;
int len_30;
char* result_31;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_30, 0, sizeof(int));
memset(&result_31, 0, sizeof(char*));
    if(_if_conditional44=str==((void*)0),    _if_conditional44) {
        __result36__ = __result_obj__ = ((void*)0);
        return __result36__;
    }
    len_30=strlen(str)+1;
    result_31=(char*)come_calloc(1, sizeof(char)*(1*(len_30)), "libcomelang2-gc.c", 515, "char");
    strncpy(result_31,str,len_30);
    __result37__ = __result_obj__ = result_31;
    return __result37__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_32;
int i_33;
_Bool _for_condtionalA4;
_Bool _if_conditional45;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_32, 0, sizeof(_Bool));
memset(&i_33, 0, sizeof(int));
    found_32=(_Bool)0;
    for(
    i_33=0 ,    0;    _for_condtionalA4=    i_33<len ,    _for_condtionalA4;    i_33++ ,    0    ){
        if(_if_conditional45=array[i_33]==element,        _if_conditional45) {
            found_32=(_Bool)1;
            break;
        }
    }
    __result38__ = found_32;
    return __result38__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    self->size=128;
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 540, "char");
    self->buf[0]=0;
    self->len=0;
    __result39__ = __result_obj__ = self;
    return __result39__;
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional46=self&&self->buf,    _if_conditional46) {
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional47=self&&self->buf,    _if_conditional47) {
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
struct buffer* __result40__;
struct buffer* result_34;
struct buffer* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_34, 0, sizeof(struct buffer*));
    if(_if_conditional48=self==((void*)0),    _if_conditional48) {
        __result40__ = __result_obj__ = ((void*)0);
        return __result40__;
    }
    result_34=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 562, "struct buffer");
    result_34->size=self->size;
    result_34->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 565, "char");
    result_34->len=self->len;
    memcpy(result_34->buf,self->buf,self->len);
    __result41__ = __result_obj__ = result_34;
    return __result41__;
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
int __result42__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional49=self==((void*)0),    _if_conditional49) {
        __result42__ = 0;
        return __result42__;
    }
    __result43__ = self->len;
    return __result43__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional50=self==((void*)0),    _if_conditional50) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional51=self==((void*)0),    _if_conditional51) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
struct buffer* __result44__;
_Bool _if_conditional53;
char* old_buf_35;
int old_len_36;
int new_size_37;
struct buffer* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&old_buf_35, 0, sizeof(char*));
memset(&old_len_36, 0, sizeof(int));
memset(&new_size_37, 0, sizeof(int));
    if(_if_conditional52=self==((void*)0)||mem==((void*)0),    _if_conditional52) {
        __result44__ = __result_obj__ = self;
        return __result44__;
    }
    if(_if_conditional53=self->len+size+1+1>=self->size,    _if_conditional53) {
        old_buf_35=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 604, "char");
        memcpy(old_buf_35,self->buf,self->size);
        old_len_36=self->len;
        new_size_37=(self->size+size+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_37)), "libcomelang2-gc.c", 608, "char");
        memcpy(self->buf,old_buf_35,old_len_36);
        self->buf[old_len_36]=0;
        self->size=new_size_37;
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result45__ = __result_obj__ = self;
    return __result45__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional54;
struct buffer* __result46__;
_Bool _if_conditional55;
char* old_buf_38;
int old_len_39;
int new_size_40;
struct buffer* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&old_buf_38, 0, sizeof(char*));
memset(&old_len_39, 0, sizeof(int));
memset(&new_size_40, 0, sizeof(int));
    if(_if_conditional54=self==((void*)0),    _if_conditional54) {
        __result46__ = __result_obj__ = ((void*)0);
        return __result46__;
    }
    if(_if_conditional55=self->len+1+1+1>=self->size,    _if_conditional55) {
        old_buf_38=charp_clone(self->buf);
        old_len_39=self->len;
        new_size_40=(self->size+10+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_40)), "libcomelang2-gc.c", 631, "char");
        memcpy(self->buf,old_buf_38,old_len_39);
        self->buf[old_len_39]=0;
        self->size=new_size_40;
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result47__ = __result_obj__ = self;
    return __result47__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional56;
struct buffer* __result48__;
int size_41;
_Bool _if_conditional57;
char* old_buf_42;
int old_len_43;
int new_size_44;
struct buffer* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_41, 0, sizeof(int));
memset(&old_buf_42, 0, sizeof(char*));
memset(&old_len_43, 0, sizeof(int));
memset(&new_size_44, 0, sizeof(int));
    if(_if_conditional56=self==((void*)0)||mem==((void*)0),    _if_conditional56) {
        __result48__ = __result_obj__ = self;
        return __result48__;
    }
    size_41=strlen(mem);
    if(_if_conditional57=self->len+size_41+1+1>=self->size,    _if_conditional57) {
        old_buf_42=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 653, "char");
        memcpy(old_buf_42,self->buf,self->size);
        old_len_43=self->len;
        new_size_44=(self->size+size_41+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_44)), "libcomelang2-gc.c", 657, "char");
        memcpy(self->buf,old_buf_42,old_len_43);
        self->buf[old_len_43]=0;
        self->size=new_size_44;
    }
    memcpy(self->buf+self->len,mem,size_41);
    self->len+=size_41;
    self->buf[self->len]=0;
    __result49__ = __result_obj__ = self;
    return __result49__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
struct buffer* __result50__;
int size_45;
_Bool _if_conditional59;
char* old_buf_46;
int old_len_47;
int new_size_48;
struct buffer* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_45, 0, sizeof(int));
memset(&old_buf_46, 0, sizeof(char*));
memset(&old_len_47, 0, sizeof(int));
memset(&new_size_48, 0, sizeof(int));
    if(_if_conditional58=self==((void*)0)||mem==((void*)0),    _if_conditional58) {
        __result50__ = __result_obj__ = self;
        return __result50__;
    }
    size_45=strlen(mem)+1;
    if(_if_conditional59=self->len+size_45+1+1+1>=self->size,    _if_conditional59) {
        old_buf_46=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 677, "char");
        memcpy(old_buf_46,self->buf,self->size);
        old_len_47=self->len;
        new_size_48=(self->size+size_45+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_48)), "libcomelang2-gc.c", 681, "char");
        memcpy(self->buf,old_buf_46,old_len_47);
        self->buf[old_len_47]=0;
        self->size=new_size_48;
    }
    memcpy(self->buf+self->len,mem,size_45);
    self->len+=size_45;
    self->buf[self->len]=0;
    self->len++;
    __result51__ = __result_obj__ = self;
    return __result51__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
struct buffer* __result52__;
int* mem_49;
int size_50;
_Bool _if_conditional61;
char* old_buf_51;
int old_len_52;
int new_size_53;
struct buffer* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_49, 0, sizeof(int*));
memset(&size_50, 0, sizeof(int));
memset(&old_buf_51, 0, sizeof(char*));
memset(&old_len_52, 0, sizeof(int));
memset(&new_size_53, 0, sizeof(int));
    if(_if_conditional60=self==((void*)0),    _if_conditional60) {
        __result52__ = __result_obj__ = ((void*)0);
        return __result52__;
    }
    mem_49=&value;
    size_50=sizeof(int);
    if(_if_conditional61=self->len+size_50+1+1>=self->size,    _if_conditional61) {
        old_buf_51=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 704, "char");
        memcpy(old_buf_51,self->buf,self->size);
        old_len_52=self->len;
        new_size_53=(self->size+size_50+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_53)), "libcomelang2-gc.c", 708, "char");
        memcpy(self->buf,old_buf_51,old_len_52);
        self->buf[old_len_52]=0;
        self->size=new_size_53;
    }
    memcpy(self->buf+self->len,mem_49,size_50);
    self->len+=size_50;
    self->buf[self->len]=0;
    __result53__ = __result_obj__ = self;
    return __result53__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_54;
int size_55;
_Bool _if_conditional62;
char* old_buf_56;
int old_len_57;
int new_size_58;
struct buffer* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_54, 0, sizeof(long*));
memset(&size_55, 0, sizeof(int));
memset(&old_buf_56, 0, sizeof(char*));
memset(&old_len_57, 0, sizeof(int));
memset(&new_size_58, 0, sizeof(int));
    mem_54=&value;
    size_55=sizeof(long);
    if(_if_conditional62=self->len+size_55+1+1>=self->size,    _if_conditional62) {
        old_buf_56=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 727, "char");
        memcpy(old_buf_56,self->buf,self->size);
        old_len_57=self->len;
        new_size_58=(self->size+size_55+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_58)), "libcomelang2-gc.c", 731, "char");
        memcpy(self->buf,old_buf_56,old_len_57);
        self->buf[old_len_57]=0;
        self->size=new_size_58;
    }
    memcpy(self->buf+self->len,mem_54,size_55);
    self->len+=size_55;
    self->buf[self->len]=0;
    __result54__ = __result_obj__ = self;
    return __result54__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
struct buffer* __result55__;
short short* mem_59;
int size_60;
_Bool _if_conditional64;
char* old_buf_61;
int old_len_62;
int new_size_63;
struct buffer* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_59, 0, sizeof(short short*));
memset(&size_60, 0, sizeof(int));
memset(&old_buf_61, 0, sizeof(char*));
memset(&old_len_62, 0, sizeof(int));
memset(&new_size_63, 0, sizeof(int));
    if(_if_conditional63=self==((void*)0),    _if_conditional63) {
        __result55__ = __result_obj__ = ((void*)0);
        return __result55__;
    }
    mem_59=&value;
    size_60=sizeof(short short);
    if(_if_conditional64=self->len+size_60+1+1>=self->size,    _if_conditional64) {
        old_buf_61=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 754, "char");
        memcpy(old_buf_61,self->buf,self->size);
        old_len_62=self->len;
        new_size_63=(self->size+size_60+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_63)), "libcomelang2-gc.c", 758, "char");
        memcpy(self->buf,old_buf_61,old_len_62);
        self->buf[old_len_62]=0;
        self->size=new_size_63;
    }
    memcpy(self->buf+self->len,mem_59,size_60);
    self->len+=size_60;
    self->buf[self->len]=0;
    __result56__ = __result_obj__ = self;
    return __result56__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional65;
struct buffer* __result57__;
int len_64;
_Bool _if_conditional66;
int new_size_65;
int i_66;
_Bool _for_condtionalA5;
struct buffer* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_64, 0, sizeof(int));
memset(&new_size_65, 0, sizeof(int));
memset(&i_66, 0, sizeof(int));
    if(_if_conditional65=self==((void*)0),    _if_conditional65) {
        __result57__ = __result_obj__ = ((void*)0);
        return __result57__;
    }
    len_64=self->len;
    len_64=(len_64+3)&~3;
    if(_if_conditional66=len_64>=self->size,    _if_conditional66) {
        new_size_65=(self->size+1+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_65)), "libcomelang2-gc.c", 782, "char");
        self->size=new_size_65;
    }
    for(
    i_66=self->len ,    0;    _for_condtionalA5=    i_66<len_64 ,    _for_condtionalA5;    i_66++ ,    0    ){
        self->buf[i_66]=0;
    }
    self->len=len_64;
    __result58__ = __result_obj__ = self;
    return __result58__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
int __result59__;
_Bool _if_conditional68;
int __result60__;
_Bool _if_conditional69;
int __result61__;
int __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional67=left==((void*)0)&&right==((void*)0),    _if_conditional67) {
        __result59__ = 0;
        return __result59__;
    }
    else {
        if(_if_conditional68=left==((void*)0),        _if_conditional68) {
            __result60__ = -1;
            return __result60__;
        }
        else {
            if(_if_conditional69=right==((void*)0),            _if_conditional69) {
                __result61__ = 1;
                return __result61__;
            }
        }
    }
    __result62__ = strcmp(left->buf,right->buf);
    return __result62__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* result_67;
_Bool _if_conditional70;
struct buffer* __result63__;
struct buffer* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_67, 0, sizeof(struct buffer*));
    result_67=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 812, "struct buffer"));
    if(_if_conditional70=self==((void*)0),    _if_conditional70) {
        __result63__ = __result_obj__ = result_67;
        return __result63__;
    }
    buffer_append_str(result_67,self);
    __result64__ = __result_obj__ = result_67;
    return __result64__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* result_68;
_Bool _if_conditional71;
struct buffer* __result65__;
struct buffer* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_68, 0, sizeof(struct buffer*));
    result_68=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 825, "struct buffer"));
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        __result65__ = __result_obj__ = result_68;
        return __result65__;
    }
    buffer_append_str(result_68,self);
    __result66__ = __result_obj__ = result_68;
    return __result66__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
char* __result67__;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional72=self==((void*)0),    _if_conditional72) {
        __result67__ = __result_obj__ = __builtin_string("");
        return __result67__;
    }
    __result68__ = __result_obj__ = __builtin_string(self->buf);
    return __result68__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result69__ = self==right;
    return __result69__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result70__ = self==right;
    return __result70__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result71__ = self==right;
    return __result71__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result72__ = self==right;
    return __result72__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result73__ = self==right;
    return __result73__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result74__ = self==right;
    return __result74__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = self==right;
    return __result75__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result76__ = self==right;
    return __result76__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional73;
_Bool __result77__;
_Bool _if_conditional74;
_Bool __result78__;
_Bool _if_conditional75;
_Bool __result79__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional73=self==((void*)0)&&right==((void*)0),    _if_conditional73) {
        __result77__ = (_Bool)1;
        return __result77__;
    }
    else {
        if(_if_conditional74=self==((void*)0),        _if_conditional74) {
            __result78__ = (_Bool)0;
            return __result78__;
        }
        else {
            if(_if_conditional75=right==((void*)0),            _if_conditional75) {
                __result79__ = (_Bool)0;
                return __result79__;
            }
        }
    }
    __result80__ = strcmp(self,right)==0;
    return __result80__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional76;
_Bool __result81__;
_Bool _if_conditional77;
_Bool __result82__;
_Bool _if_conditional78;
_Bool __result83__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional76=self==((void*)0)&&right==((void*)0),    _if_conditional76) {
        __result81__ = (_Bool)1;
        return __result81__;
    }
    else {
        if(_if_conditional77=self==((void*)0),        _if_conditional77) {
            __result82__ = (_Bool)0;
            return __result82__;
        }
        else {
            if(_if_conditional78=right==((void*)0),            _if_conditional78) {
                __result83__ = (_Bool)0;
                return __result83__;
            }
        }
    }
    __result84__ = strcmp(self,right)==0;
    return __result84__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
_Bool __result85__;
_Bool _if_conditional80;
_Bool __result86__;
_Bool _if_conditional81;
_Bool __result87__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional79=self==((void*)0)&&right==((void*)0),    _if_conditional79) {
        __result85__ = (_Bool)1;
        return __result85__;
    }
    else {
        if(_if_conditional80=self==((void*)0),        _if_conditional80) {
            __result86__ = (_Bool)0;
            return __result86__;
        }
        else {
            if(_if_conditional81=right==((void*)0),            _if_conditional81) {
                __result87__ = (_Bool)0;
                return __result87__;
            }
        }
    }
    __result88__ = strcmp(self,right)==0;
    return __result88__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional82;
_Bool __result89__;
_Bool _if_conditional83;
_Bool __result90__;
_Bool _if_conditional84;
_Bool __result91__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional82=self==((void*)0)&&right==((void*)0),    _if_conditional82) {
        __result89__ = (_Bool)1;
        return __result89__;
    }
    else {
        if(_if_conditional83=self==((void*)0),        _if_conditional83) {
            __result90__ = (_Bool)0;
            return __result90__;
        }
        else {
            if(_if_conditional84=right==((void*)0),            _if_conditional84) {
                __result91__ = (_Bool)0;
                return __result91__;
            }
        }
    }
    __result92__ = strcmp(self,right)==0;
    return __result92__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional85;
_Bool __result93__;
_Bool _if_conditional86;
_Bool __result94__;
_Bool _if_conditional87;
_Bool __result95__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional85=self==((void*)0)&&right==((void*)0),    _if_conditional85) {
        __result93__ = (_Bool)0;
        return __result93__;
    }
    else {
        if(_if_conditional86=self==((void*)0),        _if_conditional86) {
            __result94__ = (_Bool)1;
            return __result94__;
        }
        else {
            if(_if_conditional87=right==((void*)0),            _if_conditional87) {
                __result95__ = (_Bool)1;
                return __result95__;
            }
        }
    }
    __result96__ = strcmp(self,right)!=0;
    return __result96__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional88;
_Bool __result97__;
_Bool _if_conditional89;
_Bool __result98__;
_Bool _if_conditional90;
_Bool __result99__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional88=self==((void*)0)&&right==((void*)0),    _if_conditional88) {
        __result97__ = (_Bool)0;
        return __result97__;
    }
    else {
        if(_if_conditional89=self==((void*)0),        _if_conditional89) {
            __result98__ = (_Bool)1;
            return __result98__;
        }
        else {
            if(_if_conditional90=right==((void*)0),            _if_conditional90) {
                __result99__ = (_Bool)1;
                return __result99__;
            }
        }
    }
    __result100__ = strcmp(self,right)!=0;
    return __result100__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional91;
char* __result101__;
int len_69;
char* result_70;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_69, 0, sizeof(int));
memset(&result_70, 0, sizeof(char*));
    if(_if_conditional91=self==((void*)0)||right==((void*)0),    _if_conditional91) {
        __result101__ = __result_obj__ = __builtin_string("");
        return __result101__;
    }
    len_69=strlen(self)+strlen(right);
    result_70=(char*)come_calloc(1, sizeof(char)*(1*(len_69+1)), "libcomelang2-gc.c", 986, "char");
    strncpy(result_70,self,len_69+1);
    strncat(result_70,right,len_69+1);
    __result102__ = __result_obj__ = result_70;
    return __result102__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional92;
char* __result103__;
int len_71;
char* result_72;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_71, 0, sizeof(int));
memset(&result_72, 0, sizeof(char*));
    if(_if_conditional92=self==((void*)0)||right==((void*)0),    _if_conditional92) {
        __result103__ = __result_obj__ = __builtin_string("");
        return __result103__;
    }
    len_71=strlen(self)+strlen(right);
    result_72=(char*)come_calloc(1, sizeof(char)*(1*(len_71+1)), "libcomelang2-gc.c", 1001, "char");
    strncpy(result_72,self,len_71+1);
    strncat(result_72,right,len_71+1);
    __result104__ = __result_obj__ = result_72;
    return __result104__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
char* __result105__;
struct buffer* buf_73;
int i_74;
_Bool _for_condtionalA6;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_73, 0, sizeof(struct buffer*));
memset(&i_74, 0, sizeof(int));
    if(_if_conditional93=self==((void*)0),    _if_conditional93) {
        __result105__ = __result_obj__ = __builtin_string("");
        return __result105__;
    }
    buf_73=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1014, "struct buffer"));
    for(
    i_74=0 ,    0;    _for_condtionalA6=    i_74<right ,    _for_condtionalA6;    i_74++ ,    0    ){
        buffer_append_str(buf_73,self);
    }
    __result106__ = __result_obj__ = buffer_to_string(buf_73);
    return __result106__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
char* __result107__;
struct buffer* buf_75;
int i_76;
_Bool _for_condtionalA7;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_75, 0, sizeof(struct buffer*));
memset(&i_76, 0, sizeof(int));
    if(_if_conditional94=self==((void*)0),    _if_conditional94) {
        __result107__ = __result_obj__ = __builtin_string("");
        return __result107__;
    }
    buf_75=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1028, "struct buffer"));
    for(
    i_76=0 ,    0;    _for_condtionalA7=    i_76<right ,    _for_condtionalA7;    i_76++ ,    0    ){
        buffer_append_str(buf_75,self);
    }
    __result108__ = __result_obj__ = buffer_to_string(buf_75);
    return __result108__;
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result109__ = (int_get_hash_key(((int)value)));
    return __result109__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result110__ = value;
    return __result110__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result111__ = value;
    return __result111__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result112__ = value;
    return __result112__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result113__ = value;
    return __result113__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = value;
    return __result114__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = (unsigned int)value;
    return __result115__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = (unsigned int)value;
    return __result116__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
unsigned int __result117__;
int result_77;
char* p_78;
_Bool _while_condtional1;
unsigned int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_77, 0, sizeof(int));
memset(&p_78, 0, sizeof(char*));
    if(_if_conditional95=value==((void*)0),    _if_conditional95) {
        __result117__ = 0;
        return __result117__;
    }
    result_77=0;
    p_78=value;
    while(_while_condtional1=*p_78,    _while_condtional1) {
        result_77+=(*p_78);
        p_78++;
    }
    __result118__ = result_77;
    return __result118__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
unsigned int __result119__;
int result_79;
char* p_80;
_Bool _while_condtional2;
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_79, 0, sizeof(int));
memset(&p_80, 0, sizeof(char*));
    if(_if_conditional96=value==((void*)0),    _if_conditional96) {
        __result119__ = 0;
        return __result119__;
    }
    result_79=0;
    p_80=value;
    while(_while_condtional2=*p_80,    _while_condtional2) {
        result_79+=(*p_80);
        p_80++;
    }
    __result120__ = result_79;
    return __result120__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result121__ = self;
    return __result121__;
}

char char_clone(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result122__ = self;
    return __result122__;
}

short int short_clone(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
short int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result123__ = self;
    return __result123__;
}

int int_clone(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = self;
    return __result124__;
}

long int long_clone(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = self;
    return __result125__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = self;
    return __result126__;
}

double double_clone(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
double __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = self;
    return __result127__;
}

float float_clone(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
float __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = self;
    return __result128__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
char* __result129__;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional97=self==((void*)0),    _if_conditional97) {
        __result129__ = __result_obj__ = ((void*)0);
        return __result129__;
    }
    __result130__ = __result_obj__ = __builtin_string(self);
    return __result130__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
char* __result131__;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional98=self==((void*)0),    _if_conditional98) {
        __result131__ = __result_obj__ = ((void*)0);
        return __result131__;
    }
    __result132__ = __result_obj__ = __builtin_string(self);
    return __result132__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_81;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_81, 0, sizeof(_Bool));
    result_81=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result133__ = result_81;
    return __result133__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result134__ = c==32||c==9;
    return __result134__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = (c>=48&&c<=57);
    return __result135__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result136__ = xiswalpha(c)||xiswdigit(c);
    return __result136__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_82;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_82, 0, sizeof(_Bool));
    result_82=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result137__ = result_82;
    return __result137__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result138__ = c==32||c==9;
    return __result138__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = (c>=48&&c<=57);
    return __result139__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result140__ = xisalpha(c)||xisdigit(c);
    return __result140__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_83;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_83, 0, sizeof(_Bool));
    result_83=(c>=32&&c<=126);
    __result141__ = result_83;
    return __result141__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_84;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_84, 0, sizeof(_Bool));
    result_84=(c>=32&&c<=126);
    __result142__ = result_84;
    return __result142__;
}

int string_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
int __result143__;
int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional99=str==((void*)0),    _if_conditional99) {
        __result143__ = 0;
        return __result143__;
    }
    __result144__ = strlen(str);
    return __result144__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
int __result145__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional100=str==((void*)0),    _if_conditional100) {
        __result145__ = 0;
        return __result145__;
    }
    __result146__ = strlen(str);
    return __result146__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
char* __result147__;
int len_85;
char* result_86;
int i_87;
_Bool _for_condtionalA8;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_85, 0, sizeof(int));
memset(&result_86, 0, sizeof(char*));
memset(&i_87, 0, sizeof(int));
    if(_if_conditional101=str==((void*)0),    _if_conditional101) {
        __result147__ = __result_obj__ = __builtin_string("");
        return __result147__;
    }
    len_85=strlen(str);
    result_86=(char*)come_calloc(1, sizeof(char)*(1*(len_85+1)), "libcomelang2-gc.c", 1245, "char");
    for(
    i_87=0 ,    0;    _for_condtionalA8=    i_87<len_85 ,    _for_condtionalA8;    i_87++ ,    0    ){
        result_86[i_87]=str[len_85-i_87-1];
    }
    result_86[len_85]=0;
    __result148__ = __result_obj__ = result_86;
    return __result148__;
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
char* __result149__;
int len_88;
char* result_89;
int i_90;
_Bool _for_condtionalA9;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_88, 0, sizeof(int));
memset(&result_89, 0, sizeof(char*));
memset(&i_90, 0, sizeof(int));
    if(_if_conditional102=str==((void*)0),    _if_conditional102) {
        __result149__ = __result_obj__ = __builtin_string("");
        return __result149__;
    }
    len_88=strlen(str);
    result_89=(char*)come_calloc(1, sizeof(char)*(1*(len_88+1)), "libcomelang2-gc.c", 1262, "char");
    for(
    i_90=0 ,    0;    _for_condtionalA9=    i_90<len_88 ,    _for_condtionalA9;    i_90++ ,    0    ){
        result_89[i_90]=str[len_88-i_90-1];
    }
    result_89[len_88]=0;
    __result150__ = __result_obj__ = result_89;
    return __result150__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
char* __result151__;
int len_91;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
char* __result152__;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
char* __result153__;
_Bool _if_conditional110;
char* __result154__;
char* result_92;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_91, 0, sizeof(int));
memset(&result_92, 0, sizeof(char*));
    if(_if_conditional103=str==((void*)0),    _if_conditional103) {
        __result151__ = __result_obj__ = __builtin_string("");
        return __result151__;
    }
    len_91=strlen(str);
    if(_if_conditional104=head<0,    _if_conditional104) {
        head+=len_91;
    }
    if(_if_conditional105=tail<0,    _if_conditional105) {
        tail+=len_91+1;
    }
    if(_if_conditional106=head>tail,    _if_conditional106) {
        __result152__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result152__;
    }
    if(_if_conditional107=head<0,    _if_conditional107) {
        head=0;
    }
    if(_if_conditional108=tail>=len_91,    _if_conditional108) {
        tail=len_91;
    }
    if(_if_conditional109=head==tail,    _if_conditional109) {
        __result153__ = __result_obj__ = __builtin_string("");
        return __result153__;
    }
    if(_if_conditional110=tail-head+1<1,    _if_conditional110) {
        __result154__ = __result_obj__ = __builtin_string("");
        return __result154__;
    }
    result_92=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1307, "char");
    memcpy(result_92,str+head,tail-head);
    result_92[tail-head]=0;
    __result155__ = __result_obj__ = result_92;
    return __result155__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
char* __result156__;
int len_93;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
char* __result157__;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
char* __result158__;
_Bool _if_conditional118;
char* __result159__;
char* result_94;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_93, 0, sizeof(int));
memset(&result_94, 0, sizeof(char*));
    if(_if_conditional111=str==((void*)0),    _if_conditional111) {
        __result156__ = __result_obj__ = __builtin_string("");
        return __result156__;
    }
    len_93=strlen(str);
    if(_if_conditional112=head<0,    _if_conditional112) {
        head+=len_93;
    }
    if(_if_conditional113=tail<0,    _if_conditional113) {
        tail+=len_93+1;
    }
    if(_if_conditional114=head>tail,    _if_conditional114) {
        __result157__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result157__;
    }
    if(_if_conditional115=head<0,    _if_conditional115) {
        head=0;
    }
    if(_if_conditional116=tail>=len_93,    _if_conditional116) {
        tail=len_93;
    }
    if(_if_conditional117=head==tail,    _if_conditional117) {
        __result158__ = __result_obj__ = __builtin_string("");
        return __result158__;
    }
    if(_if_conditional118=tail-head+1<1,    _if_conditional118) {
        __result159__ = __result_obj__ = __builtin_string("");
        return __result159__;
    }
    result_94=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1350, "char");
    memcpy(result_94,str+head,tail-head);
    result_94[tail-head]=0;
    __result160__ = __result_obj__ = result_94;
    return __result160__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
char* __result161__;
int len_95;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
char* __result162__;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
char* __result163__;
_Bool _if_conditional126;
char* __result164__;
char* result_96;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_95, 0, sizeof(int));
memset(&result_96, 0, sizeof(char*));
    if(_if_conditional119=str==((void*)0),    _if_conditional119) {
        __result161__ = __result_obj__ = __builtin_string("");
        return __result161__;
    }
    len_95=strlen(str);
    if(_if_conditional120=head<0,    _if_conditional120) {
        head+=len_95;
    }
    if(_if_conditional121=tail<0,    _if_conditional121) {
        tail+=len_95+1;
    }
    if(_if_conditional122=head>tail,    _if_conditional122) {
        __result162__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result162__;
    }
    if(_if_conditional123=head<0,    _if_conditional123) {
        head=0;
    }
    if(_if_conditional124=tail>=len_95,    _if_conditional124) {
        tail=len_95;
    }
    if(_if_conditional125=head==tail,    _if_conditional125) {
        __result163__ = __result_obj__ = __builtin_string("");
        return __result163__;
    }
    if(_if_conditional126=tail-head+1<1,    _if_conditional126) {
        __result164__ = __result_obj__ = __builtin_string("");
        return __result164__;
    }
    result_96=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1393, "char");
    memcpy(result_96,str+head,tail-head);
    result_96[tail-head]=0;
    __result165__ = __result_obj__ = result_96;
    return __result165__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
char* __result166__;
int len_97;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
char* __result167__;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
char* __result168__;
_Bool _if_conditional134;
char* __result169__;
char* result_98;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_97, 0, sizeof(int));
memset(&result_98, 0, sizeof(char*));
    if(_if_conditional127=str==((void*)0),    _if_conditional127) {
        __result166__ = __result_obj__ = __builtin_string("");
        return __result166__;
    }
    len_97=strlen(str);
    if(_if_conditional128=head<0,    _if_conditional128) {
        head+=len_97;
    }
    if(_if_conditional129=tail<0,    _if_conditional129) {
        tail+=len_97+1;
    }
    if(_if_conditional130=head>tail,    _if_conditional130) {
        __result167__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result167__;
    }
    if(_if_conditional131=head<0,    _if_conditional131) {
        head=0;
    }
    if(_if_conditional132=tail>=len_97,    _if_conditional132) {
        tail=len_97;
    }
    if(_if_conditional133=head==tail,    _if_conditional133) {
        __result168__ = __result_obj__ = __builtin_string("");
        return __result168__;
    }
    if(_if_conditional134=tail-head+1<1,    _if_conditional134) {
        __result169__ = __result_obj__ = __builtin_string("");
        return __result169__;
    }
    result_98=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1436, "char");
    memcpy(result_98,str+head,tail-head);
    result_98[tail-head]=0;
    __result170__ = __result_obj__ = result_98;
    return __result170__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
char* __result171__;
va_list args_99;
char* result_100;
int len_101;
_Bool _if_conditional136;
char* __result172__;
char* result2_102;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&args_99, 0, sizeof(va_list));
memset(&result_100, 0, sizeof(char*));
memset(&len_101, 0, sizeof(int));
memset(&result2_102, 0, sizeof(char*));
    if(_if_conditional135=msg==((void*)0),    _if_conditional135) {
        __result171__ = __result_obj__ = __builtin_string("");
        return __result171__;
    }
    __builtin_va_start(args_99,msg);
    len_101=vasprintf(&result_100,msg,args_99);
    __builtin_va_end(args_99);
    if(_if_conditional136=len_101<0,    _if_conditional136) {
        __result172__ = __result_obj__ = __builtin_string("");
        return __result172__;
    }
    result2_102=__builtin_string(result_100);
    free(result_100);
    __result173__ = __result_obj__ = result2_102;
    return __result173__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional137;
char* __result174__;
int len_103;
_Bool _if_conditional138;
char* __result175__;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
char* __result176__;
_Bool _if_conditional143;
char* sub_str_104;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_103, 0, sizeof(int));
memset(&sub_str_104, 0, sizeof(char*));
    if(_if_conditional137=str==((void*)0),    _if_conditional137) {
        __result174__ = __result_obj__ = __builtin_string("");
        return __result174__;
    }
    len_103=strlen(str);
    if(_if_conditional138=strcmp(str,"")==0,    _if_conditional138) {
        __result175__ = __result_obj__ = __builtin_string(str);
        return __result175__;
    }
    if(_if_conditional139=head<0,    _if_conditional139) {
        head+=len_103;
    }
    if(_if_conditional140=tail<0,    _if_conditional140) {
        tail+=len_103+1;
    }
    if(_if_conditional141=head<0,    _if_conditional141) {
        head=0;
    }
    if(_if_conditional142=tail<0,    _if_conditional142) {
        __result176__ = __result_obj__ = __builtin_string(str);
        return __result176__;
    }
    if(_if_conditional143=tail>=len_103,    _if_conditional143) {
        tail=len_103;
    }
    sub_str_104=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_104,string_length(sub_str_104)+1);
    __result177__ = __result_obj__ = __builtin_string(str);
    return __result177__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional144;
char* __result178__;
int len_105;
_Bool _if_conditional145;
char* __result179__;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
char* __result180__;
_Bool _if_conditional150;
char* sub_str_106;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_105, 0, sizeof(int));
memset(&sub_str_106, 0, sizeof(char*));
    if(_if_conditional144=str==((void*)0),    _if_conditional144) {
        __result178__ = __result_obj__ = __builtin_string("");
        return __result178__;
    }
    len_105=strlen(str);
    if(_if_conditional145=strcmp(str,"")==0,    _if_conditional145) {
        __result179__ = __result_obj__ = __builtin_string(str);
        return __result179__;
    }
    if(_if_conditional146=head<0,    _if_conditional146) {
        head+=len_105;
    }
    if(_if_conditional147=tail<0,    _if_conditional147) {
        tail+=len_105+1;
    }
    if(_if_conditional148=head<0,    _if_conditional148) {
        head=0;
    }
    if(_if_conditional149=tail<0,    _if_conditional149) {
        __result180__ = __result_obj__ = __builtin_string(str);
        return __result180__;
    }
    if(_if_conditional150=tail>=len_105,    _if_conditional150) {
        tail=len_105;
    }
    sub_str_106=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_106,string_length(sub_str_106)+1);
    __result181__ = __result_obj__ = __builtin_string(str);
    return __result181__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional151;
struct list$1charph* __result183__;
struct list$1charph* result_107;
struct buffer* str_108;
int i_109;
_Bool _for_condtionalA10;
_Bool _if_conditional152;
_Bool _if_conditional155;
struct list$1charph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_107, 0, sizeof(struct list$1charph*));
memset(&str_108, 0, sizeof(struct buffer*));
memset(&i_109, 0, sizeof(int));
    if(_if_conditional151=self==((void*)0),    _if_conditional151) {
        __result183__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1547, "struct list$1charph"));
        return __result183__;
    }
    result_107=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1550, "struct list$1charph"));
    str_108=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1552, "struct buffer"));
    for(
    i_109=0 ,    0;    _for_condtionalA10=    i_109<charp_length(self) ,    _for_condtionalA10;    i_109++ ,    0    ){
        if(_if_conditional152=self[i_109]==c,        _if_conditional152) {
            list$1charph_push_back(result_107,__builtin_string(str_108->buf));
            buffer_reset(str_108);
        }
        else {
            buffer_append_char(str_108,self[i_109]);
        }
    }
    if(_if_conditional155=buffer_length(str_108)!=0,    _if_conditional155) {
        list$1charph_push_back(result_107,__builtin_string(str_108->buf));
    }
    __result185__ = __result_obj__ = result_107;
    return __result185__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result182__ = __result_obj__ = self;
            return __result182__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional153;
struct list_item$1charph* litem_110;
_Bool _if_conditional154;
struct list_item$1charph* litem_111;
struct list_item$1charph* litem_112;
struct list$1charph* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
memset(&litem_112, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional153=self->len==0,                _if_conditional153) {
                    litem_110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 224, "struct list_item$1charph");
                    litem_110->prev=((void*)0);
                    litem_110->next=((void*)0);
                    litem_110->item=item;
                    self->tail=litem_110;
                    self->head=litem_110;
                }
                else {
                    if(_if_conditional154=self->len==1,                    _if_conditional154) {
                        litem_111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 234, "struct list_item$1charph");
                        litem_111->prev=self->head;
                        litem_111->next=((void*)0);
                        litem_111->item=item;
                        self->tail=litem_111;
                        self->head->next=litem_111;
                    }
                    else {
                        litem_112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 244, "struct list_item$1charph");
                        litem_112->prev=self->tail;
                        litem_112->next=((void*)0);
                        litem_112->item=item;
                        self->tail->next=litem_112;
                        self->tail=litem_112;
                    }
                }
                self->len++;
                __result184__ = __result_obj__ = self;
                return __result184__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional156;
struct list$1charph* __result186__;
struct list$1charph* result_113;
struct buffer* str_114;
int i_115;
_Bool _for_condtionalA11;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct list$1charph* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_113, 0, sizeof(struct list$1charph*));
memset(&str_114, 0, sizeof(struct buffer*));
memset(&i_115, 0, sizeof(int));
    if(_if_conditional156=self==((void*)0),    _if_conditional156) {
        __result186__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1573, "struct list$1charph"));
        return __result186__;
    }
    result_113=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1576, "struct list$1charph"));
    str_114=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1578, "struct buffer"));
    for(
    i_115=0 ,    0;    _for_condtionalA11=    i_115<charp_length(self) ,    _for_condtionalA11;    i_115++ ,    0    ){
        if(_if_conditional157=self[i_115]==c,        _if_conditional157) {
            list$1charph_push_back(result_113,__builtin_string(str_114->buf));
            buffer_reset(str_114);
        }
        else {
            buffer_append_char(str_114,self[i_115]);
        }
    }
    if(_if_conditional158=buffer_length(str_114)!=0,    _if_conditional158) {
        list$1charph_push_back(result_113,__builtin_string(str_114->buf));
    }
    __result187__ = __result_obj__ = result_113;
    return __result187__;
}

char* xbasename(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional159;
char* __result188__;
char* p_116;
_Bool _while_condtional3;
_Bool _if_conditional160;
_Bool _if_conditional161;
char* __result189__;
char* __result190__;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_116, 0, sizeof(char*));
    if(_if_conditional159=path==((void*)0),    _if_conditional159) {
        __result188__ = __result_obj__ = __builtin_string("");
        return __result188__;
    }
    p_116=path+strlen(path);
    while(_while_condtional3=p_116>=path,    _while_condtional3) {
        if(_if_conditional160=*p_116==47,        _if_conditional160) {
            break;
        }
        else {
            p_116--;
        }
    }
    if(_if_conditional161=p_116<path,    _if_conditional161) {
        __result189__ = __result_obj__ = __builtin_string(path);
        return __result189__;
    }
    else {
        __result190__ = __result_obj__ = __builtin_string(p_116+1);
        return __result190__;
    }
    __result191__ = __result_obj__ = __builtin_string("");
    return __result191__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
char* __result192__;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional162=path==((void*)0),    _if_conditional162) {
        __result192__ = __result_obj__ = __builtin_string("");
        return __result192__;
    }
    __result193__ = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    return __result193__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
char* __result194__;
char* path2_117;
char* p_118;
_Bool _while_condtional4;
_Bool _if_conditional164;
_Bool _if_conditional165;
char* __result195__;
char* __result196__;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&path2_117, 0, sizeof(char*));
memset(&p_118, 0, sizeof(char*));
    if(_if_conditional163=path==((void*)0),    _if_conditional163) {
        __result194__ = __result_obj__ = __builtin_string("");
        return __result194__;
    }
    path2_117=xbasename(path);
    p_118=path2_117+strlen(path2_117);
    while(_while_condtional4=p_118>=path2_117,    _while_condtional4) {
        if(_if_conditional164=*p_118==46,        _if_conditional164) {
            break;
        }
        else {
            p_118--;
        }
    }
    if(_if_conditional165=p_118<path2_117,    _if_conditional165) {
        __result195__ = __result_obj__ = __builtin_string(path2_117);
        return __result195__;
    }
    else {
        __result196__ = __result_obj__ = string_substring(path2_117,0,p_118-path2_117);
        return __result196__;
    }
    __result197__ = __result_obj__ = __builtin_string("");
    return __result197__;
}

char* xextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional166;
char* __result198__;
char* p_119;
_Bool _while_condtional5;
_Bool _if_conditional167;
_Bool _if_conditional168;
char* __result199__;
char* __result200__;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_119, 0, sizeof(char*));
    if(_if_conditional166=path==((void*)0),    _if_conditional166) {
        __result198__ = __result_obj__ = __builtin_string("");
        return __result198__;
    }
    p_119=path+strlen(path);
    while(_while_condtional5=p_119>=path,    _while_condtional5) {
        if(_if_conditional167=*p_119==46,        _if_conditional167) {
            break;
        }
        else {
            p_119--;
        }
    }
    if(_if_conditional168=p_119<path,    _if_conditional168) {
        __result199__ = __result_obj__ = __builtin_string(path);
        return __result199__;
    }
    else {
        __result200__ = __result_obj__ = __builtin_string(p_119+1);
        return __result200__;
    }
    __result201__ = __result_obj__ = __builtin_string("");
    return __result201__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
char* __result202__;
char* result_120;
char* result2_121;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_120, 0, sizeof(char*));
memset(&result2_121, 0, sizeof(char*));
    if(_if_conditional169=path==((void*)0),    _if_conditional169) {
        __result202__ = __result_obj__ = __builtin_string("");
        return __result202__;
    }
    result_120=realpath(path,((void*)0));
    result2_121=__builtin_string(result_120);
    free(result_120);
    __result203__ = __result_obj__ = result2_121;
    return __result203__;
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
char* __result204__;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional170=self,    _if_conditional170) {
        __result204__ = __result_obj__ = __builtin_string("true");
        return __result204__;
    }
    else {
        __result205__ = __result_obj__ = __builtin_string("false");
        return __result205__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result206__ = __result_obj__ = xsprintf("%c",self);
    return __result206__;
}

char* short_to_string(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result207__ = __result_obj__ = xsprintf("%d",self);
    return __result207__;
}

char* int_to_string(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result208__ = __result_obj__ = xsprintf("%d",self);
    return __result208__;
}

char* long_to_string(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result209__ = __result_obj__ = xsprintf("%ld",self);
    return __result209__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result210__ = __result_obj__ = xsprintf("%ld",self);
    return __result210__;
}

char* float_to_string(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result211__ = __result_obj__ = xsprintf("%f",self);
    return __result211__;
}

char* double_to_string(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result212__ = __result_obj__ = xsprintf("%lf",self);
    return __result212__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
char* __result213__;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional171=self==((void*)0),    _if_conditional171) {
        __result213__ = __result_obj__ = __builtin_string("");
        return __result213__;
    }
    __result214__ = __result_obj__ = __builtin_string(self);
    return __result214__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
char* __result215__;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional172=self==((void*)0),    _if_conditional172) {
        __result215__ = __result_obj__ = __builtin_string("");
        return __result215__;
    }
    __result216__ = __result_obj__ = __builtin_string(self);
    return __result216__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional173;
int __result217__;
_Bool _if_conditional174;
int __result218__;
_Bool _if_conditional175;
int __result219__;
int __result220__;
int __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional173=!left&&right,    _if_conditional173) {
        __result217__ = -1;
        return __result217__;
    }
    else {
        if(_if_conditional174=left&&right,        _if_conditional174) {
            __result218__ = 0;
            return __result218__;
        }
        else {
            if(_if_conditional175=!left&&!right,            _if_conditional175) {
                __result219__ = 0;
                return __result219__;
            }
            else {
                __result220__ = 1;
                return __result220__;
            }
        }
    }
    __result221__ = 0;
    return __result221__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
int __result222__;
_Bool _if_conditional177;
int __result223__;
int __result224__;
int __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional176=left<right,    _if_conditional176) {
        __result222__ = -1;
        return __result222__;
    }
    else {
        if(_if_conditional177=left>right,        _if_conditional177) {
            __result223__ = 1;
            return __result223__;
        }
        else {
            __result224__ = 0;
            return __result224__;
        }
    }
    __result225__ = 0;
    return __result225__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
int __result226__;
_Bool _if_conditional179;
int __result227__;
int __result228__;
int __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional178=left<right,    _if_conditional178) {
        __result226__ = -1;
        return __result226__;
    }
    else {
        if(_if_conditional179=left>right,        _if_conditional179) {
            __result227__ = 1;
            return __result227__;
        }
        else {
            __result228__ = 0;
            return __result228__;
        }
    }
    __result229__ = 0;
    return __result229__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
int __result230__;
_Bool _if_conditional181;
int __result231__;
int __result232__;
int __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional180=left<right,    _if_conditional180) {
        __result230__ = -1;
        return __result230__;
    }
    else {
        if(_if_conditional181=left>right,        _if_conditional181) {
            __result231__ = 1;
            return __result231__;
        }
        else {
            __result232__ = 0;
            return __result232__;
        }
    }
    __result233__ = 0;
    return __result233__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
int __result234__;
_Bool _if_conditional183;
int __result235__;
int __result236__;
int __result237__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional182=left<right,    _if_conditional182) {
        __result234__ = -1;
        return __result234__;
    }
    else {
        if(_if_conditional183=left>right,        _if_conditional183) {
            __result235__ = 1;
            return __result235__;
        }
        else {
            __result236__ = 0;
            return __result236__;
        }
    }
    __result237__ = 0;
    return __result237__;
}

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional184;
int __result238__;
_Bool _if_conditional185;
int __result239__;
int __result240__;
int __result241__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional184=left<right,    _if_conditional184) {
        __result238__ = -1;
        return __result238__;
    }
    else {
        if(_if_conditional185=left>right,        _if_conditional185) {
            __result239__ = 1;
            return __result239__;
        }
        else {
            __result240__ = 0;
            return __result240__;
        }
    }
    __result241__ = 0;
    return __result241__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
int __result242__;
_Bool _if_conditional187;
int __result243__;
int __result244__;
int __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional186=left<right,    _if_conditional186) {
        __result242__ = -1;
        return __result242__;
    }
    else {
        if(_if_conditional187=left>right,        _if_conditional187) {
            __result243__ = 1;
            return __result243__;
        }
        else {
            __result244__ = 0;
            return __result244__;
        }
    }
    __result245__ = 0;
    return __result245__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
int __result246__;
_Bool _if_conditional189;
int __result247__;
int __result248__;
int __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional188=left<right,    _if_conditional188) {
        __result246__ = -1;
        return __result246__;
    }
    else {
        if(_if_conditional189=left>right,        _if_conditional189) {
            __result247__ = 1;
            return __result247__;
        }
        else {
            __result248__ = 0;
            return __result248__;
        }
    }
    __result249__ = 0;
    return __result249__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
int __result250__;
_Bool _if_conditional191;
int __result251__;
_Bool _if_conditional192;
int __result252__;
int __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional190=left==((void*)0)&&right==((void*)0),    _if_conditional190) {
        __result250__ = 0;
        return __result250__;
    }
    else {
        if(_if_conditional191=left==((void*)0),        _if_conditional191) {
            __result251__ = -1;
            return __result251__;
        }
        else {
            if(_if_conditional192=right==((void*)0),            _if_conditional192) {
                __result252__ = 1;
                return __result252__;
            }
        }
    }
    __result253__ = strcmp(left,right);
    return __result253__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional193;
int __result254__;
_Bool _if_conditional194;
int __result255__;
_Bool _if_conditional195;
int __result256__;
int __result257__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional193=left==((void*)0)&&right==((void*)0),    _if_conditional193) {
        __result254__ = 0;
        return __result254__;
    }
    else {
        if(_if_conditional194=left==((void*)0),        _if_conditional194) {
            __result255__ = -1;
            return __result255__;
        }
        else {
            if(_if_conditional195=right==((void*)0),            _if_conditional195) {
                __result256__ = 1;
                return __result256__;
            }
        }
    }
    __result257__ = strcmp(left,right);
    return __result257__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
char* __result258__;
struct buffer* buf_122;
_Bool _while_condtional6;
int size_124;
_Bool _if_conditional197;
char* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_122, 0, sizeof(struct buffer*));
memset(&size_124, 0, sizeof(int));
    if(_if_conditional196=f==((void*)0),    _if_conditional196) {
        __result258__ = __result_obj__ = __builtin_string("");
        return __result258__;
    }
    buf_122=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1929, "struct buffer"));
    while(_while_condtional6=1,    _while_condtional6) {
        char buf2_123[1024];
        memset(&buf2_123, 0, sizeof(char)        *(1024)        );
        size_124=fread(buf2_123,1,1024,f);
        buffer_append(buf_122,buf2_123,size_124);
        if(_if_conditional197=size_124<1024,        _if_conditional197) {
            break;
        }
    }
    __result259__ = __result_obj__ = buffer_to_string(buf_122);
    return __result259__;
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
int __result260__;
int __result261__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional198=f==((void*)0)||str==((void*)0),    _if_conditional198) {
        __result260__ = -1;
        return __result260__;
    }
    __result261__ = fwrite(str,strlen(str),1,f);
    return __result261__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
int __result262__;
int result_125;
_Bool _if_conditional200;
int __result263__;
int __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_125, 0, sizeof(int));
    if(_if_conditional199=f==((void*)0),    _if_conditional199) {
        __result262__ = -1;
        return __result262__;
    }
    result_125=fclose(f);
    if(_if_conditional200=result_125<0,    _if_conditional200) {
        __result263__ = result_125;
        return __result263__;
    }
    __result264__ = result_125;
    return __result264__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional201;
struct _IO_FILE* __result265__;
va_list args_127;
int result_128;
_Bool _if_conditional202;
struct _IO_FILE* __result266__;
struct _IO_FILE* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&args_127, 0, sizeof(va_list));
memset(&result_128, 0, sizeof(int));
    if(_if_conditional201=f==((void*)0)||msg==((void*)0),    _if_conditional201) {
        __result265__ = __result_obj__ = f;
        return __result265__;
    }
    char msg2_126[1024*2*2*2];
    memset(&msg2_126, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_127,msg);
    vsnprintf(msg2_126,1024*2*2*2,msg,args_127);
    __builtin_va_end(args_127);
    result_128=fprintf(f,"%s",msg2_126);
    if(_if_conditional202=result_128<0,    _if_conditional202) {
        __result266__ = __result_obj__ = f;
        return __result266__;
    }
    __result267__ = __result_obj__ = f;
    return __result267__;
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
int __result268__;
struct _IO_FILE* f_129;
_Bool _if_conditional204;
_Bool _if_conditional205;
int __result269__;
int result_130;
_Bool _if_conditional206;
int __result270__;
int result2_131;
_Bool _if_conditional207;
int __result271__;
int __result272__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_129, 0, sizeof(struct _IO_FILE*));
memset(&result_130, 0, sizeof(int));
memset(&result2_131, 0, sizeof(int));
    if(_if_conditional203=self==((void*)0)||file_name==((void*)0),    _if_conditional203) {
        __result268__ = -1;
        return __result268__;
    }
    if(_if_conditional204=append,    _if_conditional204) {
        f_129=fopen(file_name,"a");
    }
    else {
        f_129=fopen(file_name,"w");
    }
    if(_if_conditional205=f_129==((void*)0),    _if_conditional205) {
        __result269__ = -1;
        return __result269__;
    }
    result_130=fwrite(self,strlen(self),1,f_129);
    if(_if_conditional206=result_130<0,    _if_conditional206) {
        __result270__ = result_130;
        return __result270__;
    }
    result2_131=fclose(f_129);
    if(_if_conditional207=result2_131<0,    _if_conditional207) {
        __result271__ = result2_131;
        return __result271__;
    }
    __result272__ = result_130;
    return __result272__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
int __result273__;
struct _IO_FILE* f_132;
_Bool _if_conditional209;
_Bool _if_conditional210;
int __result274__;
int result_133;
_Bool _if_conditional211;
int __result275__;
int result2_134;
_Bool _if_conditional212;
int __result276__;
int __result277__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_132, 0, sizeof(struct _IO_FILE*));
memset(&result_133, 0, sizeof(int));
memset(&result2_134, 0, sizeof(int));
    if(_if_conditional208=self==((void*)0)||file_name==((void*)0),    _if_conditional208) {
        __result273__ = -1;
        return __result273__;
    }
    if(_if_conditional209=append,    _if_conditional209) {
        f_132=fopen(file_name,"a");
    }
    else {
        f_132=fopen(file_name,"w");
    }
    if(_if_conditional210=f_132==((void*)0),    _if_conditional210) {
        __result274__ = -1;
        return __result274__;
    }
    result_133=fwrite(self,strlen(self),1,f_132);
    if(_if_conditional211=result_133<0,    _if_conditional211) {
        __result275__ = result_133;
        return __result275__;
    }
    result2_134=fclose(f_132);
    if(_if_conditional212=result2_134<0,    _if_conditional212) {
        __result276__ = result2_134;
        return __result276__;
    }
    __result277__ = result_133;
    return __result277__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional213;
char* __result278__;
struct _IO_FILE* f_135;
_Bool _if_conditional214;
char* __result279__;
struct buffer* buf_136;
_Bool _while_condtional7;
int size_138;
_Bool _if_conditional215;
char* result_139;
int result2_140;
_Bool _if_conditional216;
char* __result280__;
char* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_135, 0, sizeof(struct _IO_FILE*));
memset(&buf_136, 0, sizeof(struct buffer*));
memset(&size_138, 0, sizeof(int));
memset(&result_139, 0, sizeof(char*));
memset(&result2_140, 0, sizeof(int));
    if(_if_conditional213=file_name==((void*)0),    _if_conditional213) {
        __result278__ = __result_obj__ = __builtin_string("");
        return __result278__;
    }
    f_135=fopen(file_name,"r");
    if(_if_conditional214=f_135==((void*)0),    _if_conditional214) {
        __result279__ = __result_obj__ = __builtin_string("");
        return __result279__;
    }
    buf_136=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 2069, "struct buffer"));
    while(_while_condtional7=1,    _while_condtional7) {
        char buf2_137[1024];
        memset(&buf2_137, 0, sizeof(char)        *(1024)        );
        size_138=fread(buf2_137,1,1024,f_135);
        buffer_append(buf_136,buf2_137,size_138);
        if(_if_conditional215=size_138<1024,        _if_conditional215) {
            break;
        }
    }
    result_139=buffer_to_string(buf_136);
    result2_140=fclose(f_135);
    if(_if_conditional216=result2_140<0,    _if_conditional216) {
        __result280__ = __result_obj__ = __builtin_string("");
        return __result280__;
    }
    __result281__ = __result_obj__ = result_139;
    return __result281__;
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional217;
char* __result282__;
struct _IO_FILE* f_141;
_Bool _if_conditional218;
char* __result283__;
struct buffer* buf_142;
_Bool _while_condtional8;
int size_144;
_Bool _if_conditional219;
char* result_145;
int result2_146;
_Bool _if_conditional220;
char* __result284__;
char* __result285__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_141, 0, sizeof(struct _IO_FILE*));
memset(&buf_142, 0, sizeof(struct buffer*));
memset(&size_144, 0, sizeof(int));
memset(&result_145, 0, sizeof(char*));
memset(&result2_146, 0, sizeof(int));
    if(_if_conditional217=file_name==((void*)0),    _if_conditional217) {
        __result282__ = __result_obj__ = __builtin_string("");
        return __result282__;
    }
    f_141=fopen(file_name,"r");
    if(_if_conditional218=f_141==((void*)0),    _if_conditional218) {
        __result283__ = __result_obj__ = __builtin_string("");
        return __result283__;
    }
    buf_142=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 2106, "struct buffer"));
    while(_while_condtional8=1,    _while_condtional8) {
        char buf2_143[1024];
        memset(&buf2_143, 0, sizeof(char)        *(1024)        );
        size_144=fread(buf2_143,1,1024,f_141);
        buffer_append(buf_142,buf2_143,size_144);
        if(_if_conditional219=size_144<1024,        _if_conditional219) {
            break;
        }
    }
    result_145=buffer_to_string(buf_142);
    result2_146=fclose(f_141);
    if(_if_conditional220=result2_146<0,    _if_conditional220) {
        __result284__ = __result_obj__ = __builtin_string("");
        return __result284__;
    }
    __result285__ = __result_obj__ = result_145;
    return __result285__;
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* result_147;
_Bool _if_conditional221;
struct list$1charph* __result286__;
_Bool _while_condtional9;
_Bool _if_conditional222;
struct list$1charph* __result287__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_147, 0, sizeof(struct list$1charph*));
    result_147=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 2133, "struct list$1charph"));
    if(_if_conditional221=f==((void*)0),    _if_conditional221) {
        __result286__ = __result_obj__ = result_147;
        return __result286__;
    }
    while(_while_condtional9=1,    _while_condtional9) {
        char buf_148[1024];
        memset(&buf_148, 0, sizeof(char)        *(1024)        );
        if(_if_conditional222=fgets(buf_148,1024,f)==((void*)0),        _if_conditional222) {
            break;
        }
        list$1charph_push_back(result_147,__builtin_string(buf_148));
    }
    __result287__ = __result_obj__ = result_147;
    return __result287__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional223;
int __result288__;
struct _IO_FILE* f_149;
_Bool _if_conditional224;
_Bool _if_conditional225;
int __result289__;
int __result290__;
int __result291__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_149, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional223=path==((void*)0)||mode==((void*)0),    _if_conditional223) {
        __result288__ = -1;
        return __result288__;
    }
    f_149=fopen(path,mode);
    if(_if_conditional224=f_149,    _if_conditional224) {
        block(parent,f_149);
        if(_if_conditional225=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional225) {
            fclose(f_149);
            __result289__ = 0;
            return __result289__;
        }
        fclose(f_149);
        __result290__ = 0;
        return __result290__;
    }
    __result291__ = -1;
    return __result291__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
char* __result292__;
char* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional226=self==((void*)0),    _if_conditional226) {
        __result292__ = __result_obj__ = __builtin_string("");
        return __result292__;
    }
    puts(self);
    __result293__ = __result_obj__ = __builtin_string(self);
    return __result293__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
char* __result294__;
char* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional227=self==((void*)0),    _if_conditional227) {
        __result294__ = __result_obj__ = __builtin_string("");
        return __result294__;
    }
    printf("%s",self);
    __result295__ = __result_obj__ = __builtin_string(self);
    return __result295__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
char* __result296__;
char* msg2_150;
va_list args_151;
char* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_150, 0, sizeof(char*));
memset(&args_151, 0, sizeof(va_list));
    if(_if_conditional228=self==((void*)0),    _if_conditional228) {
        __result296__ = __result_obj__ = __builtin_string("");
        return __result296__;
    }
    __builtin_va_start(args_151,self);
    vasprintf(&msg2_150,self,args_151);
    __builtin_va_end(args_151);
    printf("%s",msg2_150);
    free(msg2_150);
    __result297__ = __result_obj__ = __builtin_string(self);
    return __result297__;
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional229;
char* __result298__;
char* msg2_152;
va_list args_153;
char* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_152, 0, sizeof(char*));
memset(&args_153, 0, sizeof(va_list));
    if(_if_conditional229=self==((void*)0),    _if_conditional229) {
        __result298__ = __result_obj__ = __builtin_string("");
        return __result298__;
    }
    __builtin_va_start(args_153,self);
    vasprintf(&msg2_152,self,args_153);
    __builtin_va_end(args_153);
    printf("%s",msg2_152);
    free(msg2_152);
    __result299__ = __result_obj__ = __builtin_string(self);
    return __result299__;
}

int int_printf(int self, char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result300__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf(msg,self);
    __result300__ = self;
    return __result300__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional230;
char* __result301__;
char* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional230=self==((void*)0),    _if_conditional230) {
        __result301__ = __result_obj__ = __builtin_string("");
        return __result301__;
    }
    puts(self);
    __result302__ = __result_obj__ = __builtin_string(self);
    return __result302__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_154;
_Bool _for_condtionalA12;
_Bool _if_conditional231;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_154, 0, sizeof(int));
    for(
    i_154=0 ,    0;    _for_condtionalA12=    i_154<self ,    _for_condtionalA12;    i_154++ ,    0    ){
        block(parent,i_154);
        if(_if_conditional231=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional231) {
            return;
        }
    }
}

