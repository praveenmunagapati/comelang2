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
typedef long intptr_t;
typedef int pid_t;
typedef unsigned int uid_t;
typedef unsigned int gid_t;
typedef unsigned int useconds_t;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int optreset;
extern char** environ;
typedef int blksize_t;
typedef unsigned int nlink_t;
typedef long register_t;
typedef long time_t;
typedef long suseconds_t;
typedef char int8_t;
typedef short short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned long int u_int64_t;
typedef unsigned int mode_t;
typedef unsigned long int ino_t;
typedef unsigned long int dev_t;
typedef long blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef void* timer_t;
typedef int clockid_t;
typedef long clock_t;
typedef unsigned int id_t;
typedef int key_t;
typedef struct __pthread* pthread_t;
typedef int pthread_once_t;
typedef unsigned int pthread_key_t;
typedef int pthread_spinlock_t;
struct anonymous_typeX4
{
    unsigned int __attr;
};
typedef struct anonymous_typeX4 pthread_mutexattr_t;
struct anonymous_typeX5
{
    unsigned int __attr;
};
typedef struct anonymous_typeX5 pthread_condattr_t;
struct anonymous_typeX6
{
    unsigned int __attr;
};
typedef struct anonymous_typeX6 pthread_barrierattr_t;
struct anonymous_typeX7
{
    unsigned int __attr[2];
};
typedef struct anonymous_typeX7 pthread_rwlockattr_t;
union anonymous_typeZ10
{
int __i[sizeof(long)==8?14:9];
int __vi[sizeof(long)==8?14:9];
unsigned long int __s[sizeof(long)==8?7:9];
};
struct anonymous_typeX8
{
    union anonymous_typeZ10 __u;
};
typedef struct anonymous_typeX8 pthread_attr_t;
union anonymous_typeZ13
{
int __i[sizeof(long)==8?10:6];
int __vi[sizeof(long)==8?10:6];
void* __p[sizeof(long)==8?5:6];
};
struct anonymous_typeX11
{
    union anonymous_typeZ13 __u;
};
typedef struct anonymous_typeX11 pthread_mutex_t;
union anonymous_typeZ16
{
int __i[12];
int __vi[12];
void* __p[12*sizeof(int)/sizeof(void*)];
};
struct anonymous_typeX14
{
    union anonymous_typeZ16 __u;
};
typedef struct anonymous_typeX14 pthread_cond_t;
union anonymous_typeZ19
{
int __i[sizeof(long)==8?14:8];
int __vi[sizeof(long)==8?14:8];
void* __p[sizeof(long)==8?7:8];
};
struct anonymous_typeX17
{
    union anonymous_typeZ19 __u;
};
typedef struct anonymous_typeX17 pthread_rwlock_t;
union anonymous_typeZ22
{
int __i[sizeof(long)==8?8:5];
int __vi[sizeof(long)==8?8:5];
void* __p[sizeof(long)==8?4:5];
};
struct anonymous_typeX20
{
    union anonymous_typeZ22 __u;
};
typedef struct anonymous_typeX20 pthread_barrier_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef char* caddr_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned short int ushort;
typedef unsigned int u_int;
typedef unsigned int uint;
typedef unsigned long int u_long;
typedef unsigned long int ulong;
typedef long long quad_t;
typedef unsigned long long u_quad_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
struct timeval
{
    long tv_sec;
    long tv_usec;
};
struct timespec
{
    long tv_sec;
    int :8*(sizeof(long)-sizeof(long))*(1234==4321);
    long tv_nsec;
    int :8*(sizeof(long)-sizeof(long))*(1234!=4321);
};
struct __sigset_t
{
    unsigned long int __bits[128/sizeof(long)];
};
typedef struct __sigset_t sigset_t;
typedef unsigned long int fd_mask;
struct anonymous_typeX23
{
    unsigned long int fds_bits[1024/8/sizeof(long)];
};
typedef struct anonymous_typeX23 fd_set;
struct stat
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad;
    long st_size;
    int st_blksize;
    int __pad2;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned int __unused[2];
};
extern char* program_invocation_short_name;
extern char* program_invocation_name;
_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    int* n_16;
    char** msg2_14;
    struct sInfo** info;
    char** msg;
};
struct __current_stack2__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sInfo* info_296;
    struct buffer** clang_option_279;
    struct buffer** cpp_option_280;
    struct list$1charph** files_281;
    struct list$1charph** object_files_282;
    _Bool* output_object_file_283;
    _Bool* output_cpp_file_284;
    _Bool* output_source_file_flag_285;
    char** output_file_name_286;
    _Bool* verbose_287;
    _Bool* come_debug_288;
    _Bool* come_malloc_289;
    _Bool* come_str_290;
    int* argc;
    char*** argv;
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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

int pipe(int anonymous_var_nameX597[2]);

int pipe2(int anonymous_var_nameX598[2], int anonymous_var_nameX599);

int close(int anonymous_var_nameX600);

int posix_close(int anonymous_var_nameX601, int anonymous_var_nameX602);

int dup(int anonymous_var_nameX603);

int dup2(int anonymous_var_nameX604, int anonymous_var_nameX605);

int dup3(int anonymous_var_nameX606, int anonymous_var_nameX607, int anonymous_var_nameX608);

long lseek(int anonymous_var_nameX609, long anonymous_var_nameX610, int anonymous_var_nameX611);

int fsync(int anonymous_var_nameX612);

int fdatasync(int anonymous_var_nameX613);

long read(int anonymous_var_nameX614, void* anonymous_var_nameX615, unsigned long int anonymous_var_nameX616);

long write(int anonymous_var_nameX617, const void* anonymous_var_nameX618, unsigned long int anonymous_var_nameX619);

long pread(int anonymous_var_nameX620, void* anonymous_var_nameX621, unsigned long int anonymous_var_nameX622, long anonymous_var_nameX623);

long pwrite(int anonymous_var_nameX624, const void* anonymous_var_nameX625, unsigned long int anonymous_var_nameX626, long anonymous_var_nameX627);

int chown(const char* anonymous_var_nameX628, unsigned int anonymous_var_nameX629, unsigned int anonymous_var_nameX630);

int fchown(int anonymous_var_nameX631, unsigned int anonymous_var_nameX632, unsigned int anonymous_var_nameX633);

int lchown(const char* anonymous_var_nameX634, unsigned int anonymous_var_nameX635, unsigned int anonymous_var_nameX636);

int fchownat(int anonymous_var_nameX637, const char* anonymous_var_nameX638, unsigned int anonymous_var_nameX639, unsigned int anonymous_var_nameX640, int anonymous_var_nameX641);

int link(const char* anonymous_var_nameX642, const char* anonymous_var_nameX643);

int linkat(int anonymous_var_nameX644, const char* anonymous_var_nameX645, int anonymous_var_nameX646, const char* anonymous_var_nameX647, int anonymous_var_nameX648);

int symlink(const char* anonymous_var_nameX649, const char* anonymous_var_nameX650);

int symlinkat(const char* anonymous_var_nameX651, int anonymous_var_nameX652, const char* anonymous_var_nameX653);

long readlink(const char* anonymous_var_nameX654, char* anonymous_var_nameX655, unsigned long int anonymous_var_nameX656);

long readlinkat(int anonymous_var_nameX657, const char* anonymous_var_nameX658, char* anonymous_var_nameX659, unsigned long int anonymous_var_nameX660);

int unlink(const char* anonymous_var_nameX661);

int unlinkat(int anonymous_var_nameX662, const char* anonymous_var_nameX663, int anonymous_var_nameX664);

int rmdir(const char* anonymous_var_nameX665);

int truncate(const char* anonymous_var_nameX666, long anonymous_var_nameX667);

int ftruncate(int anonymous_var_nameX668, long anonymous_var_nameX669);

int access(const char* anonymous_var_nameX670, int anonymous_var_nameX671);

int faccessat(int anonymous_var_nameX672, const char* anonymous_var_nameX673, int anonymous_var_nameX674, int anonymous_var_nameX675);

int chdir(const char* anonymous_var_nameX676);

int fchdir(int anonymous_var_nameX677);

char* getcwd(char* anonymous_var_nameX678, unsigned long int anonymous_var_nameX679);

unsigned int alarm(unsigned int anonymous_var_nameX680);

unsigned int sleep(unsigned int anonymous_var_nameX681);

int pause();

int fork();

int _Fork();

int execve(const char* anonymous_var_nameX682, char** anonymous_var_nameX683, char** anonymous_var_nameX684);

int execv(const char* anonymous_var_nameX685, char** anonymous_var_nameX686);

int execle(const char* anonymous_var_nameX687, const char* anonymous_var_nameX688, ...);

int execl(const char* anonymous_var_nameX689, const char* anonymous_var_nameX690, ...);

int execvp(const char* anonymous_var_nameX691, char** anonymous_var_nameX692);

int execlp(const char* anonymous_var_nameX693, const char* anonymous_var_nameX694, ...);

int fexecve(int anonymous_var_nameX695, char** anonymous_var_nameX696, char** anonymous_var_nameX697);

void _exit(int anonymous_var_nameX698);

int getpid();

int getppid();

int getpgrp();

int getpgid(int anonymous_var_nameX699);

int setpgid(int anonymous_var_nameX700, int anonymous_var_nameX701);

int setsid();

int getsid(int anonymous_var_nameX702);

char* ttyname(int anonymous_var_nameX703);

int ttyname_r(int anonymous_var_nameX704, char* anonymous_var_nameX705, unsigned long int anonymous_var_nameX706);

int isatty(int anonymous_var_nameX707);

int tcgetpgrp(int anonymous_var_nameX708);

int tcsetpgrp(int anonymous_var_nameX709, int anonymous_var_nameX710);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int anonymous_var_nameX711, unsigned int* anonymous_var_nameX712);

int setuid(unsigned int anonymous_var_nameX713);

int seteuid(unsigned int anonymous_var_nameX714);

int setgid(unsigned int anonymous_var_nameX715);

int setegid(unsigned int anonymous_var_nameX716);

char* getlogin();

int getlogin_r(char* anonymous_var_nameX717, unsigned long int anonymous_var_nameX718);

int gethostname(char* anonymous_var_nameX719, unsigned long int anonymous_var_nameX720);

char* ctermid(char* anonymous_var_nameX721);

int getopt(int anonymous_var_nameX722, char** anonymous_var_nameX723, const char* anonymous_var_nameX724);

long pathconf(const char* anonymous_var_nameX725, int anonymous_var_nameX726);

long fpathconf(int anonymous_var_nameX727, int anonymous_var_nameX728);

long sysconf(int anonymous_var_nameX729);

unsigned long int confstr(int anonymous_var_nameX730, char* anonymous_var_nameX731, unsigned long int anonymous_var_nameX732);

int setreuid(unsigned int anonymous_var_nameX733, unsigned int anonymous_var_nameX734);

int setregid(unsigned int anonymous_var_nameX735, unsigned int anonymous_var_nameX736);

int lockf(int anonymous_var_nameX737, int anonymous_var_nameX738, long anonymous_var_nameX739);

long gethostid();

int nice(int anonymous_var_nameX740);

void sync();

int setpgrp();

char* crypt(const char* anonymous_var_nameX741, const char* anonymous_var_nameX742);

void encrypt(char* anonymous_var_nameX743, int anonymous_var_nameX744);

void swab(const void* anonymous_var_nameX745, void* anonymous_var_nameX746, long anonymous_var_nameX747);

int usleep(unsigned int anonymous_var_nameX748);

unsigned int ualarm(unsigned int anonymous_var_nameX749, unsigned int anonymous_var_nameX750);

int brk(void* anonymous_var_nameX751);

void* sbrk(long anonymous_var_nameX752);

int vfork();

int vhangup();

int chroot(const char* anonymous_var_nameX753);

int getpagesize();

int getdtablesize();

int sethostname(const char* anonymous_var_nameX754, unsigned long int anonymous_var_nameX755);

int getdomainname(char* anonymous_var_nameX756, unsigned long int anonymous_var_nameX757);

int setdomainname(const char* anonymous_var_nameX758, unsigned long int anonymous_var_nameX759);

int setgroups(unsigned long int anonymous_var_nameX760, const unsigned int* anonymous_var_nameX761);

char* getpass(const char* anonymous_var_nameX762);

int daemon(int anonymous_var_nameX763, int anonymous_var_nameX764);

void setusershell();

void endusershell();

char* getusershell();

int acct(const char* anonymous_var_nameX765);

long syscall(long anonymous_var_nameX766, ...);

int execvpe(const char* anonymous_var_nameX767, char** anonymous_var_nameX768, char** anonymous_var_nameX769);

int issetugid();

int getentropy(void* anonymous_var_nameX770, unsigned long int anonymous_var_nameX771);

int setresuid(unsigned int anonymous_var_nameX772, unsigned int anonymous_var_nameX773, unsigned int anonymous_var_nameX774);

int setresgid(unsigned int anonymous_var_nameX775, unsigned int anonymous_var_nameX776, unsigned int anonymous_var_nameX777);

int getresuid(unsigned int* anonymous_var_nameX778, unsigned int* anonymous_var_nameX779, unsigned int* anonymous_var_nameX780);

int getresgid(unsigned int* anonymous_var_nameX781, unsigned int* anonymous_var_nameX782, unsigned int* anonymous_var_nameX783);

char* get_current_dir_name();

int syncfs(int anonymous_var_nameX784);

int euidaccess(const char* anonymous_var_nameX785, int anonymous_var_nameX786);

int eaccess(const char* anonymous_var_nameX787, int anonymous_var_nameX788);

long copy_file_range(int anonymous_var_nameX789, long* anonymous_var_nameX790, int anonymous_var_nameX791, long* anonymous_var_nameX792, unsigned long int anonymous_var_nameX793, unsigned int anonymous_var_nameX794);

int gettid();

int select(int anonymous_var_nameX795, struct anonymous_typeX23* anonymous_var_nameX796, struct anonymous_typeX23* anonymous_var_nameX797, struct anonymous_typeX23* anonymous_var_nameX798, struct timeval* anonymous_var_nameX799);

int pselect(int anonymous_var_nameX800, struct anonymous_typeX23* anonymous_var_nameX801, struct anonymous_typeX23* anonymous_var_nameX802, struct anonymous_typeX23* anonymous_var_nameX803, const struct timespec* anonymous_var_nameX804, const struct __sigset_t* anonymous_var_nameX805);

int stat(const char* anonymous_var_nameX806, struct stat* anonymous_var_nameX807);

int fstat(int anonymous_var_nameX808, struct stat* anonymous_var_nameX809);

int lstat(const char* anonymous_var_nameX810, struct stat* anonymous_var_nameX811);

int fstatat(int anonymous_var_nameX812, const char* anonymous_var_nameX813, struct stat* anonymous_var_nameX814, int anonymous_var_nameX815);

int chmod(const char* anonymous_var_nameX816, unsigned int anonymous_var_nameX817);

int fchmod(int anonymous_var_nameX818, unsigned int anonymous_var_nameX819);

int fchmodat(int anonymous_var_nameX820, const char* anonymous_var_nameX821, unsigned int anonymous_var_nameX822, int anonymous_var_nameX823);

unsigned int umask(unsigned int anonymous_var_nameX824);

int mkdir(const char* anonymous_var_nameX825, unsigned int anonymous_var_nameX826);

int mkfifo(const char* anonymous_var_nameX827, unsigned int anonymous_var_nameX828);

int mkdirat(int anonymous_var_nameX829, const char* anonymous_var_nameX830, unsigned int anonymous_var_nameX831);

int mkfifoat(int anonymous_var_nameX832, const char* anonymous_var_nameX833, unsigned int anonymous_var_nameX834);

int mknod(const char* anonymous_var_nameX835, unsigned int anonymous_var_nameX836, unsigned long int anonymous_var_nameX837);

int mknodat(int anonymous_var_nameX838, const char* anonymous_var_nameX839, unsigned int anonymous_var_nameX840, unsigned long int anonymous_var_nameX841);

int futimens(int anonymous_var_nameX842, const struct timespec anonymous_var_nameX843[2]);

int utimensat(int anonymous_var_nameX844, const char* anonymous_var_nameX845, const struct timespec anonymous_var_nameX846[2], int anonymous_var_nameX847);

int lchmod(const char* anonymous_var_nameX848, unsigned int anonymous_var_nameX849);

int* __errno_location();

void come_init_v2();

void come_final_v2();

static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);

void err_msg(struct sInfo* info, char* msg, ...);

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*));
static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item);
void* method_block1_02transpilec(struct __current_stack1__* parent, char* it);

