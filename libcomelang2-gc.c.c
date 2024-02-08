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
struct optional$2_IO_FILEpbool
{
    struct _IO_FILE* v1;
    _Bool v2;
};

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

void come_free(void* mem);

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

char* dirname(char* anonymous_var_nameX490);

char* basename(char* anonymous_var_nameX491);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX493)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX495)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX497)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX498);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX499);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX500);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX501);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX502)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX503);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX504);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX505);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX506);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX507);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX508);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX509);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX510);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX511);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX512);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX513);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX514);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX515);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX516);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX517);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX518);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX519);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX520);

char* GC_strdup(const char* anonymous_var_nameX521);

char* GC_strndup(const char* anonymous_var_nameX522, unsigned long int anonymous_var_nameX523);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX524);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX525);

void* GC_memalign(unsigned long int anonymous_var_nameX526, unsigned long int anonymous_var_nameX527);

int GC_posix_memalign(void** anonymous_var_nameX528, unsigned long int anonymous_var_nameX529, unsigned long int anonymous_var_nameX530);

void GC_free(void* anonymous_var_nameX531);

void GC_change_stubborn(const void* anonymous_var_nameX532);

void GC_end_stubborn_change(const void* anonymous_var_nameX533);

void* GC_base(void* anonymous_var_nameX534);

int GC_is_heap_ptr(const void* anonymous_var_nameX535);

unsigned long int GC_size(const void* anonymous_var_nameX536);

void* GC_realloc(void* anonymous_var_nameX537, unsigned long int anonymous_var_nameX538);

int GC_expand_hp(unsigned long int anonymous_var_nameX539);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX540);

void GC_exclude_static_roots(void* anonymous_var_nameX541, void* anonymous_var_nameX542);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX543, void* anonymous_var_nameX544);

void GC_remove_roots(void* anonymous_var_nameX545, void* anonymous_var_nameX546);

void GC_register_displacement(unsigned long int anonymous_var_nameX547);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX548);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX549)());

void GC_set_stop_func(int (*anonymous_var_nameX550)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX551, unsigned long int* anonymous_var_nameX552, unsigned long int* anonymous_var_nameX553, unsigned long int* anonymous_var_nameX554, unsigned long int* anonymous_var_nameX555);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX556, unsigned long int anonymous_var_nameX557);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX558);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX559);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX560);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX561);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX562, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX563, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX564, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX565, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX566, unsigned long int anonymous_var_nameX567, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX568, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX569, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX570, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX571, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX572);

void* GC_debug_realloc(void* anonymous_var_nameX573, unsigned long int anonymous_var_nameX574, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX575);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX576);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX577);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX578, unsigned long int anonymous_var_nameX579);

void GC_register_finalizer(void* anonymous_var_nameX582, void (*anonymous_var_nameX583)(void*,void*), void* anonymous_var_nameX584, void (*anonymous_var_nameX585)(void*,void*), void** anonymous_var_nameX586);

void GC_debug_register_finalizer(void* anonymous_var_nameX587, void (*anonymous_var_nameX588)(void*,void*), void* anonymous_var_nameX589, void (*anonymous_var_nameX590)(void*,void*), void** anonymous_var_nameX591);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX592, void (*anonymous_var_nameX593)(void*,void*), void* anonymous_var_nameX594, void (*anonymous_var_nameX595)(void*,void*), void** anonymous_var_nameX596);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX597, void (*anonymous_var_nameX598)(void*,void*), void* anonymous_var_nameX599, void (*anonymous_var_nameX600)(void*,void*), void** anonymous_var_nameX601);

void GC_register_finalizer_no_order(void* anonymous_var_nameX602, void (*anonymous_var_nameX603)(void*,void*), void* anonymous_var_nameX604, void (*anonymous_var_nameX605)(void*,void*), void** anonymous_var_nameX606);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX607, void (*anonymous_var_nameX608)(void*,void*), void* anonymous_var_nameX609, void (*anonymous_var_nameX610)(void*,void*), void** anonymous_var_nameX611);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX612, void (*anonymous_var_nameX613)(void*,void*), void* anonymous_var_nameX614, void (*anonymous_var_nameX615)(void*,void*), void** anonymous_var_nameX616);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX617, void (*anonymous_var_nameX618)(void*,void*), void* anonymous_var_nameX619, void (*anonymous_var_nameX620)(void*,void*), void** anonymous_var_nameX621);

int GC_register_disappearing_link(void** anonymous_var_nameX622);

int GC_general_register_disappearing_link(void** anonymous_var_nameX623, const void* anonymous_var_nameX624);

int GC_move_disappearing_link(void** anonymous_var_nameX625, void** anonymous_var_nameX626);

int GC_unregister_disappearing_link(void** anonymous_var_nameX627);

int GC_register_long_link(void** anonymous_var_nameX628, const void* anonymous_var_nameX629);

int GC_move_long_link(void** anonymous_var_nameX630, void** anonymous_var_nameX631);

int GC_unregister_long_link(void** anonymous_var_nameX632);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX634)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX635, int anonymous_var_nameX636);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX638)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX639);

void GC_set_warn_proc(void (*anonymous_var_nameX642)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX643, unsigned long int anonymous_var_nameX644);

void GC_set_log_fd(int anonymous_var_nameX645);

void GC_set_abort_func(void (*anonymous_var_nameX647)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX649)(void*), void* anonymous_var_nameX650);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX653)(struct GC_stack_base*,void*), void* anonymous_var_nameX654);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX655)(void*), void* anonymous_var_nameX656);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX657)(void*), void* anonymous_var_nameX658);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX659);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX660);

void GC_set_stackbottom(void* anonymous_var_nameX661, const struct GC_stack_base* anonymous_var_nameX662);

void* GC_same_obj(void* anonymous_var_nameX663, void* anonymous_var_nameX664);

void* GC_pre_incr(void** anonymous_var_nameX665, long anonymous_var_nameX666);

void* GC_post_incr(void** anonymous_var_nameX667, long anonymous_var_nameX668);

void* GC_is_visible(void* anonymous_var_nameX669);

void* GC_is_valid_displacement(void* anonymous_var_nameX670);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX671);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX672, const void* anonymous_var_nameX673);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX674, const void* anonymous_var_nameX675);

void* GC_malloc_many(unsigned long int anonymous_var_nameX696);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX700)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX701);

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

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline);
static void come_free_mem_of_heap_pool(char* mem);
void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

void come_free_object(void* mem);

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

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2);
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

struct optional$2boolbool* string_equals(char* self, char* right);

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2);
struct optional$2boolbool* charp_equals(char* self, char* right);

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

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2);
struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2);
struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* charp_print(char* self);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_puts(char* self);

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
    result_0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "struct smart_pointer$1char");
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
    result_1=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "struct smart_pointer$1char");
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
    result_2=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "struct smart_pointer$1short");
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
    result_3=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "struct smart_pointer$1int");
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
    result_4=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "struct smart_pointer$1long");
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

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline){
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
    mem_10=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline);
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

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
void* __result27__;
char* mem_14;
unsigned long int* size_p_15;
unsigned long int size_16;
void* result_17;
void* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_14, 0, sizeof(char*));
memset(&size_p_15, 0, sizeof(unsigned long int*));
memset(&size_16, 0, sizeof(unsigned long int));
memset(&result_17, 0, sizeof(void*));
    if(_if_conditional27=!block,    _if_conditional27) {
        __result27__ = __result_obj__ = ((void*)0);
        return __result27__;
    }
    mem_14=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_15=(unsigned long int*)(mem_14+sizeof(unsigned long int));
    size_16=*size_p_15-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_17=come_calloc(1,size_16,sname,sline,((void*)0));
    memcpy(result_17,block,size_16);
    __result28__ = __result_obj__ = result_17;
    return __result28__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
void* __result29__;
unsigned long int* ref_count_18;
void* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_18, 0, sizeof(unsigned long int*));
    if(_if_conditional28=mem==((void*)0),    _if_conditional28) {
        __result29__ = __result_obj__ = mem;
        return __result29__;
    }
    ref_count_18=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*ref_count_18)++;
    __result30__ = __result_obj__ = mem;
    return __result30__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
void* __result31__;
unsigned long int* ref_count_19;
void* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_19, 0, sizeof(unsigned long int*));
    if(_if_conditional29=mem==((void*)0),    _if_conditional29) {
        __result31__ = __result_obj__ = mem;
        return __result31__;
    }
    ref_count_19=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    printf("ref_count %ld\n",*ref_count_19);
    __result32__ = __result_obj__ = mem;
    return __result32__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
