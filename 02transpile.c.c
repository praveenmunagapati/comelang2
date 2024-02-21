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
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    int* n_10;
    char** msg2_8;
    struct sInfo** info;
    char** msg;
};
struct __current_stack2__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sInfo* info_287;
    struct buffer** clang_option_270;
    struct buffer** cpp_option_271;
    struct list$1charph** files_272;
    struct list$1charph** object_files_273;
    _Bool* output_object_file_274;
    _Bool* output_cpp_file_275;
    _Bool* output_source_file_flag_276;
    char** output_file_name_277;
    _Bool* verbose_278;
    _Bool* come_debug_279;
    _Bool* come_malloc_280;
    _Bool* come_str_281;
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

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void stackframe();

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

int pipe(int anonymous_var_nameX540[2]);

int pipe2(int anonymous_var_nameX541[2], int anonymous_var_nameX542);

int close(int anonymous_var_nameX543);

int posix_close(int anonymous_var_nameX544, int anonymous_var_nameX545);

int dup(int anonymous_var_nameX546);

int dup2(int anonymous_var_nameX547, int anonymous_var_nameX548);

int dup3(int anonymous_var_nameX549, int anonymous_var_nameX550, int anonymous_var_nameX551);

long lseek(int anonymous_var_nameX552, long anonymous_var_nameX553, int anonymous_var_nameX554);

int fsync(int anonymous_var_nameX555);

int fdatasync(int anonymous_var_nameX556);

long read(int anonymous_var_nameX557, void* anonymous_var_nameX558, unsigned long int anonymous_var_nameX559);

long write(int anonymous_var_nameX560, const void* anonymous_var_nameX561, unsigned long int anonymous_var_nameX562);

long pread(int anonymous_var_nameX563, void* anonymous_var_nameX564, unsigned long int anonymous_var_nameX565, long anonymous_var_nameX566);

long pwrite(int anonymous_var_nameX567, const void* anonymous_var_nameX568, unsigned long int anonymous_var_nameX569, long anonymous_var_nameX570);

int chown(const char* anonymous_var_nameX571, unsigned int anonymous_var_nameX572, unsigned int anonymous_var_nameX573);

int fchown(int anonymous_var_nameX574, unsigned int anonymous_var_nameX575, unsigned int anonymous_var_nameX576);

int lchown(const char* anonymous_var_nameX577, unsigned int anonymous_var_nameX578, unsigned int anonymous_var_nameX579);

int fchownat(int anonymous_var_nameX580, const char* anonymous_var_nameX581, unsigned int anonymous_var_nameX582, unsigned int anonymous_var_nameX583, int anonymous_var_nameX584);

int link(const char* anonymous_var_nameX585, const char* anonymous_var_nameX586);

int linkat(int anonymous_var_nameX587, const char* anonymous_var_nameX588, int anonymous_var_nameX589, const char* anonymous_var_nameX590, int anonymous_var_nameX591);

int symlink(const char* anonymous_var_nameX592, const char* anonymous_var_nameX593);

int symlinkat(const char* anonymous_var_nameX594, int anonymous_var_nameX595, const char* anonymous_var_nameX596);

long readlink(const char* anonymous_var_nameX597, char* anonymous_var_nameX598, unsigned long int anonymous_var_nameX599);

long readlinkat(int anonymous_var_nameX600, const char* anonymous_var_nameX601, char* anonymous_var_nameX602, unsigned long int anonymous_var_nameX603);

int unlink(const char* anonymous_var_nameX604);

int unlinkat(int anonymous_var_nameX605, const char* anonymous_var_nameX606, int anonymous_var_nameX607);

int rmdir(const char* anonymous_var_nameX608);

int truncate(const char* anonymous_var_nameX609, long anonymous_var_nameX610);

int ftruncate(int anonymous_var_nameX611, long anonymous_var_nameX612);

int access(const char* anonymous_var_nameX613, int anonymous_var_nameX614);

int faccessat(int anonymous_var_nameX615, const char* anonymous_var_nameX616, int anonymous_var_nameX617, int anonymous_var_nameX618);

int chdir(const char* anonymous_var_nameX619);

int fchdir(int anonymous_var_nameX620);

char* getcwd(char* anonymous_var_nameX621, unsigned long int anonymous_var_nameX622);

unsigned int alarm(unsigned int anonymous_var_nameX623);

unsigned int sleep(unsigned int anonymous_var_nameX624);

int pause();

int fork();

int _Fork();

int execve(const char* anonymous_var_nameX625, char** anonymous_var_nameX626, char** anonymous_var_nameX627);

int execv(const char* anonymous_var_nameX628, char** anonymous_var_nameX629);

int execle(const char* anonymous_var_nameX630, const char* anonymous_var_nameX631, ...);

int execl(const char* anonymous_var_nameX632, const char* anonymous_var_nameX633, ...);

int execvp(const char* anonymous_var_nameX634, char** anonymous_var_nameX635);

int execlp(const char* anonymous_var_nameX636, const char* anonymous_var_nameX637, ...);

int fexecve(int anonymous_var_nameX638, char** anonymous_var_nameX639, char** anonymous_var_nameX640);

void _exit(int anonymous_var_nameX641);

int getpid();

int getppid();

int getpgrp();

int getpgid(int anonymous_var_nameX642);

int setpgid(int anonymous_var_nameX643, int anonymous_var_nameX644);

int setsid();

int getsid(int anonymous_var_nameX645);

char* ttyname(int anonymous_var_nameX646);

int ttyname_r(int anonymous_var_nameX647, char* anonymous_var_nameX648, unsigned long int anonymous_var_nameX649);

int isatty(int anonymous_var_nameX650);

int tcgetpgrp(int anonymous_var_nameX651);

int tcsetpgrp(int anonymous_var_nameX652, int anonymous_var_nameX653);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int anonymous_var_nameX654, unsigned int* anonymous_var_nameX655);

int setuid(unsigned int anonymous_var_nameX656);

int seteuid(unsigned int anonymous_var_nameX657);

int setgid(unsigned int anonymous_var_nameX658);

int setegid(unsigned int anonymous_var_nameX659);

char* getlogin();

int getlogin_r(char* anonymous_var_nameX660, unsigned long int anonymous_var_nameX661);

int gethostname(char* anonymous_var_nameX662, unsigned long int anonymous_var_nameX663);

char* ctermid(char* anonymous_var_nameX664);

int getopt(int anonymous_var_nameX665, char** anonymous_var_nameX666, const char* anonymous_var_nameX667);

long pathconf(const char* anonymous_var_nameX668, int anonymous_var_nameX669);

long fpathconf(int anonymous_var_nameX670, int anonymous_var_nameX671);

long sysconf(int anonymous_var_nameX672);

unsigned long int confstr(int anonymous_var_nameX673, char* anonymous_var_nameX674, unsigned long int anonymous_var_nameX675);

int setreuid(unsigned int anonymous_var_nameX676, unsigned int anonymous_var_nameX677);

int setregid(unsigned int anonymous_var_nameX678, unsigned int anonymous_var_nameX679);

int lockf(int anonymous_var_nameX680, int anonymous_var_nameX681, long anonymous_var_nameX682);

long gethostid();

int nice(int anonymous_var_nameX683);

void sync();

int setpgrp();

char* crypt(const char* anonymous_var_nameX684, const char* anonymous_var_nameX685);

void encrypt(char* anonymous_var_nameX686, int anonymous_var_nameX687);

void swab(const void* anonymous_var_nameX688, void* anonymous_var_nameX689, long anonymous_var_nameX690);

int usleep(unsigned int anonymous_var_nameX691);

unsigned int ualarm(unsigned int anonymous_var_nameX692, unsigned int anonymous_var_nameX693);

int brk(void* anonymous_var_nameX694);

void* sbrk(long anonymous_var_nameX695);

int vfork();

int vhangup();

int chroot(const char* anonymous_var_nameX696);

int getpagesize();

int getdtablesize();

int sethostname(const char* anonymous_var_nameX697, unsigned long int anonymous_var_nameX698);

int getdomainname(char* anonymous_var_nameX699, unsigned long int anonymous_var_nameX700);

int setdomainname(const char* anonymous_var_nameX701, unsigned long int anonymous_var_nameX702);

int setgroups(unsigned long int anonymous_var_nameX703, const unsigned int* anonymous_var_nameX704);

char* getpass(const char* anonymous_var_nameX705);

int daemon(int anonymous_var_nameX706, int anonymous_var_nameX707);

void setusershell();

void endusershell();

char* getusershell();

int acct(const char* anonymous_var_nameX708);

long syscall(long anonymous_var_nameX709, ...);

int execvpe(const char* anonymous_var_nameX710, char** anonymous_var_nameX711, char** anonymous_var_nameX712);

int issetugid();

int getentropy(void* anonymous_var_nameX713, unsigned long int anonymous_var_nameX714);

int setresuid(unsigned int anonymous_var_nameX715, unsigned int anonymous_var_nameX716, unsigned int anonymous_var_nameX717);

int setresgid(unsigned int anonymous_var_nameX718, unsigned int anonymous_var_nameX719, unsigned int anonymous_var_nameX720);

int getresuid(unsigned int* anonymous_var_nameX721, unsigned int* anonymous_var_nameX722, unsigned int* anonymous_var_nameX723);

int getresgid(unsigned int* anonymous_var_nameX724, unsigned int* anonymous_var_nameX725, unsigned int* anonymous_var_nameX726);

char* get_current_dir_name();

int syncfs(int anonymous_var_nameX727);

int euidaccess(const char* anonymous_var_nameX728, int anonymous_var_nameX729);

int eaccess(const char* anonymous_var_nameX730, int anonymous_var_nameX731);

long copy_file_range(int anonymous_var_nameX732, long* anonymous_var_nameX733, int anonymous_var_nameX734, long* anonymous_var_nameX735, unsigned long int anonymous_var_nameX736, unsigned int anonymous_var_nameX737);

int gettid();

int select(int anonymous_var_nameX738, struct anonymous_typeX23* anonymous_var_nameX739, struct anonymous_typeX23* anonymous_var_nameX740, struct anonymous_typeX23* anonymous_var_nameX741, struct timeval* anonymous_var_nameX742);

int pselect(int anonymous_var_nameX743, struct anonymous_typeX23* anonymous_var_nameX744, struct anonymous_typeX23* anonymous_var_nameX745, struct anonymous_typeX23* anonymous_var_nameX746, const struct timespec* anonymous_var_nameX747, const struct __sigset_t* anonymous_var_nameX748);

int stat(const char* anonymous_var_nameX749, struct stat* anonymous_var_nameX750);

int fstat(int anonymous_var_nameX751, struct stat* anonymous_var_nameX752);

int lstat(const char* anonymous_var_nameX753, struct stat* anonymous_var_nameX754);

int fstatat(int anonymous_var_nameX755, const char* anonymous_var_nameX756, struct stat* anonymous_var_nameX757, int anonymous_var_nameX758);

int chmod(const char* anonymous_var_nameX759, unsigned int anonymous_var_nameX760);

int fchmod(int anonymous_var_nameX761, unsigned int anonymous_var_nameX762);

int fchmodat(int anonymous_var_nameX763, const char* anonymous_var_nameX764, unsigned int anonymous_var_nameX765, int anonymous_var_nameX766);

unsigned int umask(unsigned int anonymous_var_nameX767);

int mkdir(const char* anonymous_var_nameX768, unsigned int anonymous_var_nameX769);

int mkfifo(const char* anonymous_var_nameX770, unsigned int anonymous_var_nameX771);

int mkdirat(int anonymous_var_nameX772, const char* anonymous_var_nameX773, unsigned int anonymous_var_nameX774);

int mkfifoat(int anonymous_var_nameX775, const char* anonymous_var_nameX776, unsigned int anonymous_var_nameX777);

int mknod(const char* anonymous_var_nameX778, unsigned int anonymous_var_nameX779, unsigned long int anonymous_var_nameX780);

int mknodat(int anonymous_var_nameX781, const char* anonymous_var_nameX782, unsigned int anonymous_var_nameX783, unsigned long int anonymous_var_nameX784);

int futimens(int anonymous_var_nameX785, const struct timespec anonymous_var_nameX786[2]);

int utimensat(int anonymous_var_nameX787, const char* anonymous_var_nameX788, const struct timespec anonymous_var_nameX789[2], int anonymous_var_nameX790);

