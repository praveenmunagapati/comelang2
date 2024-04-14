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
int gComeStackFrameID[1024];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
struct sMemHeaderTiny
{
    unsigned long int size;
    int allocated;
    char* class_name;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    unsigned long int size;
    int allocated;
    char* class_name;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
};
struct sMemHeader* gAllocMem;

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

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

char* dirname(char* anonymous_var_nameX525);

char* basename(char* anonymous_var_nameX526);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX528)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX530)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX532)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX533);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX534);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX535);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX536);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX537)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX538);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX539);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX540);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX541);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX542);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX543);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX544);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX545);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX546);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX547);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX548);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX549);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX550);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX551);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX552);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX553);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX554);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX555);

char* GC_strdup(const char* anonymous_var_nameX556);

char* GC_strndup(const char* anonymous_var_nameX557, unsigned long int anonymous_var_nameX558);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX559);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX560);

void* GC_memalign(unsigned long int anonymous_var_nameX561, unsigned long int anonymous_var_nameX562);

int GC_posix_memalign(void** anonymous_var_nameX563, unsigned long int anonymous_var_nameX564, unsigned long int anonymous_var_nameX565);

void GC_free(void* anonymous_var_nameX566);

void GC_change_stubborn(const void* anonymous_var_nameX567);

void GC_end_stubborn_change(const void* anonymous_var_nameX568);

void* GC_base(void* anonymous_var_nameX569);

int GC_is_heap_ptr(const void* anonymous_var_nameX570);

unsigned long int GC_size(const void* anonymous_var_nameX571);

void* GC_realloc(void* anonymous_var_nameX572, unsigned long int anonymous_var_nameX573);

int GC_expand_hp(unsigned long int anonymous_var_nameX574);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX575);

void GC_exclude_static_roots(void* anonymous_var_nameX576, void* anonymous_var_nameX577);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX578, void* anonymous_var_nameX579);

void GC_remove_roots(void* anonymous_var_nameX580, void* anonymous_var_nameX581);

void GC_register_displacement(unsigned long int anonymous_var_nameX582);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX583);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX584)());

void GC_set_stop_func(int (*anonymous_var_nameX585)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX586, unsigned long int* anonymous_var_nameX587, unsigned long int* anonymous_var_nameX588, unsigned long int* anonymous_var_nameX589, unsigned long int* anonymous_var_nameX590);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX591, unsigned long int anonymous_var_nameX592);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX593);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX594);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX595);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX596);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX597, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX598, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX599, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX600, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX601, unsigned long int anonymous_var_nameX602, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX603, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX604, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX605, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX606, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX607);

void* GC_debug_realloc(void* anonymous_var_nameX608, unsigned long int anonymous_var_nameX609, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX610);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX611);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX612);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX613, unsigned long int anonymous_var_nameX614);

void GC_register_finalizer(void* anonymous_var_nameX617, void (*anonymous_var_nameX618)(void*,void*), void* anonymous_var_nameX619, void (*anonymous_var_nameX620)(void*,void*), void** anonymous_var_nameX621);

void GC_debug_register_finalizer(void* anonymous_var_nameX622, void (*anonymous_var_nameX623)(void*,void*), void* anonymous_var_nameX624, void (*anonymous_var_nameX625)(void*,void*), void** anonymous_var_nameX626);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX627, void (*anonymous_var_nameX628)(void*,void*), void* anonymous_var_nameX629, void (*anonymous_var_nameX630)(void*,void*), void** anonymous_var_nameX631);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX632, void (*anonymous_var_nameX633)(void*,void*), void* anonymous_var_nameX634, void (*anonymous_var_nameX635)(void*,void*), void** anonymous_var_nameX636);

void GC_register_finalizer_no_order(void* anonymous_var_nameX637, void (*anonymous_var_nameX638)(void*,void*), void* anonymous_var_nameX639, void (*anonymous_var_nameX640)(void*,void*), void** anonymous_var_nameX641);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX642, void (*anonymous_var_nameX643)(void*,void*), void* anonymous_var_nameX644, void (*anonymous_var_nameX645)(void*,void*), void** anonymous_var_nameX646);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX647, void (*anonymous_var_nameX648)(void*,void*), void* anonymous_var_nameX649, void (*anonymous_var_nameX650)(void*,void*), void** anonymous_var_nameX651);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX652, void (*anonymous_var_nameX653)(void*,void*), void* anonymous_var_nameX654, void (*anonymous_var_nameX655)(void*,void*), void** anonymous_var_nameX656);

int GC_register_disappearing_link(void** anonymous_var_nameX657);

int GC_general_register_disappearing_link(void** anonymous_var_nameX658, const void* anonymous_var_nameX659);

int GC_move_disappearing_link(void** anonymous_var_nameX660, void** anonymous_var_nameX661);

int GC_unregister_disappearing_link(void** anonymous_var_nameX662);

int GC_register_long_link(void** anonymous_var_nameX663, const void* anonymous_var_nameX664);

int GC_move_long_link(void** anonymous_var_nameX665, void** anonymous_var_nameX666);

int GC_unregister_long_link(void** anonymous_var_nameX667);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX669)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX670, int anonymous_var_nameX671);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX673)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX674);

void GC_set_warn_proc(void (*anonymous_var_nameX677)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX678, unsigned long int anonymous_var_nameX679);

void GC_set_log_fd(int anonymous_var_nameX680);

void GC_set_abort_func(void (*anonymous_var_nameX682)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX684)(void*), void* anonymous_var_nameX685);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX688)(struct GC_stack_base*,void*), void* anonymous_var_nameX689);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX690)(void*), void* anonymous_var_nameX691);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX692)(void*), void* anonymous_var_nameX693);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX694);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX695);

void GC_set_stackbottom(void* anonymous_var_nameX696, const struct GC_stack_base* anonymous_var_nameX697);

void* GC_same_obj(void* anonymous_var_nameX698, void* anonymous_var_nameX699);

void* GC_pre_incr(void** anonymous_var_nameX700, long anonymous_var_nameX701);

void* GC_post_incr(void** anonymous_var_nameX702, long anonymous_var_nameX703);

void* GC_is_visible(void* anonymous_var_nameX704);

void* GC_is_valid_displacement(void* anonymous_var_nameX705);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX706);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX707, const void* anonymous_var_nameX708);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX709, const void* anonymous_var_nameX710);

void* GC_malloc_many(unsigned long int anonymous_var_nameX731);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX735)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX736);

int GC_get_force_unmap_on_gcollect();

void GC_win32_free_heap();

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void exception_stackframe();

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline, int id);

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
char* come_dynamic_typeof(void* mem);

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

struct integer* integer_initialize(struct integer* self, long value);

int integer_to_int(struct integer* self);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_compare(struct integer* left, struct integer* right);

_Bool integer_equals(struct integer* self, struct integer* right);

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
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"));
    buffer_append(result_0,self,sizeof(char)*len);
    __result2__ = __result_obj__ = result_0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"));
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result3__ = __result_obj__ = result_1;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"));
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result4__ = __result_obj__ = result_2;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result5__ = __result_obj__ = result_3;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result6__ = __result_obj__ = result_4;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1985, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result7__ = __result_obj__ = result_5;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_6;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
    result_6=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "smart_pointer$1char");
    result_6->memory=buffer_clone(self);
    result_6->p=result_6->memory->buf;
    __result8__ = __result_obj__ = result_6;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_7;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
    result_7=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "smart_pointer$1char");
    result_7->memory=buffer_clone(self);
    result_7->p=(char*)result_7->memory->buf;
    __result9__ = __result_obj__ = result_7;
    return __result9__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1short* result_8;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
    result_8=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "smart_pointer$1short");
    result_8->memory=buffer_clone(self);
    result_8->p=(short short*)result_8->memory->buf;
    __result10__ = __result_obj__ = result_8;
    return __result10__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1int* result_9;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
    result_9=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "smart_pointer$1int");
    result_9->memory=buffer_clone(self);
    result_9->p=(int*)result_9->memory->buf;
    __result11__ = __result_obj__ = result_9;
    return __result11__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1long* result_10;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
    result_10=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "smart_pointer$1long");
    result_10->memory=buffer_clone(self);
    result_10->p=(long*)result_10->memory->buf;
    __result12__ = __result_obj__ = result_10;
    return __result12__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    __result14__ = __result_obj__ = smart_pointer$1char_initialize((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2208, "smart_pointer$1char"),self,sizeof(char)*len);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    __result16__ = __result_obj__ = smart_pointer$1short_initialize((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2213, "smart_pointer$1short"),self,sizeof(short short)*len);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    __result18__ = __result_obj__ = smart_pointer$1int_initialize((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2218, "smart_pointer$1int"),self,sizeof(int)*len);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    __result20__ = __result_obj__ = smart_pointer$1long_initialize((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2223, "smart_pointer$1long"),self,sizeof(long)*len);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    __result22__ = __result_obj__ = smart_pointer$1float_initialize((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2228, "smart_pointer$1float"),self,sizeof(float)*len);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    __result24__ = __result_obj__ = smart_pointer$1double_initialize((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2233, "smart_pointer$1double"),self,sizeof(double)*len);
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
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
    __result31__ = __result_obj__ = xsprintf(msg,self);
    return __result31__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __result32__ = __result_obj__ = xsprintf(msg,self);
    return __result32__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    __result33__ = __result_obj__ = xsprintf(msg,self);
    return __result33__;
}

// body function













static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"));
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result13__ = __result_obj__ = self;
        return __result13__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"));
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result15__ = __result_obj__ = self;
        return __result15__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"));
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result17__ = __result_obj__ = self;
        return __result17__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"));
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result19__ = __result_obj__ = self;
        return __result19__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"));
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result21__ = __result_obj__ = self;
        return __result21__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"));
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result23__ = __result_obj__ = self;
        return __result23__;
}










void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional1=gNumComeStackFrame<1024,    _if_conditional1) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional2=gNumComeStackFrame>0,    _if_conditional2) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
struct buffer* buf_11;
int i_12;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_11, 0, sizeof(struct buffer*));
memset(&i_12, 0, sizeof(int));
    buf_11=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 44, "buffer"));
    buffer_append_str(buf_11,xsprintf("%s %d\n",sname,sline));
    for(    i_12=gNumComeStackFrame-2;    i_12>=0;    i_12--    ){
        buffer_append_str(buf_11,xsprintf("%s %d #%d\n",gComeStackFrameSName[i_12],gComeStackFrameSLine[i_12],gComeStackFrameID[i_12]));
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(buffer_to_string(buf_11));
}

void exception_stackframe(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    printf("%s",gComeStackFrameBuffer);
}