void* __result33__;
unsigned long int* ref_count_20;
_Bool _if_conditional31;
unsigned long int count_21;
_Bool _if_conditional32;
_Bool _if_conditional33;
void (*finalizer_22)(void*);
void* __result34__;
void* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_20, 0, sizeof(unsigned long int*));
memset(&count_21, 0, sizeof(unsigned long int));
memset(&finalizer_22, 0, sizeof(void (*)(void*)));
    if(_if_conditional30=mem==((void*)0),    _if_conditional30) {
        __result33__ = __result_obj__ = ((void*)0);
        return __result33__;
    }
    ref_count_20=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional31=!no_decrement,    _if_conditional31) {
        (*ref_count_20)--;
    }
    count_21=*ref_count_20;
    if(_if_conditional32=!no_free&&(count_21<=0||force_delete_),    _if_conditional32) {
        if(_if_conditional33=protocol_obj&&protocol_fun,        _if_conditional33) {
            finalizer_22=protocol_fun;
            finalizer_22(protocol_obj);
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
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
void (*finalizer_23)(void*);
void (*finalizer_24)(void*);
unsigned long int* ref_count_25;
_Bool _if_conditional38;
unsigned long int count_26;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
void (*finalizer_27)(void*);
_Bool _if_conditional42;
void (*finalizer_28)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_23, 0, sizeof(void (*)(void*)));
memset(&finalizer_24, 0, sizeof(void (*)(void*)));
memset(&ref_count_25, 0, sizeof(unsigned long int*));
memset(&count_26, 0, sizeof(unsigned long int));
memset(&finalizer_27, 0, sizeof(void (*)(void*)));
memset(&finalizer_28, 0, sizeof(void (*)(void*)));
    if(_if_conditional34=mem==((void*)0),    _if_conditional34) {
        return;
    }
    if(_if_conditional35=call_finalizer_only,    _if_conditional35) {
        if(_if_conditional36=fun,        _if_conditional36) {
            if(_if_conditional37=protocol_obj&&protocol_fun,            _if_conditional37) {
                finalizer_23=protocol_fun;
                finalizer_23(protocol_obj);
            }
            finalizer_24=fun;
            finalizer_24(mem);
        }
    }
    else {
        ref_count_25=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional38=!no_decrement,        _if_conditional38) {
            (*ref_count_25)--;
        }
        count_26=*ref_count_25;
        if(_if_conditional39=!no_free&&(count_26<=0||force_delete_),        _if_conditional39) {
            if(_if_conditional40=mem,            _if_conditional40) {
                if(_if_conditional41=protocol_obj&&protocol_fun,                _if_conditional41) {
                    finalizer_27=protocol_fun;
                    finalizer_27(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(_if_conditional42=fun,                _if_conditional42) {
                    finalizer_28=fun;
                    finalizer_28(mem);
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
_Bool _if_conditional43;
char* __result36__;
int len_29;
char* result_30;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_29, 0, sizeof(int));
memset(&result_30, 0, sizeof(char*));
    if(_if_conditional43=str==((void*)0),    _if_conditional43) {
        __result36__ = __result_obj__ = ((void*)0);
        return __result36__;
    }
    len_29=strlen(str)+1;
    result_30=(char*)come_calloc(1, sizeof(char)*(1*(len_29)), "libcomelang2-gc.c", 411, "char");
    strncpy(result_30,str,len_29);
    __result37__ = __result_obj__ = result_30;
    return __result37__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_31;
int i_32;
_Bool _for_condtionalA4;
_Bool _if_conditional44;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_31, 0, sizeof(_Bool));
memset(&i_32, 0, sizeof(int));
    found_31=(_Bool)0;
    for(
    i_32=0 ,    0;    _for_condtionalA4=    i_32<len ,    _for_condtionalA4;    i_32++ ,    0    ){
        if(_if_conditional44=array[i_32]==element,        _if_conditional44) {
            found_31=(_Bool)1;
            break;
        }
    }
    __result38__ = found_31;
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
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 436, "char");
    self->buf[0]=0;
    self->len=0;
    __result39__ = __result_obj__ = self;
    return __result39__;
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional45=self&&self->buf,    _if_conditional45) {
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional46=self&&self->buf,    _if_conditional46) {
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
struct buffer* __result40__;
struct buffer* result_33;
struct buffer* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_33, 0, sizeof(struct buffer*));
    if(_if_conditional47=self==((void*)0),    _if_conditional47) {
        __result40__ = __result_obj__ = ((void*)0);
        return __result40__;
    }
    result_33=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 458, "struct buffer");
    result_33->size=self->size;
    result_33->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 461, "char");
    result_33->len=self->len;
    memcpy(result_33->buf,self->buf,self->len);
    __result41__ = __result_obj__ = result_33;
    return __result41__;
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
int __result42__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional48=self==((void*)0),    _if_conditional48) {
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
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional49=self==((void*)0),    _if_conditional49) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional50=self==((void*)0),    _if_conditional50) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
struct buffer* __result44__;
_Bool _if_conditional52;
char* old_buf_34;
int old_len_35;
int new_size_36;
struct buffer* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&old_buf_34, 0, sizeof(char*));
memset(&old_len_35, 0, sizeof(int));
memset(&new_size_36, 0, sizeof(int));
    if(_if_conditional51=self==((void*)0)||mem==((void*)0),    _if_conditional51) {
        __result44__ = __result_obj__ = self;
        return __result44__;
    }
    if(_if_conditional52=self->len+size+1+1>=self->size,    _if_conditional52) {
        old_buf_34=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 500, "char");
        memcpy(old_buf_34,self->buf,self->size);
        old_len_35=self->len;
        new_size_36=(self->size+size+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_36)), "libcomelang2-gc.c", 504, "char");
        memcpy(self->buf,old_buf_34,old_len_35);
        self->buf[old_len_35]=0;
        self->size=new_size_36;
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
_Bool _if_conditional53;
struct buffer* __result46__;
_Bool _if_conditional54;
char* old_buf_37;
int old_len_38;
int new_size_39;
struct buffer* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&old_buf_37, 0, sizeof(char*));
memset(&old_len_38, 0, sizeof(int));
memset(&new_size_39, 0, sizeof(int));
    if(_if_conditional53=self==((void*)0),    _if_conditional53) {
        __result46__ = __result_obj__ = ((void*)0);
        return __result46__;
    }
    if(_if_conditional54=self->len+1+1+1>=self->size,    _if_conditional54) {
        old_buf_37=charp_clone(self->buf);
        old_len_38=self->len;
        new_size_39=(self->size+10+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_39)), "libcomelang2-gc.c", 527, "char");
        memcpy(self->buf,old_buf_37,old_len_38);
        self->buf[old_len_38]=0;
        self->size=new_size_39;
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
_Bool _if_conditional55;
struct buffer* __result48__;
int size_40;
_Bool _if_conditional56;
char* old_buf_41;
int old_len_42;
int new_size_43;
struct buffer* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_40, 0, sizeof(int));
memset(&old_buf_41, 0, sizeof(char*));
memset(&old_len_42, 0, sizeof(int));
memset(&new_size_43, 0, sizeof(int));
    if(_if_conditional55=self==((void*)0)||mem==((void*)0),    _if_conditional55) {
        __result48__ = __result_obj__ = self;
        return __result48__;
    }
    size_40=strlen(mem);
    if(_if_conditional56=self->len+size_40+1+1>=self->size,    _if_conditional56) {
        old_buf_41=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 549, "char");
        memcpy(old_buf_41,self->buf,self->size);
        old_len_42=self->len;
        new_size_43=(self->size+size_40+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_43)), "libcomelang2-gc.c", 553, "char");
        memcpy(self->buf,old_buf_41,old_len_42);
        self->buf[old_len_42]=0;
        self->size=new_size_43;
    }
    memcpy(self->buf+self->len,mem,size_40);
    self->len+=size_40;
    self->buf[self->len]=0;
    __result49__ = __result_obj__ = self;
    return __result49__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
struct buffer* __result50__;
int size_44;
_Bool _if_conditional58;
char* old_buf_45;
int old_len_46;
int new_size_47;
struct buffer* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_44, 0, sizeof(int));
memset(&old_buf_45, 0, sizeof(char*));
memset(&old_len_46, 0, sizeof(int));
memset(&new_size_47, 0, sizeof(int));
    if(_if_conditional57=self==((void*)0)||mem==((void*)0),    _if_conditional57) {
        __result50__ = __result_obj__ = self;
        return __result50__;
    }
    size_44=strlen(mem)+1;
    if(_if_conditional58=self->len+size_44+1+1+1>=self->size,    _if_conditional58) {
        old_buf_45=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 573, "char");
        memcpy(old_buf_45,self->buf,self->size);
        old_len_46=self->len;
        new_size_47=(self->size+size_44+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_47)), "libcomelang2-gc.c", 577, "char");
        memcpy(self->buf,old_buf_45,old_len_46);
        self->buf[old_len_46]=0;
        self->size=new_size_47;
    }
    memcpy(self->buf+self->len,mem,size_44);
    self->len+=size_44;
    self->buf[self->len]=0;
    self->len++;
    __result51__ = __result_obj__ = self;
    return __result51__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct buffer* __result52__;
int* mem_48;
int size_49;
_Bool _if_conditional60;
char* old_buf_50;
int old_len_51;
int new_size_52;
struct buffer* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_48, 0, sizeof(int*));
memset(&size_49, 0, sizeof(int));
memset(&old_buf_50, 0, sizeof(char*));
memset(&old_len_51, 0, sizeof(int));
memset(&new_size_52, 0, sizeof(int));
    if(_if_conditional59=self==((void*)0),    _if_conditional59) {
        __result52__ = __result_obj__ = ((void*)0);
        return __result52__;
    }
    mem_48=&value;
    size_49=sizeof(int);
    if(_if_conditional60=self->len+size_49+1+1>=self->size,    _if_conditional60) {
        old_buf_50=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 600, "char");
        memcpy(old_buf_50,self->buf,self->size);
        old_len_51=self->len;
        new_size_52=(self->size+size_49+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_52)), "libcomelang2-gc.c", 604, "char");
        memcpy(self->buf,old_buf_50,old_len_51);
        self->buf[old_len_51]=0;
        self->size=new_size_52;
    }
    memcpy(self->buf+self->len,mem_48,size_49);
    self->len+=size_49;
    self->buf[self->len]=0;
    __result53__ = __result_obj__ = self;
    return __result53__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_53;