static char* list$1voidp_join(struct list$1voidp* self, char* sep);
static void* list$1voidp_begin(struct list$1voidp* self);
static _Bool list$1voidp_end(struct list$1voidp* self);
static void* list$1voidp_next(struct list$1voidp* self);
static int list$1voidp_length(struct list$1voidp* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

static void clear_tmp_file(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
struct sModule* sModule_initialize(struct sModule* self);

static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
void sVarTable_finalize(struct sVarTable* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void sFun_finalize(struct sFun* self);
void init_classes(struct sInfo* info);

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
void init_module(struct sInfo* info);

_Bool new_project(int argc, char** argv);

_Bool run_project(int argc, char** argv);

_Bool debug_run_project(int argc, char** argv);

_Bool clean_project(int argc, char** argv);

_Bool install_project(int argc, char** argv, char* prefix);

int come_main_v2(int argc, char** argv);

static char* list$1charph_join(struct list$1charph* self, char* sep);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void sInfo_finalize(struct sInfo* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
void method_block2_02transpilec(struct __current_stack2__* parent);

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
static inline unsigned short int __bswap16(unsigned short int __x){
void* __result_obj__;
unsigned short int __result34__;
memset(&__result_obj__, 0, sizeof(void*));
    # 21 "/usr/include/endian.h"
    __result34__ = __x<<8|__x>>8;
    return __result34__;
}
static inline unsigned int __bswap32(unsigned int __x){
void* __result_obj__;
unsigned int __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    # 26 "/usr/include/endian.h"
    __result35__ = __x>>24|__x>>8&65280|__x<<8&16711680|__x<<24;
    return __result35__;
}
static inline unsigned long int __bswap64(unsigned long int __x){
void* __result_obj__;
unsigned long int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    # 31 "/usr/include/endian.h"
    __result36__ = __bswap32(__x)+0<<32|__bswap32(__x>>32);
    return __result36__;
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













void come_init_v2(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void come_final_v2(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void write_source_file_position_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional8;
void* right_value49;
void* right_value50;
void* right_value51;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
    # 35 "02transpile.c"
    # 29 "02transpile.c"
    if(gComeOriginalSourcePosition) {
        # 34 "02transpile.c"
        # 30 "02transpile.c"
        if(info->writing_source_file_position) {
            # 31 "02transpile.c"
            add_come_code(info,((char*)(right_value51=xsprintf("# \%s \"\%s\"\n",((char*)(right_value49=int_to_string(info->sline))),((char*)(right_value50=string_to_string(info->sname)))))));
            right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 32 "02transpile.c"
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value52;
char* sname_11;
int sline_12;
void* right_value53;
void* right_value54;
char* __dec_obj12;
_Bool result_13;
void* right_value55;
char* __dec_obj13;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&sname_11, 0, sizeof(char*));
memset(&sline_12, 0, sizeof(int));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_13, 0, sizeof(_Bool));
right_value55 = (void*)0;
    # 39 "02transpile.c"
    sname_11=(char*)come_increment_ref_count(((char*)(right_value52=__builtin_string(info->sname))));
    right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 40 "02transpile.c"
    sline_12=info->sline;
    # 42 "02transpile.c"
    __dec_obj12=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value54=__builtin_string(((char*)(right_value53=node->sname(node->_protocol_obj)))))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 43 "02transpile.c"
    info->sline=node->sline(node->_protocol_obj);
    # 45 "02transpile.c"
    write_source_file_position_to_source(info);
    # 47 "02transpile.c"
    result_13=node->compile(node->_protocol_obj,info);
    # 49 "02transpile.c"
    __dec_obj13=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(sname_11))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 50 "02transpile.c"
    info->sline=sline_12;
    # 52 "02transpile.c"
    __result37__ = result_13;
    sname_11 = come_decrement_ref_count2(sname_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result37__;
    sname_11 = come_decrement_ref_count2(sname_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool _if_conditional9;
char* msg2_14;
va_list args_15;
_Bool _if_conditional10;
int n_16;
void* right_value56;
void* right_value57;
void* right_value63;
struct __current_stack1__ __current_stack1__;
void* right_value70;
void* right_value74;
void* right_value75;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_14, 0, sizeof(char*));
memset(&args_15, 0, sizeof(va_list));
memset(&n_16, 0, sizeof(int));
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value63 = (void*)0;
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
right_value70 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
    # 76 "02transpile.c"
    # 57 "02transpile.c"
    if(_if_conditional9=!info->no_output_err,    _if_conditional9) {
        # 58 "02transpile.c"
        # 60 "02transpile.c"
        # 61 "02transpile.c"
        __builtin_va_start(args_15,msg);
        # 62 "02transpile.c"
        vasprintf(&msg2_14,msg,args_15);
        # 63 "02transpile.c"
        __builtin_va_end(args_15);
        # 65 "02transpile.c"
        printf("%s %d: %s\n",info->sname,info->sline,msg2_14);
        # 66 "02transpile.c"
        info->err_num++;
        # 67 "02transpile.c"
        stackframe();
        # 74 "02transpile.c"
        # 69 "02transpile.c"
        if(info->come_fun) {
            # 70 "02transpile.c"
            n_16=info->sline-5;
            # 71 "02transpile.c"
            __current_stack1__.n_16 = &n_16;
            __current_stack1__.msg2_14 = &msg2_14;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            ((char*)(right_value75=string_puts(((char*)(right_value74=list$1voidp_join(((struct list$1voidp*)(right_value70=list$1charph_map(((struct list$1charph*)(right_value63=list$1charph_sublist(((struct list$1charph*)(right_value57=string_split_char(((char*)(right_value56=buffer_to_string(info->original_source))),10))),n_16,n_16+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n"))))));
                                if(__current_stack1__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
            right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1voidpp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 74 "02transpile.c"
        free(msg2_14);
        come_call_finalizer2(va_list_finalize,(&args_15), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
void* right_value58;
void* right_value59;
struct list$1charph* result_19;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
struct list_item$1charph* it_20;
int i_21;
_Bool _while_condtional2;
_Bool _if_conditional16;
struct list$1charph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&result_19, 0, sizeof(struct list$1charph*));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&i_21, 0, sizeof(int));
                # 646 "./comelang2.h"
                result_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value59=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value58=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 646, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 652 "./comelang2.h"
                # 648 "./comelang2.h"
                if(_if_conditional12=begin<0,                _if_conditional12) {
                    # 649 "./comelang2.h"
                    begin+=self->len;
                }
                # 656 "./comelang2.h"
                # 652 "./comelang2.h"
                if(_if_conditional13=tail<0,                _if_conditional13) {
                    # 653 "./comelang2.h"
                    tail+=self->len+1;
                }
                # 660 "./comelang2.h"
                # 656 "./comelang2.h"
                if(_if_conditional14=begin<0,                _if_conditional14) {
                    # 657 "./comelang2.h"
                    begin=0;
                }
                # 664 "./comelang2.h"
                # 660 "./comelang2.h"
                if(_if_conditional15=tail>=self->len,                _if_conditional15) {
                    # 661 "./comelang2.h"
                    tail=self->len;
                }
                # 664 "./comelang2.h"
                it_20=self->head;
                # 665 "./comelang2.h"
                i_21=0;
                # 672 "./comelang2.h"
                while(_while_condtional2=it_20!=((void*)0),                _while_condtional2) {
                    # 670 "./comelang2.h"
                    # 667 "./comelang2.h"
                    if(_if_conditional16=i_21>=begin&&i_21<tail,                    _if_conditional16) {
                        # 668 "./comelang2.h"
                        list$1charph_push_back(result_19,(char*)come_increment_ref_count(it_20->item));
                    }
                    # 670 "./comelang2.h"
                    it_20=it_20->next;
                    # 671 "./comelang2.h"
                    i_21++;
                }
                # 674 "./comelang2.h"
                __result40__ = __result_obj__ = result_19;
                come_call_finalizer2(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result38__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result38__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_17;
_Bool _while_condtional1;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                        # 123 "./comelang2.h"
                        it_17=self->head;
                        # 129 "./comelang2.h"
                        while(_while_condtional1=it_17!=((void*)0),                        _while_condtional1) {
                            # 125 "./comelang2.h"
                            prev_it_18=it_17;
                            # 126 "./comelang2.h"
                            it_17=it_17->next;
                            # 127 "./comelang2.h"
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional11) {
                                    # 0 "list_item$1charphp_finalize"
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional17;
void* right_value60;
struct list_item$1charph* litem_22;
char* __dec_obj14;
_Bool _if_conditional18;
void* right_value61;
struct list_item$1charph* litem_23;
char* __dec_obj15;
void* right_value62;
struct list_item$1charph* litem_24;
char* __dec_obj16;
struct list$1charph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1charph*));
right_value61 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1charph*));
right_value62 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1charph*));
                            # 256 "./comelang2.h"
                            # 225 "./comelang2.h"
                            if(_if_conditional17=self->len==0,                            _if_conditional17) {
                                # 226 "./comelang2.h"
                                litem_22=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value60=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 228 "./comelang2.h"
                                litem_22->prev=((void*)0);
                                # 229 "./comelang2.h"
                                litem_22->next=((void*)0);
                                # 230 "./comelang2.h"
                                __dec_obj14=litem_22->item;
                                litem_22->item=(char*)come_increment_ref_count(item);
                                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 232 "./comelang2.h"
                                self->tail=litem_22;
                                # 233 "./comelang2.h"
                                self->head=litem_22;
                            }
                            else {
                                # 256 "./comelang2.h"
                                # 235 "./comelang2.h"
                                if(_if_conditional18=self->len==1,                                _if_conditional18) {
                                    # 236 "./comelang2.h"
                                    litem_23=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value61=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 238 "./comelang2.h"
                                    litem_23->prev=self->head;
                                    # 239 "./comelang2.h"
                                    litem_23->next=((void*)0);
                                    # 240 "./comelang2.h"
                                    __dec_obj15=litem_23->item;
                                    litem_23->item=(char*)come_increment_ref_count(item);
                                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 242 "./comelang2.h"
                                    self->tail=litem_23;
                                    # 243 "./comelang2.h"
                                    self->head->next=litem_23;
                                }
                                else {
                                    # 246 "./comelang2.h"
                                    litem_24=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value62=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 248 "./comelang2.h"
                                    litem_24->prev=self->tail;
                                    # 249 "./comelang2.h"
                                    litem_24->next=((void*)0);
                                    # 250 "./comelang2.h"
                                    __dec_obj16=litem_24->item;
                                    litem_24->item=(char*)come_increment_ref_count(item);
                                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 252 "./comelang2.h"
                                    self->tail->next=litem_24;
                                    # 253 "./comelang2.h"
                                    self->tail=litem_24;
                                }
                            }
                            # 256 "./comelang2.h"
                            self->len++;
                            # 258 "./comelang2.h"
                            __result39__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result39__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*)){
void* __result_obj__;
void* right_value64;
void* right_value65;
struct list$1voidp* result_27;
struct list_item$1charph* it_28;
_Bool _while_condtional4;
_Bool _if_conditional21;
struct list$1voidp* __result43__;
struct list$1voidp* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
right_value65 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1voidp*));
memset(&it_28, 0, sizeof(struct list_item$1charph*));
                # 927 "./comelang2.h"
                result_27=(struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value65=list$1voidp_initialize((struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value64=(struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang2.h", 927, "list$1voidp"))))))));
                come_call_finalizer2(list$1voidpp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1voidpp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 929 "./comelang2.h"
                it_28=self->head;
                # 940 "./comelang2.h"
                while(_while_condtional4=it_28!=((void*)0),                _while_condtional4) {
                    # 931 "./comelang2.h"
                    list$1voidp_push_back(result_27,block(parent,it_28->item));
                    # 937 "./comelang2.h"
                    # 933 "./comelang2.h"
                    if(_if_conditional21=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                    _if_conditional21) {
                        # 934 "./comelang2.h"
                        __result43__ = __result_obj__ = result_27;
                        come_call_finalizer2(list$1voidpp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result43__;
                    }
                    # 937 "./comelang2.h"
                    it_28=it_28->next;
                }
                # 940 "./comelang2.h"
                __result44__ = __result_obj__ = result_27;
                come_call_finalizer2(list$1voidpp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result44__;
                come_call_finalizer2(list$1voidpp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self){
void* __result_obj__;
struct list$1voidp* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result41__ = __result_obj__ = self;
                    come_call_finalizer2(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result41__;
                    come_call_finalizer2(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1voidpp_finalize(struct list$1voidp* self){
void* __result_obj__;
struct list_item$1voidp* it_25;
_Bool _while_condtional3;
struct list_item$1voidp* prev_it_26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_25, 0, sizeof(struct list_item$1voidp*));
memset(&prev_it_26, 0, sizeof(struct list_item$1voidp*));
                        # 123 "./comelang2.h"
                        it_25=self->head;
                        # 129 "./comelang2.h"
                        while(_while_condtional3=it_25!=((void*)0),                        _while_condtional3) {
                            # 125 "./comelang2.h"
                            prev_it_26=it_25;
                            # 126 "./comelang2.h"
                            it_25=it_25->next;
                            # 127 "./comelang2.h"
                            come_call_finalizer2(list_item$1voidpp_finalize,prev_it_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__;
_Bool _if_conditional19;
void* right_value66;
struct list_item$1voidp* litem_29;
_Bool _if_conditional20;
void* right_value67;
struct list_item$1voidp* litem_30;
void* right_value68;
struct list_item$1voidp* litem_31;
struct list$1voidp* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1voidp*));
right_value67 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1voidp*));
right_value68 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1voidp*));
                        # 256 "./comelang2.h"
                        # 225 "./comelang2.h"
                        if(_if_conditional19=self->len==0,                        _if_conditional19) {
                            # 226 "./comelang2.h"
                            litem_29=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value66=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 226, "list_item$1voidp"))));
                            come_call_finalizer2(list_item$1voidpp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 228 "./comelang2.h"
                            litem_29->prev=((void*)0);
                            # 229 "./comelang2.h"
                            litem_29->next=((void*)0);
                            # 230 "./comelang2.h"
                            litem_29->item=item;
                            # 232 "./comelang2.h"
                            self->tail=litem_29;
                            # 233 "./comelang2.h"
                            self->head=litem_29;
                        }
                        else {
                            # 256 "./comelang2.h"
                            # 235 "./comelang2.h"
                            if(_if_conditional20=self->len==1,                            _if_conditional20) {
                                # 236 "./comelang2.h"
                                litem_30=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value67=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 236, "list_item$1voidp"))));
                                come_call_finalizer2(list_item$1voidpp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 238 "./comelang2.h"
                                litem_30->prev=self->head;
                                # 239 "./comelang2.h"
                                litem_30->next=((void*)0);
                                # 240 "./comelang2.h"
                                litem_30->item=item;
                                # 242 "./comelang2.h"
                                self->tail=litem_30;
                                # 243 "./comelang2.h"
                                self->head->next=litem_30;
                            }
                            else {
                                # 246 "./comelang2.h"
                                litem_31=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value68=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 246, "list_item$1voidp"))));
                                come_call_finalizer2(list_item$1voidpp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 248 "./comelang2.h"
                                litem_31->prev=self->tail;
                                # 249 "./comelang2.h"
                                litem_31->next=((void*)0);
                                # 250 "./comelang2.h"
                                litem_31->item=item;
                                # 252 "./comelang2.h"
                                self->tail->next=litem_31;
                                # 253 "./comelang2.h"
                                self->tail=litem_31;
                            }
                        }
                        # 256 "./comelang2.h"
                        self->len++;
                        # 258 "./comelang2.h"
                        __result42__ = __result_obj__ = self;
                        return __result42__;
}

void* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* right_value69;
void* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
                # 72 "02transpile.c"
                __result45__ = __result_obj__ = ((char*)(right_value69=xsprintf("%d %s",++(*(parent->n_16)),it)));
                right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result45__;
}

static char* list$1voidp_join(struct list$1voidp* self, char* sep){
void* __result_obj__;
void* right_value71;
void* right_value72;
struct buffer* buf_32;
int n_33;
void* it_36;
_Bool _if_conditional27;
void* right_value73;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value72 = (void*)0;
memset(&buf_32, 0, sizeof(struct buffer*));
memset(&n_33, 0, sizeof(int));
memset(&it_36, 0, sizeof(void*));
right_value73 = (void*)0;
                # 1047 "./comelang2.h"
                buf_32=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value72=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value71=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1047, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1049 "./comelang2.h"
                n_33=0;
                # 1060 "./comelang2.h"
                for(                it_36=list$1voidp_begin(self);                !list$1voidp_end(self);                it_36=list$1voidp_next(self)                ){
                    # 1051 "./comelang2.h"
                    buffer_append_str(buf_32,it_36);
                    # 1057 "./comelang2.h"
                    # 1053 "./comelang2.h"
                    if(_if_conditional27=n_33<list$1voidp_length(self)-1,                    _if_conditional27) {
                        # 1054 "./comelang2.h"
                        buffer_append_str(buf_32,sep);
                    }
                    # 1057 "./comelang2.h"
                    n_33++;
                }
                # 1060 "./comelang2.h"
                __result55__ = __result_obj__ = ((char*)(right_value73=buffer_to_string(buf_32)));
                come_call_finalizer2(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result55__;
                come_call_finalizer2(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void* list$1voidp_begin(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional22;
void* result_34;
void* __result46__;
_Bool _if_conditional23;
void* __result47__;
void* result_35;
void* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_34, 0, sizeof(void*));
memset(&result_35, 0, sizeof(void*));
                    # 290 "./comelang2.h"
                    # 285 "./comelang2.h"
                    if(_if_conditional22=self==((void*)0),                    _if_conditional22) {
                        # 286 "./comelang2.h"
                        # 287 "./comelang2.h"
                        memset(&result_34,0,sizeof(void*));
                        # 288 "./comelang2.h"
                        __result46__ = __result_obj__ = result_34;
                        return __result46__;
                    }
                    # 290 "./comelang2.h"
                    self->it=self->head;
                    # 296 "./comelang2.h"
                    # 292 "./comelang2.h"
                    if(self->it) {
                        # 293 "./comelang2.h"
                        __result47__ = __result_obj__ = self->it->item;
                        return __result47__;
                    }
                    # 296 "./comelang2.h"
                    # 297 "./comelang2.h"
                    memset(&result_35,0,sizeof(void*));
                    # 298 "./comelang2.h"
                    __result48__ = __result_obj__ = result_35;
                    return __result48__;
}

static _Bool list$1voidp_end(struct list$1voidp* self){
void* __result_obj__;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 320 "./comelang2.h"
                    __result49__ = self==((void*)0)||self->it==((void*)0);
                    return __result49__;
}

static void* list$1voidp_next(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional24;
void* result_37;
void* __result50__;
_Bool _if_conditional25;
void* __result51__;
void* result_38;
void* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_37, 0, sizeof(void*));
memset(&result_38, 0, sizeof(void*));
                    # 308 "./comelang2.h"
                    # 302 "./comelang2.h"
                    if(_if_conditional24=self==((void*)0)||self->it==((void*)0),                    _if_conditional24) {
                        # 303 "./comelang2.h"
                        # 304 "./comelang2.h"
                        memset(&result_37,0,sizeof(void*));
                        # 305 "./comelang2.h"
                        __result50__ = __result_obj__ = result_37;
                        return __result50__;
                    }
                    # 308 "./comelang2.h"
                    self->it=self->it->next;
                    # 314 "./comelang2.h"
                    # 310 "./comelang2.h"
                    if(self->it) {
                        # 311 "./comelang2.h"
                        __result51__ = __result_obj__ = self->it->item;
                        return __result51__;
                    }
                    # 314 "./comelang2.h"
                    # 315 "./comelang2.h"
                    memset(&result_38,0,sizeof(void*));
                    # 316 "./comelang2.h"
                    __result52__ = __result_obj__ = result_38;
                    return __result52__;
}

static int list$1voidp_length(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional26;
int __result53__;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 367 "./comelang2.h"
                        # 364 "./comelang2.h"
                        if(_if_conditional26=self==((void*)0),                        _if_conditional26) {
                            # 365 "./comelang2.h"
                            __result53__ = 0;
                            return __result53__;
                        }
                        # 367 "./comelang2.h"
                        __result54__ = self->len;
                        return __result54__;
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    # 80 "02transpile.c"
    __result56__ = 0;
    return __result56__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
void* right_value76;
char* output_file_name_39;
void* right_value77;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
memset(&output_file_name_39, 0, sizeof(char*));
right_value77 = (void*)0;
    # 85 "02transpile.c"
    output_file_name_39=(char*)come_increment_ref_count(((char*)(right_value76=xsprintf("%s.c",info->sname))));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 89 "02transpile.c"
    string_write(((char*)(right_value77=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_39,(_Bool)0);
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 91 "02transpile.c"
    __result57__ = (_Bool)1;
    output_file_name_39 = come_decrement_ref_count2(output_file_name_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result57__;
    output_file_name_39 = come_decrement_ref_count2(output_file_name_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_40;
void* right_value78;
void* right_value79;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_40, 0, sizeof(char*));
right_value78 = (void*)0;
right_value79 = (void*)0;
    # 96 "02transpile.c"
    input_file_name_40=(char*)come_increment_ref_count(info->sname);
    # 98 "02transpile.c"
    system(((char*)(right_value79=xsprintf("rm -f \%s.*",((char*)(right_value78=string_to_string(input_file_name_40)))))));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    input_file_name_40 = come_decrement_ref_count2(input_file_name_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
char* input_file_name_41;
char* output_file_name_42;
_Bool _if_conditional28;
void* right_value80;
char* __dec_obj17;
void* right_value81;
char* __dec_obj18;
void* right_value82;
char* cmd_43;
_Bool exist_common_h_44;
struct _IO_FILE* f_45;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
int rc_46;
_Bool _if_conditional33;
void* right_value83;
void* right_value84;
char* cmd2_47;
_Bool _if_conditional34;
int rc_48;
_Bool _if_conditional35;
void* right_value85;
char* command2_49;
_Bool _if_conditional36;
void* right_value86;
void* right_value87;
char* cmd3_50;
_Bool _if_conditional37;
int rc_51;
void* right_value88;
char* command2_52;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value89;
void* right_value90;
char* cmd4_53;
void* right_value91;
char* command_54;
_Bool _if_conditional40;
void* right_value92;
char* command2_55;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_41, 0, sizeof(char*));
memset(&output_file_name_42, 0, sizeof(char*));
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&cmd_43, 0, sizeof(char*));
memset(&exist_common_h_44, 0, sizeof(_Bool));
memset(&f_45, 0, sizeof(struct _IO_FILE*));
memset(&rc_46, 0, sizeof(int));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&cmd2_47, 0, sizeof(char*));
memset(&rc_48, 0, sizeof(int));
right_value85 = (void*)0;
memset(&command2_49, 0, sizeof(char*));
right_value86 = (void*)0;
right_value87 = (void*)0;
memset(&cmd3_50, 0, sizeof(char*));
memset(&rc_51, 0, sizeof(int));
right_value88 = (void*)0;
memset(&command2_52, 0, sizeof(char*));
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&cmd4_53, 0, sizeof(char*));
right_value91 = (void*)0;
memset(&command_54, 0, sizeof(char*));
right_value92 = (void*)0;
memset(&command2_55, 0, sizeof(char*));
    # 103 "02transpile.c"
    input_file_name_41=(char*)come_increment_ref_count(info->sname);
    # 105 "02transpile.c"
    # 113 "02transpile.c"
    # 106 "02transpile.c"
    if(_if_conditional28=!info->output_header_file&&info->output_file_name,    _if_conditional28) {
        # 107 "02transpile.c"
        __dec_obj17=output_file_name_42;
        output_file_name_42=(char*)come_increment_ref_count(((char*)(right_value80=string_operator_add(info->output_file_name,".i"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 110 "02transpile.c"
        __dec_obj18=output_file_name_42;
        output_file_name_42=(char*)come_increment_ref_count(((char*)(right_value81=string_operator_add(info->sname,".i"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 113 "02transpile.c"
    cmd_43=(char*)come_increment_ref_count(((char*)(right_value82=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 115 "02transpile.c"
    exist_common_h_44=(_Bool)0;
    # 129 "02transpile.c"
    {
        # 117 "02transpile.c"
        f_45=fopen("common.h","r");
        # 121 "02transpile.c"
        # 118 "02transpile.c"
        if(f_45) {
            # 119 "02transpile.c"
            exist_common_h_44=(_Bool)1;
        }
        # 124 "02transpile.c"
        # 121 "02transpile.c"
        if(_if_conditional30=string_operator_equals(info->output_file_name,"common.h"),        _if_conditional30) {
            # 122 "02transpile.c"
            exist_common_h_44=(_Bool)0;
        }
        # 127 "02transpile.c"
        # 124 "02transpile.c"
        if(f_45) {
            # 125 "02transpile.c"
            fclose(f_45);
        }
    }
    # 134 "02transpile.c"
    # 129 "02transpile.c"
    if(_if_conditional32=!gCommonHeader,    _if_conditional32) {
        # 130 "02transpile.c"
        exist_common_h_44=(_Bool)0;
    }
    # 134 "02transpile.c"
    rc_46=system(cmd_43);
    # 183 "02transpile.c"
    # 135 "02transpile.c"
    if(_if_conditional33=rc_46==0,    _if_conditional33) {
        # 136 "02transpile.c"
        cmd2_47=(char*)come_increment_ref_count(((char*)(right_value84=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_44?((char*)(right_value83=__builtin_string(" -include common.h "))):"",input_file_name_41,output_file_name_42,output_file_name_42))));
        right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 138 "02transpile.c"
        # 138 "02transpile.c"
        if(info->verbose) {
            # 138 "02transpile.c"
            puts(cmd2_47);
        }
        # 140 "02transpile.c"
        rc_48=system(cmd2_47);
        # 147 "02transpile.c"
        # 142 "02transpile.c"
        if(_if_conditional35=rc_48!=0,        _if_conditional35) {
            # 143 "02transpile.c"
            printf("failed to cpp(2) (%s)\n",cmd2_47);
            # 144 "02transpile.c"
            exit(5);
        }
        # 147 "02transpile.c"
        command2_49=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("grep error\\: %s.cpp.out",output_file_name_42))));
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 149 "02transpile.c"
        # 149 "02transpile.c"
        if(info->verbose) {
            # 149 "02transpile.c"
            puts(command2_49);
        }
        # 150 "02transpile.c"
        (void)system(command2_49);
        cmd2_47 = come_decrement_ref_count2(cmd2_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_49 = come_decrement_ref_count2(command2_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 154 "02transpile.c"
        cmd3_50=(char*)come_increment_ref_count(((char*)(right_value87=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_44?((char*)(right_value86=__builtin_string(" -include common.h "))):"",input_file_name_41,output_file_name_42,output_file_name_42))));
        right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 156 "02transpile.c"
        # 156 "02transpile.c"
        if(info->verbose) {
            # 156 "02transpile.c"
            puts(cmd3_50);
        }
        # 157 "02transpile.c"
        rc_51=system(cmd3_50);
        # 159 "02transpile.c"
        command2_52=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("grep error\\: %s.cpp.out",output_file_name_42))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 161 "02transpile.c"
        # 161 "02transpile.c"
        if(info->verbose) {
            # 161 "02transpile.c"
            puts(command2_52);
        }
        # 162 "02transpile.c"
        (void)system(command2_52);
        # 181 "02transpile.c"
        # 164 "02transpile.c"
        if(_if_conditional39=rc_51!=0,        _if_conditional39) {
            # 165 "02transpile.c"
            cmd4_53=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_44?((char*)(right_value89=__builtin_string(" -include common.h "))):"",input_file_name_41,output_file_name_42,output_file_name_42))));
            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 166 "02transpile.c"
            command_54=(char*)come_increment_ref_count(((char*)(right_value91=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_42,input_file_name_41,info->clang_option,input_file_name_41))));
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 168 "02transpile.c"
            # 168 "02transpile.c"
            if(info->verbose) {
                # 168 "02transpile.c"
                puts(cmd4_53);
            }
            # 169 "02transpile.c"
            rc_51=system(cmd4_53);
            # 171 "02transpile.c"
            command2_55=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("grep error\\: %s.cpp.out",output_file_name_42))));
            right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 173 "02transpile.c"
            # 173 "02transpile.c"
            if(info->verbose) {
                # 173 "02transpile.c"
                puts(command2_55);
            }
            # 174 "02transpile.c"
            (void)system(command2_55);
            # 180 "02transpile.c"
            # 176 "02transpile.c"
            if(_if_conditional42=rc_51!=0,            _if_conditional42) {
                # 177 "02transpile.c"
                printf("failed to cpp(2) (%s)\n",cmd4_53);
                # 178 "02transpile.c"
                exit(5);
            }
            cmd4_53 = come_decrement_ref_count2(cmd4_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_54 = come_decrement_ref_count2(command_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_55 = come_decrement_ref_count2(command2_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_50 = come_decrement_ref_count2(cmd3_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_52 = come_decrement_ref_count2(command2_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 183 "02transpile.c"
    __result58__ = (_Bool)1;
    input_file_name_41 = come_decrement_ref_count2(input_file_name_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_42 = come_decrement_ref_count2(output_file_name_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_43 = come_decrement_ref_count2(cmd_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result58__;
    input_file_name_41 = come_decrement_ref_count2(input_file_name_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_42 = come_decrement_ref_count2(output_file_name_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_43 = come_decrement_ref_count2(cmd_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
void* right_value93;
char* input_file_name_56;
char* output_file_name_57;
_Bool _if_conditional43;
void* right_value94;
char* __dec_obj19;
void* right_value95;
char* __dec_obj20;
void* right_value96;
char* command_58;
_Bool _if_conditional44;
int rc_59;
void* right_value97;
char* command2_60;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool __result59__;
_Bool _if_conditional47;
void* right_value98;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&input_file_name_56, 0, sizeof(char*));
memset(&output_file_name_57, 0, sizeof(char*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&command_58, 0, sizeof(char*));
memset(&rc_59, 0, sizeof(int));
right_value97 = (void*)0;
memset(&command2_60, 0, sizeof(char*));
right_value98 = (void*)0;
    # 188 "02transpile.c"
    input_file_name_56=(char*)come_increment_ref_count(((char*)(right_value93=string_operator_add(info->sname,".c"))));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 190 "02transpile.c"
    output_file_name_57=((void*)0);
    # 198 "02transpile.c"
    # 191 "02transpile.c"
    if(_if_conditional43=info->output_file_name&&output_object_file,    _if_conditional43) {
        # 192 "02transpile.c"
        __dec_obj19=output_file_name_57;
        output_file_name_57=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(info->output_file_name))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 195 "02transpile.c"
        __dec_obj20=output_file_name_57;
        output_file_name_57=(char*)come_increment_ref_count(((char*)(right_value95=string_operator_add(info->sname,".o"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 198 "02transpile.c"
    command_58=(char*)come_increment_ref_count(((char*)(right_value96=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_57,input_file_name_56,info->clang_option,input_file_name_56))));
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 200 "02transpile.c"
    # 200 "02transpile.c"
    if(info->verbose) {
        # 200 "02transpile.c"
        puts(command_58);
    }
    # 201 "02transpile.c"
    rc_59=system(command_58);
    # 203 "02transpile.c"
    command2_60=(char*)come_increment_ref_count(((char*)(right_value97=xsprintf("grep error\\: %s.out",input_file_name_56))));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 205 "02transpile.c"
    # 205 "02transpile.c"
    if(info->verbose) {
        # 205 "02transpile.c"
        puts(command2_60);
    }
    # 206 "02transpile.c"
    (void)system(command2_60);
    # 213 "02transpile.c"
    # 208 "02transpile.c"
    if(_if_conditional46=rc_59!=0,    _if_conditional46) {
        # 209 "02transpile.c"
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        # 210 "02transpile.c"
        __result59__ = (_Bool)0;
        input_file_name_56 = come_decrement_ref_count2(input_file_name_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_57 = come_decrement_ref_count2(output_file_name_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_58 = come_decrement_ref_count2(command_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_60 = come_decrement_ref_count2(command2_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result59__;
    }
    # 217 "02transpile.c"
    # 213 "02transpile.c"
    if(_if_conditional47=!output_object_file,    _if_conditional47) {
        # 214 "02transpile.c"
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value98=__builtin_string(output_file_name_57)))));
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 217 "02transpile.c"
    __result60__ = (_Bool)1;
    input_file_name_56 = come_decrement_ref_count2(input_file_name_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_57 = come_decrement_ref_count2(output_file_name_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_58 = come_decrement_ref_count2(command_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_60 = come_decrement_ref_count2(command2_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result60__;
    input_file_name_56 = come_decrement_ref_count2(input_file_name_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_57 = come_decrement_ref_count2(output_file_name_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_58 = come_decrement_ref_count2(command_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_60 = come_decrement_ref_count2(command2_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
char* output_file_name_61;
_Bool _if_conditional48;
void* right_value99;
char* __dec_obj21;
void* right_value100;
char* __dec_obj22;
void* right_value101;
void* right_value102;
struct buffer* command_62;
void* right_value103;
struct list$1charph* o2_saved_63;
char* it_66;
void* right_value104;
_Bool _if_conditional53;
void* right_value105;
char* cmd_69;
int rc_70;
_Bool _if_conditional54;
void* right_value106;
_Bool _if_conditional55;
void* right_value107;
_Bool _if_conditional56;
void* right_value108;
void* right_value109;
_Bool _if_conditional57;
_Bool __result68__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_61, 0, sizeof(char*));
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&command_62, 0, sizeof(struct buffer*));
right_value103 = (void*)0;
memset(&o2_saved_63, 0, sizeof(struct list$1charph*));
memset(&it_66, 0, sizeof(char*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&cmd_69, 0, sizeof(char*));
memset(&rc_70, 0, sizeof(int));
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
    # 222 "02transpile.c"
    output_file_name_61=((void*)0);
    # 230 "02transpile.c"
    # 223 "02transpile.c"
    if(info->output_file_name) {
        # 224 "02transpile.c"
        __dec_obj21=output_file_name_61;
        output_file_name_61=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string(info->output_file_name))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 227 "02transpile.c"
        __dec_obj22=output_file_name_61;
        output_file_name_61=(char*)come_increment_ref_count(((char*)(right_value100=xnoextname(info->sname))));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 230 "02transpile.c"
    command_62=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value102=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value101=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 230, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 232 "02transpile.c"
    buffer_append_str(command_62,((char*)(right_value103=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_61,getenv("HOME"),"/usr/local/"))));
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 238 "02transpile.c"
    for(    o2_saved_63=(object_files),it_66=list$1charph_begin((o2_saved_63));    !list$1charph_end((o2_saved_63));    it_66=list$1charph_next((o2_saved_63))    ){
        # 235 "02transpile.c"
        buffer_append_str(command_62,((char*)(right_value104=xsprintf("%s ",it_66))));
        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 244 "02transpile.c"
    # 238 "02transpile.c"
    if(gComeGC) {
        # 239 "02transpile.c"
        buffer_append_str(command_62,"-L/usr/local/lib -lcomelang2-gc ");
    }
    else {
        # 242 "02transpile.c"
        buffer_append_str(command_62,"-L/usr/local/lib -lcomelang2 ");
    }
    # 244 "02transpile.c"
    cmd_69=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 246 "02transpile.c"
    rc_70=system(cmd_69);
    # 250 "02transpile.c"
    # 247 "02transpile.c"
    if(_if_conditional54=rc_70==0,    _if_conditional54) {
        # 248 "02transpile.c"
        buffer_append_str(command_62," -L/opt/homebrew/opt/pcre/lib ");
    }
    # 250 "02transpile.c"
    buffer_append_str(command_62,((char*)(right_value106=xsprintf(" %s ",info->clang_option))));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 256 "02transpile.c"
    # 252 "02transpile.c"
    if(gComeGC) {
        # 253 "02transpile.c"
        buffer_append_str(command_62,((char*)(right_value107=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 256 "02transpile.c"
    # 256 "02transpile.c"
    if(info->verbose) {
        # 256 "02transpile.c"
        puts(((char*)(right_value108=buffer_to_string(command_62))));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 257 "02transpile.c"
    rc_70=system(((char*)(right_value109=buffer_to_string(command_62))));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 264 "02transpile.c"
    # 259 "02transpile.c"
    if(_if_conditional57=rc_70!=0,    _if_conditional57) {
        # 260 "02transpile.c"
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        # 261 "02transpile.c"
        __result68__ = (_Bool)0;
        output_file_name_61 = come_decrement_ref_count2(output_file_name_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,command_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        cmd_69 = come_decrement_ref_count2(cmd_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result68__;
    }
    # 264 "02transpile.c"
    __result69__ = (_Bool)1;
    output_file_name_61 = come_decrement_ref_count2(output_file_name_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,command_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    cmd_69 = come_decrement_ref_count2(cmd_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result69__;
    output_file_name_61 = come_decrement_ref_count2(output_file_name_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,command_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    cmd_69 = come_decrement_ref_count2(cmd_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional49;
char* result_64;
char* __result61__;
_Bool _if_conditional50;
char* __result62__;
char* result_65;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_64, 0, sizeof(char*));
memset(&result_65, 0, sizeof(char*));
        # 290 "./comelang2.h"
        # 285 "./comelang2.h"
        if(_if_conditional49=self==((void*)0),        _if_conditional49) {
            # 286 "./comelang2.h"
            # 287 "./comelang2.h"
            memset(&result_64,0,sizeof(char*));
            # 288 "./comelang2.h"
            __result61__ = __result_obj__ = result_64;
            return __result61__;
        }
        # 290 "./comelang2.h"
        self->it=self->head;
        # 296 "./comelang2.h"
        # 292 "./comelang2.h"
        if(self->it) {
            # 293 "./comelang2.h"
            __result62__ = __result_obj__ = self->it->item;
            return __result62__;
        }
        # 296 "./comelang2.h"
        # 297 "./comelang2.h"
        memset(&result_65,0,sizeof(char*));
        # 298 "./comelang2.h"
        __result63__ = __result_obj__ = result_65;
        return __result63__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./comelang2.h"
        __result64__ = self==((void*)0)||self->it==((void*)0);
        return __result64__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional51;
char* result_67;
char* __result65__;
_Bool _if_conditional52;
char* __result66__;
char* result_68;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(char*));
memset(&result_68, 0, sizeof(char*));
        # 308 "./comelang2.h"
        # 302 "./comelang2.h"
        if(_if_conditional51=self==((void*)0)||self->it==((void*)0),        _if_conditional51) {
            # 303 "./comelang2.h"
            # 304 "./comelang2.h"
            memset(&result_67,0,sizeof(char*));
            # 305 "./comelang2.h"
            __result65__ = __result_obj__ = result_67;
            return __result65__;
        }
        # 308 "./comelang2.h"
        self->it=self->it->next;
        # 314 "./comelang2.h"
        # 310 "./comelang2.h"
        if(self->it) {
            # 311 "./comelang2.h"
            __result66__ = __result_obj__ = self->it->item;
            return __result66__;
        }
        # 314 "./comelang2.h"
        # 315 "./comelang2.h"
        memset(&result_68,0,sizeof(char*));
        # 316 "./comelang2.h"
        __result67__ = __result_obj__ = result_68;
        return __result67__;
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
void* right_value110;
void* right_value111;
struct buffer* __dec_obj23;
void* right_value112;
void* right_value113;
struct buffer* __dec_obj24;
char* __dec_obj25;
char* __dec_obj26;
void* right_value114;
void* right_value115;
struct buffer* __dec_obj27;
struct sModule* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
    # 269 "02transpile.c"
    __dec_obj23=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value111=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value110=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 269, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 270 "02transpile.c"
    __dec_obj24=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value113=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value112=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 270, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 271 "02transpile.c"
    __dec_obj25=self->mLastCode;
    self->mLastCode=((void*)0);
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 272 "02transpile.c"
    __dec_obj26=self->mLastCode2;
    self->mLastCode2=((void*)0);
    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 273 "02transpile.c"
    __dec_obj27=self->mHeader;
    self->mHeader=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value115=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value114=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 273, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 275 "02transpile.c"
    __result70__ = __result_obj__ = self;
    come_call_finalizer2(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result70__;
    come_call_finalizer2(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sModule_finalize"
        # 0 "sModule_finalize"
        if(_if_conditional58=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional58) {
            # 0 "sModule_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sModule_finalize"
        # 1 "sModule_finalize"
        if(_if_conditional59=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional59) {
            # 1 "sModule_finalize"
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sModule_finalize"
        # 2 "sModule_finalize"
        if(_if_conditional60=self!=((void*)0)&&self->mLastCode!=((void*)0),        _if_conditional60) {
            # 2 "sModule_finalize"
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 4 "sModule_finalize"
        # 3 "sModule_finalize"
        if(_if_conditional61=self!=((void*)0)&&self->mLastCode2!=((void*)0),        _if_conditional61) {
            # 3 "sModule_finalize"
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 5 "sModule_finalize"
        # 4 "sModule_finalize"
        if(_if_conditional62=self!=((void*)0)&&self->mLastCode3!=((void*)0),        _if_conditional62) {
            # 4 "sModule_finalize"
            self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 6 "sModule_finalize"
        # 5 "sModule_finalize"
        if(_if_conditional63=self!=((void*)0)&&self->mHeader!=((void*)0),        _if_conditional63) {
            # 5 "sModule_finalize"
            come_call_finalizer2(buffer_finalize,self->mHeader, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
void* right_value116;
void* right_value122;
struct map$2charphsVarph* __dec_obj29;
static int id_80=0;
struct sVarTable* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
right_value122 = (void*)0;
    # 280 "02transpile.c"
    __dec_obj29=self->mVars;
    self->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value122=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value116=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02transpile.c", 280, "map$2charphsVarph"))))))));
    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(map$2charphsVarphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(map$2charphsVarphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 281 "02transpile.c"
    self->mGlobal=global;
    # 282 "02transpile.c"
    self->mParent=parent;
    # 283 "02transpile.c"
    # 284 "02transpile.c"
    self->mID=++id_80;
    # 286 "02transpile.c"
    __result73__ = __result_obj__ = self;
    come_call_finalizer2(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result73__;
    come_call_finalizer2(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value117;
void* right_value118;
void* right_value119;
int i_75;
void* right_value120;
void* right_value121;
struct list$1charp* __dec_obj28;
struct map$2charphsVarph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&i_75, 0, sizeof(int));
right_value120 = (void*)0;
right_value121 = (void*)0;
        # 1087 "./comelang2.h"
        self->keys=(char**)come_increment_ref_count(((char**)(right_value117=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1087, "char*%"))));
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1088 "./comelang2.h"
        self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value118=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1088, "sVar*%"))));
        come_call_finalizer2(sVar_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1089 "./comelang2.h"
        self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value119=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1089, "bool"))));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1096 "./comelang2.h"
        for(        i_75=0;        i_75<1024;        i_75++        ){
            # 1093 "./comelang2.h"
            self->item_existance[i_75]=(_Bool)0;
        }
        # 1096 "./comelang2.h"
        self->size=1024;
        # 1097 "./comelang2.h"
        self->len=0;
        # 1099 "./comelang2.h"
        __dec_obj28=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value121=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value120=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1099, "list$1charp"))))))));
        come_call_finalizer2(list$1charp_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charpp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charpp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1101 "./comelang2.h"
        self->it=0;
        # 1103 "./comelang2.h"
        __result72__ = __result_obj__ = self;
        come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result72__;
        come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional83;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sVar_finalize"
            # 0 "sVar_finalize"
            if(_if_conditional64=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional64) {
                # 0 "sVar_finalize"
                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sVar_finalize"
            # 1 "sVar_finalize"
            if(_if_conditional65=self!=((void*)0)&&self->mCValueName!=((void*)0),            _if_conditional65) {
                # 1 "sVar_finalize"
                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 3 "sVar_finalize"
            # 2 "sVar_finalize"
            if(_if_conditional66=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional66) {
                # 2 "sVar_finalize"
                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sVar_finalize"
            # 3 "sVar_finalize"
            if(_if_conditional83=self!=((void*)0)&&self->mFunName!=((void*)0),            _if_conditional83) {
                # 3 "sVar_finalize"
                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional67;
_Bool _if_conditional69;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sType_finalize"
                    # 0 "sType_finalize"
                    if(_if_conditional67=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional67) {
                        # 0 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sType_finalize"
                    # 1 "sType_finalize"
                    if(_if_conditional69=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional69) {
                        # 1 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sType_finalize"
                    # 2 "sType_finalize"
                    if(_if_conditional71=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional71) {
                        # 2 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 4 "sType_finalize"
                    # 3 "sType_finalize"
                    if(_if_conditional72=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional72) {
                        # 3 "sType_finalize"
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 5 "sType_finalize"
                    # 4 "sType_finalize"
                    if(_if_conditional73=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional73) {
                        # 4 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 6 "sType_finalize"
                    # 5 "sType_finalize"
                    if(_if_conditional74=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional74) {
                        # 5 "sType_finalize"
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 7 "sType_finalize"
                    # 6 "sType_finalize"
                    if(_if_conditional76=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional76) {
                        # 6 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 8 "sType_finalize"
                    # 7 "sType_finalize"
                    if(_if_conditional77=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional77) {
                        # 7 "sType_finalize"
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 9 "sType_finalize"
                    # 8 "sType_finalize"
                    if(_if_conditional78=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional78) {
                        # 8 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 10 "sType_finalize"
                    # 9 "sType_finalize"
                    if(_if_conditional79=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional79) {
                        # 9 "sType_finalize"
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 11 "sType_finalize"
                    # 10 "sType_finalize"
                    if(_if_conditional80=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional80) {
                        # 10 "sType_finalize"
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 12 "sType_finalize"
                    # 11 "sType_finalize"
                    if(_if_conditional81=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional81) {
                        # 11 "sType_finalize"
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 13 "sType_finalize"
                    # 12 "sType_finalize"
                    if(_if_conditional82=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional82) {
                        # 12 "sType_finalize"
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_71;
_Bool _while_condtional5;
struct list_item$1sTypeph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_71, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1sTypeph*));
                            # 123 "./comelang2.h"
                            it_71=self->head;
                            # 129 "./comelang2.h"
                            while(_while_condtional5=it_71!=((void*)0),                            _while_condtional5) {
                                # 125 "./comelang2.h"
                                prev_it_72=it_71;
                                # 126 "./comelang2.h"
                                it_71=it_71->next;
                                # 127 "./comelang2.h"
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional68;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sTypephp_finalize"
                                    # 0 "list_item$1sTypephp_finalize"
                                    if(_if_conditional68=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional68) {
                                        # 0 "list_item$1sTypephp_finalize"
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypephp_finalize"
                            # 0 "tuple1$1sTypephp_finalize"
                            if(_if_conditional70=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional70) {
                                # 0 "tuple1$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_73;
_Bool _while_condtional6;
struct list_item$1sNodeph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1sNodeph*));
                            # 123 "./comelang2.h"
                            it_73=self->head;
                            # 129 "./comelang2.h"
                            while(_while_condtional6=it_73!=((void*)0),                            _while_condtional6) {
                                # 125 "./comelang2.h"
                                prev_it_74=it_73;
                                # 126 "./comelang2.h"
                                it_73=it_73->next;
                                # 127 "./comelang2.h"
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sNodephp_finalize"
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(_if_conditional75=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional75) {
                                        # 0 "list_item$1sNodephp_finalize"
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./comelang2.h"
            self->head=((void*)0);
            # 105 "./comelang2.h"
            self->tail=((void*)0);
            # 106 "./comelang2.h"
            self->len=0;
            # 108 "./comelang2.h"
            __result71__ = __result_obj__ = self;
            come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result71__;
            come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_76;
_Bool _while_condtional7;
struct list_item$1charp* prev_it_77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_76, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_77, 0, sizeof(struct list_item$1charp*));
                # 123 "./comelang2.h"
                it_76=self->head;
                # 129 "./comelang2.h"
                while(_while_condtional7=it_76!=((void*)0),                _while_condtional7) {
                    # 125 "./comelang2.h"
                    prev_it_77=it_76;
                    # 126 "./comelang2.h"
                    it_76=it_76->next;
                    # 127 "./comelang2.h"
                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_78;
_Bool _if_conditional84;
_Bool _if_conditional85;
int i_79;
_Bool _if_conditional86;
_Bool _if_conditional87;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_78, 0, sizeof(int));
memset(&i_79, 0, sizeof(int));
            # 1137 "./comelang2.h"
            for(            i_78=0;            i_78<self->size;            i_78++            ){
                # 1136 "./comelang2.h"
                # 1131 "./comelang2.h"
                if(_if_conditional84=self->item_existance[i_78],                _if_conditional84) {
                    # 1135 "./comelang2.h"
                    # 1132 "./comelang2.h"
                    if(_if_conditional85=1,                    _if_conditional85) {
                        # 1133 "./comelang2.h"
                        come_call_finalizer2(sVar_finalize,self->items[i_78], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1137 "./comelang2.h"
            come_free((char*)self->items);
            # 1146 "./comelang2.h"
            for(            i_79=0;            i_79<self->size;            i_79++            ){
                # 1145 "./comelang2.h"
                # 1140 "./comelang2.h"
                if(_if_conditional86=self->item_existance[i_79],                _if_conditional86) {
                    # 1144 "./comelang2.h"
                    # 1141 "./comelang2.h"
                    if(_if_conditional87=1,                    _if_conditional87) {
                        # 1142 "./comelang2.h"
                        self->keys[i_79] = come_decrement_ref_count2(self->keys[i_79], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1146 "./comelang2.h"
            come_free((char*)self->keys);
            # 1148 "./comelang2.h"
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1150 "./comelang2.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional88;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "map$2charphsVarph_finalize"
        # 0 "map$2charphsVarph_finalize"
        if(_if_conditional88=self!=((void*)0)&&self->key_list!=((void*)0),        _if_conditional88) {
            # 0 "map$2charphsVarph_finalize"
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 291 "02transpile.c"
    come_call_finalizer2(map$2charphsVarphp_finalize,self->mVars, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
int pointer_num_81;
char* p_82;
_Bool _while_condtional8;
_Bool _if_conditional89;
_Bool _while_condtional9;
void* right_value123;
void* right_value124;
char* name2_83;
struct sClass* klass_89;
struct sClass* generics_class_90;
_Bool _if_conditional100;
_Bool _if_conditional101;
void* right_value125;
struct sClass* klass2_91;
void* right_value126;
char* __dec_obj30;
void* right_value127;
char* __dec_obj31;
void* right_value134;
void* right_value135;
void* right_value136;
void* right_value137;
struct tuple1$1sTypeph* __dec_obj33;
void* right_value138;
void* right_value139;
struct list$1sTypeph* __dec_obj34;
void* right_value140;
void* right_value141;
struct tuple1$1sTypeph* __dec_obj35;
void* right_value142;
void* right_value143;
struct list$1sTypeph* __dec_obj36;
void* right_value144;
void* right_value145;
struct list$1sNodeph* __dec_obj37;
void* right_value146;
void* right_value147;
struct list$1sTypeph* __dec_obj38;
void* right_value148;
void* right_value149;
struct list$1charph* __dec_obj39;
struct tuple1$1sTypeph* __dec_obj40;
struct sNode* __dec_obj41;
void* right_value150;
char* __dec_obj42;
struct sType* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pointer_num_81, 0, sizeof(int));
memset(&p_82, 0, sizeof(char*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&name2_83, 0, sizeof(char*));
memset(&klass_89, 0, sizeof(struct sClass*));
memset(&generics_class_90, 0, sizeof(struct sClass*));
right_value125 = (void*)0;
memset(&klass2_91, 0, sizeof(struct sClass*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
    # 296 "02transpile.c"
    pointer_num_81=0;
    # 297 "02transpile.c"
    p_82=name;
    # 306 "02transpile.c"
    while(_while_condtional8=*p_82,    _while_condtional8) {
        # 305 "02transpile.c"
        # 299 "02transpile.c"
        if(_if_conditional89=xisalpha(*p_82),        _if_conditional89) {
            # 300 "02transpile.c"
            p_82++;
        }
        else {
            # 303 "02transpile.c"
            break;
        }
    }
    # 311 "02transpile.c"
    while(_while_condtional9=*p_82==42,    _while_condtional9) {
        # 307 "02transpile.c"
        pointer_num_81++;
        # 308 "02transpile.c"
        p_82++;
    }
    # 311 "02transpile.c"
    name2_83=(char*)come_increment_ref_count(((char*)(right_value124=string_substring(((char*)(right_value123=__builtin_string(name))),0,-pointer_num_81-1))));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 313 "02transpile.c"
    klass_89=map$2charphsClassphp_operator_load_element(info->classes,name2_83);
    # 314 "02transpile.c"
    generics_class_90=map$2charphsClassphp_operator_load_element(info->generics_classes,name2_83);
    # 319 "02transpile.c"
    # 316 "02transpile.c"
    if(_if_conditional100=klass_89==((void*)0)&&generics_class_90==((void*)0),    _if_conditional100) {
        # 317 "02transpile.c"
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_83);
    }
    # 332 "02transpile.c"
    # 319 "02transpile.c"
    if(klass_89) {
        # 320 "02transpile.c"
        self->mClass=klass_89;
    }
    else {
        # 323 "02transpile.c"
        klass2_91=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value125=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 323, "sClass"))));
        come_call_finalizer2(sClass_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 324 "02transpile.c"
        __dec_obj30=klass2_91->mName;
        klass2_91->mName=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(name))));
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 325 "02transpile.c"
        __dec_obj31=klass2_91->mDeclareSName;
        klass2_91->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(info->sname))));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 327 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string(name)))),(struct sClass*)come_increment_ref_count(klass2_91));
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 329 "02transpile.c"
        self->mClass=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value135=__builtin_string(name))));
        right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,klass2_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 332 "02transpile.c"
    __dec_obj33=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value137=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value136=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 332, "tuple1$1sTypeph")))),((void*)0)))));
    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 333 "02transpile.c"
    __dec_obj34=self->mMultipleTypes;
    self->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value139=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value138=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 333, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 334 "02transpile.c"
    __dec_obj35=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value141=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value140=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 334, "tuple1$1sTypeph")))),((void*)0)))));
    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 335 "02transpile.c"
    __dec_obj36=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value143=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value142=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 335, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 336 "02transpile.c"
    __dec_obj37=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value145=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value144=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02transpile.c", 336, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 337 "02transpile.c"
    self->mOmitArrayNum=(_Bool)0;
    # 338 "02transpile.c"
    __dec_obj38=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value147=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value146=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 338, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 339 "02transpile.c"
    __dec_obj39=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value148=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 339, "list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 340 "02transpile.c"
    self->mVarArgs=(_Bool)0;
    # 341 "02transpile.c"
    __dec_obj40=self->mResultType;
    self->mResultType=((void*)0);
    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 342 "02transpile.c"
    self->mUnsigned=(_Bool)0;
    # 343 "02transpile.c"
    self->mConstant=(_Bool)0;
    # 344 "02transpile.c"
    self->mRegister=(_Bool)0;
    # 345 "02transpile.c"
    self->mVolatile=(_Bool)0;
    # 346 "02transpile.c"
    self->mStatic=(_Bool)0;
    # 347 "02transpile.c"
    self->mRestrict=(_Bool)0;
    # 348 "02transpile.c"
    self->mImmutable=(_Bool)0;
    # 349 "02transpile.c"
    self->mLongLong=(_Bool)0;
    # 350 "02transpile.c"
    self->mHeap=heap;
    # 351 "02transpile.c"
    self->mDummyHeap=(_Bool)0;
    # 352 "02transpile.c"
    self->mNoHeap=(_Bool)0;
    # 353 "02transpile.c"
    self->mRefference=(_Bool)0;
    # 355 "02transpile.c"
    self->mPointerNum=pointer_num_81;
    # 356 "02transpile.c"
    self->mNoArrayPointerNum=0;
    # 357 "02transpile.c"
    __dec_obj41=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
    # 359 "02transpile.c"
    self->mDynamicArrayNum=0;
    # 360 "02transpile.c"
    self->mTypeOfExpression=0;
    # 362 "02transpile.c"
    __dec_obj42=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string(""))));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 363 "02transpile.c"
    self->mOriginalPointerNum=0;
    # 365 "02transpile.c"
    self->mFunctionParam=(_Bool)0;
    # 367 "02transpile.c"
    __result105__ = __result_obj__ = self;
    come_call_finalizer2(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name2_83 = come_decrement_ref_count2(name2_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result105__;
    come_call_finalizer2(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name2_83 = come_decrement_ref_count2(name2_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_84;
unsigned int hash_85;
unsigned int it_86;
_Bool _while_condtional10;
_Bool _if_conditional90;
_Bool _if_conditional91;
struct sClass* __result74__;
_Bool _if_conditional98;
_Bool _if_conditional99;
struct sClass* __result75__;
struct sClass* __result76__;
struct sClass* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_84, 0, sizeof(struct sClass*));
memset(&hash_85, 0, sizeof(unsigned int));
memset(&it_86, 0, sizeof(unsigned int));
        # 1545 "./comelang2.h"
        # 1546 "./comelang2.h"
        memset(&default_value_84,0,sizeof(struct sClass*));
        # 1548 "./comelang2.h"
        hash_85=string_get_hash_key(((char*)key))%self->size;
        # 1549 "./comelang2.h"
        it_86=hash_85;
        # 1573 "./comelang2.h"
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            # 1571 "./comelang2.h"
            # 1552 "./comelang2.h"
            if(_if_conditional90=self->item_existance[it_86],            _if_conditional90) {
                # 1559 "./comelang2.h"
                # 1554 "./comelang2.h"
                if(_if_conditional91=string_equals(self->keys[it_86],key),                _if_conditional91) {
                    # 1556 "./comelang2.h"
                    __result74__ = __result_obj__ = self->items[it_86];
                    come_call_finalizer2(sClass_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result74__;
                }
                # 1559 "./comelang2.h"
                it_86++;
                # 1567 "./comelang2.h"
                # 1561 "./comelang2.h"
                if(_if_conditional98=it_86>=self->size,                _if_conditional98) {
                    # 1562 "./comelang2.h"
                    it_86=0;
                }
                else {
                    # 1567 "./comelang2.h"
                    # 1564 "./comelang2.h"
                    if(_if_conditional99=it_86==hash_85,                    _if_conditional99) {
                        # 1565 "./comelang2.h"
                        __result75__ = __result_obj__ = default_value_84;
                        come_call_finalizer2(sClass_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result75__;
                    }
                }
            }
            else {
                # 1569 "./comelang2.h"
                __result76__ = __result_obj__ = default_value_84;
                come_call_finalizer2(sClass_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result76__;
            }
        }
        # 1573 "./comelang2.h"
        __result77__ = __result_obj__ = default_value_84;
        come_call_finalizer2(sClass_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result77__;
        come_call_finalizer2(sClass_finalize,default_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional92=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional92) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional93=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional93) {
                            # 1 "sClass_finalize"
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional97=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional97) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_87;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_87, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_88, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 123 "./comelang2.h"
                                it_87=self->head;
                                # 129 "./comelang2.h"
                                while(_while_condtional11=it_87!=((void*)0),                                _while_condtional11) {
                                    # 125 "./comelang2.h"
                                    prev_it_88=it_87;
                                    # 126 "./comelang2.h"
                                    it_87=it_87->next;
                                    # 127 "./comelang2.h"
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional94;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional94=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional94) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional95;
_Bool _if_conditional96;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional95=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional95) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional96=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional96) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional102;
unsigned int hash_109;
unsigned int it_110;
_Bool _while_condtional14;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool same_key_exist_127;
char* it2_130;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct map$2charphsClassph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_109, 0, sizeof(unsigned int));
memset(&it_110, 0, sizeof(unsigned int));
memset(&same_key_exist_127, 0, sizeof(_Bool));
memset(&it2_130, 0, sizeof(char*));
            # 1393 "./comelang2.h"
            # 1390 "./comelang2.h"
            if(_if_conditional102=self->len*10>=self->size,            _if_conditional102) {
                # 1391 "./comelang2.h"
                map$2charphsClassph_rehash(self);
            }
            # 1393 "./comelang2.h"
            hash_109=string_get_hash_key(key)%self->size;
            # 1394 "./comelang2.h"
            it_110=hash_109;
            # 1452 "./comelang2.h"
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                # 1450 "./comelang2.h"
                # 1397 "./comelang2.h"
                if(_if_conditional114=self->item_existance[it_110],                _if_conditional114) {
                    # 1420 "./comelang2.h"
                    # 1399 "./comelang2.h"
                    if(_if_conditional115=string_equals(self->keys[it_110],key),                    _if_conditional115) {
                        # 1410 "./comelang2.h"
                        # 1401 "./comelang2.h"
                        if(_if_conditional116=1,                        _if_conditional116) {
                            # 1402 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_110]);
                            # 1403 "./comelang2.h"
                            self->keys[it_110] = come_decrement_ref_count2(self->keys[it_110], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./comelang2.h"
                            self->keys[it_110]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_110]);
                            # 1408 "./comelang2.h"
                            self->keys[it_110]=key;
                        }
                        # 1417 "./comelang2.h"
                        # 1410 "./comelang2.h"
                        if(_if_conditional136=1,                        _if_conditional136) {
                            # 1411 "./comelang2.h"
                            come_call_finalizer2(sClass_finalize,self->items[it_110], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./comelang2.h"
                            self->items[it_110]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./comelang2.h"
                            self->items[it_110]=item;
                        }
                        # 1417 "./comelang2.h"
                        break;
                    }
                    # 1420 "./comelang2.h"
                    it_110++;
                    # 1430 "./comelang2.h"
                    # 1422 "./comelang2.h"
                    if(_if_conditional137=it_110>=self->size,                    _if_conditional137) {
                        # 1423 "./comelang2.h"
                        it_110=0;
                    }
                    else {
                        # 1430 "./comelang2.h"
                        # 1425 "./comelang2.h"
                        if(_if_conditional138=it_110==hash_109,                        _if_conditional138) {
                            # 1426 "./comelang2.h"
                            printf("unexpected error in map.insert\n");
                            # 1427 "./comelang2.h"
                            stackframe();
                            # 1428 "./comelang2.h"
                            exit(2);
                        }
                    }
                }
                else {
                    # 1432 "./comelang2.h"
                    self->item_existance[it_110]=(_Bool)1;
                    # 1439 "./comelang2.h"
                    # 1433 "./comelang2.h"
                    if(_if_conditional139=1,                    _if_conditional139) {
                        # 1434 "./comelang2.h"
                        self->keys[it_110]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./comelang2.h"
                        self->keys[it_110]=key;
                    }
                    # 1446 "./comelang2.h"
                    # 1439 "./comelang2.h"
                    if(_if_conditional140=1,                    _if_conditional140) {
                        # 1440 "./comelang2.h"
                        self->items[it_110]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./comelang2.h"
                        self->items[it_110]=item;
                    }
                    # 1446 "./comelang2.h"
                    self->len++;
                    # 1448 "./comelang2.h"
                    break;
                }
            }
            # 1452 "./comelang2.h"
            same_key_exist_127=(_Bool)0;
            # 1461 "./comelang2.h"
            for(            it2_130=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_130=list$1charp_next(self->key_list)            ){
                # 1459 "./comelang2.h"
                # 1455 "./comelang2.h"
                if(_if_conditional145=string_equals(it2_130,key),                _if_conditional145) {
                    # 1456 "./comelang2.h"
                    puts("SAME KEY");
                    # 1457 "./comelang2.h"
                    same_key_exist_127=(_Bool)1;
                }
            }
            # 1465 "./comelang2.h"
            # 1461 "./comelang2.h"
            if(_if_conditional146=!same_key_exist_127,            _if_conditional146) {
                # 1462 "./comelang2.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1465 "./comelang2.h"
            __result101__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result101__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_92;
void* right_value128;
char** keys_93;
void* right_value129;
struct sClass** items_94;
void* right_value130;
_Bool* item_existance_95;
int len_96;
char* it_99;
struct sClass* default_value_102;
struct sClass* it2_105;
unsigned int hash_106;
int n_107;
_Bool _while_condtional13;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct sClass* default_value_108;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_92, 0, sizeof(int));
right_value128 = (void*)0;
memset(&keys_93, 0, sizeof(char**));
right_value129 = (void*)0;
memset(&items_94, 0, sizeof(struct sClass**));
right_value130 = (void*)0;
memset(&item_existance_95, 0, sizeof(_Bool*));
memset(&len_96, 0, sizeof(int));
memset(&it_99, 0, sizeof(char*));
memset(&default_value_102, 0, sizeof(struct sClass*));
memset(&it2_105, 0, sizeof(struct sClass*));
memset(&hash_106, 0, sizeof(unsigned int));
memset(&n_107, 0, sizeof(int));
memset(&default_value_108, 0, sizeof(struct sClass*));
                    # 1337 "./comelang2.h"
                    size_92=self->size*10;
                    # 1338 "./comelang2.h"
                    keys_93=(char**)come_increment_ref_count(((char**)(right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(size_92)), "./comelang2.h", 1338, "char*%"))));
                    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./comelang2.h"
                    items_94=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value129=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_92)), "./comelang2.h", 1339, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./comelang2.h"
                    item_existance_95=(_Bool*)come_increment_ref_count(((_Bool*)(right_value130=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_92)), "./comelang2.h", 1340, "bool"))));
                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./comelang2.h"
                    len_96=0;
                    # 1377 "./comelang2.h"
                    for(                    it_99=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_99=map$2charphsClassph_next(self)                    ){
                        # 1345 "./comelang2.h"
                        # 1346 "./comelang2.h"
                        memset(&default_value_102,0,sizeof(struct sClass*));
                        # 1347 "./comelang2.h"
                        it2_105=map$2charphsClassph_at(self,it_99,default_value_102);
                        # 1348 "./comelang2.h"
                        hash_106=string_get_hash_key(it_99)%size_92;
                        # 1349 "./comelang2.h"
                        n_107=hash_106;
                        # 1375 "./comelang2.h"
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            # 1374 "./comelang2.h"
                            # 1352 "./comelang2.h"
                            if(_if_conditional111=item_existance_95[n_107],                            _if_conditional111) {
                                # 1354 "./comelang2.h"
                                n_107++;
                                # 1364 "./comelang2.h"
                                # 1356 "./comelang2.h"
                                if(_if_conditional112=n_107>=size_92,                                _if_conditional112) {
                                    # 1357 "./comelang2.h"
                                    n_107=0;
                                }
                                else {
                                    # 1364 "./comelang2.h"
                                    # 1359 "./comelang2.h"
                                    if(_if_conditional113=n_107==hash_106,                                    _if_conditional113) {
                                        # 1360 "./comelang2.h"
                                        printf("unexpected error in map.rehash(1)\n");
                                        # 1361 "./comelang2.h"
                                        stackframe();
                                        # 1362 "./comelang2.h"
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                # 1366 "./comelang2.h"
                                item_existance_95[n_107]=(_Bool)1;
                                # 1367 "./comelang2.h"
                                keys_93[n_107]=it_99;
                                # 1368 "./comelang2.h"
                                # 1369 "./comelang2.h"
                                items_94[n_107]=map$2charphsClassph_at(self,it_99,default_value_108);
                                # 1371 "./comelang2.h"
                                len_96++;
                                # 1372 "./comelang2.h"
                                break;
                            }
                        }
                    }
                    # 1377 "./comelang2.h"
                    come_free((char*)self->items);
                    # 1378 "./comelang2.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1379 "./comelang2.h"
                    come_free((char*)self->keys);
                    # 1381 "./comelang2.h"
                    self->keys=keys_93;
                    # 1382 "./comelang2.h"
                    self->items=items_94;
                    # 1383 "./comelang2.h"
                    self->item_existance=item_existance_95;
                    # 1385 "./comelang2.h"
                    self->size=size_92;
                    # 1386 "./comelang2.h"
                    self->len=len_96;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional103;
char* result_97;
char* __result78__;
_Bool _if_conditional104;
char* __result79__;
char* result_98;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_97, 0, sizeof(char*));
memset(&result_98, 0, sizeof(char*));
                        # 1304 "./comelang2.h"
                        # 1299 "./comelang2.h"
                        if(_if_conditional103=self==((void*)0),                        _if_conditional103) {
                            # 1300 "./comelang2.h"
                            # 1301 "./comelang2.h"
                            memset(&result_97,0,sizeof(char*));
                            # 1302 "./comelang2.h"
                            __result78__ = __result_obj__ = result_97;
                            return __result78__;
                        }
                        # 1304 "./comelang2.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./comelang2.h"
                        # 1306 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1307 "./comelang2.h"
                            __result79__ = __result_obj__ = self->key_list->it->item;
                            return __result79__;
                        }
                        # 1310 "./comelang2.h"
                        # 1311 "./comelang2.h"
                        memset(&result_98,0,sizeof(char*));
                        # 1312 "./comelang2.h"
                        __result80__ = __result_obj__ = result_98;
                        return __result80__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./comelang2.h"
                        __result81__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result81__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional105;
char* result_100;
char* __result82__;
_Bool _if_conditional106;
char* __result83__;
char* result_101;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
                        # 1321 "./comelang2.h"
                        # 1316 "./comelang2.h"
                        if(_if_conditional105=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional105) {
                            # 1317 "./comelang2.h"
                            # 1318 "./comelang2.h"
                            memset(&result_100,0,sizeof(char*));
                            # 1319 "./comelang2.h"
                            __result82__ = __result_obj__ = result_100;
                            return __result82__;
                        }
                        # 1321 "./comelang2.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./comelang2.h"
                        # 1323 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1324 "./comelang2.h"
                            __result83__ = __result_obj__ = self->key_list->it->item;
                            return __result83__;
                        }
                        # 1327 "./comelang2.h"
                        # 1328 "./comelang2.h"
                        memset(&result_101,0,sizeof(char*));
                        # 1329 "./comelang2.h"
                        __result84__ = __result_obj__ = result_101;
                        return __result84__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_103;
unsigned int it_104;
_Bool _while_condtional12;
_Bool _if_conditional107;
_Bool _if_conditional108;
struct sClass* __result85__;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct sClass* __result86__;
struct sClass* __result87__;
struct sClass* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_103, 0, sizeof(unsigned int));
memset(&it_104, 0, sizeof(unsigned int));
                            # 1226 "./comelang2.h"
                            hash_103=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./comelang2.h"
                            it_104=hash_103;
                            # 1251 "./comelang2.h"
                            while(_while_condtional12=(_Bool)1,                            _while_condtional12) {
                                # 1249 "./comelang2.h"
                                # 1230 "./comelang2.h"
                                if(_if_conditional107=self->item_existance[it_104],                                _if_conditional107) {
                                    # 1237 "./comelang2.h"
                                    # 1232 "./comelang2.h"
                                    if(_if_conditional108=string_equals(self->keys[it_104],key),                                    _if_conditional108) {
                                        # 1234 "./comelang2.h"
                                        __result85__ = __result_obj__ = self->items[it_104];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result85__;
                                    }
                                    # 1237 "./comelang2.h"
                                    it_104++;
                                    # 1245 "./comelang2.h"
                                    # 1239 "./comelang2.h"
                                    if(_if_conditional109=it_104>=self->size,                                    _if_conditional109) {
                                        # 1240 "./comelang2.h"
                                        it_104=0;
                                    }
                                    else {
                                        # 1245 "./comelang2.h"
                                        # 1242 "./comelang2.h"
                                        if(_if_conditional110=it_104==hash_103,                                        _if_conditional110) {
                                            # 1243 "./comelang2.h"
                                            __result86__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result86__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "./comelang2.h"
                                    __result87__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result87__;
                                }
                            }
                            # 1251 "./comelang2.h"
                            __result88__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result88__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_111;
struct list_item$1charp* it_112;
_Bool _while_condtional15;
_Bool _if_conditional117;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_111, 0, sizeof(int));
memset(&it_112, 0, sizeof(struct list_item$1charp*));
                                # 448 "./comelang2.h"
                                it2_111=0;
                                # 449 "./comelang2.h"
                                it_112=self->head;
                                # 460 "./comelang2.h"
                                while(_while_condtional15=it_112!=((void*)0),                                _while_condtional15) {
                                    # 455 "./comelang2.h"
                                    # 451 "./comelang2.h"
                                    if(_if_conditional117=string_equals(it_112->item,item),                                    _if_conditional117) {
                                        # 452 "./comelang2.h"
                                        list$1charp_delete(self,it2_111,it2_111+1);
                                        # 453 "./comelang2.h"
                                        break;
                                    }
                                    # 455 "./comelang2.h"
                                    it2_111++;
                                    # 457 "./comelang2.h"
                                    it_112=it_112->next;
                                }
                                # 460 "./comelang2.h"
                                __result92__ = __result_obj__ = self;
                                return __result92__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
int tmp_113;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct list$1charp* __result89__;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct list_item$1charp* it_116;
int i_117;
_Bool _while_condtional17;
_Bool _if_conditional126;
struct list_item$1charp* prev_it_118;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct list_item$1charp* it_119;
int i_120;
_Bool _while_condtional18;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct list_item$1charp* prev_it_121;
struct list_item$1charp* it_122;
struct list_item$1charp* head_prev_it_123;
struct list_item$1charp* tail_it_124;
int i_125;
_Bool _while_condtional19;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
struct list_item$1charp* prev_it_126;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct list$1charp* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_113, 0, sizeof(int));
memset(&it_116, 0, sizeof(struct list_item$1charp*));
memset(&i_117, 0, sizeof(int));
memset(&prev_it_118, 0, sizeof(struct list_item$1charp*));
memset(&it_119, 0, sizeof(struct list_item$1charp*));
memset(&i_120, 0, sizeof(int));
memset(&prev_it_121, 0, sizeof(struct list_item$1charp*));
memset(&it_122, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_123, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_124, 0, sizeof(struct list_item$1charp*));
memset(&i_125, 0, sizeof(int));
memset(&prev_it_126, 0, sizeof(struct list_item$1charp*));
                                            # 467 "./comelang2.h"
                                            # 464 "./comelang2.h"
                                            if(_if_conditional118=head<0,                                            _if_conditional118) {
                                                # 465 "./comelang2.h"
                                                head+=self->len;
                                            }
                                            # 471 "./comelang2.h"
                                            # 467 "./comelang2.h"
                                            if(_if_conditional119=tail<0,                                            _if_conditional119) {
                                                # 468 "./comelang2.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "./comelang2.h"
                                            # 471 "./comelang2.h"
                                            if(_if_conditional120=head>tail,                                            _if_conditional120) {
                                                # 472 "./comelang2.h"
                                                tmp_113=tail;
                                                # 473 "./comelang2.h"
                                                tail=head;
                                                # 474 "./comelang2.h"
                                                head=tmp_113;
                                            }
                                            # 481 "./comelang2.h"
                                            # 477 "./comelang2.h"
                                            if(_if_conditional121=head<0,                                            _if_conditional121) {
                                                # 478 "./comelang2.h"
                                                head=0;
                                            }
                                            # 485 "./comelang2.h"
                                            # 481 "./comelang2.h"
                                            if(_if_conditional122=tail>self->len,                                            _if_conditional122) {
                                                # 482 "./comelang2.h"
                                                tail=self->len;
                                            }
                                            # 489 "./comelang2.h"
                                            # 485 "./comelang2.h"
                                            if(_if_conditional123=head==tail,                                            _if_conditional123) {
                                                # 486 "./comelang2.h"
                                                __result89__ = __result_obj__ = self;
                                                return __result89__;
                                            }
                                            # 584 "./comelang2.h"
                                            # 489 "./comelang2.h"
                                            if(_if_conditional124=head==0&&tail==self->len,                                            _if_conditional124) {
                                                # 491 "./comelang2.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "./comelang2.h"
                                                # 493 "./comelang2.h"
                                                if(_if_conditional125=head==0,                                                _if_conditional125) {
                                                    # 494 "./comelang2.h"
                                                    it_116=self->head;
                                                    # 495 "./comelang2.h"
                                                    i_117=0;
                                                    # 517 "./comelang2.h"
                                                    while(_while_condtional17=it_116!=((void*)0),                                                    _while_condtional17) {
                                                        # 516 "./comelang2.h"
                                                        # 497 "./comelang2.h"
                                                        if(_if_conditional126=i_117<tail,                                                        _if_conditional126) {
                                                            # 498 "./comelang2.h"
                                                            prev_it_118=it_116;
                                                            # 500 "./comelang2.h"
                                                            it_116=it_116->next;
                                                            # 501 "./comelang2.h"
                                                            i_117++;
                                                            # 503 "./comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "./comelang2.h"
                                                            # 507 "./comelang2.h"
                                                            if(_if_conditional127=i_117==tail,                                                            _if_conditional127) {
                                                                # 508 "./comelang2.h"
                                                                self->head=it_116;
                                                                # 509 "./comelang2.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "./comelang2.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "./comelang2.h"
                                                                it_116=it_116->next;
                                                                # 514 "./comelang2.h"
                                                                i_117++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "./comelang2.h"
                                                    # 518 "./comelang2.h"
                                                    if(_if_conditional128=tail==self->len,                                                    _if_conditional128) {
                                                        # 519 "./comelang2.h"
                                                        it_119=self->head;
                                                        # 520 "./comelang2.h"
                                                        i_120=0;
                                                        # 542 "./comelang2.h"
                                                        while(_while_condtional18=it_119!=((void*)0),                                                        _while_condtional18) {
                                                            # 527 "./comelang2.h"
                                                            # 522 "./comelang2.h"
                                                            if(_if_conditional129=i_120==head,                                                            _if_conditional129) {
                                                                # 523 "./comelang2.h"
                                                                self->tail=it_119->prev;
                                                                # 524 "./comelang2.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "./comelang2.h"
                                                            # 527 "./comelang2.h"
                                                            if(_if_conditional130=i_120>=head,                                                            _if_conditional130) {
                                                                # 528 "./comelang2.h"
                                                                prev_it_121=it_119;
                                                                # 530 "./comelang2.h"
                                                                it_119=it_119->next;
                                                                # 531 "./comelang2.h"
                                                                i_120++;
                                                                # 533 "./comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "./comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "./comelang2.h"
                                                                it_119=it_119->next;
                                                                # 539 "./comelang2.h"
                                                                i_120++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "./comelang2.h"
                                                        it_122=self->head;
                                                        # 546 "./comelang2.h"
                                                        head_prev_it_123=((void*)0);
                                                        # 547 "./comelang2.h"
                                                        tail_it_124=((void*)0);
                                                        # 550 "./comelang2.h"
                                                        i_125=0;
                                                        # 576 "./comelang2.h"
                                                        while(_while_condtional19=it_122!=((void*)0),                                                        _while_condtional19) {
                                                            # 555 "./comelang2.h"
                                                            # 552 "./comelang2.h"
                                                            if(_if_conditional131=i_125==head,                                                            _if_conditional131) {
                                                                # 553 "./comelang2.h"
                                                                head_prev_it_123=it_122->prev;
                                                            }
                                                            # 559 "./comelang2.h"
                                                            # 555 "./comelang2.h"
                                                            if(_if_conditional132=i_125==tail,                                                            _if_conditional132) {
                                                                # 556 "./comelang2.h"
                                                                tail_it_124=it_122;
                                                            }
                                                            # 574 "./comelang2.h"
                                                            # 559 "./comelang2.h"
                                                            if(_if_conditional133=i_125>=head&&i_125<tail,                                                            _if_conditional133) {
                                                                # 561 "./comelang2.h"
                                                                prev_it_126=it_122;
                                                                # 563 "./comelang2.h"
                                                                it_122=it_122->next;
                                                                # 564 "./comelang2.h"
                                                                i_125++;
                                                                # 566 "./comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "./comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "./comelang2.h"
                                                                it_122=it_122->next;
                                                                # 572 "./comelang2.h"
                                                                i_125++;
                                                            }
                                                        }
                                                        # 579 "./comelang2.h"
                                                        # 576 "./comelang2.h"
                                                        if(_if_conditional134=head_prev_it_123!=((void*)0),                                                        _if_conditional134) {
                                                            # 577 "./comelang2.h"
                                                            head_prev_it_123->next=tail_it_124;
                                                        }
                                                        # 582 "./comelang2.h"
                                                        # 579 "./comelang2.h"
                                                        if(_if_conditional135=tail_it_124!=((void*)0),                                                        _if_conditional135) {
                                                            # 580 "./comelang2.h"
                                                            tail_it_124->prev=head_prev_it_123;
                                                        }
                                                    }
                                                }
                                            }
                                            # 584 "./comelang2.h"
                                            __result91__ = __result_obj__ = self;
                                            return __result91__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_114;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_115;
struct list$1charp* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_114, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_115, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "./comelang2.h"
                                                    it_114=self->head;
                                                    # 440 "./comelang2.h"
                                                    while(_while_condtional16=it_114!=((void*)0),                                                    _while_condtional16) {
                                                        # 435 "./comelang2.h"
                                                        prev_it_115=it_114;
                                                        # 436 "./comelang2.h"
                                                        it_114=it_114->next;
                                                        # 437 "./comelang2.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 440 "./comelang2.h"
                                                    self->head=((void*)0);
                                                    # 441 "./comelang2.h"
                                                    self->tail=((void*)0);
                                                    # 443 "./comelang2.h"
                                                    self->len=0;
                                                    # 445 "./comelang2.h"
                                                    __result90__ = __result_obj__ = self;
                                                    return __result90__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional141;
char* result_128;
char* __result93__;
_Bool _if_conditional142;
char* __result94__;
char* result_129;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(char*));
memset(&result_129, 0, sizeof(char*));
                # 290 "./comelang2.h"
                # 285 "./comelang2.h"
                if(_if_conditional141=self==((void*)0),                _if_conditional141) {
                    # 286 "./comelang2.h"
                    # 287 "./comelang2.h"
                    memset(&result_128,0,sizeof(char*));
                    # 288 "./comelang2.h"
                    __result93__ = __result_obj__ = result_128;
                    return __result93__;
                }
                # 290 "./comelang2.h"
                self->it=self->head;
                # 296 "./comelang2.h"
                # 292 "./comelang2.h"
                if(self->it) {
                    # 293 "./comelang2.h"
                    __result94__ = __result_obj__ = self->it->item;
                    return __result94__;
                }
                # 296 "./comelang2.h"
                # 297 "./comelang2.h"
                memset(&result_129,0,sizeof(char*));
                # 298 "./comelang2.h"
                __result95__ = __result_obj__ = result_129;
                return __result95__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./comelang2.h"
                __result96__ = self==((void*)0)||self->it==((void*)0);
                return __result96__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional143;
char* result_131;
char* __result97__;
_Bool _if_conditional144;
char* __result98__;
char* result_132;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_131, 0, sizeof(char*));
memset(&result_132, 0, sizeof(char*));
                # 308 "./comelang2.h"
                # 302 "./comelang2.h"
                if(_if_conditional143=self==((void*)0)||self->it==((void*)0),                _if_conditional143) {
                    # 303 "./comelang2.h"
                    # 304 "./comelang2.h"
                    memset(&result_131,0,sizeof(char*));
                    # 305 "./comelang2.h"
                    __result97__ = __result_obj__ = result_131;
                    return __result97__;
                }
                # 308 "./comelang2.h"
                self->it=self->it->next;
                # 314 "./comelang2.h"
                # 310 "./comelang2.h"
                if(self->it) {
                    # 311 "./comelang2.h"
                    __result98__ = __result_obj__ = self->it->item;
                    return __result98__;
                }
                # 314 "./comelang2.h"
                # 315 "./comelang2.h"
                memset(&result_132,0,sizeof(char*));
                # 316 "./comelang2.h"
                __result99__ = __result_obj__ = result_132;
                return __result99__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional147;
void* right_value131;
struct list_item$1charp* litem_133;
_Bool _if_conditional148;
void* right_value132;
struct list_item$1charp* litem_134;
void* right_value133;
struct list_item$1charp* litem_135;
struct list$1charp* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&litem_133, 0, sizeof(struct list_item$1charp*));
right_value132 = (void*)0;
memset(&litem_134, 0, sizeof(struct list_item$1charp*));
right_value133 = (void*)0;
memset(&litem_135, 0, sizeof(struct list_item$1charp*));
                    # 256 "./comelang2.h"
                    # 225 "./comelang2.h"
                    if(_if_conditional147=self->len==0,                    _if_conditional147) {
                        # 226 "./comelang2.h"
                        litem_133=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value131=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./comelang2.h"
                        litem_133->prev=((void*)0);
                        # 229 "./comelang2.h"
                        litem_133->next=((void*)0);
                        # 230 "./comelang2.h"
                        litem_133->item=item;
                        # 232 "./comelang2.h"
                        self->tail=litem_133;
                        # 233 "./comelang2.h"
                        self->head=litem_133;
                    }
                    else {
                        # 256 "./comelang2.h"
                        # 235 "./comelang2.h"
                        if(_if_conditional148=self->len==1,                        _if_conditional148) {
                            # 236 "./comelang2.h"
                            litem_134=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value132=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./comelang2.h"
                            litem_134->prev=self->head;
                            # 239 "./comelang2.h"
                            litem_134->next=((void*)0);
                            # 240 "./comelang2.h"
                            litem_134->item=item;
                            # 242 "./comelang2.h"
                            self->tail=litem_134;
                            # 243 "./comelang2.h"
                            self->head->next=litem_134;
                        }
                        else {
                            # 246 "./comelang2.h"
                            litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value133=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./comelang2.h"
                            litem_135->prev=self->tail;
                            # 249 "./comelang2.h"
                            litem_135->next=((void*)0);
                            # 250 "./comelang2.h"
                            litem_135->item=item;
                            # 252 "./comelang2.h"
                            self->tail->next=litem_135;
                            # 253 "./comelang2.h"
                            self->tail=litem_135;
                        }
                    }
                    # 256 "./comelang2.h"
                    self->len++;
                    # 258 "./comelang2.h"
                    __result100__ = __result_obj__ = self;
                    return __result100__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1736 "./comelang2.h"
        __dec_obj32=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1738 "./comelang2.h"
        __result102__ = __result_obj__ = self;
        come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result102__;
        come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple1$1sTypeph_finalize"
        # 0 "tuple1$1sTypeph_finalize"
        if(_if_conditional149=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional149) {
            # 0 "tuple1$1sTypeph_finalize"
            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./comelang2.h"
        self->head=((void*)0);
        # 105 "./comelang2.h"
        self->tail=((void*)0);
        # 106 "./comelang2.h"
        self->len=0;
        # 108 "./comelang2.h"
        __result103__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result103__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./comelang2.h"
        self->head=((void*)0);
        # 105 "./comelang2.h"
        self->tail=((void*)0);
        # 106 "./comelang2.h"
        self->len=0;
        # 108 "./comelang2.h"
        __result104__ = __result_obj__ = self;
        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result104__;
        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__;
void* right_value151;
char* __dec_obj43;
void* right_value152;
void* right_value153;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
void* right_value154;
char* __dec_obj45;
struct sClass* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    # 372 "02transpile.c"
    self->mNumber=number;
    # 373 "02transpile.c"
    self->mStruct=struct_;
    # 374 "02transpile.c"
    self->mUnion=union_;
    # 375 "02transpile.c"
    self->mGenerics=generics;
    # 376 "02transpile.c"
    self->mMethodGenerics=method_generics;
    # 377 "02transpile.c"
    self->mEnum=(_Bool)0;
    # 378 "02transpile.c"
    self->mProtocol=protocol_;
    # 379 "02transpile.c"
    self->mFloat=float_;
    # 380 "02transpile.c"
    self->mEnum=enum_;
    # 382 "02transpile.c"
    __dec_obj43=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(name))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 384 "02transpile.c"
    self->mGenericsNum=generics_num;
    # 385 "02transpile.c"
    self->mMethodGenericsNum=method_generics_num;
    # 387 "02transpile.c"
    __dec_obj44=self->mFields;
    self->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value153=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value152=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02transpile.c", 387, "list$1tuple2$2charphsTypephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 389 "02transpile.c"
    __dec_obj45=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(info->sname))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 391 "02transpile.c"
    __result107__ = __result_obj__ = self;
    come_call_finalizer2(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result107__;
    come_call_finalizer2(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./comelang2.h"
        self->head=((void*)0);
        # 105 "./comelang2.h"
        self->tail=((void*)0);
        # 106 "./comelang2.h"
        self->len=0;
        # 108 "./comelang2.h"
        __result106__ = __result_obj__ = self;
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result106__;
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info){
void* __result_obj__;
char* __dec_obj46;
struct sType* __dec_obj47;
struct list$1sTypeph* __dec_obj48;
struct list$1charph* __dec_obj49;
struct list$1charph* __dec_obj50;
void* right_value155;
void* right_value156;
struct sType* __dec_obj51;
struct list$1sTypeph* o2_saved_136;
struct sType* it_139;
void* right_value195;
struct list$1charph* o2_saved_163;
char* it_164;
void* right_value196;
void* right_value197;
void* right_value198;
struct tuple1$1sTypeph* __dec_obj78;
void* right_value199;
void* right_value200;
struct buffer* __dec_obj79;
void* right_value201;
void* right_value202;
struct buffer* __dec_obj80;
void* right_value203;
void* right_value204;
struct buffer* __dec_obj81;
void* right_value205;
void* right_value206;
struct buffer* __dec_obj82;
void* right_value219;
struct sBlock* __dec_obj87;
char* __dec_obj88;
void* right_value220;
char* __dec_obj89;
struct sFun* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&o2_saved_136, 0, sizeof(struct list$1sTypeph*));
memset(&it_139, 0, sizeof(struct sType*));
right_value195 = (void*)0;
memset(&o2_saved_163, 0, sizeof(struct list$1charph*));
memset(&it_164, 0, sizeof(char*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
    # 396 "02transpile.c"
    __dec_obj46=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 397 "02transpile.c"
    __dec_obj47=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 398 "02transpile.c"
    __dec_obj48=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 399 "02transpile.c"
    __dec_obj49=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer2(list$1charph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 400 "02transpile.c"
    __dec_obj50=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer2(list$1charph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 401 "02transpile.c"
    self->mExternal=external;
    # 402 "02transpile.c"
    self->mVarArgs=var_args;
    # 403 "02transpile.c"
    self->mStatic=static_;
    # 405 "02transpile.c"
    __dec_obj51=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 405, "sType")))),"lambda",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 411 "02transpile.c"
    for(    o2_saved_136=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_139=list$1sTypeph_begin((o2_saved_136));    !list$1sTypeph_end((o2_saved_136));    it_139=list$1sTypeph_next((o2_saved_136))    ){
        # 408 "02transpile.c"
        list$1sTypeph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(it_139)))));
        come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 415 "02transpile.c"
    for(    o2_saved_163=(struct list$1charph*)come_increment_ref_count((param_names)),it_164=list$1charph_begin((o2_saved_163));    !list$1charph_end((o2_saved_163));    it_164=list$1charph_next((o2_saved_163))    ){
        # 412 "02transpile.c"
        list$1charph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(((char*)(right_value196=string_clone(it_164)))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 415 "02transpile.c"
    __dec_obj78=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value198=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value197=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 415, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type)))));
    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 416 "02transpile.c"
    self->mLambdaType->mVarArgs=var_args;
    # 418 "02transpile.c"
    __dec_obj79=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value199=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 418, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 419 "02transpile.c"
    __dec_obj80=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value202=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 419, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 420 "02transpile.c"
    __dec_obj81=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value204=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value203=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 420, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 421 "02transpile.c"
    __dec_obj82=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value206=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value205=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 421, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 423 "02transpile.c"
    __dec_obj87=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value219=sBlock_clone(block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 425 "02transpile.c"
    __dec_obj88=self->mComeHeader;
    self->mComeHeader=(char*)come_increment_ref_count(come_header);
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 427 "02transpile.c"
    __dec_obj89=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(declare_sname))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 429 "02transpile.c"
    __result149__ = __result_obj__ = self;
    come_call_finalizer2(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result149__;
    come_call_finalizer2(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional150;
struct sType* result_137;
struct sType* __result108__;
_Bool _if_conditional151;
struct sType* __result109__;
struct sType* result_138;
struct sType* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(struct sType*));
memset(&result_138, 0, sizeof(struct sType*));
        # 290 "./comelang2.h"
        # 285 "./comelang2.h"
        if(_if_conditional150=self==((void*)0),        _if_conditional150) {
            # 286 "./comelang2.h"
            # 287 "./comelang2.h"
            memset(&result_137,0,sizeof(struct sType*));
            # 288 "./comelang2.h"
            __result108__ = __result_obj__ = result_137;
            return __result108__;
        }
        # 290 "./comelang2.h"
        self->it=self->head;
        # 296 "./comelang2.h"
        # 292 "./comelang2.h"
        if(self->it) {
            # 293 "./comelang2.h"
            __result109__ = __result_obj__ = self->it->item;
            return __result109__;
        }
        # 296 "./comelang2.h"
        # 297 "./comelang2.h"
        memset(&result_138,0,sizeof(struct sType*));
        # 298 "./comelang2.h"
        __result110__ = __result_obj__ = result_138;
        return __result110__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./comelang2.h"
        __result111__ = self==((void*)0)||self->it==((void*)0);
        return __result111__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional152;
struct sType* result_140;
struct sType* __result112__;
_Bool _if_conditional153;
struct sType* __result113__;
struct sType* result_141;
struct sType* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct sType*));
memset(&result_141, 0, sizeof(struct sType*));
        # 308 "./comelang2.h"
        # 302 "./comelang2.h"
        if(_if_conditional152=self==((void*)0)||self->it==((void*)0),        _if_conditional152) {
            # 303 "./comelang2.h"
            # 304 "./comelang2.h"
            memset(&result_140,0,sizeof(struct sType*));
            # 305 "./comelang2.h"
            __result112__ = __result_obj__ = result_140;
            return __result112__;
        }
        # 308 "./comelang2.h"
        self->it=self->it->next;
        # 314 "./comelang2.h"
        # 310 "./comelang2.h"
        if(self->it) {
            # 311 "./comelang2.h"
            __result113__ = __result_obj__ = self->it->item;
            return __result113__;
        }
        # 314 "./comelang2.h"
        # 315 "./comelang2.h"
        memset(&result_141,0,sizeof(struct sType*));
        # 316 "./comelang2.h"
        __result114__ = __result_obj__ = result_141;
        return __result114__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional154;
void* right_value157;
struct list_item$1sTypeph* litem_142;
struct sType* __dec_obj52;
_Bool _if_conditional155;
void* right_value158;
struct list_item$1sTypeph* litem_143;
struct sType* __dec_obj53;
void* right_value159;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj54;
struct list$1sTypeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1sTypeph*));
right_value158 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1sTypeph*));
right_value159 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
            # 256 "./comelang2.h"
            # 225 "./comelang2.h"
            if(_if_conditional154=self->len==0,            _if_conditional154) {
                # 226 "./comelang2.h"
                litem_142=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value157=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "./comelang2.h"
                litem_142->prev=((void*)0);
                # 229 "./comelang2.h"
                litem_142->next=((void*)0);
                # 230 "./comelang2.h"
                __dec_obj52=litem_142->item;
                litem_142->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 232 "./comelang2.h"
                self->tail=litem_142;
                # 233 "./comelang2.h"
                self->head=litem_142;
            }
            else {
                # 256 "./comelang2.h"
                # 235 "./comelang2.h"
                if(_if_conditional155=self->len==1,                _if_conditional155) {
                    # 236 "./comelang2.h"
                    litem_143=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value158=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "./comelang2.h"
                    litem_143->prev=self->head;
                    # 239 "./comelang2.h"
                    litem_143->next=((void*)0);
                    # 240 "./comelang2.h"
                    __dec_obj53=litem_143->item;
                    litem_143->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 242 "./comelang2.h"
                    self->tail=litem_143;
                    # 243 "./comelang2.h"
                    self->head->next=litem_143;
                }
                else {
                    # 246 "./comelang2.h"
                    litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value159=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "./comelang2.h"
                    litem_144->prev=self->tail;
                    # 249 "./comelang2.h"
                    litem_144->next=((void*)0);
                    # 250 "./comelang2.h"
                    __dec_obj54=litem_144->item;
                    litem_144->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 252 "./comelang2.h"
                    self->tail->next=litem_144;
                    # 253 "./comelang2.h"
                    self->tail=litem_144;
                }
            }
            # 256 "./comelang2.h"
            self->len++;
            # 258 "./comelang2.h"
            __result115__ = __result_obj__ = self;
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result115__;
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional156;
struct sType* __result116__;
void* right_value160;
struct sType* result_145;
_Bool _if_conditional157;
_Bool _if_conditional158;
void* right_value167;
struct list$1sTypeph* __dec_obj58;
_Bool _if_conditional162;
void* right_value170;
struct tuple1$1sTypeph* __dec_obj60;
_Bool _if_conditional165;
void* right_value171;
struct tuple1$1sTypeph* __dec_obj61;
_Bool _if_conditional166;
void* right_value172;
char* __dec_obj62;
_Bool _if_conditional167;
void* right_value173;
struct list$1sTypeph* __dec_obj63;
_Bool _if_conditional168;
void* right_value181;
struct list$1sNodeph* __dec_obj67;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value182;
struct list$1sTypeph* __dec_obj68;
_Bool _if_conditional183;
void* right_value189;
struct list$1charph* __dec_obj72;
_Bool _if_conditional187;
void* right_value190;
struct tuple1$1sTypeph* __dec_obj73;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value191;
struct sNode* __dec_obj74;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
void* right_value192;
struct sNode* __dec_obj75;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value193;
char* __dec_obj76;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value194;
char* __dec_obj77;
_Bool _if_conditional227;
struct sType* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&result_145, 0, sizeof(struct sType*));
right_value167 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional156=self==(void*)0,            _if_conditional156) {
                # 2 "sType_clone"
                __result116__ = __result_obj__ = (void*)0;
                return __result116__;
            }
            # 3 "sType_clone"
            result_145=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional157=self!=((void*)0),            _if_conditional157) {
                # 4 "sType_clone"
                result_145->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional158=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional158) {
                # 5 "sType_clone"
                __dec_obj58=result_145->mMultipleTypes;
                result_145->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value167=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional162=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional162) {
                # 6 "sType_clone"
                __dec_obj60=result_145->mNoSolvedGenericsType;
                result_145->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value170=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional165=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional165) {
                # 7 "sType_clone"
                __dec_obj61=result_145->mOriginalLoadVarType;
                result_145->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value171=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional166=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional166) {
                # 8 "sType_clone"
                __dec_obj62=result_145->mGenericsName;
                result_145->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value172=string_clone(self->mGenericsName))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional167=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional167) {
                # 9 "sType_clone"
                __dec_obj63=result_145->mGenericsTypes;
                result_145->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value173=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional168=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional168) {
                # 10 "sType_clone"
                __dec_obj67=result_145->mArrayNum;
                result_145->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value181=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional181=self!=((void*)0),            _if_conditional181) {
                # 11 "sType_clone"
                result_145->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional182=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional182) {
                # 12 "sType_clone"
                __dec_obj68=result_145->mParamTypes;
                result_145->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value182=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional183=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional183) {
                # 13 "sType_clone"
                __dec_obj72=result_145->mParamNames;
                result_145->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value189=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional187=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional187) {
                # 14 "sType_clone"
                __dec_obj73=result_145->mResultType;
                result_145->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value190=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional188=self!=((void*)0),            _if_conditional188) {
                # 15 "sType_clone"
                result_145->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional189=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional189) {
                # 16 "sType_clone"
                __dec_obj74=result_145->mAlignas;
                result_145->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value191=sNode_clone(self->mAlignas))));
                if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value191) { right_value191 = come_decrement_ref_count2(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional190=self!=((void*)0),            _if_conditional190) {
                # 17 "sType_clone"
                result_145->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional191=self!=((void*)0),            _if_conditional191) {
                # 18 "sType_clone"
                result_145->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                # 19 "sType_clone"
                result_145->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional193=self!=((void*)0),            _if_conditional193) {
                # 20 "sType_clone"
                result_145->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional194=self!=((void*)0),            _if_conditional194) {
                # 21 "sType_clone"
                result_145->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional195=self!=((void*)0),            _if_conditional195) {
                # 22 "sType_clone"
                result_145->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional196=self!=((void*)0),            _if_conditional196) {
                # 23 "sType_clone"
                result_145->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional197=self!=((void*)0),            _if_conditional197) {
                # 24 "sType_clone"
                result_145->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional198=self!=((void*)0),            _if_conditional198) {
                # 25 "sType_clone"
                result_145->mExtern=self->mExtern;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional199=self!=((void*)0),            _if_conditional199) {
                # 26 "sType_clone"
                result_145->mRestrict=self->mRestrict;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional200=self!=((void*)0),            _if_conditional200) {
                # 27 "sType_clone"
                result_145->mImmutable=self->mImmutable;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional201=self!=((void*)0),            _if_conditional201) {
                # 28 "sType_clone"
                result_145->mHeap=self->mHeap;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional202=self!=((void*)0),            _if_conditional202) {
                # 29 "sType_clone"
                result_145->mDummyHeap=self->mDummyHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional203=self!=((void*)0),            _if_conditional203) {
                # 30 "sType_clone"
                result_145->mDelegate=self->mDelegate;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional204=self!=((void*)0),            _if_conditional204) {
                # 31 "sType_clone"
                result_145->mShare=self->mShare;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional205=self!=((void*)0),            _if_conditional205) {
                # 32 "sType_clone"
                result_145->mClone=self->mClone;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional206=self!=((void*)0),            _if_conditional206) {
                # 33 "sType_clone"
                result_145->mNoHeap=self->mNoHeap;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional207=self!=((void*)0),            _if_conditional207) {
                # 34 "sType_clone"
                result_145->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional208=self!=((void*)0),            _if_conditional208) {
                # 35 "sType_clone"
                result_145->mRefference=self->mRefference;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional209=self!=((void*)0),            _if_conditional209) {
                # 36 "sType_clone"
                result_145->mException=self->mException;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional210=self!=((void*)0),            _if_conditional210) {
                # 37 "sType_clone"
                result_145->mPointerNum=self->mPointerNum;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional211=self!=((void*)0),            _if_conditional211) {
                # 38 "sType_clone"
                result_145->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional212=self!=((void*)0),            _if_conditional212) {
                # 39 "sType_clone"
                result_145->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional213=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional213) {
                # 40 "sType_clone"
                __dec_obj75=result_145->mSizeNum;
                result_145->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value192=sNode_clone(self->mSizeNum))));
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional214=self!=((void*)0),            _if_conditional214) {
                # 41 "sType_clone"
                result_145->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional215=self!=((void*)0),            _if_conditional215) {
                # 42 "sType_clone"
                result_145->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional216=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional216) {
                # 43 "sType_clone"
                __dec_obj76=result_145->mOriginalTypeName;
                result_145->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value193=string_clone(self->mOriginalTypeName))));
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional217=self!=((void*)0),            _if_conditional217) {
                # 44 "sType_clone"
                result_145->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional218=self!=((void*)0),            _if_conditional218) {
                # 45 "sType_clone"
                result_145->mFunctionParam=self->mFunctionParam;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional219=self!=((void*)0),            _if_conditional219) {
                # 46 "sType_clone"
                result_145->mAllocaValue=self->mAllocaValue;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional220=self!=((void*)0),            _if_conditional220) {
                # 47 "sType_clone"
                result_145->mGenericsStruct=self->mGenericsStruct;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional221=self!=((void*)0),            _if_conditional221) {
                # 48 "sType_clone"
                result_145->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional222=self!=((void*)0),            _if_conditional222) {
                # 49 "sType_clone"
                result_145->mComeMemCore=self->mComeMemCore;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional223=self!=((void*)0),            _if_conditional223) {
                # 50 "sType_clone"
                result_145->mInline=self->mInline;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional224=self!=((void*)0),            _if_conditional224) {
                # 51 "sType_clone"
                result_145->mNullValue=self->mNullValue;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional225=self!=((void*)0),            _if_conditional225) {
                # 52 "sType_clone"
                result_145->mGuardValue=self->mGuardValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional226=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional226) {
                # 53 "sType_clone"
                __dec_obj77=result_145->mAsmName;
                result_145->mAsmName=(char*)come_increment_ref_count(((char*)(right_value194=string_clone(self->mAsmName))));
                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional227=self!=((void*)0),            _if_conditional227) {
                # 54 "sType_clone"
                result_145->mArrayPointerType=self->mArrayPointerType;
            }
            # 55 "sType_clone"
            __result130__ = __result_obj__ = result_145;
            come_call_finalizer2(sType_finalize,result_145, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result130__;
            come_call_finalizer2(sType_finalize,result_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional159;
struct list$1sTypeph* __result117__;
void* right_value161;
void* right_value162;
struct list$1sTypeph* result_146;
struct list_item$1sTypeph* it_147;
_Bool _while_condtional20;
void* right_value166;
struct list$1sTypeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&result_146, 0, sizeof(struct list$1sTypeph*));
memset(&it_147, 0, sizeof(struct list_item$1sTypeph*));
right_value166 = (void*)0;
                    # 142 "./comelang2.h"
                    # 139 "./comelang2.h"
                    if(_if_conditional159=self==((void*)0),                    _if_conditional159) {
                        # 140 "./comelang2.h"
                        __result117__ = __result_obj__ = ((void*)0);
                        return __result117__;
                    }
                    # 142 "./comelang2.h"
                    result_146=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value162=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value161=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./comelang2.h"
                    it_147=self->head;
                    # 151 "./comelang2.h"
                    while(_while_condtional20=it_147!=((void*)0),                    _while_condtional20) {
                        # 146 "./comelang2.h"
                        list$1sTypeph_add(result_146,(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(it_147->item)))));
                        come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 148 "./comelang2.h"
                        it_147=it_147->next;
                    }
                    # 151 "./comelang2.h"
                    __result119__ = __result_obj__ = result_146;
                    come_call_finalizer2(list$1sTypephp_finalize,result_146, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result119__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional160;
void* right_value163;
struct list_item$1sTypeph* litem_148;
struct sType* __dec_obj55;
_Bool _if_conditional161;
void* right_value164;
struct list_item$1sTypeph* litem_149;
struct sType* __dec_obj56;
void* right_value165;
struct list_item$1sTypeph* litem_150;
struct sType* __dec_obj57;
struct list$1sTypeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1sTypeph*));
right_value164 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1sTypeph*));
right_value165 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1sTypeph*));
                            # 186 "./comelang2.h"
                            # 155 "./comelang2.h"
                            if(_if_conditional160=self->len==0,                            _if_conditional160) {
                                # 156 "./comelang2.h"
                                litem_148=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value163=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./comelang2.h"
                                litem_148->prev=((void*)0);
                                # 159 "./comelang2.h"
                                litem_148->next=((void*)0);
                                # 160 "./comelang2.h"
                                __dec_obj55=litem_148->item;
                                litem_148->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 162 "./comelang2.h"
                                self->tail=litem_148;
                                # 163 "./comelang2.h"
                                self->head=litem_148;
                            }
                            else {
                                # 186 "./comelang2.h"
                                # 165 "./comelang2.h"
                                if(_if_conditional161=self->len==1,                                _if_conditional161) {
                                    # 166 "./comelang2.h"
                                    litem_149=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value164=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./comelang2.h"
                                    litem_149->prev=self->head;
                                    # 169 "./comelang2.h"
                                    litem_149->next=((void*)0);
                                    # 170 "./comelang2.h"
                                    __dec_obj56=litem_149->item;
                                    litem_149->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 172 "./comelang2.h"
                                    self->tail=litem_149;
                                    # 173 "./comelang2.h"
                                    self->head->next=litem_149;
                                }
                                else {
                                    # 176 "./comelang2.h"
                                    litem_150=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value165=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./comelang2.h"
                                    litem_150->prev=self->tail;
                                    # 179 "./comelang2.h"
                                    litem_150->next=((void*)0);
                                    # 180 "./comelang2.h"
                                    __dec_obj57=litem_150->item;
                                    litem_150->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 182 "./comelang2.h"
                                    self->tail->next=litem_150;
                                    # 183 "./comelang2.h"
                                    self->tail=litem_150;
                                }
                            }
                            # 186 "./comelang2.h"
                            self->len++;
                            # 188 "./comelang2.h"
                            __result118__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result118__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional163;
struct tuple1$1sTypeph* __result120__;
void* right_value168;
struct tuple1$1sTypeph* result_151;
_Bool _if_conditional164;
void* right_value169;
struct sType* __dec_obj59;
struct tuple1$1sTypeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&result_151, 0, sizeof(struct tuple1$1sTypeph*));
right_value169 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional163=self==(void*)0,                    _if_conditional163) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result120__ = __result_obj__ = (void*)0;
                        return __result120__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_151=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value168=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional164=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional164) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj59=result_151->v1;
                        result_151->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result121__ = __result_obj__ = result_151;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_151, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result121__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional169;