int lchmod(const char* anonymous_var_nameX791, unsigned int anonymous_var_nameX792);

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
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
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
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
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
static struct sVar* sVar_clone(struct sVar* self);
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
static int list$1charph_length(struct list$1charph* self);
static void sInfo_finalize(struct sInfo* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
void method_block2_02transpilec(struct __current_stack2__* parent);

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
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
right_value1 = (void*)0;
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1951, "struct smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
right_value3 = (void*)0;
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1961, "struct smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
right_value5 = (void*)0;
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1971, "struct smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
right_value7 = (void*)0;
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1981, "struct smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
right_value9 = (void*)0;
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1991, "struct smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline unsigned short int __bswap16(unsigned short int __x){
void* __result_obj__;
unsigned short int __result7__;
memset(&__result_obj__, 0, sizeof(void*));
    __result7__ = __x<<8|__x>>8;
    return __result7__;
}
static inline unsigned int __bswap32(unsigned int __x){
void* __result_obj__;
unsigned int __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    __result8__ = __x>>24|__x>>8&65280|__x<<8&16711680|__x<<24;
    return __result8__;
}
static inline unsigned long int __bswap64(unsigned long int __x){
void* __result_obj__;
unsigned long int __result9__;
memset(&__result_obj__, 0, sizeof(void*));
    __result9__ = __bswap32(__x)+0<<32|__bswap32(__x>>32);
    return __result9__;
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
_Bool _if_conditional5;
_Bool _if_conditional6;
void* right_value10;
void* right_value11;
void* right_value12;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
right_value12 = (void*)0;
    if(_if_conditional5=gComeOriginalSourcePosition,    _if_conditional5) {
        if(_if_conditional6=info->writing_source_file_position,        _if_conditional6) {
            add_come_code(info,((char*)(right_value12=xsprintf("# \%s \"\%s\"\n",((char*)(right_value10=int_to_string(info->sline))),((char*)(right_value11=string_to_string(info->sname)))))));
            if(right_value10) { right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(right_value11) { right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(right_value12) { right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value13;
char* sname_5;
int sline_6;
void* right_value14;
void* right_value15;
char* __dec_obj6;
_Bool result_7;
void* right_value16;
char* __dec_obj7;
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
memset(&sname_5, 0, sizeof(char*));
memset(&sline_6, 0, sizeof(int));
right_value14 = (void*)0;
right_value15 = (void*)0;
memset(&result_7, 0, sizeof(_Bool));
right_value16 = (void*)0;
    sname_5=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(info->sname))));
    if(right_value13) { right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    sline_6=info->sline;
    __dec_obj6=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value15=__builtin_string(((char*)(right_value14=node->sname(node->_protocol_obj)))))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value14) { right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value15) { right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    info->sline=node->sline(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_7=node->compile(node->_protocol_obj,info);
    __dec_obj7=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value16=__builtin_string(sname_5))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value16) { right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    info->sline=sline_6;
    __result10__ = result_7;
    if(sname_5) { sname_5 = come_decrement_ref_count2(sname_5, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result10__;
    if(sname_5) { sname_5 = come_decrement_ref_count2(sname_5, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool _if_conditional7;
char* msg2_8;
va_list args_9;
_Bool _if_conditional8;
int n_10;
void* right_value17;
void* right_value18;
void* right_value24;
struct __current_stack1__ __current_stack1__;
void* right_value31;
void* right_value35;
void* right_value36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_8, 0, sizeof(char*));
memset(&args_9, 0, sizeof(va_list));
memset(&n_10, 0, sizeof(int));
right_value17 = (void*)0;
right_value18 = (void*)0;
right_value24 = (void*)0;
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
right_value31 = (void*)0;
right_value35 = (void*)0;
right_value36 = (void*)0;
    if(_if_conditional7=!info->no_output_err,    _if_conditional7) {
        __builtin_va_start(args_9,msg);
        vasprintf(&msg2_8,msg,args_9);
        __builtin_va_end(args_9);
        printf("%s %d: %s\n",info->sname,info->sline,msg2_8);
        info->err_num++;
        stackframe();
        if(_if_conditional8=info->come_fun,        _if_conditional8) {
            n_10=info->sline-5;
            __current_stack1__.n_10 = &n_10;
            __current_stack1__.msg2_8 = &msg2_8;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            ((char*)(right_value36=string_puts(((char*)(right_value35=list$1voidp_join(((struct list$1voidp*)(right_value31=list$1charph_map(((struct list$1charph*)(right_value24=list$1charph_sublist(((struct list$1charph*)(right_value18=string_split_char(((char*)(right_value17=buffer_to_string(info->original_source))),10))),n_10,n_10+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n"))))));
                                if(__current_stack1__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
            if(right_value17) { right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            come_call_finalizer2(list$1charphp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1voidpp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value35) { right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(right_value36) { right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        free(msg2_8);
        come_call_finalizer2(va_list_finalize,(&args_9), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
void* right_value19;
void* right_value20;
struct list$1charph* result_13;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
struct list_item$1charph* it_14;
int i_15;
_Bool _while_condtional2;
_Bool _if_conditional14;
struct list$1charph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
right_value20 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1charph*));
memset(&it_14, 0, sizeof(struct list_item$1charph*));
memset(&i_15, 0, sizeof(int));
                result_13=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value20=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value19=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 642, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional10=begin<0,                _if_conditional10) {
                    begin+=self->len;
                }
                if(_if_conditional11=tail<0,                _if_conditional11) {
                    tail+=self->len+1;
                }
                if(_if_conditional12=begin<0,                _if_conditional12) {
                    begin=0;
                }
                if(_if_conditional13=tail>=self->len,                _if_conditional13) {
                    tail=self->len;
                }
                it_14=self->head;
                i_15=0;
                while(_while_condtional2=it_14!=((void*)0),                _while_condtional2) {
                    if(_if_conditional14=i_15>=begin&&i_15<tail,                    _if_conditional14) {
                        list$1charph_push_back(result_13,(char*)come_increment_ref_count(it_14->item));
                    }
                    it_14=it_14->next;
                    i_15++;
                }
                __result13__ = __result_obj__ = result_13;
                come_call_finalizer2(list$1charphp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result13__;
                come_call_finalizer2(list$1charphp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result11__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_11;
_Bool _while_condtional1;
struct list_item$1charph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1charph*));
                        it_11=self->head;
                        while(_while_condtional1=it_11!=((void*)0),                        _while_condtional1) {
                            prev_it_12=it_11;
                            it_11=it_11->next;
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional9=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional9) {
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional15;
void* right_value21;
struct list_item$1charph* litem_16;
char* __dec_obj8;
_Bool _if_conditional16;
void* right_value22;
struct list_item$1charph* litem_17;
char* __dec_obj9;
void* right_value23;
struct list_item$1charph* litem_18;
char* __dec_obj10;
struct list$1charph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1charph*));
right_value22 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1charph*));
right_value23 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional15=self->len==0,                            _if_conditional15) {
                                litem_16=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value21=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 225, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_16->prev=((void*)0);
                                litem_16->next=((void*)0);
                                __dec_obj8=litem_16->item;
                                litem_16->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                self->tail=litem_16;
                                self->head=litem_16;
                            }
                            else {
                                if(_if_conditional16=self->len==1,                                _if_conditional16) {
                                    litem_17=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value22=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 235, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_17->prev=self->head;
                                    litem_17->next=((void*)0);
                                    __dec_obj9=litem_17->item;
                                    litem_17->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    self->tail=litem_17;
                                    self->head->next=litem_17;
                                }
                                else {
                                    litem_18=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value23=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 245, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_18->prev=self->tail;
                                    litem_18->next=((void*)0);
                                    __dec_obj10=litem_18->item;
                                    litem_18->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    self->tail->next=litem_18;
                                    self->tail=litem_18;
                                }
                            }
                            self->len++;
                            __result12__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                            return __result12__;
                            if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*)){
void* __result_obj__;
void* right_value25;
void* right_value26;
struct list$1voidp* result_21;
struct list_item$1charph* it_22;
_Bool _while_condtional4;
_Bool _if_conditional19;
struct list$1voidp* __result16__;
struct list$1voidp* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
right_value26 = (void*)0;
memset(&result_21, 0, sizeof(struct list$1voidp*));
memset(&it_22, 0, sizeof(struct list_item$1charph*));
                result_21=(struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value26=list$1voidp_initialize((struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value25=(struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang2.h", 923, "struct list$1voidp"))))))));
                come_call_finalizer2(list$1voidpp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1voidpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_22=self->head;
                while(_while_condtional4=it_22!=((void*)0),                _while_condtional4) {
                    list$1voidp_push_back(result_21,block(parent,it_22->item));
                    if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                    _if_conditional19) {
                        __result16__ = __result_obj__ = result_21;
                        come_call_finalizer2(list$1voidpp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result16__;
                    }
                    it_22=it_22->next;
                }
                __result17__ = __result_obj__ = result_21;
                come_call_finalizer2(list$1voidpp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result17__;
                come_call_finalizer2(list$1voidpp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self){
void* __result_obj__;
struct list$1voidp* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result14__ = __result_obj__ = self;
                    come_call_finalizer2(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result14__;
                    come_call_finalizer2(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1voidpp_finalize(struct list$1voidp* self){
void* __result_obj__;
struct list_item$1voidp* it_19;
_Bool _while_condtional3;
struct list_item$1voidp* prev_it_20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_19, 0, sizeof(struct list_item$1voidp*));
memset(&prev_it_20, 0, sizeof(struct list_item$1voidp*));
                        it_19=self->head;
                        while(_while_condtional3=it_19!=((void*)0),                        _while_condtional3) {
                            prev_it_20=it_19;
                            it_19=it_19->next;
                            come_call_finalizer2(list_item$1voidpp_finalize,prev_it_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__;
_Bool _if_conditional17;
void* right_value27;
struct list_item$1voidp* litem_23;
_Bool _if_conditional18;
void* right_value28;
struct list_item$1voidp* litem_24;
void* right_value29;
struct list_item$1voidp* litem_25;
struct list$1voidp* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1voidp*));
right_value28 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1voidp*));
right_value29 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1voidp*));
                        if(_if_conditional17=self->len==0,                        _if_conditional17) {
                            litem_23=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value27=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 225, "struct list_item$1voidp"))));
                            come_call_finalizer2(list_item$1voidpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_23->prev=((void*)0);
                            litem_23->next=((void*)0);
                            litem_23->item=item;
                            self->tail=litem_23;
                            self->head=litem_23;
                        }
                        else {
                            if(_if_conditional18=self->len==1,                            _if_conditional18) {
                                litem_24=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value28=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 235, "struct list_item$1voidp"))));
                                come_call_finalizer2(list_item$1voidpp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_24->prev=self->head;
                                litem_24->next=((void*)0);
                                litem_24->item=item;
                                self->tail=litem_24;
                                self->head->next=litem_24;
                            }
                            else {
                                litem_25=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value29=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 245, "struct list_item$1voidp"))));
                                come_call_finalizer2(list_item$1voidpp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_25->prev=self->tail;
                                litem_25->next=((void*)0);
                                litem_25->item=item;
                                self->tail->next=litem_25;
                                self->tail=litem_25;
                            }
                        }
                        self->len++;
                        __result15__ = __result_obj__ = self;
                        return __result15__;
}

void* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* right_value30;
void* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
                __result18__ = __result_obj__ = ((char*)(right_value30=xsprintf("%d %s",++(*(parent->n_10)),it)));
                if(right_value30) { right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                return __result18__;
}

static char* list$1voidp_join(struct list$1voidp* self, char* sep){
void* __result_obj__;
void* right_value32;
void* right_value33;
struct buffer* buf_26;
int n_27;
void* it_30;
_Bool _for_condtionalA1;
_Bool _if_conditional24;
void* right_value34;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&buf_26, 0, sizeof(struct buffer*));
memset(&n_27, 0, sizeof(int));
memset(&it_30, 0, sizeof(void*));
right_value34 = (void*)0;
                buf_26=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value33=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1043, "struct buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                n_27=0;
                for(
                it_30=list$1voidp_begin(self) ,                0;                _for_condtionalA1=                !list$1voidp_end(self) ,                _for_condtionalA1;                it_30=list$1voidp_next(self) ,                0                ){
                    buffer_append_str(buf_26,it_30);
                    if(_if_conditional24=n_27<list$1voidp_length(self)-1,                    _if_conditional24) {
                        buffer_append_str(buf_26,sep);
                    }
                    n_27++;
                }
                __result27__ = __result_obj__ = ((char*)(right_value34=buffer_to_string(buf_26)));
                come_call_finalizer2(buffer_finalize,buf_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(right_value34) { right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                return __result27__;
                come_call_finalizer2(buffer_finalize,buf_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void* list$1voidp_begin(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional20;
void* result_28;
void* __result19__;
_Bool _if_conditional21;
void* __result20__;
void* result_29;
void* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_28, 0, sizeof(void*));
memset(&result_29, 0, sizeof(void*));
                    if(_if_conditional20=self==((void*)0),                    _if_conditional20) {
                        memset(&result_28,0,sizeof(void*));
                        __result19__ = __result_obj__ = result_28;
                        return __result19__;
                    }
                    self->it=self->head;
                    if(_if_conditional21=self->it,                    _if_conditional21) {
                        __result20__ = __result_obj__ = self->it->item;
                        return __result20__;
                    }
                    memset(&result_29,0,sizeof(void*));
                    __result21__ = __result_obj__ = result_29;
                    return __result21__;
}

static _Bool list$1voidp_end(struct list$1voidp* self){
void* __result_obj__;
_Bool __result22__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result22__ = self==((void*)0)||self->it==((void*)0);
                    return __result22__;
}

static void* list$1voidp_next(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional22;
void* result_31;
void* __result23__;
_Bool _if_conditional23;
void* __result24__;
void* result_32;
void* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_31, 0, sizeof(void*));
memset(&result_32, 0, sizeof(void*));
                    if(_if_conditional22=self==((void*)0)||self->it==((void*)0),                    _if_conditional22) {
                        memset(&result_31,0,sizeof(void*));
                        __result23__ = __result_obj__ = result_31;
                        return __result23__;
                    }
                    self->it=self->it->next;
                    if(_if_conditional23=self->it,                    _if_conditional23) {
                        __result24__ = __result_obj__ = self->it->item;
                        return __result24__;
                    }
                    memset(&result_32,0,sizeof(void*));
                    __result25__ = __result_obj__ = result_32;
                    return __result25__;
}

static int list$1voidp_length(struct list$1voidp* self){
void* __result_obj__;
int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result26__ = self->len;
                        return __result26__;
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    __result28__ = 0;
    return __result28__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
void* right_value37;
char* output_file_name_33;
void* right_value38;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
memset(&output_file_name_33, 0, sizeof(char*));
right_value38 = (void*)0;
    output_file_name_33=(char*)come_increment_ref_count(((char*)(right_value37=xsprintf("%s.c",info->sname))));
    if(right_value37) { right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    string_write(((char*)(right_value38=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_33,(_Bool)0);
    if(right_value38) { right_value38 = come_decrement_ref_count2(right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __result29__ = (_Bool)1;
    if(output_file_name_33) { output_file_name_33 = come_decrement_ref_count2(output_file_name_33, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result29__;
    if(output_file_name_33) { output_file_name_33 = come_decrement_ref_count2(output_file_name_33, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static void clear_tmp_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_34;
void* right_value39;
void* right_value40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_34, 0, sizeof(char*));
right_value39 = (void*)0;
right_value40 = (void*)0;
    input_file_name_34=(char*)come_increment_ref_count(info->sname);
    system(((char*)(right_value40=xsprintf("rm -f \%s.*",((char*)(right_value39=string_to_string(input_file_name_34)))))));
    if(right_value39) { right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value40) { right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(input_file_name_34) { input_file_name_34 = come_decrement_ref_count2(input_file_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
char* input_file_name_35;
char* output_file_name_36;
_Bool _if_conditional25;
void* right_value41;
char* __dec_obj11;
void* right_value42;
char* __dec_obj12;
void* right_value43;
char* cmd_37;
_Bool exist_common_h_38;
struct _IO_FILE* f_39;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
int rc_40;
_Bool _if_conditional30;
void* right_value44;
void* right_value45;
char* cmd2_41;
_Bool _if_conditional31;
int rc_42;
_Bool _if_conditional32;
void* right_value46;
char* command2_43;
_Bool _if_conditional33;
void* right_value47;
void* right_value48;
char* cmd3_44;
_Bool _if_conditional34;
int rc_45;
void* right_value49;
char* command2_46;
_Bool _if_conditional35;
_Bool _if_conditional36;
void* right_value50;
void* right_value51;
char* cmd4_47;
void* right_value52;
char* command_48;
_Bool _if_conditional37;
void* right_value53;
char* command2_49;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_35, 0, sizeof(char*));
memset(&output_file_name_36, 0, sizeof(char*));
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
memset(&cmd_37, 0, sizeof(char*));
memset(&exist_common_h_38, 0, sizeof(_Bool));
memset(&f_39, 0, sizeof(struct _IO_FILE*));
memset(&rc_40, 0, sizeof(int));
right_value44 = (void*)0;
right_value45 = (void*)0;
memset(&cmd2_41, 0, sizeof(char*));
memset(&rc_42, 0, sizeof(int));
right_value46 = (void*)0;
memset(&command2_43, 0, sizeof(char*));
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&cmd3_44, 0, sizeof(char*));
memset(&rc_45, 0, sizeof(int));
right_value49 = (void*)0;
memset(&command2_46, 0, sizeof(char*));
right_value50 = (void*)0;
right_value51 = (void*)0;
memset(&cmd4_47, 0, sizeof(char*));
right_value52 = (void*)0;
memset(&command_48, 0, sizeof(char*));
right_value53 = (void*)0;
memset(&command2_49, 0, sizeof(char*));
    input_file_name_35=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional25=!info->output_header_file&&info->output_file_name,    _if_conditional25) {
        __dec_obj11=output_file_name_36;
        output_file_name_36=(char*)come_increment_ref_count(((char*)(right_value41=string_operator_add(info->output_file_name,".i"))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value41) { right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    else {
        __dec_obj12=output_file_name_36;
        output_file_name_36=(char*)come_increment_ref_count(((char*)(right_value42=string_operator_add(info->sname,".i"))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value42) { right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    cmd_37=(char*)come_increment_ref_count(((char*)(right_value43=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    if(right_value43) { right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    exist_common_h_38=(_Bool)0;
    {
        f_39=fopen("common.h","r");
        if(_if_conditional26=f_39,        _if_conditional26) {
            exist_common_h_38=(_Bool)1;
        }
        if(_if_conditional27=string_operator_equals(info->output_file_name,"common.h"),        _if_conditional27) {
            exist_common_h_38=(_Bool)0;
        }
        if(_if_conditional28=f_39,        _if_conditional28) {
            fclose(f_39);
        }
    }
    if(_if_conditional29=!gCommonHeader,    _if_conditional29) {
        exist_common_h_38=(_Bool)0;
    }
    rc_40=system(cmd_37);
    if(_if_conditional30=rc_40==0,    _if_conditional30) {
        cmd2_41=(char*)come_increment_ref_count(((char*)(right_value45=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_38?((char*)(right_value44=__builtin_string(" -include common.h "))):"",input_file_name_35,output_file_name_36,output_file_name_36))));
        if(right_value44) { right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value45) { right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(_if_conditional31=info->verbose,        _if_conditional31) {
            puts(cmd2_41);
        }
        rc_42=system(cmd2_41);
        if(_if_conditional32=rc_42!=0,        _if_conditional32) {
            printf("failed to cpp(2) (%s)\n",cmd2_41);
            exit(5);
        }
        command2_43=(char*)come_increment_ref_count(((char*)(right_value46=xsprintf("grep error\\: %s.cpp.out",output_file_name_36))));
        if(right_value46) { right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(_if_conditional33=info->verbose,        _if_conditional33) {
            puts(command2_43);
        }
        (void)system(command2_43);
        if(cmd2_41) { cmd2_41 = come_decrement_ref_count2(cmd2_41, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(command2_43) { command2_43 = come_decrement_ref_count2(command2_43, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    else {
        cmd3_44=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_38?((char*)(right_value47=__builtin_string(" -include common.h "))):"",input_file_name_35,output_file_name_36,output_file_name_36))));
        if(right_value47) { right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value48) { right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(_if_conditional34=info->verbose,        _if_conditional34) {
            puts(cmd3_44);
        }
        rc_45=system(cmd3_44);
        command2_46=(char*)come_increment_ref_count(((char*)(right_value49=xsprintf("grep error\\: %s.cpp.out",output_file_name_36))));
        if(right_value49) { right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(_if_conditional35=info->verbose,        _if_conditional35) {
            puts(command2_46);
        }
        (void)system(command2_46);
        if(_if_conditional36=rc_45!=0,        _if_conditional36) {
            cmd4_47=(char*)come_increment_ref_count(((char*)(right_value51=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_38?((char*)(right_value50=__builtin_string(" -include common.h "))):"",input_file_name_35,output_file_name_36,output_file_name_36))));
            if(right_value50) { right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(right_value51) { right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            command_48=(char*)come_increment_ref_count(((char*)(right_value52=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_36,input_file_name_35,info->clang_option,input_file_name_35))));
            if(right_value52) { right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(_if_conditional37=info->verbose,            _if_conditional37) {
                puts(cmd4_47);
            }
            rc_45=system(cmd4_47);
            command2_49=(char*)come_increment_ref_count(((char*)(right_value53=xsprintf("grep error\\: %s.cpp.out",output_file_name_36))));
            if(right_value53) { right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(_if_conditional38=info->verbose,            _if_conditional38) {
                puts(command2_49);
            }
            (void)system(command2_49);
            if(_if_conditional39=rc_45!=0,            _if_conditional39) {
                printf("failed to cpp(2) (%s)\n",cmd4_47);
                exit(5);
            }
            if(cmd4_47) { cmd4_47 = come_decrement_ref_count2(cmd4_47, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(command_48) { command_48 = come_decrement_ref_count2(command_48, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(command2_49) { command2_49 = come_decrement_ref_count2(command2_49, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        if(cmd3_44) { cmd3_44 = come_decrement_ref_count2(cmd3_44, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(command2_46) { command2_46 = come_decrement_ref_count2(command2_46, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    __result30__ = (_Bool)1;
    if(input_file_name_35) { input_file_name_35 = come_decrement_ref_count2(input_file_name_35, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(output_file_name_36) { output_file_name_36 = come_decrement_ref_count2(output_file_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(cmd_37) { cmd_37 = come_decrement_ref_count2(cmd_37, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result30__;
    if(input_file_name_35) { input_file_name_35 = come_decrement_ref_count2(input_file_name_35, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(output_file_name_36) { output_file_name_36 = come_decrement_ref_count2(output_file_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(cmd_37) { cmd_37 = come_decrement_ref_count2(cmd_37, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
void* right_value54;
char* input_file_name_50;
char* output_file_name_51;
_Bool _if_conditional40;
void* right_value55;
char* __dec_obj13;
void* right_value56;
char* __dec_obj14;
void* right_value57;
char* command_52;
_Bool _if_conditional41;
int rc_53;
void* right_value58;
char* command2_54;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool __result31__;
_Bool _if_conditional44;
void* right_value59;
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
memset(&input_file_name_50, 0, sizeof(char*));
memset(&output_file_name_51, 0, sizeof(char*));
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&command_52, 0, sizeof(char*));
memset(&rc_53, 0, sizeof(int));
right_value58 = (void*)0;
memset(&command2_54, 0, sizeof(char*));
right_value59 = (void*)0;
    input_file_name_50=(char*)come_increment_ref_count(((char*)(right_value54=string_operator_add(info->sname,".c"))));
    if(right_value54) { right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    output_file_name_51=((void*)0);
    if(_if_conditional40=info->output_file_name,    _if_conditional40) {
        __dec_obj13=output_file_name_51;
        output_file_name_51=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(info->output_file_name))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value55) { right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    else {
        __dec_obj14=output_file_name_51;
        output_file_name_51=(char*)come_increment_ref_count(((char*)(right_value56=string_operator_add(info->sname,".o"))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value56) { right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    command_52=(char*)come_increment_ref_count(((char*)(right_value57=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_51,input_file_name_50,info->clang_option,input_file_name_50))));
    if(right_value57) { right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(_if_conditional41=info->verbose,    _if_conditional41) {
        puts(command_52);
    }
    rc_53=system(command_52);
    command2_54=(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("grep error\\: %s.out",input_file_name_50))));
    if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(_if_conditional42=info->verbose,    _if_conditional42) {
        puts(command2_54);
    }
    (void)system(command2_54);
    if(_if_conditional43=rc_53!=0,    _if_conditional43) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result31__ = (_Bool)0;
        if(input_file_name_50) { input_file_name_50 = come_decrement_ref_count2(input_file_name_50, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(output_file_name_51) { output_file_name_51 = come_decrement_ref_count2(output_file_name_51, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(command_52) { command_52 = come_decrement_ref_count2(command_52, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(command2_54) { command2_54 = come_decrement_ref_count2(command2_54, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        return __result31__;
    }
    if(_if_conditional44=!output_object_file,    _if_conditional44) {
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value59=__builtin_string(output_file_name_51)))));
        if(right_value59) { right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    __result32__ = (_Bool)1;
    if(input_file_name_50) { input_file_name_50 = come_decrement_ref_count2(input_file_name_50, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(output_file_name_51) { output_file_name_51 = come_decrement_ref_count2(output_file_name_51, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(command_52) { command_52 = come_decrement_ref_count2(command_52, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(command2_54) { command2_54 = come_decrement_ref_count2(command2_54, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result32__;
    if(input_file_name_50) { input_file_name_50 = come_decrement_ref_count2(input_file_name_50, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(output_file_name_51) { output_file_name_51 = come_decrement_ref_count2(output_file_name_51, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(command_52) { command_52 = come_decrement_ref_count2(command_52, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(command2_54) { command2_54 = come_decrement_ref_count2(command2_54, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
char* output_file_name_55;
_Bool _if_conditional45;
void* right_value60;
char* __dec_obj15;
void* right_value61;
char* __dec_obj16;
void* right_value62;
void* right_value63;
struct buffer* command_56;
void* right_value64;
struct list$1charph* o2_saved_57;
char* it_60;
_Bool _for_condtionalA2;
void* right_value65;
_Bool _if_conditional50;
void* right_value66;
char* cmd_63;
int rc_64;
_Bool _if_conditional51;
void* right_value67;
_Bool _if_conditional52;
void* right_value68;
_Bool _if_conditional53;
void* right_value69;
void* right_value70;
_Bool _if_conditional54;
_Bool __result40__;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_55, 0, sizeof(char*));
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
memset(&command_56, 0, sizeof(struct buffer*));
right_value64 = (void*)0;
memset(&o2_saved_57, 0, sizeof(struct list$1charph*));
memset(&it_60, 0, sizeof(char*));
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&cmd_63, 0, sizeof(char*));
memset(&rc_64, 0, sizeof(int));
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
    output_file_name_55=((void*)0);
    if(_if_conditional45=info->output_file_name,    _if_conditional45) {
        __dec_obj15=output_file_name_55;
        output_file_name_55=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(info->output_file_name))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value60) { right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    else {
        __dec_obj16=output_file_name_55;
        output_file_name_55=(char*)come_increment_ref_count(((char*)(right_value61=xnoextname(info->sname))));
        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value61) { right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    command_56=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value63=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value62=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 229, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(command_56,((char*)(right_value64=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_55,getenv("HOME"),"/usr/local/"))));
    if(right_value64) { right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    for(
    o2_saved_57=(object_files),it_60=list$1charph_begin((o2_saved_57)) ,    0;    _for_condtionalA2=    !list$1charph_end((o2_saved_57)) ,    _for_condtionalA2;    it_60=list$1charph_next((o2_saved_57)) ,    0    ){
        buffer_append_str(command_56,((char*)(right_value65=xsprintf("%s ",it_60))));
        if(right_value65) { right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    if(_if_conditional50=gComeGC,    _if_conditional50) {
        buffer_append_str(command_56,"-L/usr/local/lib -lcomelang2-gc ");
    }
    else {
        buffer_append_str(command_56,"-L/usr/local/lib -lcomelang2 ");
    }
    cmd_63=(char*)come_increment_ref_count(((char*)(right_value66=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    if(right_value66) { right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    rc_64=system(cmd_63);
    if(_if_conditional51=rc_64==0,    _if_conditional51) {
        buffer_append_str(command_56," -L/opt/homebrew/opt/pcre/lib ");
    }
    buffer_append_str(command_56,((char*)(right_value67=xsprintf(" %s ",info->clang_option))));
    if(right_value67) { right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(_if_conditional52=gComeGC,    _if_conditional52) {
        buffer_append_str(command_56,((char*)(right_value68=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        if(right_value68) { right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    if(_if_conditional53=info->verbose,    _if_conditional53) {
        puts(((char*)(right_value69=buffer_to_string(command_56))));
        if(right_value69) { right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    rc_64=system(((char*)(right_value70=buffer_to_string(command_56))));
    if(right_value70) { right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(_if_conditional54=rc_64!=0,    _if_conditional54) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result40__ = (_Bool)0;
        if(output_file_name_55) { output_file_name_55 = come_decrement_ref_count2(output_file_name_55, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(buffer_finalize,command_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(cmd_63) { cmd_63 = come_decrement_ref_count2(cmd_63, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        return __result40__;
    }
    __result41__ = (_Bool)1;
    if(output_file_name_55) { output_file_name_55 = come_decrement_ref_count2(output_file_name_55, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    come_call_finalizer2(buffer_finalize,command_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(cmd_63) { cmd_63 = come_decrement_ref_count2(cmd_63, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result41__;
    if(output_file_name_55) { output_file_name_55 = come_decrement_ref_count2(output_file_name_55, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    come_call_finalizer2(buffer_finalize,command_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(cmd_63) { cmd_63 = come_decrement_ref_count2(cmd_63, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional46;
char* result_58;
char* __result33__;
_Bool _if_conditional47;
char* __result34__;
char* result_59;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_58, 0, sizeof(char*));
memset(&result_59, 0, sizeof(char*));
        if(_if_conditional46=self==((void*)0),        _if_conditional46) {
            memset(&result_58,0,sizeof(char*));
            __result33__ = __result_obj__ = result_58;
            return __result33__;
        }
        self->it=self->head;
        if(_if_conditional47=self->it,        _if_conditional47) {
            __result34__ = __result_obj__ = self->it->item;
            return __result34__;
        }
        memset(&result_59,0,sizeof(char*));
        __result35__ = __result_obj__ = result_59;
        return __result35__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
        __result36__ = self==((void*)0)||self->it==((void*)0);
        return __result36__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional48;
char* result_61;
char* __result37__;
_Bool _if_conditional49;
char* __result38__;
char* result_62;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_61, 0, sizeof(char*));
memset(&result_62, 0, sizeof(char*));
        if(_if_conditional48=self==((void*)0)||self->it==((void*)0),        _if_conditional48) {
            memset(&result_61,0,sizeof(char*));
            __result37__ = __result_obj__ = result_61;
            return __result37__;
        }
        self->it=self->it->next;
        if(_if_conditional49=self->it,        _if_conditional49) {
            __result38__ = __result_obj__ = self->it->item;
            return __result38__;
        }
        memset(&result_62,0,sizeof(char*));
        __result39__ = __result_obj__ = result_62;
        return __result39__;
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
void* right_value71;
void* right_value72;
struct buffer* __dec_obj17;
void* right_value73;
void* right_value74;
struct buffer* __dec_obj18;
char* __dec_obj19;
char* __dec_obj20;
struct sModule* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
    __dec_obj17=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value72=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value71=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 268, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj18=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value73=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 269, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj19=self->mLastCode;
    self->mLastCode=((void*)0);
    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0); }
    __dec_obj20=self->mLastCode2;
    self->mLastCode2=((void*)0);
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0); }
    __result42__ = __result_obj__ = self;
    come_call_finalizer2(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result42__;
    come_call_finalizer2(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional55=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional55) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional56=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional56) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional57=self!=((void*)0)&&self->mLastCode!=((void*)0),        _if_conditional57) {
            if(self->mLastCode) { self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        if(_if_conditional58=self!=((void*)0)&&self->mLastCode2!=((void*)0),        _if_conditional58) {
            if(self->mLastCode2) { self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        if(_if_conditional59=self!=((void*)0)&&self->mLastCode3!=((void*)0),        _if_conditional59) {
            if(self->mLastCode3) { self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
void* right_value75;
void* right_value81;
struct map$2charphsVarph* __dec_obj22;
static int id_74=0;
struct sVarTable* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
right_value81 = (void*)0;
    __dec_obj22=self->mVars;
    self->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value81=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value75=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02transpile.c", 278, "struct map$2charphsVarph"))))))));
    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(map$2charphsVarphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(map$2charphsVarphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mGlobal=global;
    self->mParent=parent;
    self->mID=++id_74;
    __result45__ = __result_obj__ = self;
    come_call_finalizer2(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result45__;
    come_call_finalizer2(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value76;
void* right_value77;
void* right_value78;
int i_69;
_Bool _for_condtionalA3;
void* right_value79;
void* right_value80;
struct list$1charp* __dec_obj21;
struct map$2charphsVarph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
memset(&i_69, 0, sizeof(int));
right_value79 = (void*)0;
right_value80 = (void*)0;
        self->keys=(char**)come_increment_ref_count(((char**)(right_value76=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
        if(right_value76) { right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value77=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1084, "struct sVar*"))));
        come_call_finalizer2(sVar_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value78=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
        if(right_value78) { right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        for(
        i_69=0 ,        0;        _for_condtionalA3=        i_69<1024 ,        _for_condtionalA3;        i_69++ ,        0        ){
            self->item_existance[i_69]=(_Bool)0;
        }
        self->size=1024;
        self->len=0;
        __dec_obj21=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value80=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value79=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
        come_call_finalizer2(list$1charp_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charpp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charpp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self->it=0;
        __result44__ = __result_obj__ = self;
        come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result44__;
        come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional78;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional60=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional60) {
                if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional61=self!=((void*)0)&&self->mCValueName!=((void*)0),            _if_conditional61) {
                if(self->mCValueName) { self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional62=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional62) {
                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional78=self!=((void*)0)&&self->mFunName!=((void*)0),            _if_conditional78) {
                if(self->mFunName) { self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional63;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional69;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional63=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional63) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional65=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional65) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional66=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional66) {
                        if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
                    if(_if_conditional67=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional67) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional69=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional69) {
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional71=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional71) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional72=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional72) {
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional73=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional73) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional74=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional74) {
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional75=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional75) {
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional76=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional76) {
                        if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
                    if(_if_conditional77=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional77) {
                        if(self->mAsmName) { self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional64=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional64) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_65;
_Bool _while_condtional5;
struct list_item$1sTypeph* prev_it_66;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_65, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_66, 0, sizeof(struct list_item$1sTypeph*));
                            it_65=self->head;
                            while(_while_condtional5=it_65!=((void*)0),                            _while_condtional5) {
                                prev_it_66=it_65;
                                it_65=it_65->next;
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional68;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional68=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional68) {
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_67;
_Bool _while_condtional6;
struct list_item$1sNodeph* prev_it_68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_67, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_68, 0, sizeof(struct list_item$1sNodeph*));
                            it_67=self->head;
                            while(_while_condtional6=it_67!=((void*)0),                            _while_condtional6) {
                                prev_it_68=it_67;
                                it_67=it_67->next;
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional70=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional70) {
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result43__ = __result_obj__ = self;
            come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result43__;
            come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_70;
_Bool _while_condtional7;
struct list_item$1charp* prev_it_71;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_70, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_71, 0, sizeof(struct list_item$1charp*));
                it_70=self->head;
                while(_while_condtional7=it_70!=((void*)0),                _while_condtional7) {
                    prev_it_71=it_70;
                    it_70=it_70->next;
                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
int i_72;
_Bool _for_condtionalA4;
_Bool _if_conditional79;
_Bool _if_conditional80;
int i_73;
_Bool _for_condtionalA5;
_Bool _if_conditional81;
_Bool _if_conditional82;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_72, 0, sizeof(int));
memset(&i_73, 0, sizeof(int));
            for(
            i_72=0 ,            0;            _for_condtionalA4=            i_72<self->size ,            _for_condtionalA4;            i_72++ ,            0            ){
                if(_if_conditional79=self->item_existance[i_72],                _if_conditional79) {
                    if(_if_conditional80=1,                    _if_conditional80) {
                        come_call_finalizer2(sVar_finalize,self->items[i_72], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(
            i_73=0 ,            0;            _for_condtionalA5=            i_73<self->size ,            _for_condtionalA5;            i_73++ ,            0            ){
                if(_if_conditional81=self->item_existance[i_73],                _if_conditional81) {
                    if(_if_conditional82=1,                    _if_conditional82) {
                        if(self->keys[i_73]) { self->keys[i_73] = come_decrement_ref_count2(self->keys[i_73], (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(self->item_existance) { self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional83;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional83=self!=((void*)0)&&self->key_list!=((void*)0),        _if_conditional83) {
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    come_call_finalizer2(map$2charphsVarphp_finalize,self->mVars, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
int pointer_num_75;
char* p_76;
_Bool _while_condtional8;
_Bool _if_conditional84;
_Bool _while_condtional9;
void* right_value82;
void* right_value83;
char* name2_77;
void* right_value84;
struct sClass* klass_83;
void* right_value85;
struct sClass* generics_class_84;
_Bool _if_conditional95;
_Bool _if_conditional96;
void* right_value86;
struct sClass* klass2_85;
void* right_value87;
char* __dec_obj23;
void* right_value88;
char* __dec_obj24;
void* right_value97;
void* right_value98;
void* right_value99;
void* right_value100;
void* right_value101;
struct tuple1$1sTypeph* __dec_obj26;
void* right_value102;
void* right_value103;
struct tuple1$1sTypeph* __dec_obj27;
void* right_value104;
void* right_value105;
struct list$1sTypeph* __dec_obj28;
void* right_value106;
void* right_value107;
struct list$1sNodeph* __dec_obj29;
void* right_value108;
void* right_value109;
struct list$1sTypeph* __dec_obj30;
void* right_value110;
void* right_value111;
struct list$1charph* __dec_obj31;
struct tuple1$1sTypeph* __dec_obj32;
struct sNode* __dec_obj33;
void* right_value112;
char* __dec_obj34;
struct sType* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pointer_num_75, 0, sizeof(int));
memset(&p_76, 0, sizeof(char*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&name2_77, 0, sizeof(char*));
right_value84 = (void*)0;
memset(&klass_83, 0, sizeof(struct sClass*));
right_value85 = (void*)0;
memset(&generics_class_84, 0, sizeof(struct sClass*));
right_value86 = (void*)0;
memset(&klass2_85, 0, sizeof(struct sClass*));
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
    pointer_num_75=0;
    p_76=name;
    while(_while_condtional8=*p_76,    _while_condtional8) {
        if(_if_conditional84=xisalpha(*p_76),        _if_conditional84) {
            p_76++;
        }
        else {
            break;
        }
    }
    while(_while_condtional9=*p_76==42,    _while_condtional9) {
        pointer_num_75++;
        p_76++;
    }
    name2_77=(char*)come_increment_ref_count(((char*)(right_value83=string_substring(((char*)(right_value82=__builtin_string(name))),0,-pointer_num_75-1))));
    if(right_value82) { right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value83) { right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    klass_83=((struct sClass*)(right_value84=map$2charphsClassphp_operator_load_element(info->classes,name2_77)));
    come_call_finalizer2(sClass_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    generics_class_84=((struct sClass*)(right_value85=map$2charphsClassphp_operator_load_element(info->generics_classes,name2_77)));
    come_call_finalizer2(sClass_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional95=klass_83==((void*)0)&&generics_class_84==((void*)0),    _if_conditional95) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_77);
    }
    if(_if_conditional96=klass_83,    _if_conditional96) {
        self->mClass=klass_83;
    }
    else {
        klass2_85=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value86=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 321, "struct sClass"))));
        come_call_finalizer2(sClass_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj23=klass2_85->mName;
        klass2_85->mName=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(name))));
        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value87) { right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj24=klass2_85->mDeclareSName;
        klass2_85->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(info->sname))));
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string(name)))),(struct sClass*)come_increment_ref_count(klass2_85));
        if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        self->mClass=((struct sClass*)(right_value99=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value98=__builtin_string(name))))));
        if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sClass_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,klass2_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj26=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value101=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value100=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 330, "struct tuple1$1sTypeph")))),((void*)0)))));
    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj27=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value103=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value102=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 331, "struct tuple1$1sTypeph")))),((void*)0)))));
    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj28=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value104=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 332, "struct list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj29=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value107=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value106=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02transpile.c", 333, "struct list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mOmitArrayNum=(_Bool)0;
    __dec_obj30=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value109=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value108=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 335, "struct list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj31=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 336, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mVarArgs=(_Bool)0;
    __dec_obj32=self->mResultType;
    self->mResultType=((void*)0);
    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mDummyHeap=(_Bool)0;
    self->mNoHeap=(_Bool)0;
    self->mRefference=(_Bool)0;
    self->mPointerNum=pointer_num_75;
    self->mNoArrayPointerNum=0;
    __dec_obj33=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
    self->mDynamicArrayNum=0;
    self->mTypeOfExpression=0;
    __dec_obj34=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=__builtin_string(""))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mOriginalPointerNum=0;
    self->mFunctionParam=(_Bool)0;
    __result77__ = __result_obj__ = self;
    come_call_finalizer2(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(name2_77) { name2_77 = come_decrement_ref_count2(name2_77, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result77__;
    come_call_finalizer2(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(name2_77) { name2_77 = come_decrement_ref_count2(name2_77, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_78;
unsigned int hash_79;
unsigned int it_80;
_Bool _while_condtional10;
_Bool _if_conditional85;
_Bool _if_conditional86;
struct sClass* __result46__;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct sClass* __result47__;
struct sClass* __result48__;
struct sClass* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_78, 0, sizeof(struct sClass*));
memset(&hash_79, 0, sizeof(unsigned int));
memset(&it_80, 0, sizeof(unsigned int));
        memset(&default_value_78,0,sizeof(struct sClass*));
        hash_79=string_get_hash_key(((char*)key))%self->size;
        it_80=hash_79;
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            if(_if_conditional85=self->item_existance[it_80],            _if_conditional85) {
                if(_if_conditional86=string_equals(self->keys[it_80],key),                _if_conditional86) {
                    __result46__ = __result_obj__ = self->items[it_80];
                    come_call_finalizer2(sClass_finalize,default_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result46__;
                }
                it_80++;
                if(_if_conditional93=it_80>=self->size,                _if_conditional93) {
                    it_80=0;
                }
                else {
                    if(_if_conditional94=it_80==hash_79,                    _if_conditional94) {
                        __result47__ = __result_obj__ = default_value_78;
                        come_call_finalizer2(sClass_finalize,default_value_78, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result47__;
                    }
                }
            }
            else {
                __result48__ = __result_obj__ = default_value_78;
                come_call_finalizer2(sClass_finalize,default_value_78, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result48__;
            }
        }
        __result49__ = __result_obj__ = default_value_78;
        come_call_finalizer2(sClass_finalize,default_value_78, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result49__;
        come_call_finalizer2(sClass_finalize,default_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional92;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional87=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional87) {
                            if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
                        if(_if_conditional88=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional88) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional92=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional92) {
                            if(self->mDeclareSName) { self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_81;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_82;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_81, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_82, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_81=self->head;
                                while(_while_condtional11=it_81!=((void*)0),                                _while_condtional11) {
                                    prev_it_82=it_81;
                                    it_81=it_81->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional89;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional89=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional89) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional90;
_Bool _if_conditional91;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional90=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional90) {
                                                    if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                                }
                                                if(_if_conditional91=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional91) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional97;
unsigned int hash_103;
unsigned int it_104;
_Bool _while_condtional14;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool same_key_exist_121;
char* it2_124;
_Bool _for_condtionalA7;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct map$2charphsClassph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_103, 0, sizeof(unsigned int));
memset(&it_104, 0, sizeof(unsigned int));
memset(&same_key_exist_121, 0, sizeof(_Bool));
memset(&it2_124, 0, sizeof(char*));
            if(_if_conditional97=self->len*10>=self->size,            _if_conditional97) {
                map$2charphsClassph_rehash(self);
            }
            hash_103=string_get_hash_key(key)%self->size;
            it_104=hash_103;
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                if(_if_conditional109=self->item_existance[it_104],                _if_conditional109) {
                    if(_if_conditional110=string_equals(self->keys[it_104],key),                    _if_conditional110) {
                        if(_if_conditional111=1,                        _if_conditional111) {
                            list$1charp_remove(self->key_list,self->keys[it_104]);
                            if(self->keys[it_104]) { self->keys[it_104] = come_decrement_ref_count2(self->keys[it_104], (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            self->keys[it_104]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_104]);
                            self->keys[it_104]=key;
                        }
                        if(_if_conditional131=1,                        _if_conditional131) {
                            come_call_finalizer2(sClass_finalize,self->items[it_104], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_104]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_104]=item;
                        }
                        break;
                    }
                    it_104++;
                    if(_if_conditional132=it_104>=self->size,                    _if_conditional132) {
                        it_104=0;
                    }
                    else {
                        if(_if_conditional133=it_104==hash_103,                        _if_conditional133) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_104]=(_Bool)1;
                    if(_if_conditional134=1,                    _if_conditional134) {
                        self->keys[it_104]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_104]=key;
                    }
                    if(_if_conditional135=1,                    _if_conditional135) {
                        self->items[it_104]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_104]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_121=(_Bool)0;
            for(
            it2_124=list$1charp_begin(self->key_list) ,            0;            _for_condtionalA7=            !list$1charp_end(self->key_list) ,            _for_condtionalA7;            it2_124=list$1charp_next(self->key_list) ,            0            ){
                if(_if_conditional140=string_equals(it2_124,key),                _if_conditional140) {
                    same_key_exist_121=(_Bool)1;
                }
            }
            if(_if_conditional141=!same_key_exist_121,            _if_conditional141) {
                list$1charp_push_back(self->key_list,key);
            }
            __result73__ = __result_obj__ = self;
            if(key) { key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result73__;
            if(key) { key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_86;
void* right_value89;
char** keys_87;
void* right_value90;
struct sClass** items_88;
void* right_value91;
_Bool* item_existance_89;
int len_90;
char* it_93;
_Bool _for_condtionalA6;
struct sClass* default_value_96;
void* right_value92;
struct sClass* it2_99;
unsigned int hash_100;
int n_101;
_Bool _while_condtional13;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
struct sClass* default_value_102;
void* right_value93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_86, 0, sizeof(int));
right_value89 = (void*)0;
memset(&keys_87, 0, sizeof(char**));
right_value90 = (void*)0;
memset(&items_88, 0, sizeof(struct sClass**));
right_value91 = (void*)0;
memset(&item_existance_89, 0, sizeof(_Bool*));
memset(&len_90, 0, sizeof(int));
memset(&it_93, 0, sizeof(char*));
memset(&default_value_96, 0, sizeof(struct sClass*));
right_value92 = (void*)0;
memset(&it2_99, 0, sizeof(struct sClass*));
memset(&hash_100, 0, sizeof(unsigned int));
memset(&n_101, 0, sizeof(int));
memset(&default_value_102, 0, sizeof(struct sClass*));
right_value93 = (void*)0;
                    size_86=self->size*10;
                    keys_87=(char**)come_increment_ref_count(((char**)(right_value89=(char**)come_calloc(1, sizeof(char*)*(1*(size_86)), "./comelang2.h", 1331, "char*"))));
                    if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    items_88=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value90=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_86)), "./comelang2.h", 1332, "struct sClass*"))));
                    come_call_finalizer2(sClass_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_89=(_Bool*)come_increment_ref_count(((_Bool*)(right_value91=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_86)), "./comelang2.h", 1333, "_Bool"))));
                    if(right_value91) { right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    len_90=0;
                    for(
                    it_93=map$2charphsClassph_begin(self) ,                    0;                    _for_condtionalA6=                    !map$2charphsClassph_end(self) ,                    _for_condtionalA6;                    it_93=map$2charphsClassph_next(self) ,                    0                    ){
                        memset(&default_value_96,0,sizeof(struct sClass*));
                        it2_99=((struct sClass*)(right_value92=map$2charphsClassph_at(self,it_93,default_value_96)));
                        come_call_finalizer2(sClass_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_100=string_get_hash_key(it_93)%size_86;
                        n_101=hash_100;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional106=item_existance_89[n_101],                            _if_conditional106) {
                                n_101++;
                                if(_if_conditional107=n_101>=size_86,                                _if_conditional107) {
                                    n_101=0;
                                }
                                else {
                                    if(_if_conditional108=n_101==hash_100,                                    _if_conditional108) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_89[n_101]=(_Bool)1;
                                keys_87[n_101]=it_93;
                                items_88[n_101]=((struct sClass*)(right_value93=map$2charphsClassph_at(self,it_93,default_value_102)));
                                come_call_finalizer2(sClass_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                len_90++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    come_free((char*)self->keys);
                    self->keys=keys_87;
                    self->items=items_88;
                    self->item_existance=item_existance_89;
                    self->size=size_86;
                    self->len=len_90;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional98;
char* result_91;
char* __result50__;
_Bool _if_conditional99;
char* __result51__;
char* result_92;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_91, 0, sizeof(char*));
memset(&result_92, 0, sizeof(char*));
                        if(_if_conditional98=self==((void*)0),                        _if_conditional98) {
                            memset(&result_91,0,sizeof(char*));
                            __result50__ = __result_obj__ = result_91;
                            return __result50__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(_if_conditional99=self->key_list->it,                        _if_conditional99) {
                            __result51__ = __result_obj__ = self->key_list->it->item;
                            return __result51__;
                        }
                        memset(&result_92,0,sizeof(char*));
                        __result52__ = __result_obj__ = result_92;
                        return __result52__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result53__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result53__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional100;
char* result_94;
char* __result54__;
_Bool _if_conditional101;
char* __result55__;
char* result_95;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_94, 0, sizeof(char*));
memset(&result_95, 0, sizeof(char*));
                        if(_if_conditional100=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional100) {
                            memset(&result_94,0,sizeof(char*));
                            __result54__ = __result_obj__ = result_94;
                            return __result54__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(_if_conditional101=self->key_list->it,                        _if_conditional101) {
                            __result55__ = __result_obj__ = self->key_list->it->item;
                            return __result55__;
                        }
                        memset(&result_95,0,sizeof(char*));
                        __result56__ = __result_obj__ = result_95;
                        return __result56__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_97;
unsigned int it_98;
_Bool _while_condtional12;
_Bool _if_conditional102;
_Bool _if_conditional103;
struct sClass* __result57__;
_Bool _if_conditional104;
_Bool _if_conditional105;
struct sClass* __result58__;
struct sClass* __result59__;
struct sClass* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_97, 0, sizeof(unsigned int));
memset(&it_98, 0, sizeof(unsigned int));
                            hash_97=string_get_hash_key(((char*)key))%self->size;
                            it_98=hash_97;
                            while(_while_condtional12=(_Bool)1,                            _while_condtional12) {
                                if(_if_conditional102=self->item_existance[it_98],                                _if_conditional102) {
                                    if(_if_conditional103=string_equals(self->keys[it_98],key),                                    _if_conditional103) {
                                        __result57__ = __result_obj__ = self->items[it_98];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result57__;
                                    }
                                    it_98++;
                                    if(_if_conditional104=it_98>=self->size,                                    _if_conditional104) {
                                        it_98=0;
                                    }
                                    else {
                                        if(_if_conditional105=it_98==hash_97,                                        _if_conditional105) {
                                            __result58__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result58__;
                                        }
                                    }
                                }
                                else {
                                    __result59__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result59__;
                                }
                            }
                            __result60__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result60__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_105;
struct list_item$1charp* it_106;
_Bool _while_condtional15;
_Bool _if_conditional112;
struct list$1charp* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_105, 0, sizeof(int));
memset(&it_106, 0, sizeof(struct list_item$1charp*));
                                it2_105=0;
                                it_106=self->head;
                                while(_while_condtional15=it_106!=((void*)0),                                _while_condtional15) {
                                    if(_if_conditional112=string_equals(it_106->item,item),                                    _if_conditional112) {
                                        list$1charp_delete(self,it2_105,it2_105+1);
                                        break;
                                    }
                                    it2_105++;
                                    it_106=it_106->next;
                                }
                                __result64__ = __result_obj__ = self;
                                return __result64__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
int tmp_107;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list$1charp* __result61__;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct list_item$1charp* it_110;
int i_111;
_Bool _while_condtional17;
_Bool _if_conditional121;
struct list_item$1charp* prev_it_112;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct list_item$1charp* it_113;
int i_114;
_Bool _while_condtional18;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct list_item$1charp* prev_it_115;
struct list_item$1charp* it_116;
struct list_item$1charp* head_prev_it_117;
struct list_item$1charp* tail_it_118;
int i_119;
_Bool _while_condtional19;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct list_item$1charp* prev_it_120;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct list$1charp* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_107, 0, sizeof(int));
memset(&it_110, 0, sizeof(struct list_item$1charp*));
memset(&i_111, 0, sizeof(int));
memset(&prev_it_112, 0, sizeof(struct list_item$1charp*));
memset(&it_113, 0, sizeof(struct list_item$1charp*));
memset(&i_114, 0, sizeof(int));
memset(&prev_it_115, 0, sizeof(struct list_item$1charp*));
memset(&it_116, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_117, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_118, 0, sizeof(struct list_item$1charp*));
memset(&i_119, 0, sizeof(int));
memset(&prev_it_120, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional113=head<0,                                            _if_conditional113) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional114=tail<0,                                            _if_conditional114) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional115=head>tail,                                            _if_conditional115) {
                                                tmp_107=tail;
                                                tail=head;
                                                head=tmp_107;
                                            }
                                            if(_if_conditional116=head<0,                                            _if_conditional116) {
                                                head=0;
                                            }
                                            if(_if_conditional117=tail>self->len,                                            _if_conditional117) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional118=head==tail,                                            _if_conditional118) {
                                                __result61__ = __result_obj__ = self;
                                                return __result61__;
                                            }
                                            if(_if_conditional119=head==0&&tail==self->len,                                            _if_conditional119) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional120=head==0,                                                _if_conditional120) {
                                                    it_110=self->head;
                                                    i_111=0;
                                                    while(_while_condtional17=it_110!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional121=i_111<tail,                                                        _if_conditional121) {
                                                            prev_it_112=it_110;
                                                            it_110=it_110->next;
                                                            i_111++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional122=i_111==tail,                                                            _if_conditional122) {
                                                                self->head=it_110;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_110=it_110->next;
                                                                i_111++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional123=tail==self->len,                                                    _if_conditional123) {
                                                        it_113=self->head;
                                                        i_114=0;
                                                        while(_while_condtional18=it_113!=((void*)0),                                                        _while_condtional18) {
                                                            if(_if_conditional124=i_114==head,                                                            _if_conditional124) {
                                                                self->tail=it_113->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional125=i_114>=head,                                                            _if_conditional125) {
                                                                prev_it_115=it_113;
                                                                it_113=it_113->next;
                                                                i_114++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_113=it_113->next;
                                                                i_114++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_116=self->head;
                                                        head_prev_it_117=((void*)0);
                                                        tail_it_118=((void*)0);
                                                        i_119=0;
                                                        while(_while_condtional19=it_116!=((void*)0),                                                        _while_condtional19) {
                                                            if(_if_conditional126=i_119==head,                                                            _if_conditional126) {
                                                                head_prev_it_117=it_116->prev;
                                                            }
                                                            if(_if_conditional127=i_119==tail,                                                            _if_conditional127) {
                                                                tail_it_118=it_116;
                                                            }
                                                            if(_if_conditional128=i_119>=head&&i_119<tail,                                                            _if_conditional128) {
                                                                prev_it_120=it_116;
                                                                it_116=it_116->next;
                                                                i_119++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_116=it_116->next;
                                                                i_119++;
                                                            }
                                                        }
                                                        if(_if_conditional129=head_prev_it_117!=((void*)0),                                                        _if_conditional129) {
                                                            head_prev_it_117->next=tail_it_118;
                                                        }
                                                        if(_if_conditional130=tail_it_118!=((void*)0),                                                        _if_conditional130) {
                                                            tail_it_118->prev=head_prev_it_117;
                                                        }
                                                    }
                                                }
                                            }
                                            __result63__ = __result_obj__ = self;
                                            return __result63__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_108;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_109;
struct list$1charp* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_108, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_109, 0, sizeof(struct list_item$1charp*));
                                                    it_108=self->head;
                                                    while(_while_condtional16=it_108!=((void*)0),                                                    _while_condtional16) {
                                                        prev_it_109=it_108;
                                                        it_108=it_108->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result62__ = __result_obj__ = self;
                                                    return __result62__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional136;
char* result_122;
char* __result65__;
_Bool _if_conditional137;
char* __result66__;
char* result_123;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_122, 0, sizeof(char*));
memset(&result_123, 0, sizeof(char*));
                if(_if_conditional136=self==((void*)0),                _if_conditional136) {
                    memset(&result_122,0,sizeof(char*));
                    __result65__ = __result_obj__ = result_122;
                    return __result65__;
                }
                self->it=self->head;
                if(_if_conditional137=self->it,                _if_conditional137) {
                    __result66__ = __result_obj__ = self->it->item;
                    return __result66__;
                }
                memset(&result_123,0,sizeof(char*));
                __result67__ = __result_obj__ = result_123;
                return __result67__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
                __result68__ = self==((void*)0)||self->it==((void*)0);
                return __result68__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional138;
char* result_125;
char* __result69__;
_Bool _if_conditional139;
char* __result70__;
char* result_126;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_125, 0, sizeof(char*));
memset(&result_126, 0, sizeof(char*));
                if(_if_conditional138=self==((void*)0)||self->it==((void*)0),                _if_conditional138) {
                    memset(&result_125,0,sizeof(char*));
                    __result69__ = __result_obj__ = result_125;
                    return __result69__;
                }
                self->it=self->it->next;
                if(_if_conditional139=self->it,                _if_conditional139) {
                    __result70__ = __result_obj__ = self->it->item;
                    return __result70__;
                }
                memset(&result_126,0,sizeof(char*));
                __result71__ = __result_obj__ = result_126;
                return __result71__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional142;
void* right_value94;
struct list_item$1charp* litem_127;
_Bool _if_conditional143;
void* right_value95;
struct list_item$1charp* litem_128;
void* right_value96;
struct list_item$1charp* litem_129;
struct list$1charp* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1charp*));
right_value95 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1charp*));
right_value96 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional142=self->len==0,                    _if_conditional142) {
                        litem_127=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value94=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_127->prev=((void*)0);
                        litem_127->next=((void*)0);
                        litem_127->item=item;
                        self->tail=litem_127;
                        self->head=litem_127;
                    }
                    else {
                        if(_if_conditional143=self->len==1,                        _if_conditional143) {
                            litem_128=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_128->prev=self->head;
                            litem_128->next=((void*)0);
                            litem_128->item=item;
                            self->tail=litem_128;
                            self->head->next=litem_128;
                        }
                        else {
                            litem_129=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_129->prev=self->tail;
                            litem_129->next=((void*)0);
                            litem_129->item=item;
                            self->tail->next=litem_129;
                            self->tail=litem_129;
                        }
                    }
                    self->len++;
                    __result72__ = __result_obj__ = self;
                    return __result72__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj25;
struct tuple1$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj25=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __result74__ = __result_obj__ = self;
        come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result74__;
        come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional144=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional144) {
            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result75__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result75__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result76__ = __result_obj__ = self;
        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result76__;
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
void* right_value113;
char* __dec_obj35;
void* right_value114;
void* right_value115;
struct list$1tuple2$2charphsTypephph* __dec_obj36;
void* right_value116;
char* __dec_obj37;
struct sClass* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    __dec_obj35=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(name))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj36=self->mFields;
    self->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value115=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value114=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02transpile.c", 384, "struct list$1tuple2$2charphsTypephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj37=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(info->sname))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __result79__ = __result_obj__ = self;
    come_call_finalizer2(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result79__;
    come_call_finalizer2(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result78__ = __result_obj__ = self;
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result78__;
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info){
void* __result_obj__;
char* __dec_obj38;
struct sType* __dec_obj39;
struct list$1sTypeph* __dec_obj40;
struct list$1charph* __dec_obj41;
struct list$1charph* __dec_obj42;
void* right_value117;
void* right_value118;
struct sType* __dec_obj43;
struct list$1sTypeph* o2_saved_130;
struct sType* it_133;
_Bool _for_condtionalA8;
void* right_value156;
struct list$1charph* o2_saved_157;
char* it_158;
_Bool _for_condtionalA9;
void* right_value157;
void* right_value158;
void* right_value159;
struct tuple1$1sTypeph* __dec_obj69;
void* right_value160;
void* right_value161;
struct buffer* __dec_obj70;
void* right_value162;
void* right_value163;
struct buffer* __dec_obj71;
void* right_value164;
void* right_value165;
struct buffer* __dec_obj72;
void* right_value166;
void* right_value167;
struct buffer* __dec_obj73;
void* right_value187;
struct sBlock* __dec_obj81;
char* __dec_obj82;
void* right_value188;
char* __dec_obj83;
struct sFun* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&o2_saved_130, 0, sizeof(struct list$1sTypeph*));
memset(&it_133, 0, sizeof(struct sType*));
right_value156 = (void*)0;
memset(&o2_saved_157, 0, sizeof(struct list$1charph*));
memset(&it_158, 0, sizeof(char*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
    __dec_obj38=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0); }
    __dec_obj39=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj40=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj41=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer2(list$1charph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj42=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer2(list$1charph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    __dec_obj43=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 402, "struct sType")))),"lambda",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(
    o2_saved_130=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_133=list$1sTypeph_begin((o2_saved_130)) ,    0;    _for_condtionalA8=    !list$1sTypeph_end((o2_saved_130)) ,    _for_condtionalA8;    it_133=list$1sTypeph_next((o2_saved_130)) ,    0    ){
        list$1sTypeph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(it_133)))));
        come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    for(
    o2_saved_157=(struct list$1charph*)come_increment_ref_count((param_names)),it_158=list$1charph_begin((o2_saved_157)) ,    0;    _for_condtionalA9=    !list$1charph_end((o2_saved_157)) ,    _for_condtionalA9;    it_158=list$1charph_next((o2_saved_157)) ,    0    ){
        list$1charph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(((char*)(right_value157=string_clone(it_158)))));
        if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj69=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value159=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value158=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 412, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type)))));
    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj70=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value161=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 415, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj71=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value163=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value162=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 416, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj72=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value165=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value164=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 417, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj73=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value167=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value166=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 418, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj81=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value187=sBlock_clone(block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj82=self->mComeHeader;
    self->mComeHeader=(char*)come_increment_ref_count(come_header);
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0); }
    __dec_obj83=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(declare_sname))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value188) { right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __result123__ = __result_obj__ = self;
    come_call_finalizer2(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(name) { name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(come_header) { come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    if(declare_sname) { declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result123__;
    come_call_finalizer2(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(name) { name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(come_header) { come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    if(declare_sname) { declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional145;
struct sType* result_131;
struct sType* __result80__;
_Bool _if_conditional146;
struct sType* __result81__;
struct sType* result_132;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_131, 0, sizeof(struct sType*));
memset(&result_132, 0, sizeof(struct sType*));
        if(_if_conditional145=self==((void*)0),        _if_conditional145) {
            memset(&result_131,0,sizeof(struct sType*));
            __result80__ = __result_obj__ = result_131;
            return __result80__;
        }
        self->it=self->head;
        if(_if_conditional146=self->it,        _if_conditional146) {
            __result81__ = __result_obj__ = self->it->item;
            return __result81__;
        }
        memset(&result_132,0,sizeof(struct sType*));
        __result82__ = __result_obj__ = result_132;
        return __result82__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
        __result83__ = self==((void*)0)||self->it==((void*)0);
        return __result83__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional147;
struct sType* result_134;
struct sType* __result84__;
_Bool _if_conditional148;
struct sType* __result85__;
struct sType* result_135;
struct sType* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_134, 0, sizeof(struct sType*));
memset(&result_135, 0, sizeof(struct sType*));
        if(_if_conditional147=self==((void*)0)||self->it==((void*)0),        _if_conditional147) {
            memset(&result_134,0,sizeof(struct sType*));
            __result84__ = __result_obj__ = result_134;
            return __result84__;
        }
        self->it=self->it->next;
        if(_if_conditional148=self->it,        _if_conditional148) {
            __result85__ = __result_obj__ = self->it->item;
            return __result85__;
        }
        memset(&result_135,0,sizeof(struct sType*));
        __result86__ = __result_obj__ = result_135;
        return __result86__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional149;
void* right_value119;
struct list_item$1sTypeph* litem_136;
struct sType* __dec_obj44;
_Bool _if_conditional150;
void* right_value120;
struct list_item$1sTypeph* litem_137;
struct sType* __dec_obj45;
void* right_value121;
struct list_item$1sTypeph* litem_138;
struct sType* __dec_obj46;
struct list$1sTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&litem_136, 0, sizeof(struct list_item$1sTypeph*));
right_value120 = (void*)0;
memset(&litem_137, 0, sizeof(struct list_item$1sTypeph*));
right_value121 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1sTypeph*));
            if(_if_conditional149=self->len==0,            _if_conditional149) {
                litem_136=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value119=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 225, "struct list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_136->prev=((void*)0);
                litem_136->next=((void*)0);
                __dec_obj44=litem_136->item;
                litem_136->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_136;
                self->head=litem_136;
            }
            else {
                if(_if_conditional150=self->len==1,                _if_conditional150) {
                    litem_137=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value120=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 235, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_137->prev=self->head;
                    litem_137->next=((void*)0);
                    __dec_obj45=litem_137->item;
                    litem_137->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_137;
                    self->head->next=litem_137;
                }
                else {
                    litem_138=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value121=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 245, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_138->prev=self->tail;
                    litem_138->next=((void*)0);
                    __dec_obj46=litem_138->item;
                    litem_138->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_138;
                    self->tail=litem_138;
                }
            }
            self->len++;
            __result87__ = __result_obj__ = self;
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result87__;
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional151;
struct sType* __result88__;
void* right_value122;
struct sType* result_139;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value125;
struct tuple1$1sTypeph* __dec_obj48;
_Bool _if_conditional156;
void* right_value126;
struct tuple1$1sTypeph* __dec_obj49;
_Bool _if_conditional157;
void* right_value127;
char* __dec_obj50;
_Bool _if_conditional158;
void* right_value134;
struct list$1sTypeph* __dec_obj54;
_Bool _if_conditional162;
void* right_value142;
struct list$1sNodeph* __dec_obj58;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value143;
struct list$1sTypeph* __dec_obj59;
_Bool _if_conditional177;
void* right_value150;
struct list$1charph* __dec_obj63;
_Bool _if_conditional181;
void* right_value151;
struct tuple1$1sTypeph* __dec_obj64;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value152;
struct sNode* __dec_obj65;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
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
void* right_value153;
struct sNode* __dec_obj66;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value154;
char* __dec_obj67;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value155;
char* __dec_obj68;
struct sType* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&result_139, 0, sizeof(struct sType*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value134 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
            if(_if_conditional151=self==(void*)0,            _if_conditional151) {
                __result88__ = __result_obj__ = (void*)0;
                return __result88__;
            }
            result_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional152=self!=((void*)0),            _if_conditional152) {
                result_139->mClass=self->mClass;
            }
            if(_if_conditional153=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional153) {
                __dec_obj48=result_139->mNoSolvedGenericsType;
                result_139->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional156=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional156) {
                __dec_obj49=result_139->mOriginalLoadVarType;
                result_139->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value126=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional157=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional157) {
                __dec_obj50=result_139->mGenericsName;
                result_139->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(self->mGenericsName))));
                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            }
            if(_if_conditional158=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional158) {
                __dec_obj54=result_139->mGenericsTypes;
                result_139->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value134=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional162=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional162) {
                __dec_obj58=result_139->mArrayNum;
                result_139->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value142=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                result_139->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional176=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional176) {
                __dec_obj59=result_139->mParamTypes;
                result_139->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value143=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional177=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional177) {
                __dec_obj63=result_139->mParamNames;
                result_139->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional181=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional181) {
                __dec_obj64=result_139->mResultType;
                result_139->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value151=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional182=self!=((void*)0),            _if_conditional182) {
                result_139->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional183=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional183) {
                __dec_obj65=result_139->mAlignas;
                result_139->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=sNode_clone(self->mAlignas))));
                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional184=self!=((void*)0),            _if_conditional184) {
                result_139->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional185=self!=((void*)0),            _if_conditional185) {
                result_139->mShort=self->mShort;
            }
            if(_if_conditional186=self!=((void*)0),            _if_conditional186) {
                result_139->mLong=self->mLong;
            }
            if(_if_conditional187=self!=((void*)0),            _if_conditional187) {
                result_139->mLongLong=self->mLongLong;
            }
            if(_if_conditional188=self!=((void*)0),            _if_conditional188) {
                result_139->mConstant=self->mConstant;
            }
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                result_139->mRegister=self->mRegister;
            }
            if(_if_conditional190=self!=((void*)0),            _if_conditional190) {
                result_139->mVolatile=self->mVolatile;
            }
            if(_if_conditional191=self!=((void*)0),            _if_conditional191) {
                result_139->mStatic=self->mStatic;
            }
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                result_139->mExtern=self->mExtern;
            }
            if(_if_conditional193=self!=((void*)0),            _if_conditional193) {
                result_139->mRestrict=self->mRestrict;
            }
            if(_if_conditional194=self!=((void*)0),            _if_conditional194) {
                result_139->mImmutable=self->mImmutable;
            }
            if(_if_conditional195=self!=((void*)0),            _if_conditional195) {
                result_139->mHeap=self->mHeap;
            }
            if(_if_conditional196=self!=((void*)0),            _if_conditional196) {
                result_139->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional197=self!=((void*)0),            _if_conditional197) {
                result_139->mDelegate=self->mDelegate;
            }
            if(_if_conditional198=self!=((void*)0),            _if_conditional198) {
                result_139->mShare=self->mShare;
            }
            if(_if_conditional199=self!=((void*)0),            _if_conditional199) {
                result_139->mClone=self->mClone;
            }
            if(_if_conditional200=self!=((void*)0),            _if_conditional200) {
                result_139->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional201=self!=((void*)0),            _if_conditional201) {
                result_139->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional202=self!=((void*)0),            _if_conditional202) {
                result_139->mRefference=self->mRefference;
            }
            if(_if_conditional203=self!=((void*)0),            _if_conditional203) {
                result_139->mException=self->mException;
            }
            if(_if_conditional204=self!=((void*)0),            _if_conditional204) {
                result_139->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional205=self!=((void*)0),            _if_conditional205) {
                result_139->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional206=self!=((void*)0),            _if_conditional206) {
                result_139->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional207=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional207) {
                __dec_obj66=result_139->mSizeNum;
                result_139->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(self->mSizeNum))));
                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional208=self!=((void*)0),            _if_conditional208) {
                result_139->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional209=self!=((void*)0),            _if_conditional209) {
                result_139->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional210=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional210) {
                __dec_obj67=result_139->mOriginalTypeName;
                result_139->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value154=string_clone(self->mOriginalTypeName))));
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            }
            if(_if_conditional211=self!=((void*)0),            _if_conditional211) {
                result_139->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional212=self!=((void*)0),            _if_conditional212) {
                result_139->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional213=self!=((void*)0),            _if_conditional213) {
                result_139->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional214=self!=((void*)0),            _if_conditional214) {
                result_139->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional215=self!=((void*)0),            _if_conditional215) {
                result_139->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional216=self!=((void*)0),            _if_conditional216) {
                result_139->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional217=self!=((void*)0),            _if_conditional217) {
                result_139->mInline=self->mInline;
            }
            if(_if_conditional218=self!=((void*)0),            _if_conditional218) {
                result_139->mNullValue=self->mNullValue;
            }
            if(_if_conditional219=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional219) {
                __dec_obj68=result_139->mAsmName;
                result_139->mAsmName=(char*)come_increment_ref_count(((char*)(right_value155=string_clone(self->mAsmName))));
                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            }
            __result102__ = __result_obj__ = result_139;
            come_call_finalizer2(sType_finalize,result_139, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result102__;
            come_call_finalizer2(sType_finalize,result_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional154;
struct tuple1$1sTypeph* __result89__;
void* right_value123;
struct tuple1$1sTypeph* result_140;
_Bool _if_conditional155;
void* right_value124;
struct sType* __dec_obj47;
struct tuple1$1sTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&result_140, 0, sizeof(struct tuple1$1sTypeph*));
right_value124 = (void*)0;
                    if(_if_conditional154=self==(void*)0,                    _if_conditional154) {
                        __result89__ = __result_obj__ = (void*)0;
                        return __result89__;
                    }
                    result_140=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value123=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional155=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional155) {
                        __dec_obj47=result_140->v1;
                        result_140->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    __result90__ = __result_obj__ = result_140;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_140, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result90__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional159;
struct list$1sTypeph* __result91__;
void* right_value128;
void* right_value129;
struct list$1sTypeph* result_141;
struct list_item$1sTypeph* it_142;
_Bool _while_condtional20;
void* right_value133;
struct list$1sTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&result_141, 0, sizeof(struct list$1sTypeph*));
memset(&it_142, 0, sizeof(struct list_item$1sTypeph*));
right_value133 = (void*)0;
                    if(_if_conditional159=self==((void*)0),                    _if_conditional159) {
                        __result91__ = __result_obj__ = ((void*)0);
                        return __result91__;
                    }
                    result_141=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value129=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value128=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_142=self->head;
                    while(_while_condtional20=it_142!=((void*)0),                    _while_condtional20) {
                        list$1sTypeph_add(result_141,(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(it_142->item)))));
                        come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_142=it_142->next;
                    }
                    __result93__ = __result_obj__ = result_141;
                    come_call_finalizer2(list$1sTypephp_finalize,result_141, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result93__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional160;
void* right_value130;
struct list_item$1sTypeph* litem_143;
struct sType* __dec_obj51;
_Bool _if_conditional161;
void* right_value131;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj52;
void* right_value132;
struct list_item$1sTypeph* litem_145;
struct sType* __dec_obj53;
struct list$1sTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1sTypeph*));
right_value131 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
right_value132 = (void*)0;
memset(&litem_145, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional160=self->len==0,                            _if_conditional160) {
                                litem_143=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_143->prev=((void*)0);
                                litem_143->next=((void*)0);
                                __dec_obj51=litem_143->item;
                                litem_143->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_143;
                                self->head=litem_143;
                            }
                            else {
                                if(_if_conditional161=self->len==1,                                _if_conditional161) {
                                    litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value131=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_144->prev=self->head;
                                    litem_144->next=((void*)0);
                                    __dec_obj52=litem_144->item;
                                    litem_144->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_144;
                                    self->head->next=litem_144;
                                }
                                else {
                                    litem_145=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value132=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_145->prev=self->tail;
                                    litem_145->next=((void*)0);
                                    __dec_obj53=litem_145->item;
                                    litem_145->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_145;
                                    self->tail=litem_145;
                                }
                            }
                            self->len++;
                            __result92__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result92__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional163;
struct list$1sNodeph* __result94__;
void* right_value135;
void* right_value136;
struct list$1sNodeph* result_146;
struct list_item$1sNodeph* it_147;
_Bool _while_condtional21;
void* right_value141;
struct list$1sNodeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&result_146, 0, sizeof(struct list$1sNodeph*));
memset(&it_147, 0, sizeof(struct list_item$1sNodeph*));
right_value141 = (void*)0;
                    if(_if_conditional163=self==((void*)0),                    _if_conditional163) {
                        __result94__ = __result_obj__ = ((void*)0);
                        return __result94__;
                    }
                    result_146=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value136=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value135=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_147=self->head;
                    while(_while_condtional21=it_147!=((void*)0),                    _while_condtional21) {
                        list$1sNodeph_add(result_146,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=sNode_clone(it_147->item)))));
                        if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_147=it_147->next;
                    }
                    __result98__ = __result_obj__ = result_146;
                    come_call_finalizer2(list$1sNodephp_finalize,result_146, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result98__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional164;
void* right_value137;
struct list_item$1sNodeph* litem_148;
struct sNode* __dec_obj55;
_Bool _if_conditional165;
void* right_value138;
struct list_item$1sNodeph* litem_149;
struct sNode* __dec_obj56;
void* right_value139;
struct list_item$1sNodeph* litem_150;
struct sNode* __dec_obj57;
struct list$1sNodeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1sNodeph*));
right_value138 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1sNodeph*));
right_value139 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional164=self->len==0,                            _if_conditional164) {
                                litem_148=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value137=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_148->prev=((void*)0);
                                litem_148->next=((void*)0);
                                __dec_obj55=litem_148->item;
                                litem_148->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_148;
                                self->head=litem_148;
                            }
                            else {
                                if(_if_conditional165=self->len==1,                                _if_conditional165) {
                                    litem_149=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value138=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_149->prev=self->head;
                                    litem_149->next=((void*)0);
                                    __dec_obj56=litem_149->item;
                                    litem_149->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_149;
                                    self->head->next=litem_149;
                                }
                                else {
                                    litem_150=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value139=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_150->prev=self->tail;
                                    litem_150->next=((void*)0);
                                    __dec_obj57=litem_150->item;
                                    litem_150->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_150;
                                    self->tail=litem_150;
                                }
                            }
                            self->len++;
                            __result95__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result95__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional166;
struct sNode* __result96__;
void* right_value140;
struct sNode* result_151;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
struct sNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
memset(&result_151, 0, sizeof(struct sNode*));
                            if(_if_conditional166=self==(void*)0,                            _if_conditional166) {
                                __result96__ = __result_obj__ = (void*)0;
                                return __result96__;
                            }
                            result_151=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                            if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional167=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional167) {
                                result_151->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional168=self!=((void*)0),                            _if_conditional168) {
                                result_151->finalize=self->finalize;
                            }
                            if(_if_conditional169=self!=((void*)0),                            _if_conditional169) {
                                result_151->clone=self->clone;
                            }
                            if(_if_conditional170=self!=((void*)0),                            _if_conditional170) {
                                result_151->compile=self->compile;
                            }
                            if(_if_conditional171=self!=((void*)0),                            _if_conditional171) {
                                result_151->sline=self->sline;
                            }
                            if(_if_conditional172=self!=((void*)0),                            _if_conditional172) {
                                result_151->sname=self->sname;
                            }
                            if(_if_conditional173=self!=((void*)0),                            _if_conditional173) {
                                result_151->terminated=self->terminated;
                            }
                            if(_if_conditional174=self!=((void*)0),                            _if_conditional174) {
                                result_151->kind=self->kind;
                            }
                            __result97__ = __result_obj__ = result_151;
                            if(result_151) { result_151 = come_decrement_ref_count2(result_151, ((struct sNode*)result_151)->finalize, ((struct sNode*)result_151)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result97__;
                            if(result_151) { result_151 = come_decrement_ref_count2(result_151, ((struct sNode*)result_151)->finalize, ((struct sNode*)result_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional178;
struct list$1charph* __result99__;
void* right_value144;
void* right_value145;
struct list$1charph* result_152;
struct list_item$1charph* it_153;
_Bool _while_condtional22;
void* right_value149;
struct list$1charph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&result_152, 0, sizeof(struct list$1charph*));
memset(&it_153, 0, sizeof(struct list_item$1charph*));
right_value149 = (void*)0;
                    if(_if_conditional178=self==((void*)0),                    _if_conditional178) {
                        __result99__ = __result_obj__ = ((void*)0);
                        return __result99__;
                    }
                    result_152=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value144=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_153=self->head;
                    while(_while_condtional22=it_153!=((void*)0),                    _while_condtional22) {
                        list$1charph_add(result_152,(char*)come_increment_ref_count(((char*)(right_value149=string_clone(it_153->item)))));
                        if(right_value149) { right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                        it_153=it_153->next;
                    }
                    __result101__ = __result_obj__ = result_152;
                    come_call_finalizer2(list$1charphp_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result101__;
                    come_call_finalizer2(list$1charphp_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional179;
void* right_value146;
struct list_item$1charph* litem_154;
char* __dec_obj60;
_Bool _if_conditional180;
void* right_value147;
struct list_item$1charph* litem_155;
char* __dec_obj61;
void* right_value148;
struct list_item$1charph* litem_156;
char* __dec_obj62;
struct list$1charph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&litem_154, 0, sizeof(struct list_item$1charph*));
right_value147 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charph*));
right_value148 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional179=self->len==0,                            _if_conditional179) {
                                litem_154=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_154->prev=((void*)0);
                                litem_154->next=((void*)0);
                                __dec_obj60=litem_154->item;
                                litem_154->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                self->tail=litem_154;
                                self->head=litem_154;
                            }
                            else {
                                if(_if_conditional180=self->len==1,                                _if_conditional180) {
                                    litem_155=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value147=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_155->prev=self->head;
                                    litem_155->next=((void*)0);
                                    __dec_obj61=litem_155->item;
                                    litem_155->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    self->tail=litem_155;
                                    self->head->next=litem_155;
                                }
                                else {
                                    litem_156=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value148=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_156->prev=self->tail;
                                    litem_156->next=((void*)0);
                                    __dec_obj62=litem_156->item;
                                    litem_156->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    self->tail->next=litem_156;
                                    self->tail=litem_156;
                                }
                            }
                            self->len++;
                            __result100__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                            return __result100__;
                            if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional220;
struct sBlock* __result103__;
void* right_value168;
struct sBlock* result_159;
_Bool _if_conditional223;
void* right_value169;
struct list$1sNodeph* __dec_obj74;
_Bool _if_conditional224;
void* right_value186;
struct sVarTable* __dec_obj80;
struct sBlock* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&result_159, 0, sizeof(struct sBlock*));
right_value169 = (void*)0;
right_value186 = (void*)0;
        if(_if_conditional220=self==(void*)0,        _if_conditional220) {
            __result103__ = __result_obj__ = (void*)0;
            return __result103__;
        }
        result_159=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value168=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional223=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional223) {
            __dec_obj74=result_159->mNodes;
            result_159->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value169=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional224=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional224) {
            __dec_obj80=result_159->mVarTable;
            result_159->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value186=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result122__ = __result_obj__ = result_159;
        come_call_finalizer2(sBlock_finalize,result_159, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result122__;
        come_call_finalizer2(sBlock_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional221;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional221=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional221) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional222=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional222) {
                come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional225;
struct sVarTable* __result104__;
void* right_value170;
struct sVarTable* result_160;
_Bool _if_conditional226;
void* right_value185;
struct map$2charphsVarph* __dec_obj79;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
struct sVarTable* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
memset(&result_160, 0, sizeof(struct sVarTable*));
right_value185 = (void*)0;
                if(_if_conditional225=self==(void*)0,                _if_conditional225) {
                    __result104__ = __result_obj__ = (void*)0;
                    return __result104__;
                }
                result_160=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value170=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional226=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional226) {
                    __dec_obj79=result_160->mVars;
                    result_160->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value185=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional260=self!=((void*)0),                _if_conditional260) {
                    result_160->mGlobal=self->mGlobal;
                }
                if(_if_conditional261=self!=((void*)0),                _if_conditional261) {
                    result_160->mParent=self->mParent;
                }
                if(_if_conditional262=self!=((void*)0),                _if_conditional262) {
                    result_160->mID=self->mID;
                }
                __result121__ = __result_obj__ = result_160;
                come_call_finalizer2(sVarTable_finalize,result_160, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result121__;
                come_call_finalizer2(sVarTable_finalize,result_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional227;
struct map$2charphsVarph* __result105__;
void* right_value171;
void* right_value172;
struct map$2charphsVarph* result_161;
char* it_164;
_Bool _for_condtionalA10;
struct sVar* default_value_167;
void* right_value173;
struct sVar* it2_170;
void* right_value184;
struct map$2charphsVarph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&result_161, 0, sizeof(struct map$2charphsVarph*));
memset(&it_164, 0, sizeof(char*));
memset(&default_value_167, 0, sizeof(struct sVar*));
right_value173 = (void*)0;
memset(&it2_170, 0, sizeof(struct sVar*));
right_value184 = (void*)0;
                        if(_if_conditional227=self==((void*)0),                        _if_conditional227) {
                            __result105__ = __result_obj__ = ((void*)0);
                            return __result105__;
                        }
                        result_161=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value172=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value171=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1176, "struct map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(
                        it_164=map$2charphsVarph_begin(self) ,                        0;                        _for_condtionalA10=                        !map$2charphsVarph_end(self) ,                        _for_condtionalA10;                        it_164=map$2charphsVarph_next(self) ,                        0                        ){
                            memset(&default_value_167,0,sizeof(struct sVar*));
                            it2_170=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value173=map$2charphsVarph_at(self,it_164,default_value_167))));
                            come_call_finalizer2(sVar_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            map$2charphsVarph_insert2(result_161,it_164,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value184=sVar_clone(it2_170)))));
                            come_call_finalizer2(sVar_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sVar_finalize,it2_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        __result120__ = __result_obj__ = result_161;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_161, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result120__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional228;
char* result_162;
char* __result106__;
_Bool _if_conditional229;
char* __result107__;
char* result_163;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_162, 0, sizeof(char*));
memset(&result_163, 0, sizeof(char*));
                            if(_if_conditional228=self==((void*)0),                            _if_conditional228) {
                                memset(&result_162,0,sizeof(char*));
                                __result106__ = __result_obj__ = result_162;
                                return __result106__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(_if_conditional229=self->key_list->it,                            _if_conditional229) {
                                __result107__ = __result_obj__ = self->key_list->it->item;
                                return __result107__;
                            }
                            memset(&result_163,0,sizeof(char*));
                            __result108__ = __result_obj__ = result_163;
                            return __result108__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result109__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result109__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional230;
char* result_165;
char* __result110__;
_Bool _if_conditional231;
char* __result111__;
char* result_166;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_165, 0, sizeof(char*));
memset(&result_166, 0, sizeof(char*));
                            if(_if_conditional230=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional230) {
                                memset(&result_165,0,sizeof(char*));
                                __result110__ = __result_obj__ = result_165;
                                return __result110__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(_if_conditional231=self->key_list->it,                            _if_conditional231) {
                                __result111__ = __result_obj__ = self->key_list->it->item;
                                return __result111__;
                            }
                            memset(&result_166,0,sizeof(char*));
                            __result112__ = __result_obj__ = result_166;
                            return __result112__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_168;
unsigned int it_169;
_Bool _while_condtional23;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct sVar* __result113__;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct sVar* __result114__;
struct sVar* __result115__;
struct sVar* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_168, 0, sizeof(unsigned int));
memset(&it_169, 0, sizeof(unsigned int));
                                hash_168=string_get_hash_key(((char*)key))%self->size;
                                it_169=hash_168;
                                while(_while_condtional23=(_Bool)1,                                _while_condtional23) {
                                    if(_if_conditional232=self->item_existance[it_169],                                    _if_conditional232) {
                                        if(_if_conditional233=string_equals(self->keys[it_169],key),                                        _if_conditional233) {
                                            __result113__ = __result_obj__ = self->items[it_169];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result113__;
                                        }
                                        it_169++;
                                        if(_if_conditional234=it_169>=self->size,                                        _if_conditional234) {
                                            it_169=0;
                                        }
                                        else {
                                            if(_if_conditional235=it_169==hash_168,                                            _if_conditional235) {
                                                __result114__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result114__;
                                            }
                                        }
                                    }
                                    else {
                                        __result115__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result115__;
                                    }
                                }
                                __result116__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result116__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional236;
unsigned int hash_182;
int it_183;
_Bool _while_condtional25;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool same_key_exist_184;
char* it2_185;
_Bool _for_condtionalA12;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct map$2charphsVarph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&it_183, 0, sizeof(int));
memset(&same_key_exist_184, 0, sizeof(_Bool));
memset(&it2_185, 0, sizeof(char*));
                                if(_if_conditional236=self->len*2>=self->size,                                _if_conditional236) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_182=string_get_hash_key(key)%self->size;
                                it_183=hash_182;
                                while(_while_condtional25=(_Bool)1,                                _while_condtional25) {
                                    if(_if_conditional240=self->item_existance[it_183],                                    _if_conditional240) {
                                        if(_if_conditional241=string_equals(self->keys[it_183],key),                                        _if_conditional241) {
                                            if(_if_conditional242=1,                                            _if_conditional242) {
                                                if(self->keys[it_183]) { self->keys[it_183] = come_decrement_ref_count2(self->keys[it_183], (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                                list$1charp_remove(self->key_list,self->keys[it_183]);
                                                self->keys[it_183]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_183]);
                                                self->keys[it_183]=key;
                                            }
                                            if(_if_conditional243=1,                                            _if_conditional243) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_183], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->items[it_183]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_183]=item;
                                            }
                                            break;
                                        }
                                        it_183++;
                                        if(_if_conditional244=it_183>=self->size,                                        _if_conditional244) {
                                            it_183=0;
                                        }
                                        else {
                                            if(_if_conditional245=it_183==hash_182,                                            _if_conditional245) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_183]=(_Bool)1;
                                        if(_if_conditional246=1,                                        _if_conditional246) {
                                            self->keys[it_183]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_183]=key;
                                        }
                                        if(_if_conditional247=1,                                        _if_conditional247) {
                                            self->items[it_183]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_183]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_184=(_Bool)0;
                                for(
                                it2_185=list$1charp_begin(self->key_list) ,                                0;                                _for_condtionalA12=                                !list$1charp_end(self->key_list) ,                                _for_condtionalA12;                                it2_185=list$1charp_next(self->key_list) ,                                0                                ){
                                    if(_if_conditional248=string_equals(it2_185,key),                                    _if_conditional248) {
                                        same_key_exist_184=(_Bool)1;
                                    }
                                }
                                if(_if_conditional249=!same_key_exist_184,                                _if_conditional249) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result117__ = __result_obj__ = self;
                                if(key) { key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result117__;
                                if(key) { key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_171;
void* right_value174;
char** keys_172;
void* right_value175;
struct sVar** items_173;
void* right_value176;
_Bool* item_existance_174;
int len_175;
char* it_176;
_Bool _for_condtionalA11;
struct sVar* default_value_177;
void* right_value177;
struct sVar* it2_178;
unsigned int hash_179;
int n_180;
_Bool _while_condtional24;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct sVar* default_value_181;
void* right_value178;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_171, 0, sizeof(int));
right_value174 = (void*)0;
memset(&keys_172, 0, sizeof(char**));
right_value175 = (void*)0;
memset(&items_173, 0, sizeof(struct sVar**));
right_value176 = (void*)0;
memset(&item_existance_174, 0, sizeof(_Bool*));
memset(&len_175, 0, sizeof(int));
memset(&it_176, 0, sizeof(char*));
memset(&default_value_177, 0, sizeof(struct sVar*));
right_value177 = (void*)0;
memset(&it2_178, 0, sizeof(struct sVar*));
memset(&hash_179, 0, sizeof(unsigned int));
memset(&n_180, 0, sizeof(int));
memset(&default_value_181, 0, sizeof(struct sVar*));
right_value178 = (void*)0;
                                        size_171=self->size*10;
                                        keys_172=(char**)come_increment_ref_count(((char**)(right_value174=(char**)come_calloc(1, sizeof(char*)*(1*(size_171)), "./comelang2.h", 1331, "char*"))));
                                        if(right_value174) { right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        items_173=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value175=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_171)), "./comelang2.h", 1332, "struct sVar*"))));
                                        come_call_finalizer2(sVar_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_174=(_Bool*)come_increment_ref_count(((_Bool*)(right_value176=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_171)), "./comelang2.h", 1333, "_Bool"))));
                                        if(right_value176) { right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        len_175=0;
                                        for(
                                        it_176=map$2charphsVarph_begin(self) ,                                        0;                                        _for_condtionalA11=                                        !map$2charphsVarph_end(self) ,                                        _for_condtionalA11;                                        it_176=map$2charphsVarph_next(self) ,                                        0                                        ){
                                            memset(&default_value_177,0,sizeof(struct sVar*));
                                            it2_178=((struct sVar*)(right_value177=map$2charphsVarph_at(self,it_176,default_value_177)));
                                            come_call_finalizer2(sVar_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            hash_179=string_get_hash_key(it_176)%size_171;
                                            n_180=hash_179;
                                            while(_while_condtional24=(_Bool)1,                                            _while_condtional24) {
                                                if(_if_conditional237=item_existance_174[n_180],                                                _if_conditional237) {
                                                    n_180++;
                                                    if(_if_conditional238=n_180>=size_171,                                                    _if_conditional238) {
                                                        n_180=0;
                                                    }
                                                    else {
                                                        if(_if_conditional239=n_180==hash_179,                                                        _if_conditional239) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_174[n_180]=(_Bool)1;
                                                    keys_172[n_180]=it_176;
                                                    items_173[n_180]=((struct sVar*)(right_value178=map$2charphsVarph_at(self,it_176,default_value_181)));
                                                    come_call_finalizer2(sVar_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    len_175++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        if(self->item_existance) { self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                        come_free((char*)self->keys);
                                        self->keys=keys_172;
                                        self->items=items_173;
                                        self->item_existance=item_existance_174;
                                        self->size=size_171;
                                        self->len=len_175;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional250;
struct sVar* __result118__;
void* right_value179;
struct sVar* result_186;
_Bool _if_conditional251;
void* right_value180;
char* __dec_obj75;
_Bool _if_conditional252;
void* right_value181;
char* __dec_obj76;
_Bool _if_conditional253;
void* right_value182;
struct sType* __dec_obj77;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value183;
char* __dec_obj78;
struct sVar* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
memset(&result_186, 0, sizeof(struct sVar*));
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
                                if(_if_conditional250=self==(void*)0,                                _if_conditional250) {
                                    __result118__ = __result_obj__ = (void*)0;
                                    return __result118__;
                                }
                                result_186=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value179=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar"))));
                                come_call_finalizer2(sVar_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional251=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional251) {
                                    __dec_obj75=result_186->mName;
                                    result_186->mName=(char*)come_increment_ref_count(((char*)(right_value180=string_clone(self->mName))));
                                    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value180) { right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                if(_if_conditional252=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional252) {
                                    __dec_obj76=result_186->mCValueName;
                                    result_186->mCValueName=(char*)come_increment_ref_count(((char*)(right_value181=string_clone(self->mCValueName))));
                                    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value181) { right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                if(_if_conditional253=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional253) {
                                    __dec_obj77=result_186->mType;
                                    result_186->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(self->mType))));
                                    come_call_finalizer2(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional254=self!=((void*)0),                                _if_conditional254) {
                                    result_186->mBlockLevel=self->mBlockLevel;
                                }
                                if(_if_conditional255=self!=((void*)0),                                _if_conditional255) {
                                    result_186->mGlobal=self->mGlobal;
                                }
                                if(_if_conditional256=self!=((void*)0),                                _if_conditional256) {
                                    result_186->mAllocaValue=self->mAllocaValue;
                                }
                                if(_if_conditional257=self!=((void*)0),                                _if_conditional257) {
                                    result_186->mFunctionParam=self->mFunctionParam;
                                }
                                if(_if_conditional258=self!=((void*)0),                                _if_conditional258) {
                                    result_186->mNoFree=self->mNoFree;
                                }
                                if(_if_conditional259=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional259) {
                                    __dec_obj78=result_186->mFunName;
                                    result_186->mFunName=(char*)come_increment_ref_count(((char*)(right_value183=string_clone(self->mFunName))));
                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value183) { right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                __result119__ = __result_obj__ = result_186;
                                come_call_finalizer2(sVar_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result119__;
                                come_call_finalizer2(sVar_finalize,result_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
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
_Bool _if_conditional274;
_Bool _if_conditional275;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional263=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional263) {
            if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        if(_if_conditional264=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional264) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional265=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional265) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional266=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional266) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional267=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional267) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional268=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional268) {
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional269=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional269) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional270=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional270) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional271=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional271) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional272=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional272) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional273=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional273) {
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional274=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional274) {
            if(self->mComeHeader) { self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        if(_if_conditional275=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional275) {
            if(self->mDeclareSName) { self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
}

void init_classes(struct sInfo* info){
void* __result_obj__;
void* right_value189;
void* right_value190;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
void* right_value219;
void* right_value220;
void* right_value221;
int i_187;
_Bool _for_condtionalA13;
void* right_value222;
char* generics_type_188;
void* right_value223;
void* right_value224;
int rc_190;
_Bool _if_conditional276;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
char* type_name_191;
void* right_value229;
void* right_value230;
struct sType* type_192;
void* right_value231;
char* __dec_obj84;
void* right_value237;
void* right_value238;
void* right_value239;
struct sClass* klass_214;
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
void* right_value254;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value282;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
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
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&i_187, 0, sizeof(int));
right_value222 = (void*)0;
memset(&generics_type_188, 0, sizeof(char*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&rc_190, 0, sizeof(int));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&type_name_191, 0, sizeof(char*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&type_192, 0, sizeof(struct sType*));
right_value231 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&klass_214, 0, sizeof(struct sClass*));
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
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
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
right_value282 = (void*)0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value191=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value190=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 431, "struct sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value189) { right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value194=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 432, "struct sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value197=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 433, "struct sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value200=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 434, "struct sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value198) { right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value203=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 435, "struct sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value201) { right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 436, "struct sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value204) { right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value209=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 437, "struct sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value207) { right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value212=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 438, "struct sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    if(right_value210) { right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value215=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 439, "struct sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value218=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 440, "struct sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value221=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 441, "struct sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value219) { right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    come_call_finalizer2(sClass_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(
    i_187=0 ,    0;    _for_condtionalA13=    i_187<12 ,    _for_condtionalA13;    i_187++ ,    0    ){
        generics_type_188=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("generics_type%d",i_187))));
        if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_188),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value224=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 444, "struct sClass")))),generics_type_188,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_187,-1,(_Bool)0,info)))));
        come_call_finalizer2(sClass_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(generics_type_188) { generics_type_188 = come_decrement_ref_count2(generics_type_188, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    char cmd_189[1024];
    memset(&cmd_189, 0, sizeof(char)    *(1024)    );
    snprintf(cmd_189,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    rc_190=system(cmd_189);
    if(_if_conditional276=rc_190==0,    _if_conditional276) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value227=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 452, "struct sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sClass_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type_name_191=(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string("__builtin_va_list"))));
        if(right_value228) { right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        type_192=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 456, "struct sType")))),"__builtin_va_list",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj84=type_192->mOriginalTypeName;
        type_192->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("__builtin_va_list"))));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value231) { right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(type_name_191)))),(struct sType*)come_increment_ref_count(type_192));
        if(right_value237) { right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(type_name_191) { type_name_191 = come_decrement_ref_count2(type_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,type_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_214=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value239=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value238=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 464, "struct sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_214->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value247=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value243=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 466, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value245=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 466, "struct sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value244) { right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_214->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value252=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value248=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 467, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 467, "struct sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value249) { right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_214->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value257=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value253=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 468, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value255=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 468, "struct sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value254) { right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_214->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value262=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value258=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 469, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 469, "struct sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value259) { right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_214->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value267=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value263=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 470, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 470, "struct sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value282=sClass_clone(klass_214)))));
        if(right_value268) { right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sClass_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,klass_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional277;
unsigned int hash_210;
unsigned int it_211;
_Bool _while_condtional28;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool same_key_exist_212;
char* it2_213;
_Bool _for_condtionalA15;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct map$2charphsTypeph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_210, 0, sizeof(unsigned int));
memset(&it_211, 0, sizeof(unsigned int));
memset(&same_key_exist_212, 0, sizeof(_Bool));
memset(&it2_213, 0, sizeof(char*));
            if(_if_conditional277=self->len*10>=self->size,            _if_conditional277) {
                map$2charphsTypeph_rehash(self);
            }
            hash_210=string_get_hash_key(key)%self->size;
            it_211=hash_210;
            while(_while_condtional28=(_Bool)1,            _while_condtional28) {
                if(_if_conditional289=self->item_existance[it_211],                _if_conditional289) {
                    if(_if_conditional290=string_equals(self->keys[it_211],key),                    _if_conditional290) {
                        if(_if_conditional291=1,                        _if_conditional291) {
                            list$1charp_remove(self->key_list,self->keys[it_211]);
                            if(self->keys[it_211]) { self->keys[it_211] = come_decrement_ref_count2(self->keys[it_211], (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            self->keys[it_211]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_211]);
                            self->keys[it_211]=key;
                        }
                        if(_if_conditional292=1,                        _if_conditional292) {
                            come_call_finalizer2(sType_finalize,self->items[it_211], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_211]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_211]=item;
                        }
                        break;
                    }
                    it_211++;
                    if(_if_conditional293=it_211>=self->size,                    _if_conditional293) {
                        it_211=0;
                    }
                    else {
                        if(_if_conditional294=it_211==hash_210,                        _if_conditional294) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_211]=(_Bool)1;
                    if(_if_conditional295=1,                    _if_conditional295) {
                        self->keys[it_211]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_211]=key;
                    }
                    if(_if_conditional296=1,                    _if_conditional296) {
                        self->items[it_211]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_211]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_212=(_Bool)0;
            for(
            it2_213=list$1charp_begin(self->key_list) ,            0;            _for_condtionalA15=            !list$1charp_end(self->key_list) ,            _for_condtionalA15;            it2_213=list$1charp_next(self->key_list) ,            0            ){
                if(_if_conditional297=string_equals(it2_213,key),                _if_conditional297) {
                    same_key_exist_212=(_Bool)1;
                }
            }
            if(_if_conditional298=!same_key_exist_212,            _if_conditional298) {
                list$1charp_push_back(self->key_list,key);
            }
            __result135__ = __result_obj__ = self;
            if(key) { key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result135__;
            if(key) { key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_193;
void* right_value232;
char** keys_194;
void* right_value233;
struct sType** items_195;
void* right_value234;
_Bool* item_existance_196;
int len_197;
char* it_200;
_Bool _for_condtionalA14;
struct sType* default_value_203;
void* right_value235;
struct sType* it2_206;
unsigned int hash_207;
int n_208;
_Bool _while_condtional27;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
struct sType* default_value_209;
void* right_value236;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_193, 0, sizeof(int));
right_value232 = (void*)0;
memset(&keys_194, 0, sizeof(char**));
right_value233 = (void*)0;
memset(&items_195, 0, sizeof(struct sType**));
right_value234 = (void*)0;
memset(&item_existance_196, 0, sizeof(_Bool*));
memset(&len_197, 0, sizeof(int));
memset(&it_200, 0, sizeof(char*));
memset(&default_value_203, 0, sizeof(struct sType*));
right_value235 = (void*)0;
memset(&it2_206, 0, sizeof(struct sType*));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&n_208, 0, sizeof(int));
memset(&default_value_209, 0, sizeof(struct sType*));
right_value236 = (void*)0;
                    size_193=self->size*10;
                    keys_194=(char**)come_increment_ref_count(((char**)(right_value232=(char**)come_calloc(1, sizeof(char*)*(1*(size_193)), "./comelang2.h", 1331, "char*"))));
                    if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    items_195=(struct sType**)come_increment_ref_count(((struct sType**)(right_value233=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_193)), "./comelang2.h", 1332, "struct sType*"))));
                    come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_196=(_Bool*)come_increment_ref_count(((_Bool*)(right_value234=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_193)), "./comelang2.h", 1333, "_Bool"))));
                    if(right_value234) { right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    len_197=0;
                    for(
                    it_200=map$2charphsTypeph_begin(self) ,                    0;                    _for_condtionalA14=                    !map$2charphsTypeph_end(self) ,                    _for_condtionalA14;                    it_200=map$2charphsTypeph_next(self) ,                    0                    ){
                        memset(&default_value_203,0,sizeof(struct sType*));
                        it2_206=((struct sType*)(right_value235=map$2charphsTypeph_at(self,it_200,default_value_203)));
                        come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_207=string_get_hash_key(it_200)%size_193;
                        n_208=hash_207;
                        while(_while_condtional27=(_Bool)1,                        _while_condtional27) {
                            if(_if_conditional286=item_existance_196[n_208],                            _if_conditional286) {
                                n_208++;
                                if(_if_conditional287=n_208>=size_193,                                _if_conditional287) {
                                    n_208=0;
                                }
                                else {
                                    if(_if_conditional288=n_208==hash_207,                                    _if_conditional288) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_196[n_208]=(_Bool)1;
                                keys_194[n_208]=it_200;
                                items_195[n_208]=((struct sType*)(right_value236=map$2charphsTypeph_at(self,it_200,default_value_209)));
                                come_call_finalizer2(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                len_197++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    come_free((char*)self->keys);
                    self->keys=keys_194;
                    self->items=items_195;
                    self->item_existance=item_existance_196;
                    self->size=size_193;
                    self->len=len_197;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional278;
char* result_198;
char* __result124__;
_Bool _if_conditional279;
char* __result125__;
char* result_199;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_198, 0, sizeof(char*));
memset(&result_199, 0, sizeof(char*));
                        if(_if_conditional278=self==((void*)0),                        _if_conditional278) {
                            memset(&result_198,0,sizeof(char*));
                            __result124__ = __result_obj__ = result_198;
                            return __result124__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(_if_conditional279=self->key_list->it,                        _if_conditional279) {
                            __result125__ = __result_obj__ = self->key_list->it->item;
                            return __result125__;
                        }
                        memset(&result_199,0,sizeof(char*));
                        __result126__ = __result_obj__ = result_199;
                        return __result126__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result127__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result127__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional280;
char* result_201;
char* __result128__;
_Bool _if_conditional281;
char* __result129__;
char* result_202;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_201, 0, sizeof(char*));
memset(&result_202, 0, sizeof(char*));
                        if(_if_conditional280=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional280) {
                            memset(&result_201,0,sizeof(char*));
                            __result128__ = __result_obj__ = result_201;
                            return __result128__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(_if_conditional281=self->key_list->it,                        _if_conditional281) {
                            __result129__ = __result_obj__ = self->key_list->it->item;
                            return __result129__;
                        }
                        memset(&result_202,0,sizeof(char*));
                        __result130__ = __result_obj__ = result_202;
                        return __result130__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_204;
unsigned int it_205;
_Bool _while_condtional26;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct sType* __result131__;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct sType* __result132__;
struct sType* __result133__;
struct sType* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_204, 0, sizeof(unsigned int));
memset(&it_205, 0, sizeof(unsigned int));
                            hash_204=string_get_hash_key(((char*)key))%self->size;
                            it_205=hash_204;
                            while(_while_condtional26=(_Bool)1,                            _while_condtional26) {
                                if(_if_conditional282=self->item_existance[it_205],                                _if_conditional282) {
                                    if(_if_conditional283=string_equals(self->keys[it_205],key),                                    _if_conditional283) {
                                        __result131__ = __result_obj__ = self->items[it_205];
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result131__;
                                    }
                                    it_205++;
                                    if(_if_conditional284=it_205>=self->size,                                    _if_conditional284) {
                                        it_205=0;
                                    }
                                    else {
                                        if(_if_conditional285=it_205==hash_204,                                        _if_conditional285) {
                                            __result132__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result132__;
                                        }
                                    }
                                }
                                else {
                                    __result133__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result133__;
                                }
                            }
                            __result134__ = __result_obj__ = default_value;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result134__;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional299;
void* right_value240;
struct list_item$1tuple2$2charphsTypephph* litem_215;
struct tuple2$2charphsTypeph* __dec_obj85;
_Bool _if_conditional302;
void* right_value241;
struct list_item$1tuple2$2charphsTypephph* litem_216;
struct tuple2$2charphsTypeph* __dec_obj86;
void* right_value242;
struct list_item$1tuple2$2charphsTypephph* litem_217;
struct tuple2$2charphsTypeph* __dec_obj87;
struct list$1tuple2$2charphsTypephph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
memset(&litem_215, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value241 = (void*)0;
memset(&litem_216, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value242 = (void*)0;
memset(&litem_217, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional299=self->len==0,            _if_conditional299) {
                litem_215=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value240=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 225, "struct list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_215->prev=((void*)0);
                litem_215->next=((void*)0);
                __dec_obj85=litem_215->item;
                litem_215->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_215;
                self->head=litem_215;
            }
            else {
                if(_if_conditional302=self->len==1,                _if_conditional302) {
                    litem_216=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value241=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 235, "struct list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_216->prev=self->head;
                    litem_216->next=((void*)0);
                    __dec_obj86=litem_216->item;
                    litem_216->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_216;
                    self->head->next=litem_216;
                }
                else {
                    litem_217=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value242=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 245, "struct list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_217->prev=self->tail;
                    litem_217->next=((void*)0);
                    __dec_obj87=litem_217->item;
                    litem_217->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_217;
                    self->tail=litem_217;
                }
            }
            self->len++;
            __result136__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result136__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional300;
_Bool _if_conditional301;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional300=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional300) {
                        if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
                    if(_if_conditional301=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional301) {
                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj88;
struct sType* __dec_obj89;
struct tuple2$2charphsTypeph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj88=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0); }
            __dec_obj89=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __result137__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            if(v1) { v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result137__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            if(v1) { v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional303;
struct sClass* __result138__;
void* right_value269;
struct sClass* result_218;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
void* right_value270;
char* __dec_obj90;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value280;
struct list$1tuple2$2charphsTypephph* __dec_obj96;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value281;
char* __dec_obj97;
struct sClass* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
memset(&result_218, 0, sizeof(struct sClass*));
right_value270 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
            if(_if_conditional303=self==(void*)0,            _if_conditional303) {
                __result138__ = __result_obj__ = (void*)0;
                return __result138__;
            }
            result_218=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value269=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
            come_call_finalizer2(sClass_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional304=self!=((void*)0),            _if_conditional304) {
                result_218->mStruct=self->mStruct;
            }
            if(_if_conditional305=self!=((void*)0),            _if_conditional305) {
                result_218->mFloat=self->mFloat;
            }
            if(_if_conditional306=self!=((void*)0),            _if_conditional306) {
                result_218->mUnion=self->mUnion;
            }
            if(_if_conditional307=self!=((void*)0),            _if_conditional307) {
                result_218->mGenerics=self->mGenerics;
            }
            if(_if_conditional308=self!=((void*)0),            _if_conditional308) {
                result_218->mMethodGenerics=self->mMethodGenerics;
            }
            if(_if_conditional309=self!=((void*)0),            _if_conditional309) {
                result_218->mEnum=self->mEnum;
            }
            if(_if_conditional310=self!=((void*)0),            _if_conditional310) {
                result_218->mProtocol=self->mProtocol;
            }
            if(_if_conditional311=self!=((void*)0),            _if_conditional311) {
                result_218->mNumber=self->mNumber;
            }
            if(_if_conditional312=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional312) {
                __dec_obj90=result_218->mName;
                result_218->mName=(char*)come_increment_ref_count(((char*)(right_value270=string_clone(self->mName))));
                if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            }
            if(_if_conditional313=self!=((void*)0),            _if_conditional313) {
                result_218->mGenericsNum=self->mGenericsNum;
            }
            if(_if_conditional314=self!=((void*)0),            _if_conditional314) {
                result_218->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(_if_conditional315=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional315) {
                __dec_obj96=result_218->mFields;
                result_218->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value280=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional322=self!=((void*)0),            _if_conditional322) {
                result_218->mOutputed=self->mOutputed;
            }
            if(_if_conditional323=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional323) {
                __dec_obj97=result_218->mDeclareSName;
                result_218->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value281=string_clone(self->mDeclareSName))));
                if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            }
            __result144__ = __result_obj__ = result_218;
            come_call_finalizer2(sClass_finalize,result_218, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result144__;
            come_call_finalizer2(sClass_finalize,result_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional316;
struct list$1tuple2$2charphsTypephph* __result139__;
void* right_value271;
void* right_value272;
struct list$1tuple2$2charphsTypephph* result_219;
struct list_item$1tuple2$2charphsTypephph* it_220;
_Bool _while_condtional29;
void* right_value279;
struct list$1tuple2$2charphsTypephph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&result_219, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_220, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value279 = (void*)0;
                    if(_if_conditional316=self==((void*)0),                    _if_conditional316) {
                        __result139__ = __result_obj__ = ((void*)0);
                        return __result139__;
                    }
                    result_219=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value272=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value271=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 141, "struct list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_220=self->head;
                    while(_while_condtional29=it_220!=((void*)0),                    _while_condtional29) {
                        list$1tuple2$2charphsTypephph_add(result_219,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value279=tuple2$2charphsTypephp_clone(it_220->item)))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_220=it_220->next;
                    }
                    __result143__ = __result_obj__ = result_219;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_219, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result143__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional317;
void* right_value273;
struct list_item$1tuple2$2charphsTypephph* litem_221;
struct tuple2$2charphsTypeph* __dec_obj91;
_Bool _if_conditional318;
void* right_value274;
struct list_item$1tuple2$2charphsTypephph* litem_222;
struct tuple2$2charphsTypeph* __dec_obj92;
void* right_value275;
struct list_item$1tuple2$2charphsTypephph* litem_223;
struct tuple2$2charphsTypeph* __dec_obj93;
struct list$1tuple2$2charphsTypephph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
memset(&litem_221, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value274 = (void*)0;
memset(&litem_222, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value275 = (void*)0;
memset(&litem_223, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional317=self->len==0,                            _if_conditional317) {
                                litem_221=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value273=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 155, "struct list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_221->prev=((void*)0);
                                litem_221->next=((void*)0);
                                __dec_obj91=litem_221->item;
                                litem_221->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_221;
                                self->head=litem_221;
                            }
                            else {
                                if(_if_conditional318=self->len==1,                                _if_conditional318) {
                                    litem_222=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value274=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 165, "struct list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_222->prev=self->head;
                                    litem_222->next=((void*)0);
                                    __dec_obj92=litem_222->item;
                                    litem_222->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_222;
                                    self->head->next=litem_222;
                                }
                                else {
                                    litem_223=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value275=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 175, "struct list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_223->prev=self->tail;
                                    litem_223->next=((void*)0);
                                    __dec_obj93=litem_223->item;
                                    litem_223->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_223;
                                    self->tail=litem_223;
                                }
                            }
                            self->len++;
                            __result140__ = __result_obj__ = self;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result140__;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional319;
struct tuple2$2charphsTypeph* __result141__;
void* right_value276;
struct tuple2$2charphsTypeph* result_224;
_Bool _if_conditional320;
void* right_value277;
char* __dec_obj94;
_Bool _if_conditional321;
void* right_value278;
struct sType* __dec_obj95;
struct tuple2$2charphsTypeph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&result_224, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value277 = (void*)0;
right_value278 = (void*)0;
                            if(_if_conditional319=self==(void*)0,                            _if_conditional319) {
                                __result141__ = __result_obj__ = (void*)0;
                                return __result141__;
                            }
                            result_224=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value276=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional320=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional320) {
                                __dec_obj94=result_224->v1;
                                result_224->v1=(char*)come_increment_ref_count(((char*)(right_value277=string_clone(self->v1))));
                                if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                if(right_value277) { right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                            }
                            if(_if_conditional321=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional321) {
                                __dec_obj95=result_224->v2;
                                result_224->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_clone(self->v2))));
                                come_call_finalizer2(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                            __result142__ = __result_obj__ = result_224;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_224, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result142__;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void init_module(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
void* right_value283;
char* project_name_225;
void* right_value284;
void* right_value285;
void* right_value286;
char* project_name_debug_226;
void* right_value287;
char* cc_227;
void* right_value288;
char* install_228;
void* right_value289;
char* libs_229;
void* right_value290;
char* os_230;
void* right_value291;
char* prefix_231;
void* right_value292;
char* cflags_232;
void* right_value293;
char* cflags_debug_233;
_Bool _or_conditional1;
void* right_value294;
void* right_value295;
void* right_value296;
void* right_value297;
void* right_value298;
void* right_value299;
void* right_value300;
void* right_value301;
void* right_value302;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
void* right_value308;
void* right_value309;
void* right_value310;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
void* right_value317;
void* right_value318;
void* right_value319;
void* right_value320;
void* right_value321;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
memset(&project_name_225, 0, sizeof(char*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&project_name_debug_226, 0, sizeof(char*));
right_value287 = (void*)0;
memset(&cc_227, 0, sizeof(char*));
right_value288 = (void*)0;
memset(&install_228, 0, sizeof(char*));
right_value289 = (void*)0;
memset(&libs_229, 0, sizeof(char*));
right_value290 = (void*)0;
memset(&os_230, 0, sizeof(char*));
right_value291 = (void*)0;
memset(&prefix_231, 0, sizeof(char*));
right_value292 = (void*)0;
memset(&cflags_232, 0, sizeof(char*));
right_value293 = (void*)0;
memset(&cflags_debug_233, 0, sizeof(char*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
    project_name_225=(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string(argv[2]))));
    if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    project_name_debug_226=(char*)come_increment_ref_count(((char*)(right_value286=string_operator_add(((char*)(right_value284=__builtin_string(argv[2]))),((char*)(right_value285=__builtin_string("-debug")))))));
    if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    cc_227=(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string("comelang2"))));
    if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    install_228=(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string("install"))));
    if(right_value288) { right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    libs_229=(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string("-lpcre"))));
    if(right_value289) { right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    os_230=(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string("linux"))));
    if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    prefix_231=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string("/usr/local/"))));
    if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    cflags_232=(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string(" -common-header -O2 "))));
    if(right_value292) { right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    cflags_debug_233=(char*)come_increment_ref_count(((char*)(right_value293=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(_or_conditional1=mkdir(project_name_225,448|56|4|1),    _or_conditional1 != 0) {
        die("mkdir error");
    }
    charp_write(((char*)(right_value319=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: common.h \%s\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c header\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader:\n\tcomelang2 header $(SINGLE_SRCS)\n\ncommon.h: *.c\n\tbash -c 'shopt -s extglob; comelang2 header !(*.c).c'\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm *.log\n\t./\%s\n\ndebug: \%s\n\trm *.log\n\t./\%s\n",((char*)(right_value294=string_to_string(prefix_231))),((char*)(right_value295=string_to_string(project_name_225))),((char*)(right_value296=string_to_string(project_name_225))),((char*)(right_value297=string_to_string(project_name_225))),((char*)(right_value298=string_to_string(project_name_225))),((char*)(right_value299=string_to_string(cc_227))),((char*)(right_value300=string_to_string(install_228))),((char*)(right_value301=string_to_string(cflags_232))),((char*)(right_value302=string_to_string(cflags_debug_233))),((char*)(right_value303=string_to_string(libs_229))),((char*)(right_value304=string_to_string(os_230))),((char*)(right_value305=string_to_string(prefix_231))),((char*)(right_value306=string_to_string(project_name_225))),((char*)(right_value307=string_to_string(project_name_debug_226))),((char*)(right_value308=string_to_string(project_name_225))),((char*)(right_value309=string_to_string(project_name_225))),((char*)(right_value310=string_to_string(project_name_225))),((char*)(right_value311=string_to_string(project_name_225))),((char*)(right_value312=string_to_string(project_name_225))),((char*)(right_value313=string_to_string(project_name_225))),((char*)(right_value314=string_to_string(project_name_225))),((char*)(right_value315=string_to_string(project_name_225))),((char*)(right_value316=string_to_string(project_name_225))),((char*)(right_value317=string_to_string(project_name_debug_226))),((char*)(right_value318=string_to_string(project_name_debug_226)))))),((char*)(right_value321=xsprintf("\%s/Makefile",((char*)(right_value320=string_to_string(project_name_225)))))),(_Bool)0);
    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value299) { right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value300) { right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value301) { right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value302) { right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value314) { right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __result145__ = (_Bool)1;
    if(project_name_225) { project_name_225 = come_decrement_ref_count2(project_name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(project_name_debug_226) { project_name_debug_226 = come_decrement_ref_count2(project_name_debug_226, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(cc_227) { cc_227 = come_decrement_ref_count2(cc_227, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(install_228) { install_228 = come_decrement_ref_count2(install_228, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(libs_229) { libs_229 = come_decrement_ref_count2(libs_229, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(os_230) { os_230 = come_decrement_ref_count2(os_230, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(prefix_231) { prefix_231 = come_decrement_ref_count2(prefix_231, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(cflags_232) { cflags_232 = come_decrement_ref_count2(cflags_232, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(cflags_debug_233) { cflags_debug_233 = come_decrement_ref_count2(cflags_debug_233, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result145__;
    if(project_name_225) { project_name_225 = come_decrement_ref_count2(project_name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(project_name_debug_226) { project_name_debug_226 = come_decrement_ref_count2(project_name_debug_226, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(cc_227) { cc_227 = come_decrement_ref_count2(cc_227, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(install_228) { install_228 = come_decrement_ref_count2(install_228, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(libs_229) { libs_229 = come_decrement_ref_count2(libs_229, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(os_230) { os_230 = come_decrement_ref_count2(os_230, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(prefix_231) { prefix_231 = come_decrement_ref_count2(prefix_231, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(cflags_232) { cflags_232 = come_decrement_ref_count2(cflags_232, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(cflags_debug_233) { cflags_debug_233 = come_decrement_ref_count2(cflags_debug_233, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional2;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional2=system("make run"),    _or_conditional2 != 0) {
        die("system");
    }
    __result146__ = (_Bool)1;
    return __result146__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional3;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional3=system("make debug"),    _or_conditional3 != 0) {
        die("system");
    }
    __result147__ = (_Bool)1;
    return __result147__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional4;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional4=system("make clean"),    _or_conditional4 != 0) {
        die("system");
    }
    __result148__ = (_Bool)1;
    return __result148__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
void* right_value322;
void* right_value323;
_Bool _or_conditional5;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
right_value323 = (void*)0;
    if(_or_conditional5=system(((char*)(right_value323=xsprintf("make install DESTDIR=\%s",((char*)(right_value322=charp_to_string(prefix))))))),    (right_value322) ? right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__):0,
    (right_value323) ? right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__):0,
    _or_conditional5 != 0) {
        die("system");
    }
    __result149__ = (_Bool)1;
    return __result149__;
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool _if_conditional324;
void* right_value324;
void* right_value325;
struct buffer* clang_option_234;
void* right_value326;
void* right_value327;
struct buffer* cpp_option_235;
void* right_value328;
void* right_value329;
struct list$1charph* files_236;
void* right_value330;
void* right_value331;
struct list$1charph* object_files_237;
_Bool output_object_file_238;
_Bool output_cpp_file_239;
_Bool output_source_file_flag_240;
void* right_value332;
char* output_file_name_241;
_Bool verbose_242;
_Bool prohibit_common_header_243;
_Bool come_debug_244;
_Bool come_malloc_245;
_Bool come_str_246;
int i_247;
_Bool _for_condtionalA16;
_Bool _if_conditional325;
void* right_value333;
char* __dec_obj98;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
void* right_value334;
_Bool _if_conditional333;
void* right_value335;
void* right_value336;
void* right_value337;
_Bool _if_conditional334;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
_Bool _if_conditional335;
_Bool _if_conditional336;
void* right_value342;
void* right_value343;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
void* right_value344;
_Bool _if_conditional342;
void* right_value345;
void* right_value346;
_Bool _if_conditional343;
_Bool _if_conditional344;
struct _IO_FILE* f_248;
_Bool _and_conditional1;
_Bool _or_conditional6;
struct list$1charph* o2_saved_249;
char* it_250;
_Bool _for_condtionalA17;
struct sInfo info_251;
void* right_value347;
char* __dec_obj99;
void* right_value348;
char* __dec_obj100;
void* right_value349;
char* __dec_obj101;
void* right_value350;
char* __dec_obj102;
void* right_value351;
void* right_value357;
struct map$2charphsFunph* __dec_obj104;
void* right_value358;
void* right_value364;
struct map$2charphsGenericsFunph* __dec_obj106;
void* right_value365;
void* right_value371;
struct map$2charphsClassph* __dec_obj108;
void* right_value372;
void* right_value378;
struct map$2charphsTypeph* __dec_obj110;
void* right_value379;
void* right_value380;
struct sModule* __dec_obj111;
void* right_value381;
void* right_value382;
struct list$1sRightValueObjectph* __dec_obj112;
void* right_value383;
void* right_value384;
struct list$1CVALUEph* __dec_obj113;
void* right_value385;
void* right_value386;
struct sVarTable* __dec_obj114;
void* right_value387;
void* right_value388;
struct sVarTable* lv_table_268;
void* right_value389;
void* right_value390;
struct list$1charph* __dec_obj115;
void* right_value391;
void* right_value392;
struct map$2charphsClassph* __dec_obj116;
static int n_269=0;
void* right_value393;
char* __dec_obj117;
_Bool _if_conditional381;
void* right_value394;
void* right_value395;
void* right_value396;
struct buffer* __dec_obj118;
void* right_value397;
void* right_value398;
void* right_value399;
struct buffer* __dec_obj119;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional408;
_Bool _if_conditional409;
int __result157__;
_Bool _if_conditional410;
_Bool _if_conditional411;
int __result158__;
_Bool _if_conditional412;
_Bool _if_conditional413;
int __result159__;
_Bool _if_conditional414;
_Bool _if_conditional415;
int __result160__;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
int __result161__;
_Bool _if_conditional419;
_Bool _if_conditional420;
int __result162__;
void* right_value400;
void* right_value401;
struct buffer* clang_option_270;
void* right_value402;
void* right_value403;
struct buffer* cpp_option_271;
void* right_value404;
void* right_value405;
struct list$1charph* files_272;
void* right_value406;
void* right_value407;
struct list$1charph* object_files_273;
_Bool output_object_file_274;
_Bool output_cpp_file_275;
_Bool output_source_file_flag_276;
char* output_file_name_277;
_Bool verbose_278;
_Bool come_debug_279;
_Bool come_malloc_280;
_Bool come_str_281;
int i_282;
_Bool _for_condtionalA30;
_Bool _if_conditional421;
void* right_value408;
char* __dec_obj120;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value409;
_Bool _if_conditional428;
void* right_value410;
void* right_value411;
void* right_value412;
_Bool _if_conditional429;
void* right_value413;
void* right_value414;
void* right_value415;
void* right_value416;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
void* right_value417;
void* right_value418;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
void* right_value419;
_Bool _if_conditional438;
void* right_value420;
void* right_value421;
void* right_value422;
_Bool _if_conditional439;
_Bool _if_conditional440;
struct list$1charph* o2_saved_283;
char* it_284;
_Bool _for_condtionalA31;
struct sInfo info_285;
void* right_value423;
char* __dec_obj121;
void* right_value424;
char* __dec_obj122;
void* right_value425;
char* __dec_obj123;
void* right_value426;
void* right_value427;
struct map$2charphsFunph* __dec_obj124;
void* right_value428;
void* right_value429;
struct map$2charphsGenericsFunph* __dec_obj125;
void* right_value430;
void* right_value431;
struct map$2charphsClassph* __dec_obj126;
void* right_value432;
void* right_value433;
struct map$2charphsTypeph* __dec_obj127;
void* right_value434;
void* right_value435;
struct sModule* __dec_obj128;
void* right_value436;
void* right_value437;
struct list$1sRightValueObjectph* __dec_obj129;
void* right_value438;
void* right_value439;
struct list$1CVALUEph* __dec_obj130;
void* right_value440;
void* right_value441;
struct sVarTable* __dec_obj131;
void* right_value442;
void* right_value443;
struct sVarTable* lv_table_286;
void* right_value444;
void* right_value445;
struct list$1charph* __dec_obj132;
void* right_value446;
void* right_value447;
struct map$2charphsClassph* __dec_obj133;
_Bool _if_conditional441;
void* right_value448;
void* right_value449;
void* right_value450;
struct buffer* __dec_obj134;
void* right_value451;
void* right_value452;
void* right_value453;
struct buffer* __dec_obj135;
_Bool _if_conditional442;
void* right_value454;
char* __dec_obj136;
char* __dec_obj137;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
struct sInfo info_287;
void* right_value455;
void* right_value456;
char* __dec_obj138;
void* right_value457;
char* __dec_obj139;
_Bool _if_conditional450;
void* right_value458;
char* __dec_obj140;
char* __dec_obj141;
struct __current_stack2__ __current_stack2__;
int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&clang_option_234, 0, sizeof(struct buffer*));
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&cpp_option_235, 0, sizeof(struct buffer*));
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&files_236, 0, sizeof(struct list$1charph*));
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&object_files_237, 0, sizeof(struct list$1charph*));
memset(&output_object_file_238, 0, sizeof(_Bool));
memset(&output_cpp_file_239, 0, sizeof(_Bool));
memset(&output_source_file_flag_240, 0, sizeof(_Bool));
right_value332 = (void*)0;
memset(&output_file_name_241, 0, sizeof(char*));
memset(&verbose_242, 0, sizeof(_Bool));
memset(&prohibit_common_header_243, 0, sizeof(_Bool));
memset(&come_debug_244, 0, sizeof(_Bool));
memset(&come_malloc_245, 0, sizeof(_Bool));
memset(&come_str_246, 0, sizeof(_Bool));
memset(&i_247, 0, sizeof(int));
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
memset(&f_248, 0, sizeof(struct _IO_FILE*));
memset(&o2_saved_249, 0, sizeof(struct list$1charph*));
memset(&it_250, 0, sizeof(char*));
memset(&info_251, 0, sizeof(struct sInfo));
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
memset(&lv_table_268, 0, sizeof(struct sVarTable*));
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
memset(&clang_option_270, 0, sizeof(struct buffer*));
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&cpp_option_271, 0, sizeof(struct buffer*));
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&files_272, 0, sizeof(struct list$1charph*));
right_value406 = (void*)0;
right_value407 = (void*)0;
memset(&object_files_273, 0, sizeof(struct list$1charph*));
memset(&output_object_file_274, 0, sizeof(_Bool));
memset(&output_cpp_file_275, 0, sizeof(_Bool));
memset(&output_source_file_flag_276, 0, sizeof(_Bool));
memset(&output_file_name_277, 0, sizeof(char*));
memset(&verbose_278, 0, sizeof(_Bool));
memset(&come_debug_279, 0, sizeof(_Bool));
memset(&come_malloc_280, 0, sizeof(_Bool));
memset(&come_str_281, 0, sizeof(_Bool));
memset(&i_282, 0, sizeof(int));
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
memset(&o2_saved_283, 0, sizeof(struct list$1charph*));
memset(&it_284, 0, sizeof(char*));
memset(&info_285, 0, sizeof(struct sInfo));
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
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
memset(&lv_table_286, 0, sizeof(struct sVarTable*));
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
memset(&info_287, 0, sizeof(struct sInfo));
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(_if_conditional324=charp_operator_equals(argv[1],"header")&&argc>=3,    _if_conditional324) {
        gProgramName=argv[0];
        clang_option_234=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value325=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 619, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        cpp_option_235=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value327=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value326=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 620, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        files_236=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value329=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value328=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 621, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        object_files_237=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value331=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value330=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 622, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        output_object_file_238=(_Bool)0;
        output_cpp_file_239=(_Bool)0;
        output_source_file_flag_240=(_Bool)0;
        output_file_name_241=(char*)come_increment_ref_count(((char*)(right_value332=__builtin_string("common.h"))));
        if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        verbose_242=(_Bool)0;
        prohibit_common_header_243=(_Bool)0;
        come_debug_244=(_Bool)0;
        come_malloc_245=(_Bool)0;
        come_str_246=(_Bool)0;
        for(
        i_247=2 ,        0;        _for_condtionalA16=        i_247<argc ,        _for_condtionalA16;        i_247++ ,        0        ){
            if(_if_conditional325=charp_operator_equals(argv[i_247],"-o")&&i_247+1<argc,            _if_conditional325) {
                __dec_obj98=output_file_name_241;
                output_file_name_241=(char*)come_increment_ref_count(((char*)(right_value333=__builtin_string(argv[i_247+1]))));
                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                i_247++;
            }
            else {
                if(_if_conditional326=charp_operator_equals(argv[i_247],"-str"),                _if_conditional326) {
                    come_str_246=(_Bool)1;
                }
                else {
                    if(_if_conditional327=charp_operator_equals(argv[i_247],"-leak"),                    _if_conditional327) {
                        come_malloc_245=(_Bool)1;
                    }
                    else {
                        if(_if_conditional328=charp_operator_equals(argv[i_247],"-gc"),                        _if_conditional328) {
                            gComeGC=(_Bool)1;
                        }
                        else {
                            if(_if_conditional329=charp_operator_equals(argv[i_247],"-g"),                            _if_conditional329) {
                                buffer_append_str(clang_option_234,"-g ");
                            }
                            else {
                                if(_if_conditional330=charp_operator_equals(argv[i_247],"-cg"),                                _if_conditional330) {
                                    buffer_append_str(clang_option_234,"-g ");
                                    come_debug_244=(_Bool)1;
                                }
                                else {
                                    if(_if_conditional331=charp_operator_equals(argv[i_247],"-common-header"),                                    _if_conditional331) {
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional332=charp_operator_equals(argv[i_247],"-original-position"),                                        _if_conditional332) {
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            if(_if_conditional333=string_operator_equals(((char*)(right_value334=charp_operator_load_range_element(argv[i_247],0,2))),"-O"),                                            (right_value334) ? right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__):0,
                                            _if_conditional333) {
                                                buffer_append_str(clang_option_234,((char*)(right_value336=xsprintf(" \%s ",((char*)(right_value335=charp_to_string(argv[i_247])))))));
                                                if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                come_debug_244=(_Bool)0;
                                            }
                                            else {
                                                if(_if_conditional334=string_operator_equals(((char*)(right_value337=charp_operator_load_range_element(argv[i_247],0,2))),"-D"),                                                (right_value337) ? right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__):0,
                                                _if_conditional334) {
                                                    buffer_append_str(cpp_option_235,((char*)(right_value339=xsprintf(" \%s ",((char*)(right_value338=charp_to_string(argv[i_247])))))));
                                                    if(right_value338) { right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                    if(right_value339) { right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                    buffer_append_str(clang_option_234,((char*)(right_value341=xsprintf(" \%s ",((char*)(right_value340=charp_to_string(argv[i_247])))))));
                                                    if(right_value340) { right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                    if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                }
                                                else {
                                                    if(_if_conditional335=charp_operator_equals(argv[i_247],"-v"),                                                    _if_conditional335) {
                                                        buffer_append_str(clang_option_234,"-v ");
                                                        verbose_242=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional336=strlen(argv[i_247])>=2&&memcmp(argv[i_247],"-I",strlen("-I"))==0,                                                        _if_conditional336) {
                                                            buffer_append_str(cpp_option_235,((char*)(right_value343=charp_operator_add(" ",((char*)(right_value342=charp_operator_add(argv[i_247]," ")))))));
                                                            if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                            if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                        }
                                                        else {
                                                            if(_if_conditional337=charp_operator_equals(argv[i_247],"-gdwarf-4"),                                                            _if_conditional337) {
                                                                buffer_append_str(clang_option_234,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                if(_if_conditional338=charp_operator_equals(argv[i_247],"-s")||charp_operator_equals(argv[i_247],"-S"),                                                                _if_conditional338) {
                                                                    output_source_file_flag_240=(_Bool)1;
                                                                }
                                                                else {
                                                                    if(_if_conditional339=charp_operator_equals(argv[i_247],"-c"),                                                                    _if_conditional339) {
                                                                        output_object_file_238=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional340=charp_operator_equals(argv[i_247],"-E"),                                                                        _if_conditional340) {
                                                                            output_cpp_file_239=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional341=argv[i_247][0]==45,                                                                            _if_conditional341) {
                                                                                buffer_append_str(clang_option_234,((char*)(right_value344=charp_operator_add(argv[i_247]," "))));
                                                                                if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                            }
                                                                            else {
                                                                                if(_if_conditional342=strlen(argv[i_247])>2&&memcmp(argv[i_247]+strlen(argv[i_247])-2,".o",2)==0,                                                                                _if_conditional342) {
                                                                                    list$1charph_push_back(object_files_237,(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string(argv[i_247])))));
                                                                                    if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                                }
                                                                                else {
                                                                                    list$1charph_push_back(files_236,(char*)come_increment_ref_count(((char*)(right_value346=__builtin_string(argv[i_247])))));
                                                                                    if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
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
        gComeDebug=come_debug_244;
        gComeMalloc=come_malloc_245;
        if(_if_conditional343=come_str_246,        _if_conditional343) {
            if(_if_conditional344=gComeGC,            _if_conditional344) {
                buffer_append_str(clang_option_234," -lcomelang2-str-gc -lpcre ");
            }
            else {
                buffer_append_str(clang_option_234," -lcomelang2-str -lpcre ");
            }
        }
        if(_and_conditional1=f_248=fopen(output_file_name_241,"w"),        _and_conditional1 == 0) {
            die("fopen");
        }
        fclose(f_248);
        if(_or_conditional6=truncate(output_file_name_241,0),        _or_conditional6 != 0) {
            die("truncate");
        }
        come_init_v5();
        for(
        o2_saved_249=(struct list$1charph*)come_increment_ref_count((files_236)),it_250=list$1charph_begin((o2_saved_249)) ,        0;        _for_condtionalA17=        !list$1charph_end((o2_saved_249)) ,        _for_condtionalA17;        it_250=list$1charph_next((o2_saved_249)) ,        0        ){
            memset(&info_251,0,sizeof(struct sInfo));
            __dec_obj99=info_251.base_sname;
            info_251.base_sname=(char*)come_increment_ref_count(((char*)(right_value347=__builtin_string(it_250))));
            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value347) { right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            __dec_obj100=info_251.sname;
            info_251.sname=(char*)come_increment_ref_count(((char*)(right_value348=__builtin_string(it_250))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            info_251.sline=1;
            info_251.err_num=0;
            __dec_obj101=info_251.clang_option;
            info_251.clang_option=(char*)come_increment_ref_count(((char*)(right_value349=buffer_to_string(clang_option_234))));
            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value349) { right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            __dec_obj102=info_251.cpp_option;
            info_251.cpp_option=(char*)come_increment_ref_count(((char*)(right_value350=buffer_to_string(cpp_option_235))));
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value350) { right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            info_251.no_output_err=(_Bool)0;
            __dec_obj104=info_251.funcs;
            info_251.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value357=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value351=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 728, "struct map$2charphsFunph"))))))));
            come_call_finalizer2(map$2charphsFunph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphsFunphp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(map$2charphsFunphp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj106=info_251.generics_funcs;
            info_251.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value364=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value358=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 729, "struct map$2charphsGenericsFunph"))))))));
            come_call_finalizer2(map$2charphsGenericsFunph_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj108=info_251.classes;
            info_251.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value371=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value365=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 730, "struct map$2charphsClassph"))))))));
            come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphsClassphp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(map$2charphsClassphp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj110=info_251.types;
            info_251.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value378=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value372=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 731, "struct map$2charphsTypeph"))))))));
            come_call_finalizer2(map$2charphsTypeph_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphsTypephp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(map$2charphsTypephp_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj111=info_251.module;
            info_251.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value380=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value379=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 732, "struct sModule"))))))));
            come_call_finalizer2(sModule_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sModule_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sModule_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj112=info_251.right_value_objects;
            info_251.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value382=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value381=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 733, "struct list$1sRightValueObjectph"))))))));
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj113=info_251.stack;
            info_251.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value384=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value383=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 734, "struct list$1CVALUEph"))))))));
            come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj114=info_251.gv_table;
            info_251.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value386=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value385=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 735, "struct sVarTable")))),(_Bool)1,((void*)0)))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sVarTable_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            lv_table_268=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value388=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value387=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 736, "struct sVarTable")))),(_Bool)0,((void*)0)))));
            come_call_finalizer2(sVarTable_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sVarTable_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info_251.lv_table=lv_table_268;
            __dec_obj115=info_251.generics_type_names;
            info_251.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value390=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value389=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 738, "struct list$1charph"))))))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj116=info_251.generics_classes;
            info_251.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value392=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value391=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 739, "struct map$2charphsClassph"))))))));
            come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphsClassphp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(map$2charphsClassphp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info_251.verbose=verbose_242;
            info_251.output_header_file=(_Bool)1;
            info_251.num_source_files=n_269++;
            info_251.max_source_files=list$1charph_length(files_236);
            __dec_obj117=info_251.output_file_name;
            info_251.output_file_name=(char*)come_increment_ref_count(((char*)(right_value393=__builtin_string(output_file_name_241))));
            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            init_classes(&info_251);
            init_module(&info_251);
            clear_tmp_file(&info_251);
            if(_if_conditional381=!cpp(&info_251),            _if_conditional381) {
                printf("%s %d: transpile failed\n",info_251.sname,info_251.sline);
                exit(2);
            }
            __dec_obj118=info_251.original_source;
            info_251.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value396=string_to_buffer(((char*)(right_value395=string_read(((char*)(right_value394=xsprintf("%s",it_250))))))))));
            come_call_finalizer2(buffer_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            come_call_finalizer2(buffer_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj119=info_251.source;
            info_251.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value399=string_to_buffer(((char*)(right_value398=string_read(((char*)(right_value397=xsprintf("%s.i",it_250))))))))));
            come_call_finalizer2(buffer_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            come_call_finalizer2(buffer_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info_251.p=info_251.source->buf;
            info_251.head=info_251.source->buf;
            if(_if_conditional382=!output_cpp_file_239,            _if_conditional382) {
                transpile_v5(&info_251);
                if(_if_conditional383=!output_header_file(&info_251),                _if_conditional383) {
                    printf("%s %d: output source file faield\n",info_251.sname,info_251.sline);
                    exit(2);
                }
            }
            come_call_finalizer2(sInfo_finalize,(&info_251), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,lv_table_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1charphp_finalize,o2_saved_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_final_v5();
        come_call_finalizer2(buffer_finalize,clang_option_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,cpp_option_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,files_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,object_files_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(output_file_name_241) { output_file_name_241 = come_decrement_ref_count2(output_file_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    else {
        if(_if_conditional408=charp_operator_equals(argv[1],"new")&&argc==3,        _if_conditional408) {
            if(_if_conditional409=!new_project(argc,argv),            _if_conditional409) {
                __result157__ = (_Bool)0;
                return __result157__;
            }
        }
        else {
            if(_if_conditional410=charp_operator_equals(argv[1],"run")&&argc==2,            _if_conditional410) {
                if(_if_conditional411=!run_project(argc,argv),                _if_conditional411) {
                    __result158__ = (_Bool)0;
                    return __result158__;
                }
            }
            else {
                if(_if_conditional412=charp_operator_equals(argv[1],"debug")&&argc==2,                _if_conditional412) {
                    if(_if_conditional413=!debug_run_project(argc,argv),                    _if_conditional413) {
                        __result159__ = (_Bool)0;
                        return __result159__;
                    }
                }
                else {
                    if(_if_conditional414=charp_operator_equals(argv[1],"clean")&&argc==2,                    _if_conditional414) {
                        if(_if_conditional415=!clean_project(argc,argv),                        _if_conditional415) {
                            __result160__ = (_Bool)0;
                            return __result160__;
                        }
                    }
                    else {
                        if(_if_conditional416=charp_operator_equals(argv[1],"install")&&argc>=2,                        _if_conditional416) {
                            if(_if_conditional417=argc==2,                            _if_conditional417) {
                                if(_if_conditional418=!install_project(argc,argv,"/usr/local"),                                _if_conditional418) {
                                    __result161__ = (_Bool)0;
                                    return __result161__;
                                }
                            }
                            else {
                                if(_if_conditional419=argc>=3,                                _if_conditional419) {
                                    if(_if_conditional420=!install_project(argc,argv,argv[2]),                                    _if_conditional420) {
                                        __result162__ = (_Bool)0;
                                        return __result162__;
                                    }
                                }
                            }
                        }
                        else {
                            gProgramName=argv[0];
                            clang_option_270=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value401=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value400=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 811, "struct buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            cpp_option_271=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value403=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value402=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 812, "struct buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            files_272=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value405=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value404=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 813, "struct list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            object_files_273=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value407=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value406=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 814, "struct list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            output_object_file_274=(_Bool)0;
                            output_cpp_file_275=(_Bool)0;
                            output_source_file_flag_276=(_Bool)0;
                            output_file_name_277=((void*)0);
                            verbose_278=(_Bool)0;
                            come_debug_279=(_Bool)0;
                            come_malloc_280=(_Bool)0;
                            come_str_281=(_Bool)0;
                            for(
                            i_282=1 ,                            0;                            _for_condtionalA30=                            i_282<argc ,                            _for_condtionalA30;                            i_282++ ,                            0                            ){
                                if(_if_conditional421=charp_operator_equals(argv[i_282],"-o")&&i_282+1<argc,                                _if_conditional421) {
                                    __dec_obj120=output_file_name_277;
                                    output_file_name_277=(char*)come_increment_ref_count(((char*)(right_value408=__builtin_string(argv[i_282+1]))));
                                    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                    i_282++;
                                }
                                else {
                                    if(_if_conditional422=charp_operator_equals(argv[i_282],"-str"),                                    _if_conditional422) {
                                        come_str_281=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional423=charp_operator_equals(argv[i_282],"-leak"),                                        _if_conditional423) {
                                            come_malloc_280=(_Bool)1;
                                        }
                                        else {
                                            if(_if_conditional424=charp_operator_equals(argv[i_282],"-gc"),                                            _if_conditional424) {
                                                gComeGC=(_Bool)1;
                                            }
                                            else {
                                                if(_if_conditional425=charp_operator_equals(argv[i_282],"-cg"),                                                _if_conditional425) {
                                                    come_debug_279=(_Bool)1;
                                                    buffer_append_str(clang_option_270,"-g ");
                                                }
                                                else {
                                                    if(_if_conditional426=charp_operator_equals(argv[i_282],"-common-header"),                                                    _if_conditional426) {
                                                        gCommonHeader=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional427=charp_operator_equals(argv[i_282],"-original-position"),                                                        _if_conditional427) {
                                                            gComeOriginalSourcePosition=(_Bool)0;
                                                        }
                                                        else {
                                                            if(_if_conditional428=string_operator_equals(((char*)(right_value409=charp_operator_load_range_element(argv[i_282],0,2))),"-O"),                                                            (right_value409) ? right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__):0,
                                                            _if_conditional428) {
                                                                buffer_append_str(clang_option_270,((char*)(right_value411=xsprintf(" \%s ",((char*)(right_value410=charp_to_string(argv[i_282])))))));
                                                                if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                come_debug_279=(_Bool)0;
                                                            }
                                                            else {
                                                                if(_if_conditional429=string_operator_equals(((char*)(right_value412=charp_operator_load_range_element(argv[i_282],0,2))),"-D"),                                                                (right_value412) ? right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__):0,
                                                                _if_conditional429) {
                                                                    buffer_append_str(cpp_option_271,((char*)(right_value414=xsprintf(" \%s ",((char*)(right_value413=charp_to_string(argv[i_282])))))));
                                                                    if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                    if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                    buffer_append_str(clang_option_270,((char*)(right_value416=xsprintf(" \%s ",((char*)(right_value415=charp_to_string(argv[i_282])))))));
                                                                    if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                    if(right_value416) { right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                }
                                                                else {
                                                                    if(_if_conditional430=charp_operator_equals(argv[i_282],"-g"),                                                                    _if_conditional430) {
                                                                        buffer_append_str(clang_option_270,"-g ");
                                                                    }
                                                                    else {
                                                                        if(_if_conditional431=charp_operator_equals(argv[i_282],"-v"),                                                                        _if_conditional431) {
                                                                            buffer_append_str(clang_option_270,"-v ");
                                                                            verbose_278=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional432=strlen(argv[i_282])>=2&&memcmp(argv[i_282],"-I",strlen("-I"))==0,                                                                            _if_conditional432) {
                                                                                buffer_append_str(cpp_option_271,((char*)(right_value418=charp_operator_add(" ",((char*)(right_value417=charp_operator_add(argv[i_282]," ")))))));
                                                                                if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                                if(right_value418) { right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                            }
                                                                            else {
                                                                                if(_if_conditional433=charp_operator_equals(argv[i_282],"-gdwarf-4"),                                                                                _if_conditional433) {
                                                                                    buffer_append_str(clang_option_270,"-gdwarf-4 ");
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional434=charp_operator_equals(argv[i_282],"-s")||charp_operator_equals(argv[i_282],"-S"),                                                                                    _if_conditional434) {
                                                                                        output_source_file_flag_276=(_Bool)1;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional435=charp_operator_equals(argv[i_282],"-c"),                                                                                        _if_conditional435) {
                                                                                            output_object_file_274=(_Bool)1;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional436=charp_operator_equals(argv[i_282],"-E"),                                                                                            _if_conditional436) {
                                                                                                output_cpp_file_275=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional437=argv[i_282][0]==45,                                                                                                _if_conditional437) {
                                                                                                    buffer_append_str(clang_option_270,((char*)(right_value419=charp_operator_add(argv[i_282]," "))));
                                                                                                    if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional438=strlen(argv[i_282])>2&&memcmp(argv[i_282]+strlen(argv[i_282])-2,".o",2)==0,                                                                                                    _if_conditional438) {
                                                                                                        list$1charph_push_back(object_files_273,(char*)come_increment_ref_count(((char*)(right_value420=__builtin_string(argv[i_282])))));
                                                                                                        if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                                                    }
                                                                                                    else {
                                                                                                        list$1charph_push_back(files_272,(char*)come_increment_ref_count(((char*)(right_value422=string_clone(((char*)(right_value421=__builtin_string(argv[i_282]))))))));
                                                                                                        if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                                                                        if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
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
                            gComeDebug=come_debug_279;
                            gComeMalloc=come_malloc_280;
                            if(_if_conditional439=come_str_281,                            _if_conditional439) {
                                if(_if_conditional440=gComeGC,                                _if_conditional440) {
                                    buffer_append_str(clang_option_270," -lcomelang2-str-gc -lpcre ");
                                }
                                else {
                                    buffer_append_str(clang_option_270," -lcomelang2-str -lpcre ");
                                }
                            }
                            come_init_v5();
                            for(
                            o2_saved_283=(struct list$1charph*)come_increment_ref_count((files_272)),it_284=list$1charph_begin((o2_saved_283)) ,                            0;                            _for_condtionalA31=                            !list$1charph_end((o2_saved_283)) ,                            _for_condtionalA31;                            it_284=list$1charph_next((o2_saved_283)) ,                            0                            ){
                                memset(&info_285,0,sizeof(struct sInfo));
                                __dec_obj121=info_285.sname;
                                info_285.sname=(char*)come_increment_ref_count(((char*)(right_value423=__builtin_string(it_284))));
                                if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                info_285.sline=1;
                                info_285.err_num=0;
                                __dec_obj122=info_285.clang_option;
                                info_285.clang_option=(char*)come_increment_ref_count(((char*)(right_value424=buffer_to_string(clang_option_270))));
                                if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                __dec_obj123=info_285.cpp_option;
                                info_285.cpp_option=(char*)come_increment_ref_count(((char*)(right_value425=buffer_to_string(cpp_option_271))));
                                if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                info_285.no_output_err=(_Bool)0;
                                __dec_obj124=info_285.funcs;
                                info_285.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value427=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value426=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 913, "struct map$2charphsFunph"))))))));
                                come_call_finalizer2(map$2charphsFunph_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsFunphp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsFunphp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj125=info_285.generics_funcs;
                                info_285.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value429=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value428=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 914, "struct map$2charphsGenericsFunph"))))))));
                                come_call_finalizer2(map$2charphsGenericsFunph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj126=info_285.classes;
                                info_285.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value431=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value430=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 915, "struct map$2charphsClassph"))))))));
                                come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj127=info_285.types;
                                info_285.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value433=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value432=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 916, "struct map$2charphsTypeph"))))))));
                                come_call_finalizer2(map$2charphsTypeph_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsTypephp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsTypephp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj128=info_285.module;
                                info_285.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value435=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value434=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 917, "struct sModule"))))))));
                                come_call_finalizer2(sModule_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sModule_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sModule_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj129=info_285.right_value_objects;
                                info_285.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value437=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value436=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 918, "struct list$1sRightValueObjectph"))))))));
                                come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj130=info_285.stack;
                                info_285.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value439=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value438=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 919, "struct list$1CVALUEph"))))))));
                                come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1CVALUEphp_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1CVALUEphp_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj131=info_285.gv_table;
                                info_285.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value441=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value440=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 920, "struct sVarTable")))),(_Bool)1,((void*)0)))));
                                come_call_finalizer2(sVarTable_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sVarTable_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sVarTable_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                lv_table_286=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value443=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value442=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 921, "struct sVarTable")))),(_Bool)0,((void*)0)))));
                                come_call_finalizer2(sVarTable_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sVarTable_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                info_285.lv_table=lv_table_286;
                                __dec_obj132=info_285.generics_type_names;
                                info_285.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value445=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value444=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 923, "struct list$1charph"))))))));
                                come_call_finalizer2(list$1charph_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1charphp_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1charphp_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj133=info_285.generics_classes;
                                info_285.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value447=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value446=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 924, "struct map$2charphsClassph"))))))));
                                come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                info_285.verbose=verbose_278;
                                init_classes(&info_285);
                                init_module(&info_285);
                                clear_tmp_file(&info_285);
                                if(_if_conditional441=!cpp(&info_285),                                _if_conditional441) {
                                    printf("%s %d: transpile failed\n",info_285.sname,info_285.sline);
                                    exit(2);
                                }
                                __dec_obj134=info_285.original_source;
                                info_285.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value450=string_to_buffer(((char*)(right_value449=string_read(((char*)(right_value448=xsprintf("%s",it_284))))))))));
                                come_call_finalizer2(buffer_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                if(right_value448) { right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                if(right_value449) { right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                come_call_finalizer2(buffer_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj135=info_285.source;
                                info_285.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value453=string_to_buffer(((char*)(right_value452=string_read(((char*)(right_value451=xsprintf("%s.i",it_284))))))))));
                                come_call_finalizer2(buffer_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                if(right_value452) { right_value452 = come_decrement_ref_count2(right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                come_call_finalizer2(buffer_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                info_285.p=info_285.source->buf;
                                info_285.head=info_285.source->buf;
                                if(_if_conditional442=output_file_name_277,                                _if_conditional442) {
                                    __dec_obj136=info_285.output_file_name;
                                    info_285.output_file_name=(char*)come_increment_ref_count(((char*)(right_value454=__builtin_string(output_file_name_277))));
                                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                else {
                                    __dec_obj137=info_285.output_file_name;
                                    info_285.output_file_name=((void*)0);
                                    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                }
                                if(_if_conditional443=!output_cpp_file_275,                                _if_conditional443) {
                                    transpile_v5(&info_285);
                                    if(_if_conditional444=!output_source_file_v3(&info_285),                                    _if_conditional444) {
                                        printf("%s %d: output source file faield\n",info_285.sname,info_285.sline);
                                        exit(2);
                                    }
                                    if(_if_conditional445=info_285.err_num>0,                                    _if_conditional445) {
                                        printf("transpile error. err num %d\n",info_285.err_num);
                                        exit(2);
                                    }
                                    else {
                                        if(_if_conditional446=!compile(&info_285,output_object_file_274,object_files_273),                                        _if_conditional446) {
                                            printf("%s %d: compile faield\n",info_285.sname,info_285.sline);
                                            exit(27);
                                        }
                                    }
                                }
                                come_call_finalizer2(sInfo_finalize,(&info_285), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sVarTable_finalize,lv_table_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1charphp_finalize,o2_saved_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            if(_if_conditional447=!output_object_file_274&&!output_cpp_file_275&&(list$1charph_length(files_272)>0||list$1charph_length(object_files_273)>0),                            _if_conditional447) {
                                memset(&info_287,0,sizeof(struct sInfo));
                                __dec_obj138=info_287.sname;
                                info_287.sname=(char*)come_increment_ref_count(((char*)(right_value456=string_clone(((char*)(right_value455=list$1charphp_operator_load_element(files_272,0)))))));
                                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                if(right_value456) { right_value456 = come_decrement_ref_count2(right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                __dec_obj139=info_287.clang_option;
                                info_287.clang_option=(char*)come_increment_ref_count(((char*)(right_value457=buffer_to_string(clang_option_270))));
                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                if(right_value457) { right_value457 = come_decrement_ref_count2(right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                info_287.verbose=verbose_278;
                                if(_if_conditional450=output_file_name_277,                                _if_conditional450) {
                                    __dec_obj140=info_287.output_file_name;
                                    info_287.output_file_name=(char*)come_increment_ref_count(((char*)(right_value458=__builtin_string(output_file_name_277))));
                                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value458) { right_value458 = come_decrement_ref_count2(right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                else {
                                    __dec_obj141=info_287.output_file_name;
                                    info_287.output_file_name=((void*)0);
                                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                }
                                __current_stack2__.info_287 = &info_287;
                                __current_stack2__.clang_option_270 = &clang_option_270;
                                __current_stack2__.cpp_option_271 = &cpp_option_271;
                                __current_stack2__.files_272 = &files_272;
                                __current_stack2__.object_files_273 = &object_files_273;
                                __current_stack2__.output_object_file_274 = &output_object_file_274;
                                __current_stack2__.output_cpp_file_275 = &output_cpp_file_275;
                                __current_stack2__.output_source_file_flag_276 = &output_source_file_flag_276;
                                __current_stack2__.output_file_name_277 = &output_file_name_277;
                                __current_stack2__.verbose_278 = &verbose_278;
                                __current_stack2__.come_debug_279 = &come_debug_279;
                                __current_stack2__.come_malloc_280 = &come_malloc_280;
                                __current_stack2__.come_str_281 = &come_str_281;
                                __current_stack2__.argc = &argc;
                                __current_stack2__.argv = &argv;
                                bool_expect(linker(&info_287,object_files_273),&__current_stack2__,(void*)method_block2_02transpilec);
                                                    if(__current_stack2__.__method_block_result_kind__ == 3)
                    {
                        return (int)__current_stack2__.__method_block_return_value__;
                    }
                                come_call_finalizer2(sInfo_finalize,(&info_287), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
                            }
                            come_final_v5();
                            come_call_finalizer2(buffer_finalize,clang_option_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,cpp_option_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,files_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,object_files_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            if(output_file_name_277) { output_file_name_277 = come_decrement_ref_count2(output_file_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
                    }
                }
            }
        }
    }
    __result165__ = 0;
    return __result165__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
void* right_value352;
void* right_value353;
void* right_value354;
int i_252;
_Bool _for_condtionalA18;
void* right_value355;
void* right_value356;
struct list$1charp* __dec_obj103;
struct map$2charphsFunph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
memset(&i_252, 0, sizeof(int));
right_value355 = (void*)0;
right_value356 = (void*)0;
                self->keys=(char**)come_increment_ref_count(((char**)(right_value352=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
                if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value353=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(1024)), "./comelang2.h", 1084, "struct sFun*"))));
                come_call_finalizer2(sFun_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value354=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
                if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                for(
                i_252=0 ,                0;                _for_condtionalA18=                i_252<1024 ,                _for_condtionalA18;                i_252++ ,                0                ){
                    self->item_existance[i_252]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj103=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value356=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value355=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
                come_call_finalizer2(list$1charp_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charpp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charpp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->it=0;
                __result150__ = __result_obj__ = self;
                come_call_finalizer2(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result150__;
                come_call_finalizer2(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_253;
_Bool _for_condtionalA19;
_Bool _if_conditional345;
_Bool _if_conditional346;
int i_254;
_Bool _for_condtionalA20;
_Bool _if_conditional347;
_Bool _if_conditional348;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_253, 0, sizeof(int));
memset(&i_254, 0, sizeof(int));
                    for(
                    i_253=0 ,                    0;                    _for_condtionalA19=                    i_253<self->size ,                    _for_condtionalA19;                    i_253++ ,                    0                    ){
                        if(_if_conditional345=self->item_existance[i_253],                        _if_conditional345) {
                            if(_if_conditional346=1,                            _if_conditional346) {
                                come_call_finalizer2(sFun_finalize,self->items[i_253], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(
                    i_254=0 ,                    0;                    _for_condtionalA20=                    i_254<self->size ,                    _for_condtionalA20;                    i_254++ ,                    0                    ){
                        if(_if_conditional347=self->item_existance[i_254],                        _if_conditional347) {
                            if(_if_conditional348=1,                            _if_conditional348) {
                                if(self->keys[i_254]) { self->keys[i_254] = come_decrement_ref_count2(self->keys[i_254], (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional349;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional349=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional349) {
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* right_value359;
void* right_value360;
void* right_value361;
int i_255;
_Bool _for_condtionalA21;
void* right_value362;
void* right_value363;
struct list$1charp* __dec_obj105;
struct map$2charphsGenericsFunph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&i_255, 0, sizeof(int));
right_value362 = (void*)0;
right_value363 = (void*)0;
                self->keys=(char**)come_increment_ref_count(((char**)(right_value359=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
                if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value360=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(1024)), "./comelang2.h", 1084, "struct sGenericsFun*"))));
                come_call_finalizer2(sGenericsFun_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value361=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
                if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                for(
                i_255=0 ,                0;                _for_condtionalA21=                i_255<1024 ,                _for_condtionalA21;                i_255++ ,                0                ){
                    self->item_existance[i_255]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj105=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value363=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value362=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
                come_call_finalizer2(list$1charp_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charpp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charpp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->it=0;
                __result151__ = __result_obj__ = self;
                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result151__;
                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional350=self!=((void*)0)&&self->mImplType!=((void*)0),                    _if_conditional350) {
                        come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional351=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                    _if_conditional351) {
                        come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional352=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional352) {
                        if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
                    if(_if_conditional353=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional353) {
                        come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional354=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional354) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional355=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional355) {
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional356=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                    _if_conditional356) {
                        come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional357=self!=((void*)0)&&self->mBlock!=((void*)0),                    _if_conditional357) {
                        if(self->mBlock) { self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
                    if(_if_conditional358=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                    _if_conditional358) {
                        if(self->mGenericsSName) { self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_256;
_Bool _for_condtionalA22;
_Bool _if_conditional359;
_Bool _if_conditional360;
int i_257;
_Bool _for_condtionalA23;
_Bool _if_conditional361;
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_256, 0, sizeof(int));
memset(&i_257, 0, sizeof(int));
                    for(
                    i_256=0 ,                    0;                    _for_condtionalA22=                    i_256<self->size ,                    _for_condtionalA22;                    i_256++ ,                    0                    ){
                        if(_if_conditional359=self->item_existance[i_256],                        _if_conditional359) {
                            if(_if_conditional360=1,                            _if_conditional360) {
                                come_call_finalizer2(sGenericsFun_finalize,self->items[i_256], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(
                    i_257=0 ,                    0;                    _for_condtionalA23=                    i_257<self->size ,                    _for_condtionalA23;                    i_257++ ,                    0                    ){
                        if(_if_conditional361=self->item_existance[i_257],                        _if_conditional361) {
                            if(_if_conditional362=1,                            _if_conditional362) {
                                if(self->keys[i_257]) { self->keys[i_257] = come_decrement_ref_count2(self->keys[i_257], (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional363=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional363) {
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value366;
void* right_value367;
void* right_value368;
int i_258;
_Bool _for_condtionalA24;
void* right_value369;
void* right_value370;
struct list$1charp* __dec_obj107;
struct map$2charphsClassph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&i_258, 0, sizeof(int));
right_value369 = (void*)0;
right_value370 = (void*)0;
                self->keys=(char**)come_increment_ref_count(((char**)(right_value366=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
                if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value367=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(1024)), "./comelang2.h", 1084, "struct sClass*"))));
                come_call_finalizer2(sClass_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value368=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
                if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                for(
                i_258=0 ,                0;                _for_condtionalA24=                i_258<1024 ,                _for_condtionalA24;                i_258++ ,                0                ){
                    self->item_existance[i_258]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj107=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value370=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value369=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
                come_call_finalizer2(list$1charp_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charpp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charpp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->it=0;
                __result152__ = __result_obj__ = self;
                come_call_finalizer2(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result152__;
                come_call_finalizer2(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_259;
_Bool _for_condtionalA25;
_Bool _if_conditional364;
_Bool _if_conditional365;
int i_260;
_Bool _for_condtionalA26;
_Bool _if_conditional366;
_Bool _if_conditional367;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_259, 0, sizeof(int));
memset(&i_260, 0, sizeof(int));
                    for(
                    i_259=0 ,                    0;                    _for_condtionalA25=                    i_259<self->size ,                    _for_condtionalA25;                    i_259++ ,                    0                    ){
                        if(_if_conditional364=self->item_existance[i_259],                        _if_conditional364) {
                            if(_if_conditional365=1,                            _if_conditional365) {
                                come_call_finalizer2(sClass_finalize,self->items[i_259], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(
                    i_260=0 ,                    0;                    _for_condtionalA26=                    i_260<self->size ,                    _for_condtionalA26;                    i_260++ ,                    0                    ){
                        if(_if_conditional366=self->item_existance[i_260],                        _if_conditional366) {
                            if(_if_conditional367=1,                            _if_conditional367) {
                                if(self->keys[i_260]) { self->keys[i_260] = come_decrement_ref_count2(self->keys[i_260], (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional368;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional368=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional368) {
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* right_value373;
void* right_value374;
void* right_value375;
int i_261;
_Bool _for_condtionalA27;
void* right_value376;
void* right_value377;
struct list$1charp* __dec_obj109;
struct map$2charphsTypeph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&i_261, 0, sizeof(int));
right_value376 = (void*)0;
right_value377 = (void*)0;
                self->keys=(char**)come_increment_ref_count(((char**)(right_value373=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
                if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                self->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value374=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(1024)), "./comelang2.h", 1084, "struct sType*"))));
                come_call_finalizer2(sType_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value375=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
                if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                for(
                i_261=0 ,                0;                _for_condtionalA27=                i_261<1024 ,                _for_condtionalA27;                i_261++ ,                0                ){
                    self->item_existance[i_261]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj109=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value377=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value376=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
                come_call_finalizer2(list$1charp_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charpp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charpp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->it=0;
                __result153__ = __result_obj__ = self;
                come_call_finalizer2(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result153__;
                come_call_finalizer2(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_262;
_Bool _for_condtionalA28;
_Bool _if_conditional369;
_Bool _if_conditional370;
int i_263;
_Bool _for_condtionalA29;
_Bool _if_conditional371;
_Bool _if_conditional372;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_262, 0, sizeof(int));
memset(&i_263, 0, sizeof(int));
                    for(
                    i_262=0 ,                    0;                    _for_condtionalA28=                    i_262<self->size ,                    _for_condtionalA28;                    i_262++ ,                    0                    ){
                        if(_if_conditional369=self->item_existance[i_262],                        _if_conditional369) {
                            if(_if_conditional370=1,                            _if_conditional370) {
                                come_call_finalizer2(sType_finalize,self->items[i_262], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(
                    i_263=0 ,                    0;                    _for_condtionalA29=                    i_263<self->size ,                    _for_condtionalA29;                    i_263++ ,                    0                    ){
                        if(_if_conditional371=self->item_existance[i_263],                        _if_conditional371) {
                            if(_if_conditional372=1,                            _if_conditional372) {
                                if(self->keys[i_263]) { self->keys[i_263] = come_decrement_ref_count2(self->keys[i_263], (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional373=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional373) {
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result154__ = __result_obj__ = self;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result154__;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_264;
_Bool _while_condtional30;
struct list_item$1sRightValueObjectph* prev_it_265;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_264, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_265, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_264=self->head;
                    while(_while_condtional30=it_264!=((void*)0),                    _while_condtional30) {
                        prev_it_265=it_264;
                        it_264=it_264->next;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional374=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional374) {
                                come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional375=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional375) {
                                        come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional376=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional376) {
                                        if(self->mVarName) { self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                    }
                                    if(_if_conditional377=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional377) {
                                        if(self->mFunName) { self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result155__ = __result_obj__ = self;
                come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result155__;
                come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_266;
_Bool _while_condtional31;
struct list_item$1CVALUEph* prev_it_267;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_266, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_267, 0, sizeof(struct list_item$1CVALUEph*));
                    it_266=self->head;
                    while(_while_condtional31=it_266!=((void*)0),                    _while_condtional31) {
                        prev_it_267=it_266;
                        it_266=it_266->next;
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional378=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional378) {
                                come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional379;
_Bool _if_conditional380;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional379=self!=((void*)0)&&self->c_value!=((void*)0),                                    _if_conditional379) {
                                        if(self->c_value) { self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                    }
                                    if(_if_conditional380=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional380) {
                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
                __result156__ = self->len;
                return __result156__;
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool _if_conditional384;
_Bool _if_conditional385;
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
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional384=self!=((void*)0)&&self->original_source!=((void*)0),                _if_conditional384) {
                    come_call_finalizer2(buffer_finalize,self->original_source, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional385=self!=((void*)0)&&self->source!=((void*)0),                _if_conditional385) {
                    come_call_finalizer2(buffer_finalize,self->source, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional386=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional386) {
                    if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(_if_conditional387=self!=((void*)0)&&self->base_sname!=((void*)0),                _if_conditional387) {
                    if(self->base_sname) { self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(_if_conditional388=self!=((void*)0)&&self->err_line!=((void*)0),                _if_conditional388) {
                    if(self->err_line) { self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(_if_conditional389=self!=((void*)0)&&self->clang_option!=((void*)0),                _if_conditional389) {
                    if(self->clang_option) { self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(_if_conditional390=self!=((void*)0)&&self->cpp_option!=((void*)0),                _if_conditional390) {
                    if(self->cpp_option) { self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(_if_conditional391=self!=((void*)0)&&self->come_fun_name!=((void*)0),                _if_conditional391) {
                    if(self->come_fun_name) { self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(_if_conditional392=self!=((void*)0)&&self->funcs!=((void*)0),                _if_conditional392) {
                    come_call_finalizer2(map$2charphsFunphp_finalize,self->funcs, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional393=self!=((void*)0)&&self->generics_funcs!=((void*)0),                _if_conditional393) {
                    come_call_finalizer2(map$2charphsGenericsFunphp_finalize,self->generics_funcs, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional394=self!=((void*)0)&&self->classes!=((void*)0),                _if_conditional394) {
                    come_call_finalizer2(map$2charphsClassphp_finalize,self->classes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional395=self!=((void*)0)&&self->types!=((void*)0),                _if_conditional395) {
                    come_call_finalizer2(map$2charphsTypephp_finalize,self->types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional396=self!=((void*)0)&&self->generics_classes!=((void*)0),                _if_conditional396) {
                    come_call_finalizer2(map$2charphsClassphp_finalize,self->generics_classes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional397=self!=((void*)0)&&self->module!=((void*)0),                _if_conditional397) {
                    come_call_finalizer2(sModule_finalize,self->module, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional398=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional398) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional399=self!=((void*)0)&&self->right_value_objects!=((void*)0),                _if_conditional399) {
                    come_call_finalizer2(list$1sRightValueObjectphp_finalize,self->right_value_objects, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional400=self!=((void*)0)&&self->generics_type!=((void*)0),                _if_conditional400) {
                    come_call_finalizer2(sType_finalize,self->generics_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional401=self!=((void*)0)&&self->method_generics_types!=((void*)0),                _if_conditional401) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional402=self!=((void*)0)&&self->stack!=((void*)0),                _if_conditional402) {
                    come_call_finalizer2(list$1CVALUEphp_finalize,self->stack, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional403=self!=((void*)0)&&self->come_function_result_type!=((void*)0),                _if_conditional403) {
                    come_call_finalizer2(sType_finalize,self->come_function_result_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional404=self!=((void*)0)&&self->gv_table!=((void*)0),                _if_conditional404) {
                    come_call_finalizer2(sVarTable_finalize,self->gv_table, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional405=self!=((void*)0)&&self->generics_type_names!=((void*)0),                _if_conditional405) {
                    come_call_finalizer2(list$1charphp_finalize,self->generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional406=self!=((void*)0)&&self->impl_type!=((void*)0),                _if_conditional406) {
                    come_call_finalizer2(sType_finalize,self->impl_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional407=self!=((void*)0)&&self->output_file_name!=((void*)0),                _if_conditional407) {
                    if(self->output_file_name) { self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional448;
struct list_item$1charph* it_288;
int i_289;
_Bool _while_condtional32;
_Bool _if_conditional449;
char* __result163__;
char* default_value_290;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_288, 0, sizeof(struct list_item$1charph*));
memset(&i_289, 0, sizeof(int));
memset(&default_value_290, 0, sizeof(char*));
                                    if(_if_conditional448=position<0,                                    _if_conditional448) {
                                        position+=self->len;
                                    }
                                    it_288=self->head;
                                    i_289=0;
                                    while(_while_condtional32=it_288!=((void*)0),                                    _while_condtional32) {
                                        if(_if_conditional449=position==i_289,                                        _if_conditional449) {
                                            __result163__ = __result_obj__ = it_288->item;
                                            return __result163__;
                                        }
                                        it_288=it_288->next;
                                        i_289++;
                                    }
                                    memset(&default_value_290,0,sizeof(char*));
                                    __result164__ = __result_obj__ = default_value_290;
                                    if(default_value_290) { default_value_290 = come_decrement_ref_count2(default_value_290, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                                    return __result164__;
                                    if(default_value_290) { default_value_290 = come_decrement_ref_count2(default_value_290, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                                    printf("%s %d: linker faield\n",(*(parent->info_287)).sname,(*(parent->info_287)).sline);
                                    exit(13);
}