int size_54;
_Bool _if_conditional61;
char* old_buf_55;
int old_len_56;
int new_size_57;
struct buffer* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_53, 0, sizeof(long*));
memset(&size_54, 0, sizeof(int));
memset(&old_buf_55, 0, sizeof(char*));
memset(&old_len_56, 0, sizeof(int));
memset(&new_size_57, 0, sizeof(int));
    mem_53=&value;
    size_54=sizeof(long);
    if(_if_conditional61=self->len+size_54+1+1>=self->size,    _if_conditional61) {
        old_buf_55=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 623, "char");
        memcpy(old_buf_55,self->buf,self->size);
        old_len_56=self->len;
        new_size_57=(self->size+size_54+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_57)), "libcomelang2-gc.c", 627, "char");
        memcpy(self->buf,old_buf_55,old_len_56);
        self->buf[old_len_56]=0;
        self->size=new_size_57;
    }
    memcpy(self->buf+self->len,mem_53,size_54);
    self->len+=size_54;
    self->buf[self->len]=0;
    __result54__ = __result_obj__ = self;
    return __result54__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional62;
struct buffer* __result55__;
short short* mem_58;
int size_59;
_Bool _if_conditional63;
char* old_buf_60;
int old_len_61;
int new_size_62;
struct buffer* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_58, 0, sizeof(short short*));
memset(&size_59, 0, sizeof(int));
memset(&old_buf_60, 0, sizeof(char*));
memset(&old_len_61, 0, sizeof(int));
memset(&new_size_62, 0, sizeof(int));
    if(_if_conditional62=self==((void*)0),    _if_conditional62) {
        __result55__ = __result_obj__ = ((void*)0);
        return __result55__;
    }
    mem_58=&value;
    size_59=sizeof(short short);
    if(_if_conditional63=self->len+size_59+1+1>=self->size,    _if_conditional63) {
        old_buf_60=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 650, "char");
        memcpy(old_buf_60,self->buf,self->size);
        old_len_61=self->len;
        new_size_62=(self->size+size_59+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_62)), "libcomelang2-gc.c", 654, "char");
        memcpy(self->buf,old_buf_60,old_len_61);
        self->buf[old_len_61]=0;
        self->size=new_size_62;
    }
    memcpy(self->buf+self->len,mem_58,size_59);
    self->len+=size_59;
    self->buf[self->len]=0;
    __result56__ = __result_obj__ = self;
    return __result56__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
struct buffer* __result57__;
int len_63;
_Bool _if_conditional65;
int new_size_64;
int i_65;
_Bool _for_condtionalA5;
struct buffer* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_63, 0, sizeof(int));
memset(&new_size_64, 0, sizeof(int));
memset(&i_65, 0, sizeof(int));
    if(_if_conditional64=self==((void*)0),    _if_conditional64) {
        __result57__ = __result_obj__ = ((void*)0);
        return __result57__;
    }
    len_63=self->len;
    len_63=(len_63+3)&~3;
    if(_if_conditional65=len_63>=self->size,    _if_conditional65) {
        new_size_64=(self->size+1+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_64)), "libcomelang2-gc.c", 678, "char");
        self->size=new_size_64;
    }
    for(
    i_65=self->len ,    0;    _for_condtionalA5=    i_65<len_63 ,    _for_condtionalA5;    i_65++ ,    0    ){
        self->buf[i_65]=0;
    }
    self->len=len_63;
    __result58__ = __result_obj__ = self;
    return __result58__;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
struct optional$2intbool* __result60__;
_Bool _if_conditional67;
struct optional$2intbool* __result61__;
_Bool _if_conditional68;
struct optional$2intbool* __result62__;
struct optional$2intbool* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional66=left==((void*)0)&&right==((void*)0),    _if_conditional66) {
        __result60__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 694, "struct optional$2intbool"),0,(_Bool)0);
        return __result60__;
    }
    else {
        if(_if_conditional67=left==((void*)0),        _if_conditional67) {
            __result61__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 697, "struct optional$2intbool"),-1,(_Bool)0);
            return __result61__;
        }
        else {
            if(_if_conditional68=right==((void*)0),            _if_conditional68) {
                __result62__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 700, "struct optional$2intbool"),1,(_Bool)0);
                return __result62__;
            }
        }
    }
    __result63__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 703, "struct optional$2intbool"),strcmp(left->buf,right->buf),(_Bool)1);
    return __result63__;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2intbool* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result59__ = __result_obj__ = self;
            return __result59__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* result_66;
_Bool _if_conditional69;
struct buffer* __result64__;
struct buffer* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_66, 0, sizeof(struct buffer*));
    result_66=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 708, "struct buffer"));
    if(_if_conditional69=self==((void*)0),    _if_conditional69) {
        __result64__ = __result_obj__ = result_66;
        return __result64__;
    }
    buffer_append_str(result_66,self);
    __result65__ = __result_obj__ = result_66;
    return __result65__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* result_67;
_Bool _if_conditional70;
struct buffer* __result66__;
struct buffer* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_67, 0, sizeof(struct buffer*));
    result_67=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 721, "struct buffer"));
    if(_if_conditional70=self==((void*)0),    _if_conditional70) {
        __result66__ = __result_obj__ = result_67;
        return __result66__;
    }
    buffer_append_str(result_67,self);
    __result67__ = __result_obj__ = result_67;
    return __result67__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
char* __result68__;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        __result68__ = __result_obj__ = __builtin_string("");
        return __result68__;
    }
    __result69__ = __result_obj__ = __builtin_string(self->buf);
    return __result69__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result70__ = self==right;
    return __result70__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result71__ = self==right;
    return __result71__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result72__ = self==right;
    return __result72__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result73__ = self==right;
    return __result73__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result74__ = self==right;
    return __result74__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = self==right;
    return __result75__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result76__ = self==right;
    return __result76__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = self==right;
    return __result77__;
}

struct optional$2boolbool* string_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
struct optional$2boolbool* __result79__;
_Bool _if_conditional73;
struct optional$2boolbool* __result80__;
_Bool _if_conditional74;
struct optional$2boolbool* __result81__;
struct optional$2boolbool* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional72=self==((void*)0)&&right==((void*)0),    _if_conditional72) {
        __result79__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 787, "struct optional$2boolbool"),(_Bool)1,(_Bool)0);
        return __result79__;
    }
    else {
        if(_if_conditional73=self==((void*)0),        _if_conditional73) {
            __result80__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 790, "struct optional$2boolbool"),(_Bool)0,(_Bool)0);
            return __result80__;
        }
        else {
            if(_if_conditional74=right==((void*)0),            _if_conditional74) {
                __result81__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 793, "struct optional$2boolbool"),(_Bool)0,(_Bool)0);
                return __result81__;
            }
        }
    }
    __result82__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 796, "struct optional$2intbool"),strcmp(self,right)==0,(_Bool)1);
    return __result82__;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2boolbool* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result78__ = __result_obj__ = self;
            return __result78__;
}

struct optional$2boolbool* charp_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional75;
struct optional$2boolbool* __result83__;
_Bool _if_conditional76;
struct optional$2boolbool* __result84__;
_Bool _if_conditional77;
struct optional$2boolbool* __result85__;
struct optional$2boolbool* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional75=self==((void*)0)&&right==((void*)0),    _if_conditional75) {
        __result83__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 802, "struct optional$2boolbool"),(_Bool)1,(_Bool)0);
        return __result83__;
    }
    else {
        if(_if_conditional76=self==((void*)0),        _if_conditional76) {
            __result84__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 805, "struct optional$2boolbool"),(_Bool)0,(_Bool)0);
            return __result84__;
        }
        else {
            if(_if_conditional77=right==((void*)0),            _if_conditional77) {
                __result85__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 808, "struct optional$2boolbool"),(_Bool)0,(_Bool)0);
                return __result85__;
            }
        }
    }
    __result86__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 811, "struct optional$2intbool"),strcmp(self,right)==0,(_Bool)1);
    return __result86__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional78;
_Bool __result87__;
_Bool _if_conditional79;
_Bool __result88__;
_Bool _if_conditional80;
_Bool __result89__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional78=self==((void*)0)&&right==((void*)0),    _if_conditional78) {
        __result87__ = (_Bool)1;
        return __result87__;
    }
    else {
        if(_if_conditional79=self==((void*)0),        _if_conditional79) {
            __result88__ = (_Bool)0;
            return __result88__;
        }
        else {
            if(_if_conditional80=right==((void*)0),            _if_conditional80) {
                __result89__ = (_Bool)0;
                return __result89__;
            }
        }
    }
    __result90__ = strcmp(self,right)==0;
    return __result90__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
_Bool __result91__;
_Bool _if_conditional82;
_Bool __result92__;
_Bool _if_conditional83;
_Bool __result93__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional81=self==((void*)0)&&right==((void*)0),    _if_conditional81) {
        __result91__ = (_Bool)1;
        return __result91__;
    }
    else {
        if(_if_conditional82=self==((void*)0),        _if_conditional82) {
            __result92__ = (_Bool)0;
            return __result92__;
        }
        else {
            if(_if_conditional83=right==((void*)0),            _if_conditional83) {
                __result93__ = (_Bool)0;
                return __result93__;
            }
        }
    }
    __result94__ = strcmp(self,right)==0;
    return __result94__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional84;
_Bool __result95__;
_Bool _if_conditional85;
_Bool __result96__;
_Bool _if_conditional86;
_Bool __result97__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional84=self==((void*)0)&&right==((void*)0),    _if_conditional84) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    else {
        if(_if_conditional85=self==((void*)0),        _if_conditional85) {
            __result96__ = (_Bool)1;
            return __result96__;
        }
        else {
            if(_if_conditional86=right==((void*)0),            _if_conditional86) {
                __result97__ = (_Bool)1;
                return __result97__;
            }
        }
    }
    __result98__ = strcmp(self,right)!=0;
    return __result98__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional87;