void stackframe(){
void* __result_obj__;
int i_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_13, 0, sizeof(int));
    for(    i_13=gNumComeStackFrame-1;    i_13>=0;    i_13--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_13],gComeStackFrameSLine[i_13],gComeStackFrameID[i_13]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
    __result34__ = __result_obj__ = __builtin_string(gComeStackFrameBuffer);
    return __result34__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional4;
void* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional4=mem==((void*)0),    _if_conditional4) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result35__ = __result_obj__ = mem;
    return __result35__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
void* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
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
    __result36__ = __result_obj__ = mem;
    return __result36__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool __result37__;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional8=!self,    _if_conditional8) {
        block(parent);
        if(_if_conditional9=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional9) {
            __result37__ = self;
            return __result37__;
        }
        stackframe();
        exit(1);
    }
    __result38__ = self;
    return __result38__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = self;
    return __result39__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional10;
_Bool _if_conditional11;
int __result40__;
int __result41__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional10=self<0,    _if_conditional10) {
        block(parent);
        if(_if_conditional11=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional11) {
            __result40__ = self;
            return __result40__;
        }
    }
    __result41__ = self;
    return __result41__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional12;
_Bool _if_conditional13;
int __result42__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional12=self<0,    _if_conditional12) {
        block(parent);
        if(_if_conditional13=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional13) {
            __result42__ = self;
            return __result42__;
        }
        stackframe();
        exit(1);
    }
    __result43__ = self;
    return __result43__;
}

int int_value(int self){
void* __result_obj__;
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    __result44__ = self;
    return __result44__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result45__;
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional14=self<0,    _if_conditional14) {
        block(parent);
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            __result45__ = self;
            return __result45__;
        }
    }
    __result46__ = self;
    return __result46__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool __result47__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional16=!self,    _if_conditional16) {
        block(parent);
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            __result47__ = self;
            return __result47__;
        }
    }
    __result48__ = self;
    return __result48__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool __result49__;
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional18=!self,    _if_conditional18) {
        block(parent);
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            __result49__ = self;
            return __result49__;
        }
    }
    __result50__ = self;
    return __result50__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
    printf("%s...",msg);
    if(_if_conditional20=!test,    _if_conditional20) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
    gComeMallocLib=(_Bool)0;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    if(gComeGCLib) {
        GC_init();
        GC_set_warn_proc(GC_ignore_warn_proc);
        GC_enable_incremental();
    }
    gComeStackFrameBuffer=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional23;
void* result_14;
struct sMemHeader* it_15;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
void* __result51__;
void* result_16;
struct sMemHeaderTiny* it_17;
_Bool _if_conditional27;
_Bool _if_conditional28;
void* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_14, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct sMemHeader*));
memset(&result_16, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct sMemHeaderTiny*));
    if(gComeDebugLib) {
        result_14=GC_malloc(size+sizeof(struct sMemHeader));
        memset(result_14,0,size+sizeof(struct sMemHeader));
        it_15=result_14;
        it_15->allocated=177783;
        it_15->size=size+sizeof(struct sMemHeader);
        come_push_stackframe(sname,sline,0);
        if(_if_conditional24=gNumComeStackFrame<16,        _if_conditional24) {
            memcpy(it_15->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_15->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_15->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_15->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_15->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_15->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_15->next=gAllocMem;
        it_15->prev=((void*)0);
        if(class_name) {
            it_15->class_name=GC_strdup(class_name);
        }
        else {
            it_15->class_name=((void*)0);
        }
        if(gAllocMem) {
            gAllocMem->prev=it_15;
        }
        gAllocMem=it_15;
        __result51__ = __result_obj__ = (char*)result_14+sizeof(struct sMemHeader);
        return __result51__;
    }
    else {
        result_16=GC_malloc(size+sizeof(struct sMemHeaderTiny));
        memset(result_16,0,size+sizeof(struct sMemHeaderTiny));
        it_17=result_16;
        it_17->allocated=177783;
        if(class_name) {
            it_17->class_name=GC_strdup(class_name);
        }
        else {
            it_17->class_name=((void*)0);
        }
        it_17->size=size+sizeof(struct sMemHeaderTiny);
        it_17->next=(struct sMemHeaderTiny*)gAllocMem;
        it_17->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_17;
        }
        gAllocMem=(struct sMemHeader*)it_17;
        __result52__ = __result_obj__ = (char*)result_16+sizeof(struct sMemHeaderTiny);
        return __result52__;
    }
}

static void come_free_mem_of_heap_pool(char* mem){
void* __result_obj__;
_Bool _if_conditional29;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
    if(mem) {
        if(gComeDebugLib) {
        }
        else {
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__;
struct sMemHeaderTiny* it_18;
_Bool _if_conditional31;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct sMemHeaderTiny*));
    it_18=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    if(_if_conditional31=it_18->allocated!=177783,    _if_conditional31) {
        fprintf((stderr),"invalid heap object(%p)\n",it_18);
        exit(2);
    }
    __result53__ = __result_obj__ = it_18->class_name;
    return __result53__;
}

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_19;
unsigned long int* ref_count_20;
unsigned long int* size2_21;
void* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_19, 0, sizeof(char*));
memset(&ref_count_20, 0, sizeof(unsigned long int*));
memset(&size2_21, 0, sizeof(unsigned long int*));
    mem_19=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    ref_count_20=(unsigned long int*)mem_19;
    *ref_count_20=0;
    size2_21=(unsigned long int*)(mem_19+sizeof(unsigned long int));
    *size2_21=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    __result54__ = __result_obj__ = mem_19+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result54__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional32;
unsigned long int* ref_count_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_22, 0, sizeof(unsigned long int*));
    if(_if_conditional32=mem==((void*)0),    _if_conditional32) {
        return;
    }
    ref_count_22=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_22);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional33;
unsigned long int* ref_count_23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_23, 0, sizeof(unsigned long int*));
    if(_if_conditional33=mem==((void*)0),    _if_conditional33) {
        return;
    }
    ref_count_23=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_23);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional34;
void* __result55__;
char* mem_24;
unsigned long int* size_p_25;
unsigned long int size_26;
void* result_27;
void* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_24, 0, sizeof(char*));
memset(&size_p_25, 0, sizeof(unsigned long int*));
memset(&size_26, 0, sizeof(unsigned long int));
memset(&result_27, 0, sizeof(void*));
    if(_if_conditional34=!block,    _if_conditional34) {
        __result55__ = __result_obj__ = ((void*)0);
        return __result55__;
    }
    mem_24=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_25=(unsigned long int*)(mem_24+sizeof(unsigned long int));
    size_26=*size_p_25-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_27=come_calloc(1,size_26,sname,sline,class_name);
    memcpy(result_27,block,size_26);
    __result56__ = __result_obj__ = result_27;
    return __result56__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional35;
void* __result57__;
unsigned long int* ref_count_28;
void* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_28, 0, sizeof(unsigned long int*));
    if(_if_conditional35=mem==((void*)0),    _if_conditional35) {
        __result57__ = __result_obj__ = mem;
        return __result57__;
    }
    ref_count_28=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*ref_count_28)++;
    __result58__ = __result_obj__ = mem;
    return __result58__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional36;
void* __result59__;
unsigned long int* ref_count_29;
void* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_29, 0, sizeof(unsigned long int*));
    if(_if_conditional36=mem==((void*)0),    _if_conditional36) {
        __result59__ = __result_obj__ = mem;
        return __result59__;
    }
    ref_count_29=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    printf("ref_count %ld\n",*ref_count_29);
    __result60__ = __result_obj__ = mem;
    return __result60__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional37;
void* __result61__;
unsigned long int* ref_count_30;
_Bool _if_conditional38;
unsigned long int count_31;
_Bool _if_conditional39;
_Bool _if_conditional40;
void (*finalizer_32)(void*);
void* __result62__;
void* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_30, 0, sizeof(unsigned long int*));
memset(&count_31, 0, sizeof(unsigned long int));
memset(&finalizer_32, 0, sizeof(void (*)(void*)));
    if(_if_conditional37=mem==((void*)0),    _if_conditional37) {
        __result61__ = __result_obj__ = ((void*)0);
        return __result61__;
    }
    ref_count_30=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional38=!no_decrement,    _if_conditional38) {
        (*ref_count_30)--;
    }
    count_31=*ref_count_30;
    if(_if_conditional39=!no_free&&(count_31<=0||force_delete_),    _if_conditional39) {
        if(_if_conditional40=protocol_obj&&protocol_fun,        _if_conditional40) {
            finalizer_32=protocol_fun;
            finalizer_32(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result62__ = __result_obj__ = ((void*)0);
        return __result62__;
    }
    __result63__ = __result_obj__ = mem;
    return __result63__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
void (*finalizer_33)(void*);
void (*finalizer_34)(void*);
unsigned long int* ref_count_35;
_Bool _if_conditional45;
unsigned long int count_36;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
void (*finalizer_37)(void*);
_Bool _if_conditional49;
void (*finalizer_38)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_33, 0, sizeof(void (*)(void*)));
memset(&finalizer_34, 0, sizeof(void (*)(void*)));
memset(&ref_count_35, 0, sizeof(unsigned long int*));
memset(&count_36, 0, sizeof(unsigned long int));
memset(&finalizer_37, 0, sizeof(void (*)(void*)));
memset(&finalizer_38, 0, sizeof(void (*)(void*)));
    if(_if_conditional41=mem==((void*)0),    _if_conditional41) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional44=protocol_obj&&protocol_fun,            _if_conditional44) {
                finalizer_33=protocol_fun;
                finalizer_33(protocol_obj);
            }
            finalizer_34=fun;
            finalizer_34(mem);
        }
    }
    else {
        ref_count_35=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional45=!no_decrement,        _if_conditional45) {
            (*ref_count_35)--;
        }
        count_36=*ref_count_35;
        if(_if_conditional46=!no_free&&(count_36<=0||force_delete_),        _if_conditional46) {
            if(mem) {
                if(_if_conditional48=protocol_obj&&protocol_fun,                _if_conditional48) {
                    finalizer_37=protocol_fun;
                    finalizer_37(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_38=fun;
                    finalizer_38(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional50;
char* __result64__;
int len_39;
char* result_40;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_39, 0, sizeof(int));
memset(&result_40, 0, sizeof(char*));
    if(_if_conditional50=str==((void*)0),    _if_conditional50) {
        __result64__ = __result_obj__ = ((void*)0);
        return __result64__;
    }
    len_39=strlen(str)+1;
    result_40=(char*)come_calloc(1, sizeof(char)*(1*(len_39)), "libcomelang2-gc.c", 524, "char");
    strncpy(result_40,str,len_39);
    __result65__ = __result_obj__ = result_40;
    return __result65__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool found_41;
int i_42;
_Bool _if_conditional51;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_41, 0, sizeof(_Bool));
memset(&i_42, 0, sizeof(int));
    found_41=(_Bool)0;
    for(    i_42=0;    i_42<len;    i_42++    ){
        if(_if_conditional51=array[i_42]==element,        _if_conditional51) {
            found_41=(_Bool)1;
            break;
        }
    }
    __result66__ = found_41;
    return __result66__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
struct buffer* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    self->size=128;
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 549, "char");
    self->buf[0]=0;
    self->len=0;
    __result67__ = __result_obj__ = self;
    return __result67__;
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional52=self&&self->buf,    _if_conditional52) {
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional53;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional53=self&&self->buf,    _if_conditional53) {
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional54;
struct buffer* __result68__;
struct buffer* result_43;
struct buffer* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_43, 0, sizeof(struct buffer*));
    if(_if_conditional54=self==((void*)0),    _if_conditional54) {
        __result68__ = __result_obj__ = ((void*)0);
        return __result68__;
    }
    result_43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 571, "buffer");
    result_43->size=self->size;
    result_43->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 574, "char");
    result_43->len=self->len;
    memcpy(result_43->buf,self->buf,self->len);
    __result69__ = __result_obj__ = result_43;
    return __result69__;
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional55;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional55=self==((void*)0),    _if_conditional55) {
        __result70__ = 0;
        return __result70__;
    }
    __result71__ = self->len;
    return __result71__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional56;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional56=self==((void*)0),    _if_conditional56) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional57;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional57=self==((void*)0),    _if_conditional57) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool _if_conditional58;