struct list$1sNodeph* __result122__;
void* right_value174;
void* right_value175;
struct list$1sNodeph* result_152;
struct list_item$1sNodeph* it_153;
_Bool _while_condtional21;
void* right_value180;
struct list$1sNodeph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&result_152, 0, sizeof(struct list$1sNodeph*));
memset(&it_153, 0, sizeof(struct list_item$1sNodeph*));
right_value180 = (void*)0;
                    # 142 "./comelang2.h"
                    # 139 "./comelang2.h"
                    if(_if_conditional169=self==((void*)0),                    _if_conditional169) {
                        # 140 "./comelang2.h"
                        __result122__ = __result_obj__ = ((void*)0);
                        return __result122__;
                    }
                    # 142 "./comelang2.h"
                    result_152=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value175=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value174=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./comelang2.h"
                    it_153=self->head;
                    # 151 "./comelang2.h"
                    while(_while_condtional21=it_153!=((void*)0),                    _while_condtional21) {
                        # 146 "./comelang2.h"
                        list$1sNodeph_add(result_152,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value180=sNode_clone(it_153->item)))));
                        if(right_value180) { right_value180 = come_decrement_ref_count2(right_value180, ((struct sNode*)right_value180)->finalize, ((struct sNode*)right_value180)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 148 "./comelang2.h"
                        it_153=it_153->next;
                    }
                    # 151 "./comelang2.h"
                    __result126__ = __result_obj__ = result_152;
                    come_call_finalizer2(list$1sNodephp_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result126__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional170;
void* right_value176;
struct list_item$1sNodeph* litem_154;
struct sNode* __dec_obj64;
_Bool _if_conditional171;
void* right_value177;
struct list_item$1sNodeph* litem_155;
struct sNode* __dec_obj65;
void* right_value178;
struct list_item$1sNodeph* litem_156;
struct sNode* __dec_obj66;
struct list$1sNodeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
memset(&litem_154, 0, sizeof(struct list_item$1sNodeph*));
right_value177 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1sNodeph*));
right_value178 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1sNodeph*));
                            # 186 "./comelang2.h"
                            # 155 "./comelang2.h"
                            if(_if_conditional170=self->len==0,                            _if_conditional170) {
                                # 156 "./comelang2.h"
                                litem_154=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value176=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./comelang2.h"
                                litem_154->prev=((void*)0);
                                # 159 "./comelang2.h"
                                litem_154->next=((void*)0);
                                # 160 "./comelang2.h"
                                __dec_obj64=litem_154->item;
                                litem_154->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
                                # 162 "./comelang2.h"
                                self->tail=litem_154;
                                # 163 "./comelang2.h"
                                self->head=litem_154;
                            }
                            else {
                                # 186 "./comelang2.h"
                                # 165 "./comelang2.h"
                                if(_if_conditional171=self->len==1,                                _if_conditional171) {
                                    # 166 "./comelang2.h"
                                    litem_155=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value177=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./comelang2.h"
                                    litem_155->prev=self->head;
                                    # 169 "./comelang2.h"
                                    litem_155->next=((void*)0);
                                    # 170 "./comelang2.h"
                                    __dec_obj65=litem_155->item;
                                    litem_155->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 172 "./comelang2.h"
                                    self->tail=litem_155;
                                    # 173 "./comelang2.h"
                                    self->head->next=litem_155;
                                }
                                else {
                                    # 176 "./comelang2.h"
                                    litem_156=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value178=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./comelang2.h"
                                    litem_156->prev=self->tail;
                                    # 179 "./comelang2.h"
                                    litem_156->next=((void*)0);
                                    # 180 "./comelang2.h"
                                    __dec_obj66=litem_156->item;
                                    litem_156->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 182 "./comelang2.h"
                                    self->tail->next=litem_156;
                                    # 183 "./comelang2.h"
                                    self->tail=litem_156;
                                }
                            }
                            # 186 "./comelang2.h"
                            self->len++;
                            # 188 "./comelang2.h"
                            __result123__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result123__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional172;