_Bool __result99__;
_Bool _if_conditional88;
_Bool __result100__;
_Bool _if_conditional89;
_Bool __result101__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional87=self==((void*)0)&&right==((void*)0),    _if_conditional87) {
        __result99__ = (_Bool)0;
        return __result99__;
    }
    else {
        if(_if_conditional88=self==((void*)0),        _if_conditional88) {
            __result100__ = (_Bool)1;
            return __result100__;
        }
        else {
            if(_if_conditional89=right==((void*)0),            _if_conditional89) {
                __result101__ = (_Bool)1;
                return __result101__;
            }
        }
    }
    __result102__ = strcmp(self,right)!=0;
    return __result102__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
char* __result103__;
int len_68;
char* result_69;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_68, 0, sizeof(int));
memset(&result_69, 0, sizeof(char*));
    if(_if_conditional90=self==((void*)0)||right==((void*)0),    _if_conditional90) {
        __result103__ = __result_obj__ = __builtin_string("");
        return __result103__;
    }
    len_68=strlen(self)+strlen(right);
    result_69=(char*)come_calloc(1, sizeof(char)*(1*(len_68+1)), "libcomelang2-gc.c", 882, "char");
    strncpy(result_69,self,len_68+1);
    strncat(result_69,right,len_68+1);
    __result104__ = __result_obj__ = result_69;
    return __result104__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional91;
char* __result105__;
int len_70;
char* result_71;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_70, 0, sizeof(int));
memset(&result_71, 0, sizeof(char*));
    if(_if_conditional91=self==((void*)0)||right==((void*)0),    _if_conditional91) {
        __result105__ = __result_obj__ = __builtin_string("");
        return __result105__;
    }
    len_70=strlen(self)+strlen(right);
    result_71=(char*)come_calloc(1, sizeof(char)*(1*(len_70+1)), "libcomelang2-gc.c", 897, "char");
    strncpy(result_71,self,len_70+1);
    strncat(result_71,right,len_70+1);
    __result106__ = __result_obj__ = result_71;
    return __result106__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional92;
char* __result107__;
struct buffer* buf_72;
int i_73;
_Bool _for_condtionalA6;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_72, 0, sizeof(struct buffer*));
memset(&i_73, 0, sizeof(int));
    if(_if_conditional92=self==((void*)0),    _if_conditional92) {
        __result107__ = __result_obj__ = __builtin_string("");
        return __result107__;
    }
    buf_72=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 910, "struct buffer"));
    for(
    i_73=0 ,    0;    _for_condtionalA6=    i_73<right ,    _for_condtionalA6;    i_73++ ,    0    ){
        buffer_append_str(buf_72,self);
    }
    __result108__ = __result_obj__ = buffer_to_string(buf_72);
    return __result108__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
char* __result109__;
struct buffer* buf_74;
int i_75;
_Bool _for_condtionalA7;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_74, 0, sizeof(struct buffer*));
memset(&i_75, 0, sizeof(int));
    if(_if_conditional93=self==((void*)0),    _if_conditional93) {
        __result109__ = __result_obj__ = __builtin_string("");
        return __result109__;
    }
    buf_74=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 924, "struct buffer"));
    for(
    i_75=0 ,    0;    _for_condtionalA7=    i_75<right ,    _for_condtionalA7;    i_75++ ,    0    ){
        buffer_append_str(buf_74,self);
    }
    __result110__ = __result_obj__ = buffer_to_string(buf_74);
    return __result110__;
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result111__ = (int_get_hash_key(((int)value)));
    return __result111__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result112__ = value;
    return __result112__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result113__ = value;
    return __result113__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = value;
    return __result114__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = value;
    return __result115__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = value;
    return __result116__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = (unsigned int)value;
    return __result117__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result118__ = (unsigned int)value;
    return __result118__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
unsigned int __result119__;
int result_76;
char* p_77;
_Bool _while_condtional1;
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_76, 0, sizeof(int));
memset(&p_77, 0, sizeof(char*));
    if(_if_conditional94=value==((void*)0),    _if_conditional94) {
        __result119__ = 0;
        return __result119__;
    }
    result_76=0;
    p_77=value;
    while(_while_condtional1=*p_77,    _while_condtional1) {
        result_76+=(*p_77);
        p_77++;
    }
    __result120__ = result_76;
    return __result120__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
unsigned int __result121__;
int result_78;
char* p_79;
_Bool _while_condtional2;
unsigned int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(int));
memset(&p_79, 0, sizeof(char*));
    if(_if_conditional95=value==((void*)0),    _if_conditional95) {
        __result121__ = 0;
        return __result121__;
    }
    result_78=0;
    p_79=value;
    while(_while_condtional2=*p_79,    _while_condtional2) {
        result_78+=(*p_79);
        p_79++;
    }
    __result122__ = result_78;
    return __result122__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result123__ = self;
    return __result123__;
}

char char_clone(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = self;
    return __result124__;
}

short int short_clone(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
short int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = self;
    return __result125__;
}

int int_clone(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = self;
    return __result126__;
}

long int long_clone(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = self;
    return __result127__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = self;
    return __result128__;
}

double double_clone(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
double __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result129__ = self;
    return __result129__;
}

float float_clone(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
float __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = self;
    return __result130__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
char* __result131__;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional96=self==((void*)0),    _if_conditional96) {
        __result131__ = __result_obj__ = ((void*)0);
        return __result131__;
    }
    __result132__ = __result_obj__ = __builtin_string(self);
    return __result132__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
char* __result133__;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional97=self==((void*)0),    _if_conditional97) {
        __result133__ = __result_obj__ = ((void*)0);
        return __result133__;
    }
    __result134__ = __result_obj__ = __builtin_string(self);
    return __result134__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_80;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_80, 0, sizeof(_Bool));
    result_80=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result135__ = result_80;
    return __result135__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result136__ = c==32||c==9;
    return __result136__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = (c>=48&&c<=57);
    return __result137__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result138__ = xiswalpha(c)||xiswdigit(c);
    return __result138__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_81;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_81, 0, sizeof(_Bool));
    result_81=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result139__ = result_81;
    return __result139__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result140__ = c==32||c==9;
    return __result140__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result141__ = (c>=48&&c<=57);
    return __result141__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result142__ = xisalpha(c)||xisdigit(c);
    return __result142__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_82;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_82, 0, sizeof(_Bool));
    result_82=(c>=32&&c<=126);
    __result143__ = result_82;
    return __result143__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_83;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_83, 0, sizeof(_Bool));
    result_83=(c>=32&&c<=126);
    __result144__ = result_83;
    return __result144__;
}

int string_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
int __result145__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional98=str==((void*)0),    _if_conditional98) {
        __result145__ = 0;
        return __result145__;
    }
    __result146__ = strlen(str);
    return __result146__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
int __result147__;
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional99=str==((void*)0),    _if_conditional99) {
        __result147__ = 0;
        return __result147__;
    }
    __result148__ = strlen(str);
    return __result148__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
char* __result149__;
int len_84;
char* result_85;
int i_86;
_Bool _for_condtionalA8;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_84, 0, sizeof(int));
memset(&result_85, 0, sizeof(char*));
memset(&i_86, 0, sizeof(int));
    if(_if_conditional100=str==((void*)0),    _if_conditional100) {
        __result149__ = __result_obj__ = __builtin_string("");
        return __result149__;
    }
    len_84=strlen(str);
    result_85=(char*)come_calloc(1, sizeof(char)*(1*(len_84+1)), "libcomelang2-gc.c", 1141, "char");
    for(
    i_86=0 ,    0;    _for_condtionalA8=    i_86<len_84 ,    _for_condtionalA8;    i_86++ ,    0    ){
        result_85[i_86]=str[len_84-i_86-1];
    }
    result_85[len_84]=0;
    __result150__ = __result_obj__ = result_85;
    return __result150__;
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
char* __result151__;
int len_87;
char* result_88;
int i_89;
_Bool _for_condtionalA9;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_87, 0, sizeof(int));
memset(&result_88, 0, sizeof(char*));
memset(&i_89, 0, sizeof(int));
    if(_if_conditional101=str==((void*)0),    _if_conditional101) {
        __result151__ = __result_obj__ = __builtin_string("");
        return __result151__;
    }
    len_87=strlen(str);
    result_88=(char*)come_calloc(1, sizeof(char)*(1*(len_87+1)), "libcomelang2-gc.c", 1158, "char");
    for(
    i_89=0 ,    0;    _for_condtionalA9=    i_89<len_87 ,    _for_condtionalA9;    i_89++ ,    0    ){
        result_88[i_89]=str[len_87-i_89-1];
    }
    result_88[len_87]=0;
    __result152__ = __result_obj__ = result_88;
    return __result152__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
char* __result153__;
int len_90;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
char* __result154__;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
char* __result155__;
_Bool _if_conditional109;
char* __result156__;
char* result_91;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_90, 0, sizeof(int));
memset(&result_91, 0, sizeof(char*));
    if(_if_conditional102=str==((void*)0),    _if_conditional102) {
        __result153__ = __result_obj__ = __builtin_string("");
        return __result153__;
    }
    len_90=strlen(str);
    if(_if_conditional103=head<0,    _if_conditional103) {
        head+=len_90;
    }
    if(_if_conditional104=tail<0,    _if_conditional104) {
        tail+=len_90+1;
    }
    if(_if_conditional105=head>tail,    _if_conditional105) {
        __result154__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result154__;
    }
    if(_if_conditional106=head<0,    _if_conditional106) {
        head=0;
    }
    if(_if_conditional107=tail>=len_90,    _if_conditional107) {
        tail=len_90;
    }
    if(_if_conditional108=head==tail,    _if_conditional108) {
        __result155__ = __result_obj__ = __builtin_string("");
        return __result155__;
    }
    if(_if_conditional109=tail-head+1<1,    _if_conditional109) {
        __result156__ = __result_obj__ = __builtin_string("");
        return __result156__;
    }
    result_91=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1203, "char");
    memcpy(result_91,str+head,tail-head);
    result_91[tail-head]=0;
    __result157__ = __result_obj__ = result_91;
    return __result157__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