struct buffer* __result72__;
_Bool _if_conditional59;
char* old_buf_44;
int old_len_45;
int new_size_46;
struct buffer* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_44, 0, sizeof(char*));
memset(&old_len_45, 0, sizeof(int));
memset(&new_size_46, 0, sizeof(int));
    if(_if_conditional58=self==((void*)0)||mem==((void*)0),    _if_conditional58) {
        __result72__ = __result_obj__ = self;
        return __result72__;
    }
    if(_if_conditional59=self->len+size+1+1>=self->size,    _if_conditional59) {
        old_buf_44=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 613, "char");
        memcpy(old_buf_44,self->buf,self->size);
        old_len_45=self->len;
        new_size_46=(self->size+size+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_46)), "libcomelang2-gc.c", 617, "char");
        memcpy(self->buf,old_buf_44,old_len_45);
        self->buf[old_len_45]=0;
        self->size=new_size_46;
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result73__ = __result_obj__ = self;
    return __result73__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional60;
struct buffer* __result74__;
_Bool _if_conditional61;
char* old_buf_47;
int old_len_48;
int new_size_49;
struct buffer* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_47, 0, sizeof(char*));
memset(&old_len_48, 0, sizeof(int));
memset(&new_size_49, 0, sizeof(int));
    if(_if_conditional60=self==((void*)0),    _if_conditional60) {
        __result74__ = __result_obj__ = ((void*)0);
        return __result74__;
    }
    if(_if_conditional61=self->len+1+1+1>=self->size,    _if_conditional61) {
        old_buf_47=charp_clone(self->buf);
        old_len_48=self->len;
        new_size_49=(self->size+10+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_49)), "libcomelang2-gc.c", 640, "char");
        memcpy(self->buf,old_buf_47,old_len_48);
        self->buf[old_len_48]=0;
        self->size=new_size_49;
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result75__ = __result_obj__ = self;
    return __result75__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional62;
struct buffer* __result76__;
int size_50;
_Bool _if_conditional63;
char* old_buf_51;
int old_len_52;
int new_size_53;
struct buffer* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_50, 0, sizeof(int));
memset(&old_buf_51, 0, sizeof(char*));
memset(&old_len_52, 0, sizeof(int));
memset(&new_size_53, 0, sizeof(int));
    if(_if_conditional62=self==((void*)0)||mem==((void*)0),    _if_conditional62) {
        __result76__ = __result_obj__ = self;
        return __result76__;
    }
    size_50=strlen(mem);
    if(_if_conditional63=self->len+size_50+1+1>=self->size,    _if_conditional63) {
        old_buf_51=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 662, "char");
        memcpy(old_buf_51,self->buf,self->size);
        old_len_52=self->len;
        new_size_53=(self->size+size_50+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_53)), "libcomelang2-gc.c", 666, "char");
        memcpy(self->buf,old_buf_51,old_len_52);
        self->buf[old_len_52]=0;
        self->size=new_size_53;
    }
    memcpy(self->buf+self->len,mem,size_50);
    self->len+=size_50;
    self->buf[self->len]=0;
    __result77__ = __result_obj__ = self;
    return __result77__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional64;
struct buffer* __result78__;
int size_54;
_Bool _if_conditional65;
char* old_buf_55;
int old_len_56;
int new_size_57;
struct buffer* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_54, 0, sizeof(int));
memset(&old_buf_55, 0, sizeof(char*));
memset(&old_len_56, 0, sizeof(int));
memset(&new_size_57, 0, sizeof(int));
    if(_if_conditional64=self==((void*)0)||mem==((void*)0),    _if_conditional64) {
        __result78__ = __result_obj__ = self;
        return __result78__;
    }
    size_54=strlen(mem)+1;
    if(_if_conditional65=self->len+size_54+1+1+1>=self->size,    _if_conditional65) {
        old_buf_55=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 686, "char");
        memcpy(old_buf_55,self->buf,self->size);
        old_len_56=self->len;
        new_size_57=(self->size+size_54+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_57)), "libcomelang2-gc.c", 690, "char");
        memcpy(self->buf,old_buf_55,old_len_56);
        self->buf[old_len_56]=0;
        self->size=new_size_57;
    }
    memcpy(self->buf+self->len,mem,size_54);
    self->len+=size_54;
    self->buf[self->len]=0;
    self->len++;
    __result79__ = __result_obj__ = self;
    return __result79__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool _if_conditional66;
struct buffer* __result80__;
int* mem_58;
int size_59;
_Bool _if_conditional67;
char* old_buf_60;
int old_len_61;
int new_size_62;
struct buffer* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_58, 0, sizeof(int*));
memset(&size_59, 0, sizeof(int));
memset(&old_buf_60, 0, sizeof(char*));
memset(&old_len_61, 0, sizeof(int));
memset(&new_size_62, 0, sizeof(int));
    if(_if_conditional66=self==((void*)0),    _if_conditional66) {
        __result80__ = __result_obj__ = ((void*)0);
        return __result80__;
    }
    mem_58=&value;
    size_59=sizeof(int);
    if(_if_conditional67=self->len+size_59+1+1>=self->size,    _if_conditional67) {
        old_buf_60=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 713, "char");
        memcpy(old_buf_60,self->buf,self->size);
        old_len_61=self->len;
        new_size_62=(self->size+size_59+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_62)), "libcomelang2-gc.c", 717, "char");
        memcpy(self->buf,old_buf_60,old_len_61);
        self->buf[old_len_61]=0;
        self->size=new_size_62;
    }
    memcpy(self->buf+self->len,mem_58,size_59);
    self->len+=size_59;
    self->buf[self->len]=0;
    __result81__ = __result_obj__ = self;
    return __result81__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_63;
int size_64;
_Bool _if_conditional68;
char* old_buf_65;
int old_len_66;
int new_size_67;
struct buffer* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_63, 0, sizeof(long*));
memset(&size_64, 0, sizeof(int));
memset(&old_buf_65, 0, sizeof(char*));
memset(&old_len_66, 0, sizeof(int));
memset(&new_size_67, 0, sizeof(int));
    mem_63=&value;
    size_64=sizeof(long);
    if(_if_conditional68=self->len+size_64+1+1>=self->size,    _if_conditional68) {
        old_buf_65=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 736, "char");
        memcpy(old_buf_65,self->buf,self->size);
        old_len_66=self->len;
        new_size_67=(self->size+size_64+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_67)), "libcomelang2-gc.c", 740, "char");
        memcpy(self->buf,old_buf_65,old_len_66);
        self->buf[old_len_66]=0;
        self->size=new_size_67;
    }
    memcpy(self->buf+self->len,mem_63,size_64);
    self->len+=size_64;
    self->buf[self->len]=0;
    __result82__ = __result_obj__ = self;
    return __result82__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool _if_conditional69;
struct buffer* __result83__;
short short* mem_68;
int size_69;
_Bool _if_conditional70;
char* old_buf_70;
int old_len_71;
int new_size_72;
struct buffer* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_68, 0, sizeof(short short*));
memset(&size_69, 0, sizeof(int));
memset(&old_buf_70, 0, sizeof(char*));
memset(&old_len_71, 0, sizeof(int));
memset(&new_size_72, 0, sizeof(int));
    if(_if_conditional69=self==((void*)0),    _if_conditional69) {
        __result83__ = __result_obj__ = ((void*)0);
        return __result83__;
    }
    mem_68=&value;
    size_69=sizeof(short short);
    if(_if_conditional70=self->len+size_69+1+1>=self->size,    _if_conditional70) {
        old_buf_70=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 763, "char");
        memcpy(old_buf_70,self->buf,self->size);
        old_len_71=self->len;
        new_size_72=(self->size+size_69+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_72)), "libcomelang2-gc.c", 767, "char");
        memcpy(self->buf,old_buf_70,old_len_71);
        self->buf[old_len_71]=0;
        self->size=new_size_72;
    }
    memcpy(self->buf+self->len,mem_68,size_69);
    self->len+=size_69;
    self->buf[self->len]=0;
    __result84__ = __result_obj__ = self;
    return __result84__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional71;
struct buffer* __result85__;
int len_73;
_Bool _if_conditional72;
int new_size_74;
int i_75;
struct buffer* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_73, 0, sizeof(int));
memset(&new_size_74, 0, sizeof(int));
memset(&i_75, 0, sizeof(int));
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        __result85__ = __result_obj__ = ((void*)0);
        return __result85__;
    }
    len_73=self->len;
    len_73=(len_73+3)&~3;
    if(_if_conditional72=len_73>=self->size,    _if_conditional72) {
        new_size_74=(self->size+1+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_74)), "libcomelang2-gc.c", 791, "char");
        self->size=new_size_74;
    }
    for(    i_75=self->len;    i_75<len_73;    i_75++    ){
        self->buf[i_75]=0;
    }
    self->len=len_73;
    __result86__ = __result_obj__ = self;
    return __result86__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool _if_conditional73;