struct sNode* __result124__;
void* right_value179;
struct sNode* result_157;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
struct sNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
memset(&result_157, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional172=self==(void*)0,                            _if_conditional172) {
                                # 2 "sNode_clone"
                                __result124__ = __result_obj__ = (void*)0;
                                return __result124__;
                            }
                            # 3 "sNode_clone"
                            result_157=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value179) { right_value179 = come_decrement_ref_count2(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional173=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional173) {
                                # 4 "sNode_clone"
                                result_157->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional174=self!=((void*)0),                            _if_conditional174) {
                                # 5 "sNode_clone"
                                result_157->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional175=self!=((void*)0),                            _if_conditional175) {
                                # 6 "sNode_clone"
                                result_157->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional176=self!=((void*)0),                            _if_conditional176) {
                                # 7 "sNode_clone"
                                result_157->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional177=self!=((void*)0),                            _if_conditional177) {
                                # 8 "sNode_clone"
                                result_157->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional178=self!=((void*)0),                            _if_conditional178) {
                                # 9 "sNode_clone"
                                result_157->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional179=self!=((void*)0),                            _if_conditional179) {
                                # 10 "sNode_clone"
                                result_157->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional180=self!=((void*)0),                            _if_conditional180) {
                                # 11 "sNode_clone"
                                result_157->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result125__ = __result_obj__ = result_157;
                            if(result_157) { result_157 = come_decrement_ref_count2(result_157, ((struct sNode*)result_157)->finalize, ((struct sNode*)result_157)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result125__;
                            if(result_157) { result_157 = come_decrement_ref_count2(result_157, ((struct sNode*)result_157)->finalize, ((struct sNode*)result_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional184;
struct list$1charph* __result127__;
void* right_value183;
void* right_value184;
struct list$1charph* result_158;
struct list_item$1charph* it_159;
_Bool _while_condtional22;
void* right_value188;
struct list$1charph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&result_158, 0, sizeof(struct list$1charph*));
memset(&it_159, 0, sizeof(struct list_item$1charph*));
right_value188 = (void*)0;
                    # 142 "./comelang2.h"
                    # 139 "./comelang2.h"
                    if(_if_conditional184=self==((void*)0),                    _if_conditional184) {
                        # 140 "./comelang2.h"
                        __result127__ = __result_obj__ = ((void*)0);
                        return __result127__;
                    }
                    # 142 "./comelang2.h"
                    result_158=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value184=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value183=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./comelang2.h"
                    it_159=self->head;
                    # 151 "./comelang2.h"
                    while(_while_condtional22=it_159!=((void*)0),                    _while_condtional22) {
                        # 146 "./comelang2.h"
                        list$1charph_add(result_158,(char*)come_increment_ref_count(((char*)(right_value188=string_clone(it_159->item)))));
                        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 148 "./comelang2.h"
                        it_159=it_159->next;
                    }
                    # 151 "./comelang2.h"
                    __result129__ = __result_obj__ = result_158;
                    come_call_finalizer2(list$1charphp_finalize,result_158, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result129__;
                    come_call_finalizer2(list$1charphp_finalize,result_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional185;
void* right_value185;
struct list_item$1charph* litem_160;
char* __dec_obj69;
_Bool _if_conditional186;
void* right_value186;
struct list_item$1charph* litem_161;
char* __dec_obj70;
void* right_value187;
struct list_item$1charph* litem_162;
char* __dec_obj71;
struct list$1charph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1charph*));
right_value186 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1charph*));
right_value187 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1charph*));
                            # 186 "./comelang2.h"
                            # 155 "./comelang2.h"
                            if(_if_conditional185=self->len==0,                            _if_conditional185) {
                                # 156 "./comelang2.h"
                                litem_160=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value185=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./comelang2.h"
                                litem_160->prev=((void*)0);
                                # 159 "./comelang2.h"
                                litem_160->next=((void*)0);
                                # 160 "./comelang2.h"
                                __dec_obj69=litem_160->item;
                                litem_160->item=(char*)come_increment_ref_count(item);
                                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 162 "./comelang2.h"
                                self->tail=litem_160;
                                # 163 "./comelang2.h"
                                self->head=litem_160;
                            }
                            else {
                                # 186 "./comelang2.h"
                                # 165 "./comelang2.h"
                                if(_if_conditional186=self->len==1,                                _if_conditional186) {
                                    # 166 "./comelang2.h"
                                    litem_161=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value186=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./comelang2.h"
                                    litem_161->prev=self->head;
                                    # 169 "./comelang2.h"
                                    litem_161->next=((void*)0);
                                    # 170 "./comelang2.h"
                                    __dec_obj70=litem_161->item;
                                    litem_161->item=(char*)come_increment_ref_count(item);
                                    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 172 "./comelang2.h"
                                    self->tail=litem_161;
                                    # 173 "./comelang2.h"
                                    self->head->next=litem_161;
                                }
                                else {
                                    # 176 "./comelang2.h"
                                    litem_162=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value187=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./comelang2.h"
                                    litem_162->prev=self->tail;
                                    # 179 "./comelang2.h"
                                    litem_162->next=((void*)0);
                                    # 180 "./comelang2.h"
                                    __dec_obj71=litem_162->item;
                                    litem_162->item=(char*)come_increment_ref_count(item);
                                    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 182 "./comelang2.h"
                                    self->tail->next=litem_162;
                                    # 183 "./comelang2.h"
                                    self->tail=litem_162;
                                }
                            }
                            # 186 "./comelang2.h"
                            self->len++;
                            # 188 "./comelang2.h"
                            __result128__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result128__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional228;
struct sBlock* __result131__;
void* right_value207;
struct sBlock* result_165;
_Bool _if_conditional231;
void* right_value208;
struct list$1sNodeph* __dec_obj83;
_Bool _if_conditional232;
void* right_value218;
struct sVarTable* __dec_obj86;
struct sBlock* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
memset(&result_165, 0, sizeof(struct sBlock*));
right_value208 = (void*)0;
right_value218 = (void*)0;
        # 3 "sBlock_clone"
        # 2 "sBlock_clone"
        if(_if_conditional228=self==(void*)0,        _if_conditional228) {
            # 2 "sBlock_clone"
            __result131__ = __result_obj__ = (void*)0;
            return __result131__;
        }
        # 3 "sBlock_clone"
        result_165=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value207=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sBlock_clone"
        # 4 "sBlock_clone"
        if(_if_conditional231=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional231) {
            # 4 "sBlock_clone"
            __dec_obj83=result_165->mNodes;
            result_165->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value208=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        # 5 "sBlock_clone"
        if(_if_conditional232=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional232) {
            # 5 "sBlock_clone"
            __dec_obj86=result_165->mVarTable;
            result_165->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value218=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        __result148__ = __result_obj__ = result_165;
        come_call_finalizer2(sBlock_finalize,result_165, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result148__;
        come_call_finalizer2(sBlock_finalize,result_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional229;
_Bool _if_conditional230;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sBlock_finalize"
            # 0 "sBlock_finalize"
            if(_if_conditional229=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional229) {
                # 0 "sBlock_finalize"
                come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sBlock_finalize"
            # 1 "sBlock_finalize"
            if(_if_conditional230=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional230) {
                # 1 "sBlock_finalize"
                come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional233;
struct sVarTable* __result132__;
void* right_value209;
struct sVarTable* result_166;
_Bool _if_conditional234;
void* right_value217;
struct map$2charphsVarph* __dec_obj85;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct sVarTable* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
memset(&result_166, 0, sizeof(struct sVarTable*));
right_value217 = (void*)0;
                # 3 "sVarTable_clone"
                # 2 "sVarTable_clone"
                if(_if_conditional233=self==(void*)0,                _if_conditional233) {
                    # 2 "sVarTable_clone"
                    __result132__ = __result_obj__ = (void*)0;
                    return __result132__;
                }
                # 3 "sVarTable_clone"
                result_166=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value209=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sVarTable_clone"
                # 4 "sVarTable_clone"
                if(_if_conditional234=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional234) {
                    # 4 "sVarTable_clone"
                    __dec_obj85=result_166->mVars;
                    result_166->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value217=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "sVarTable_clone"
                # 5 "sVarTable_clone"
                if(_if_conditional258=self!=((void*)0),                _if_conditional258) {
                    # 5 "sVarTable_clone"
                    result_166->mGlobal=self->mGlobal;
                }
                # 7 "sVarTable_clone"
                # 6 "sVarTable_clone"
                if(_if_conditional259=self!=((void*)0),                _if_conditional259) {
                    # 6 "sVarTable_clone"
                    result_166->mParent=self->mParent;
                }
                # 8 "sVarTable_clone"
                # 7 "sVarTable_clone"
                if(_if_conditional260=self!=((void*)0),                _if_conditional260) {
                    # 7 "sVarTable_clone"
                    result_166->mID=self->mID;
                }
                # 8 "sVarTable_clone"
                __result147__ = __result_obj__ = result_166;
                come_call_finalizer2(sVarTable_finalize,result_166, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result147__;
                come_call_finalizer2(sVarTable_finalize,result_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional235;
struct map$2charphsVarph* __result133__;
void* right_value210;
void* right_value211;
struct map$2charphsVarph* result_167;
void* right_value212;
void* right_value213;
struct list$1charp* __dec_obj84;
char* it_170;
struct sVar* default_value_173;
struct sVar* it2_176;
struct map$2charphsVarph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&result_167, 0, sizeof(struct map$2charphsVarph*));
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&it_170, 0, sizeof(char*));
memset(&default_value_173, 0, sizeof(struct sVar*));
memset(&it2_176, 0, sizeof(struct sVar*));
                        # 1181 "./comelang2.h"
                        # 1177 "./comelang2.h"
                        if(_if_conditional235=self==((void*)0),                        _if_conditional235) {
                            # 1178 "./comelang2.h"
                            __result133__ = __result_obj__ = ((void*)0);
                            return __result133__;
                        }
                        # 1181 "./comelang2.h"
                        result_167=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value211=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value210=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1181, "map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1183 "./comelang2.h"
                        __dec_obj84=result_167->key_list;
                        result_167->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value213=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value212=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1183, "list$1charp"))))))));
                        come_call_finalizer2(list$1charp_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charpp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charpp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1194 "./comelang2.h"
                        for(                        it_170=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_170=map$2charphsVarph_next(self)                        ){
                            # 1186 "./comelang2.h"
                            # 1187 "./comelang2.h"
                            memset(&default_value_173,0,sizeof(struct sVar*));
                            # 1189 "./comelang2.h"
                            it2_176=map$2charphsVarph_at(self,it_170,default_value_173);
                            # 1191 "./comelang2.h"
                            map$2charphsVarph_insert2(result_167,it_170,it2_176);
                        }
                        # 1194 "./comelang2.h"
                        __result146__ = __result_obj__ = result_167;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_167, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result146__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional236;
char* result_168;
char* __result134__;
_Bool _if_conditional237;
char* __result135__;
char* result_169;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_168, 0, sizeof(char*));
memset(&result_169, 0, sizeof(char*));
                            # 1304 "./comelang2.h"
                            # 1299 "./comelang2.h"
                            if(_if_conditional236=self==((void*)0),                            _if_conditional236) {
                                # 1300 "./comelang2.h"
                                # 1301 "./comelang2.h"
                                memset(&result_168,0,sizeof(char*));
                                # 1302 "./comelang2.h"
                                __result134__ = __result_obj__ = result_168;
                                return __result134__;
                            }
                            # 1304 "./comelang2.h"
                            self->key_list->it=self->key_list->head;
                            # 1310 "./comelang2.h"
                            # 1306 "./comelang2.h"
                            if(self->key_list->it) {
                                # 1307 "./comelang2.h"
                                __result135__ = __result_obj__ = self->key_list->it->item;
                                return __result135__;
                            }
                            # 1310 "./comelang2.h"
                            # 1311 "./comelang2.h"
                            memset(&result_169,0,sizeof(char*));
                            # 1312 "./comelang2.h"
                            __result136__ = __result_obj__ = result_169;
                            return __result136__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1333 "./comelang2.h"
                            __result137__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result137__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional238;
char* result_171;
char* __result138__;
_Bool _if_conditional239;
char* __result139__;
char* result_172;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_171, 0, sizeof(char*));
memset(&result_172, 0, sizeof(char*));
                            # 1321 "./comelang2.h"
                            # 1316 "./comelang2.h"
                            if(_if_conditional238=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional238) {
                                # 1317 "./comelang2.h"
                                # 1318 "./comelang2.h"
                                memset(&result_171,0,sizeof(char*));
                                # 1319 "./comelang2.h"
                                __result138__ = __result_obj__ = result_171;
                                return __result138__;
                            }
                            # 1321 "./comelang2.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1327 "./comelang2.h"
                            # 1323 "./comelang2.h"
                            if(self->key_list->it) {
                                # 1324 "./comelang2.h"
                                __result139__ = __result_obj__ = self->key_list->it->item;
                                return __result139__;
                            }
                            # 1327 "./comelang2.h"
                            # 1328 "./comelang2.h"
                            memset(&result_172,0,sizeof(char*));
                            # 1329 "./comelang2.h"
                            __result140__ = __result_obj__ = result_172;
                            return __result140__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_174;