char* __result158__;
int len_92;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
char* __result159__;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
char* __result160__;
_Bool _if_conditional117;
char* __result161__;
char* result_93;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_92, 0, sizeof(int));
memset(&result_93, 0, sizeof(char*));
    if(_if_conditional110=str==((void*)0),    _if_conditional110) {
        __result158__ = __result_obj__ = __builtin_string("");
        return __result158__;
    }
    len_92=strlen(str);
    if(_if_conditional111=head<0,    _if_conditional111) {
        head+=len_92;
    }
    if(_if_conditional112=tail<0,    _if_conditional112) {
        tail+=len_92+1;
    }
    if(_if_conditional113=head>tail,    _if_conditional113) {
        __result159__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result159__;
    }
    if(_if_conditional114=head<0,    _if_conditional114) {
        head=0;
    }
    if(_if_conditional115=tail>=len_92,    _if_conditional115) {
        tail=len_92;
    }
    if(_if_conditional116=head==tail,    _if_conditional116) {
        __result160__ = __result_obj__ = __builtin_string("");
        return __result160__;
    }
    if(_if_conditional117=tail-head+1<1,    _if_conditional117) {
        __result161__ = __result_obj__ = __builtin_string("");
        return __result161__;
    }
    result_93=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1246, "char");
    memcpy(result_93,str+head,tail-head);
    result_93[tail-head]=0;
    __result162__ = __result_obj__ = result_93;
    return __result162__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
char* __result163__;
int len_94;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
char* __result164__;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
char* __result165__;
_Bool _if_conditional125;
char* __result166__;
char* result_95;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_94, 0, sizeof(int));
memset(&result_95, 0, sizeof(char*));
    if(_if_conditional118=str==((void*)0),    _if_conditional118) {
        __result163__ = __result_obj__ = __builtin_string("");
        return __result163__;
    }
    len_94=strlen(str);
    if(_if_conditional119=head<0,    _if_conditional119) {
        head+=len_94;
    }
    if(_if_conditional120=tail<0,    _if_conditional120) {
        tail+=len_94+1;
    }
    if(_if_conditional121=head>tail,    _if_conditional121) {
        __result164__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result164__;
    }
    if(_if_conditional122=head<0,    _if_conditional122) {
        head=0;
    }
    if(_if_conditional123=tail>=len_94,    _if_conditional123) {
        tail=len_94;
    }
    if(_if_conditional124=head==tail,    _if_conditional124) {
        __result165__ = __result_obj__ = __builtin_string("");
        return __result165__;
    }
    if(_if_conditional125=tail-head+1<1,    _if_conditional125) {
        __result166__ = __result_obj__ = __builtin_string("");
        return __result166__;
    }
    result_95=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1289, "char");
    memcpy(result_95,str+head,tail-head);
    result_95[tail-head]=0;
    __result167__ = __result_obj__ = result_95;
    return __result167__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
char* __result168__;
int len_96;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
char* __result169__;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
char* __result170__;
_Bool _if_conditional133;
char* __result171__;
char* result_97;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_96, 0, sizeof(int));
memset(&result_97, 0, sizeof(char*));
    if(_if_conditional126=str==((void*)0),    _if_conditional126) {
        __result168__ = __result_obj__ = __builtin_string("");
        return __result168__;
    }
    len_96=strlen(str);
    if(_if_conditional127=head<0,    _if_conditional127) {
        head+=len_96;
    }
    if(_if_conditional128=tail<0,    _if_conditional128) {
        tail+=len_96+1;
    }
    if(_if_conditional129=head>tail,    _if_conditional129) {
        __result169__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result169__;
    }
    if(_if_conditional130=head<0,    _if_conditional130) {
        head=0;
    }
    if(_if_conditional131=tail>=len_96,    _if_conditional131) {
        tail=len_96;
    }
    if(_if_conditional132=head==tail,    _if_conditional132) {
        __result170__ = __result_obj__ = __builtin_string("");
        return __result170__;
    }
    if(_if_conditional133=tail-head+1<1,    _if_conditional133) {
        __result171__ = __result_obj__ = __builtin_string("");
        return __result171__;
    }
    result_97=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1332, "char");
    memcpy(result_97,str+head,tail-head);
    result_97[tail-head]=0;
    __result172__ = __result_obj__ = result_97;
    return __result172__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
char* __result173__;
va_list args_98;
char* result_99;
int len_100;
_Bool _if_conditional135;
char* __result174__;
char* result2_101;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&args_98, 0, sizeof(va_list));
memset(&result_99, 0, sizeof(char*));
memset(&len_100, 0, sizeof(int));
memset(&result2_101, 0, sizeof(char*));
    if(_if_conditional134=msg==((void*)0),    _if_conditional134) {
        __result173__ = __result_obj__ = __builtin_string("");
        return __result173__;
    }
    __builtin_va_start(args_98,msg);
    len_100=vasprintf(&result_99,msg,args_98);
    __builtin_va_end(args_98);
    if(_if_conditional135=len_100<0,    _if_conditional135) {
        __result174__ = __result_obj__ = __builtin_string("");
        return __result174__;
    }
    result2_101=__builtin_string(result_99);
    free(result_99);
    __result175__ = __result_obj__ = result2_101;
    return __result175__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
char* __result176__;
int len_102;
_Bool _if_conditional137;
char* __result177__;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
char* __result178__;
_Bool _if_conditional142;
char* sub_str_103;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_102, 0, sizeof(int));
memset(&sub_str_103, 0, sizeof(char*));
    if(_if_conditional136=str==((void*)0),    _if_conditional136) {
        __result176__ = __result_obj__ = __builtin_string("");
        return __result176__;
    }
    len_102=strlen(str);
    if(_if_conditional137=strcmp(str,"")==0,    _if_conditional137) {
        __result177__ = __result_obj__ = __builtin_string(str);
        return __result177__;
    }
    if(_if_conditional138=head<0,    _if_conditional138) {
        head+=len_102;
    }
    if(_if_conditional139=tail<0,    _if_conditional139) {
        tail+=len_102+1;
    }
    if(_if_conditional140=head<0,    _if_conditional140) {
        head=0;
    }
    if(_if_conditional141=tail<0,    _if_conditional141) {
        __result178__ = __result_obj__ = __builtin_string(str);
        return __result178__;
    }
    if(_if_conditional142=tail>=len_102,    _if_conditional142) {
        tail=len_102;
    }
    sub_str_103=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_103,string_length(sub_str_103)+1);
    __result179__ = __result_obj__ = __builtin_string(str);
    return __result179__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional143;
char* __result180__;
int len_104;
_Bool _if_conditional144;
char* __result181__;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
char* __result182__;
_Bool _if_conditional149;
char* sub_str_105;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_104, 0, sizeof(int));
memset(&sub_str_105, 0, sizeof(char*));
    if(_if_conditional143=str==((void*)0),    _if_conditional143) {
        __result180__ = __result_obj__ = __builtin_string("");
        return __result180__;
    }
    len_104=strlen(str);
    if(_if_conditional144=strcmp(str,"")==0,    _if_conditional144) {
        __result181__ = __result_obj__ = __builtin_string(str);
        return __result181__;
    }
    if(_if_conditional145=head<0,    _if_conditional145) {
        head+=len_104;
    }
    if(_if_conditional146=tail<0,    _if_conditional146) {
        tail+=len_104+1;
    }
    if(_if_conditional147=head<0,    _if_conditional147) {
        head=0;
    }
    if(_if_conditional148=tail<0,    _if_conditional148) {
        __result182__ = __result_obj__ = __builtin_string(str);
        return __result182__;
    }
    if(_if_conditional149=tail>=len_104,    _if_conditional149) {
        tail=len_104;
    }
    sub_str_105=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_105,string_length(sub_str_105)+1);
    __result183__ = __result_obj__ = __builtin_string(str);
    return __result183__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional150;
struct list$1charph* __result185__;
struct list$1charph* result_106;
struct buffer* str_107;
int i_108;
_Bool _for_condtionalA10;
_Bool _if_conditional151;
_Bool _if_conditional154;
struct list$1charph* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_106, 0, sizeof(struct list$1charph*));
memset(&str_107, 0, sizeof(struct buffer*));
memset(&i_108, 0, sizeof(int));
    if(_if_conditional150=self==((void*)0),    _if_conditional150) {
        __result185__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1443, "struct list$1charph"));
        return __result185__;
    }
    result_106=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1446, "struct list$1charph"));
    str_107=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1448, "struct buffer"));
    for(
    i_108=0 ,    0;    _for_condtionalA10=    i_108<charp_length(self) ,    _for_condtionalA10;    i_108++ ,    0    ){
        if(_if_conditional151=self[i_108]==c,        _if_conditional151) {
            list$1charph_push_back(result_106,__builtin_string(str_107->buf));
            buffer_reset(str_107);
        }
        else {
            buffer_append_char(str_107,self[i_108]);
        }
    }
    if(_if_conditional154=buffer_length(str_107)!=0,    _if_conditional154) {
        list$1charph_push_back(result_106,__builtin_string(str_107->buf));
    }
    __result187__ = __result_obj__ = result_106;
    return __result187__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result184__ = __result_obj__ = self;
            return __result184__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