int __result87__;
_Bool _if_conditional74;
int __result88__;
_Bool _if_conditional75;
int __result89__;
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional73=left==((void*)0)&&right==((void*)0),    _if_conditional73) {
        __result87__ = 0;
        return __result87__;
    }
    else {
        if(_if_conditional74=left==((void*)0),        _if_conditional74) {
            __result88__ = -1;
            return __result88__;
        }
        else {
            if(_if_conditional75=right==((void*)0),            _if_conditional75) {
                __result89__ = 1;
                return __result89__;
            }
        }
    }
    __result90__ = strcmp(left->buf,right->buf);
    return __result90__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
struct buffer* result_76;
_Bool _if_conditional76;
struct buffer* __result91__;
struct buffer* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_76, 0, sizeof(struct buffer*));
    result_76=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 821, "buffer"));
    if(_if_conditional76=self==((void*)0),    _if_conditional76) {
        __result91__ = __result_obj__ = result_76;
        return __result91__;
    }
    buffer_append_str(result_76,self);
    __result92__ = __result_obj__ = result_76;
    return __result92__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
struct buffer* result_77;
_Bool _if_conditional77;
struct buffer* __result93__;
struct buffer* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct buffer*));
    result_77=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 834, "buffer"));
    if(_if_conditional77=self==((void*)0),    _if_conditional77) {
        __result93__ = __result_obj__ = result_77;
        return __result93__;
    }
    buffer_append_str(result_77,self);
    __result94__ = __result_obj__ = result_77;
    return __result94__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional78;
char* __result95__;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional78=self==((void*)0),    _if_conditional78) {
        __result95__ = __result_obj__ = __builtin_string("");
        return __result95__;
    }
    __result96__ = __result_obj__ = __builtin_string(self->buf);
    return __result96__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    __result97__ = self==right;
    return __result97__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = self==right;
    return __result98__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
    __result99__ = self==right;
    return __result99__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    __result100__ = self==right;
    return __result100__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = self==right;
    return __result101__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = self==right;
    return __result102__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    __result103__ = self==right;
    return __result103__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    __result104__ = self==right;
    return __result104__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional79;
_Bool __result105__;
_Bool _if_conditional80;
_Bool __result106__;
_Bool _if_conditional81;
_Bool __result107__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional79=self==((void*)0)&&right==((void*)0),    _if_conditional79) {
        __result105__ = (_Bool)1;
        return __result105__;
    }
    else {
        if(_if_conditional80=self==((void*)0),        _if_conditional80) {
            __result106__ = (_Bool)0;
            return __result106__;
        }
        else {
            if(_if_conditional81=right==((void*)0),            _if_conditional81) {
                __result107__ = (_Bool)0;
                return __result107__;
            }
        }
    }
    __result108__ = strcmp(self,right)==0;
    return __result108__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional82;
_Bool __result109__;
_Bool _if_conditional83;
_Bool __result110__;
_Bool _if_conditional84;
_Bool __result111__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional82=self==((void*)0)&&right==((void*)0),    _if_conditional82) {
        __result109__ = (_Bool)1;
        return __result109__;
    }
    else {
        if(_if_conditional83=self==((void*)0),        _if_conditional83) {
            __result110__ = (_Bool)0;
            return __result110__;
        }
        else {
            if(_if_conditional84=right==((void*)0),            _if_conditional84) {
                __result111__ = (_Bool)0;
                return __result111__;
            }
        }
    }
    __result112__ = strcmp(self,right)==0;
    return __result112__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional85;
_Bool __result113__;
_Bool _if_conditional86;
_Bool __result114__;
_Bool _if_conditional87;
_Bool __result115__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional85=self==((void*)0)&&right==((void*)0),    _if_conditional85) {
        __result113__ = (_Bool)1;
        return __result113__;
    }
    else {
        if(_if_conditional86=self==((void*)0),        _if_conditional86) {
            __result114__ = (_Bool)0;
            return __result114__;
        }
        else {
            if(_if_conditional87=right==((void*)0),            _if_conditional87) {
                __result115__ = (_Bool)0;
                return __result115__;
            }
        }
    }
    __result116__ = strcmp(self,right)==0;
    return __result116__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional88;
_Bool __result117__;
_Bool _if_conditional89;
_Bool __result118__;
_Bool _if_conditional90;
_Bool __result119__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional88=self==((void*)0)&&right==((void*)0),    _if_conditional88) {
        __result117__ = (_Bool)1;
        return __result117__;
    }
    else {
        if(_if_conditional89=self==((void*)0),        _if_conditional89) {
            __result118__ = (_Bool)0;
            return __result118__;
        }
        else {
            if(_if_conditional90=right==((void*)0),            _if_conditional90) {
                __result119__ = (_Bool)0;
                return __result119__;
            }
        }
    }
    __result120__ = strcmp(self,right)==0;
    return __result120__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional91;
_Bool __result121__;
_Bool _if_conditional92;
_Bool __result122__;
_Bool _if_conditional93;
_Bool __result123__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional91=self==((void*)0)&&right==((void*)0),    _if_conditional91) {
        __result121__ = (_Bool)0;
        return __result121__;
    }
    else {
        if(_if_conditional92=self==((void*)0),        _if_conditional92) {
            __result122__ = (_Bool)1;
            return __result122__;
        }
        else {
            if(_if_conditional93=right==((void*)0),            _if_conditional93) {
                __result123__ = (_Bool)1;
                return __result123__;
            }
        }
    }
    __result124__ = strcmp(self,right)!=0;
    return __result124__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional94;
_Bool __result125__;
_Bool _if_conditional95;
_Bool __result126__;
_Bool _if_conditional96;
_Bool __result127__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional94=self==((void*)0)&&right==((void*)0),    _if_conditional94) {
        __result125__ = (_Bool)0;
        return __result125__;
    }
    else {
        if(_if_conditional95=self==((void*)0),        _if_conditional95) {
            __result126__ = (_Bool)1;
            return __result126__;
        }
        else {
            if(_if_conditional96=right==((void*)0),            _if_conditional96) {
                __result127__ = (_Bool)1;
                return __result127__;
            }
        }
    }
    __result128__ = strcmp(self,right)!=0;
    return __result128__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional97;
char* __result129__;
int len_78;
char* result_79;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_78, 0, sizeof(int));
memset(&result_79, 0, sizeof(char*));
    if(_if_conditional97=self==((void*)0)||right==((void*)0),    _if_conditional97) {
        __result129__ = __result_obj__ = __builtin_string("");
        return __result129__;
    }
    len_78=strlen(self)+strlen(right);
    result_79=(char*)come_calloc(1, sizeof(char)*(1*(len_78+1)), "libcomelang2-gc.c", 995, "char");
    strncpy(result_79,self,len_78+1);
    strncat(result_79,right,len_78+1);
    __result130__ = __result_obj__ = result_79;
    return __result130__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional98;
char* __result131__;
int len_80;
char* result_81;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_80, 0, sizeof(int));
memset(&result_81, 0, sizeof(char*));
    if(_if_conditional98=self==((void*)0)||right==((void*)0),    _if_conditional98) {
        __result131__ = __result_obj__ = __builtin_string("");
        return __result131__;
    }
    len_80=strlen(self)+strlen(right);
    result_81=(char*)come_calloc(1, sizeof(char)*(1*(len_80+1)), "libcomelang2-gc.c", 1010, "char");
    strncpy(result_81,self,len_80+1);
    strncat(result_81,right,len_80+1);
    __result132__ = __result_obj__ = result_81;
    return __result132__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional99;
char* __result133__;
struct buffer* buf_82;
int i_83;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_82, 0, sizeof(struct buffer*));
memset(&i_83, 0, sizeof(int));
    if(_if_conditional99=self==((void*)0),    _if_conditional99) {
        __result133__ = __result_obj__ = __builtin_string("");
        return __result133__;
    }
    buf_82=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1023, "buffer"));
    for(    i_83=0;    i_83<right;    i_83++    ){
        buffer_append_str(buf_82,self);
    }
    __result134__ = __result_obj__ = buffer_to_string(buf_82);
    return __result134__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional100;
char* __result135__;
struct buffer* buf_84;
int i_85;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_84, 0, sizeof(struct buffer*));
memset(&i_85, 0, sizeof(int));
    if(_if_conditional100=self==((void*)0),    _if_conditional100) {
        __result135__ = __result_obj__ = __builtin_string("");
        return __result135__;
    }
    buf_84=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1037, "buffer"));
    for(    i_85=0;    i_85<right;    i_85++    ){
        buffer_append_str(buf_84,self);
    }
    __result136__ = __result_obj__ = buffer_to_string(buf_84);
    return __result136__;
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    __result137__ = (int_get_hash_key(((int)value)));
    return __result137__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    __result138__ = value;
    return __result138__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    __result139__ = value;
    return __result139__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = value;
    return __result140__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    __result141__ = value;
    return __result141__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
unsigned int __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = value;
    return __result142__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = (unsigned int)value;
    return __result143__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    __result144__ = (unsigned int)value;
    return __result144__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional101;
unsigned int __result145__;
int result_86;
char* p_87;
_Bool _while_condtional1;
unsigned int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_86, 0, sizeof(int));
memset(&p_87, 0, sizeof(char*));
    if(_if_conditional101=value==((void*)0),    _if_conditional101) {
        __result145__ = 0;
        return __result145__;
    }
    result_86=0;
    p_87=value;
    while(_while_condtional1=*p_87,    _while_condtional1) {
        result_86+=(*p_87);
        p_87++;
    }
    __result146__ = result_86;
    return __result146__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional102;
unsigned int __result147__;
int result_88;
char* p_89;
_Bool _while_condtional2;
unsigned int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_88, 0, sizeof(int));
memset(&p_89, 0, sizeof(char*));
    if(_if_conditional102=value==((void*)0),    _if_conditional102) {
        __result147__ = 0;
        return __result147__;
    }
    result_88=0;
    p_89=value;
    while(_while_condtional2=*p_89,    _while_condtional2) {
        result_88+=(*p_89);
        p_89++;
    }
    __result148__ = result_88;
    return __result148__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    __result149__ = self;
    return __result149__;
}

char char_clone(char self){
void* __result_obj__;
char __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    __result150__ = self;
    return __result150__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    __result151__ = self;
    return __result151__;
}

int int_clone(int self){
void* __result_obj__;
int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
    __result152__ = self;
    return __result152__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    __result153__ = self;
    return __result153__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
unsigned long int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __result154__ = self;
    return __result154__;
}