unsigned int it_175;
_Bool _while_condtional23;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct sVar* __result141__;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct sVar* __result142__;
struct sVar* __result143__;
struct sVar* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_174, 0, sizeof(unsigned int));
memset(&it_175, 0, sizeof(unsigned int));
                                # 1226 "./comelang2.h"
                                hash_174=string_get_hash_key(((char*)key))%self->size;
                                # 1227 "./comelang2.h"
                                it_175=hash_174;
                                # 1251 "./comelang2.h"
                                while(_while_condtional23=(_Bool)1,                                _while_condtional23) {
                                    # 1249 "./comelang2.h"
                                    # 1230 "./comelang2.h"
                                    if(_if_conditional240=self->item_existance[it_175],                                    _if_conditional240) {
                                        # 1237 "./comelang2.h"
                                        # 1232 "./comelang2.h"
                                        if(_if_conditional241=string_equals(self->keys[it_175],key),                                        _if_conditional241) {
                                            # 1234 "./comelang2.h"
                                            __result141__ = __result_obj__ = self->items[it_175];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result141__;
                                        }
                                        # 1237 "./comelang2.h"
                                        it_175++;
                                        # 1245 "./comelang2.h"
                                        # 1239 "./comelang2.h"
                                        if(_if_conditional242=it_175>=self->size,                                        _if_conditional242) {
                                            # 1240 "./comelang2.h"
                                            it_175=0;
                                        }
                                        else {
                                            # 1245 "./comelang2.h"
                                            # 1242 "./comelang2.h"
                                            if(_if_conditional243=it_175==hash_174,                                            _if_conditional243) {
                                                # 1243 "./comelang2.h"
                                                __result142__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result142__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1247 "./comelang2.h"
                                        __result143__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result143__;
                                    }
                                }
                                # 1251 "./comelang2.h"
                                __result144__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result144__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional244;
unsigned int hash_188;
int it_189;
_Bool _while_condtional25;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool same_key_exist_190;
char* it2_191;
_Bool _if_conditional256;
_Bool _if_conditional257;
struct map$2charphsVarph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_188, 0, sizeof(unsigned int));
memset(&it_189, 0, sizeof(int));
memset(&same_key_exist_190, 0, sizeof(_Bool));
memset(&it2_191, 0, sizeof(char*));
                                # 1471 "./comelang2.h"
                                # 1468 "./comelang2.h"
                                if(_if_conditional244=self->len*2>=self->size,                                _if_conditional244) {
                                    # 1469 "./comelang2.h"
                                    map$2charphsVarph_rehash(self);
                                }
                                # 1471 "./comelang2.h"
                                hash_188=string_get_hash_key(key)%self->size;
                                # 1472 "./comelang2.h"
                                it_189=hash_188;
                                # 1530 "./comelang2.h"
                                while(_while_condtional25=(_Bool)1,                                _while_condtional25) {
                                    # 1528 "./comelang2.h"
                                    # 1475 "./comelang2.h"
                                    if(_if_conditional248=self->item_existance[it_189],                                    _if_conditional248) {
                                        # 1498 "./comelang2.h"
                                        # 1477 "./comelang2.h"
                                        if(_if_conditional249=string_equals(self->keys[it_189],key),                                        _if_conditional249) {
                                            # 1488 "./comelang2.h"
                                            # 1479 "./comelang2.h"
                                            if(_if_conditional250=1,                                            _if_conditional250) {
                                                # 1480 "./comelang2.h"
                                                self->keys[it_189] = come_decrement_ref_count2(self->keys[it_189], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                # 1481 "./comelang2.h"
                                                list$1charp_remove(self->key_list,self->keys[it_189]);
                                                # 1482 "./comelang2.h"
                                                self->keys[it_189]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                # 1485 "./comelang2.h"
                                                list$1charp_remove(self->key_list,self->keys[it_189]);
                                                # 1486 "./comelang2.h"
                                                self->keys[it_189]=key;
                                            }
                                            # 1495 "./comelang2.h"
                                            # 1488 "./comelang2.h"
                                            if(_if_conditional251=1,                                            _if_conditional251) {
                                                # 1489 "./comelang2.h"
                                                come_call_finalizer2(sVar_finalize,self->items[it_189], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                # 1490 "./comelang2.h"
                                                self->items[it_189]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                # 1493 "./comelang2.h"
                                                self->items[it_189]=item;
                                            }
                                            # 1495 "./comelang2.h"
                                            break;
                                        }
                                        # 1498 "./comelang2.h"
                                        it_189++;
                                        # 1508 "./comelang2.h"
                                        # 1500 "./comelang2.h"
                                        if(_if_conditional252=it_189>=self->size,                                        _if_conditional252) {
                                            # 1501 "./comelang2.h"
                                            it_189=0;
                                        }
                                        else {
                                            # 1508 "./comelang2.h"
                                            # 1503 "./comelang2.h"
                                            if(_if_conditional253=it_189==hash_188,                                            _if_conditional253) {
                                                # 1504 "./comelang2.h"
                                                printf("unexpected error in map.insert\n");
                                                # 1505 "./comelang2.h"
                                                stackframe();
                                                # 1506 "./comelang2.h"
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        # 1510 "./comelang2.h"
                                        self->item_existance[it_189]=(_Bool)1;
                                        # 1517 "./comelang2.h"
                                        # 1511 "./comelang2.h"
                                        if(_if_conditional254=1,                                        _if_conditional254) {
                                            # 1512 "./comelang2.h"
                                            self->keys[it_189]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            # 1515 "./comelang2.h"
                                            self->keys[it_189]=key;
                                        }
                                        # 1524 "./comelang2.h"
                                        # 1517 "./comelang2.h"
                                        if(_if_conditional255=1,                                        _if_conditional255) {
                                            # 1518 "./comelang2.h"
                                            self->items[it_189]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            # 1521 "./comelang2.h"
                                            self->items[it_189]=item;
                                        }
                                        # 1524 "./comelang2.h"
                                        self->len++;
                                        # 1526 "./comelang2.h"
                                        break;
                                    }
                                }
                                # 1530 "./comelang2.h"
                                same_key_exist_190=(_Bool)0;
                                # 1538 "./comelang2.h"
                                for(                                it2_191=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_191=list$1charp_next(self->key_list)                                ){
                                    # 1536 "./comelang2.h"
                                    # 1533 "./comelang2.h"
                                    if(_if_conditional256=string_equals(it2_191,key),                                    _if_conditional256) {
                                        # 1534 "./comelang2.h"
                                        same_key_exist_190=(_Bool)1;
                                    }
                                }
                                # 1542 "./comelang2.h"
                                # 1538 "./comelang2.h"
                                if(_if_conditional257=!same_key_exist_190,                                _if_conditional257) {
                                    # 1539 "./comelang2.h"
                                    list$1charp_push_back(self->key_list,key);
                                }
                                # 1542 "./comelang2.h"
                                __result145__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result145__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_177;
void* right_value214;
char** keys_178;
void* right_value215;
struct sVar** items_179;
void* right_value216;
_Bool* item_existance_180;
int len_181;
char* it_182;
struct sVar* default_value_183;
struct sVar* it2_184;
unsigned int hash_185;
int n_186;
_Bool _while_condtional24;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
struct sVar* default_value_187;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_177, 0, sizeof(int));
right_value214 = (void*)0;
memset(&keys_178, 0, sizeof(char**));
right_value215 = (void*)0;
memset(&items_179, 0, sizeof(struct sVar**));
right_value216 = (void*)0;
memset(&item_existance_180, 0, sizeof(_Bool*));
memset(&len_181, 0, sizeof(int));
memset(&it_182, 0, sizeof(char*));
memset(&default_value_183, 0, sizeof(struct sVar*));
memset(&it2_184, 0, sizeof(struct sVar*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&n_186, 0, sizeof(int));
memset(&default_value_187, 0, sizeof(struct sVar*));
                                        # 1337 "./comelang2.h"
                                        size_177=self->size*10;
                                        # 1338 "./comelang2.h"
                                        keys_178=(char**)come_increment_ref_count(((char**)(right_value214=(char**)come_calloc(1, sizeof(char*)*(1*(size_177)), "./comelang2.h", 1338, "char*%"))));
                                        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1339 "./comelang2.h"
                                        items_179=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value215=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_177)), "./comelang2.h", 1339, "sVar*%"))));
                                        come_call_finalizer2(sVar_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 1340 "./comelang2.h"
                                        item_existance_180=(_Bool*)come_increment_ref_count(((_Bool*)(right_value216=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_177)), "./comelang2.h", 1340, "bool"))));
                                        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1342 "./comelang2.h"
                                        len_181=0;
                                        # 1377 "./comelang2.h"
                                        for(                                        it_182=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_182=map$2charphsVarph_next(self)                                        ){
                                            # 1345 "./comelang2.h"
                                            # 1346 "./comelang2.h"
                                            memset(&default_value_183,0,sizeof(struct sVar*));
                                            # 1347 "./comelang2.h"
                                            it2_184=map$2charphsVarph_at(self,it_182,default_value_183);
                                            # 1348 "./comelang2.h"
                                            hash_185=string_get_hash_key(it_182)%size_177;
                                            # 1349 "./comelang2.h"
                                            n_186=hash_185;
                                            # 1375 "./comelang2.h"
                                            while(_while_condtional24=(_Bool)1,                                            _while_condtional24) {
                                                # 1374 "./comelang2.h"
                                                # 1352 "./comelang2.h"
                                                if(_if_conditional245=item_existance_180[n_186],                                                _if_conditional245) {
                                                    # 1354 "./comelang2.h"
                                                    n_186++;
                                                    # 1364 "./comelang2.h"
                                                    # 1356 "./comelang2.h"
                                                    if(_if_conditional246=n_186>=size_177,                                                    _if_conditional246) {
                                                        # 1357 "./comelang2.h"
                                                        n_186=0;
                                                    }
                                                    else {
                                                        # 1364 "./comelang2.h"
                                                        # 1359 "./comelang2.h"
                                                        if(_if_conditional247=n_186==hash_185,                                                        _if_conditional247) {
                                                            # 1360 "./comelang2.h"
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            # 1361 "./comelang2.h"
                                                            stackframe();
                                                            # 1362 "./comelang2.h"
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 1366 "./comelang2.h"
                                                    item_existance_180[n_186]=(_Bool)1;
                                                    # 1367 "./comelang2.h"
                                                    keys_178[n_186]=it_182;
                                                    # 1368 "./comelang2.h"
                                                    # 1369 "./comelang2.h"
                                                    items_179[n_186]=map$2charphsVarph_at(self,it_182,default_value_187);
                                                    # 1371 "./comelang2.h"
                                                    len_181++;
                                                    # 1372 "./comelang2.h"
                                                    break;
                                                }
                                            }
                                        }
                                        # 1377 "./comelang2.h"
                                        come_free((char*)self->items);
                                        # 1378 "./comelang2.h"
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        # 1379 "./comelang2.h"
                                        come_free((char*)self->keys);
                                        # 1381 "./comelang2.h"
                                        self->keys=keys_178;
                                        # 1382 "./comelang2.h"
                                        self->items=items_179;
                                        # 1383 "./comelang2.h"
                                        self->item_existance=item_existance_180;
                                        # 1385 "./comelang2.h"
                                        self->size=size_177;
                                        # 1386 "./comelang2.h"
                                        self->len=len_181;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFun_finalize"
        # 0 "sFun_finalize"
        if(_if_conditional261=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional261) {
            # 0 "sFun_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFun_finalize"
        # 1 "sFun_finalize"
        if(_if_conditional262=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional262) {
            # 1 "sFun_finalize"
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sFun_finalize"
        # 2 "sFun_finalize"
        if(_if_conditional263=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional263) {
            # 2 "sFun_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sFun_finalize"
        # 3 "sFun_finalize"
        if(_if_conditional264=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional264) {
            # 3 "sFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sFun_finalize"
        # 4 "sFun_finalize"
        if(_if_conditional265=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional265) {
            # 4 "sFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sFun_finalize"
        # 5 "sFun_finalize"
        if(_if_conditional266=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional266) {
            # 5 "sFun_finalize"
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sFun_finalize"
        # 6 "sFun_finalize"
        if(_if_conditional267=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional267) {
            # 6 "sFun_finalize"
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sFun_finalize"
        # 7 "sFun_finalize"
        if(_if_conditional268=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional268) {
            # 7 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sFun_finalize"
        # 8 "sFun_finalize"
        if(_if_conditional269=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional269) {
            # 8 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 10 "sFun_finalize"
        # 9 "sFun_finalize"
        if(_if_conditional270=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional270) {
            # 9 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 11 "sFun_finalize"
        # 10 "sFun_finalize"
        if(_if_conditional271=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional271) {
            # 10 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 12 "sFun_finalize"
        # 11 "sFun_finalize"
        if(_if_conditional272=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional272) {
            # 11 "sFun_finalize"
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 13 "sFun_finalize"
        # 12 "sFun_finalize"
        if(_if_conditional273=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional273) {
            # 12 "sFun_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

void init_classes(struct sInfo* info){
void* __result_obj__;
void* right_value221;
void* right_value222;
void* right_value223;
void* right_value224;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
void* right_value238;
void* right_value239;
void* right_value240;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
void* right_value251;
void* right_value252;
void* right_value253;
int i_192;
void* right_value254;
char* generics_type_193;
void* right_value255;
void* right_value256;
int i_194;
void* right_value257;
char* generics_type_195;
void* right_value258;
void* right_value259;
int rc_197;
_Bool _if_conditional274;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
char* type_name_198;
void* right_value264;
void* right_value265;
struct sType* type_199;
void* right_value266;
char* __dec_obj90;
void* right_value270;
void* right_value271;
void* right_value272;
struct sClass* klass_221;
void* right_value276;
void* right_value277;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value281;
void* right_value282;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
void* right_value290;
void* right_value291;
void* right_value292;
void* right_value293;
void* right_value294;
void* right_value295;
void* right_value296;
void* right_value297;
void* right_value298;
void* right_value299;
void* right_value300;
void* right_value301;
void* right_value315;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&i_192, 0, sizeof(int));
right_value254 = (void*)0;
memset(&generics_type_193, 0, sizeof(char*));
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&i_194, 0, sizeof(int));
right_value257 = (void*)0;
memset(&generics_type_195, 0, sizeof(char*));
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&rc_197, 0, sizeof(int));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&type_name_198, 0, sizeof(char*));
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&type_199, 0, sizeof(struct sType*));
right_value266 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&klass_221, 0, sizeof(struct sClass*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
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
right_value315 = (void*)0;
    # 434 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value222=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 434, "sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 435 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value225=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 435, "sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 436 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value229=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value228=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 436, "sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 437 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value232=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value231=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 437, "sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 438 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value235=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value234=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 438, "sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 439 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value238=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value237=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 439, "sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 440 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value241=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value240=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 440, "sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 441 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value244=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value243=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 441, "sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 442 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value247=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value246=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 442, "sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 443 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value250=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value249=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 443, "sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 444 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value253=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value252=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 444, "sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 449 "02transpile.c"
    for(    i_192=0;    i_192<12;    i_192++    ){
        # 446 "02transpile.c"
        generics_type_193=(char*)come_increment_ref_count(((char*)(right_value254=xsprintf("generics_type%d",i_192))));
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 447 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_193),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value256=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value255=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 447, "sClass")))),generics_type_193,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_192,-1,(_Bool)0,info)))));
        come_call_finalizer2(sClass_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        generics_type_193 = come_decrement_ref_count2(generics_type_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 454 "02transpile.c"
    for(    i_194=0;    i_194<7;    i_194++    ){
        # 450 "02transpile.c"
        generics_type_195=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("mgenerics_type%d",i_194))));
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 451 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_195),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value259=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value258=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 451, "sClass")))),generics_type_195,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_194,(_Bool)0,info)))));
        come_call_finalizer2(sClass_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        generics_type_195 = come_decrement_ref_count2(generics_type_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 454 "02transpile.c"
    char cmd_196[1024];
    memset(&cmd_196, 0, sizeof(char)    *(1024)    );
    # 455 "02transpile.c"
    snprintf(cmd_196,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    # 457 "02transpile.c"
    rc_197=system(cmd_196);
    # 481 "02transpile.c"
    # 458 "02transpile.c"
    if(_if_conditional274=rc_197==0,    _if_conditional274) {
        # 459 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value262=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value261=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 459, "sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 461 "02transpile.c"
        type_name_198=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string("__builtin_va_list"))));
        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 463 "02transpile.c"
        type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value264=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 463, "sType")))),"__builtin_va_list",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 464 "02transpile.c"
        __dec_obj90=type_199->mOriginalTypeName;
        type_199->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("__builtin_va_list"))));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 466 "02transpile.c"
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(type_name_198)))),(struct sType*)come_increment_ref_count(type_199));
        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 471 "02transpile.c"
        klass_221=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value272=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value271=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 471, "sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 473 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_221->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value280=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value276=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 473, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value278=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 473, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 474 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_221->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value285=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value281=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 474, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value283=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 474, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 475 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_221->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value290=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value286=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 475, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value288=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 475, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 476 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_221->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value295=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value291=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 476, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value293=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 476, "sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 477 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_221->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value300=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value296=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 477, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value297=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value298=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 477, "sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 479 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value301=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value315=sClass_clone(klass_221)))));
        right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,klass_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional275;
unsigned int hash_217;
unsigned int it_218;
_Bool _while_condtional28;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool same_key_exist_219;
char* it2_220;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct map$2charphsTypeph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_217, 0, sizeof(unsigned int));
memset(&it_218, 0, sizeof(unsigned int));
memset(&same_key_exist_219, 0, sizeof(_Bool));
memset(&it2_220, 0, sizeof(char*));
            # 1393 "./comelang2.h"
            # 1390 "./comelang2.h"
            if(_if_conditional275=self->len*10>=self->size,            _if_conditional275) {
                # 1391 "./comelang2.h"
                map$2charphsTypeph_rehash(self);
            }
            # 1393 "./comelang2.h"
            hash_217=string_get_hash_key(key)%self->size;
            # 1394 "./comelang2.h"
            it_218=hash_217;
            # 1452 "./comelang2.h"
            while(_while_condtional28=(_Bool)1,            _while_condtional28) {
                # 1450 "./comelang2.h"
                # 1397 "./comelang2.h"
                if(_if_conditional287=self->item_existance[it_218],                _if_conditional287) {
                    # 1420 "./comelang2.h"
                    # 1399 "./comelang2.h"
                    if(_if_conditional288=string_equals(self->keys[it_218],key),                    _if_conditional288) {
                        # 1410 "./comelang2.h"
                        # 1401 "./comelang2.h"
                        if(_if_conditional289=1,                        _if_conditional289) {
                            # 1402 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_218]);
                            # 1403 "./comelang2.h"
                            self->keys[it_218] = come_decrement_ref_count2(self->keys[it_218], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./comelang2.h"
                            self->keys[it_218]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_218]);
                            # 1408 "./comelang2.h"
                            self->keys[it_218]=key;
                        }
                        # 1417 "./comelang2.h"
                        # 1410 "./comelang2.h"
                        if(_if_conditional290=1,                        _if_conditional290) {
                            # 1411 "./comelang2.h"
                            come_call_finalizer2(sType_finalize,self->items[it_218], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./comelang2.h"
                            self->items[it_218]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./comelang2.h"
                            self->items[it_218]=item;
                        }
                        # 1417 "./comelang2.h"
                        break;
                    }
                    # 1420 "./comelang2.h"
                    it_218++;
                    # 1430 "./comelang2.h"
                    # 1422 "./comelang2.h"
                    if(_if_conditional291=it_218>=self->size,                    _if_conditional291) {
                        # 1423 "./comelang2.h"
                        it_218=0;
                    }
                    else {
                        # 1430 "./comelang2.h"
                        # 1425 "./comelang2.h"
                        if(_if_conditional292=it_218==hash_217,                        _if_conditional292) {
                            # 1426 "./comelang2.h"
                            printf("unexpected error in map.insert\n");
                            # 1427 "./comelang2.h"
                            stackframe();
                            # 1428 "./comelang2.h"
                            exit(2);
                        }
                    }
                }
                else {
                    # 1432 "./comelang2.h"
                    self->item_existance[it_218]=(_Bool)1;
                    # 1439 "./comelang2.h"
                    # 1433 "./comelang2.h"
                    if(_if_conditional293=1,                    _if_conditional293) {
                        # 1434 "./comelang2.h"
                        self->keys[it_218]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./comelang2.h"
                        self->keys[it_218]=key;
                    }
                    # 1446 "./comelang2.h"
                    # 1439 "./comelang2.h"
                    if(_if_conditional294=1,                    _if_conditional294) {
                        # 1440 "./comelang2.h"
                        self->items[it_218]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./comelang2.h"
                        self->items[it_218]=item;
                    }
                    # 1446 "./comelang2.h"
                    self->len++;
                    # 1448 "./comelang2.h"
                    break;
                }
            }
            # 1452 "./comelang2.h"
            same_key_exist_219=(_Bool)0;
            # 1461 "./comelang2.h"
            for(            it2_220=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_220=list$1charp_next(self->key_list)            ){
                # 1459 "./comelang2.h"
                # 1455 "./comelang2.h"
                if(_if_conditional295=string_equals(it2_220,key),                _if_conditional295) {
                    # 1456 "./comelang2.h"
                    puts("SAME KEY");
                    # 1457 "./comelang2.h"
                    same_key_exist_219=(_Bool)1;
                }
            }
            # 1465 "./comelang2.h"
            # 1461 "./comelang2.h"
            if(_if_conditional296=!same_key_exist_219,            _if_conditional296) {
                # 1462 "./comelang2.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1465 "./comelang2.h"
            __result161__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result161__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_200;
void* right_value267;
char** keys_201;
void* right_value268;
struct sType** items_202;
void* right_value269;
_Bool* item_existance_203;
int len_204;
char* it_207;
struct sType* default_value_210;
struct sType* it2_213;
unsigned int hash_214;
int n_215;
_Bool _while_condtional27;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
struct sType* default_value_216;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_200, 0, sizeof(int));
right_value267 = (void*)0;
memset(&keys_201, 0, sizeof(char**));
right_value268 = (void*)0;
memset(&items_202, 0, sizeof(struct sType**));
right_value269 = (void*)0;
memset(&item_existance_203, 0, sizeof(_Bool*));
memset(&len_204, 0, sizeof(int));
memset(&it_207, 0, sizeof(char*));
memset(&default_value_210, 0, sizeof(struct sType*));
memset(&it2_213, 0, sizeof(struct sType*));
memset(&hash_214, 0, sizeof(unsigned int));
memset(&n_215, 0, sizeof(int));
memset(&default_value_216, 0, sizeof(struct sType*));
                    # 1337 "./comelang2.h"
                    size_200=self->size*10;
                    # 1338 "./comelang2.h"
                    keys_201=(char**)come_increment_ref_count(((char**)(right_value267=(char**)come_calloc(1, sizeof(char*)*(1*(size_200)), "./comelang2.h", 1338, "char*%"))));
                    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./comelang2.h"
                    items_202=(struct sType**)come_increment_ref_count(((struct sType**)(right_value268=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_200)), "./comelang2.h", 1339, "sType*%"))));
                    come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./comelang2.h"
                    item_existance_203=(_Bool*)come_increment_ref_count(((_Bool*)(right_value269=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_200)), "./comelang2.h", 1340, "bool"))));
                    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./comelang2.h"
                    len_204=0;
                    # 1377 "./comelang2.h"
                    for(                    it_207=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_207=map$2charphsTypeph_next(self)                    ){
                        # 1345 "./comelang2.h"
                        # 1346 "./comelang2.h"
                        memset(&default_value_210,0,sizeof(struct sType*));
                        # 1347 "./comelang2.h"
                        it2_213=map$2charphsTypeph_at(self,it_207,default_value_210);
                        # 1348 "./comelang2.h"
                        hash_214=string_get_hash_key(it_207)%size_200;
                        # 1349 "./comelang2.h"
                        n_215=hash_214;
                        # 1375 "./comelang2.h"
                        while(_while_condtional27=(_Bool)1,                        _while_condtional27) {
                            # 1374 "./comelang2.h"
                            # 1352 "./comelang2.h"
                            if(_if_conditional284=item_existance_203[n_215],                            _if_conditional284) {
                                # 1354 "./comelang2.h"
                                n_215++;
                                # 1364 "./comelang2.h"
                                # 1356 "./comelang2.h"
                                if(_if_conditional285=n_215>=size_200,                                _if_conditional285) {
                                    # 1357 "./comelang2.h"
                                    n_215=0;
                                }
                                else {
                                    # 1364 "./comelang2.h"
                                    # 1359 "./comelang2.h"
                                    if(_if_conditional286=n_215==hash_214,                                    _if_conditional286) {
                                        # 1360 "./comelang2.h"
                                        printf("unexpected error in map.rehash(1)\n");
                                        # 1361 "./comelang2.h"
                                        stackframe();
                                        # 1362 "./comelang2.h"
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                # 1366 "./comelang2.h"
                                item_existance_203[n_215]=(_Bool)1;
                                # 1367 "./comelang2.h"
                                keys_201[n_215]=it_207;
                                # 1368 "./comelang2.h"
                                # 1369 "./comelang2.h"
                                items_202[n_215]=map$2charphsTypeph_at(self,it_207,default_value_216);
                                # 1371 "./comelang2.h"
                                len_204++;
                                # 1372 "./comelang2.h"
                                break;
                            }
                        }
                    }
                    # 1377 "./comelang2.h"
                    come_free((char*)self->items);
                    # 1378 "./comelang2.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1379 "./comelang2.h"
                    come_free((char*)self->keys);
                    # 1381 "./comelang2.h"
                    self->keys=keys_201;
                    # 1382 "./comelang2.h"
                    self->items=items_202;
                    # 1383 "./comelang2.h"
                    self->item_existance=item_existance_203;
                    # 1385 "./comelang2.h"
                    self->size=size_200;
                    # 1386 "./comelang2.h"
                    self->len=len_204;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional276;
char* result_205;
char* __result150__;
_Bool _if_conditional277;
char* __result151__;
char* result_206;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_205, 0, sizeof(char*));
memset(&result_206, 0, sizeof(char*));
                        # 1304 "./comelang2.h"
                        # 1299 "./comelang2.h"
                        if(_if_conditional276=self==((void*)0),                        _if_conditional276) {
                            # 1300 "./comelang2.h"
                            # 1301 "./comelang2.h"
                            memset(&result_205,0,sizeof(char*));
                            # 1302 "./comelang2.h"
                            __result150__ = __result_obj__ = result_205;
                            return __result150__;
                        }
                        # 1304 "./comelang2.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./comelang2.h"
                        # 1306 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1307 "./comelang2.h"
                            __result151__ = __result_obj__ = self->key_list->it->item;
                            return __result151__;
                        }
                        # 1310 "./comelang2.h"
                        # 1311 "./comelang2.h"
                        memset(&result_206,0,sizeof(char*));
                        # 1312 "./comelang2.h"
                        __result152__ = __result_obj__ = result_206;
                        return __result152__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./comelang2.h"
                        __result153__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result153__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional278;