struct list_item$1charph* litem_109;
_Bool _if_conditional153;
struct list_item$1charph* litem_110;
struct list_item$1charph* litem_111;
struct list$1charph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&litem_109, 0, sizeof(struct list_item$1charph*));
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional152=self->len==0,                _if_conditional152) {
                    litem_109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282, "struct list_item$1charph");
                    litem_109->prev=((void*)0);
                    litem_109->next=((void*)0);
                    litem_109->item=item;
                    self->tail=litem_109;
                    self->head=litem_109;
                }
                else {
                    if(_if_conditional153=self->len==1,                    _if_conditional153) {
                        litem_110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292, "struct list_item$1charph");
                        litem_110->prev=self->head;
                        litem_110->next=((void*)0);
                        litem_110->item=item;
                        self->tail=litem_110;
                        self->head->next=litem_110;
                    }
                    else {
                        litem_111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 302, "struct list_item$1charph");
                        litem_111->prev=self->tail;
                        litem_111->next=((void*)0);
                        litem_111->item=item;
                        self->tail->next=litem_111;
                        self->tail=litem_111;
                    }
                }
                self->len++;
                __result186__ = __result_obj__ = self;
                return __result186__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
struct list$1charph* __result188__;
struct list$1charph* result_112;
struct buffer* str_113;
int i_114;
_Bool _for_condtionalA11;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list$1charph* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_112, 0, sizeof(struct list$1charph*));
memset(&str_113, 0, sizeof(struct buffer*));
memset(&i_114, 0, sizeof(int));
    if(_if_conditional155=self==((void*)0),    _if_conditional155) {
        __result188__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1469, "struct list$1charph"));
        return __result188__;
    }
    result_112=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1472, "struct list$1charph"));
    str_113=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1474, "struct buffer"));
    for(
    i_114=0 ,    0;    _for_condtionalA11=    i_114<charp_length(self) ,    _for_condtionalA11;    i_114++ ,    0    ){
        if(_if_conditional156=self[i_114]==c,        _if_conditional156) {
            list$1charph_push_back(result_112,__builtin_string(str_113->buf));
            buffer_reset(str_113);
        }
        else {
            buffer_append_char(str_113,self[i_114]);
        }
    }
    if(_if_conditional157=buffer_length(str_113)!=0,    _if_conditional157) {
        list$1charph_push_back(result_112,__builtin_string(str_113->buf));
    }
    __result189__ = __result_obj__ = result_112;
    return __result189__;
}

char* xbasename(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
char* __result190__;
char* p_115;
_Bool _while_condtional3;
_Bool _if_conditional159;
_Bool _if_conditional160;
char* __result191__;
char* __result192__;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_115, 0, sizeof(char*));
    if(_if_conditional158=path==((void*)0),    _if_conditional158) {
        __result190__ = __result_obj__ = __builtin_string("");
        return __result190__;
    }
    p_115=path+strlen(path);
    while(_while_condtional3=p_115>=path,    _while_condtional3) {
        if(_if_conditional159=*p_115==47,        _if_conditional159) {
            break;
        }
        else {
            p_115--;
        }
    }
    if(_if_conditional160=p_115<path,    _if_conditional160) {
        __result191__ = __result_obj__ = __builtin_string(path);
        return __result191__;
    }
    else {
        __result192__ = __result_obj__ = __builtin_string(p_115+1);
        return __result192__;
    }
    __result193__ = __result_obj__ = __builtin_string("");
    return __result193__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
char* __result194__;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional161=path==((void*)0),    _if_conditional161) {
        __result194__ = __result_obj__ = __builtin_string("");
        return __result194__;
    }
    __result195__ = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    return __result195__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
char* __result196__;
char* path2_116;
char* p_117;
_Bool _while_condtional4;
_Bool _if_conditional163;
_Bool _if_conditional164;
char* __result197__;
char* __result198__;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&path2_116, 0, sizeof(char*));
memset(&p_117, 0, sizeof(char*));
    if(_if_conditional162=path==((void*)0),    _if_conditional162) {
        __result196__ = __result_obj__ = __builtin_string("");
        return __result196__;
    }
    path2_116=xbasename(path);
    p_117=path2_116+strlen(path2_116);
    while(_while_condtional4=p_117>=path2_116,    _while_condtional4) {
        if(_if_conditional163=*p_117==46,        _if_conditional163) {
            break;
        }
        else {
            p_117--;
        }
    }
    if(_if_conditional164=p_117<path2_116,    _if_conditional164) {
        __result197__ = __result_obj__ = __builtin_string(path2_116);
        return __result197__;
    }
    else {
        __result198__ = __result_obj__ = string_substring(path2_116,0,p_117-path2_116);
        return __result198__;
    }
    __result199__ = __result_obj__ = __builtin_string("");
    return __result199__;
}

char* xextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
char* __result200__;
char* p_118;
_Bool _while_condtional5;
_Bool _if_conditional166;
_Bool _if_conditional167;
char* __result201__;
char* __result202__;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_118, 0, sizeof(char*));
    if(_if_conditional165=path==((void*)0),    _if_conditional165) {
        __result200__ = __result_obj__ = __builtin_string("");
        return __result200__;
    }
    p_118=path+strlen(path);
    while(_while_condtional5=p_118>=path,    _while_condtional5) {
        if(_if_conditional166=*p_118==46,        _if_conditional166) {
            break;
        }
        else {
            p_118--;
        }
    }
    if(_if_conditional167=p_118<path,    _if_conditional167) {
        __result201__ = __result_obj__ = __builtin_string(path);
        return __result201__;
    }
    else {
        __result202__ = __result_obj__ = __builtin_string(p_118+1);
        return __result202__;
    }
    __result203__ = __result_obj__ = __builtin_string("");
    return __result203__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
char* __result204__;
char* result_119;
char* result2_120;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_119, 0, sizeof(char*));
memset(&result2_120, 0, sizeof(char*));
    if(_if_conditional168=path==((void*)0),    _if_conditional168) {
        __result204__ = __result_obj__ = __builtin_string("");
        return __result204__;
    }
    result_119=realpath(path,((void*)0));
    result2_120=__builtin_string(result_119);
    free(result_119);
    __result205__ = __result_obj__ = result2_120;
    return __result205__;
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
char* __result206__;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional169=self,    _if_conditional169) {
        __result206__ = __result_obj__ = __builtin_string("true");
        return __result206__;
    }
    else {
        __result207__ = __result_obj__ = __builtin_string("false");
        return __result207__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result208__ = __result_obj__ = xsprintf("%c",self);
    return __result208__;
}

char* short_to_string(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result209__ = __result_obj__ = xsprintf("%d",self);
    return __result209__;
}

char* int_to_string(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result210__ = __result_obj__ = xsprintf("%d",self);
    return __result210__;
}

char* long_to_string(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result211__ = __result_obj__ = xsprintf("%ld",self);
    return __result211__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result212__ = __result_obj__ = xsprintf("%ld",self);
    return __result212__;
}

char* float_to_string(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result213__ = __result_obj__ = xsprintf("%f",self);
    return __result213__;
}

char* double_to_string(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result214__ = __result_obj__ = xsprintf("%lf",self);
    return __result214__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
char* __result215__;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional170=self==((void*)0),    _if_conditional170) {
        __result215__ = __result_obj__ = __builtin_string("");
        return __result215__;
    }
    __result216__ = __result_obj__ = __builtin_string(self);
    return __result216__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
char* __result217__;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional171=self==((void*)0),    _if_conditional171) {
        __result217__ = __result_obj__ = __builtin_string("");
        return __result217__;
    }
    __result218__ = __result_obj__ = __builtin_string(self);
    return __result218__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
int __result219__;
_Bool _if_conditional173;
int __result220__;
_Bool _if_conditional174;
int __result221__;
int __result222__;
int __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional172=!left&&right,    _if_conditional172) {
        __result219__ = -1;
        return __result219__;
    }
    else {
        if(_if_conditional173=left&&right,        _if_conditional173) {
            __result220__ = 0;
            return __result220__;
        }
        else {
            if(_if_conditional174=!left&&!right,            _if_conditional174) {
                __result221__ = 0;
                return __result221__;
            }
            else {
                __result222__ = 1;
                return __result222__;
            }
        }
    }
    __result223__ = 0;
    return __result223__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
int __result224__;
_Bool _if_conditional176;
int __result225__;
int __result226__;
int __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional175=left<right,    _if_conditional175) {
        __result224__ = -1;
        return __result224__;
    }
    else {
        if(_if_conditional176=left>right,        _if_conditional176) {
            __result225__ = 1;
            return __result225__;
        }
        else {
            __result226__ = 0;
            return __result226__;
        }
    }
    __result227__ = 0;
    return __result227__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional177;
int __result228__;
_Bool _if_conditional178;
int __result229__;
int __result230__;
int __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional177=left<right,    _if_conditional177) {
        __result228__ = -1;
        return __result228__;
    }
    else {
        if(_if_conditional178=left>right,        _if_conditional178) {
            __result229__ = 1;
            return __result229__;
        }
        else {
            __result230__ = 0;
            return __result230__;
        }
    }
    __result231__ = 0;
    return __result231__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional179;
int __result232__;
_Bool _if_conditional180;
int __result233__;
int __result234__;
int __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional179=left<right,    _if_conditional179) {
        __result232__ = -1;
        return __result232__;
    }
    else {
        if(_if_conditional180=left>right,        _if_conditional180) {
            __result233__ = 1;
            return __result233__;
        }
        else {
            __result234__ = 0;
            return __result234__;
        }
    }
    __result235__ = 0;
    return __result235__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