double double_clone(double self){
void* __result_obj__;
double __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = self;
    return __result155__;
}

float float_clone(float self){
void* __result_obj__;
float __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = self;
    return __result156__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional103;
char* __result157__;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional103=self==((void*)0),    _if_conditional103) {
        __result157__ = __result_obj__ = ((void*)0);
        return __result157__;
    }
    __result158__ = __result_obj__ = __builtin_string(self);
    return __result158__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional104;
char* __result159__;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional104=self==((void*)0),    _if_conditional104) {
        __result159__ = __result_obj__ = ((void*)0);
        return __result159__;
    }
    __result160__ = __result_obj__ = __builtin_string(self);
    return __result160__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_90;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_90, 0, sizeof(_Bool));
    result_90=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result161__ = result_90;
    return __result161__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = c==32||c==9;
    return __result162__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = (c>=48&&c<=57);
    return __result163__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = xiswalpha(c)||xiswdigit(c);
    return __result164__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_91;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_91, 0, sizeof(_Bool));
    result_91=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result165__ = result_91;
    return __result165__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = c==32||c==9;
    return __result166__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = (c>=48&&c<=57);
    return __result167__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __result168__ = xisalpha(c)||xisdigit(c);
    return __result168__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_92;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(_Bool));
    result_92=(c>=32&&c<=126);
    __result169__ = result_92;
    return __result169__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_93;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(_Bool));
    result_93=(c>=32&&c<=126);
    __result170__ = result_93;
    return __result170__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional105;
int __result171__;
int __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional105=str==((void*)0),    _if_conditional105) {
        __result171__ = 0;
        return __result171__;
    }
    __result172__ = strlen(str);
    return __result172__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional106;
int __result173__;
int __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional106=str==((void*)0),    _if_conditional106) {
        __result173__ = 0;
        return __result173__;
    }
    __result174__ = strlen(str);
    return __result174__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional107;
char* __result175__;
int len_94;
char* result_95;
int i_96;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_94, 0, sizeof(int));
memset(&result_95, 0, sizeof(char*));
memset(&i_96, 0, sizeof(int));
    if(_if_conditional107=str==((void*)0),    _if_conditional107) {
        __result175__ = __result_obj__ = __builtin_string("");
        return __result175__;
    }
    len_94=strlen(str);
    result_95=(char*)come_calloc(1, sizeof(char)*(1*(len_94+1)), "libcomelang2-gc.c", 1254, "char");
    for(    i_96=0;    i_96<len_94;    i_96++    ){
        result_95[i_96]=str[len_94-i_96-1];
    }
    result_95[len_94]=0;
    __result176__ = __result_obj__ = result_95;
    return __result176__;
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional108;
char* __result177__;
int len_97;
char* result_98;
int i_99;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_97, 0, sizeof(int));
memset(&result_98, 0, sizeof(char*));
memset(&i_99, 0, sizeof(int));
    if(_if_conditional108=str==((void*)0),    _if_conditional108) {
        __result177__ = __result_obj__ = __builtin_string("");
        return __result177__;
    }
    len_97=strlen(str);
    result_98=(char*)come_calloc(1, sizeof(char)*(1*(len_97+1)), "libcomelang2-gc.c", 1271, "char");
    for(    i_99=0;    i_99<len_97;    i_99++    ){
        result_98[i_99]=str[len_97-i_99-1];
    }
    result_98[len_97]=0;
    __result178__ = __result_obj__ = result_98;
    return __result178__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional109;
char* __result179__;
int len_100;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
char* __result180__;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
char* __result181__;
_Bool _if_conditional116;
char* __result182__;
char* result_101;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_100, 0, sizeof(int));
memset(&result_101, 0, sizeof(char*));
    if(_if_conditional109=str==((void*)0),    _if_conditional109) {
        __result179__ = __result_obj__ = __builtin_string("");
        return __result179__;
    }
    len_100=strlen(str);
    if(_if_conditional110=head<0,    _if_conditional110) {
        head+=len_100;
    }
    if(_if_conditional111=tail<0,    _if_conditional111) {
        tail+=len_100+1;
    }
    if(_if_conditional112=head>tail,    _if_conditional112) {
        __result180__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result180__;
    }
    if(_if_conditional113=head<0,    _if_conditional113) {
        head=0;
    }
    if(_if_conditional114=tail>=len_100,    _if_conditional114) {
        tail=len_100;
    }
    if(_if_conditional115=head==tail,    _if_conditional115) {
        __result181__ = __result_obj__ = __builtin_string("");
        return __result181__;
    }
    if(_if_conditional116=tail-head+1<1,    _if_conditional116) {
        __result182__ = __result_obj__ = __builtin_string("");
        return __result182__;
    }
    result_101=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1316, "char");
    memcpy(result_101,str+head,tail-head);
    result_101[tail-head]=0;
    __result183__ = __result_obj__ = result_101;
    return __result183__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional117;
char* __result184__;
int len_102;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
char* __result185__;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
char* __result186__;
_Bool _if_conditional124;
char* __result187__;
char* result_103;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_102, 0, sizeof(int));
memset(&result_103, 0, sizeof(char*));
    if(_if_conditional117=str==((void*)0),    _if_conditional117) {
        __result184__ = __result_obj__ = __builtin_string("");
        return __result184__;
    }
    len_102=strlen(str);
    if(_if_conditional118=head<0,    _if_conditional118) {
        head+=len_102;
    }
    if(_if_conditional119=tail<0,    _if_conditional119) {
        tail+=len_102+1;
    }
    if(_if_conditional120=head>tail,    _if_conditional120) {
        __result185__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result185__;
    }
    if(_if_conditional121=head<0,    _if_conditional121) {
        head=0;
    }
    if(_if_conditional122=tail>=len_102,    _if_conditional122) {
        tail=len_102;
    }
    if(_if_conditional123=head==tail,    _if_conditional123) {
        __result186__ = __result_obj__ = __builtin_string("");
        return __result186__;
    }
    if(_if_conditional124=tail-head+1<1,    _if_conditional124) {
        __result187__ = __result_obj__ = __builtin_string("");
        return __result187__;
    }
    result_103=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1359, "char");
    memcpy(result_103,str+head,tail-head);
    result_103[tail-head]=0;
    __result188__ = __result_obj__ = result_103;
    return __result188__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional125;
char* __result189__;
int len_104;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
char* __result190__;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
char* __result191__;
_Bool _if_conditional132;
char* __result192__;
char* result_105;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_104, 0, sizeof(int));
memset(&result_105, 0, sizeof(char*));
    if(_if_conditional125=str==((void*)0),    _if_conditional125) {
        __result189__ = __result_obj__ = __builtin_string("");
        return __result189__;
    }
    len_104=strlen(str);
    if(_if_conditional126=head<0,    _if_conditional126) {
        head+=len_104;
    }
    if(_if_conditional127=tail<0,    _if_conditional127) {
        tail+=len_104+1;
    }
    if(_if_conditional128=head>tail,    _if_conditional128) {
        __result190__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result190__;
    }
    if(_if_conditional129=head<0,    _if_conditional129) {
        head=0;
    }
    if(_if_conditional130=tail>=len_104,    _if_conditional130) {
        tail=len_104;
    }
    if(_if_conditional131=head==tail,    _if_conditional131) {
        __result191__ = __result_obj__ = __builtin_string("");
        return __result191__;
    }
    if(_if_conditional132=tail-head+1<1,    _if_conditional132) {
        __result192__ = __result_obj__ = __builtin_string("");
        return __result192__;
    }
    result_105=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1402, "char");
    memcpy(result_105,str+head,tail-head);
    result_105[tail-head]=0;
    __result193__ = __result_obj__ = result_105;
    return __result193__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional133;
char* __result194__;
int len_106;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
char* __result195__;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
char* __result196__;
_Bool _if_conditional140;
char* __result197__;
char* result_107;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_106, 0, sizeof(int));
memset(&result_107, 0, sizeof(char*));
    if(_if_conditional133=str==((void*)0),    _if_conditional133) {
        __result194__ = __result_obj__ = __builtin_string("");
        return __result194__;
    }
    len_106=strlen(str);
    if(_if_conditional134=head<0,    _if_conditional134) {
        head+=len_106;
    }
    if(_if_conditional135=tail<0,    _if_conditional135) {
        tail+=len_106+1;
    }
    if(_if_conditional136=head>tail,    _if_conditional136) {
        __result195__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result195__;
    }
    if(_if_conditional137=head<0,    _if_conditional137) {
        head=0;
    }
    if(_if_conditional138=tail>=len_106,    _if_conditional138) {
        tail=len_106;
    }
    if(_if_conditional139=head==tail,    _if_conditional139) {
        __result196__ = __result_obj__ = __builtin_string("");
        return __result196__;
    }
    if(_if_conditional140=tail-head+1<1,    _if_conditional140) {
        __result197__ = __result_obj__ = __builtin_string("");
        return __result197__;
    }
    result_107=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1445, "char");
    memcpy(result_107,str+head,tail-head);
    result_107[tail-head]=0;
    __result198__ = __result_obj__ = result_107;
    return __result198__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional141;
char* __result199__;
va_list args_108;
char* result_109;
int len_110;
_Bool _if_conditional142;
char* __result200__;
char* result2_111;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_108, 0, sizeof(va_list));
memset(&result_109, 0, sizeof(char*));
memset(&len_110, 0, sizeof(int));
memset(&result2_111, 0, sizeof(char*));
    if(_if_conditional141=msg==((void*)0),    _if_conditional141) {
        __result199__ = __result_obj__ = __builtin_string("");
        return __result199__;
    }
    __builtin_va_start(args_108,msg);
    len_110=vasprintf(&result_109,msg,args_108);
    __builtin_va_end(args_108);
    if(_if_conditional142=len_110<0,    _if_conditional142) {
        __result200__ = __result_obj__ = __builtin_string("");
        return __result200__;
    }
    result2_111=__builtin_string(result_109);
    free(result_109);
    __result201__ = __result_obj__ = result2_111;
    return __result201__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional143;