char* result_208;
char* __result154__;
_Bool _if_conditional279;
char* __result155__;
char* result_209;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_208, 0, sizeof(char*));
memset(&result_209, 0, sizeof(char*));
                        # 1321 "./comelang2.h"
                        # 1316 "./comelang2.h"
                        if(_if_conditional278=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional278) {
                            # 1317 "./comelang2.h"
                            # 1318 "./comelang2.h"
                            memset(&result_208,0,sizeof(char*));
                            # 1319 "./comelang2.h"
                            __result154__ = __result_obj__ = result_208;
                            return __result154__;
                        }
                        # 1321 "./comelang2.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./comelang2.h"
                        # 1323 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1324 "./comelang2.h"
                            __result155__ = __result_obj__ = self->key_list->it->item;
                            return __result155__;
                        }
                        # 1327 "./comelang2.h"
                        # 1328 "./comelang2.h"
                        memset(&result_209,0,sizeof(char*));
                        # 1329 "./comelang2.h"
                        __result156__ = __result_obj__ = result_209;
                        return __result156__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_211;
unsigned int it_212;
_Bool _while_condtional26;
_Bool _if_conditional280;
_Bool _if_conditional281;
struct sType* __result157__;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct sType* __result158__;
struct sType* __result159__;
struct sType* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_211, 0, sizeof(unsigned int));
memset(&it_212, 0, sizeof(unsigned int));
                            # 1226 "./comelang2.h"
                            hash_211=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./comelang2.h"
                            it_212=hash_211;
                            # 1251 "./comelang2.h"
                            while(_while_condtional26=(_Bool)1,                            _while_condtional26) {
                                # 1249 "./comelang2.h"
                                # 1230 "./comelang2.h"
                                if(_if_conditional280=self->item_existance[it_212],                                _if_conditional280) {
                                    # 1237 "./comelang2.h"
                                    # 1232 "./comelang2.h"
                                    if(_if_conditional281=string_equals(self->keys[it_212],key),                                    _if_conditional281) {
                                        # 1234 "./comelang2.h"
                                        __result157__ = __result_obj__ = self->items[it_212];
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result157__;
                                    }
                                    # 1237 "./comelang2.h"
                                    it_212++;
                                    # 1245 "./comelang2.h"
                                    # 1239 "./comelang2.h"
                                    if(_if_conditional282=it_212>=self->size,                                    _if_conditional282) {
                                        # 1240 "./comelang2.h"
                                        it_212=0;
                                    }
                                    else {
                                        # 1245 "./comelang2.h"
                                        # 1242 "./comelang2.h"
                                        if(_if_conditional283=it_212==hash_211,                                        _if_conditional283) {
                                            # 1243 "./comelang2.h"
                                            __result158__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result158__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "./comelang2.h"
                                    __result159__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result159__;
                                }
                            }
                            # 1251 "./comelang2.h"
                            __result160__ = __result_obj__ = default_value;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result160__;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional297;
void* right_value273;
struct list_item$1tuple2$2charphsTypephph* litem_222;
struct tuple2$2charphsTypeph* __dec_obj91;
_Bool _if_conditional300;
void* right_value274;
struct list_item$1tuple2$2charphsTypephph* litem_223;
struct tuple2$2charphsTypeph* __dec_obj92;
void* right_value275;
struct list_item$1tuple2$2charphsTypephph* litem_224;
struct tuple2$2charphsTypeph* __dec_obj93;
struct list$1tuple2$2charphsTypephph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
memset(&litem_222, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value274 = (void*)0;
memset(&litem_223, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value275 = (void*)0;
memset(&litem_224, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 256 "./comelang2.h"
            # 225 "./comelang2.h"
            if(_if_conditional297=self->len==0,            _if_conditional297) {
                # 226 "./comelang2.h"
                litem_222=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value273=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "./comelang2.h"
                litem_222->prev=((void*)0);
                # 229 "./comelang2.h"
                litem_222->next=((void*)0);
                # 230 "./comelang2.h"
                __dec_obj91=litem_222->item;
                litem_222->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 232 "./comelang2.h"
                self->tail=litem_222;
                # 233 "./comelang2.h"
                self->head=litem_222;
            }
            else {
                # 256 "./comelang2.h"
                # 235 "./comelang2.h"
                if(_if_conditional300=self->len==1,                _if_conditional300) {
                    # 236 "./comelang2.h"
                    litem_223=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value274=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "./comelang2.h"
                    litem_223->prev=self->head;
                    # 239 "./comelang2.h"
                    litem_223->next=((void*)0);
                    # 240 "./comelang2.h"
                    __dec_obj92=litem_223->item;
                    litem_223->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 242 "./comelang2.h"
                    self->tail=litem_223;
                    # 243 "./comelang2.h"
                    self->head->next=litem_223;
                }
                else {
                    # 246 "./comelang2.h"
                    litem_224=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value275=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "./comelang2.h"
                    litem_224->prev=self->tail;
                    # 249 "./comelang2.h"
                    litem_224->next=((void*)0);
                    # 250 "./comelang2.h"
                    __dec_obj93=litem_224->item;
                    litem_224->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 252 "./comelang2.h"
                    self->tail->next=litem_224;
                    # 253 "./comelang2.h"
                    self->tail=litem_224;
                }
            }
            # 256 "./comelang2.h"
            self->len++;
            # 258 "./comelang2.h"
            __result162__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result162__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional298;
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2charphsTypeph_finalize"
                    # 0 "tuple2$2charphsTypeph_finalize"
                    if(_if_conditional298=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional298) {
                        # 0 "tuple2$2charphsTypeph_finalize"
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2charphsTypeph_finalize"
                    # 1 "tuple2$2charphsTypeph_finalize"
                    if(_if_conditional299=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional299) {
                        # 1 "tuple2$2charphsTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj94;
struct sType* __dec_obj95;
struct tuple2$2charphsTypeph* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1768 "./comelang2.h"
            __dec_obj94=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1769 "./comelang2.h"
            __dec_obj95=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer2(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1771 "./comelang2.h"
            __result163__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result163__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional301;
struct sClass* __result164__;
void* right_value302;
struct sClass* result_225;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value303;
char* __dec_obj96;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value313;
struct list$1tuple2$2charphsTypephph* __dec_obj102;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value314;
char* __dec_obj103;
_Bool _if_conditional322;
struct sClass* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value302 = (void*)0;
memset(&result_225, 0, sizeof(struct sClass*));
right_value303 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
            # 3 "sClass_clone"
            # 2 "sClass_clone"
            if(_if_conditional301=self==(void*)0,            _if_conditional301) {
                # 2 "sClass_clone"
                __result164__ = __result_obj__ = (void*)0;
                return __result164__;
            }
            # 3 "sClass_clone"
            result_225=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value302=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer2(sClass_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sClass_clone"
            # 4 "sClass_clone"
            if(_if_conditional302=self!=((void*)0),            _if_conditional302) {
                # 4 "sClass_clone"
                result_225->mStruct=self->mStruct;
            }
            # 6 "sClass_clone"
            # 5 "sClass_clone"
            if(_if_conditional303=self!=((void*)0),            _if_conditional303) {
                # 5 "sClass_clone"
                result_225->mFloat=self->mFloat;
            }
            # 7 "sClass_clone"
            # 6 "sClass_clone"
            if(_if_conditional304=self!=((void*)0),            _if_conditional304) {
                # 6 "sClass_clone"
                result_225->mUnion=self->mUnion;
            }
            # 8 "sClass_clone"
            # 7 "sClass_clone"
            if(_if_conditional305=self!=((void*)0),            _if_conditional305) {
                # 7 "sClass_clone"
                result_225->mGenerics=self->mGenerics;
            }
            # 9 "sClass_clone"
            # 8 "sClass_clone"
            if(_if_conditional306=self!=((void*)0),            _if_conditional306) {
                # 8 "sClass_clone"
                result_225->mMethodGenerics=self->mMethodGenerics;
            }
            # 10 "sClass_clone"
            # 9 "sClass_clone"
            if(_if_conditional307=self!=((void*)0),            _if_conditional307) {
                # 9 "sClass_clone"
                result_225->mEnum=self->mEnum;
            }
            # 11 "sClass_clone"
            # 10 "sClass_clone"
            if(_if_conditional308=self!=((void*)0),            _if_conditional308) {
                # 10 "sClass_clone"
                result_225->mProtocol=self->mProtocol;
            }
            # 12 "sClass_clone"
            # 11 "sClass_clone"
            if(_if_conditional309=self!=((void*)0),            _if_conditional309) {
                # 11 "sClass_clone"
                result_225->mNumber=self->mNumber;
            }
            # 13 "sClass_clone"
            # 12 "sClass_clone"
            if(_if_conditional310=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional310) {
                # 12 "sClass_clone"
                __dec_obj96=result_225->mName;
                result_225->mName=(char*)come_increment_ref_count(((char*)(right_value303=string_clone(self->mName))));
                __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 14 "sClass_clone"
            # 13 "sClass_clone"
            if(_if_conditional311=self!=((void*)0),            _if_conditional311) {
                # 13 "sClass_clone"
                result_225->mGenericsNum=self->mGenericsNum;
            }
            # 15 "sClass_clone"
            # 14 "sClass_clone"
            if(_if_conditional312=self!=((void*)0),            _if_conditional312) {
                # 14 "sClass_clone"
                result_225->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            # 16 "sClass_clone"
            # 15 "sClass_clone"
            if(_if_conditional313=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional313) {
                # 15 "sClass_clone"
                __dec_obj102=result_225->mFields;
                result_225->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value313=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 17 "sClass_clone"
            # 16 "sClass_clone"
            if(_if_conditional320=self!=((void*)0),            _if_conditional320) {
                # 16 "sClass_clone"
                result_225->mOutputed=self->mOutputed;
            }
            # 18 "sClass_clone"
            # 17 "sClass_clone"
            if(_if_conditional321=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional321) {
                # 17 "sClass_clone"
                __dec_obj103=result_225->mDeclareSName;
                result_225->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value314=string_clone(self->mDeclareSName))));
                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 19 "sClass_clone"
            # 18 "sClass_clone"
            if(_if_conditional322=self!=((void*)0),            _if_conditional322) {
                # 18 "sClass_clone"
                result_225->mNobodyStruct=self->mNobodyStruct;
            }
            # 19 "sClass_clone"
            __result170__ = __result_obj__ = result_225;
            come_call_finalizer2(sClass_finalize,result_225, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result170__;
            come_call_finalizer2(sClass_finalize,result_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional314;
struct list$1tuple2$2charphsTypephph* __result165__;
void* right_value304;
void* right_value305;
struct list$1tuple2$2charphsTypephph* result_226;
struct list_item$1tuple2$2charphsTypephph* it_227;
_Bool _while_condtional29;
void* right_value312;
struct list$1tuple2$2charphsTypephph* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&result_226, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_227, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value312 = (void*)0;
                    # 142 "./comelang2.h"
                    # 139 "./comelang2.h"
                    if(_if_conditional314=self==((void*)0),                    _if_conditional314) {
                        # 140 "./comelang2.h"
                        __result165__ = __result_obj__ = ((void*)0);
                        return __result165__;
                    }
                    # 142 "./comelang2.h"
                    result_226=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value305=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value304=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./comelang2.h"
                    it_227=self->head;
                    # 151 "./comelang2.h"
                    while(_while_condtional29=it_227!=((void*)0),                    _while_condtional29) {
                        # 146 "./comelang2.h"
                        list$1tuple2$2charphsTypephph_add(result_226,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value312=tuple2$2charphsTypephp_clone(it_227->item)))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 148 "./comelang2.h"
                        it_227=it_227->next;
                    }
                    # 151 "./comelang2.h"
                    __result169__ = __result_obj__ = result_226;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_226, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result169__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional315;
void* right_value306;
struct list_item$1tuple2$2charphsTypephph* litem_228;
struct tuple2$2charphsTypeph* __dec_obj97;
_Bool _if_conditional316;
void* right_value307;
struct list_item$1tuple2$2charphsTypephph* litem_229;
struct tuple2$2charphsTypeph* __dec_obj98;
void* right_value308;
struct list_item$1tuple2$2charphsTypephph* litem_230;
struct tuple2$2charphsTypeph* __dec_obj99;
struct list$1tuple2$2charphsTypephph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
memset(&litem_228, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value307 = (void*)0;
memset(&litem_229, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value308 = (void*)0;
memset(&litem_230, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 186 "./comelang2.h"
                            # 155 "./comelang2.h"
                            if(_if_conditional315=self->len==0,                            _if_conditional315) {
                                # 156 "./comelang2.h"
                                litem_228=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value306=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./comelang2.h"
                                litem_228->prev=((void*)0);
                                # 159 "./comelang2.h"
                                litem_228->next=((void*)0);
                                # 160 "./comelang2.h"
                                __dec_obj97=litem_228->item;
                                litem_228->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 162 "./comelang2.h"
                                self->tail=litem_228;
                                # 163 "./comelang2.h"
                                self->head=litem_228;
                            }
                            else {
                                # 186 "./comelang2.h"
                                # 165 "./comelang2.h"
                                if(_if_conditional316=self->len==1,                                _if_conditional316) {
                                    # 166 "./comelang2.h"
                                    litem_229=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value307=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./comelang2.h"
                                    litem_229->prev=self->head;
                                    # 169 "./comelang2.h"
                                    litem_229->next=((void*)0);
                                    # 170 "./comelang2.h"
                                    __dec_obj98=litem_229->item;
                                    litem_229->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 172 "./comelang2.h"
                                    self->tail=litem_229;
                                    # 173 "./comelang2.h"
                                    self->head->next=litem_229;
                                }
                                else {
                                    # 176 "./comelang2.h"
                                    litem_230=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value308=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./comelang2.h"
                                    litem_230->prev=self->tail;
                                    # 179 "./comelang2.h"
                                    litem_230->next=((void*)0);
                                    # 180 "./comelang2.h"
                                    __dec_obj99=litem_230->item;
                                    litem_230->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 182 "./comelang2.h"
                                    self->tail->next=litem_230;
                                    # 183 "./comelang2.h"
                                    self->tail=litem_230;
                                }
                            }
                            # 186 "./comelang2.h"
                            self->len++;
                            # 188 "./comelang2.h"
                            __result166__ = __result_obj__ = self;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result166__;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional317;
struct tuple2$2charphsTypeph* __result167__;
void* right_value309;
struct tuple2$2charphsTypeph* result_231;
_Bool _if_conditional318;
void* right_value310;
char* __dec_obj100;
_Bool _if_conditional319;
void* right_value311;
struct sType* __dec_obj101;
struct tuple2$2charphsTypeph* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value309 = (void*)0;
memset(&result_231, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value310 = (void*)0;
right_value311 = (void*)0;
                            # 3 "tuple2$2charphsTypephp_clone"
                            # 2 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional317=self==(void*)0,                            _if_conditional317) {
                                # 2 "tuple2$2charphsTypephp_clone"
                                __result167__ = __result_obj__ = (void*)0;
                                return __result167__;
                            }
                            # 3 "tuple2$2charphsTypephp_clone"
                            result_231=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value309=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "tuple2$2charphsTypephp_clone"
                            # 4 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional318=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional318) {
                                # 4 "tuple2$2charphsTypephp_clone"
                                __dec_obj100=result_231->v1;
                                result_231->v1=(char*)come_increment_ref_count(((char*)(right_value310=string_clone(self->v1))));
                                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            # 5 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional319=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional319) {
                                # 5 "tuple2$2charphsTypephp_clone"
                                __dec_obj101=result_231->v2;
                                result_231->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(self->v2))));
                                come_call_finalizer2(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            __result168__ = __result_obj__ = result_231;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_231, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result168__;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void init_module(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
void* right_value316;
char* project_name_232;
void* right_value317;
void* right_value318;
void* right_value319;
char* project_name_debug_233;
void* right_value320;
char* cc_234;
void* right_value321;
char* install_235;
void* right_value322;
char* libs_236;
void* right_value323;
char* os_237;
void* right_value324;
char* prefix_238;
void* right_value325;
char* cflags_239;
void* right_value326;
char* cflags_debug_240;
_Bool _or_conditional1;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
void* right_value331;
void* right_value332;
void* right_value333;
void* right_value334;
void* right_value335;
void* right_value336;
void* right_value337;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
void* right_value344;
void* right_value345;
void* right_value346;
void* right_value347;
void* right_value348;
void* right_value349;
void* right_value350;
void* right_value351;
void* right_value352;
void* right_value353;
void* right_value354;
void* right_value355;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value316 = (void*)0;
memset(&project_name_232, 0, sizeof(char*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&project_name_debug_233, 0, sizeof(char*));
right_value320 = (void*)0;
memset(&cc_234, 0, sizeof(char*));
right_value321 = (void*)0;
memset(&install_235, 0, sizeof(char*));
right_value322 = (void*)0;
memset(&libs_236, 0, sizeof(char*));
right_value323 = (void*)0;
memset(&os_237, 0, sizeof(char*));
right_value324 = (void*)0;
memset(&prefix_238, 0, sizeof(char*));
right_value325 = (void*)0;
memset(&cflags_239, 0, sizeof(char*));
right_value326 = (void*)0;
memset(&cflags_debug_240, 0, sizeof(char*));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
    # 489 "02transpile.c"
    project_name_232=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(argv[2]))));
    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 490 "02transpile.c"
    project_name_debug_233=(char*)come_increment_ref_count(((char*)(right_value319=string_operator_add(((char*)(right_value317=__builtin_string(argv[2]))),((char*)(right_value318=__builtin_string("-debug")))))));
    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 491 "02transpile.c"
    cc_234=(char*)come_increment_ref_count(((char*)(right_value320=__builtin_string("comelang2"))));
    right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 492 "02transpile.c"
    install_235=(char*)come_increment_ref_count(((char*)(right_value321=__builtin_string("install"))));
    right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 493 "02transpile.c"
    libs_236=(char*)come_increment_ref_count(((char*)(right_value322=__builtin_string("-lpcre"))));
    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 494 "02transpile.c"
    os_237=(char*)come_increment_ref_count(((char*)(right_value323=__builtin_string("linux"))));
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 495 "02transpile.c"
    prefix_238=(char*)come_increment_ref_count(((char*)(right_value324=__builtin_string("/usr/local/"))));
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 496 "02transpile.c"
    cflags_239=(char*)come_increment_ref_count(((char*)(right_value325=__builtin_string(" -common-header -O2 "))));
    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 497 "02transpile.c"
    cflags_debug_240=(char*)come_increment_ref_count(((char*)(right_value326=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 499 "02transpile.c"
    if(_or_conditional1=mkdir(project_name_232,448|56|4|1),    _or_conditional1 != 0) {
        # 499 "02transpile.c"
        die("mkdir error");
    }
    # 592 "02transpile.c"
    charp_write(((char*)(right_value353=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: common.h \%s\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c header\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c header\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader:\n\tcomelang2 header -common-header $(SINGLE_SRCS)\n\ncommon.h: *.c\n\tbash -c 'shopt -s extglob; comelang2 header !(*.c).c'\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(right_value327=string_to_string(prefix_238))),((char*)(right_value328=string_to_string(project_name_232))),((char*)(right_value329=string_to_string(project_name_232))),((char*)(right_value330=string_to_string(project_name_232))),((char*)(right_value331=string_to_string(project_name_232))),((char*)(right_value332=string_to_string(cc_234))),((char*)(right_value333=string_to_string(install_235))),((char*)(right_value334=string_to_string(cflags_239))),((char*)(right_value335=string_to_string(cflags_debug_240))),((char*)(right_value336=string_to_string(libs_236))),((char*)(right_value337=string_to_string(os_237))),((char*)(right_value338=string_to_string(prefix_238))),((char*)(right_value339=string_to_string(project_name_232))),((char*)(right_value340=string_to_string(project_name_debug_233))),((char*)(right_value341=string_to_string(project_name_232))),((char*)(right_value342=string_to_string(project_name_232))),((char*)(right_value343=string_to_string(project_name_232))),((char*)(right_value344=string_to_string(project_name_232))),((char*)(right_value345=string_to_string(project_name_232))),((char*)(right_value346=string_to_string(project_name_debug_233))),((char*)(right_value347=string_to_string(project_name_232))),((char*)(right_value348=string_to_string(project_name_232))),((char*)(right_value349=string_to_string(project_name_232))),((char*)(right_value350=string_to_string(project_name_232))),((char*)(right_value351=string_to_string(project_name_debug_233))),((char*)(right_value352=string_to_string(project_name_debug_233)))))),((char*)(right_value355=xsprintf("\%s/Makefile",((char*)(right_value354=string_to_string(project_name_232)))))),(_Bool)0);
    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 594 "02transpile.c"
    __result171__ = (_Bool)1;
    project_name_232 = come_decrement_ref_count2(project_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_233 = come_decrement_ref_count2(project_name_debug_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_234 = come_decrement_ref_count2(cc_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_235 = come_decrement_ref_count2(install_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_236 = come_decrement_ref_count2(libs_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_237 = come_decrement_ref_count2(os_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_238 = come_decrement_ref_count2(prefix_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_239 = come_decrement_ref_count2(cflags_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_240 = come_decrement_ref_count2(cflags_debug_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result171__;
    project_name_232 = come_decrement_ref_count2(project_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_233 = come_decrement_ref_count2(project_name_debug_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_234 = come_decrement_ref_count2(cc_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_235 = come_decrement_ref_count2(install_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_236 = come_decrement_ref_count2(libs_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_237 = come_decrement_ref_count2(os_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_238 = come_decrement_ref_count2(prefix_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_239 = come_decrement_ref_count2(cflags_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_240 = come_decrement_ref_count2(cflags_debug_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional2;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    # 599 "02transpile.c"
    if(_or_conditional2=system("make run"),    _or_conditional2 != 0) {
        # 599 "02transpile.c"
        die("system");
    }
    # 601 "02transpile.c"
    __result172__ = (_Bool)1;
    return __result172__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional3;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    # 606 "02transpile.c"
    if(_or_conditional3=system("make debug"),    _or_conditional3 != 0) {
        # 606 "02transpile.c"
        die("system");
    }
    # 608 "02transpile.c"
    __result173__ = (_Bool)1;
    return __result173__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional4;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    # 613 "02transpile.c"
    if(_or_conditional4=system("make clean"),    _or_conditional4 != 0) {
        # 613 "02transpile.c"
        die("system");
    }
    # 615 "02transpile.c"
    __result174__ = (_Bool)1;
    return __result174__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
void* right_value356;
void* right_value357;
_Bool _or_conditional5;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value356 = (void*)0;
right_value357 = (void*)0;
    # 620 "02transpile.c"
    if(_or_conditional5=system(((char*)(right_value357=xsprintf("make install DESTDIR=\%s",((char*)(right_value356=charp_to_string(prefix))))))),    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _or_conditional5 != 0) {
        # 620 "02transpile.c"
        die("system");
    }
    # 622 "02transpile.c"
    __result175__ = (_Bool)1;
    return __result175__;
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool _if_conditional323;
void* right_value358;
void* right_value359;
struct buffer* clang_option_241;
void* right_value360;
void* right_value361;
struct buffer* cpp_option_242;
void* right_value362;
void* right_value363;
struct list$1charph* files_243;
void* right_value364;
void* right_value365;
struct list$1charph* object_files_244;
_Bool output_object_file_245;
_Bool output_cpp_file_246;
_Bool output_source_file_flag_247;
void* right_value366;
char* output_file_name_248;
_Bool verbose_249;
_Bool prohibit_common_header_250;
_Bool come_debug_251;
_Bool come_malloc_252;
_Bool come_str_253;
int i_254;
_Bool _if_conditional324;
void* right_value367;
char* __dec_obj104;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
void* right_value368;
_Bool _if_conditional332;
void* right_value369;
void* right_value370;
void* right_value371;
_Bool _if_conditional333;
void* right_value372;
void* right_value373;
void* right_value374;
void* right_value375;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value376;
void* right_value377;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
void* right_value378;
_Bool _if_conditional341;
void* right_value379;
void* right_value380;
_Bool _if_conditional342;
_Bool _if_conditional343;
struct _IO_FILE* f_255;
_Bool _and_conditional1;
_Bool _or_conditional6;
void* right_value381;
char* tmp_file_256;
void* right_value385;
void* right_value386;
void* right_value387;
void* right_value388;
struct sInfo info_260;
void* right_value389;
char* __dec_obj105;
void* right_value390;
char* __dec_obj106;
void* right_value391;
char* __dec_obj107;
void* right_value392;
char* __dec_obj108;
void* right_value393;
void* right_value399;
struct map$2charphsFunph* __dec_obj110;
void* right_value400;
void* right_value406;
struct map$2charphsGenericsFunph* __dec_obj112;
void* right_value407;
void* right_value413;
struct map$2charphsClassph* __dec_obj114;
void* right_value414;
void* right_value420;
struct map$2charphsTypeph* __dec_obj116;
void* right_value421;
void* right_value422;
struct sModule* __dec_obj117;
void* right_value423;
void* right_value424;
struct list$1sRightValueObjectph* __dec_obj118;
void* right_value425;
void* right_value426;
struct list$1CVALUEph* __dec_obj119;
void* right_value427;
void* right_value428;
struct sVarTable* __dec_obj120;
void* right_value429;
void* right_value430;
struct sVarTable* lv_table_277;
void* right_value431;
void* right_value432;
struct list$1charph* __dec_obj121;
void* right_value433;
void* right_value434;
struct list$1charph* __dec_obj122;
void* right_value435;
void* right_value436;
struct map$2charphsClassph* __dec_obj123;
static int n_278=0;
void* right_value437;
char* __dec_obj124;
_Bool _if_conditional383;
void* right_value438;
void* right_value439;
void* right_value440;
struct buffer* __dec_obj125;
void* right_value441;
void* right_value442;
void* right_value443;
struct buffer* __dec_obj126;
_Bool _if_conditional384;
_Bool _if_conditional385;
void* right_value444;
void* right_value445;
_Bool _if_conditional412;
_Bool _if_conditional413;
int __result185__;
_Bool _if_conditional414;
_Bool _if_conditional415;
int __result186__;
_Bool _if_conditional416;
_Bool _if_conditional417;
int __result187__;
_Bool _if_conditional418;
_Bool _if_conditional419;
int __result188__;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool _if_conditional422;
int __result189__;
_Bool _if_conditional423;
_Bool _if_conditional424;
int __result190__;
void* right_value446;
void* right_value447;
struct buffer* clang_option_279;
void* right_value448;
void* right_value449;
struct buffer* cpp_option_280;
void* right_value450;
void* right_value451;
struct list$1charph* files_281;
void* right_value452;
void* right_value453;
struct list$1charph* object_files_282;
_Bool output_object_file_283;
_Bool output_cpp_file_284;
_Bool output_source_file_flag_285;
char* output_file_name_286;
_Bool verbose_287;
_Bool come_debug_288;
_Bool come_malloc_289;
_Bool come_str_290;
int i_291;
_Bool _if_conditional425;
void* right_value454;
char* __dec_obj127;
_Bool _if_conditional426;
_Bool _if_conditional427;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
void* right_value455;
_Bool _if_conditional432;
void* right_value456;
void* right_value457;
void* right_value458;
_Bool _if_conditional433;
void* right_value459;
void* right_value460;
void* right_value461;
void* right_value462;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
void* right_value463;
void* right_value464;
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional441;
void* right_value465;
_Bool _if_conditional442;
void* right_value466;
void* right_value467;
void* right_value468;
_Bool _if_conditional443;
_Bool _if_conditional444;
struct list$1charph* o2_saved_292;
char* it_293;
struct sInfo info_294;
void* right_value469;
char* __dec_obj128;
void* right_value470;
char* __dec_obj129;
void* right_value471;
char* __dec_obj130;
void* right_value472;
void* right_value473;
struct map$2charphsFunph* __dec_obj131;
void* right_value474;
void* right_value475;
struct map$2charphsGenericsFunph* __dec_obj132;
void* right_value476;
void* right_value477;
struct map$2charphsClassph* __dec_obj133;
void* right_value478;
void* right_value479;
struct map$2charphsTypeph* __dec_obj134;
void* right_value480;
void* right_value481;
struct sModule* __dec_obj135;
void* right_value482;
void* right_value483;
struct list$1sRightValueObjectph* __dec_obj136;
void* right_value484;
void* right_value485;
struct list$1CVALUEph* __dec_obj137;
void* right_value486;
void* right_value487;
struct sVarTable* __dec_obj138;
void* right_value488;
void* right_value489;
struct sVarTable* lv_table_295;
void* right_value490;
void* right_value491;
struct list$1charph* __dec_obj139;
void* right_value492;
void* right_value493;
struct list$1charph* __dec_obj140;
void* right_value494;
void* right_value495;
struct map$2charphsClassph* __dec_obj141;
_Bool _if_conditional445;
void* right_value496;
void* right_value497;
void* right_value498;
struct buffer* __dec_obj142;
void* right_value499;
void* right_value500;
void* right_value501;
struct buffer* __dec_obj143;
_Bool _if_conditional446;
void* right_value502;
char* __dec_obj144;
char* __dec_obj145;
_Bool _if_conditional447;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
struct sInfo info_296;
void* right_value503;
char* __dec_obj146;
void* right_value504;
char* __dec_obj147;
_Bool _if_conditional454;
void* right_value505;
char* __dec_obj148;
char* __dec_obj149;
struct __current_stack2__ __current_stack2__;
int __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value358 = (void*)0;
right_value359 = (void*)0;
memset(&clang_option_241, 0, sizeof(struct buffer*));
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&cpp_option_242, 0, sizeof(struct buffer*));
right_value362 = (void*)0;
right_value363 = (void*)0;
memset(&files_243, 0, sizeof(struct list$1charph*));
right_value364 = (void*)0;
right_value365 = (void*)0;
memset(&object_files_244, 0, sizeof(struct list$1charph*));
memset(&output_object_file_245, 0, sizeof(_Bool));
memset(&output_cpp_file_246, 0, sizeof(_Bool));
memset(&output_source_file_flag_247, 0, sizeof(_Bool));
right_value366 = (void*)0;
memset(&output_file_name_248, 0, sizeof(char*));
memset(&verbose_249, 0, sizeof(_Bool));
memset(&prohibit_common_header_250, 0, sizeof(_Bool));
memset(&come_debug_251, 0, sizeof(_Bool));
memset(&come_malloc_252, 0, sizeof(_Bool));
memset(&come_str_253, 0, sizeof(_Bool));
memset(&i_254, 0, sizeof(int));
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
memset(&f_255, 0, sizeof(struct _IO_FILE*));
right_value381 = (void*)0;
memset(&tmp_file_256, 0, sizeof(char*));
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
memset(&info_260, 0, sizeof(struct sInfo));
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&lv_table_277, 0, sizeof(struct sVarTable*));
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
memset(&clang_option_279, 0, sizeof(struct buffer*));
right_value448 = (void*)0;
right_value449 = (void*)0;
memset(&cpp_option_280, 0, sizeof(struct buffer*));
right_value450 = (void*)0;
right_value451 = (void*)0;
memset(&files_281, 0, sizeof(struct list$1charph*));
right_value452 = (void*)0;
right_value453 = (void*)0;
memset(&object_files_282, 0, sizeof(struct list$1charph*));
memset(&output_object_file_283, 0, sizeof(_Bool));
memset(&output_cpp_file_284, 0, sizeof(_Bool));
memset(&output_source_file_flag_285, 0, sizeof(_Bool));
memset(&output_file_name_286, 0, sizeof(char*));
memset(&verbose_287, 0, sizeof(_Bool));
memset(&come_debug_288, 0, sizeof(_Bool));
memset(&come_malloc_289, 0, sizeof(_Bool));
memset(&come_str_290, 0, sizeof(_Bool));
memset(&i_291, 0, sizeof(int));
right_value454 = (void*)0;
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
right_value467 = (void*)0;
right_value468 = (void*)0;
memset(&o2_saved_292, 0, sizeof(struct list$1charph*));
memset(&it_293, 0, sizeof(char*));
memset(&info_294, 0, sizeof(struct sInfo));
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value476 = (void*)0;
right_value477 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value489 = (void*)0;
memset(&lv_table_295, 0, sizeof(struct sVarTable*));
right_value490 = (void*)0;
right_value491 = (void*)0;
right_value492 = (void*)0;
right_value493 = (void*)0;
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value496 = (void*)0;
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
right_value502 = (void*)0;
memset(&info_296, 0, sizeof(struct sInfo));
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value505 = (void*)0;
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    # 1016 "02transpile.c"
    # 627 "02transpile.c"
    if(_if_conditional323=charp_operator_equals(argv[1],"header")&&argc>=3,    _if_conditional323) {
        # 628 "02transpile.c"
        gProgramName=argv[0];
        # 630 "02transpile.c"
        clang_option_241=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value359=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value358=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 630, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 631 "02transpile.c"
        cpp_option_242=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value361=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value360=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 631, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 632 "02transpile.c"
        files_243=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value363=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value362=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 632, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 633 "02transpile.c"
        object_files_244=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value365=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value364=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 633, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 634 "02transpile.c"
        output_object_file_245=(_Bool)0;
        # 635 "02transpile.c"
        output_cpp_file_246=(_Bool)0;
        # 636 "02transpile.c"
        output_source_file_flag_247=(_Bool)0;
        # 637 "02transpile.c"
        output_file_name_248=(char*)come_increment_ref_count(((char*)(right_value366=__builtin_string("common.h"))));
        right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 638 "02transpile.c"
        verbose_249=(_Bool)0;
        # 639 "02transpile.c"
        prohibit_common_header_250=(_Bool)0;
        # 640 "02transpile.c"
        come_debug_251=(_Bool)0;
        # 641 "02transpile.c"
        come_malloc_252=(_Bool)0;
        # 642 "02transpile.c"
        come_str_253=(_Bool)0;
        # 708 "02transpile.c"
        for(        i_254=2;        i_254<argc;        i_254++        ){
            # 706 "02transpile.c"
            # 644 "02transpile.c"
            if(_if_conditional324=charp_operator_equals(argv[i_254],"-o")&&i_254+1<argc,            _if_conditional324) {
                # 645 "02transpile.c"
                __dec_obj104=output_file_name_248;
                output_file_name_248=(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string(argv[i_254+1]))));
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 646 "02transpile.c"
                i_254++;
            }
            else {
                # 706 "02transpile.c"
                # 648 "02transpile.c"
                if(_if_conditional325=charp_operator_equals(argv[i_254],"-str"),                _if_conditional325) {
                    # 649 "02transpile.c"
                    come_str_253=(_Bool)1;
                }
                else {
                    # 706 "02transpile.c"
                    # 651 "02transpile.c"
                    if(_if_conditional326=charp_operator_equals(argv[i_254],"-leak"),                    _if_conditional326) {
                        # 652 "02transpile.c"
                        come_malloc_252=(_Bool)1;
                    }
                    else {
                        # 706 "02transpile.c"
                        # 654 "02transpile.c"
                        if(_if_conditional327=charp_operator_equals(argv[i_254],"-gc"),                        _if_conditional327) {
                            # 655 "02transpile.c"
                            gComeGC=(_Bool)1;
                        }
                        else {
                            # 706 "02transpile.c"
                            # 657 "02transpile.c"
                            if(_if_conditional328=charp_operator_equals(argv[i_254],"-g"),                            _if_conditional328) {
                                # 658 "02transpile.c"
                                buffer_append_str(clang_option_241,"-g ");
                            }
                            else {
                                # 706 "02transpile.c"
                                # 660 "02transpile.c"
                                if(_if_conditional329=charp_operator_equals(argv[i_254],"-cg"),                                _if_conditional329) {
                                    # 661 "02transpile.c"
                                    buffer_append_str(clang_option_241,"-g ");
                                    # 662 "02transpile.c"
                                    come_debug_251=(_Bool)1;
                                }
                                else {
                                    # 706 "02transpile.c"
                                    # 664 "02transpile.c"
                                    if(_if_conditional330=charp_operator_equals(argv[i_254],"-common-header"),                                    _if_conditional330) {
                                        # 665 "02transpile.c"
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        # 706 "02transpile.c"
                                        # 667 "02transpile.c"
                                        if(_if_conditional331=charp_operator_equals(argv[i_254],"-original-position"),                                        _if_conditional331) {
                                            # 668 "02transpile.c"
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            # 706 "02transpile.c"
                                            # 670 "02transpile.c"
                                            if(_if_conditional332=string_operator_equals(((char*)(right_value368=charp_operator_load_range_element(argv[i_254],0,2))),"-O"),                                            right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                            _if_conditional332) {
                                                # 671 "02transpile.c"
                                                buffer_append_str(clang_option_241,((char*)(right_value370=xsprintf(" \%s ",((char*)(right_value369=charp_to_string(argv[i_254])))))));
                                                right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 672 "02transpile.c"
                                                come_debug_251=(_Bool)0;
                                            }
                                            else {
                                                # 706 "02transpile.c"
                                                # 674 "02transpile.c"
                                                if(_if_conditional333=string_operator_equals(((char*)(right_value371=charp_operator_load_range_element(argv[i_254],0,2))),"-D"),                                                right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                _if_conditional333) {
                                                    # 675 "02transpile.c"
                                                    buffer_append_str(cpp_option_242,((char*)(right_value373=xsprintf(" \%s ",((char*)(right_value372=charp_to_string(argv[i_254])))))));
                                                    right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 676 "02transpile.c"
                                                    buffer_append_str(clang_option_241,((char*)(right_value375=xsprintf(" \%s ",((char*)(right_value374=charp_to_string(argv[i_254])))))));
                                                    right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 706 "02transpile.c"
                                                    # 678 "02transpile.c"
                                                    if(_if_conditional334=charp_operator_equals(argv[i_254],"-v"),                                                    _if_conditional334) {
                                                        # 679 "02transpile.c"
                                                        buffer_append_str(clang_option_241,"-v ");
                                                        # 680 "02transpile.c"
                                                        verbose_249=(_Bool)1;
                                                    }
                                                    else {
                                                        # 706 "02transpile.c"
                                                        # 682 "02transpile.c"
                                                        if(_if_conditional335=strlen(argv[i_254])>=2&&memcmp(argv[i_254],"-I",strlen("-I"))==0,                                                        _if_conditional335) {
                                                            # 683 "02transpile.c"
                                                            buffer_append_str(cpp_option_242,((char*)(right_value377=charp_operator_add(" ",((char*)(right_value376=charp_operator_add(argv[i_254]," ")))))));
                                                            right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            # 706 "02transpile.c"
                                                            # 685 "02transpile.c"
                                                            if(_if_conditional336=charp_operator_equals(argv[i_254],"-gdwarf-4"),                                                            _if_conditional336) {
                                                                # 686 "02transpile.c"
                                                                buffer_append_str(clang_option_241,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                # 706 "02transpile.c"
                                                                # 688 "02transpile.c"
                                                                if(_if_conditional337=charp_operator_equals(argv[i_254],"-s")||charp_operator_equals(argv[i_254],"-S"),                                                                _if_conditional337) {
                                                                    # 689 "02transpile.c"
                                                                    output_source_file_flag_247=(_Bool)1;
                                                                }
                                                                else {
                                                                    # 706 "02transpile.c"
                                                                    # 691 "02transpile.c"
                                                                    if(_if_conditional338=charp_operator_equals(argv[i_254],"-c"),                                                                    _if_conditional338) {
                                                                        # 692 "02transpile.c"
                                                                        output_object_file_245=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        # 706 "02transpile.c"
                                                                        # 694 "02transpile.c"
                                                                        if(_if_conditional339=charp_operator_equals(argv[i_254],"-E"),                                                                        _if_conditional339) {
                                                                            # 695 "02transpile.c"
                                                                            output_cpp_file_246=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            # 706 "02transpile.c"
                                                                            # 697 "02transpile.c"
                                                                            if(_if_conditional340=argv[i_254][0]==45,                                                                            _if_conditional340) {
                                                                                # 698 "02transpile.c"
                                                                                buffer_append_str(clang_option_241,((char*)(right_value378=charp_operator_add(argv[i_254]," "))));
                                                                                right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 706 "02transpile.c"
                                                                                # 700 "02transpile.c"
                                                                                if(_if_conditional341=strlen(argv[i_254])>2&&memcmp(argv[i_254]+strlen(argv[i_254])-2,".o",2)==0,                                                                                _if_conditional341) {
                                                                                    # 701 "02transpile.c"
                                                                                    list$1charph_push_back(object_files_244,(char*)come_increment_ref_count(((char*)(right_value379=__builtin_string(argv[i_254])))));
                                                                                    right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    # 704 "02transpile.c"
                                                                                    list$1charph_push_back(files_243,(char*)come_increment_ref_count(((char*)(right_value380=__builtin_string(argv[i_254])))));
                                                                                    right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
        # 708 "02transpile.c"
        gComeDebug=come_debug_251;
        # 709 "02transpile.c"
        gComeMalloc=come_malloc_252;
        # 720 "02transpile.c"
        # 711 "02transpile.c"
        if(come_str_253) {
            # 718 "02transpile.c"
            # 712 "02transpile.c"
            if(gComeGC) {
                # 713 "02transpile.c"
                buffer_append_str(clang_option_241," -lcomelang2-str-gc -lpcre ");
            }
            else {
                # 716 "02transpile.c"
                buffer_append_str(clang_option_241," -lcomelang2-str -lpcre ");
            }
        }
        # 720 "02transpile.c"
        if(_and_conditional1=f_255=fopen(output_file_name_248,"w"),        _and_conditional1 == 0) {
            # 720 "02transpile.c"
            die("fopen");
        }
        # 721 "02transpile.c"
        fclose(f_255);
        # 723 "02transpile.c"
        if(_or_conditional6=truncate(output_file_name_248,0),        _or_conditional6 != 0) {
            # 723 "02transpile.c"
            die("truncate");
        }
        # 725 "02transpile.c"
        come_init_v5();
        # 727 "02transpile.c"
        tmp_file_256=(char*)come_increment_ref_count(((char*)(right_value381=__builtin_string("tmp-common-header"))));
        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 729 "02transpile.c"
        system(((char*)(right_value388=xsprintf("cat \%s > \%s",((char*)(right_value386=string_to_string(((char*)(right_value385=list$1charph_join(files_243," ")))))),((char*)(right_value387=string_to_string(tmp_file_256)))))));
        right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 731 "02transpile.c"
        # 733 "02transpile.c"
        memset(&info_260,0,sizeof(struct sInfo));
        # 735 "02transpile.c"
        __dec_obj105=info_260.base_sname;
        info_260.base_sname=(char*)come_increment_ref_count(((char*)(right_value389=__builtin_string(tmp_file_256))));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 736 "02transpile.c"
        __dec_obj106=info_260.sname;
        info_260.sname=(char*)come_increment_ref_count(((char*)(right_value390=__builtin_string(tmp_file_256))));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 737 "02transpile.c"
        info_260.sline=1;
        # 738 "02transpile.c"
        info_260.err_num=0;
        # 739 "02transpile.c"
        __dec_obj107=info_260.clang_option;
        info_260.clang_option=(char*)come_increment_ref_count(((char*)(right_value391=buffer_to_string(clang_option_241))));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 740 "02transpile.c"
        __dec_obj108=info_260.cpp_option;
        info_260.cpp_option=(char*)come_increment_ref_count(((char*)(right_value392=buffer_to_string(cpp_option_242))));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 741 "02transpile.c"
        info_260.no_output_err=(_Bool)0;
        # 742 "02transpile.c"
        __dec_obj110=info_260.funcs;
        info_260.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value399=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value393=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 742, "map$2charphsFunph"))))))));
        come_call_finalizer2(map$2charphsFunph_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphsFunphp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphsFunphp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 743 "02transpile.c"
        __dec_obj112=info_260.generics_funcs;
        info_260.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value406=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value400=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 743, "map$2charphsGenericsFunph"))))))));
        come_call_finalizer2(map$2charphsGenericsFunph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 744 "02transpile.c"
        __dec_obj114=info_260.classes;
        info_260.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value413=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value407=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 744, "map$2charphsClassph"))))))));
        come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphsClassphp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphsClassphp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 745 "02transpile.c"
        __dec_obj116=info_260.types;
        info_260.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value420=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value414=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 745, "map$2charphsTypeph"))))))));
        come_call_finalizer2(map$2charphsTypeph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphsTypephp_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphsTypephp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 746 "02transpile.c"
        __dec_obj117=info_260.module;
        info_260.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value422=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value421=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 746, "sModule"))))))));
        come_call_finalizer2(sModule_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sModule_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sModule_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 747 "02transpile.c"
        __dec_obj118=info_260.right_value_objects;
        info_260.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value424=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value423=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 747, "list$1sRightValueObjectph"))))))));
        come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 748 "02transpile.c"
        __dec_obj119=info_260.stack;
        info_260.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value426=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value425=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 748, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 749 "02transpile.c"
        __dec_obj120=info_260.gv_table;
        info_260.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value428=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value427=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 749, "sVarTable")))),(_Bool)1,((void*)0)))));
        come_call_finalizer2(sVarTable_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sVarTable_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sVarTable_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 750 "02transpile.c"
        lv_table_277=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value430=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value429=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 750, "sVarTable")))),(_Bool)0,((void*)0)))));
        come_call_finalizer2(sVarTable_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sVarTable_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 751 "02transpile.c"
        info_260.lv_table=lv_table_277;
        # 752 "02transpile.c"
        __dec_obj121=info_260.generics_type_names;
        info_260.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value432=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value431=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 752, "list$1charph"))))))));
        come_call_finalizer2(list$1charph_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 753 "02transpile.c"
        __dec_obj122=info_260.method_generics_type_names;
        info_260.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value434=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value433=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 753, "list$1charph"))))))));
        come_call_finalizer2(list$1charph_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 754 "02transpile.c"
        __dec_obj123=info_260.generics_classes;
        info_260.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value436=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value435=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 754, "map$2charphsClassph"))))))));
        come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphsClassphp_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphsClassphp_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 755 "02transpile.c"
        info_260.verbose=verbose_249;
        # 756 "02transpile.c"
        info_260.output_header_file=(_Bool)1;
        # 758 "02transpile.c"
        # 759 "02transpile.c"
        info_260.num_source_files=n_278++;
        # 760 "02transpile.c"
        info_260.max_source_files=list$1charph_length(files_243);
        # 762 "02transpile.c"
        __dec_obj124=info_260.output_file_name;
        info_260.output_file_name=(char*)come_increment_ref_count(((char*)(right_value437=__builtin_string(output_file_name_248))));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 764 "02transpile.c"
        init_classes(&info_260);
        # 765 "02transpile.c"
        init_module(&info_260);
        # 767 "02transpile.c"
        clear_tmp_file(&info_260);
        # 774 "02transpile.c"
        # 769 "02transpile.c"
        if(_if_conditional383=!cpp(&info_260),        _if_conditional383) {
            # 770 "02transpile.c"
            printf("%s %d: transpile failed\n",info_260.sname,info_260.sline);
            # 771 "02transpile.c"
            exit(2);
        }
        # 774 "02transpile.c"
        __dec_obj125=info_260.original_source;
        info_260.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value440=string_to_buffer(((char*)(right_value439=string_read(((char*)(right_value438=xsprintf("%s",tmp_file_256))))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 775 "02transpile.c"
        __dec_obj126=info_260.source;
        info_260.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value443=string_to_buffer(((char*)(right_value442=string_read(((char*)(right_value441=xsprintf("%s.i",tmp_file_256))))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 776 "02transpile.c"
        info_260.p=info_260.source->buf;
        # 777 "02transpile.c"
        info_260.head=info_260.source->buf;
        # 788 "02transpile.c"
        # 779 "02transpile.c"
        if(_if_conditional384=!output_cpp_file_246,        _if_conditional384) {
            # 780 "02transpile.c"
            transpile_v5(&info_260);
            # 786 "02transpile.c"
            # 782 "02transpile.c"
            if(_if_conditional385=!output_header_file(&info_260),            _if_conditional385) {
                # 783 "02transpile.c"
                printf("%s %d: output source file faield\n",info_260.sname,info_260.sline);
                # 784 "02transpile.c"
                exit(2);
            }
        }
        # 788 "02transpile.c"
        system(((char*)(right_value445=xsprintf("rm -rf \%s*",((char*)(right_value444=string_to_string(tmp_file_256)))))));
        right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 790 "02transpile.c"
        come_final_v5();
        come_call_finalizer2(buffer_finalize,clang_option_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,cpp_option_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,files_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,object_files_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        output_file_name_248 = come_decrement_ref_count2(output_file_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_256 = come_decrement_ref_count2(tmp_file_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sInfo_finalize,(&info_260), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
        come_call_finalizer2(sVarTable_finalize,lv_table_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1016 "02transpile.c"
        # 792 "02transpile.c"
        if(_if_conditional412=charp_operator_equals(argv[1],"new")&&argc==3,        _if_conditional412) {
            # 796 "02transpile.c"
            # 793 "02transpile.c"
            if(_if_conditional413=!new_project(argc,argv),            _if_conditional413) {
                # 794 "02transpile.c"
                __result185__ = (_Bool)0;
                return __result185__;
            }
        }
        else {
            # 1016 "02transpile.c"
            # 797 "02transpile.c"
            if(_if_conditional414=charp_operator_equals(argv[1],"run")&&argc==2,            _if_conditional414) {
                # 801 "02transpile.c"
                # 798 "02transpile.c"
                if(_if_conditional415=!run_project(argc,argv),                _if_conditional415) {
                    # 799 "02transpile.c"
                    __result186__ = (_Bool)0;
                    return __result186__;
                }
            }
            else {
                # 1016 "02transpile.c"
                # 802 "02transpile.c"
                if(_if_conditional416=charp_operator_equals(argv[1],"debug")&&argc==2,                _if_conditional416) {
                    # 806 "02transpile.c"
                    # 803 "02transpile.c"
                    if(_if_conditional417=!debug_run_project(argc,argv),                    _if_conditional417) {
                        # 804 "02transpile.c"
                        __result187__ = (_Bool)0;
                        return __result187__;
                    }
                }
                else {
                    # 1016 "02transpile.c"
                    # 807 "02transpile.c"
                    if(_if_conditional418=charp_operator_equals(argv[1],"clean")&&argc==2,                    _if_conditional418) {
                        # 811 "02transpile.c"
                        # 808 "02transpile.c"
                        if(_if_conditional419=!clean_project(argc,argv),                        _if_conditional419) {
                            # 809 "02transpile.c"
                            __result188__ = (_Bool)0;
                            return __result188__;
                        }
                    }
                    else {
                        # 1016 "02transpile.c"
                        # 812 "02transpile.c"
                        if(_if_conditional420=charp_operator_equals(argv[1],"install")&&argc>=2,                        _if_conditional420) {
                            # 823 "02transpile.c"
                            # 813 "02transpile.c"
                            if(_if_conditional421=argc==2,                            _if_conditional421) {
                                # 817 "02transpile.c"
                                # 814 "02transpile.c"
                                if(_if_conditional422=!install_project(argc,argv,"/usr/local"),                                _if_conditional422) {
                                    # 815 "02transpile.c"
                                    __result189__ = (_Bool)0;
                                    return __result189__;
                                }
                            }
                            else {
                                # 823 "02transpile.c"
                                # 818 "02transpile.c"
                                if(_if_conditional423=argc>=3,                                _if_conditional423) {
                                    # 822 "02transpile.c"
                                    # 819 "02transpile.c"
                                    if(_if_conditional424=!install_project(argc,argv,argv[2]),                                    _if_conditional424) {
                                        # 820 "02transpile.c"
                                        __result190__ = (_Bool)0;
                                        return __result190__;
                                    }
                                }
                            }
                        }
                        else {
                            # 825 "02transpile.c"
                            gProgramName=argv[0];
                            # 827 "02transpile.c"
                            clang_option_279=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value447=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value446=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 827, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 828 "02transpile.c"
                            cpp_option_280=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value449=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value448=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 828, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 829 "02transpile.c"
                            files_281=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value451=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value450=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 829, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 830 "02transpile.c"
                            object_files_282=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value453=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value452=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 830, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 831 "02transpile.c"
                            output_object_file_283=(_Bool)0;
                            # 832 "02transpile.c"
                            output_cpp_file_284=(_Bool)0;
                            # 833 "02transpile.c"
                            output_source_file_flag_285=(_Bool)0;
                            # 834 "02transpile.c"
                            output_file_name_286=((void*)0);
                            # 835 "02transpile.c"
                            verbose_287=(_Bool)0;
                            # 836 "02transpile.c"
                            come_debug_288=(_Bool)0;
                            # 837 "02transpile.c"
                            come_malloc_289=(_Bool)0;
                            # 838 "02transpile.c"
                            come_str_290=(_Bool)0;
                            # 904 "02transpile.c"
                            for(                            i_291=1;                            i_291<argc;                            i_291++                            ){
                                # 902 "02transpile.c"
                                # 840 "02transpile.c"
                                if(_if_conditional425=charp_operator_equals(argv[i_291],"-o")&&i_291+1<argc,                                _if_conditional425) {
                                    # 841 "02transpile.c"
                                    __dec_obj127=output_file_name_286;
                                    output_file_name_286=(char*)come_increment_ref_count(((char*)(right_value454=__builtin_string(argv[i_291+1]))));
                                    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value454 = come_decrement_ref_count2(right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 842 "02transpile.c"
                                    i_291++;
                                }
                                else {
                                    # 902 "02transpile.c"
                                    # 844 "02transpile.c"
                                    if(_if_conditional426=charp_operator_equals(argv[i_291],"-str"),                                    _if_conditional426) {
                                        # 845 "02transpile.c"
                                        come_str_290=(_Bool)1;
                                    }
                                    else {
                                        # 902 "02transpile.c"
                                        # 847 "02transpile.c"
                                        if(_if_conditional427=charp_operator_equals(argv[i_291],"-leak"),                                        _if_conditional427) {
                                            # 848 "02transpile.c"
                                            come_malloc_289=(_Bool)1;
                                        }
                                        else {
                                            # 902 "02transpile.c"
                                            # 850 "02transpile.c"
                                            if(_if_conditional428=charp_operator_equals(argv[i_291],"-gc"),                                            _if_conditional428) {
                                                # 851 "02transpile.c"
                                                gComeGC=(_Bool)1;
                                            }
                                            else {
                                                # 902 "02transpile.c"
                                                # 853 "02transpile.c"
                                                if(_if_conditional429=charp_operator_equals(argv[i_291],"-cg"),                                                _if_conditional429) {
                                                    # 854 "02transpile.c"
                                                    come_debug_288=(_Bool)1;
                                                    # 855 "02transpile.c"
                                                    buffer_append_str(clang_option_279,"-g ");
                                                }
                                                else {
                                                    # 902 "02transpile.c"
                                                    # 857 "02transpile.c"
                                                    if(_if_conditional430=charp_operator_equals(argv[i_291],"-common-header"),                                                    _if_conditional430) {
                                                        # 858 "02transpile.c"
                                                        gCommonHeader=(_Bool)1;
                                                    }
                                                    else {
                                                        # 902 "02transpile.c"
                                                        # 860 "02transpile.c"
                                                        if(_if_conditional431=charp_operator_equals(argv[i_291],"-original-position"),                                                        _if_conditional431) {
                                                            # 861 "02transpile.c"
                                                            gComeOriginalSourcePosition=(_Bool)0;
                                                        }
                                                        else {
                                                            # 902 "02transpile.c"
                                                            # 863 "02transpile.c"
                                                            if(_if_conditional432=string_operator_equals(((char*)(right_value455=charp_operator_load_range_element(argv[i_291],0,2))),"-O"),                                                            right_value455 = come_decrement_ref_count2(right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                            _if_conditional432) {
                                                                # 864 "02transpile.c"
                                                                buffer_append_str(clang_option_279,((char*)(right_value457=xsprintf(" \%s ",((char*)(right_value456=charp_to_string(argv[i_291])))))));
                                                                right_value456 = come_decrement_ref_count2(right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                right_value457 = come_decrement_ref_count2(right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 865 "02transpile.c"
                                                                come_debug_288=(_Bool)0;
                                                            }
                                                            else {
                                                                # 902 "02transpile.c"
                                                                # 867 "02transpile.c"
                                                                if(_if_conditional433=string_operator_equals(((char*)(right_value458=charp_operator_load_range_element(argv[i_291],0,2))),"-D"),                                                                right_value458 = come_decrement_ref_count2(right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                _if_conditional433) {
                                                                    # 868 "02transpile.c"
                                                                    buffer_append_str(cpp_option_280,((char*)(right_value460=xsprintf(" \%s ",((char*)(right_value459=charp_to_string(argv[i_291])))))));
                                                                    right_value459 = come_decrement_ref_count2(right_value459, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    right_value460 = come_decrement_ref_count2(right_value460, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 869 "02transpile.c"
                                                                    buffer_append_str(clang_option_279,((char*)(right_value462=xsprintf(" \%s ",((char*)(right_value461=charp_to_string(argv[i_291])))))));
                                                                    right_value461 = come_decrement_ref_count2(right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    right_value462 = come_decrement_ref_count2(right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    # 902 "02transpile.c"
                                                                    # 871 "02transpile.c"
                                                                    if(_if_conditional434=charp_operator_equals(argv[i_291],"-g"),                                                                    _if_conditional434) {
                                                                        # 872 "02transpile.c"
                                                                        buffer_append_str(clang_option_279,"-g ");
                                                                    }
                                                                    else {
                                                                        # 902 "02transpile.c"
                                                                        # 874 "02transpile.c"
                                                                        if(_if_conditional435=charp_operator_equals(argv[i_291],"-v"),                                                                        _if_conditional435) {
                                                                            # 875 "02transpile.c"
                                                                            buffer_append_str(clang_option_279,"-v ");
                                                                            # 876 "02transpile.c"
                                                                            verbose_287=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            # 902 "02transpile.c"
                                                                            # 878 "02transpile.c"
                                                                            if(_if_conditional436=strlen(argv[i_291])>=2&&memcmp(argv[i_291],"-I",strlen("-I"))==0,                                                                            _if_conditional436) {
                                                                                # 879 "02transpile.c"
                                                                                buffer_append_str(cpp_option_280,((char*)(right_value464=charp_operator_add(" ",((char*)(right_value463=charp_operator_add(argv[i_291]," ")))))));
                                                                                right_value463 = come_decrement_ref_count2(right_value463, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                right_value464 = come_decrement_ref_count2(right_value464, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 902 "02transpile.c"
                                                                                # 881 "02transpile.c"
                                                                                if(_if_conditional437=charp_operator_equals(argv[i_291],"-gdwarf-4"),                                                                                _if_conditional437) {
                                                                                    # 882 "02transpile.c"
                                                                                    buffer_append_str(clang_option_279,"-gdwarf-4 ");
                                                                                }
                                                                                else {
                                                                                    # 902 "02transpile.c"
                                                                                    # 884 "02transpile.c"
                                                                                    if(_if_conditional438=charp_operator_equals(argv[i_291],"-s")||charp_operator_equals(argv[i_291],"-S"),                                                                                    _if_conditional438) {
                                                                                        # 885 "02transpile.c"
                                                                                        output_source_file_flag_285=(_Bool)1;
                                                                                    }
                                                                                    else {
                                                                                        # 902 "02transpile.c"
                                                                                        # 887 "02transpile.c"
                                                                                        if(_if_conditional439=charp_operator_equals(argv[i_291],"-c"),                                                                                        _if_conditional439) {
                                                                                            # 888 "02transpile.c"
                                                                                            output_object_file_283=(_Bool)1;
                                                                                        }
                                                                                        else {
                                                                                            # 902 "02transpile.c"
                                                                                            # 890 "02transpile.c"
                                                                                            if(_if_conditional440=charp_operator_equals(argv[i_291],"-E"),                                                                                            _if_conditional440) {
                                                                                                # 891 "02transpile.c"
                                                                                                output_cpp_file_284=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                # 902 "02transpile.c"
                                                                                                # 893 "02transpile.c"
                                                                                                if(_if_conditional441=argv[i_291][0]==45,                                                                                                _if_conditional441) {
                                                                                                    # 894 "02transpile.c"
                                                                                                    buffer_append_str(clang_option_279,((char*)(right_value465=charp_operator_add(argv[i_291]," "))));
                                                                                                    right_value465 = come_decrement_ref_count2(right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                else {
                                                                                                    # 902 "02transpile.c"
                                                                                                    # 896 "02transpile.c"
                                                                                                    if(_if_conditional442=strlen(argv[i_291])>2&&memcmp(argv[i_291]+strlen(argv[i_291])-2,".o",2)==0,                                                                                                    _if_conditional442) {
                                                                                                        # 897 "02transpile.c"
                                                                                                        list$1charph_push_back(object_files_282,(char*)come_increment_ref_count(((char*)(right_value466=__builtin_string(argv[i_291])))));
                                                                                                        right_value466 = come_decrement_ref_count2(right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    else {
                                                                                                        # 900 "02transpile.c"
                                                                                                        list$1charph_push_back(files_281,(char*)come_increment_ref_count(((char*)(right_value468=string_clone(((char*)(right_value467=__builtin_string(argv[i_291]))))))));
                                                                                                        right_value467 = come_decrement_ref_count2(right_value467, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        right_value468 = come_decrement_ref_count2(right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                            # 904 "02transpile.c"
                            gComeDebug=come_debug_288;
                            # 905 "02transpile.c"
                            gComeMalloc=come_malloc_289;
                            # 916 "02transpile.c"
                            # 907 "02transpile.c"
                            if(come_str_290) {
                                # 914 "02transpile.c"
                                # 908 "02transpile.c"
                                if(gComeGC) {
                                    # 909 "02transpile.c"
                                    buffer_append_str(clang_option_279," -lcomelang2-str-gc -lpcre ");
                                }
                                else {
                                    # 912 "02transpile.c"
                                    buffer_append_str(clang_option_279," -lcomelang2-str -lpcre ");
                                }
                            }
                            # 916 "02transpile.c"
                            come_init_v5();
                            # 990 "02transpile.c"
                            for(                            o2_saved_292=(struct list$1charph*)come_increment_ref_count((files_281)),it_293=list$1charph_begin((o2_saved_292));                            !list$1charph_end((o2_saved_292));                            it_293=list$1charph_next((o2_saved_292))                            ){
                                # 919 "02transpile.c"
                                # 921 "02transpile.c"
                                memset(&info_294,0,sizeof(struct sInfo));
                                # 923 "02transpile.c"
                                __dec_obj128=info_294.sname;
                                info_294.sname=(char*)come_increment_ref_count(((char*)(right_value469=__builtin_string(it_293))));
                                __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value469 = come_decrement_ref_count2(right_value469, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 924 "02transpile.c"
                                info_294.sline=1;
                                # 925 "02transpile.c"
                                info_294.err_num=0;
                                # 926 "02transpile.c"
                                __dec_obj129=info_294.clang_option;
                                info_294.clang_option=(char*)come_increment_ref_count(((char*)(right_value470=buffer_to_string(clang_option_279))));
                                __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value470 = come_decrement_ref_count2(right_value470, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 927 "02transpile.c"
                                __dec_obj130=info_294.cpp_option;
                                info_294.cpp_option=(char*)come_increment_ref_count(((char*)(right_value471=buffer_to_string(cpp_option_280))));
                                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value471 = come_decrement_ref_count2(right_value471, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 928 "02transpile.c"
                                info_294.no_output_err=(_Bool)0;
                                # 929 "02transpile.c"
                                __dec_obj131=info_294.funcs;
                                info_294.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value473=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value472=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 929, "map$2charphsFunph"))))))));
                                come_call_finalizer2(map$2charphsFunph_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsFunphp_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsFunphp_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 930 "02transpile.c"
                                __dec_obj132=info_294.generics_funcs;
                                info_294.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value475=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value474=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 930, "map$2charphsGenericsFunph"))))))));
                                come_call_finalizer2(map$2charphsGenericsFunph_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 931 "02transpile.c"
                                __dec_obj133=info_294.classes;
                                info_294.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value477=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value476=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 931, "map$2charphsClassph"))))))));
                                come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 932 "02transpile.c"
                                __dec_obj134=info_294.types;
                                info_294.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value479=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value478=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 932, "map$2charphsTypeph"))))))));
                                come_call_finalizer2(map$2charphsTypeph_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsTypephp_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsTypephp_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 933 "02transpile.c"
                                __dec_obj135=info_294.module;
                                info_294.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value481=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value480=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 933, "sModule"))))))));
                                come_call_finalizer2(sModule_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sModule_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sModule_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 934 "02transpile.c"
                                __dec_obj136=info_294.right_value_objects;
                                info_294.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value483=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value482=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 934, "list$1sRightValueObjectph"))))))));
                                come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 935 "02transpile.c"
                                __dec_obj137=info_294.stack;
                                info_294.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value485=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value484=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 935, "list$1CVALUEph"))))))));
                                come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1CVALUEphp_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1CVALUEphp_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 936 "02transpile.c"
                                __dec_obj138=info_294.gv_table;
                                info_294.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value487=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value486=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 936, "sVarTable")))),(_Bool)1,((void*)0)))));
                                come_call_finalizer2(sVarTable_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sVarTable_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sVarTable_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 937 "02transpile.c"
                                lv_table_295=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value489=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value488=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 937, "sVarTable")))),(_Bool)0,((void*)0)))));
                                come_call_finalizer2(sVarTable_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sVarTable_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 938 "02transpile.c"
                                info_294.lv_table=lv_table_295;
                                # 939 "02transpile.c"
                                __dec_obj139=info_294.generics_type_names;
                                info_294.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value491=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value490=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 939, "list$1charph"))))))));
                                come_call_finalizer2(list$1charph_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1charphp_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1charphp_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 940 "02transpile.c"
                                __dec_obj140=info_294.method_generics_type_names;
                                info_294.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value493=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value492=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 940, "list$1charph"))))))));
                                come_call_finalizer2(list$1charph_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1charphp_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1charphp_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 941 "02transpile.c"
                                __dec_obj141=info_294.generics_classes;
                                info_294.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value495=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value494=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 941, "map$2charphsClassph"))))))));
                                come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 942 "02transpile.c"
                                info_294.verbose=verbose_287;
                                # 944 "02transpile.c"
                                init_classes(&info_294);
                                # 945 "02transpile.c"
                                init_module(&info_294);
                                # 947 "02transpile.c"
                                clear_tmp_file(&info_294);
                                # 954 "02transpile.c"
                                # 949 "02transpile.c"
                                if(_if_conditional445=!cpp(&info_294),                                _if_conditional445) {
                                    # 950 "02transpile.c"
                                    printf("%s %d: transpile failed\n",info_294.sname,info_294.sline);
                                    # 951 "02transpile.c"
                                    exit(2);
                                }
                                # 954 "02transpile.c"
                                __dec_obj142=info_294.original_source;
                                info_294.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value498=string_to_buffer(((char*)(right_value497=string_read(((char*)(right_value496=xsprintf("%s",it_293))))))))));
                                come_call_finalizer2(buffer_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                right_value496 = come_decrement_ref_count2(right_value496, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value497 = come_decrement_ref_count2(right_value497, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 955 "02transpile.c"
                                __dec_obj143=info_294.source;
                                info_294.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value501=string_to_buffer(((char*)(right_value500=string_read(((char*)(right_value499=xsprintf("%s.i",it_293))))))))));
                                come_call_finalizer2(buffer_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value500 = come_decrement_ref_count2(right_value500, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 956 "02transpile.c"
                                info_294.p=info_294.source->buf;
                                # 957 "02transpile.c"
                                info_294.head=info_294.source->buf;
                                # 966 "02transpile.c"
                                # 959 "02transpile.c"
                                if(output_file_name_286) {
                                    # 960 "02transpile.c"
                                    __dec_obj144=info_294.output_file_name;
                                    info_294.output_file_name=(char*)come_increment_ref_count(((char*)(right_value502=__builtin_string(output_file_name_286))));
                                    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value502 = come_decrement_ref_count2(right_value502, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 963 "02transpile.c"
                                    __dec_obj145=info_294.output_file_name;
                                    info_294.output_file_name=((void*)0);
                                    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                # 988 "02transpile.c"
                                # 966 "02transpile.c"
                                if(_if_conditional447=!output_cpp_file_284,                                _if_conditional447) {
                                    # 967 "02transpile.c"
                                    transpile_v5(&info_294);
                                    # 974 "02transpile.c"
                                    # 969 "02transpile.c"
                                    if(_if_conditional448=!output_source_file_v3(&info_294),                                    _if_conditional448) {
                                        # 970 "02transpile.c"
                                        printf("%s %d: output source file faield\n",info_294.sname,info_294.sline);
                                        # 971 "02transpile.c"
                                        exit(2);
                                    }
                                    # 987 "02transpile.c"
                                    # 974 "02transpile.c"
                                    if(_if_conditional449=info_294.err_num>0,                                    _if_conditional449) {
                                        # 975 "02transpile.c"
                                        printf("transpile error. err num %d\n",info_294.err_num);
                                        # 977 "02transpile.c"
                                        exit(2);
                                    }
                                    else {
                                        # 985 "02transpile.c"
                                        # 980 "02transpile.c"
                                        if(_if_conditional450=!compile(&info_294,output_object_file_283,object_files_282),                                        _if_conditional450) {
                                            # 981 "02transpile.c"
                                            printf("%s %d: compile faield\n",info_294.sname,info_294.sline);
                                            # 982 "02transpile.c"
                                            exit(27);
                                        }
                                    }
                                }
                                come_call_finalizer2(sInfo_finalize,(&info_294), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sVarTable_finalize,lv_table_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1charphp_finalize,o2_saved_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1012 "02transpile.c"
                            # 990 "02transpile.c"
                            if(_if_conditional451=!output_object_file_283&&!output_cpp_file_284&&(list$1charph_length(files_281)>0||list$1charph_length(object_files_282)>0),                            _if_conditional451) {
                                # 991 "02transpile.c"
                                # 993 "02transpile.c"
                                memset(&info_296,0,sizeof(struct sInfo));
                                # 995 "02transpile.c"
                                __dec_obj146=info_296.sname;
                                info_296.sname=(char*)come_increment_ref_count(((char*)(right_value503=string_clone(list$1charphp_operator_load_element(files_281,0)))));
                                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value503 = come_decrement_ref_count2(right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 996 "02transpile.c"
                                __dec_obj147=info_296.clang_option;
                                info_296.clang_option=(char*)come_increment_ref_count(((char*)(right_value504=buffer_to_string(clang_option_279))));
                                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value504 = come_decrement_ref_count2(right_value504, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 997 "02transpile.c"
                                info_296.verbose=verbose_287;
                                # 1006 "02transpile.c"
                                # 999 "02transpile.c"
                                if(output_file_name_286) {
                                    # 1000 "02transpile.c"
                                    __dec_obj148=info_296.output_file_name;
                                    info_296.output_file_name=(char*)come_increment_ref_count(((char*)(right_value505=__builtin_string(output_file_name_286))));
                                    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value505 = come_decrement_ref_count2(right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1003 "02transpile.c"
                                    __dec_obj149=info_296.output_file_name;
                                    info_296.output_file_name=((void*)0);
                                    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                # 1010 "02transpile.c"
                                __current_stack2__.info_296 = &info_296;
                                __current_stack2__.clang_option_279 = &clang_option_279;
                                __current_stack2__.cpp_option_280 = &cpp_option_280;
                                __current_stack2__.files_281 = &files_281;
                                __current_stack2__.object_files_282 = &object_files_282;
                                __current_stack2__.output_object_file_283 = &output_object_file_283;
                                __current_stack2__.output_cpp_file_284 = &output_cpp_file_284;
                                __current_stack2__.output_source_file_flag_285 = &output_source_file_flag_285;
                                __current_stack2__.output_file_name_286 = &output_file_name_286;
                                __current_stack2__.verbose_287 = &verbose_287;
                                __current_stack2__.come_debug_288 = &come_debug_288;
                                __current_stack2__.come_malloc_289 = &come_malloc_289;
                                __current_stack2__.come_str_290 = &come_str_290;
                                __current_stack2__.argc = &argc;
                                __current_stack2__.argv = &argv;
                                bool_expect(linker(&info_296,object_files_282),&__current_stack2__,(void*)method_block2_02transpilec);
                                                    if(__current_stack2__.__method_block_result_kind__ == 3)
                    {
                        return (int)__current_stack2__.__method_block_return_value__;
                    }
                                come_call_finalizer2(sInfo_finalize,(&info_296), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
                            }
                            # 1012 "02transpile.c"
                            come_final_v5();
                            come_call_finalizer2(buffer_finalize,clang_option_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,cpp_option_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,files_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,object_files_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            output_file_name_286 = come_decrement_ref_count2(output_file_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    # 1016 "02transpile.c"
    __result193__ = 0;
    return __result193__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__;
void* right_value382;
void* right_value383;
struct buffer* buf_257;
int n_258;
char* it_259;
_Bool _if_conditional345;
void* right_value384;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
right_value383 = (void*)0;
memset(&buf_257, 0, sizeof(struct buffer*));
memset(&n_258, 0, sizeof(int));
memset(&it_259, 0, sizeof(char*));
right_value384 = (void*)0;
            # 1047 "./comelang2.h"
            buf_257=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value383=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value382=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1047, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1049 "./comelang2.h"
            n_258=0;
            # 1060 "./comelang2.h"
            for(            it_259=list$1charph_begin(self);            !list$1charph_end(self);            it_259=list$1charph_next(self)            ){
                # 1051 "./comelang2.h"
                buffer_append_str(buf_257,it_259);
                # 1057 "./comelang2.h"
                # 1053 "./comelang2.h"
                if(_if_conditional345=n_258<list$1charph_length(self)-1,                _if_conditional345) {
                    # 1054 "./comelang2.h"
                    buffer_append_str(buf_257,sep);
                }
                # 1057 "./comelang2.h"
                n_258++;
            }
            # 1060 "./comelang2.h"
            __result178__ = __result_obj__ = ((char*)(right_value384=buffer_to_string(buf_257)));
            come_call_finalizer2(buffer_finalize,buf_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result178__;
            come_call_finalizer2(buffer_finalize,buf_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional344;
int __result176__;
int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 367 "./comelang2.h"
                    # 364 "./comelang2.h"
                    if(_if_conditional344=self==((void*)0),                    _if_conditional344) {
                        # 365 "./comelang2.h"
                        __result176__ = 0;
                        return __result176__;
                    }
                    # 367 "./comelang2.h"
                    __result177__ = self->len;
                    return __result177__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
void* right_value394;
void* right_value395;
void* right_value396;
int i_261;
void* right_value397;
void* right_value398;
struct list$1charp* __dec_obj109;
struct map$2charphsFunph* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
memset(&i_261, 0, sizeof(int));
right_value397 = (void*)0;
right_value398 = (void*)0;
            # 1087 "./comelang2.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value394=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1087, "char*%"))));
            right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1088 "./comelang2.h"
            self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value395=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(1024)), "./comelang2.h", 1088, "sFun*%"))));
            come_call_finalizer2(sFun_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1089 "./comelang2.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value396=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1089, "bool"))));
            right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1096 "./comelang2.h"
            for(            i_261=0;            i_261<1024;            i_261++            ){
                # 1093 "./comelang2.h"
                self->item_existance[i_261]=(_Bool)0;
            }
            # 1096 "./comelang2.h"
            self->size=1024;
            # 1097 "./comelang2.h"
            self->len=0;
            # 1099 "./comelang2.h"
            __dec_obj109=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value398=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value397=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1099, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1101 "./comelang2.h"
            self->it=0;
            # 1103 "./comelang2.h"
            __result179__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result179__;
            come_call_finalizer2(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_262;
_Bool _if_conditional346;
_Bool _if_conditional347;
int i_263;
_Bool _if_conditional348;
_Bool _if_conditional349;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_262, 0, sizeof(int));
memset(&i_263, 0, sizeof(int));
                # 1137 "./comelang2.h"
                for(                i_262=0;                i_262<self->size;                i_262++                ){
                    # 1136 "./comelang2.h"
                    # 1131 "./comelang2.h"
                    if(_if_conditional346=self->item_existance[i_262],                    _if_conditional346) {
                        # 1135 "./comelang2.h"
                        # 1132 "./comelang2.h"
                        if(_if_conditional347=1,                        _if_conditional347) {
                            # 1133 "./comelang2.h"
                            come_call_finalizer2(sFun_finalize,self->items[i_262], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1137 "./comelang2.h"
                come_free((char*)self->items);
                # 1146 "./comelang2.h"
                for(                i_263=0;                i_263<self->size;                i_263++                ){
                    # 1145 "./comelang2.h"
                    # 1140 "./comelang2.h"
                    if(_if_conditional348=self->item_existance[i_263],                    _if_conditional348) {
                        # 1144 "./comelang2.h"
                        # 1141 "./comelang2.h"
                        if(_if_conditional349=1,                        _if_conditional349) {
                            # 1142 "./comelang2.h"
                            self->keys[i_263] = come_decrement_ref_count2(self->keys[i_263], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1146 "./comelang2.h"
                come_free((char*)self->keys);
                # 1148 "./comelang2.h"
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1150 "./comelang2.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "map$2charphsFunph_finalize"
            # 0 "map$2charphsFunph_finalize"
            if(_if_conditional350=self!=((void*)0)&&self->key_list!=((void*)0),            _if_conditional350) {
                # 0 "map$2charphsFunph_finalize"
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* right_value401;
void* right_value402;
void* right_value403;
int i_264;
void* right_value404;
void* right_value405;
struct list$1charp* __dec_obj111;
struct map$2charphsGenericsFunph* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&i_264, 0, sizeof(int));
right_value404 = (void*)0;
right_value405 = (void*)0;
            # 1087 "./comelang2.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value401=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1087, "char*%"))));
            right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1088 "./comelang2.h"
            self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value402=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(1024)), "./comelang2.h", 1088, "sGenericsFun*%"))));
            come_call_finalizer2(sGenericsFun_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1089 "./comelang2.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value403=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1089, "bool"))));
            right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1096 "./comelang2.h"
            for(            i_264=0;            i_264<1024;            i_264++            ){
                # 1093 "./comelang2.h"
                self->item_existance[i_264]=(_Bool)0;
            }
            # 1096 "./comelang2.h"
            self->size=1024;
            # 1097 "./comelang2.h"
            self->len=0;
            # 1099 "./comelang2.h"
            __dec_obj111=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value405=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value404=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1099, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1101 "./comelang2.h"
            self->it=0;
            # 1103 "./comelang2.h"
            __result180__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result180__;
            come_call_finalizer2(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sGenericsFun_finalize"
                # 0 "sGenericsFun_finalize"
                if(_if_conditional351=self!=((void*)0)&&self->mImplType!=((void*)0),                _if_conditional351) {
                    # 0 "sGenericsFun_finalize"
                    come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sGenericsFun_finalize"
                # 1 "sGenericsFun_finalize"
                if(_if_conditional352=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                _if_conditional352) {
                    # 1 "sGenericsFun_finalize"
                    come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sGenericsFun_finalize"
                # 2 "sGenericsFun_finalize"
                if(_if_conditional353=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                _if_conditional353) {
                    # 2 "sGenericsFun_finalize"
                    come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sGenericsFun_finalize"
                # 3 "sGenericsFun_finalize"
                if(_if_conditional354=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional354) {
                    # 3 "sGenericsFun_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sGenericsFun_finalize"
                # 4 "sGenericsFun_finalize"
                if(_if_conditional355=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional355) {
                    # 4 "sGenericsFun_finalize"
                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sGenericsFun_finalize"
                # 5 "sGenericsFun_finalize"
                if(_if_conditional356=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional356) {
                    # 5 "sGenericsFun_finalize"
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sGenericsFun_finalize"
                # 6 "sGenericsFun_finalize"
                if(_if_conditional357=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional357) {
                    # 6 "sGenericsFun_finalize"
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sGenericsFun_finalize"
                # 7 "sGenericsFun_finalize"
                if(_if_conditional358=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional358) {
                    # 7 "sGenericsFun_finalize"
                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sGenericsFun_finalize"
                # 8 "sGenericsFun_finalize"
                if(_if_conditional359=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional359) {
                    # 8 "sGenericsFun_finalize"
                    self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 10 "sGenericsFun_finalize"
                # 9 "sGenericsFun_finalize"
                if(_if_conditional360=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                _if_conditional360) {
                    # 9 "sGenericsFun_finalize"
                    self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_265;
_Bool _if_conditional361;
_Bool _if_conditional362;
int i_266;
_Bool _if_conditional363;
_Bool _if_conditional364;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_265, 0, sizeof(int));
memset(&i_266, 0, sizeof(int));
                # 1137 "./comelang2.h"
                for(                i_265=0;                i_265<self->size;                i_265++                ){
                    # 1136 "./comelang2.h"
                    # 1131 "./comelang2.h"
                    if(_if_conditional361=self->item_existance[i_265],                    _if_conditional361) {
                        # 1135 "./comelang2.h"
                        # 1132 "./comelang2.h"
                        if(_if_conditional362=1,                        _if_conditional362) {
                            # 1133 "./comelang2.h"
                            come_call_finalizer2(sGenericsFun_finalize,self->items[i_265], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1137 "./comelang2.h"
                come_free((char*)self->items);
                # 1146 "./comelang2.h"
                for(                i_266=0;                i_266<self->size;                i_266++                ){
                    # 1145 "./comelang2.h"
                    # 1140 "./comelang2.h"
                    if(_if_conditional363=self->item_existance[i_266],                    _if_conditional363) {
                        # 1144 "./comelang2.h"
                        # 1141 "./comelang2.h"
                        if(_if_conditional364=1,                        _if_conditional364) {
                            # 1142 "./comelang2.h"
                            self->keys[i_266] = come_decrement_ref_count2(self->keys[i_266], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1146 "./comelang2.h"
                come_free((char*)self->keys);
                # 1148 "./comelang2.h"
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1150 "./comelang2.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional365;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "map$2charphsGenericsFunph_finalize"
            # 0 "map$2charphsGenericsFunph_finalize"
            if(_if_conditional365=self!=((void*)0)&&self->key_list!=((void*)0),            _if_conditional365) {
                # 0 "map$2charphsGenericsFunph_finalize"
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value408;
void* right_value409;
void* right_value410;
int i_267;
void* right_value411;
void* right_value412;
struct list$1charp* __dec_obj113;
struct map$2charphsClassph* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&i_267, 0, sizeof(int));
right_value411 = (void*)0;
right_value412 = (void*)0;
            # 1087 "./comelang2.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value408=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1087, "char*%"))));
            right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1088 "./comelang2.h"
            self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value409=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(1024)), "./comelang2.h", 1088, "sClass*%"))));
            come_call_finalizer2(sClass_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1089 "./comelang2.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value410=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1089, "bool"))));
            right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1096 "./comelang2.h"
            for(            i_267=0;            i_267<1024;            i_267++            ){
                # 1093 "./comelang2.h"
                self->item_existance[i_267]=(_Bool)0;
            }
            # 1096 "./comelang2.h"
            self->size=1024;
            # 1097 "./comelang2.h"
            self->len=0;
            # 1099 "./comelang2.h"
            __dec_obj113=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value412=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value411=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1099, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1101 "./comelang2.h"
            self->it=0;
            # 1103 "./comelang2.h"
            __result181__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result181__;
            come_call_finalizer2(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_268;
_Bool _if_conditional366;
_Bool _if_conditional367;
int i_269;
_Bool _if_conditional368;
_Bool _if_conditional369;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_268, 0, sizeof(int));
memset(&i_269, 0, sizeof(int));
                # 1137 "./comelang2.h"
                for(                i_268=0;                i_268<self->size;                i_268++                ){
                    # 1136 "./comelang2.h"
                    # 1131 "./comelang2.h"
                    if(_if_conditional366=self->item_existance[i_268],                    _if_conditional366) {
                        # 1135 "./comelang2.h"
                        # 1132 "./comelang2.h"
                        if(_if_conditional367=1,                        _if_conditional367) {
                            # 1133 "./comelang2.h"
                            come_call_finalizer2(sClass_finalize,self->items[i_268], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1137 "./comelang2.h"
                come_free((char*)self->items);
                # 1146 "./comelang2.h"
                for(                i_269=0;                i_269<self->size;                i_269++                ){
                    # 1145 "./comelang2.h"
                    # 1140 "./comelang2.h"
                    if(_if_conditional368=self->item_existance[i_269],                    _if_conditional368) {
                        # 1144 "./comelang2.h"
                        # 1141 "./comelang2.h"
                        if(_if_conditional369=1,                        _if_conditional369) {
                            # 1142 "./comelang2.h"
                            self->keys[i_269] = come_decrement_ref_count2(self->keys[i_269], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1146 "./comelang2.h"
                come_free((char*)self->keys);
                # 1148 "./comelang2.h"
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1150 "./comelang2.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional370;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "map$2charphsClassph_finalize"
            # 0 "map$2charphsClassph_finalize"
            if(_if_conditional370=self!=((void*)0)&&self->key_list!=((void*)0),            _if_conditional370) {
                # 0 "map$2charphsClassph_finalize"
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* right_value415;
void* right_value416;
void* right_value417;
int i_270;
void* right_value418;
void* right_value419;
struct list$1charp* __dec_obj115;
struct map$2charphsTypeph* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
memset(&i_270, 0, sizeof(int));
right_value418 = (void*)0;
right_value419 = (void*)0;
            # 1087 "./comelang2.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value415=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1087, "char*%"))));
            right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1088 "./comelang2.h"
            self->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value416=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(1024)), "./comelang2.h", 1088, "sType*%"))));
            come_call_finalizer2(sType_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1089 "./comelang2.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value417=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1089, "bool"))));
            right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1096 "./comelang2.h"
            for(            i_270=0;            i_270<1024;            i_270++            ){
                # 1093 "./comelang2.h"
                self->item_existance[i_270]=(_Bool)0;
            }
            # 1096 "./comelang2.h"
            self->size=1024;
            # 1097 "./comelang2.h"
            self->len=0;
            # 1099 "./comelang2.h"
            __dec_obj115=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value419=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value418=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1099, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1101 "./comelang2.h"
            self->it=0;
            # 1103 "./comelang2.h"
            __result182__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result182__;
            come_call_finalizer2(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_271;
_Bool _if_conditional371;
_Bool _if_conditional372;
int i_272;
_Bool _if_conditional373;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_271, 0, sizeof(int));
memset(&i_272, 0, sizeof(int));
                # 1137 "./comelang2.h"
                for(                i_271=0;                i_271<self->size;                i_271++                ){
                    # 1136 "./comelang2.h"
                    # 1131 "./comelang2.h"
                    if(_if_conditional371=self->item_existance[i_271],                    _if_conditional371) {
                        # 1135 "./comelang2.h"
                        # 1132 "./comelang2.h"
                        if(_if_conditional372=1,                        _if_conditional372) {
                            # 1133 "./comelang2.h"
                            come_call_finalizer2(sType_finalize,self->items[i_271], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1137 "./comelang2.h"
                come_free((char*)self->items);
                # 1146 "./comelang2.h"
                for(                i_272=0;                i_272<self->size;                i_272++                ){
                    # 1145 "./comelang2.h"
                    # 1140 "./comelang2.h"
                    if(_if_conditional373=self->item_existance[i_272],                    _if_conditional373) {
                        # 1144 "./comelang2.h"
                        # 1141 "./comelang2.h"
                        if(_if_conditional374=1,                        _if_conditional374) {
                            # 1142 "./comelang2.h"
                            self->keys[i_272] = come_decrement_ref_count2(self->keys[i_272], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1146 "./comelang2.h"
                come_free((char*)self->keys);
                # 1148 "./comelang2.h"
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1150 "./comelang2.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "map$2charphsTypeph_finalize"
            # 0 "map$2charphsTypeph_finalize"
            if(_if_conditional375=self!=((void*)0)&&self->key_list!=((void*)0),            _if_conditional375) {
                # 0 "map$2charphsTypeph_finalize"
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./comelang2.h"
            self->head=((void*)0);
            # 105 "./comelang2.h"
            self->tail=((void*)0);
            # 106 "./comelang2.h"
            self->len=0;
            # 108 "./comelang2.h"
            __result183__ = __result_obj__ = self;
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result183__;
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_273;
_Bool _while_condtional30;
struct list_item$1sRightValueObjectph* prev_it_274;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_273, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_274, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 123 "./comelang2.h"
                it_273=self->head;
                # 129 "./comelang2.h"
                while(_while_condtional30=it_273!=((void*)0),                _while_condtional30) {
                    # 125 "./comelang2.h"
                    prev_it_274=it_273;
                    # 126 "./comelang2.h"
                    it_273=it_273->next;
                    # 127 "./comelang2.h"
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional376;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sRightValueObjectphp_finalize"
                        # 0 "list_item$1sRightValueObjectphp_finalize"
                        if(_if_conditional376=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional376) {
                            # 0 "list_item$1sRightValueObjectphp_finalize"
                            come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sRightValueObject_finalize"
                                # 0 "sRightValueObject_finalize"
                                if(_if_conditional377=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional377) {
                                    # 0 "sRightValueObject_finalize"
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sRightValueObject_finalize"
                                # 1 "sRightValueObject_finalize"
                                if(_if_conditional378=self!=((void*)0)&&self->mVarName!=((void*)0),                                _if_conditional378) {
                                    # 1 "sRightValueObject_finalize"
                                    self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sRightValueObject_finalize"
                                # 2 "sRightValueObject_finalize"
                                if(_if_conditional379=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional379) {
                                    # 2 "sRightValueObject_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./comelang2.h"
            self->head=((void*)0);
            # 105 "./comelang2.h"
            self->tail=((void*)0);
            # 106 "./comelang2.h"
            self->len=0;
            # 108 "./comelang2.h"
            __result184__ = __result_obj__ = self;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result184__;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_275;
_Bool _while_condtional31;
struct list_item$1CVALUEph* prev_it_276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_275, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_276, 0, sizeof(struct list_item$1CVALUEph*));
                # 123 "./comelang2.h"
                it_275=self->head;
                # 129 "./comelang2.h"
                while(_while_condtional31=it_275!=((void*)0),                _while_condtional31) {
                    # 125 "./comelang2.h"
                    prev_it_276=it_275;
                    # 126 "./comelang2.h"
                    it_275=it_275->next;
                    # 127 "./comelang2.h"
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional380;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional380=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional380) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional381;
_Bool _if_conditional382;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "CVALUE_finalize"
                                # 0 "CVALUE_finalize"
                                if(_if_conditional381=self!=((void*)0)&&self->c_value!=((void*)0),                                _if_conditional381) {
                                    # 0 "CVALUE_finalize"
                                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "CVALUE_finalize"
                                # 1 "CVALUE_finalize"
                                if(_if_conditional382=self!=((void*)0)&&self->type!=((void*)0),                                _if_conditional382) {
                                    # 1 "CVALUE_finalize"
                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sInfo_finalize"
            # 0 "sInfo_finalize"
            if(_if_conditional386=self!=((void*)0)&&self->original_source!=((void*)0),            _if_conditional386) {
                # 0 "sInfo_finalize"
                come_call_finalizer2(buffer_finalize,self->original_source, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sInfo_finalize"
            # 1 "sInfo_finalize"
            if(_if_conditional387=self!=((void*)0)&&self->source!=((void*)0),            _if_conditional387) {
                # 1 "sInfo_finalize"
                come_call_finalizer2(buffer_finalize,self->source, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sInfo_finalize"
            # 2 "sInfo_finalize"
            if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional388) {
                # 2 "sInfo_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 4 "sInfo_finalize"
            # 3 "sInfo_finalize"
            if(_if_conditional389=self!=((void*)0)&&self->base_sname!=((void*)0),            _if_conditional389) {
                # 3 "sInfo_finalize"
                self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sInfo_finalize"
            # 4 "sInfo_finalize"
            if(_if_conditional390=self!=((void*)0)&&self->err_line!=((void*)0),            _if_conditional390) {
                # 4 "sInfo_finalize"
                self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 6 "sInfo_finalize"
            # 5 "sInfo_finalize"
            if(_if_conditional391=self!=((void*)0)&&self->clang_option!=((void*)0),            _if_conditional391) {
                # 5 "sInfo_finalize"
                self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 7 "sInfo_finalize"
            # 6 "sInfo_finalize"
            if(_if_conditional392=self!=((void*)0)&&self->cpp_option!=((void*)0),            _if_conditional392) {
                # 6 "sInfo_finalize"
                self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 8 "sInfo_finalize"
            # 7 "sInfo_finalize"
            if(_if_conditional393=self!=((void*)0)&&self->come_fun_name!=((void*)0),            _if_conditional393) {
                # 7 "sInfo_finalize"
                self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 9 "sInfo_finalize"
            # 8 "sInfo_finalize"
            if(_if_conditional394=self!=((void*)0)&&self->funcs!=((void*)0),            _if_conditional394) {
                # 8 "sInfo_finalize"
                come_call_finalizer2(map$2charphsFunphp_finalize,self->funcs, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sInfo_finalize"
            # 9 "sInfo_finalize"
            if(_if_conditional395=self!=((void*)0)&&self->generics_funcs!=((void*)0),            _if_conditional395) {
                # 9 "sInfo_finalize"
                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,self->generics_funcs, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 11 "sInfo_finalize"
            # 10 "sInfo_finalize"
            if(_if_conditional396=self!=((void*)0)&&self->classes!=((void*)0),            _if_conditional396) {
                # 10 "sInfo_finalize"
                come_call_finalizer2(map$2charphsClassphp_finalize,self->classes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 12 "sInfo_finalize"
            # 11 "sInfo_finalize"
            if(_if_conditional397=self!=((void*)0)&&self->types!=((void*)0),            _if_conditional397) {
                # 11 "sInfo_finalize"
                come_call_finalizer2(map$2charphsTypephp_finalize,self->types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 13 "sInfo_finalize"
            # 12 "sInfo_finalize"
            if(_if_conditional398=self!=((void*)0)&&self->generics_classes!=((void*)0),            _if_conditional398) {
                # 12 "sInfo_finalize"
                come_call_finalizer2(map$2charphsClassphp_finalize,self->generics_classes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 14 "sInfo_finalize"
            # 13 "sInfo_finalize"
            if(_if_conditional399=self!=((void*)0)&&self->module!=((void*)0),            _if_conditional399) {
                # 13 "sInfo_finalize"
                come_call_finalizer2(sModule_finalize,self->module, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 15 "sInfo_finalize"
            # 14 "sInfo_finalize"
            if(_if_conditional400=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional400) {
                # 14 "sInfo_finalize"
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 16 "sInfo_finalize"
            # 15 "sInfo_finalize"
            if(_if_conditional401=self!=((void*)0)&&self->right_value_objects!=((void*)0),            _if_conditional401) {
                # 15 "sInfo_finalize"
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self->right_value_objects, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 17 "sInfo_finalize"
            # 16 "sInfo_finalize"
            if(_if_conditional402=self!=((void*)0)&&self->generics_type!=((void*)0),            _if_conditional402) {
                # 16 "sInfo_finalize"
                come_call_finalizer2(sType_finalize,self->generics_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 18 "sInfo_finalize"
            # 17 "sInfo_finalize"
            if(_if_conditional403=self!=((void*)0)&&self->method_generics_types!=((void*)0),            _if_conditional403) {
                # 17 "sInfo_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 19 "sInfo_finalize"
            # 18 "sInfo_finalize"
            if(_if_conditional404=self!=((void*)0)&&self->stack!=((void*)0),            _if_conditional404) {
                # 18 "sInfo_finalize"
                come_call_finalizer2(list$1CVALUEphp_finalize,self->stack, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 20 "sInfo_finalize"
            # 19 "sInfo_finalize"
            if(_if_conditional405=self!=((void*)0)&&self->come_function_result_type!=((void*)0),            _if_conditional405) {
                # 19 "sInfo_finalize"
                come_call_finalizer2(sType_finalize,self->come_function_result_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 21 "sInfo_finalize"
            # 20 "sInfo_finalize"
            if(_if_conditional406=self!=((void*)0)&&self->gv_table!=((void*)0),            _if_conditional406) {
                # 20 "sInfo_finalize"
                come_call_finalizer2(sVarTable_finalize,self->gv_table, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 22 "sInfo_finalize"
            # 21 "sInfo_finalize"
            if(_if_conditional407=self!=((void*)0)&&self->generics_type_names!=((void*)0),            _if_conditional407) {
                # 21 "sInfo_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 23 "sInfo_finalize"
            # 22 "sInfo_finalize"
            if(_if_conditional408=self!=((void*)0)&&self->method_generics_type_names!=((void*)0),            _if_conditional408) {
                # 22 "sInfo_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 24 "sInfo_finalize"
            # 23 "sInfo_finalize"
            if(_if_conditional409=self!=((void*)0)&&self->impl_type!=((void*)0),            _if_conditional409) {
                # 23 "sInfo_finalize"
                come_call_finalizer2(sType_finalize,self->impl_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 25 "sInfo_finalize"
            # 24 "sInfo_finalize"
            if(_if_conditional410=self!=((void*)0)&&self->output_file_name!=((void*)0),            _if_conditional410) {
                # 24 "sInfo_finalize"
                self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 26 "sInfo_finalize"
            # 25 "sInfo_finalize"
            if(_if_conditional411=self!=((void*)0)&&self->function_result_type!=((void*)0),            _if_conditional411) {
                # 25 "sInfo_finalize"
                come_call_finalizer2(sType_finalize,self->function_result_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional452;
struct list_item$1charph* it_297;
int i_298;
_Bool _while_condtional32;
_Bool _if_conditional453;
char* __result191__;
char* default_value_299;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_297, 0, sizeof(struct list_item$1charph*));
memset(&i_298, 0, sizeof(int));
memset(&default_value_299, 0, sizeof(char*));
                                    # 686 "./comelang2.h"
                                    # 682 "./comelang2.h"
                                    if(_if_conditional452=position<0,                                    _if_conditional452) {
                                        # 683 "./comelang2.h"
                                        position+=self->len;
                                    }
                                    # 686 "./comelang2.h"
                                    it_297=self->head;
                                    # 687 "./comelang2.h"
                                    i_298=0;
                                    # 694 "./comelang2.h"
                                    while(_while_condtional32=it_297!=((void*)0),                                    _while_condtional32) {
                                        # 692 "./comelang2.h"
                                        # 689 "./comelang2.h"
                                        if(_if_conditional453=position==i_298,                                        _if_conditional453) {
                                            # 690 "./comelang2.h"
                                            __result191__ = __result_obj__ = it_297->item;
                                            return __result191__;
                                        }
                                        # 692 "./comelang2.h"
                                        it_297=it_297->next;
                                        # 693 "./comelang2.h"
                                        i_298++;
                                    }
                                    # 696 "./comelang2.h"
                                    # 697 "./comelang2.h"
                                    memset(&default_value_299,0,sizeof(char*));
                                    # 698 "./comelang2.h"
                                    __result192__ = __result_obj__ = default_value_299;
                                    default_value_299 = come_decrement_ref_count2(default_value_299, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result192__;
                                    default_value_299 = come_decrement_ref_count2(default_value_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1008 "02transpile.c"
                                    printf("%s %d: linker faield\n",(*(parent->info_296)).sname,(*(parent->info_296)).sline);
                                    # 1009 "02transpile.c"
                                    exit(13);
}