int __result236__;
_Bool _if_conditional182;
int __result237__;
int __result238__;
int __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional181=left<right,    _if_conditional181) {
        __result236__ = -1;
        return __result236__;
    }
    else {
        if(_if_conditional182=left>right,        _if_conditional182) {
            __result237__ = 1;
            return __result237__;
        }
        else {
            __result238__ = 0;
            return __result238__;
        }
    }
    __result239__ = 0;
    return __result239__;
}

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
int __result240__;
_Bool _if_conditional184;
int __result241__;
int __result242__;
int __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional183=left<right,    _if_conditional183) {
        __result240__ = -1;
        return __result240__;
    }
    else {
        if(_if_conditional184=left>right,        _if_conditional184) {
            __result241__ = 1;
            return __result241__;
        }
        else {
            __result242__ = 0;
            return __result242__;
        }
    }
    __result243__ = 0;
    return __result243__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
int __result244__;
_Bool _if_conditional186;
int __result245__;
int __result246__;
int __result247__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional185=left<right,    _if_conditional185) {
        __result244__ = -1;
        return __result244__;
    }
    else {
        if(_if_conditional186=left>right,        _if_conditional186) {
            __result245__ = 1;
            return __result245__;
        }
        else {
            __result246__ = 0;
            return __result246__;
        }
    }
    __result247__ = 0;
    return __result247__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
int __result248__;
_Bool _if_conditional188;
int __result249__;
int __result250__;
int __result251__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional187=left<right,    _if_conditional187) {
        __result248__ = -1;
        return __result248__;
    }
    else {
        if(_if_conditional188=left>right,        _if_conditional188) {
            __result249__ = 1;
            return __result249__;
        }
        else {
            __result250__ = 0;
            return __result250__;
        }
    }
    __result251__ = 0;
    return __result251__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
int __result252__;
_Bool _if_conditional190;
int __result253__;
_Bool _if_conditional191;
int __result254__;
int __result255__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional189=left==((void*)0)&&right==((void*)0),    _if_conditional189) {
        __result252__ = 0;
        return __result252__;
    }
    else {
        if(_if_conditional190=left==((void*)0),        _if_conditional190) {
            __result253__ = -1;
            return __result253__;
        }
        else {
            if(_if_conditional191=right==((void*)0),            _if_conditional191) {
                __result254__ = 1;
                return __result254__;
            }
        }
    }
    __result255__ = strcmp(left,right);
    return __result255__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
int __result256__;
_Bool _if_conditional193;
int __result257__;
_Bool _if_conditional194;
int __result258__;
int __result259__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional192=left==((void*)0)&&right==((void*)0),    _if_conditional192) {
        __result256__ = 0;
        return __result256__;
    }
    else {
        if(_if_conditional193=left==((void*)0),        _if_conditional193) {
            __result257__ = -1;
            return __result257__;
        }
        else {
            if(_if_conditional194=right==((void*)0),            _if_conditional194) {
                __result258__ = 1;
                return __result258__;
            }
        }
    }
    __result259__ = strcmp(left,right);
    return __result259__;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
struct optional$2charphbool* __result261__;
struct buffer* buf_121;
_Bool _while_condtional6;
int size_123;
_Bool _if_conditional196;
struct optional$2charphbool* __result262__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_121, 0, sizeof(struct buffer*));
memset(&size_123, 0, sizeof(int));
    if(_if_conditional195=f==((void*)0),    _if_conditional195) {
        __result261__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1823, "struct optional$2charphbool"),__builtin_string(""),(_Bool)0);
        return __result261__;
    }
    buf_121=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1825, "struct buffer"));
    while(_while_condtional6=1,    _while_condtional6) {
        char buf2_122[1024];
        memset(&buf2_122, 0, sizeof(char)        *(1024)        );
        size_123=fread(buf2_122,1,1024,f);
        buffer_append(buf_121,buf2_122,size_123);
        if(_if_conditional196=size_123<1024,        _if_conditional196) {
            break;
        }
    }
    __result262__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1839, "struct optional$2charphbool"),buffer_to_string(buf_121),(_Bool)1);
    return __result262__;
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2charphbool* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result260__ = __result_obj__ = self;
            return __result260__;
}

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
struct optional$2intbool* __result263__;
struct optional$2intbool* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional197=f==((void*)0)||str==((void*)0),    _if_conditional197) {
        __result263__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1845, "struct optional$2intbool"),-1,(_Bool)0);
        return __result263__;
    }
    __result264__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1848, "struct optional$2intbool"),fwrite(str,strlen(str),1,f),(_Bool)1);
    return __result264__;
}

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
struct optional$2intbool* __result265__;
int result_124;
_Bool _if_conditional199;
struct optional$2intbool* __result266__;
struct optional$2intbool* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_124, 0, sizeof(int));
    if(_if_conditional198=f==((void*)0),    _if_conditional198) {
        __result265__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1854, "struct optional$2intbool"),-1,(_Bool)0);
        return __result265__;
    }
    result_124=fclose(f);
    if(_if_conditional199=result_124<0,    _if_conditional199) {
        __result266__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1860, "struct optional$2intbool"),result_124,(_Bool)0);
        return __result266__;
    }
    __result267__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1863, "struct optional$2intbool"),result_124,(_Bool)1);
    return __result267__;
}

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
struct optional$2_IO_FILEpbool* __result269__;
va_list args_126;
int result_127;
_Bool _if_conditional201;
struct optional$2_IO_FILEpbool* __result270__;
struct optional$2_IO_FILEpbool* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&args_126, 0, sizeof(va_list));
memset(&result_127, 0, sizeof(int));
    if(_if_conditional200=f==((void*)0)||msg==((void*)0),    _if_conditional200) {
        __result269__ = __result_obj__ = optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2-gc.c", 1869, "struct optional$2_IO_FILEpbool"),f,(_Bool)0);
        return __result269__;
    }
    char msg2_125[1024*2*2*2];
    memset(&msg2_125, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_126,msg);
    vsnprintf(msg2_125,1024*2*2*2,msg,args_126);
    __builtin_va_end(args_126);
    result_127=fprintf(f,"%s",msg2_125);
    if(_if_conditional201=result_127<0,    _if_conditional201) {
        __result270__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1881, "struct optional$2intbool"),result_127,(_Bool)0);
        return __result270__;
    }
    __result271__ = __result_obj__ = optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2-gc.c", 1884, "struct optional$2_IO_FILEpbool"),f,(_Bool)1);
    return __result271__;
}

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2_IO_FILEpbool* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result268__ = __result_obj__ = self;
            return __result268__;
}

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
struct optional$2intbool* __result272__;
struct _IO_FILE* f_128;
_Bool _if_conditional203;
_Bool _if_conditional204;
struct optional$2intbool* __result273__;
int result_129;
_Bool _if_conditional205;
struct optional$2intbool* __result274__;
int result2_130;
_Bool _if_conditional206;
struct optional$2intbool* __result275__;
struct optional$2intbool* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_128, 0, sizeof(struct _IO_FILE*));
memset(&result_129, 0, sizeof(int));
memset(&result2_130, 0, sizeof(int));
    if(_if_conditional202=self==((void*)0)||file_name==((void*)0),    _if_conditional202) {
        __result272__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1890, "struct optional$2intbool"),-1,(_Bool)0);
        return __result272__;
    }
    if(_if_conditional203=append,    _if_conditional203) {
        f_128=fopen(file_name,"a");
    }
    else {
        f_128=fopen(file_name,"w");
    }
    if(_if_conditional204=f_128==((void*)0),    _if_conditional204) {
        __result273__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1902, "struct optional$2intbool"),-1,(_Bool)0);
        return __result273__;
    }
    result_129=fwrite(self,strlen(self),1,f_128);
    if(_if_conditional205=result_129<0,    _if_conditional205) {
        __result274__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1908, "struct optional$2intbool"),result_129,(_Bool)0);
        return __result274__;
    }
    result2_130=fclose(f_128);
    if(_if_conditional206=result2_130<0,    _if_conditional206) {
        __result275__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1914, "struct optional$2intbool"),result2_130,(_Bool)0);
        return __result275__;
    }
    __result276__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1917, "struct optional$2intbool"),result_129,(_Bool)1);
    return __result276__;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional207;
struct optional$2intbool* __result277__;
struct _IO_FILE* f_131;
_Bool _if_conditional208;
_Bool _if_conditional209;
struct optional$2intbool* __result278__;
int result_132;
_Bool _if_conditional210;
struct optional$2intbool* __result279__;
int result2_133;
_Bool _if_conditional211;
struct optional$2intbool* __result280__;
struct optional$2intbool* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_131, 0, sizeof(struct _IO_FILE*));
memset(&result_132, 0, sizeof(int));
memset(&result2_133, 0, sizeof(int));
    if(_if_conditional207=self==((void*)0)||file_name==((void*)0),    _if_conditional207) {
        __result277__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1923, "struct optional$2intbool"),-1,(_Bool)0);
        return __result277__;
    }
    if(_if_conditional208=append,    _if_conditional208) {
        f_131=fopen(file_name,"a");
    }
    else {
        f_131=fopen(file_name,"w");
    }
    if(_if_conditional209=f_131==((void*)0),    _if_conditional209) {
        __result278__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1935, "struct optional$2intbool"),-1,(_Bool)0);
        return __result278__;
    }
    result_132=fwrite(self,strlen(self),1,f_131);
    if(_if_conditional210=result_132<0,    _if_conditional210) {
        __result279__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1941, "struct optional$2intbool"),result_132,(_Bool)0);
        return __result279__;
    }
    result2_133=fclose(f_131);
    if(_if_conditional211=result2_133<0,    _if_conditional211) {
        __result280__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1947, "struct optional$2intbool"),result2_133,(_Bool)0);
        return __result280__;
    }
    __result281__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1950, "struct optional$2intbool"),result_132,(_Bool)1);
    return __result281__;
}