char* __result202__;
int len_112;
_Bool _if_conditional144;
char* __result203__;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
char* __result204__;
_Bool _if_conditional149;
char* sub_str_113;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_112, 0, sizeof(int));
memset(&sub_str_113, 0, sizeof(char*));
    if(_if_conditional143=str==((void*)0),    _if_conditional143) {
        __result202__ = __result_obj__ = __builtin_string("");
        return __result202__;
    }
    len_112=strlen(str);
    if(_if_conditional144=strcmp(str,"")==0,    _if_conditional144) {
        __result203__ = __result_obj__ = __builtin_string(str);
        return __result203__;
    }
    if(_if_conditional145=head<0,    _if_conditional145) {
        head+=len_112;
    }
    if(_if_conditional146=tail<0,    _if_conditional146) {
        tail+=len_112+1;
    }
    if(_if_conditional147=head<0,    _if_conditional147) {
        head=0;
    }
    if(_if_conditional148=tail<0,    _if_conditional148) {
        __result204__ = __result_obj__ = __builtin_string(str);
        return __result204__;
    }
    if(_if_conditional149=tail>=len_112,    _if_conditional149) {
        tail=len_112;
    }
    sub_str_113=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_113,string_length(sub_str_113)+1);
    __result205__ = __result_obj__ = __builtin_string(str);
    return __result205__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional150;
char* __result206__;
int len_114;
_Bool _if_conditional151;
char* __result207__;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
char* __result208__;
_Bool _if_conditional156;
char* sub_str_115;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_114, 0, sizeof(int));
memset(&sub_str_115, 0, sizeof(char*));
    if(_if_conditional150=str==((void*)0),    _if_conditional150) {
        __result206__ = __result_obj__ = __builtin_string("");
        return __result206__;
    }
    len_114=strlen(str);
    if(_if_conditional151=strcmp(str,"")==0,    _if_conditional151) {
        __result207__ = __result_obj__ = __builtin_string(str);
        return __result207__;
    }
    if(_if_conditional152=head<0,    _if_conditional152) {
        head+=len_114;
    }
    if(_if_conditional153=tail<0,    _if_conditional153) {
        tail+=len_114+1;
    }
    if(_if_conditional154=head<0,    _if_conditional154) {
        head=0;
    }
    if(_if_conditional155=tail<0,    _if_conditional155) {
        __result208__ = __result_obj__ = __builtin_string(str);
        return __result208__;
    }
    if(_if_conditional156=tail>=len_114,    _if_conditional156) {
        tail=len_114;
    }
    sub_str_115=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_115,string_length(sub_str_115)+1);
    __result209__ = __result_obj__ = __builtin_string(str);
    return __result209__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional157;
struct list$1charph* __result211__;
struct list$1charph* result_116;
struct buffer* str_117;
int i_118;
_Bool _if_conditional158;
_Bool _if_conditional161;
struct list$1charph* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_116, 0, sizeof(struct list$1charph*));
memset(&str_117, 0, sizeof(struct buffer*));
memset(&i_118, 0, sizeof(int));
    if(_if_conditional157=self==((void*)0),    _if_conditional157) {
        __result211__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1556, "list$1charph"));
        return __result211__;
    }
    result_116=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1559, "list$1charph"));
    str_117=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1561, "buffer"));
    for(    i_118=0;    i_118<charp_length(self);    i_118++    ){
        if(_if_conditional158=self[i_118]==c,        _if_conditional158) {
            list$1charph_push_back(result_116,__builtin_string(str_117->buf));
            buffer_reset(str_117);
        }
        else {
            buffer_append_char(str_117,self[i_118]);
        }
    }
    if(_if_conditional161=buffer_length(str_117)!=0,    _if_conditional161) {
        list$1charph_push_back(result_116,__builtin_string(str_117->buf));
    }
    __result213__ = __result_obj__ = result_116;
    return __result213__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result210__ = __result_obj__ = self;
            return __result210__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional159;
struct list_item$1charph* litem_119;
_Bool _if_conditional160;
struct list_item$1charph* litem_120;
struct list_item$1charph* litem_121;
struct list$1charph* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_119, 0, sizeof(struct list_item$1charph*));
memset(&litem_120, 0, sizeof(struct list_item$1charph*));
memset(&litem_121, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional159=self->len==0,                _if_conditional159) {
                    litem_119=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph");
                    litem_119->prev=((void*)0);
                    litem_119->next=((void*)0);
                    litem_119->item=item;
                    self->tail=litem_119;
                    self->head=litem_119;
                }
                else {
                    if(_if_conditional160=self->len==1,                    _if_conditional160) {
                        litem_120=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph");
                        litem_120->prev=self->head;
                        litem_120->next=((void*)0);
                        litem_120->item=item;
                        self->tail=litem_120;
                        self->head->next=litem_120;
                    }
                    else {
                        litem_121=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph");
                        litem_121->prev=self->tail;
                        litem_121->next=((void*)0);
                        litem_121->item=item;
                        self->tail->next=litem_121;
                        self->tail=litem_121;
                    }
                }
                self->len++;
                __result212__ = __result_obj__ = self;
                return __result212__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional162;
struct list$1charph* __result214__;
struct list$1charph* result_122;
struct buffer* str_123;
int i_124;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list$1charph* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_122, 0, sizeof(struct list$1charph*));
memset(&str_123, 0, sizeof(struct buffer*));
memset(&i_124, 0, sizeof(int));
    if(_if_conditional162=self==((void*)0),    _if_conditional162) {
        __result214__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1582, "list$1charph"));
        return __result214__;
    }
    result_122=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1585, "list$1charph"));
    str_123=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1587, "buffer"));
    for(    i_124=0;    i_124<charp_length(self);    i_124++    ){
        if(_if_conditional163=self[i_124]==c,        _if_conditional163) {
            list$1charph_push_back(result_122,__builtin_string(str_123->buf));
            buffer_reset(str_123);
        }
        else {
            buffer_append_char(str_123,self[i_124]);
        }
    }
    if(_if_conditional164=buffer_length(str_123)!=0,    _if_conditional164) {
        list$1charph_push_back(result_122,__builtin_string(str_123->buf));
    }
    __result215__ = __result_obj__ = result_122;
    return __result215__;
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional165;
char* __result216__;
char* p_125;
_Bool _while_condtional3;
_Bool _if_conditional166;
_Bool _if_conditional167;
char* __result217__;
char* __result218__;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_125, 0, sizeof(char*));
    if(_if_conditional165=path==((void*)0),    _if_conditional165) {
        __result216__ = __result_obj__ = __builtin_string("");
        return __result216__;
    }
    p_125=path+strlen(path);
    while(_while_condtional3=p_125>=path,    _while_condtional3) {
        if(_if_conditional166=*p_125==47,        _if_conditional166) {
            break;
        }
        else {
            p_125--;
        }
    }
    if(_if_conditional167=p_125<path,    _if_conditional167) {
        __result217__ = __result_obj__ = __builtin_string(path);
        return __result217__;
    }
    else {
        __result218__ = __result_obj__ = __builtin_string(p_125+1);
        return __result218__;
    }
    __result219__ = __result_obj__ = __builtin_string("");
    return __result219__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional168;
char* __result220__;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional168=path==((void*)0),    _if_conditional168) {
        __result220__ = __result_obj__ = __builtin_string("");
        return __result220__;
    }
    __result221__ = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    return __result221__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional169;
char* __result222__;
char* path2_126;
char* p_127;
_Bool _while_condtional4;
_Bool _if_conditional170;
_Bool _if_conditional171;
char* __result223__;
char* __result224__;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&path2_126, 0, sizeof(char*));
memset(&p_127, 0, sizeof(char*));
    if(_if_conditional169=path==((void*)0),    _if_conditional169) {
        __result222__ = __result_obj__ = __builtin_string("");
        return __result222__;
    }
    path2_126=xbasename(path);
    p_127=path2_126+strlen(path2_126);
    while(_while_condtional4=p_127>=path2_126,    _while_condtional4) {
        if(_if_conditional170=*p_127==46,        _if_conditional170) {
            break;
        }
        else {
            p_127--;
        }
    }
    if(_if_conditional171=p_127<path2_126,    _if_conditional171) {
        __result223__ = __result_obj__ = __builtin_string(path2_126);
        return __result223__;
    }
    else {
        __result224__ = __result_obj__ = string_substring(path2_126,0,p_127-path2_126);
        return __result224__;
    }
    __result225__ = __result_obj__ = __builtin_string("");
    return __result225__;
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional172;
char* __result226__;
char* p_128;
_Bool _while_condtional5;
_Bool _if_conditional173;
_Bool _if_conditional174;
char* __result227__;
char* __result228__;
char* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_128, 0, sizeof(char*));
    if(_if_conditional172=path==((void*)0),    _if_conditional172) {
        __result226__ = __result_obj__ = __builtin_string("");
        return __result226__;
    }
    p_128=path+strlen(path);
    while(_while_condtional5=p_128>=path,    _while_condtional5) {
        if(_if_conditional173=*p_128==46,        _if_conditional173) {
            break;
        }
        else {
            p_128--;
        }
    }
    if(_if_conditional174=p_128<path,    _if_conditional174) {
        __result227__ = __result_obj__ = __builtin_string(path);
        return __result227__;
    }
    else {
        __result228__ = __result_obj__ = __builtin_string(p_128+1);
        return __result228__;
    }
    __result229__ = __result_obj__ = __builtin_string("");
    return __result229__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional175;
char* __result230__;
char* result_129;
char* result2_130;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_129, 0, sizeof(char*));
memset(&result2_130, 0, sizeof(char*));
    if(_if_conditional175=path==((void*)0),    _if_conditional175) {
        __result230__ = __result_obj__ = __builtin_string("");
        return __result230__;
    }
    result_129=realpath(path,((void*)0));
    result2_130=__builtin_string(result_129);
    free(result_129);
    __result231__ = __result_obj__ = result2_130;
    return __result231__;
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional176;
char* __result232__;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self) {
        __result232__ = __result_obj__ = __builtin_string("true");
        return __result232__;
    }
    else {
        __result233__ = __result_obj__ = __builtin_string("false");
        return __result233__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
char* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
    __result234__ = __result_obj__ = xsprintf("%c",self);
    return __result234__;
}

char* short_to_string(short short self){
void* __result_obj__;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
    __result235__ = __result_obj__ = xsprintf("%d",self);
    return __result235__;
}

char* int_to_string(int self){
void* __result_obj__;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
    __result236__ = __result_obj__ = xsprintf("%d",self);
    return __result236__;
}

char* long_to_string(long self){
void* __result_obj__;
char* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
    __result237__ = __result_obj__ = xsprintf("%ld",self);
    return __result237__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
char* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
    __result238__ = __result_obj__ = xsprintf("%ld",self);
    return __result238__;
}

char* float_to_string(float self){
void* __result_obj__;
char* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
    __result239__ = __result_obj__ = xsprintf("%f",self);
    return __result239__;
}

char* double_to_string(double self){
void* __result_obj__;
char* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
    __result240__ = __result_obj__ = xsprintf("%lf",self);
    return __result240__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional177;
char* __result241__;
char* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional177=self==((void*)0),    _if_conditional177) {
        __result241__ = __result_obj__ = __builtin_string("");
        return __result241__;
    }
    __result242__ = __result_obj__ = __builtin_string(self);
    return __result242__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional178;