struct optional$2charphbool* string_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
struct optional$2charphbool* __result282__;
struct _IO_FILE* f_134;
_Bool _if_conditional213;
struct optional$2charphbool* __result283__;
struct buffer* buf_135;
_Bool _while_condtional7;
int size_137;
_Bool _if_conditional214;
char* result_138;
int result2_139;
_Bool _if_conditional215;
struct optional$2charphbool* __result284__;
struct optional$2charphbool* __result285__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_134, 0, sizeof(struct _IO_FILE*));
memset(&buf_135, 0, sizeof(struct buffer*));
memset(&size_137, 0, sizeof(int));
memset(&result_138, 0, sizeof(char*));
memset(&result2_139, 0, sizeof(int));
    if(_if_conditional212=file_name==((void*)0),    _if_conditional212) {
        __result282__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1956, "struct optional$2charphbool"),__builtin_string(""),(_Bool)0);
        return __result282__;
    }
    f_134=fopen(file_name,"r");
    if(_if_conditional213=f_134==((void*)0),    _if_conditional213) {
        __result283__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1962, "struct optional$2charphbool"),__builtin_string(""),(_Bool)0);
        return __result283__;
    }
    buf_135=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1965, "struct buffer"));
    while(_while_condtional7=1,    _while_condtional7) {
        char buf2_136[1024];
        memset(&buf2_136, 0, sizeof(char)        *(1024)        );
        size_137=fread(buf2_136,1,1024,f_134);
        buffer_append(buf_135,buf2_136,size_137);
        if(_if_conditional214=size_137<1024,        _if_conditional214) {
            break;
        }
    }
    result_138=buffer_to_string(buf_135);
    result2_139=fclose(f_134);
    if(_if_conditional215=result2_139<0,    _if_conditional215) {
        __result284__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1984, "struct optional$2charphbool"),__builtin_string(""),(_Bool)0);
        return __result284__;
    }
    __result285__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1987, "struct optional$2charphbool"),result_138,(_Bool)1);
    return __result285__;
}

struct optional$2charphbool* charp_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
struct optional$2charphbool* __result286__;
struct _IO_FILE* f_140;
_Bool _if_conditional217;
struct optional$2charphbool* __result287__;
struct buffer* buf_141;
_Bool _while_condtional8;
int size_143;
_Bool _if_conditional218;
char* result_144;
int result2_145;
_Bool _if_conditional219;
struct optional$2charphbool* __result288__;
struct optional$2charphbool* __result289__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_140, 0, sizeof(struct _IO_FILE*));
memset(&buf_141, 0, sizeof(struct buffer*));
memset(&size_143, 0, sizeof(int));
memset(&result_144, 0, sizeof(char*));
memset(&result2_145, 0, sizeof(int));
    if(_if_conditional216=file_name==((void*)0),    _if_conditional216) {
        __result286__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1993, "struct optional$2charphbool"),__builtin_string(""),(_Bool)0);
        return __result286__;
    }
    f_140=fopen(file_name,"r");
    if(_if_conditional217=f_140==((void*)0),    _if_conditional217) {
        __result287__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1999, "struct optional$2charphbool"),__builtin_string(""),(_Bool)0);
        return __result287__;
    }
    buf_141=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 2002, "struct buffer"));
    while(_while_condtional8=1,    _while_condtional8) {
        char buf2_142[1024];
        memset(&buf2_142, 0, sizeof(char)        *(1024)        );
        size_143=fread(buf2_142,1,1024,f_140);
        buffer_append(buf_141,buf2_142,size_143);
        if(_if_conditional218=size_143<1024,        _if_conditional218) {
            break;
        }
    }
    result_144=buffer_to_string(buf_141);
    result2_145=fclose(f_140);
    if(_if_conditional219=result2_145<0,    _if_conditional219) {
        __result288__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2021, "struct optional$2charphbool"),__builtin_string(""),(_Bool)0);
        return __result288__;
    }
    __result289__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2024, "struct optional$2charphbool"),result_144,(_Bool)1);
    return __result289__;
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* result_146;
_Bool _if_conditional220;
struct optional$2list$1charphphbool* __result291__;
_Bool _while_condtional9;
_Bool _if_conditional221;
struct optional$2list$1charphphbool* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_146, 0, sizeof(struct list$1charph*));
    result_146=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 2029, "struct list$1charph"));
    if(_if_conditional220=f==((void*)0),    _if_conditional220) {
        __result291__ = __result_obj__ = optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2-gc.c", 2032, "struct optional$2list$1charphphbool"),result_146,(_Bool)0);
        return __result291__;
    }
    while(_while_condtional9=1,    _while_condtional9) {
        char buf_147[1024];
        memset(&buf_147, 0, sizeof(char)        *(1024)        );
        if(_if_conditional221=fgets(buf_147,1024,f)==((void*)0),        _if_conditional221) {
            break;
        }
        list$1charph_push_back(result_146,__builtin_string(buf_147));
    }
    __result292__ = __result_obj__ = optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2-gc.c", 2045, "struct optional$2list$1charphphbool"),result_146,(_Bool)1);
    return __result292__;
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2list$1charphphbool* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result290__ = __result_obj__ = self;
            return __result290__;
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
struct optional$2intbool* __result293__;
struct _IO_FILE* f_148;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct optional$2intbool* __result294__;
struct optional$2intbool* __result295__;
struct optional$2intbool* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_148, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional222=path==((void*)0)||mode==((void*)0),    _if_conditional222) {
        __result293__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2051, "struct optional$2intbool"),-1,(_Bool)0);
        return __result293__;
    }
    f_148=fopen(path,mode);
    if(_if_conditional223=f_148,    _if_conditional223) {
        block(parent,f_148);
        if(_if_conditional224=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional224) {
            fclose(f_148);
            __result294__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2059, "struct optional$2intbool"),0,(_Bool)1);
            return __result294__;
        }
        fclose(f_148);
        __result295__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2064, "struct optional$2intbool"),0,(_Bool)1);
        return __result295__;
    }
    __result296__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2067, "struct optional$2intbool"),-1,(_Bool)0);
    return __result296__;
}

struct optional$2charphbool* charp_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
struct optional$2charphbool* __result297__;
struct optional$2charphbool* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional225=self==((void*)0),    _if_conditional225) {
        __result297__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2076, "struct optional$2intbool"),-1,(_Bool)0);
        return __result297__;
    }
    puts(self);
    __result298__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2080, "struct optional$2charphbool"),__builtin_string(self),(_Bool)1);
    return __result298__;
}

struct optional$2charphbool* charp_print(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
struct optional$2charphbool* __result299__;
struct optional$2charphbool* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional226=self==((void*)0),    _if_conditional226) {
        __result299__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2086, "struct optional$2intbool"),-1,(_Bool)0);
        return __result299__;
    }
    printf("%s",self);
    __result300__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2090, "struct optional$2charphbool"),__builtin_string(self),(_Bool)1);
    return __result300__;
}

struct optional$2charphbool* string_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
struct optional$2charphbool* __result301__;
char* msg2_149;
va_list args_150;
struct optional$2charphbool* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_149, 0, sizeof(char*));
memset(&args_150, 0, sizeof(va_list));
    if(_if_conditional227=self==((void*)0),    _if_conditional227) {
        __result301__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2097, "struct optional$2charphbool"),__builtin_string(""),(_Bool)0);
        return __result301__;
    }
    __builtin_va_start(args_150,self);
    vasprintf(&msg2_149,self,args_150);
    __builtin_va_end(args_150);
    printf("%s",msg2_149);
    free(msg2_149);
    __result302__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2110, "struct optional$2charphbool"),__builtin_string(self),(_Bool)1);
    return __result302__;
}

struct optional$2charphbool* charp_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
struct optional$2charphbool* __result303__;
char* msg2_151;
va_list args_152;
struct optional$2charphbool* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_151, 0, sizeof(char*));
memset(&args_152, 0, sizeof(va_list));
    if(_if_conditional228=self==((void*)0),    _if_conditional228) {
        __result303__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2116, "struct optional$2charphbool"),__builtin_string(""),(_Bool)0);
        return __result303__;
    }
    __builtin_va_start(args_152,self);
    vasprintf(&msg2_151,self,args_152);
    __builtin_va_end(args_152);
    printf("%s",msg2_151);
    free(msg2_151);
    __result304__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2129, "struct optional$2charphbool"),__builtin_string(self),(_Bool)1);
    return __result304__;
}

int int_printf(int self, char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf(msg,self);
    __result305__ = self;
    return __result305__;
}

struct optional$2charphbool* string_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional229;
struct optional$2charphbool* __result306__;
struct optional$2charphbool* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional229=self==((void*)0),    _if_conditional229) {
        __result306__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2142, "struct optional$2charphbool"),__builtin_string(""),(_Bool)0);
        return __result306__;
    }
    puts(self);
    __result307__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2146, "struct optional$2charphbool"),__builtin_string(self),(_Bool)1);
    return __result307__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_153;
_Bool _for_condtionalA12;
_Bool _if_conditional230;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_153, 0, sizeof(int));
    for(
    i_153=0 ,    0;    _for_condtionalA12=    i_153<self ,    _for_condtionalA12;    i_153++ ,    0    ){
        block(parent,i_153);
        if(_if_conditional230=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional230) {
            return;
        }
    }
}