char* __result243__;
char* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional178=self==((void*)0),    _if_conditional178) {
        __result243__ = __result_obj__ = __builtin_string("");
        return __result243__;
    }
    __result244__ = __result_obj__ = __builtin_string(self);
    return __result244__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool _if_conditional179;
int __result245__;
_Bool _if_conditional180;
int __result246__;
_Bool _if_conditional181;
int __result247__;
int __result248__;
int __result249__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional179=!left&&right,    _if_conditional179) {
        __result245__ = -1;
        return __result245__;
    }
    else {
        if(_if_conditional180=left&&right,        _if_conditional180) {
            __result246__ = 0;
            return __result246__;
        }
        else {
            if(_if_conditional181=!left&&!right,            _if_conditional181) {
                __result247__ = 0;
                return __result247__;
            }
            else {
                __result248__ = 1;
                return __result248__;
            }
        }
    }
    __result249__ = 0;
    return __result249__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool _if_conditional182;
int __result250__;
_Bool _if_conditional183;
int __result251__;
int __result252__;
int __result253__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional182=left<right,    _if_conditional182) {
        __result250__ = -1;
        return __result250__;
    }
    else {
        if(_if_conditional183=left>right,        _if_conditional183) {
            __result251__ = 1;
            return __result251__;
        }
        else {
            __result252__ = 0;
            return __result252__;
        }
    }
    __result253__ = 0;
    return __result253__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional184;
int __result254__;
_Bool _if_conditional185;
int __result255__;
int __result256__;
int __result257__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional184=left<right,    _if_conditional184) {
        __result254__ = -1;
        return __result254__;
    }
    else {
        if(_if_conditional185=left>right,        _if_conditional185) {
            __result255__ = 1;
            return __result255__;
        }
        else {
            __result256__ = 0;
            return __result256__;
        }
    }
    __result257__ = 0;
    return __result257__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional186;
int __result258__;
_Bool _if_conditional187;
int __result259__;
int __result260__;
int __result261__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional186=left<right,    _if_conditional186) {
        __result258__ = -1;
        return __result258__;
    }
    else {
        if(_if_conditional187=left>right,        _if_conditional187) {
            __result259__ = 1;
            return __result259__;
        }
        else {
            __result260__ = 0;
            return __result260__;
        }
    }
    __result261__ = 0;
    return __result261__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional188;
int __result262__;
_Bool _if_conditional189;
int __result263__;
int __result264__;
int __result265__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional188=left<right,    _if_conditional188) {
        __result262__ = -1;
        return __result262__;
    }
    else {
        if(_if_conditional189=left>right,        _if_conditional189) {
            __result263__ = 1;
            return __result263__;
        }
        else {
            __result264__ = 0;
            return __result264__;
        }
    }
    __result265__ = 0;
    return __result265__;
}

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool _if_conditional190;
int __result266__;
_Bool _if_conditional191;
int __result267__;
int __result268__;
int __result269__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional190=left<right,    _if_conditional190) {
        __result266__ = -1;
        return __result266__;
    }
    else {
        if(_if_conditional191=left>right,        _if_conditional191) {
            __result267__ = 1;
            return __result267__;
        }
        else {
            __result268__ = 0;
            return __result268__;
        }
    }
    __result269__ = 0;
    return __result269__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool _if_conditional192;
int __result270__;
_Bool _if_conditional193;
int __result271__;
int __result272__;
int __result273__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional192=left<right,    _if_conditional192) {
        __result270__ = -1;
        return __result270__;
    }
    else {
        if(_if_conditional193=left>right,        _if_conditional193) {
            __result271__ = 1;
            return __result271__;
        }
        else {
            __result272__ = 0;
            return __result272__;
        }
    }
    __result273__ = 0;
    return __result273__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool _if_conditional194;
int __result274__;
_Bool _if_conditional195;
int __result275__;
int __result276__;
int __result277__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional194=left<right,    _if_conditional194) {
        __result274__ = -1;
        return __result274__;
    }
    else {
        if(_if_conditional195=left>right,        _if_conditional195) {
            __result275__ = 1;
            return __result275__;
        }
        else {
            __result276__ = 0;
            return __result276__;
        }
    }
    __result277__ = 0;
    return __result277__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional196;
int __result278__;
_Bool _if_conditional197;
int __result279__;
_Bool _if_conditional198;
int __result280__;
int __result281__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional196=left==((void*)0)&&right==((void*)0),    _if_conditional196) {
        __result278__ = 0;
        return __result278__;
    }
    else {
        if(_if_conditional197=left==((void*)0),        _if_conditional197) {
            __result279__ = -1;
            return __result279__;
        }
        else {
            if(_if_conditional198=right==((void*)0),            _if_conditional198) {
                __result280__ = 1;
                return __result280__;
            }
        }
    }
    __result281__ = strcmp(left,right);
    return __result281__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional199;
int __result282__;
_Bool _if_conditional200;
int __result283__;
_Bool _if_conditional201;
int __result284__;
int __result285__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional199=left==((void*)0)&&right==((void*)0),    _if_conditional199) {
        __result282__ = 0;
        return __result282__;
    }
    else {
        if(_if_conditional200=left==((void*)0),        _if_conditional200) {
            __result283__ = -1;
            return __result283__;
        }
        else {
            if(_if_conditional201=right==((void*)0),            _if_conditional201) {
                __result284__ = 1;
                return __result284__;
            }
        }
    }
    __result285__ = strcmp(left,right);
    return __result285__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional202;
char* __result286__;
struct buffer* buf_131;
_Bool _while_condtional6;
int size_133;
_Bool _if_conditional203;
char* __result287__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_131, 0, sizeof(struct buffer*));
memset(&size_133, 0, sizeof(int));
    if(_if_conditional202=f==((void*)0),    _if_conditional202) {
        __result286__ = __result_obj__ = __builtin_string("");
        return __result286__;
    }
    buf_131=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1938, "buffer"));
    while(_while_condtional6=1,    _while_condtional6) {
        char buf2_132[1024];
        memset(&buf2_132, 0, sizeof(char)        *(1024)        );
        size_133=fread(buf2_132,1,1024,f);
        buffer_append(buf_131,buf2_132,size_133);
        if(_if_conditional203=size_133<1024,        _if_conditional203) {
            break;
        }
    }
    __result287__ = __result_obj__ = buffer_to_string(buf_131);
    return __result287__;
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional204;
int __result288__;
int __result289__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional204=f==((void*)0)||str==((void*)0),    _if_conditional204) {
        __result288__ = -1;
        return __result288__;
    }
    __result289__ = fwrite(str,strlen(str),1,f);
    return __result289__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional205;
int __result290__;
int result_134;
_Bool _if_conditional206;
int __result291__;
int __result292__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_134, 0, sizeof(int));
    if(_if_conditional205=f==((void*)0),    _if_conditional205) {
        __result290__ = -1;
        return __result290__;
    }
    result_134=fclose(f);
    if(_if_conditional206=result_134<0,    _if_conditional206) {
        __result291__ = result_134;
        return __result291__;
    }
    __result292__ = result_134;
    return __result292__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional207;
struct _IO_FILE* __result293__;
va_list args_136;
int result_137;
_Bool _if_conditional208;
struct _IO_FILE* __result294__;
struct _IO_FILE* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_136, 0, sizeof(va_list));
memset(&result_137, 0, sizeof(int));
    if(_if_conditional207=f==((void*)0)||msg==((void*)0),    _if_conditional207) {
        __result293__ = __result_obj__ = f;
        return __result293__;
    }
    char msg2_135[1024*2*2*2];
    memset(&msg2_135, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_136,msg);
    vsnprintf(msg2_135,1024*2*2*2,msg,args_136);
    __builtin_va_end(args_136);
    result_137=fprintf(f,"%s",msg2_135);
    if(_if_conditional208=result_137<0,    _if_conditional208) {
        __result294__ = __result_obj__ = f;
        return __result294__;
    }
    __result295__ = __result_obj__ = f;
    return __result295__;
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional209;
int __result296__;
struct _IO_FILE* f_138;
_Bool _if_conditional210;
_Bool _if_conditional211;
int __result297__;
int result_139;
_Bool _if_conditional212;
int __result298__;
int result2_140;
_Bool _if_conditional213;
int __result299__;
int __result300__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_138, 0, sizeof(struct _IO_FILE*));
memset(&result_139, 0, sizeof(int));
memset(&result2_140, 0, sizeof(int));
    if(_if_conditional209=self==((void*)0)||file_name==((void*)0),    _if_conditional209) {
        __result296__ = -1;
        return __result296__;
    }
    if(append) {
        f_138=fopen(file_name,"a");
    }
    else {
        f_138=fopen(file_name,"w");
    }
    if(_if_conditional211=f_138==((void*)0),    _if_conditional211) {
        __result297__ = -1;
        return __result297__;
    }
    result_139=fwrite(self,strlen(self),1,f_138);
    if(_if_conditional212=result_139<0,    _if_conditional212) {
        __result298__ = result_139;
        return __result298__;
    }
    result2_140=fclose(f_138);
    if(_if_conditional213=result2_140<0,    _if_conditional213) {
        __result299__ = result2_140;
        return __result299__;
    }
    __result300__ = result_139;
    return __result300__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional214;
int __result301__;
struct _IO_FILE* f_141;
_Bool _if_conditional215;
_Bool _if_conditional216;
int __result302__;
int result_142;
_Bool _if_conditional217;
int __result303__;
int result2_143;
_Bool _if_conditional218;
int __result304__;
int __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_141, 0, sizeof(struct _IO_FILE*));
memset(&result_142, 0, sizeof(int));
memset(&result2_143, 0, sizeof(int));
    if(_if_conditional214=self==((void*)0)||file_name==((void*)0),    _if_conditional214) {
        __result301__ = -1;
        return __result301__;
    }
    if(append) {
        f_141=fopen(file_name,"a");
    }
    else {
        f_141=fopen(file_name,"w");
    }
    if(_if_conditional216=f_141==((void*)0),    _if_conditional216) {
        __result302__ = -1;
        return __result302__;
    }
    result_142=fwrite(self,strlen(self),1,f_141);
    if(_if_conditional217=result_142<0,    _if_conditional217) {
        __result303__ = result_142;
        return __result303__;
    }
    result2_143=fclose(f_141);
    if(_if_conditional218=result2_143<0,    _if_conditional218) {
        __result304__ = result2_143;
        return __result304__;
    }
    __result305__ = result_142;
    return __result305__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional219;
char* __result306__;
struct _IO_FILE* f_144;
_Bool _if_conditional220;
char* __result307__;
struct buffer* buf_145;
_Bool _while_condtional7;
int size_147;
_Bool _if_conditional221;
char* result_148;
int result2_149;
_Bool _if_conditional222;
char* __result308__;
char* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_144, 0, sizeof(struct _IO_FILE*));
memset(&buf_145, 0, sizeof(struct buffer*));
memset(&size_147, 0, sizeof(int));
memset(&result_148, 0, sizeof(char*));
memset(&result2_149, 0, sizeof(int));
    if(_if_conditional219=file_name==((void*)0),    _if_conditional219) {
        __result306__ = __result_obj__ = __builtin_string("");
        return __result306__;
    }
    f_144=fopen(file_name,"r");
    if(_if_conditional220=f_144==((void*)0),    _if_conditional220) {
        __result307__ = __result_obj__ = __builtin_string("");
        return __result307__;
    }
    buf_145=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 2078, "buffer"));
    while(_while_condtional7=1,    _while_condtional7) {
        char buf2_146[1024];
        memset(&buf2_146, 0, sizeof(char)        *(1024)        );
        size_147=fread(buf2_146,1,1024,f_144);
        buffer_append(buf_145,buf2_146,size_147);
        if(_if_conditional221=size_147<1024,        _if_conditional221) {
            break;
        }
    }
    result_148=buffer_to_string(buf_145);
    result2_149=fclose(f_144);
    if(_if_conditional222=result2_149<0,    _if_conditional222) {
        __result308__ = __result_obj__ = __builtin_string("");
        return __result308__;
    }
    __result309__ = __result_obj__ = result_148;
    return __result309__;
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional223;
char* __result310__;
struct _IO_FILE* f_150;
_Bool _if_conditional224;
char* __result311__;
struct buffer* buf_151;
_Bool _while_condtional8;
int size_153;
_Bool _if_conditional225;
char* result_154;
int result2_155;
_Bool _if_conditional226;
char* __result312__;
char* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_150, 0, sizeof(struct _IO_FILE*));
memset(&buf_151, 0, sizeof(struct buffer*));
memset(&size_153, 0, sizeof(int));
memset(&result_154, 0, sizeof(char*));
memset(&result2_155, 0, sizeof(int));
    if(_if_conditional223=file_name==((void*)0),    _if_conditional223) {
        __result310__ = __result_obj__ = __builtin_string("");
        return __result310__;
    }
    f_150=fopen(file_name,"r");
    if(_if_conditional224=f_150==((void*)0),    _if_conditional224) {
        __result311__ = __result_obj__ = __builtin_string("");
        return __result311__;
    }
    buf_151=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 2115, "buffer"));
    while(_while_condtional8=1,    _while_condtional8) {
        char buf2_152[1024];
        memset(&buf2_152, 0, sizeof(char)        *(1024)        );
        size_153=fread(buf2_152,1,1024,f_150);
        buffer_append(buf_151,buf2_152,size_153);
        if(_if_conditional225=size_153<1024,        _if_conditional225) {
            break;
        }
    }
    result_154=buffer_to_string(buf_151);
    result2_155=fclose(f_150);
    if(_if_conditional226=result2_155<0,    _if_conditional226) {
        __result312__ = __result_obj__ = __builtin_string("");
        return __result312__;
    }
    __result313__ = __result_obj__ = result_154;
    return __result313__;
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
struct list$1charph* result_156;
_Bool _if_conditional227;
struct list$1charph* __result314__;
_Bool _while_condtional9;
_Bool _if_conditional228;
struct list$1charph* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_156, 0, sizeof(struct list$1charph*));
    result_156=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 2142, "list$1charph"));
    if(_if_conditional227=f==((void*)0),    _if_conditional227) {
        __result314__ = __result_obj__ = result_156;
        return __result314__;
    }
    while(_while_condtional9=1,    _while_condtional9) {
        char buf_157[1024];
        memset(&buf_157, 0, sizeof(char)        *(1024)        );
        if(_if_conditional228=fgets(buf_157,1024,f)==((void*)0),        _if_conditional228) {
            break;
        }
        list$1charph_push_back(result_156,__builtin_string(buf_157));
    }
    __result315__ = __result_obj__ = result_156;
    return __result315__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional229;
int __result316__;
struct _IO_FILE* f_158;
_Bool _if_conditional230;
_Bool _if_conditional231;
int __result317__;
int __result318__;
int __result319__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_158, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional229=path==((void*)0)||mode==((void*)0),    _if_conditional229) {
        __result316__ = -1;
        return __result316__;
    }
    f_158=fopen(path,mode);
    if(f_158) {
        block(parent,f_158);
        if(_if_conditional231=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional231) {
            fclose(f_158);
            __result317__ = 0;
            return __result317__;
        }
        fclose(f_158);
        __result318__ = 0;
        return __result318__;
    }
    __result319__ = -1;
    return __result319__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional232;
char* __result320__;
char* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional232=self==((void*)0),    _if_conditional232) {
        __result320__ = __result_obj__ = __builtin_string("");
        return __result320__;
    }
    puts(self);
    __result321__ = __result_obj__ = __builtin_string(self);
    return __result321__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional233;
char* __result322__;
char* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional233=self==((void*)0),    _if_conditional233) {
        __result322__ = __result_obj__ = __builtin_string("");
        return __result322__;
    }
    printf("%s",self);
    __result323__ = __result_obj__ = __builtin_string(self);
    return __result323__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional234;
char* __result324__;
char* msg2_159;
va_list args_160;
char* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_159, 0, sizeof(char*));
memset(&args_160, 0, sizeof(va_list));
    if(_if_conditional234=self==((void*)0),    _if_conditional234) {
        __result324__ = __result_obj__ = __builtin_string("");
        return __result324__;
    }
    __builtin_va_start(args_160,self);
    vasprintf(&msg2_159,self,args_160);
    __builtin_va_end(args_160);
    printf("%s",msg2_159);
    free(msg2_159);
    __result325__ = __result_obj__ = __builtin_string(self);
    return __result325__;
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional235;
char* __result326__;
char* msg2_161;
va_list args_162;
char* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_161, 0, sizeof(char*));
memset(&args_162, 0, sizeof(va_list));
    if(_if_conditional235=self==((void*)0),    _if_conditional235) {
        __result326__ = __result_obj__ = __builtin_string("");
        return __result326__;
    }
    __builtin_va_start(args_162,self);
    vasprintf(&msg2_161,self,args_162);
    __builtin_va_end(args_162);
    printf("%s",msg2_161);
    free(msg2_161);
    __result327__ = __result_obj__ = __builtin_string(self);
    return __result327__;
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __result328__;
memset(&__result_obj__, 0, sizeof(void*));
    printf(msg,self);
    __result328__ = self;
    return __result328__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional236;
char* __result329__;
char* __result330__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional236=self==((void*)0),    _if_conditional236) {
        __result329__ = __result_obj__ = __builtin_string("");
        return __result329__;
    }
    puts(self);
    __result330__ = __result_obj__ = __builtin_string(self);
    return __result330__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_163;
_Bool _if_conditional237;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_163, 0, sizeof(int));
    for(    i_163=0;    i_163<self;    i_163++    ){
        block(parent,i_163);
        if(_if_conditional237=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional237) {
            return;
        }
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    __result331__ = __result_obj__ = self;
    return __result331__;
}

int integer_to_int(struct integer* self){
void* __result_obj__;
int __result332__;
memset(&__result_obj__, 0, sizeof(void*));
    __result332__ = self->value;
    return __result332__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
struct integer* __result333__;
memset(&__result_obj__, 0, sizeof(void*));
    __result333__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2293, "integer"),self);
    return __result333__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
struct integer* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
    __result334__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2298, "integer"),self);
    return __result334__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
struct integer* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
    __result335__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2303, "integer"),self);
    return __result335__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
struct integer* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
    __result336__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2308, "integer"),self);
    return __result336__;
}

int integer_compare(struct integer* left, struct integer* right){
void* __result_obj__;
_Bool _if_conditional238;
int __result337__;
_Bool _if_conditional239;
int __result338__;
int __result339__;
int __result340__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional238=left->value<right->value,    _if_conditional238) {
        __result337__ = -1;
        return __result337__;
    }
    else {
        if(_if_conditional239=left->value>right->value,        _if_conditional239) {
            __result338__ = 1;
            return __result338__;
        }
        else {
            __result339__ = 0;
            return __result339__;
        }
    }
    __result340__ = 0;
    return __result340__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result341__;
memset(&__result_obj__, 0, sizeof(void*));
    __result341__ = self->value==right->value;
    return __result341__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result342__;
memset(&__result_obj__, 0, sizeof(void*));
    __result342__ = self->value==right->value;
    return __result342__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result343__;
memset(&__result_obj__, 0, sizeof(void*));
    __result343__ = self->value!=right->value;
    return __result343__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
    __result344__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2343, "integer"),left->value+right->value);
    return __result344__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
    __result345__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2348, "integer"),left->value-right->value);
    return __result345__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
    __result346__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2353, "integer"),left->value*right->value);
    return __result346__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
    __result347__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2358, "integer"),left->value/right->value);
    return __result347__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
    __result348__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2363, "integer"),left->value%right->value);
    return __result348__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result349__;
memset(&__result_obj__, 0, sizeof(void*));
    __result349__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2368, "integer"),left->value<<right->value);
    return __result349__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
    __result350__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2373, "integer"),left->value>>right->value);
    return __result350__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
    __result351__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2378, "integer"),left->value>=right->value);
    return __result351__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
    __result352__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2383, "integer"),left->value<=right->value);
    return __result352__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result353__;
memset(&__result_obj__, 0, sizeof(void*));
    __result353__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2388, "integer"),left->value<right->value);
    return __result353__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result354__;
memset(&__result_obj__, 0, sizeof(void*));
    __result354__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2393, "integer"),left->value>right->value);
    return __result354__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result355__;
memset(&__result_obj__, 0, sizeof(void*));
    __result355__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2398, "integer"),left->value&right->value);
    return __result355__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
    __result356__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2403, "integer"),left->value^right->value);
    return __result356__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
    __result357__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2408, "integer"),left->value|right->value);
    return __result357__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result358__;
memset(&__result_obj__, 0, sizeof(void*));
    __result358__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2413, "integer"),left->value&&right->value);
    return __result358__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
    __result359__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2418, "integer"),left->value||right->value);
    return __result359__;
}

