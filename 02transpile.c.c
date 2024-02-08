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
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct __current_stack2__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sInfo* info_289;
    struct buffer** clang_option_272;
    struct buffer** cpp_option_273;
    struct list$1charph** files_274;
    struct list$1charph** object_files_275;
    _Bool* output_object_file_276;
    _Bool* output_cpp_file_277;
    _Bool* output_source_file_flag_278;
    char** output_file_name_279;
    _Bool* verbose_280;
    _Bool* come_debug_281;
    _Bool* come_malloc_282;
    _Bool* come_str_283;
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

void exception_stackframe();

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

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

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

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

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

struct optional$2boolbool* charp_equals(char* self, char* right);

struct optional$2boolbool* string_equals(char* self, char* right);

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

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2intpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* string_puts(char* self);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

struct optional$2charphbool* charp_print(char* self);

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

int pipe(int anonymous_var_nameX538[2]);

int pipe2(int anonymous_var_nameX539[2], int anonymous_var_nameX540);

int close(int anonymous_var_nameX541);

int posix_close(int anonymous_var_nameX542, int anonymous_var_nameX543);

int dup(int anonymous_var_nameX544);

int dup2(int anonymous_var_nameX545, int anonymous_var_nameX546);

int dup3(int anonymous_var_nameX547, int anonymous_var_nameX548, int anonymous_var_nameX549);

long lseek(int anonymous_var_nameX550, long anonymous_var_nameX551, int anonymous_var_nameX552);

int fsync(int anonymous_var_nameX553);

int fdatasync(int anonymous_var_nameX554);

long read(int anonymous_var_nameX555, void* anonymous_var_nameX556, unsigned long int anonymous_var_nameX557);

long write(int anonymous_var_nameX558, const void* anonymous_var_nameX559, unsigned long int anonymous_var_nameX560);

long pread(int anonymous_var_nameX561, void* anonymous_var_nameX562, unsigned long int anonymous_var_nameX563, long anonymous_var_nameX564);

long pwrite(int anonymous_var_nameX565, const void* anonymous_var_nameX566, unsigned long int anonymous_var_nameX567, long anonymous_var_nameX568);

int chown(const char* anonymous_var_nameX569, unsigned int anonymous_var_nameX570, unsigned int anonymous_var_nameX571);

int fchown(int anonymous_var_nameX572, unsigned int anonymous_var_nameX573, unsigned int anonymous_var_nameX574);

int lchown(const char* anonymous_var_nameX575, unsigned int anonymous_var_nameX576, unsigned int anonymous_var_nameX577);

int fchownat(int anonymous_var_nameX578, const char* anonymous_var_nameX579, unsigned int anonymous_var_nameX580, unsigned int anonymous_var_nameX581, int anonymous_var_nameX582);

int link(const char* anonymous_var_nameX583, const char* anonymous_var_nameX584);

int linkat(int anonymous_var_nameX585, const char* anonymous_var_nameX586, int anonymous_var_nameX587, const char* anonymous_var_nameX588, int anonymous_var_nameX589);

int symlink(const char* anonymous_var_nameX590, const char* anonymous_var_nameX591);

int symlinkat(const char* anonymous_var_nameX592, int anonymous_var_nameX593, const char* anonymous_var_nameX594);

long readlink(const char* anonymous_var_nameX595, char* anonymous_var_nameX596, unsigned long int anonymous_var_nameX597);

long readlinkat(int anonymous_var_nameX598, const char* anonymous_var_nameX599, char* anonymous_var_nameX600, unsigned long int anonymous_var_nameX601);

int unlink(const char* anonymous_var_nameX602);

int unlinkat(int anonymous_var_nameX603, const char* anonymous_var_nameX604, int anonymous_var_nameX605);

int rmdir(const char* anonymous_var_nameX606);

int truncate(const char* anonymous_var_nameX607, long anonymous_var_nameX608);

int ftruncate(int anonymous_var_nameX609, long anonymous_var_nameX610);

int access(const char* anonymous_var_nameX611, int anonymous_var_nameX612);

int faccessat(int anonymous_var_nameX613, const char* anonymous_var_nameX614, int anonymous_var_nameX615, int anonymous_var_nameX616);

int chdir(const char* anonymous_var_nameX617);

int fchdir(int anonymous_var_nameX618);

char* getcwd(char* anonymous_var_nameX619, unsigned long int anonymous_var_nameX620);

unsigned int alarm(unsigned int anonymous_var_nameX621);

unsigned int sleep(unsigned int anonymous_var_nameX622);

int pause();

int fork();

int _Fork();

int execve(const char* anonymous_var_nameX623, char** anonymous_var_nameX624, char** anonymous_var_nameX625);

int execv(const char* anonymous_var_nameX626, char** anonymous_var_nameX627);

int execle(const char* anonymous_var_nameX628, const char* anonymous_var_nameX629, ...);

int execl(const char* anonymous_var_nameX630, const char* anonymous_var_nameX631, ...);

int execvp(const char* anonymous_var_nameX632, char** anonymous_var_nameX633);

int execlp(const char* anonymous_var_nameX634, const char* anonymous_var_nameX635, ...);

int fexecve(int anonymous_var_nameX636, char** anonymous_var_nameX637, char** anonymous_var_nameX638);

void _exit(int anonymous_var_nameX639);

int getpid();

int getppid();

int getpgrp();

int getpgid(int anonymous_var_nameX640);

int setpgid(int anonymous_var_nameX641, int anonymous_var_nameX642);

int setsid();

int getsid(int anonymous_var_nameX643);

char* ttyname(int anonymous_var_nameX644);

int ttyname_r(int anonymous_var_nameX645, char* anonymous_var_nameX646, unsigned long int anonymous_var_nameX647);

int isatty(int anonymous_var_nameX648);

int tcgetpgrp(int anonymous_var_nameX649);

int tcsetpgrp(int anonymous_var_nameX650, int anonymous_var_nameX651);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int anonymous_var_nameX652, unsigned int* anonymous_var_nameX653);

int setuid(unsigned int anonymous_var_nameX654);

int seteuid(unsigned int anonymous_var_nameX655);

int setgid(unsigned int anonymous_var_nameX656);

int setegid(unsigned int anonymous_var_nameX657);

char* getlogin();

int getlogin_r(char* anonymous_var_nameX658, unsigned long int anonymous_var_nameX659);

int gethostname(char* anonymous_var_nameX660, unsigned long int anonymous_var_nameX661);

char* ctermid(char* anonymous_var_nameX662);

int getopt(int anonymous_var_nameX663, char** anonymous_var_nameX664, const char* anonymous_var_nameX665);

long pathconf(const char* anonymous_var_nameX666, int anonymous_var_nameX667);

long fpathconf(int anonymous_var_nameX668, int anonymous_var_nameX669);

long sysconf(int anonymous_var_nameX670);

unsigned long int confstr(int anonymous_var_nameX671, char* anonymous_var_nameX672, unsigned long int anonymous_var_nameX673);

int setreuid(unsigned int anonymous_var_nameX674, unsigned int anonymous_var_nameX675);

int setregid(unsigned int anonymous_var_nameX676, unsigned int anonymous_var_nameX677);

int lockf(int anonymous_var_nameX678, int anonymous_var_nameX679, long anonymous_var_nameX680);

long gethostid();

int nice(int anonymous_var_nameX681);

void sync();

int setpgrp();

char* crypt(const char* anonymous_var_nameX682, const char* anonymous_var_nameX683);

void encrypt(char* anonymous_var_nameX684, int anonymous_var_nameX685);

void swab(const void* anonymous_var_nameX686, void* anonymous_var_nameX687, long anonymous_var_nameX688);

int usleep(unsigned int anonymous_var_nameX689);

unsigned int ualarm(unsigned int anonymous_var_nameX690, unsigned int anonymous_var_nameX691);

int brk(void* anonymous_var_nameX692);

void* sbrk(long anonymous_var_nameX693);

int vfork();

int vhangup();

int chroot(const char* anonymous_var_nameX694);

int getpagesize();

int getdtablesize();

int sethostname(const char* anonymous_var_nameX695, unsigned long int anonymous_var_nameX696);

int getdomainname(char* anonymous_var_nameX697, unsigned long int anonymous_var_nameX698);

int setdomainname(const char* anonymous_var_nameX699, unsigned long int anonymous_var_nameX700);

int setgroups(unsigned long int anonymous_var_nameX701, const unsigned int* anonymous_var_nameX702);

char* getpass(const char* anonymous_var_nameX703);

int daemon(int anonymous_var_nameX704, int anonymous_var_nameX705);

void setusershell();

void endusershell();

char* getusershell();

int acct(const char* anonymous_var_nameX706);

long syscall(long anonymous_var_nameX707, ...);

int execvpe(const char* anonymous_var_nameX708, char** anonymous_var_nameX709, char** anonymous_var_nameX710);

int issetugid();

int getentropy(void* anonymous_var_nameX711, unsigned long int anonymous_var_nameX712);

int setresuid(unsigned int anonymous_var_nameX713, unsigned int anonymous_var_nameX714, unsigned int anonymous_var_nameX715);

int setresgid(unsigned int anonymous_var_nameX716, unsigned int anonymous_var_nameX717, unsigned int anonymous_var_nameX718);

int getresuid(unsigned int* anonymous_var_nameX719, unsigned int* anonymous_var_nameX720, unsigned int* anonymous_var_nameX721);

int getresgid(unsigned int* anonymous_var_nameX722, unsigned int* anonymous_var_nameX723, unsigned int* anonymous_var_nameX724);

char* get_current_dir_name();

int syncfs(int anonymous_var_nameX725);

int euidaccess(const char* anonymous_var_nameX726, int anonymous_var_nameX727);

int eaccess(const char* anonymous_var_nameX728, int anonymous_var_nameX729);

long copy_file_range(int anonymous_var_nameX730, long* anonymous_var_nameX731, int anonymous_var_nameX732, long* anonymous_var_nameX733, unsigned long int anonymous_var_nameX734, unsigned int anonymous_var_nameX735);

int gettid();

int select(int anonymous_var_nameX736, struct anonymous_typeX23* anonymous_var_nameX737, struct anonymous_typeX23* anonymous_var_nameX738, struct anonymous_typeX23* anonymous_var_nameX739, struct timeval* anonymous_var_nameX740);

int pselect(int anonymous_var_nameX741, struct anonymous_typeX23* anonymous_var_nameX742, struct anonymous_typeX23* anonymous_var_nameX743, struct anonymous_typeX23* anonymous_var_nameX744, const struct timespec* anonymous_var_nameX745, const struct __sigset_t* anonymous_var_nameX746);

int stat(const char* anonymous_var_nameX747, struct stat* anonymous_var_nameX748);

int fstat(int anonymous_var_nameX749, struct stat* anonymous_var_nameX750);

int lstat(const char* anonymous_var_nameX751, struct stat* anonymous_var_nameX752);

int fstatat(int anonymous_var_nameX753, const char* anonymous_var_nameX754, struct stat* anonymous_var_nameX755, int anonymous_var_nameX756);

int chmod(const char* anonymous_var_nameX757, unsigned int anonymous_var_nameX758);

int fchmod(int anonymous_var_nameX759, unsigned int anonymous_var_nameX760);

int fchmodat(int anonymous_var_nameX761, const char* anonymous_var_nameX762, unsigned int anonymous_var_nameX763, int anonymous_var_nameX764);

unsigned int umask(unsigned int anonymous_var_nameX765);

int mkdir(const char* anonymous_var_nameX766, unsigned int anonymous_var_nameX767);

int mkfifo(const char* anonymous_var_nameX768, unsigned int anonymous_var_nameX769);

int mkdirat(int anonymous_var_nameX770, const char* anonymous_var_nameX771, unsigned int anonymous_var_nameX772);

int mkfifoat(int anonymous_var_nameX773, const char* anonymous_var_nameX774, unsigned int anonymous_var_nameX775);

int mknod(const char* anonymous_var_nameX776, unsigned int anonymous_var_nameX777, unsigned long int anonymous_var_nameX778);

int mknodat(int anonymous_var_nameX779, const char* anonymous_var_nameX780, unsigned int anonymous_var_nameX781, unsigned long int anonymous_var_nameX782);

int futimens(int anonymous_var_nameX783, const struct timespec anonymous_var_nameX784[2]);

int utimensat(int anonymous_var_nameX785, const char* anonymous_var_nameX786, const struct timespec anonymous_var_nameX787[2], int anonymous_var_nameX788);

int lchmod(const char* anonymous_var_nameX789, unsigned int anonymous_var_nameX790);

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
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
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
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
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
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value1;
    __freed_obj__ = 0;
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result2__;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value3, 0, sizeof(void*));
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3;
    __freed_obj__ = 0;
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result3__;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
memset(&right_value5, 0, sizeof(void*));
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "struct smart_pointer$1short"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value5;
    __freed_obj__ = 0;
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result4__;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
memset(&right_value7, 0, sizeof(void*));
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "struct smart_pointer$1int"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value7;
    __freed_obj__ = 0;
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result5__;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
memset(&right_value9, 0, sizeof(void*));
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "struct smart_pointer$1long"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value9;
    __freed_obj__ = 0;
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result6__;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline unsigned short int __bswap16(unsigned short int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result7__ = __x<<8|__x>>8;
    return __result7__;
}
static inline unsigned int __bswap32(unsigned int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result8__ = __x>>24|__x>>8&65280|__x<<8&16711680|__x<<24;
    return __result8__;
}
static inline unsigned long int __bswap64(unsigned long int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result9__ = __bswap32(__x)+0<<32|__bswap32(__x>>32);
    return __result9__;
}

// body function


static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}




void come_init_v2(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v2(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void write_source_file_position_to_source(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
_Bool _if_conditional6;
void* right_value10;
void* right_value11;
void* right_value12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
    if(_if_conditional5=gComeOriginalSourcePosition,    _if_conditional5) {
        if(_if_conditional6=info->writing_source_file_position,        _if_conditional6) {
            add_come_code(info,((char*)(right_value12=xsprintf("# \%s \"\%s\"\n",((char*)(right_value10=int_to_string(info->sline))),((char*)(right_value11=string_to_string(info->sname)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value10;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value11;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value12);
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value12;
            __freed_obj__ = 0;
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&sname_5, 0, sizeof(char*));
memset(&sline_6, 0, sizeof(int));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&result_7, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
    sname_5=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = 0;
    sline_6=info->sline;
    __dec_obj6=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value15=__builtin_string(((char*)(right_value14=node->sname(node->_protocol_obj)))))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value15;
    __freed_obj__ = 0;
    info->sline=node->sline(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_7=node->compile(node->_protocol_obj,info);
    __dec_obj7=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value16=__builtin_string(sname_5))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16;
    __freed_obj__ = 0;
    info->sline=sline_6;
    __result10__ = result_7;
    if(sname_5 && !__freed_obj__) { sname_5 = come_decrement_ref_count(sname_5, (void*)0, (void*)0, 0, 0, 0); }
    return __result10__;
    if(sname_5 && !__freed_obj__) { sname_5 = come_decrement_ref_count(sname_5, (void*)0, (void*)0, 0, 0, 0); }
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_8, 0, sizeof(char*));
memset(&args_9, 0, sizeof(va_list));
memset(&n_10, 0, sizeof(int));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
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
            optional$2charphbool_value(((struct optional$2charphbool*)(right_value36=string_puts(((char*)(right_value35=list$1voidp_join(((struct list$1voidp*)(right_value31=list$1charph_map(((struct list$1charph*)(right_value24=list$1charph_sublist(((struct list$1charph*)(right_value18=string_split_char(((char*)(right_value17=buffer_to_string(info->original_source))),10))),n_10,n_10+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n")))))));
                                if(__current_stack1__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
            if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value17;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value18);
            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value18;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value24);
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value24;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value31;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value35);
            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value35;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value36);
            if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value36;
            __freed_obj__ = 0;
        }
        free(msg2_8);
        if((&args_9) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_9), (void*)0, (void*)0, 1, 0, 0, 0); }
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1charph*));
memset(&it_14, 0, sizeof(struct list_item$1charph*));
memset(&i_15, 0, sizeof(int));
                result_13=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value20=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value19=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 699, "struct list$1charph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value19;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value20;
                __freed_obj__ = 0;
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
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result13__;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result11__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_11;
_Bool _while_condtional1;
struct list_item$1charph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1charph*));
                        it_11=self->head;
                        while(_while_condtional1=it_11!=((void*)0),                        _while_condtional1) {
                            prev_it_12=it_11;
                            it_11=it_11->next;
                            if(prev_it_12 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional9=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional9) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1charph*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1charph*));
memset(&right_value23, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional15=self->len==0,                            _if_conditional15) {
                                litem_16=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value21=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value21;
                                __freed_obj__ = 0;
                                litem_16->prev=((void*)0);
                                litem_16->next=((void*)0);
                                __dec_obj8=litem_16->item;
                                litem_16->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_16;
                                self->head=litem_16;
                            }
                            else {
                                if(_if_conditional16=self->len==1,                                _if_conditional16) {
                                    litem_17=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value22=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                                    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value22;
                                    __freed_obj__ = 0;
                                    litem_17->prev=self->head;
                                    litem_17->next=((void*)0);
                                    __dec_obj9=litem_17->item;
                                    litem_17->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_17;
                                    self->head->next=litem_17;
                                }
                                else {
                                    litem_18=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value23=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 302, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                                    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value23;
                                    __freed_obj__ = 0;
                                    litem_18->prev=self->tail;
                                    litem_18->next=((void*)0);
                                    __dec_obj10=litem_18->item;
                                    litem_18->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                                    self->tail->next=litem_18;
                                    self->tail=litem_18;
                                }
                            }
                            self->len++;
                            __result12__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result12__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value25;
void* right_value26;
struct list$1voidp* result_21;
struct list_item$1charph* it_22;
_Bool _while_condtional4;
_Bool _if_conditional19;
struct list$1voidp* __result16__;
struct list$1voidp* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct list$1voidp*));
memset(&it_22, 0, sizeof(struct list_item$1charph*));
                result_21=(struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value26=list$1voidp_initialize((struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value25=(struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang2.h", 989, "struct list$1voidp"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value25;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value26;
                __freed_obj__ = 0;
                it_22=self->head;
                while(_while_condtional4=it_22!=((void*)0),                _while_condtional4) {
                    list$1voidp_push_back(result_21,block(parent,it_22->item));
                    if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                    _if_conditional19) {
                        __result16__ = __result_obj__ = result_21;
                        if(result_21 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result16__;
                    }
                    it_22=it_22->next;
                }
                __result17__ = __result_obj__ = result_21;
                if(result_21 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result17__;
                if(result_21 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1voidp* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result14__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result14__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1voidpp_finalize(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1voidp* it_19;
_Bool _while_condtional3;
struct list_item$1voidp* prev_it_20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_19, 0, sizeof(struct list_item$1voidp*));
memset(&prev_it_20, 0, sizeof(struct list_item$1voidp*));
                        it_19=self->head;
                        while(_while_condtional3=it_19!=((void*)0),                        _while_condtional3) {
                            prev_it_20=it_19;
                            it_19=it_19->next;
                            if(prev_it_20 && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,prev_it_20, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1voidp*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1voidp*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1voidp*));
                        if(_if_conditional17=self->len==0,                        _if_conditional17) {
                            litem_23=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value27=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 282, "struct list_item$1voidp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value27;
                            __freed_obj__ = 0;
                            litem_23->prev=((void*)0);
                            litem_23->next=((void*)0);
                            litem_23->item=item;
                            self->tail=litem_23;
                            self->head=litem_23;
                        }
                        else {
                            if(_if_conditional18=self->len==1,                            _if_conditional18) {
                                litem_24=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value28=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 292, "struct list_item$1voidp"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value28;
                                __freed_obj__ = 0;
                                litem_24->prev=self->head;
                                litem_24->next=((void*)0);
                                litem_24->item=item;
                                self->tail=litem_24;
                                self->head->next=litem_24;
                            }
                            else {
                                litem_25=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value29=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 302, "struct list_item$1voidp"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value29;
                                __freed_obj__ = 0;
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value30;
void* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
                __result18__ = __result_obj__ = ((char*)(right_value30=xsprintf("%d %s",++(*(parent->n_10)),it)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value30;
                __freed_obj__ = 0;
                return __result18__;
}

static char* list$1voidp_join(struct list$1voidp* self, char* sep){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&buf_26, 0, sizeof(struct buffer*));
memset(&n_27, 0, sizeof(int));
memset(&it_30, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
                buf_26=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value33=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1092, "struct buffer"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value33;
                __freed_obj__ = 0;
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
                if(buf_26 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_26, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value34;
                __freed_obj__ = 0;
                return __result27__;
                if(buf_26 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_26, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void* list$1voidp_begin(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
void* result_28;
void* __result19__;
_Bool _if_conditional21;
void* __result20__;
void* result_29;
void* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result22__ = self==((void*)0)||self->it==((void*)0);
                    return __result22__;
}

static void* list$1voidp_next(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
void* result_31;
void* __result23__;
_Bool _if_conditional23;
void* __result24__;
void* result_32;
void* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result26__ = self->len;
                        return __result26__;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
char* default_value_33;
char* __result28__;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_33, 0, sizeof(char*));
                if(_if_conditional25=self==((void*)0),                _if_conditional25) {
                    memset(&default_value_33,0,sizeof(char*));
                    __result28__ = __result_obj__ = default_value_33;
                    return __result28__;
                }
                else {
                    __result29__ = __result_obj__ = self->v1;
                    return __result29__;
                }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional26) {
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result30__ = 0;
    return __result30__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value37;
char* output_file_name_34;
void* right_value38;
void* right_value39;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&output_file_name_34, 0, sizeof(char*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
    output_file_name_34=(char*)come_increment_ref_count(((char*)(right_value37=xsprintf("%s.c",info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value37;
    __freed_obj__ = 0;
    optional$2intbool_value(((struct optional$2intbool*)(right_value39=string_write(((char*)(right_value38=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_34,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value38;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value39;
    __freed_obj__ = 0;
    __result33__ = (_Bool)1;
    if(output_file_name_34 && !__freed_obj__) { output_file_name_34 = come_decrement_ref_count(output_file_name_34, (void*)0, (void*)0, 0, 0, 0); }
    return __result33__;
    if(output_file_name_34 && !__freed_obj__) { output_file_name_34 = come_decrement_ref_count(output_file_name_34, (void*)0, (void*)0, 0, 0, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
int default_value_35;
int __result31__;
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_35, 0, sizeof(int));
        if(_if_conditional27=self==((void*)0),        _if_conditional27) {
            memset(&default_value_35,0,sizeof(int));
            __result31__ = default_value_35;
            return __result31__;
        }
        else {
            __result32__ = self->v1;
            return __result32__;
        }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void clear_tmp_file(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* input_file_name_36;
void* right_value40;
void* right_value41;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&input_file_name_36, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
    input_file_name_36=(char*)come_increment_ref_count(info->sname);
    system(((char*)(right_value41=xsprintf("rm -f \%s.*",((char*)(right_value40=string_to_string(input_file_name_36)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value40;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value41);
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value41;
    __freed_obj__ = 0;
    if(input_file_name_36 && !__freed_obj__) { input_file_name_36 = come_decrement_ref_count(input_file_name_36, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* input_file_name_37;
char* output_file_name_38;
_Bool _if_conditional28;
void* right_value42;
char* __dec_obj11;
void* right_value43;
char* __dec_obj12;
void* right_value44;
char* cmd_39;
_Bool exist_common_h_40;
struct _IO_FILE* f_41;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
int rc_42;
_Bool _if_conditional33;
void* right_value45;
void* right_value46;
char* cmd2_43;
_Bool _if_conditional34;
int rc_44;
_Bool _if_conditional35;
void* right_value47;
char* command2_45;
_Bool _if_conditional36;
void* right_value48;
void* right_value49;
char* cmd3_46;
_Bool _if_conditional37;
int rc_47;
void* right_value50;
char* command2_48;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value51;
void* right_value52;
char* cmd4_49;
void* right_value53;
char* command_50;
_Bool _if_conditional40;
void* right_value54;
char* command2_51;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&input_file_name_37, 0, sizeof(char*));
memset(&output_file_name_38, 0, sizeof(char*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&cmd_39, 0, sizeof(char*));
memset(&exist_common_h_40, 0, sizeof(_Bool));
memset(&f_41, 0, sizeof(struct _IO_FILE*));
memset(&rc_42, 0, sizeof(int));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&cmd2_43, 0, sizeof(char*));
memset(&rc_44, 0, sizeof(int));
memset(&right_value47, 0, sizeof(void*));
memset(&command2_45, 0, sizeof(char*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&cmd3_46, 0, sizeof(char*));
memset(&rc_47, 0, sizeof(int));
memset(&right_value50, 0, sizeof(void*));
memset(&command2_48, 0, sizeof(char*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&cmd4_49, 0, sizeof(char*));
memset(&right_value53, 0, sizeof(void*));
memset(&command_50, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&command2_51, 0, sizeof(char*));
    input_file_name_37=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional28=!info->output_header_file&&info->output_file_name,    _if_conditional28) {
        __dec_obj11=output_file_name_38;
        output_file_name_38=(char*)come_increment_ref_count(((char*)(right_value42=string_operator_add(info->output_file_name,".i"))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value42;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj12=output_file_name_38;
        output_file_name_38=(char*)come_increment_ref_count(((char*)(right_value43=string_operator_add(info->sname,".i"))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value43;
        __freed_obj__ = 0;
    }
    cmd_39=(char*)come_increment_ref_count(((char*)(right_value44=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = 0;
    exist_common_h_40=(_Bool)0;
    {
        f_41=fopen("common.h","r");
        if(_if_conditional29=f_41,        _if_conditional29) {
            exist_common_h_40=(_Bool)1;
        }
        if(_if_conditional30=string_operator_equals(info->output_file_name,"common.h"),        _if_conditional30) {
            exist_common_h_40=(_Bool)0;
        }
        if(_if_conditional31=f_41,        _if_conditional31) {
            fclose(f_41);
        }
    }
    if(_if_conditional32=!gCommonHeader,    _if_conditional32) {
        exist_common_h_40=(_Bool)0;
    }
    rc_42=system(cmd_39);
    if(_if_conditional33=rc_42==0,    _if_conditional33) {
        cmd2_43=(char*)come_increment_ref_count(((char*)(right_value46=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_40?((char*)(right_value45=__builtin_string(" -include common.h "))):"",input_file_name_37,output_file_name_38,output_file_name_38))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value46;
        __freed_obj__ = 0;
        if(_if_conditional34=info->verbose,        _if_conditional34) {
            puts(cmd2_43);
        }
        rc_44=system(cmd2_43);
        if(_if_conditional35=rc_44!=0,        _if_conditional35) {
            printf("failed to cpp(2) (%s)\n",cmd2_43);
            exit(5);
        }
        command2_45=(char*)come_increment_ref_count(((char*)(right_value47=xsprintf("grep error\\: %s.cpp.out",output_file_name_38))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value47;
        __freed_obj__ = 0;
        if(_if_conditional36=info->verbose,        _if_conditional36) {
            puts(command2_45);
        }
        (void)system(command2_45);
        if(cmd2_43 && !__freed_obj__) { cmd2_43 = come_decrement_ref_count(cmd2_43, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_45 && !__freed_obj__) { command2_45 = come_decrement_ref_count(command2_45, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        cmd3_46=(char*)come_increment_ref_count(((char*)(right_value49=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_40?((char*)(right_value48=__builtin_string(" -include common.h "))):"",input_file_name_37,output_file_name_38,output_file_name_38))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value48;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value49;
        __freed_obj__ = 0;
        if(_if_conditional37=info->verbose,        _if_conditional37) {
            puts(cmd3_46);
        }
        rc_47=system(cmd3_46);
        command2_48=(char*)come_increment_ref_count(((char*)(right_value50=xsprintf("grep error\\: %s.cpp.out",output_file_name_38))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value50;
        __freed_obj__ = 0;
        if(_if_conditional38=info->verbose,        _if_conditional38) {
            puts(command2_48);
        }
        (void)system(command2_48);
        if(_if_conditional39=rc_47!=0,        _if_conditional39) {
            cmd4_49=(char*)come_increment_ref_count(((char*)(right_value52=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_40?((char*)(right_value51=__builtin_string(" -include common.h "))):"",input_file_name_37,output_file_name_38,output_file_name_38))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value52;
            __freed_obj__ = 0;
            command_50=(char*)come_increment_ref_count(((char*)(right_value53=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_38,input_file_name_37,info->clang_option,input_file_name_37))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = 0;
            if(_if_conditional40=info->verbose,            _if_conditional40) {
                puts(cmd4_49);
            }
            rc_47=system(cmd4_49);
            command2_51=(char*)come_increment_ref_count(((char*)(right_value54=xsprintf("grep error\\: %s.cpp.out",output_file_name_38))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value54;
            __freed_obj__ = 0;
            if(_if_conditional41=info->verbose,            _if_conditional41) {
                puts(command2_51);
            }
            (void)system(command2_51);
            if(_if_conditional42=rc_47!=0,            _if_conditional42) {
                printf("failed to cpp(2) (%s)\n",cmd4_49);
                exit(5);
            }
            if(cmd4_49 && !__freed_obj__) { cmd4_49 = come_decrement_ref_count(cmd4_49, (void*)0, (void*)0, 0, 0, 0); }
            if(command_50 && !__freed_obj__) { command_50 = come_decrement_ref_count(command_50, (void*)0, (void*)0, 0, 0, 0); }
            if(command2_51 && !__freed_obj__) { command2_51 = come_decrement_ref_count(command2_51, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(cmd3_46 && !__freed_obj__) { cmd3_46 = come_decrement_ref_count(cmd3_46, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_48 && !__freed_obj__) { command2_48 = come_decrement_ref_count(command2_48, (void*)0, (void*)0, 0, 0, 0); }
    }
    __result34__ = (_Bool)1;
    if(input_file_name_37 && !__freed_obj__) { input_file_name_37 = come_decrement_ref_count(input_file_name_37, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_38 && !__freed_obj__) { output_file_name_38 = come_decrement_ref_count(output_file_name_38, (void*)0, (void*)0, 0, 0, 0); }
    if(cmd_39 && !__freed_obj__) { cmd_39 = come_decrement_ref_count(cmd_39, (void*)0, (void*)0, 0, 0, 0); }
    return __result34__;
    if(input_file_name_37 && !__freed_obj__) { input_file_name_37 = come_decrement_ref_count(input_file_name_37, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_38 && !__freed_obj__) { output_file_name_38 = come_decrement_ref_count(output_file_name_38, (void*)0, (void*)0, 0, 0, 0); }
    if(cmd_39 && !__freed_obj__) { cmd_39 = come_decrement_ref_count(cmd_39, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value55;
char* input_file_name_52;
char* output_file_name_53;
_Bool _if_conditional43;
void* right_value56;
char* __dec_obj13;
void* right_value57;
char* __dec_obj14;
void* right_value58;
char* command_54;
_Bool _if_conditional44;
int rc_55;
void* right_value59;
char* command2_56;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool __result35__;
_Bool _if_conditional47;
void* right_value60;
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&input_file_name_52, 0, sizeof(char*));
memset(&output_file_name_53, 0, sizeof(char*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&command_54, 0, sizeof(char*));
memset(&rc_55, 0, sizeof(int));
memset(&right_value59, 0, sizeof(void*));
memset(&command2_56, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
    input_file_name_52=(char*)come_increment_ref_count(((char*)(right_value55=string_operator_add(info->sname,".c"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value55;
    __freed_obj__ = 0;
    output_file_name_53=((void*)0);
    if(_if_conditional43=info->output_file_name,    _if_conditional43) {
        __dec_obj13=output_file_name_53;
        output_file_name_53=(char*)come_increment_ref_count(((char*)(right_value56=__builtin_string(info->output_file_name))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value56;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj14=output_file_name_53;
        output_file_name_53=(char*)come_increment_ref_count(((char*)(right_value57=string_operator_add(info->sname,".o"))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = 0;
    }
    command_54=(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_53,input_file_name_52,info->clang_option,input_file_name_52))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value58;
    __freed_obj__ = 0;
    if(_if_conditional44=info->verbose,    _if_conditional44) {
        puts(command_54);
    }
    rc_55=system(command_54);
    command2_56=(char*)come_increment_ref_count(((char*)(right_value59=xsprintf("grep error\\: %s.out",input_file_name_52))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value59;
    __freed_obj__ = 0;
    if(_if_conditional45=info->verbose,    _if_conditional45) {
        puts(command2_56);
    }
    (void)system(command2_56);
    if(_if_conditional46=rc_55!=0,    _if_conditional46) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result35__ = (_Bool)0;
        if(input_file_name_52 && !__freed_obj__) { input_file_name_52 = come_decrement_ref_count(input_file_name_52, (void*)0, (void*)0, 0, 0, 0); }
        if(output_file_name_53 && !__freed_obj__) { output_file_name_53 = come_decrement_ref_count(output_file_name_53, (void*)0, (void*)0, 0, 0, 0); }
        if(command_54 && !__freed_obj__) { command_54 = come_decrement_ref_count(command_54, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_56 && !__freed_obj__) { command2_56 = come_decrement_ref_count(command2_56, (void*)0, (void*)0, 0, 0, 0); }
        return __result35__;
    }
    if(_if_conditional47=!output_object_file,    _if_conditional47) {
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(output_file_name_53)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value60;
        __freed_obj__ = 0;
    }
    __result36__ = (_Bool)1;
    if(input_file_name_52 && !__freed_obj__) { input_file_name_52 = come_decrement_ref_count(input_file_name_52, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_53 && !__freed_obj__) { output_file_name_53 = come_decrement_ref_count(output_file_name_53, (void*)0, (void*)0, 0, 0, 0); }
    if(command_54 && !__freed_obj__) { command_54 = come_decrement_ref_count(command_54, (void*)0, (void*)0, 0, 0, 0); }
    if(command2_56 && !__freed_obj__) { command2_56 = come_decrement_ref_count(command2_56, (void*)0, (void*)0, 0, 0, 0); }
    return __result36__;
    if(input_file_name_52 && !__freed_obj__) { input_file_name_52 = come_decrement_ref_count(input_file_name_52, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_53 && !__freed_obj__) { output_file_name_53 = come_decrement_ref_count(output_file_name_53, (void*)0, (void*)0, 0, 0, 0); }
    if(command_54 && !__freed_obj__) { command_54 = come_decrement_ref_count(command_54, (void*)0, (void*)0, 0, 0, 0); }
    if(command2_56 && !__freed_obj__) { command2_56 = come_decrement_ref_count(command2_56, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* output_file_name_57;
_Bool _if_conditional48;
void* right_value61;
char* __dec_obj15;
void* right_value62;
char* __dec_obj16;
void* right_value63;
void* right_value64;
struct buffer* command_58;
void* right_value65;
struct list$1charph* o2_saved_59;
char* it_62;
_Bool _for_condtionalA2;
void* right_value66;
_Bool _if_conditional53;
void* right_value67;
char* cmd_65;
int rc_66;
_Bool _if_conditional54;
void* right_value68;
_Bool _if_conditional55;
void* right_value69;
_Bool _if_conditional56;
void* right_value70;
void* right_value71;
_Bool _if_conditional57;
_Bool __result44__;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_57, 0, sizeof(char*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&command_58, 0, sizeof(struct buffer*));
memset(&right_value65, 0, sizeof(void*));
memset(&o2_saved_59, 0, sizeof(struct list$1charph*));
memset(&it_62, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&cmd_65, 0, sizeof(char*));
memset(&rc_66, 0, sizeof(int));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
    output_file_name_57=((void*)0);
    if(_if_conditional48=info->output_file_name,    _if_conditional48) {
        __dec_obj15=output_file_name_57;
        output_file_name_57=(char*)come_increment_ref_count(((char*)(right_value61=__builtin_string(info->output_file_name))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value61;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj16=output_file_name_57;
        output_file_name_57=(char*)come_increment_ref_count(((char*)(right_value62=xnoextname(info->sname))));
        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value62;
        __freed_obj__ = 0;
    }
    command_58=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value64=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value63=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 229, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value63;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value64;
    __freed_obj__ = 0;
    buffer_append_str(command_58,((char*)(right_value65=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_57,getenv("HOME"),"/usr/local/"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value65;
    __freed_obj__ = 0;
    for(
    o2_saved_59=(object_files),it_62=list$1charph_begin((o2_saved_59)) ,    0;    _for_condtionalA2=    !list$1charph_end((o2_saved_59)) ,    _for_condtionalA2;    it_62=list$1charph_next((o2_saved_59)) ,    0    ){
        buffer_append_str(command_58,((char*)(right_value66=xsprintf("%s ",it_62))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value66;
        __freed_obj__ = 0;
    }
    if(_if_conditional53=gComeGC,    _if_conditional53) {
        buffer_append_str(command_58,"-L/usr/local/lib -lcomelang2-gc ");
    }
    else {
        buffer_append_str(command_58,"-L/usr/local/lib -lcomelang2 ");
    }
    cmd_65=(char*)come_increment_ref_count(((char*)(right_value67=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value67;
    __freed_obj__ = 0;
    rc_66=system(cmd_65);
    if(_if_conditional54=rc_66==0,    _if_conditional54) {
        buffer_append_str(command_58," -L/opt/homebrew/opt/pcre/lib ");
    }
    buffer_append_str(command_58,((char*)(right_value68=xsprintf(" %s ",info->clang_option))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value68;
    __freed_obj__ = 0;
    if(_if_conditional55=gComeGC,    _if_conditional55) {
        buffer_append_str(command_58,((char*)(right_value69=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value69;
        __freed_obj__ = 0;
    }
    if(_if_conditional56=info->verbose,    _if_conditional56) {
        puts(((char*)(right_value70=buffer_to_string(command_58))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value70;
        __freed_obj__ = 0;
    }
    rc_66=system(((char*)(right_value71=buffer_to_string(command_58))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value71;
    __freed_obj__ = 0;
    if(_if_conditional57=rc_66!=0,    _if_conditional57) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result44__ = (_Bool)0;
        if(output_file_name_57 && !__freed_obj__) { output_file_name_57 = come_decrement_ref_count(output_file_name_57, (void*)0, (void*)0, 0, 0, 0); }
        if(command_58 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_58, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cmd_65 && !__freed_obj__) { cmd_65 = come_decrement_ref_count(cmd_65, (void*)0, (void*)0, 0, 0, 0); }
        return __result44__;
    }
    __result45__ = (_Bool)1;
    if(output_file_name_57 && !__freed_obj__) { output_file_name_57 = come_decrement_ref_count(output_file_name_57, (void*)0, (void*)0, 0, 0, 0); }
    if(command_58 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_58, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(cmd_65 && !__freed_obj__) { cmd_65 = come_decrement_ref_count(cmd_65, (void*)0, (void*)0, 0, 0, 0); }
    return __result45__;
    if(output_file_name_57 && !__freed_obj__) { output_file_name_57 = come_decrement_ref_count(output_file_name_57, (void*)0, (void*)0, 0, 0, 0); }
    if(command_58 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_58, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(cmd_65 && !__freed_obj__) { cmd_65 = come_decrement_ref_count(cmd_65, (void*)0, (void*)0, 0, 0, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
char* result_60;
char* __result37__;
_Bool _if_conditional50;
char* __result38__;
char* result_61;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_60, 0, sizeof(char*));
memset(&result_61, 0, sizeof(char*));
        if(_if_conditional49=self==((void*)0),        _if_conditional49) {
            memset(&result_60,0,sizeof(char*));
            __result37__ = __result_obj__ = result_60;
            return __result37__;
        }
        self->it=self->head;
        if(_if_conditional50=self->it,        _if_conditional50) {
            __result38__ = __result_obj__ = self->it->item;
            return __result38__;
        }
        memset(&result_61,0,sizeof(char*));
        __result39__ = __result_obj__ = result_61;
        return __result39__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result40__ = self==((void*)0)||self->it==((void*)0);
        return __result40__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
char* result_63;
char* __result41__;
_Bool _if_conditional52;
char* __result42__;
char* result_64;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_63, 0, sizeof(char*));
memset(&result_64, 0, sizeof(char*));
        if(_if_conditional51=self==((void*)0)||self->it==((void*)0),        _if_conditional51) {
            memset(&result_63,0,sizeof(char*));
            __result41__ = __result_obj__ = result_63;
            return __result41__;
        }
        self->it=self->it->next;
        if(_if_conditional52=self->it,        _if_conditional52) {
            __result42__ = __result_obj__ = self->it->item;
            return __result42__;
        }
        memset(&result_64,0,sizeof(char*));
        __result43__ = __result_obj__ = result_64;
        return __result43__;
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value72;
void* right_value73;
struct buffer* __dec_obj17;
void* right_value74;
void* right_value75;
struct buffer* __dec_obj18;
char* __dec_obj19;
char* __dec_obj20;
struct sModule* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
    __dec_obj17=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value73=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value72=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 268, "struct buffer"))))))));
    if(__dec_obj17) { come_call_finalizer(buffer_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value72;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value73;
    __freed_obj__ = 0;
    __dec_obj18=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 269, "struct buffer"))))))));
    if(__dec_obj18) { come_call_finalizer(buffer_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value74;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value75;
    __freed_obj__ = 0;
    __dec_obj19=self->mLastCode;
    self->mLastCode=((void*)0);
    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
    __dec_obj20=self->mLastCode2;
    self->mLastCode2=((void*)0);
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
    __result46__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result46__;
    if(self && !__freed_obj__) { come_call_finalizer(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional58=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional58) {
            if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional59=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional59) {
            if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional60=self!=((void*)0)&&self->mLastCode!=((void*)0),        _if_conditional60) {
            if(self->mLastCode && !__freed_obj__) { self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional61=self!=((void*)0)&&self->mLastCode2!=((void*)0),        _if_conditional61) {
            if(self->mLastCode2 && !__freed_obj__) { self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional62=self!=((void*)0)&&self->mLastCode3!=((void*)0),        _if_conditional62) {
            if(self->mLastCode3 && !__freed_obj__) { self->mLastCode3 = come_decrement_ref_count(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0); }
        }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value76;
void* right_value82;
struct map$2charphsVarph* __dec_obj22;
static int id_76=0;
struct sVarTable* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
    __dec_obj22=self->mVars;
    self->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value82=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value76=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02transpile.c", 278, "struct map$2charphsVarph"))))))));
    if(__dec_obj22) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value76;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value82;
    __freed_obj__ = 0;
    self->mGlobal=global;
    self->mParent=parent;
    self->mID=++id_76;
    __result49__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result49__;
    if(self && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value77;
void* right_value78;
void* right_value79;
int i_71;
_Bool _for_condtionalA3;
void* right_value80;
void* right_value81;
struct list$1charp* __dec_obj21;
struct map$2charphsVarph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&i_71, 0, sizeof(int));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
        self->keys=(char**)come_increment_ref_count(((char**)(right_value77=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1132, "char*"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value77;
        __freed_obj__ = 0;
        self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value78=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1133, "struct sVar*"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value78;
        __freed_obj__ = 0;
        self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value79=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1134, "_Bool"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value79;
        __freed_obj__ = 0;
        for(
        i_71=0 ,        0;        _for_condtionalA3=        i_71<1024 ,        _for_condtionalA3;        i_71++ ,        0        ){
            self->item_existance[i_71]=(_Bool)0;
        }
        self->size=1024;
        self->len=0;
        __dec_obj21=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value81=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value80=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1144, "struct list$1charp"))))))));
        if(__dec_obj21) { come_call_finalizer(list$1charp_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value80;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value81;
        __freed_obj__ = 0;
        self->it=0;
        __result48__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result48__;
        if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional81;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional63=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional63) {
                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional64=self!=((void*)0)&&self->mCValueName!=((void*)0),            _if_conditional64) {
                if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional65=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional65) {
                if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional81=self!=((void*)0)&&self->mFunName!=((void*)0),            _if_conditional81) {
                if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional72;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional66=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional66) {
                        if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional68=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional68) {
                        if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional69=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional69) {
                        if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional70=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional70) {
                        if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional72=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional72) {
                        if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional74=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional74) {
                        if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional75=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional75) {
                        if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional76=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional76) {
                        if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional77=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional77) {
                        if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional78=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional78) {
                        if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional79=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional79) {
                        if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional80=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional80) {
                        if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional67=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional67) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_67;
_Bool _while_condtional5;
struct list_item$1sTypeph* prev_it_68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_67, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_68, 0, sizeof(struct list_item$1sTypeph*));
                            it_67=self->head;
                            while(_while_condtional5=it_67!=((void*)0),                            _while_condtional5) {
                                prev_it_68=it_67;
                                it_67=it_67->next;
                                if(prev_it_68 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional71=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional71) {
                                        if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_69;
_Bool _while_condtional6;
struct list_item$1sNodeph* prev_it_70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_69, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_70, 0, sizeof(struct list_item$1sNodeph*));
                            it_69=self->head;
                            while(_while_condtional6=it_69!=((void*)0),                            _while_condtional6) {
                                prev_it_70=it_69;
                                it_69=it_69->next;
                                if(prev_it_70 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_70, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional73;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional73=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional73) {
                                        if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result47__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result47__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_72;
_Bool _while_condtional7;
struct list_item$1charp* prev_it_73;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_72, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_73, 0, sizeof(struct list_item$1charp*));
                it_72=self->head;
                while(_while_condtional7=it_72!=((void*)0),                _while_condtional7) {
                    prev_it_73=it_72;
                    it_72=it_72->next;
                    if(prev_it_73 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_73, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_74;
_Bool _for_condtionalA4;
_Bool _if_conditional82;
_Bool _if_conditional83;
int i_75;
_Bool _for_condtionalA5;
_Bool _if_conditional84;
_Bool _if_conditional85;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_74, 0, sizeof(int));
memset(&i_75, 0, sizeof(int));
            for(
            i_74=0 ,            0;            _for_condtionalA4=            i_74<self->size ,            _for_condtionalA4;            i_74++ ,            0            ){
                if(_if_conditional82=self->item_existance[i_74],                _if_conditional82) {
                    if(_if_conditional83=1,                    _if_conditional83) {
                        if(self->items[i_74] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[i_74], (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
            }
            come_free((char*)self->items);
            for(
            i_75=0 ,            0;            _for_condtionalA5=            i_75<self->size ,            _for_condtionalA5;            i_75++ ,            0            ){
                if(_if_conditional84=self->item_existance[i_75],                _if_conditional84) {
                    if(_if_conditional85=1,                    _if_conditional85) {
                        if(self->keys[i_75] && !__freed_obj__) { self->keys[i_75] = come_decrement_ref_count(self->keys[i_75], (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
            come_free((char*)self->keys);
            if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional86=self!=((void*)0)&&self->key_list!=((void*)0),        _if_conditional86) {
            if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(self->mVars && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self->mVars, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int pointer_num_77;
char* p_78;
_Bool _while_condtional8;
_Bool _if_conditional87;
_Bool _while_condtional9;
void* right_value83;
void* right_value84;
char* name2_79;
struct sClass* klass_84;
struct sClass* generics_class_85;
_Bool _if_conditional93;
_Bool _if_conditional94;
void* right_value88;
struct sClass* klass2_86;
void* right_value89;
char* __dec_obj23;
void* right_value90;
char* __dec_obj24;
void* right_value101;
void* right_value102;
void* right_value103;
void* right_value104;
struct tuple1$1sTypeph* __dec_obj26;
void* right_value105;
void* right_value106;
struct tuple1$1sTypeph* __dec_obj27;
void* right_value107;
void* right_value108;
struct list$1sTypeph* __dec_obj28;
void* right_value109;
void* right_value110;
struct list$1sNodeph* __dec_obj29;
void* right_value111;
void* right_value112;
struct list$1sTypeph* __dec_obj30;
void* right_value113;
void* right_value114;
struct list$1charph* __dec_obj31;
struct tuple1$1sTypeph* __dec_obj32;
struct sNode* __dec_obj33;
void* right_value115;
char* __dec_obj34;
struct sType* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&pointer_num_77, 0, sizeof(int));
memset(&p_78, 0, sizeof(char*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&name2_79, 0, sizeof(char*));
memset(&klass_84, 0, sizeof(struct sClass*));
memset(&generics_class_85, 0, sizeof(struct sClass*));
memset(&right_value88, 0, sizeof(void*));
memset(&klass2_86, 0, sizeof(struct sClass*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
    pointer_num_77=0;
    p_78=name;
    while(_while_condtional8=*p_78,    _while_condtional8) {
        if(_if_conditional87=xisalpha(*p_78),        _if_conditional87) {
            p_78++;
        }
        else {
            break;
        }
    }
    while(_while_condtional9=*p_78==42,    _while_condtional9) {
        pointer_num_77++;
        p_78++;
    }
    name2_79=(char*)come_increment_ref_count(((char*)(right_value84=string_substring(((char*)(right_value83=__builtin_string(name))),0,-pointer_num_77-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value84;
    __freed_obj__ = 0;
    klass_84=map$2charphsClassphp_operator_load_element(info->classes,name2_79);
    generics_class_85=map$2charphsClassphp_operator_load_element(info->generics_classes,name2_79);
    if(_if_conditional93=klass_84==((void*)0)&&generics_class_85==((void*)0),    _if_conditional93) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_79);
    }
    if(_if_conditional94=klass_84,    _if_conditional94) {
        self->mClass=klass_84;
    }
    else {
        klass2_86=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value88=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 321, "struct sClass"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value88;
        __freed_obj__ = 0;
        __dec_obj23=klass2_86->mName;
        klass2_86->mName=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(name))));
        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value89;
        __freed_obj__ = 0;
        __dec_obj24=klass2_86->mDeclareSName;
        klass2_86->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value90=__builtin_string(info->sname))));
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value90;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(name)))),(struct sClass*)come_increment_ref_count(klass2_86));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value101;
        __freed_obj__ = 0;
        self->mClass=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value102=__builtin_string(name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value102;
        __freed_obj__ = 0;
        if(klass2_86 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass2_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __dec_obj26=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value104=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value103=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 330, "struct tuple1$1sTypeph")))),((void*)0)))));
    if(__dec_obj26) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value103;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value104;
    __freed_obj__ = 0;
    __dec_obj27=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value105=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 331, "struct tuple1$1sTypeph")))),((void*)0)))));
    if(__dec_obj27) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value105;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value106;
    __freed_obj__ = 0;
    __dec_obj28=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value108=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 332, "struct list$1sTypeph"))))))));
    if(__dec_obj28) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value108;
    __freed_obj__ = 0;
    __dec_obj29=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value110=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value109=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02transpile.c", 333, "struct list$1sNodeph"))))))));
    if(__dec_obj29) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value110;
    __freed_obj__ = 0;
    self->mOmitArrayNum=(_Bool)0;
    __dec_obj30=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value112=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 335, "struct list$1sTypeph"))))))));
    if(__dec_obj30) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value111;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value112;
    __freed_obj__ = 0;
    __dec_obj31=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value114=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value113=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 336, "struct list$1charph"))))))));
    if(__dec_obj31) { come_call_finalizer(list$1charph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value114;
    __freed_obj__ = 0;
    self->mVarArgs=(_Bool)0;
    __dec_obj32=self->mResultType;
    self->mResultType=((void*)0);
    if(__dec_obj32) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
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
    self->mPointerNum=pointer_num_77;
    self->mNoArrayPointerNum=0;
    __dec_obj33=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0); }
    self->mDynamicArrayNum=0;
    self->mTypeOfExpression=0;
    __dec_obj34=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string(""))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115;
    __freed_obj__ = 0;
    self->mOriginalPointerNum=0;
    self->mFunctionParam=(_Bool)0;
    __result84__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name2_79 && !__freed_obj__) { name2_79 = come_decrement_ref_count(name2_79, (void*)0, (void*)0, 0, 0, 0); }
    return __result84__;
    if(self && !__freed_obj__) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name2_79 && !__freed_obj__) { name2_79 = come_decrement_ref_count(name2_79, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_80;
unsigned int hash_81;
unsigned int it_82;
_Bool _while_condtional10;
_Bool _if_conditional88;
void* right_value85;
_Bool _if_conditional90;
struct sClass* __result52__;
_Bool _if_conditional91;
_Bool _if_conditional92;
struct sClass* __result53__;
struct sClass* __result54__;
void* right_value86;
void* right_value87;
struct sClass* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_80, 0, sizeof(struct sClass*));
memset(&hash_81, 0, sizeof(unsigned int));
memset(&it_82, 0, sizeof(unsigned int));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
        memset(&default_value_80,0,sizeof(struct sClass*));
        hash_81=string_get_hash_key(((char*)key))%self->size;
        it_82=hash_81;
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            if(_if_conditional88=self->item_existance[it_82],            _if_conditional88) {
                if(_if_conditional90=optional$2boolbool_value(((struct optional$2boolbool*)(right_value85=string_equals(self->keys[it_82],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85),
                (right_value85 && right_value85 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value85, 
                __freed_obj__ = 0, 
                _if_conditional90) {
                    __result52__ = __result_obj__ = self->items[it_82];
                    return __result52__;
                }
                it_82++;
                if(_if_conditional91=it_82>=self->size,                _if_conditional91) {
                    it_82=0;
                }
                else {
                    if(_if_conditional92=it_82==hash_81,                    _if_conditional92) {
                        __result53__ = __result_obj__ = default_value_80;
                        return __result53__;
                    }
                }
            }
            else {
                __result54__ = __result_obj__ = default_value_80;
                return __result54__;
            }
        }
        __result56__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value87=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value86=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1622, "struct optional$2sClasspbool"))),default_value_80,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value86;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value87;
        __freed_obj__ = 0;
        return __result56__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional89;
_Bool default_value_83;
_Bool __result50__;
_Bool __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_83, 0, sizeof(_Bool));
                    if(_if_conditional89=self==((void*)0),                    _if_conditional89) {
                        memset(&default_value_83,0,sizeof(_Bool));
                        __result50__ = default_value_83;
                        return __result50__;
                    }
                    else {
                        __result51__ = self->v1;
                        return __result51__;
                    }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result55__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result55__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional100;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional95=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional95) {
                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional96=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional96) {
                if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional100=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional100) {
                if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_87;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_87, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_88, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_87=self->head;
                    while(_while_condtional11=it_87!=((void*)0),                    _while_condtional11) {
                        prev_it_88=it_87;
                        it_87=it_87->next;
                        if(prev_it_88 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_88, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional97=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional97) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
_Bool _if_conditional99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional98=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional98) {
                                        if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional99=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional99) {
                                        if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
unsigned int hash_106;
unsigned int it_107;
_Bool _while_condtional14;
_Bool _if_conditional113;
void* right_value95;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool same_key_exist_124;
char* it2_127;
_Bool _for_condtionalA7;
void* right_value97;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct map$2charphsClassph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_106, 0, sizeof(unsigned int));
memset(&it_107, 0, sizeof(unsigned int));
memset(&right_value95, 0, sizeof(void*));
memset(&same_key_exist_124, 0, sizeof(_Bool));
memset(&it2_127, 0, sizeof(char*));
memset(&right_value97, 0, sizeof(void*));
            if(_if_conditional101=self->len*10>=self->size,            _if_conditional101) {
                map$2charphsClassph_rehash(self);
            }
            hash_106=string_get_hash_key(key)%self->size;
            it_107=hash_106;
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                if(_if_conditional113=self->item_existance[it_107],                _if_conditional113) {
                    if(_if_conditional114=optional$2boolbool_value(((struct optional$2boolbool*)(right_value95=string_equals(self->keys[it_107],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95),
                    (right_value95 && right_value95 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value95, 
                    __freed_obj__ = 0, 
                    _if_conditional114) {
                        if(_if_conditional115=1,                        _if_conditional115) {
                            list$1charp_remove(self->key_list,self->keys[it_107]);
                            if(self->keys[it_107] && !__freed_obj__) { self->keys[it_107] = come_decrement_ref_count(self->keys[it_107], (void*)0, (void*)0, 0, 0, 0); }
                            self->keys[it_107]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_107]);
                            self->keys[it_107]=key;
                        }
                        if(_if_conditional135=1,                        _if_conditional135) {
                            if(self->items[it_107] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_107], (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->items[it_107]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_107]=item;
                        }
                        break;
                    }
                    it_107++;
                    if(_if_conditional136=it_107>=self->size,                    _if_conditional136) {
                        it_107=0;
                    }
                    else {
                        if(_if_conditional137=it_107==hash_106,                        _if_conditional137) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_107]=(_Bool)1;
                    if(_if_conditional138=1,                    _if_conditional138) {
                        self->keys[it_107]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_107]=key;
                    }
                    if(_if_conditional139=1,                    _if_conditional139) {
                        self->items[it_107]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_107]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_124=(_Bool)0;
            for(
            it2_127=list$1charp_begin(self->key_list) ,            0;            _for_condtionalA7=            !list$1charp_end(self->key_list) ,            _for_condtionalA7;            it2_127=list$1charp_next(self->key_list) ,            0            ){
                if(_if_conditional144=optional$2boolbool_value(((struct optional$2boolbool*)(right_value97=string_equals(it2_127,key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97),
                (right_value97 && right_value97 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value97, 
                __freed_obj__ = 0, 
                _if_conditional144) {
                    same_key_exist_124=(_Bool)1;
                }
            }
            if(_if_conditional145=!same_key_exist_124,            _if_conditional145) {
                list$1charp_push_back(self->key_list,key);
            }
            __result80__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result80__;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_89;
void* right_value91;
char** keys_90;
void* right_value92;
struct sClass** items_91;
void* right_value93;
_Bool* item_existance_92;
int len_93;
char* it_96;
_Bool _for_condtionalA6;
struct sClass* default_value_99;
struct sClass* it2_102;
unsigned int hash_103;
int n_104;
_Bool _while_condtional13;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct sClass* default_value_105;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_89, 0, sizeof(int));
memset(&right_value91, 0, sizeof(void*));
memset(&keys_90, 0, sizeof(char**));
memset(&right_value92, 0, sizeof(void*));
memset(&items_91, 0, sizeof(struct sClass**));
memset(&right_value93, 0, sizeof(void*));
memset(&item_existance_92, 0, sizeof(_Bool*));
memset(&len_93, 0, sizeof(int));
memset(&it_96, 0, sizeof(char*));
memset(&default_value_99, 0, sizeof(struct sClass*));
memset(&it2_102, 0, sizeof(struct sClass*));
memset(&hash_103, 0, sizeof(unsigned int));
memset(&n_104, 0, sizeof(int));
memset(&default_value_105, 0, sizeof(struct sClass*));
                    size_89=self->size*10;
                    keys_90=(char**)come_increment_ref_count(((char**)(right_value91=(char**)come_calloc(1, sizeof(char*)*(1*(size_89)), "./comelang2.h", 1380, "char*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value91;
                    __freed_obj__ = 0;
                    items_91=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value92=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_89)), "./comelang2.h", 1381, "struct sClass*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value92;
                    __freed_obj__ = 0;
                    item_existance_92=(_Bool*)come_increment_ref_count(((_Bool*)(right_value93=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_89)), "./comelang2.h", 1382, "_Bool"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value93;
                    __freed_obj__ = 0;
                    len_93=0;
                    for(
                    it_96=map$2charphsClassph_begin(self) ,                    0;                    _for_condtionalA6=                    !map$2charphsClassph_end(self) ,                    _for_condtionalA6;                    it_96=map$2charphsClassph_next(self) ,                    0                    ){
                        memset(&default_value_99,0,sizeof(struct sClass*));
                        it2_102=map$2charphsClassph_at(self,it_96,default_value_99);
                        hash_103=string_get_hash_key(it_96)%size_89;
                        n_104=hash_103;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional110=item_existance_92[n_104],                            _if_conditional110) {
                                n_104++;
                                if(_if_conditional111=n_104>=size_89,                                _if_conditional111) {
                                    n_104=0;
                                }
                                else {
                                    if(_if_conditional112=n_104==hash_103,                                    _if_conditional112) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_92[n_104]=(_Bool)1;
                                keys_90[n_104]=it_96;
                                items_91[n_104]=map$2charphsClassph_at(self,it_96,default_value_105);
                                len_93++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    come_free((char*)self->keys);
                    self->keys=keys_90;
                    self->items=items_91;
                    self->item_existance=item_existance_92;
                    self->size=size_89;
                    self->len=len_93;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
char* result_94;
char* __result57__;
_Bool _if_conditional103;
char* __result58__;
char* result_95;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_94, 0, sizeof(char*));
memset(&result_95, 0, sizeof(char*));
                        if(_if_conditional102=self==((void*)0),                        _if_conditional102) {
                            memset(&result_94,0,sizeof(char*));
                            __result57__ = __result_obj__ = result_94;
                            return __result57__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(_if_conditional103=self->key_list->it,                        _if_conditional103) {
                            __result58__ = __result_obj__ = self->key_list->it->item;
                            return __result58__;
                        }
                        memset(&result_95,0,sizeof(char*));
                        __result59__ = __result_obj__ = result_95;
                        return __result59__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result60__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result60__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
char* result_97;
char* __result61__;
_Bool _if_conditional105;
char* __result62__;
char* result_98;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_97, 0, sizeof(char*));
memset(&result_98, 0, sizeof(char*));
                        if(_if_conditional104=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional104) {
                            memset(&result_97,0,sizeof(char*));
                            __result61__ = __result_obj__ = result_97;
                            return __result61__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(_if_conditional105=self->key_list->it,                        _if_conditional105) {
                            __result62__ = __result_obj__ = self->key_list->it->item;
                            return __result62__;
                        }
                        memset(&result_98,0,sizeof(char*));
                        __result63__ = __result_obj__ = result_98;
                        return __result63__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_100;
unsigned int it_101;
_Bool _while_condtional12;
_Bool _if_conditional106;
void* right_value94;
_Bool _if_conditional107;
struct sClass* __result64__;
_Bool _if_conditional108;
_Bool _if_conditional109;
struct sClass* __result65__;
struct sClass* __result66__;
struct sClass* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_100, 0, sizeof(unsigned int));
memset(&it_101, 0, sizeof(unsigned int));
memset(&right_value94, 0, sizeof(void*));
                            hash_100=string_get_hash_key(((char*)key))%self->size;
                            it_101=hash_100;
                            while(_while_condtional12=(_Bool)1,                            _while_condtional12) {
                                if(_if_conditional106=self->item_existance[it_101],                                _if_conditional106) {
                                    if(_if_conditional107=optional$2boolbool_value(((struct optional$2boolbool*)(right_value94=string_equals(self->keys[it_101],key)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94),
                                    (right_value94 && right_value94 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value94, 
                                    __freed_obj__ = 0, 
                                    _if_conditional107) {
                                        __result64__ = __result_obj__ = self->items[it_101];
                                        return __result64__;
                                    }
                                    it_101++;
                                    if(_if_conditional108=it_101>=self->size,                                    _if_conditional108) {
                                        it_101=0;
                                    }
                                    else {
                                        if(_if_conditional109=it_101==hash_100,                                        _if_conditional109) {
                                            __result65__ = __result_obj__ = default_value;
                                            return __result65__;
                                        }
                                    }
                                }
                                else {
                                    __result66__ = __result_obj__ = default_value;
                                    return __result66__;
                                }
                            }
                            __result67__ = __result_obj__ = default_value;
                            return __result67__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_108;
struct list_item$1charp* it_109;
_Bool _while_condtional15;
void* right_value96;
_Bool _if_conditional116;
struct list$1charp* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_108, 0, sizeof(int));
memset(&it_109, 0, sizeof(struct list_item$1charp*));
memset(&right_value96, 0, sizeof(void*));
                                it2_108=0;
                                it_109=self->head;
                                while(_while_condtional15=it_109!=((void*)0),                                _while_condtional15) {
                                    if(_if_conditional116=optional$2boolbool_value(((struct optional$2boolbool*)(right_value96=string_equals(it_109->item,item)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96),
                                    (right_value96 && right_value96 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value96, 
                                    __freed_obj__ = 0, 
                                    _if_conditional116) {
                                        list$1charp_delete(self,it2_108,it2_108+1);
                                        break;
                                    }
                                    it2_108++;
                                    it_109=it_109->next;
                                }
                                __result71__ = __result_obj__ = self;
                                return __result71__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
int tmp_110;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct list$1charp* __result68__;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct list_item$1charp* it_113;
int i_114;
_Bool _while_condtional17;
_Bool _if_conditional125;
struct list_item$1charp* prev_it_115;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct list_item$1charp* it_116;
int i_117;
_Bool _while_condtional18;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct list_item$1charp* prev_it_118;
struct list_item$1charp* it_119;
struct list_item$1charp* head_prev_it_120;
struct list_item$1charp* tail_it_121;
int i_122;
_Bool _while_condtional19;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
struct list_item$1charp* prev_it_123;
_Bool _if_conditional133;
_Bool _if_conditional134;
struct list$1charp* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_110, 0, sizeof(int));
memset(&it_113, 0, sizeof(struct list_item$1charp*));
memset(&i_114, 0, sizeof(int));
memset(&prev_it_115, 0, sizeof(struct list_item$1charp*));
memset(&it_116, 0, sizeof(struct list_item$1charp*));
memset(&i_117, 0, sizeof(int));
memset(&prev_it_118, 0, sizeof(struct list_item$1charp*));
memset(&it_119, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_120, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_121, 0, sizeof(struct list_item$1charp*));
memset(&i_122, 0, sizeof(int));
memset(&prev_it_123, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional117=head<0,                                            _if_conditional117) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional118=tail<0,                                            _if_conditional118) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional119=head>tail,                                            _if_conditional119) {
                                                tmp_110=tail;
                                                tail=head;
                                                head=tmp_110;
                                            }
                                            if(_if_conditional120=head<0,                                            _if_conditional120) {
                                                head=0;
                                            }
                                            if(_if_conditional121=tail>self->len,                                            _if_conditional121) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional122=head==tail,                                            _if_conditional122) {
                                                __result68__ = __result_obj__ = self;
                                                return __result68__;
                                            }
                                            if(_if_conditional123=head==0&&tail==self->len,                                            _if_conditional123) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional124=head==0,                                                _if_conditional124) {
                                                    it_113=self->head;
                                                    i_114=0;
                                                    while(_while_condtional17=it_113!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional125=i_114<tail,                                                        _if_conditional125) {
                                                            prev_it_115=it_113;
                                                            it_113=it_113->next;
                                                            i_114++;
                                                            if(prev_it_115 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_115, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional126=i_114==tail,                                                            _if_conditional126) {
                                                                self->head=it_113;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_113=it_113->next;
                                                                i_114++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional127=tail==self->len,                                                    _if_conditional127) {
                                                        it_116=self->head;
                                                        i_117=0;
                                                        while(_while_condtional18=it_116!=((void*)0),                                                        _while_condtional18) {
                                                            if(_if_conditional128=i_117==head,                                                            _if_conditional128) {
                                                                self->tail=it_116->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional129=i_117>=head,                                                            _if_conditional129) {
                                                                prev_it_118=it_116;
                                                                it_116=it_116->next;
                                                                i_117++;
                                                                if(prev_it_118 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_116=it_116->next;
                                                                i_117++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_119=self->head;
                                                        head_prev_it_120=((void*)0);
                                                        tail_it_121=((void*)0);
                                                        i_122=0;
                                                        while(_while_condtional19=it_119!=((void*)0),                                                        _while_condtional19) {
                                                            if(_if_conditional130=i_122==head,                                                            _if_conditional130) {
                                                                head_prev_it_120=it_119->prev;
                                                            }
                                                            if(_if_conditional131=i_122==tail,                                                            _if_conditional131) {
                                                                tail_it_121=it_119;
                                                            }
                                                            if(_if_conditional132=i_122>=head&&i_122<tail,                                                            _if_conditional132) {
                                                                prev_it_123=it_119;
                                                                it_119=it_119->next;
                                                                i_122++;
                                                                if(prev_it_123 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_123, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_119=it_119->next;
                                                                i_122++;
                                                            }
                                                        }
                                                        if(_if_conditional133=head_prev_it_120!=((void*)0),                                                        _if_conditional133) {
                                                            head_prev_it_120->next=tail_it_121;
                                                        }
                                                        if(_if_conditional134=tail_it_121!=((void*)0),                                                        _if_conditional134) {
                                                            tail_it_121->prev=head_prev_it_120;
                                                        }
                                                    }
                                                }
                                            }
                                            __result70__ = __result_obj__ = self;
                                            return __result70__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_111;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_112;
struct list$1charp* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_111, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_112, 0, sizeof(struct list_item$1charp*));
                                                    it_111=self->head;
                                                    while(_while_condtional16=it_111!=((void*)0),                                                    _while_condtional16) {
                                                        prev_it_112=it_111;
                                                        it_111=it_111->next;
                                                        if(prev_it_112 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_112, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result69__ = __result_obj__ = self;
                                                    return __result69__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
char* result_125;
char* __result72__;
_Bool _if_conditional141;
char* __result73__;
char* result_126;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_125, 0, sizeof(char*));
memset(&result_126, 0, sizeof(char*));
                if(_if_conditional140=self==((void*)0),                _if_conditional140) {
                    memset(&result_125,0,sizeof(char*));
                    __result72__ = __result_obj__ = result_125;
                    return __result72__;
                }
                self->it=self->head;
                if(_if_conditional141=self->it,                _if_conditional141) {
                    __result73__ = __result_obj__ = self->it->item;
                    return __result73__;
                }
                memset(&result_126,0,sizeof(char*));
                __result74__ = __result_obj__ = result_126;
                return __result74__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result75__ = self==((void*)0)||self->it==((void*)0);
                return __result75__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
char* result_128;
char* __result76__;
_Bool _if_conditional143;
char* __result77__;
char* result_129;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_128, 0, sizeof(char*));
memset(&result_129, 0, sizeof(char*));
                if(_if_conditional142=self==((void*)0)||self->it==((void*)0),                _if_conditional142) {
                    memset(&result_128,0,sizeof(char*));
                    __result76__ = __result_obj__ = result_128;
                    return __result76__;
                }
                self->it=self->it->next;
                if(_if_conditional143=self->it,                _if_conditional143) {
                    __result77__ = __result_obj__ = self->it->item;
                    return __result77__;
                }
                memset(&result_129,0,sizeof(char*));
                __result78__ = __result_obj__ = result_129;
                return __result78__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional146;
void* right_value98;
struct list_item$1charp* litem_130;
_Bool _if_conditional147;
void* right_value99;
struct list_item$1charp* litem_131;
void* right_value100;
struct list_item$1charp* litem_132;
struct list$1charp* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_130, 0, sizeof(struct list_item$1charp*));
memset(&right_value99, 0, sizeof(void*));
memset(&litem_131, 0, sizeof(struct list_item$1charp*));
memset(&right_value100, 0, sizeof(void*));
memset(&litem_132, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional146=self->len==0,                    _if_conditional146) {
                        litem_130=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value98;
                        __freed_obj__ = 0;
                        litem_130->prev=((void*)0);
                        litem_130->next=((void*)0);
                        litem_130->item=item;
                        self->tail=litem_130;
                        self->head=litem_130;
                    }
                    else {
                        if(_if_conditional147=self->len==1,                        _if_conditional147) {
                            litem_131=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292, "struct list_item$1charp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value99;
                            __freed_obj__ = 0;
                            litem_131->prev=self->head;
                            litem_131->next=((void*)0);
                            litem_131->item=item;
                            self->tail=litem_131;
                            self->head->next=litem_131;
                        }
                        else {
                            litem_132=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value100=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 302, "struct list_item$1charp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value100;
                            __freed_obj__ = 0;
                            litem_132->prev=self->tail;
                            litem_132->next=((void*)0);
                            litem_132->item=item;
                            self->tail->next=litem_132;
                            self->tail=litem_132;
                        }
                    }
                    self->len++;
                    __result79__ = __result_obj__ = self;
                    return __result79__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj25;
struct tuple1$1sTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj25=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
        __result81__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result81__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional148=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional148) {
            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result82__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result82__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result83__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result83__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value116;
char* __dec_obj35;
void* right_value117;
void* right_value118;
struct list$1tuple2$2charphsTypephph* __dec_obj36;
void* right_value119;
char* __dec_obj37;
struct sClass* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
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
    self->mName=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(name))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116;
    __freed_obj__ = 0;
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj36=self->mFields;
    self->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value118=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value117=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02transpile.c", 384, "struct list$1tuple2$2charphsTypephph"))))))));
    if(__dec_obj36) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value118;
    __freed_obj__ = 0;
    __dec_obj37=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(info->sname))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119;
    __freed_obj__ = 0;
    __result86__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result86__;
    if(self && !__freed_obj__) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result85__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result85__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj38;
struct sType* __dec_obj39;
struct list$1sTypeph* __dec_obj40;
struct list$1charph* __dec_obj41;
struct list$1charph* __dec_obj42;
void* right_value120;
void* right_value121;
struct sType* __dec_obj43;
struct list$1sTypeph* o2_saved_133;
struct sType* it_136;
_Bool _for_condtionalA8;
void* right_value159;
struct list$1charph* o2_saved_160;
char* it_161;
_Bool _for_condtionalA9;
void* right_value160;
void* right_value161;
void* right_value162;
struct tuple1$1sTypeph* __dec_obj69;
void* right_value163;
void* right_value164;
struct buffer* __dec_obj70;
void* right_value165;
void* right_value166;
struct buffer* __dec_obj71;
void* right_value167;
void* right_value168;
struct buffer* __dec_obj72;
void* right_value169;
void* right_value170;
struct buffer* __dec_obj73;
void* right_value184;
struct sBlock* __dec_obj77;
char* __dec_obj78;
void* right_value185;
char* __dec_obj79;
struct sFun* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&o2_saved_133, 0, sizeof(struct list$1sTypeph*));
memset(&it_136, 0, sizeof(struct sType*));
memset(&right_value159, 0, sizeof(void*));
memset(&o2_saved_160, 0, sizeof(struct list$1charph*));
memset(&it_161, 0, sizeof(char*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
    __dec_obj38=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    __dec_obj39=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj40=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    if(__dec_obj40) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj41=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    if(__dec_obj41) { come_call_finalizer(list$1charph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj42=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    if(__dec_obj42) { come_call_finalizer(list$1charph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    __dec_obj43=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value120=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 402, "struct sType")))),"lambda",(_Bool)0,info))));
    if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value121;
    __freed_obj__ = 0;
    for(
    o2_saved_133=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_136=list$1sTypeph_begin((o2_saved_133)) ,    0;    _for_condtionalA8=    !list$1sTypeph_end((o2_saved_133)) ,    _for_condtionalA8;    it_136=list$1sTypeph_next((o2_saved_133)) ,    0    ){
        list$1sTypeph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(it_136)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value159;
        __freed_obj__ = 0;
    }
    if(o2_saved_133 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    for(
    o2_saved_160=(struct list$1charph*)come_increment_ref_count((param_names)),it_161=list$1charph_begin((o2_saved_160)) ,    0;    _for_condtionalA9=    !list$1charph_end((o2_saved_160)) ,    _for_condtionalA9;    it_161=list$1charph_next((o2_saved_160)) ,    0    ){
        list$1charph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(((char*)(right_value160=string_clone(it_161)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value160;
        __freed_obj__ = 0;
    }
    if(o2_saved_160 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_160, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj69=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value162=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value161=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 412, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type)))));
    if(__dec_obj69) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value162;
    __freed_obj__ = 0;
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj70=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value164=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value163=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 415, "struct buffer"))))))));
    if(__dec_obj70) { come_call_finalizer(buffer_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value163;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value164;
    __freed_obj__ = 0;
    __dec_obj71=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value166=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value165=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 416, "struct buffer"))))))));
    if(__dec_obj71) { come_call_finalizer(buffer_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value165;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value166;
    __freed_obj__ = 0;
    __dec_obj72=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value168=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value167=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 417, "struct buffer"))))))));
    if(__dec_obj72) { come_call_finalizer(buffer_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value167;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value168;
    __freed_obj__ = 0;
    __dec_obj73=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 418, "struct buffer"))))))));
    if(__dec_obj73) { come_call_finalizer(buffer_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value169;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value170;
    __freed_obj__ = 0;
    __dec_obj77=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value184=sBlock_clone(block))));
    if(__dec_obj77) { come_call_finalizer(sBlock_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value184;
    __freed_obj__ = 0;
    __dec_obj78=self->mComeHeader;
    self->mComeHeader=(char*)come_increment_ref_count(come_header);
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    __dec_obj79=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(declare_sname))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value185;
    __freed_obj__ = 0;
    __result128__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(come_header && !__freed_obj__) { come_header = come_decrement_ref_count(come_header, (void*)0, (void*)0, 0, 1, 0); }
    if(declare_sname && !__freed_obj__) { declare_sname = come_decrement_ref_count(declare_sname, (void*)0, (void*)0, 0, 1, 0); }
    return __result128__;
    if(self && !__freed_obj__) { come_call_finalizer(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(come_header && !__freed_obj__) { come_header = come_decrement_ref_count(come_header, (void*)0, (void*)0, 0, 1, 0); }
    if(declare_sname && !__freed_obj__) { declare_sname = come_decrement_ref_count(declare_sname, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional149;
struct sType* result_134;
struct sType* __result87__;
_Bool _if_conditional150;
struct sType* __result88__;
struct sType* result_135;
struct sType* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_134, 0, sizeof(struct sType*));
memset(&result_135, 0, sizeof(struct sType*));
        if(_if_conditional149=self==((void*)0),        _if_conditional149) {
            memset(&result_134,0,sizeof(struct sType*));
            __result87__ = __result_obj__ = result_134;
            return __result87__;
        }
        self->it=self->head;
        if(_if_conditional150=self->it,        _if_conditional150) {
            __result88__ = __result_obj__ = self->it->item;
            return __result88__;
        }
        memset(&result_135,0,sizeof(struct sType*));
        __result89__ = __result_obj__ = result_135;
        return __result89__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result90__ = self==((void*)0)||self->it==((void*)0);
        return __result90__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional151;
struct sType* result_137;
struct sType* __result91__;
_Bool _if_conditional152;
struct sType* __result92__;
struct sType* result_138;
struct sType* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_137, 0, sizeof(struct sType*));
memset(&result_138, 0, sizeof(struct sType*));
        if(_if_conditional151=self==((void*)0)||self->it==((void*)0),        _if_conditional151) {
            memset(&result_137,0,sizeof(struct sType*));
            __result91__ = __result_obj__ = result_137;
            return __result91__;
        }
        self->it=self->it->next;
        if(_if_conditional152=self->it,        _if_conditional152) {
            __result92__ = __result_obj__ = self->it->item;
            return __result92__;
        }
        memset(&result_138,0,sizeof(struct sType*));
        __result93__ = __result_obj__ = result_138;
        return __result93__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional153;
void* right_value122;
struct list_item$1sTypeph* litem_139;
struct sType* __dec_obj44;
_Bool _if_conditional154;
void* right_value123;
struct list_item$1sTypeph* litem_140;
struct sType* __dec_obj45;
void* right_value124;
struct list_item$1sTypeph* litem_141;
struct sType* __dec_obj46;
struct list$1sTypeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value122, 0, sizeof(void*));
memset(&litem_139, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value123, 0, sizeof(void*));
memset(&litem_140, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value124, 0, sizeof(void*));
memset(&litem_141, 0, sizeof(struct list_item$1sTypeph*));
            if(_if_conditional153=self->len==0,            _if_conditional153) {
                litem_139=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value122=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282, "struct list_item$1sTypeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value122;
                __freed_obj__ = 0;
                litem_139->prev=((void*)0);
                litem_139->next=((void*)0);
                __dec_obj44=litem_139->item;
                litem_139->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_139;
                self->head=litem_139;
            }
            else {
                if(_if_conditional154=self->len==1,                _if_conditional154) {
                    litem_140=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292, "struct list_item$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value123;
                    __freed_obj__ = 0;
                    litem_140->prev=self->head;
                    litem_140->next=((void*)0);
                    __dec_obj45=litem_140->item;
                    litem_140->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj45) { come_call_finalizer(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_140;
                    self->head->next=litem_140;
                }
                else {
                    litem_141=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value124=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 302, "struct list_item$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value124;
                    __freed_obj__ = 0;
                    litem_141->prev=self->tail;
                    litem_141->next=((void*)0);
                    __dec_obj46=litem_141->item;
                    litem_141->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_141;
                    self->tail=litem_141;
                }
            }
            self->len++;
            __result94__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result94__;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
struct sType* __result95__;
void* right_value125;
struct sType* result_142;
_Bool _if_conditional156;
_Bool _if_conditional157;
void* right_value128;
struct tuple1$1sTypeph* __dec_obj48;
_Bool _if_conditional160;
void* right_value129;
struct tuple1$1sTypeph* __dec_obj49;
_Bool _if_conditional161;
void* right_value130;
char* __dec_obj50;
_Bool _if_conditional162;
void* right_value137;
struct list$1sTypeph* __dec_obj54;
_Bool _if_conditional166;
void* right_value145;
struct list$1sNodeph* __dec_obj58;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value146;
struct list$1sTypeph* __dec_obj59;
_Bool _if_conditional181;
void* right_value153;
struct list$1charph* __dec_obj63;
_Bool _if_conditional185;
void* right_value154;
struct tuple1$1sTypeph* __dec_obj64;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value155;
struct sNode* __dec_obj65;
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
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value156;
struct sNode* __dec_obj66;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value157;
char* __dec_obj67;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value158;
char* __dec_obj68;
struct sType* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value125, 0, sizeof(void*));
memset(&result_142, 0, sizeof(struct sType*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
            if(_if_conditional155=self==(void*)0,            _if_conditional155) {
                __result95__ = __result_obj__ = (void*)0;
                return __result95__;
            }
            result_142=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value125;
            __freed_obj__ = 0;
            if(_if_conditional156=self!=((void*)0),            _if_conditional156) {
                result_142->mClass=self->mClass;
            }
            if(_if_conditional157=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional157) {
                __dec_obj48=result_142->mNoSolvedGenericsType;
                result_142->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value128=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj48) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value128;
                __freed_obj__ = 0;
            }
            if(_if_conditional160=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional160) {
                __dec_obj49=result_142->mOriginalLoadVarType;
                result_142->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value129=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj49) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value129;
                __freed_obj__ = 0;
            }
            if(_if_conditional161=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional161) {
                __dec_obj50=result_142->mGenericsName;
                result_142->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(self->mGenericsName))));
                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value130;
                __freed_obj__ = 0;
            }
            if(_if_conditional162=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional162) {
                __dec_obj54=result_142->mGenericsTypes;
                result_142->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value137=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj54) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value137;
                __freed_obj__ = 0;
            }
            if(_if_conditional166=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional166) {
                __dec_obj58=result_142->mArrayNum;
                result_142->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value145=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj58) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value145;
                __freed_obj__ = 0;
            }
            if(_if_conditional179=self!=((void*)0),            _if_conditional179) {
                result_142->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional180=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional180) {
                __dec_obj59=result_142->mParamTypes;
                result_142->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value146=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj59) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value146;
                __freed_obj__ = 0;
            }
            if(_if_conditional181=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional181) {
                __dec_obj63=result_142->mParamNames;
                result_142->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value153=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj63) { come_call_finalizer(list$1charph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value153;
                __freed_obj__ = 0;
            }
            if(_if_conditional185=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional185) {
                __dec_obj64=result_142->mResultType;
                result_142->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value154=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj64) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value154;
                __freed_obj__ = 0;
            }
            if(_if_conditional186=self!=((void*)0),            _if_conditional186) {
                result_142->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional187=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional187) {
                __dec_obj65=result_142->mAlignas;
                result_142->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=sNode_clone(self->mAlignas))));
                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value155;
                __freed_obj__ = 0;
            }
            if(_if_conditional188=self!=((void*)0),            _if_conditional188) {
                result_142->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                result_142->mShort=self->mShort;
            }
            if(_if_conditional190=self!=((void*)0),            _if_conditional190) {
                result_142->mLong=self->mLong;
            }
            if(_if_conditional191=self!=((void*)0),            _if_conditional191) {
                result_142->mLongLong=self->mLongLong;
            }
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                result_142->mConstant=self->mConstant;
            }
            if(_if_conditional193=self!=((void*)0),            _if_conditional193) {
                result_142->mRegister=self->mRegister;
            }
            if(_if_conditional194=self!=((void*)0),            _if_conditional194) {
                result_142->mVolatile=self->mVolatile;
            }
            if(_if_conditional195=self!=((void*)0),            _if_conditional195) {
                result_142->mStatic=self->mStatic;
            }
            if(_if_conditional196=self!=((void*)0),            _if_conditional196) {
                result_142->mExtern=self->mExtern;
            }
            if(_if_conditional197=self!=((void*)0),            _if_conditional197) {
                result_142->mRestrict=self->mRestrict;
            }
            if(_if_conditional198=self!=((void*)0),            _if_conditional198) {
                result_142->mImmutable=self->mImmutable;
            }
            if(_if_conditional199=self!=((void*)0),            _if_conditional199) {
                result_142->mHeap=self->mHeap;
            }
            if(_if_conditional200=self!=((void*)0),            _if_conditional200) {
                result_142->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional201=self!=((void*)0),            _if_conditional201) {
                result_142->mDelegate=self->mDelegate;
            }
            if(_if_conditional202=self!=((void*)0),            _if_conditional202) {
                result_142->mShare=self->mShare;
            }
            if(_if_conditional203=self!=((void*)0),            _if_conditional203) {
                result_142->mClone=self->mClone;
            }
            if(_if_conditional204=self!=((void*)0),            _if_conditional204) {
                result_142->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional205=self!=((void*)0),            _if_conditional205) {
                result_142->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional206=self!=((void*)0),            _if_conditional206) {
                result_142->mRefference=self->mRefference;
            }
            if(_if_conditional207=self!=((void*)0),            _if_conditional207) {
                result_142->mException=self->mException;
            }
            if(_if_conditional208=self!=((void*)0),            _if_conditional208) {
                result_142->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional209=self!=((void*)0),            _if_conditional209) {
                result_142->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional210=self!=((void*)0),            _if_conditional210) {
                result_142->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional211=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional211) {
                __dec_obj66=result_142->mSizeNum;
                result_142->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value156=sNode_clone(self->mSizeNum))));
                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, ((struct sNode*)right_value156)->finalize, ((struct sNode*)right_value156)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value156;
                __freed_obj__ = 0;
            }
            if(_if_conditional212=self!=((void*)0),            _if_conditional212) {
                result_142->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional213=self!=((void*)0),            _if_conditional213) {
                result_142->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional214=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional214) {
                __dec_obj67=result_142->mOriginalTypeName;
                result_142->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value157=string_clone(self->mOriginalTypeName))));
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value157;
                __freed_obj__ = 0;
            }
            if(_if_conditional215=self!=((void*)0),            _if_conditional215) {
                result_142->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional216=self!=((void*)0),            _if_conditional216) {
                result_142->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional217=self!=((void*)0),            _if_conditional217) {
                result_142->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional218=self!=((void*)0),            _if_conditional218) {
                result_142->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional219=self!=((void*)0),            _if_conditional219) {
                result_142->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional220=self!=((void*)0),            _if_conditional220) {
                result_142->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional221=self!=((void*)0),            _if_conditional221) {
                result_142->mInline=self->mInline;
            }
            if(_if_conditional222=self!=((void*)0),            _if_conditional222) {
                result_142->mNullValue=self->mNullValue;
            }
            if(_if_conditional223=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional223) {
                __dec_obj68=result_142->mAsmName;
                result_142->mAsmName=(char*)come_increment_ref_count(((char*)(right_value158=string_clone(self->mAsmName))));
                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value158;
                __freed_obj__ = 0;
            }
            __result109__ = __result_obj__ = result_142;
            if(result_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_142, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result109__;
            if(result_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_142, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
struct tuple1$1sTypeph* __result96__;
void* right_value126;
struct tuple1$1sTypeph* result_143;
_Bool _if_conditional159;
void* right_value127;
struct sType* __dec_obj47;
struct tuple1$1sTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&result_143, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value127, 0, sizeof(void*));
                    if(_if_conditional158=self==(void*)0,                    _if_conditional158) {
                        __result96__ = __result_obj__ = (void*)0;
                        return __result96__;
                    }
                    result_143=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value126=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    if(_if_conditional159=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional159) {
                        __dec_obj47=result_143->v1;
                        result_143->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(self->v1))));
                        if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value127;
                        __freed_obj__ = 0;
                    }
                    __result97__ = __result_obj__ = result_143;
                    if(result_143 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_143, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result97__;
                    if(result_143 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
struct list$1sTypeph* __result98__;
void* right_value131;
void* right_value132;
struct list$1sTypeph* result_144;
struct list_item$1sTypeph* it_145;
_Bool _while_condtional20;
void* right_value136;
struct list$1sTypeph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct list$1sTypeph*));
memset(&it_145, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value136, 0, sizeof(void*));
                    if(_if_conditional163=self==((void*)0),                    _if_conditional163) {
                        __result98__ = __result_obj__ = ((void*)0);
                        return __result98__;
                    }
                    result_144=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value131=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value131;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
                    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value132;
                    __freed_obj__ = 0;
                    it_145=self->head;
                    while(_while_condtional20=it_145!=((void*)0),                    _while_condtional20) {
                        list$1sTypeph_add(result_144,(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(it_145->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value136;
                        __freed_obj__ = 0;
                        it_145=it_145->next;
                    }
                    __result100__ = __result_obj__ = result_144;
                    if(result_144 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_144, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result100__;
                    if(result_144 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_144, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional164;
void* right_value133;
struct list_item$1sTypeph* litem_146;
struct sType* __dec_obj51;
_Bool _if_conditional165;
void* right_value134;
struct list_item$1sTypeph* litem_147;
struct sType* __dec_obj52;
void* right_value135;
struct list_item$1sTypeph* litem_148;
struct sType* __dec_obj53;
struct list$1sTypeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value133, 0, sizeof(void*));
memset(&litem_146, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value134, 0, sizeof(void*));
memset(&litem_147, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value135, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional164=self->len==0,                            _if_conditional164) {
                                litem_146=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value133=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value133;
                                __freed_obj__ = 0;
                                litem_146->prev=((void*)0);
                                litem_146->next=((void*)0);
                                __dec_obj51=litem_146->item;
                                litem_146->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_146;
                                self->head=litem_146;
                            }
                            else {
                                if(_if_conditional165=self->len==1,                                _if_conditional165) {
                                    litem_147=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value134=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                                    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value134;
                                    __freed_obj__ = 0;
                                    litem_147->prev=self->head;
                                    litem_147->next=((void*)0);
                                    __dec_obj52=litem_147->item;
                                    litem_147->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_147;
                                    self->head->next=litem_147;
                                }
                                else {
                                    litem_148=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                                    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value135;
                                    __freed_obj__ = 0;
                                    litem_148->prev=self->tail;
                                    litem_148->next=((void*)0);
                                    __dec_obj53=litem_148->item;
                                    litem_148->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail->next=litem_148;
                                    self->tail=litem_148;
                                }
                            }
                            self->len++;
                            __result99__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result99__;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
struct list$1sNodeph* __result101__;
void* right_value138;
void* right_value139;
struct list$1sNodeph* result_149;
struct list_item$1sNodeph* it_150;
_Bool _while_condtional21;
void* right_value144;
struct list$1sNodeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&result_149, 0, sizeof(struct list$1sNodeph*));
memset(&it_150, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value144, 0, sizeof(void*));
                    if(_if_conditional167=self==((void*)0),                    _if_conditional167) {
                        __result101__ = __result_obj__ = ((void*)0);
                        return __result101__;
                    }
                    result_149=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value139=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value138=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value138;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
                    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value139;
                    __freed_obj__ = 0;
                    it_150=self->head;
                    while(_while_condtional21=it_150!=((void*)0),                    _while_condtional21) {
                        list$1sNodeph_add(result_149,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(it_150->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value144;
                        __freed_obj__ = 0;
                        it_150=it_150->next;
                    }
                    __result105__ = __result_obj__ = result_149;
                    if(result_149 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_149, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result105__;
                    if(result_149 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_149, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
void* right_value140;
struct list_item$1sNodeph* litem_151;
struct sNode* __dec_obj55;
_Bool _if_conditional169;
void* right_value141;
struct list_item$1sNodeph* litem_152;
struct sNode* __dec_obj56;
void* right_value142;
struct list_item$1sNodeph* litem_153;
struct sNode* __dec_obj57;
struct list$1sNodeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&litem_151, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value141, 0, sizeof(void*));
memset(&litem_152, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value142, 0, sizeof(void*));
memset(&litem_153, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional168=self->len==0,                            _if_conditional168) {
                                litem_151=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value140=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value140;
                                __freed_obj__ = 0;
                                litem_151->prev=((void*)0);
                                litem_151->next=((void*)0);
                                __dec_obj55=litem_151->item;
                                litem_151->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0); }
                                self->tail=litem_151;
                                self->head=litem_151;
                            }
                            else {
                                if(_if_conditional169=self->len==1,                                _if_conditional169) {
                                    litem_152=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value141=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                                    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value141;
                                    __freed_obj__ = 0;
                                    litem_152->prev=self->head;
                                    litem_152->next=((void*)0);
                                    __dec_obj56=litem_152->item;
                                    litem_152->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_152;
                                    self->head->next=litem_152;
                                }
                                else {
                                    litem_153=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value142;
                                    __freed_obj__ = 0;
                                    litem_153->prev=self->tail;
                                    litem_153->next=((void*)0);
                                    __dec_obj57=litem_153->item;
                                    litem_153->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
                                    self->tail->next=litem_153;
                                    self->tail=litem_153;
                                }
                            }
                            self->len++;
                            __result102__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            return __result102__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
struct sNode* __result103__;
void* right_value143;
struct sNode* result_154;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
struct sNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&result_154, 0, sizeof(struct sNode*));
                            if(_if_conditional170=self==(void*)0,                            _if_conditional170) {
                                __result103__ = __result_obj__ = (void*)0;
                                return __result103__;
                            }
                            result_154=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value143=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, ((struct sNode*)right_value143)->finalize, ((struct sNode*)right_value143)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value143;
                            __freed_obj__ = 0;
                            if(_if_conditional171=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional171) {
                                result_154->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional172=self!=((void*)0),                            _if_conditional172) {
                                result_154->finalize=self->finalize;
                            }
                            if(_if_conditional173=self!=((void*)0),                            _if_conditional173) {
                                result_154->clone=self->clone;
                            }
                            if(_if_conditional174=self!=((void*)0),                            _if_conditional174) {
                                result_154->compile=self->compile;
                            }
                            if(_if_conditional175=self!=((void*)0),                            _if_conditional175) {
                                result_154->sline=self->sline;
                            }
                            if(_if_conditional176=self!=((void*)0),                            _if_conditional176) {
                                result_154->sname=self->sname;
                            }
                            if(_if_conditional177=self!=((void*)0),                            _if_conditional177) {
                                result_154->terminated=self->terminated;
                            }
                            if(_if_conditional178=self!=((void*)0),                            _if_conditional178) {
                                result_154->kind=self->kind;
                            }
                            __result104__ = __result_obj__ = result_154;
                            if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, ((struct sNode*)result_154)->finalize, ((struct sNode*)result_154)->_protocol_obj, 0, 1, 0); } 
                            return __result104__;
                            if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, ((struct sNode*)result_154)->finalize, ((struct sNode*)result_154)->_protocol_obj, 0, 0, 0); } 
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
struct list$1charph* __result106__;
void* right_value147;
void* right_value148;
struct list$1charph* result_155;
struct list_item$1charph* it_156;
_Bool _while_condtional22;
void* right_value152;
struct list$1charph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&result_155, 0, sizeof(struct list$1charph*));
memset(&it_156, 0, sizeof(struct list_item$1charph*));
memset(&right_value152, 0, sizeof(void*));
                    if(_if_conditional182=self==((void*)0),                    _if_conditional182) {
                        __result106__ = __result_obj__ = ((void*)0);
                        return __result106__;
                    }
                    result_155=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value148=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value147=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value147;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value148);
                    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value148;
                    __freed_obj__ = 0;
                    it_156=self->head;
                    while(_while_condtional22=it_156!=((void*)0),                    _while_condtional22) {
                        list$1charph_add(result_155,(char*)come_increment_ref_count(((char*)(right_value152=string_clone(it_156->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value152;
                        __freed_obj__ = 0;
                        it_156=it_156->next;
                    }
                    __result108__ = __result_obj__ = result_155;
                    if(result_155 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_155, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result108__;
                    if(result_155 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_155, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
void* right_value149;
struct list_item$1charph* litem_157;
char* __dec_obj60;
_Bool _if_conditional184;
void* right_value150;
struct list_item$1charph* litem_158;
char* __dec_obj61;
void* right_value151;
struct list_item$1charph* litem_159;
char* __dec_obj62;
struct list$1charph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
memset(&litem_157, 0, sizeof(struct list_item$1charph*));
memset(&right_value150, 0, sizeof(void*));
memset(&litem_158, 0, sizeof(struct list_item$1charph*));
memset(&right_value151, 0, sizeof(void*));
memset(&litem_159, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional183=self->len==0,                            _if_conditional183) {
                                litem_157=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value149=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                                if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value149;
                                __freed_obj__ = 0;
                                litem_157->prev=((void*)0);
                                litem_157->next=((void*)0);
                                __dec_obj60=litem_157->item;
                                litem_157->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_157;
                                self->head=litem_157;
                            }
                            else {
                                if(_if_conditional184=self->len==1,                                _if_conditional184) {
                                    litem_158=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value150=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                                    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value150;
                                    __freed_obj__ = 0;
                                    litem_158->prev=self->head;
                                    litem_158->next=((void*)0);
                                    __dec_obj61=litem_158->item;
                                    litem_158->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_158;
                                    self->head->next=litem_158;
                                }
                                else {
                                    litem_159=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value151;
                                    __freed_obj__ = 0;
                                    litem_159->prev=self->tail;
                                    litem_159->next=((void*)0);
                                    __dec_obj62=litem_159->item;
                                    litem_159->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                                    self->tail->next=litem_159;
                                    self->tail=litem_159;
                                }
                            }
                            self->len++;
                            __result107__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result107__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional224;
struct sBlock* __result110__;
void* right_value171;
struct sBlock* result_162;
_Bool _if_conditional227;
void* right_value172;
struct list$1sNodeph* __dec_obj74;
_Bool _if_conditional228;
void* right_value183;
struct sVarTable* __dec_obj76;
struct sBlock* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&result_162, 0, sizeof(struct sBlock*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
        if(_if_conditional224=self==(void*)0,        _if_conditional224) {
            __result110__ = __result_obj__ = (void*)0;
            return __result110__;
        }
        result_162=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value171=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171;
        __freed_obj__ = 0;
        if(_if_conditional227=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional227) {
            __dec_obj74=result_162->mNodes;
            result_162->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value172=list$1sNodephp_clone(self->mNodes))));
            if(__dec_obj74) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value172;
            __freed_obj__ = 0;
        }
        if(_if_conditional228=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional228) {
            __dec_obj76=result_162->mVarTable;
            result_162->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value183=sVarTable_clone(self->mVarTable))));
            if(__dec_obj76) { come_call_finalizer(sVarTable_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
            if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value183;
            __freed_obj__ = 0;
        }
        __result127__ = __result_obj__ = result_162;
        if(result_162 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result127__;
        if(result_162 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional225=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional225) {
                if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional226=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional226) {
                if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional229;
struct sVarTable* __result111__;
void* right_value173;
struct sVarTable* result_163;
_Bool _if_conditional230;
void* right_value182;
struct map$2charphsVarph* __dec_obj75;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct sVarTable* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value173, 0, sizeof(void*));
memset(&result_163, 0, sizeof(struct sVarTable*));
memset(&right_value182, 0, sizeof(void*));
                if(_if_conditional229=self==(void*)0,                _if_conditional229) {
                    __result111__ = __result_obj__ = (void*)0;
                    return __result111__;
                }
                result_163=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value173=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value173;
                __freed_obj__ = 0;
                if(_if_conditional230=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional230) {
                    __dec_obj75=result_163->mVars;
                    result_163->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value182=map$2charphsVarphp_clone(self->mVars))));
                    if(__dec_obj75) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value182;
                    __freed_obj__ = 0;
                }
                if(_if_conditional254=self!=((void*)0),                _if_conditional254) {
                    result_163->mGlobal=self->mGlobal;
                }
                if(_if_conditional255=self!=((void*)0),                _if_conditional255) {
                    result_163->mParent=self->mParent;
                }
                if(_if_conditional256=self!=((void*)0),                _if_conditional256) {
                    result_163->mID=self->mID;
                }
                __result126__ = __result_obj__ = result_163;
                if(result_163 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_163, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result126__;
                if(result_163 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_163, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional231;
struct map$2charphsVarph* __result112__;
void* right_value174;
void* right_value175;
struct map$2charphsVarph* result_164;
char* it_167;
_Bool _for_condtionalA10;
struct sVar* default_value_170;
struct sVar* it2_173;
struct map$2charphsVarph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct map$2charphsVarph*));
memset(&it_167, 0, sizeof(char*));
memset(&default_value_170, 0, sizeof(struct sVar*));
memset(&it2_173, 0, sizeof(struct sVar*));
                        if(_if_conditional231=self==((void*)0),                        _if_conditional231) {
                            __result112__ = __result_obj__ = ((void*)0);
                            return __result112__;
                        }
                        result_164=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value175=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value174=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1225, "struct map$2charphsVarph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value174;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value175);
                        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value175;
                        __freed_obj__ = 0;
                        for(
                        it_167=map$2charphsVarph_begin(self) ,                        0;                        _for_condtionalA10=                        !map$2charphsVarph_end(self) ,                        _for_condtionalA10;                        it_167=map$2charphsVarph_next(self) ,                        0                        ){
                            memset(&default_value_170,0,sizeof(struct sVar*));
                            it2_173=map$2charphsVarph_at(self,it_167,default_value_170);
                            map$2charphsVarph_insert2(result_164,it_167,it2_173);
                        }
                        __result125__ = __result_obj__ = result_164;
                        if(result_164 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_164, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result125__;
                        if(result_164 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
char* result_165;
char* __result113__;
_Bool _if_conditional233;
char* __result114__;
char* result_166;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_165, 0, sizeof(char*));
memset(&result_166, 0, sizeof(char*));
                            if(_if_conditional232=self==((void*)0),                            _if_conditional232) {
                                memset(&result_165,0,sizeof(char*));
                                __result113__ = __result_obj__ = result_165;
                                return __result113__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(_if_conditional233=self->key_list->it,                            _if_conditional233) {
                                __result114__ = __result_obj__ = self->key_list->it->item;
                                return __result114__;
                            }
                            memset(&result_166,0,sizeof(char*));
                            __result115__ = __result_obj__ = result_166;
                            return __result115__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result116__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result116__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
char* result_168;
char* __result117__;
_Bool _if_conditional235;
char* __result118__;
char* result_169;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_168, 0, sizeof(char*));
memset(&result_169, 0, sizeof(char*));
                            if(_if_conditional234=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional234) {
                                memset(&result_168,0,sizeof(char*));
                                __result117__ = __result_obj__ = result_168;
                                return __result117__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(_if_conditional235=self->key_list->it,                            _if_conditional235) {
                                __result118__ = __result_obj__ = self->key_list->it->item;
                                return __result118__;
                            }
                            memset(&result_169,0,sizeof(char*));
                            __result119__ = __result_obj__ = result_169;
                            return __result119__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_171;
unsigned int it_172;
_Bool _while_condtional23;
_Bool _if_conditional236;
void* right_value176;
_Bool _if_conditional237;
struct sVar* __result120__;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct sVar* __result121__;
struct sVar* __result122__;
struct sVar* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_171, 0, sizeof(unsigned int));
memset(&it_172, 0, sizeof(unsigned int));
memset(&right_value176, 0, sizeof(void*));
                                hash_171=string_get_hash_key(((char*)key))%self->size;
                                it_172=hash_171;
                                while(_while_condtional23=(_Bool)1,                                _while_condtional23) {
                                    if(_if_conditional236=self->item_existance[it_172],                                    _if_conditional236) {
                                        if(_if_conditional237=optional$2boolbool_value(((struct optional$2boolbool*)(right_value176=string_equals(self->keys[it_172],key)))),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176),
                                        (right_value176 && right_value176 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value176, 
                                        __freed_obj__ = 0, 
                                        _if_conditional237) {
                                            __result120__ = __result_obj__ = self->items[it_172];
                                            return __result120__;
                                        }
                                        it_172++;
                                        if(_if_conditional238=it_172>=self->size,                                        _if_conditional238) {
                                            it_172=0;
                                        }
                                        else {
                                            if(_if_conditional239=it_172==hash_171,                                            _if_conditional239) {
                                                __result121__ = __result_obj__ = default_value;
                                                return __result121__;
                                            }
                                        }
                                    }
                                    else {
                                        __result122__ = __result_obj__ = default_value;
                                        return __result122__;
                                    }
                                }
                                __result123__ = __result_obj__ = default_value;
                                return __result123__;
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional240;
unsigned int hash_185;
int it_186;
_Bool _while_condtional25;
_Bool _if_conditional244;
void* right_value180;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool same_key_exist_187;
char* it2_188;
_Bool _for_condtionalA12;
void* right_value181;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct map$2charphsVarph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&it_186, 0, sizeof(int));
memset(&right_value180, 0, sizeof(void*));
memset(&same_key_exist_187, 0, sizeof(_Bool));
memset(&it2_188, 0, sizeof(char*));
memset(&right_value181, 0, sizeof(void*));
                                if(_if_conditional240=self->len*2>=self->size,                                _if_conditional240) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_185=string_get_hash_key(key)%self->size;
                                it_186=hash_185;
                                while(_while_condtional25=(_Bool)1,                                _while_condtional25) {
                                    if(_if_conditional244=self->item_existance[it_186],                                    _if_conditional244) {
                                        if(_if_conditional245=optional$2boolbool_value(((struct optional$2boolbool*)(right_value180=string_equals(self->keys[it_186],key)))),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180),
                                        (right_value180 && right_value180 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value180, 
                                        __freed_obj__ = 0, 
                                        _if_conditional245) {
                                            if(_if_conditional246=1,                                            _if_conditional246) {
                                                if(self->keys[it_186] && !__freed_obj__) { self->keys[it_186] = come_decrement_ref_count(self->keys[it_186], (void*)0, (void*)0, 0, 0, 0); }
                                                list$1charp_remove(self->key_list,self->keys[it_186]);
                                                self->keys[it_186]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_186]);
                                                self->keys[it_186]=key;
                                            }
                                            if(_if_conditional247=1,                                            _if_conditional247) {
                                                if(self->items[it_186] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[it_186], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                self->items[it_186]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_186]=item;
                                            }
                                            break;
                                        }
                                        it_186++;
                                        if(_if_conditional248=it_186>=self->size,                                        _if_conditional248) {
                                            it_186=0;
                                        }
                                        else {
                                            if(_if_conditional249=it_186==hash_185,                                            _if_conditional249) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_186]=(_Bool)1;
                                        if(_if_conditional250=1,                                        _if_conditional250) {
                                            self->keys[it_186]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_186]=key;
                                        }
                                        if(_if_conditional251=1,                                        _if_conditional251) {
                                            self->items[it_186]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_186]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_187=(_Bool)0;
                                for(
                                it2_188=list$1charp_begin(self->key_list) ,                                0;                                _for_condtionalA12=                                !list$1charp_end(self->key_list) ,                                _for_condtionalA12;                                it2_188=list$1charp_next(self->key_list) ,                                0                                ){
                                    if(_if_conditional252=optional$2boolbool_value(((struct optional$2boolbool*)(right_value181=string_equals(it2_188,key)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181),
                                    (right_value181 && right_value181 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value181, 
                                    __freed_obj__ = 0, 
                                    _if_conditional252) {
                                        same_key_exist_187=(_Bool)1;
                                    }
                                }
                                if(_if_conditional253=!same_key_exist_187,                                _if_conditional253) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result124__ = __result_obj__ = self;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result124__;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_174;
void* right_value177;
char** keys_175;
void* right_value178;
struct sVar** items_176;
void* right_value179;
_Bool* item_existance_177;
int len_178;
char* it_179;
_Bool _for_condtionalA11;
struct sVar* default_value_180;
struct sVar* it2_181;
unsigned int hash_182;
int n_183;
_Bool _while_condtional24;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct sVar* default_value_184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_174, 0, sizeof(int));
memset(&right_value177, 0, sizeof(void*));
memset(&keys_175, 0, sizeof(char**));
memset(&right_value178, 0, sizeof(void*));
memset(&items_176, 0, sizeof(struct sVar**));
memset(&right_value179, 0, sizeof(void*));
memset(&item_existance_177, 0, sizeof(_Bool*));
memset(&len_178, 0, sizeof(int));
memset(&it_179, 0, sizeof(char*));
memset(&default_value_180, 0, sizeof(struct sVar*));
memset(&it2_181, 0, sizeof(struct sVar*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&n_183, 0, sizeof(int));
memset(&default_value_184, 0, sizeof(struct sVar*));
                                        size_174=self->size*10;
                                        keys_175=(char**)come_increment_ref_count(((char**)(right_value177=(char**)come_calloc(1, sizeof(char*)*(1*(size_174)), "./comelang2.h", 1380, "char*"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                                        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value177;
                                        __freed_obj__ = 0;
                                        items_176=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value178=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_174)), "./comelang2.h", 1381, "struct sVar*"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                                        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value178;
                                        __freed_obj__ = 0;
                                        item_existance_177=(_Bool*)come_increment_ref_count(((_Bool*)(right_value179=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_174)), "./comelang2.h", 1382, "_Bool"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                                        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value179;
                                        __freed_obj__ = 0;
                                        len_178=0;
                                        for(
                                        it_179=map$2charphsVarph_begin(self) ,                                        0;                                        _for_condtionalA11=                                        !map$2charphsVarph_end(self) ,                                        _for_condtionalA11;                                        it_179=map$2charphsVarph_next(self) ,                                        0                                        ){
                                            memset(&default_value_180,0,sizeof(struct sVar*));
                                            it2_181=map$2charphsVarph_at(self,it_179,default_value_180);
                                            hash_182=string_get_hash_key(it_179)%size_174;
                                            n_183=hash_182;
                                            while(_while_condtional24=(_Bool)1,                                            _while_condtional24) {
                                                if(_if_conditional241=item_existance_177[n_183],                                                _if_conditional241) {
                                                    n_183++;
                                                    if(_if_conditional242=n_183>=size_174,                                                    _if_conditional242) {
                                                        n_183=0;
                                                    }
                                                    else {
                                                        if(_if_conditional243=n_183==hash_182,                                                        _if_conditional243) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_177[n_183]=(_Bool)1;
                                                    keys_175[n_183]=it_179;
                                                    items_176[n_183]=map$2charphsVarph_at(self,it_179,default_value_184);
                                                    len_178++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                        come_free((char*)self->keys);
                                        self->keys=keys_175;
                                        self->items=items_176;
                                        self->item_existance=item_existance_177;
                                        self->size=size_174;
                                        self->len=len_178;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional257=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional257) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional258=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional258) {
            if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional259=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional259) {
            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional260=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional260) {
            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional261=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional261) {
            if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional262=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional262) {
            if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional263=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional263) {
            if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional264=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional264) {
            if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional265=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional265) {
            if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional266=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional266) {
            if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional267=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional267) {
            if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional268=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional268) {
            if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional269=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional269) {
            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

void init_classes(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value186;
void* right_value187;
void* right_value188;
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
int i_189;
_Bool _for_condtionalA13;
void* right_value219;
char* generics_type_190;
void* right_value220;
void* right_value221;
int rc_192;
_Bool _if_conditional270;
void* right_value222;
void* right_value223;
void* right_value224;
void* right_value225;
char* type_name_193;
void* right_value226;
void* right_value227;
struct sType* type_194;
void* right_value228;
char* __dec_obj80;
void* right_value235;
void* right_value236;
void* right_value237;
struct sClass* klass_216;
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
void* right_value280;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&i_189, 0, sizeof(int));
memset(&right_value219, 0, sizeof(void*));
memset(&generics_type_190, 0, sizeof(char*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&rc_192, 0, sizeof(int));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&type_name_193, 0, sizeof(char*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&type_194, 0, sizeof(struct sType*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&klass_216, 0, sizeof(struct sClass*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value188=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value187=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 431, "struct sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value186;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value187;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value188;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value191=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value190=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 432, "struct sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value189;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value190;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value191;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value194=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 433, "struct sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value192;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value193;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value194;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value197=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 434, "struct sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value195;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value196;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value197;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value200=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 435, "struct sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value199;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value200;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value203=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 436, "struct sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value201;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value202;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value203;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 437, "struct sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value204;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value205;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value206;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value209=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 438, "struct sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value207;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value208;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value209;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value212=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 439, "struct sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value210;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value211;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value212;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value215=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 440, "struct sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value213;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value214;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value215;
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value218=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 441, "struct sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value216;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value217;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value218;
    __freed_obj__ = 0;
    for(
    i_189=0 ,    0;    _for_condtionalA13=    i_189<12 ,    _for_condtionalA13;    i_189++ ,    0    ){
        generics_type_190=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("generics_type%d",i_189))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value219;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_190),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value221=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 444, "struct sClass")))),generics_type_190,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_189,-1,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value220;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value221;
        __freed_obj__ = 0;
        if(generics_type_190 && !__freed_obj__) { generics_type_190 = come_decrement_ref_count(generics_type_190, (void*)0, (void*)0, 0, 0, 0); }
    }
    char cmd_191[1024];
    memset(&cmd_191, 0, sizeof(char)    *(1024)    );
    snprintf(cmd_191,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    rc_192=system(cmd_191);
    if(_if_conditional270=rc_192==0,    _if_conditional270) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value224=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 452, "struct sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value222;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value223;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value224;
        __freed_obj__ = 0;
        type_name_193=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("__builtin_va_list"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value225;
        __freed_obj__ = 0;
        type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 456, "struct sType")))),"__builtin_va_list",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value226;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value227);
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value227;
        __freed_obj__ = 0;
        __dec_obj80=type_194->mOriginalTypeName;
        type_194->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string("__builtin_va_list"))));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value228;
        __freed_obj__ = 0;
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(type_name_193)))),(struct sType*)come_increment_ref_count(type_194));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value235;
        __freed_obj__ = 0;
        if(type_name_193 && !__freed_obj__) { type_name_193 = come_decrement_ref_count(type_name_193, (void*)0, (void*)0, 0, 0, 0); }
        if(type_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_194, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        klass_216=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value237=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value236=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 464, "struct sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value236;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value237;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(klass_216->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value245=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value241=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 466, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 466, "struct sType")))),"char*",(_Bool)0,info)))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value241;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value242);
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value242;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value243);
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value243;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value244;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value245;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(klass_216->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value250=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value246=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 467, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 467, "struct sType")))),"char*",(_Bool)0,info)))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value246;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value247;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value248);
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value248;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value249;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value250;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(klass_216->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value255=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value251=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 468, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 468, "struct sType")))),"char*",(_Bool)0,info)))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value251;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value252;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value253;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value254;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value255;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(klass_216->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value260=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value256=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 469, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value258=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 469, "struct sType")))),"int",(_Bool)0,info)))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value256;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value257;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value258;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value259);
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value259;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value260;
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(klass_216->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value265=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value261=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 470, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 470, "struct sType")))),"int",(_Bool)0,info)))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value261;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value262;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value263;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value264;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value265;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value280=sClass_clone(klass_216)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value266;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value280;
        __freed_obj__ = 0;
        if(klass_216 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional271;
unsigned int hash_212;
unsigned int it_213;
_Bool _while_condtional28;
_Bool _if_conditional283;
void* right_value233;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool same_key_exist_214;
char* it2_215;
_Bool _for_condtionalA15;
void* right_value234;
_Bool _if_conditional291;
_Bool _if_conditional292;
struct map$2charphsTypeph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_212, 0, sizeof(unsigned int));
memset(&it_213, 0, sizeof(unsigned int));
memset(&right_value233, 0, sizeof(void*));
memset(&same_key_exist_214, 0, sizeof(_Bool));
memset(&it2_215, 0, sizeof(char*));
memset(&right_value234, 0, sizeof(void*));
            if(_if_conditional271=self->len*10>=self->size,            _if_conditional271) {
                map$2charphsTypeph_rehash(self);
            }
            hash_212=string_get_hash_key(key)%self->size;
            it_213=hash_212;
            while(_while_condtional28=(_Bool)1,            _while_condtional28) {
                if(_if_conditional283=self->item_existance[it_213],                _if_conditional283) {
                    if(_if_conditional284=optional$2boolbool_value(((struct optional$2boolbool*)(right_value233=string_equals(self->keys[it_213],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233),
                    (right_value233 && right_value233 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value233, 
                    __freed_obj__ = 0, 
                    _if_conditional284) {
                        if(_if_conditional285=1,                        _if_conditional285) {
                            list$1charp_remove(self->key_list,self->keys[it_213]);
                            if(self->keys[it_213] && !__freed_obj__) { self->keys[it_213] = come_decrement_ref_count(self->keys[it_213], (void*)0, (void*)0, 0, 0, 0); }
                            self->keys[it_213]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_213]);
                            self->keys[it_213]=key;
                        }
                        if(_if_conditional286=1,                        _if_conditional286) {
                            if(self->items[it_213] && !__freed_obj__) { come_call_finalizer(sType_finalize,self->items[it_213], (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->items[it_213]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_213]=item;
                        }
                        break;
                    }
                    it_213++;
                    if(_if_conditional287=it_213>=self->size,                    _if_conditional287) {
                        it_213=0;
                    }
                    else {
                        if(_if_conditional288=it_213==hash_212,                        _if_conditional288) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_213]=(_Bool)1;
                    if(_if_conditional289=1,                    _if_conditional289) {
                        self->keys[it_213]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_213]=key;
                    }
                    if(_if_conditional290=1,                    _if_conditional290) {
                        self->items[it_213]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_213]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_214=(_Bool)0;
            for(
            it2_215=list$1charp_begin(self->key_list) ,            0;            _for_condtionalA15=            !list$1charp_end(self->key_list) ,            _for_condtionalA15;            it2_215=list$1charp_next(self->key_list) ,            0            ){
                if(_if_conditional291=optional$2boolbool_value(((struct optional$2boolbool*)(right_value234=string_equals(it2_215,key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234),
                (right_value234 && right_value234 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value234, 
                __freed_obj__ = 0, 
                _if_conditional291) {
                    same_key_exist_214=(_Bool)1;
                }
            }
            if(_if_conditional292=!same_key_exist_214,            _if_conditional292) {
                list$1charp_push_back(self->key_list,key);
            }
            __result140__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result140__;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_195;
void* right_value229;
char** keys_196;
void* right_value230;
struct sType** items_197;
void* right_value231;
_Bool* item_existance_198;
int len_199;
char* it_202;
_Bool _for_condtionalA14;
struct sType* default_value_205;
struct sType* it2_208;
unsigned int hash_209;
int n_210;
_Bool _while_condtional27;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct sType* default_value_211;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_195, 0, sizeof(int));
memset(&right_value229, 0, sizeof(void*));
memset(&keys_196, 0, sizeof(char**));
memset(&right_value230, 0, sizeof(void*));
memset(&items_197, 0, sizeof(struct sType**));
memset(&right_value231, 0, sizeof(void*));
memset(&item_existance_198, 0, sizeof(_Bool*));
memset(&len_199, 0, sizeof(int));
memset(&it_202, 0, sizeof(char*));
memset(&default_value_205, 0, sizeof(struct sType*));
memset(&it2_208, 0, sizeof(struct sType*));
memset(&hash_209, 0, sizeof(unsigned int));
memset(&n_210, 0, sizeof(int));
memset(&default_value_211, 0, sizeof(struct sType*));
                    size_195=self->size*10;
                    keys_196=(char**)come_increment_ref_count(((char**)(right_value229=(char**)come_calloc(1, sizeof(char*)*(1*(size_195)), "./comelang2.h", 1380, "char*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value229;
                    __freed_obj__ = 0;
                    items_197=(struct sType**)come_increment_ref_count(((struct sType**)(right_value230=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_195)), "./comelang2.h", 1381, "struct sType*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value230;
                    __freed_obj__ = 0;
                    item_existance_198=(_Bool*)come_increment_ref_count(((_Bool*)(right_value231=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_195)), "./comelang2.h", 1382, "_Bool"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value231;
                    __freed_obj__ = 0;
                    len_199=0;
                    for(
                    it_202=map$2charphsTypeph_begin(self) ,                    0;                    _for_condtionalA14=                    !map$2charphsTypeph_end(self) ,                    _for_condtionalA14;                    it_202=map$2charphsTypeph_next(self) ,                    0                    ){
                        memset(&default_value_205,0,sizeof(struct sType*));
                        it2_208=map$2charphsTypeph_at(self,it_202,default_value_205);
                        hash_209=string_get_hash_key(it_202)%size_195;
                        n_210=hash_209;
                        while(_while_condtional27=(_Bool)1,                        _while_condtional27) {
                            if(_if_conditional280=item_existance_198[n_210],                            _if_conditional280) {
                                n_210++;
                                if(_if_conditional281=n_210>=size_195,                                _if_conditional281) {
                                    n_210=0;
                                }
                                else {
                                    if(_if_conditional282=n_210==hash_209,                                    _if_conditional282) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_198[n_210]=(_Bool)1;
                                keys_196[n_210]=it_202;
                                items_197[n_210]=map$2charphsTypeph_at(self,it_202,default_value_211);
                                len_199++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    come_free((char*)self->keys);
                    self->keys=keys_196;
                    self->items=items_197;
                    self->item_existance=item_existance_198;
                    self->size=size_195;
                    self->len=len_199;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional272;
char* result_200;
char* __result129__;
_Bool _if_conditional273;
char* __result130__;
char* result_201;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_200, 0, sizeof(char*));
memset(&result_201, 0, sizeof(char*));
                        if(_if_conditional272=self==((void*)0),                        _if_conditional272) {
                            memset(&result_200,0,sizeof(char*));
                            __result129__ = __result_obj__ = result_200;
                            return __result129__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(_if_conditional273=self->key_list->it,                        _if_conditional273) {
                            __result130__ = __result_obj__ = self->key_list->it->item;
                            return __result130__;
                        }
                        memset(&result_201,0,sizeof(char*));
                        __result131__ = __result_obj__ = result_201;
                        return __result131__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result132__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result132__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional274;
char* result_203;
char* __result133__;
_Bool _if_conditional275;
char* __result134__;
char* result_204;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_203, 0, sizeof(char*));
memset(&result_204, 0, sizeof(char*));
                        if(_if_conditional274=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional274) {
                            memset(&result_203,0,sizeof(char*));
                            __result133__ = __result_obj__ = result_203;
                            return __result133__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(_if_conditional275=self->key_list->it,                        _if_conditional275) {
                            __result134__ = __result_obj__ = self->key_list->it->item;
                            return __result134__;
                        }
                        memset(&result_204,0,sizeof(char*));
                        __result135__ = __result_obj__ = result_204;
                        return __result135__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_206;
unsigned int it_207;
_Bool _while_condtional26;
_Bool _if_conditional276;
void* right_value232;
_Bool _if_conditional277;
struct sType* __result136__;
_Bool _if_conditional278;
_Bool _if_conditional279;
struct sType* __result137__;
struct sType* __result138__;
struct sType* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_206, 0, sizeof(unsigned int));
memset(&it_207, 0, sizeof(unsigned int));
memset(&right_value232, 0, sizeof(void*));
                            hash_206=string_get_hash_key(((char*)key))%self->size;
                            it_207=hash_206;
                            while(_while_condtional26=(_Bool)1,                            _while_condtional26) {
                                if(_if_conditional276=self->item_existance[it_207],                                _if_conditional276) {
                                    if(_if_conditional277=optional$2boolbool_value(((struct optional$2boolbool*)(right_value232=string_equals(self->keys[it_207],key)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232),
                                    (right_value232 && right_value232 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value232, 
                                    __freed_obj__ = 0, 
                                    _if_conditional277) {
                                        __result136__ = __result_obj__ = self->items[it_207];
                                        return __result136__;
                                    }
                                    it_207++;
                                    if(_if_conditional278=it_207>=self->size,                                    _if_conditional278) {
                                        it_207=0;
                                    }
                                    else {
                                        if(_if_conditional279=it_207==hash_206,                                        _if_conditional279) {
                                            __result137__ = __result_obj__ = default_value;
                                            return __result137__;
                                        }
                                    }
                                }
                                else {
                                    __result138__ = __result_obj__ = default_value;
                                    return __result138__;
                                }
                            }
                            __result139__ = __result_obj__ = default_value;
                            return __result139__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional293;
void* right_value238;
struct list_item$1tuple2$2charphsTypephph* litem_217;
struct tuple2$2charphsTypeph* __dec_obj81;
_Bool _if_conditional296;
void* right_value239;
struct list_item$1tuple2$2charphsTypephph* litem_218;
struct tuple2$2charphsTypeph* __dec_obj82;
void* right_value240;
struct list_item$1tuple2$2charphsTypephph* litem_219;
struct tuple2$2charphsTypeph* __dec_obj83;
struct list$1tuple2$2charphsTypephph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value238, 0, sizeof(void*));
memset(&litem_217, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value239, 0, sizeof(void*));
memset(&litem_218, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value240, 0, sizeof(void*));
memset(&litem_219, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional293=self->len==0,            _if_conditional293) {
                litem_217=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value238=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 282, "struct list_item$1tuple2$2charphsTypephph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value238;
                __freed_obj__ = 0;
                litem_217->prev=((void*)0);
                litem_217->next=((void*)0);
                __dec_obj81=litem_217->item;
                litem_217->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj81) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_217;
                self->head=litem_217;
            }
            else {
                if(_if_conditional296=self->len==1,                _if_conditional296) {
                    litem_218=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value239=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 292, "struct list_item$1tuple2$2charphsTypephph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
                    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value239;
                    __freed_obj__ = 0;
                    litem_218->prev=self->head;
                    litem_218->next=((void*)0);
                    __dec_obj82=litem_218->item;
                    litem_218->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj82) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_218;
                    self->head->next=litem_218;
                }
                else {
                    litem_219=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value240=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 302, "struct list_item$1tuple2$2charphsTypephph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
                    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value240;
                    __freed_obj__ = 0;
                    litem_219->prev=self->tail;
                    litem_219->next=((void*)0);
                    __dec_obj83=litem_219->item;
                    litem_219->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj83) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_219;
                    self->tail=litem_219;
                }
            }
            self->len++;
            __result141__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result141__;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional294;
_Bool _if_conditional295;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional294=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional294) {
                        if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional295=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional295) {
                        if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj84;
struct sType* __dec_obj85;
struct tuple2$2charphsTypeph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj84=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
            __dec_obj85=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
            __result142__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result142__;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional297;
struct sClass* __result143__;
void* right_value267;
struct sClass* result_220;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value268;
char* __dec_obj86;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
void* right_value278;
struct list$1tuple2$2charphsTypephph* __dec_obj92;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value279;
char* __dec_obj93;
struct sClass* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value267, 0, sizeof(void*));
memset(&result_220, 0, sizeof(struct sClass*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
            if(_if_conditional297=self==(void*)0,            _if_conditional297) {
                __result143__ = __result_obj__ = (void*)0;
                return __result143__;
            }
            result_220=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value267=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
            if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value267;
            __freed_obj__ = 0;
            if(_if_conditional298=self!=((void*)0),            _if_conditional298) {
                result_220->mStruct=self->mStruct;
            }
            if(_if_conditional299=self!=((void*)0),            _if_conditional299) {
                result_220->mFloat=self->mFloat;
            }
            if(_if_conditional300=self!=((void*)0),            _if_conditional300) {
                result_220->mUnion=self->mUnion;
            }
            if(_if_conditional301=self!=((void*)0),            _if_conditional301) {
                result_220->mGenerics=self->mGenerics;
            }
            if(_if_conditional302=self!=((void*)0),            _if_conditional302) {
                result_220->mMethodGenerics=self->mMethodGenerics;
            }
            if(_if_conditional303=self!=((void*)0),            _if_conditional303) {
                result_220->mEnum=self->mEnum;
            }
            if(_if_conditional304=self!=((void*)0),            _if_conditional304) {
                result_220->mProtocol=self->mProtocol;
            }
            if(_if_conditional305=self!=((void*)0),            _if_conditional305) {
                result_220->mNumber=self->mNumber;
            }
            if(_if_conditional306=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional306) {
                __dec_obj86=result_220->mName;
                result_220->mName=(char*)come_increment_ref_count(((char*)(right_value268=string_clone(self->mName))));
                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
                if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value268;
                __freed_obj__ = 0;
            }
            if(_if_conditional307=self!=((void*)0),            _if_conditional307) {
                result_220->mGenericsNum=self->mGenericsNum;
            }
            if(_if_conditional308=self!=((void*)0),            _if_conditional308) {
                result_220->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(_if_conditional309=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional309) {
                __dec_obj92=result_220->mFields;
                result_220->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value278=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                if(__dec_obj92) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value278;
                __freed_obj__ = 0;
            }
            if(_if_conditional316=self!=((void*)0),            _if_conditional316) {
                result_220->mOutputed=self->mOutputed;
            }
            if(_if_conditional317=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional317) {
                __dec_obj93=result_220->mDeclareSName;
                result_220->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value279=string_clone(self->mDeclareSName))));
                if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
                if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value279;
                __freed_obj__ = 0;
            }
            __result149__ = __result_obj__ = result_220;
            if(result_220 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_220, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result149__;
            if(result_220 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_220, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
struct list$1tuple2$2charphsTypephph* __result144__;
void* right_value269;
void* right_value270;
struct list$1tuple2$2charphsTypephph* result_221;
struct list_item$1tuple2$2charphsTypephph* it_222;
_Bool _while_condtional29;
void* right_value277;
struct list$1tuple2$2charphsTypephph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&result_221, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_222, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value277, 0, sizeof(void*));
                    if(_if_conditional310=self==((void*)0),                    _if_conditional310) {
                        __result144__ = __result_obj__ = ((void*)0);
                        return __result144__;
                    }
                    result_221=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value270=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value269=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 198, "struct list$1tuple2$2charphsTypephph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
                    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value269;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value270);
                    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value270;
                    __freed_obj__ = 0;
                    it_222=self->head;
                    while(_while_condtional29=it_222!=((void*)0),                    _while_condtional29) {
                        list$1tuple2$2charphsTypephph_add(result_221,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value277=tuple2$2charphsTypephp_clone(it_222->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
                        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value277;
                        __freed_obj__ = 0;
                        it_222=it_222->next;
                    }
                    __result148__ = __result_obj__ = result_221;
                    if(result_221 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_221, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result148__;
                    if(result_221 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_221, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional311;
void* right_value271;
struct list_item$1tuple2$2charphsTypephph* litem_223;
struct tuple2$2charphsTypeph* __dec_obj87;
_Bool _if_conditional312;
void* right_value272;
struct list_item$1tuple2$2charphsTypephph* litem_224;
struct tuple2$2charphsTypeph* __dec_obj88;
void* right_value273;
struct list_item$1tuple2$2charphsTypephph* litem_225;
struct tuple2$2charphsTypeph* __dec_obj89;
struct list$1tuple2$2charphsTypephph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value271, 0, sizeof(void*));
memset(&litem_223, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value272, 0, sizeof(void*));
memset(&litem_224, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value273, 0, sizeof(void*));
memset(&litem_225, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional311=self->len==0,                            _if_conditional311) {
                                litem_223=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value271=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 212, "struct list_item$1tuple2$2charphsTypephph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
                                if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value271;
                                __freed_obj__ = 0;
                                litem_223->prev=((void*)0);
                                litem_223->next=((void*)0);
                                __dec_obj87=litem_223->item;
                                litem_223->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj87) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_223;
                                self->head=litem_223;
                            }
                            else {
                                if(_if_conditional312=self->len==1,                                _if_conditional312) {
                                    litem_224=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value272=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 222, "struct list_item$1tuple2$2charphsTypephph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
                                    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value272;
                                    __freed_obj__ = 0;
                                    litem_224->prev=self->head;
                                    litem_224->next=((void*)0);
                                    __dec_obj88=litem_224->item;
                                    litem_224->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    if(__dec_obj88) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_224;
                                    self->head->next=litem_224;
                                }
                                else {
                                    litem_225=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value273=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 232, "struct list_item$1tuple2$2charphsTypephph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
                                    if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value273;
                                    __freed_obj__ = 0;
                                    litem_225->prev=self->tail;
                                    litem_225->next=((void*)0);
                                    __dec_obj89=litem_225->item;
                                    litem_225->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    if(__dec_obj89) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail->next=litem_225;
                                    self->tail=litem_225;
                                }
                            }
                            self->len++;
                            __result145__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result145__;
                            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional313;
struct tuple2$2charphsTypeph* __result146__;
void* right_value274;
struct tuple2$2charphsTypeph* result_226;
_Bool _if_conditional314;
void* right_value275;
char* __dec_obj90;
_Bool _if_conditional315;
void* right_value276;
struct sType* __dec_obj91;
struct tuple2$2charphsTypeph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value274, 0, sizeof(void*));
memset(&result_226, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
                            if(_if_conditional313=self==(void*)0,                            _if_conditional313) {
                                __result146__ = __result_obj__ = (void*)0;
                                return __result146__;
                            }
                            result_226=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value274=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
                            if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value274;
                            __freed_obj__ = 0;
                            if(_if_conditional314=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional314) {
                                __dec_obj90=result_226->v1;
                                result_226->v1=(char*)come_increment_ref_count(((char*)(right_value275=string_clone(self->v1))));
                                if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
                                if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value275;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional315=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional315) {
                                __dec_obj91=result_226->v2;
                                result_226->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_clone(self->v2))));
                                if(__dec_obj91) { come_call_finalizer(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
                                if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value276;
                                __freed_obj__ = 0;
                            }
                            __result147__ = __result_obj__ = result_226;
                            if(result_226 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_226, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result147__;
                            if(result_226 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_226, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void init_module(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value281;
char* project_name_227;
void* right_value282;
void* right_value283;
void* right_value284;
char* project_name_debug_228;
void* right_value285;
char* cc_229;
void* right_value286;
char* install_230;
void* right_value287;
char* libs_231;
void* right_value288;
char* os_232;
void* right_value289;
char* prefix_233;
void* right_value290;
char* cflags_234;
void* right_value291;
char* cflags_debug_235;
_Bool _or_conditional1;
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
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value281, 0, sizeof(void*));
memset(&project_name_227, 0, sizeof(char*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&project_name_debug_228, 0, sizeof(char*));
memset(&right_value285, 0, sizeof(void*));
memset(&cc_229, 0, sizeof(char*));
memset(&right_value286, 0, sizeof(void*));
memset(&install_230, 0, sizeof(char*));
memset(&right_value287, 0, sizeof(void*));
memset(&libs_231, 0, sizeof(char*));
memset(&right_value288, 0, sizeof(void*));
memset(&os_232, 0, sizeof(char*));
memset(&right_value289, 0, sizeof(void*));
memset(&prefix_233, 0, sizeof(char*));
memset(&right_value290, 0, sizeof(void*));
memset(&cflags_234, 0, sizeof(char*));
memset(&right_value291, 0, sizeof(void*));
memset(&cflags_debug_235, 0, sizeof(char*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
    project_name_227=(char*)come_increment_ref_count(((char*)(right_value281=__builtin_string(argv[2]))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
    if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value281;
    __freed_obj__ = 0;
    project_name_debug_228=(char*)come_increment_ref_count(((char*)(right_value284=string_operator_add(((char*)(right_value282=__builtin_string(argv[2]))),((char*)(right_value283=__builtin_string("-debug")))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value282;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283);
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value283;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value284;
    __freed_obj__ = 0;
    cc_229=(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("comelang2"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value285;
    __freed_obj__ = 0;
    install_230=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string("install"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value286;
    __freed_obj__ = 0;
    libs_231=(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string("-lpcre"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value287;
    __freed_obj__ = 0;
    os_232=(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string("linux"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value288;
    __freed_obj__ = 0;
    prefix_233=(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string("/usr/local/"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value289;
    __freed_obj__ = 0;
    cflags_234=(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string(" -common-header -O2 "))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value290;
    __freed_obj__ = 0;
    cflags_debug_235=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291);
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value291;
    __freed_obj__ = 0;
    if(_or_conditional1=mkdir(project_name_227,448|56|4|1),    _or_conditional1 != 0) {
        die("mkdir error");
    }
    optional$2intbool_value(((struct optional$2intbool*)(right_value320=charp_write(((char*)(right_value317=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: common.h \%s\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c header\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader:\n\tcomelang2 header $(SINGLE_SRCS)\n\ncommon.h: *.c\n\tbash -c 'shopt -s extglob; comelang2 header !(*.c).c'\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm *.log\n\t./\%s\n\ndebug: \%s\n\trm *.log\n\t./\%s\n",((char*)(right_value292=string_to_string(prefix_233))),((char*)(right_value293=string_to_string(project_name_227))),((char*)(right_value294=string_to_string(project_name_227))),((char*)(right_value295=string_to_string(project_name_227))),((char*)(right_value296=string_to_string(project_name_227))),((char*)(right_value297=string_to_string(cc_229))),((char*)(right_value298=string_to_string(install_230))),((char*)(right_value299=string_to_string(cflags_234))),((char*)(right_value300=string_to_string(cflags_debug_235))),((char*)(right_value301=string_to_string(libs_231))),((char*)(right_value302=string_to_string(os_232))),((char*)(right_value303=string_to_string(prefix_233))),((char*)(right_value304=string_to_string(project_name_227))),((char*)(right_value305=string_to_string(project_name_debug_228))),((char*)(right_value306=string_to_string(project_name_227))),((char*)(right_value307=string_to_string(project_name_227))),((char*)(right_value308=string_to_string(project_name_227))),((char*)(right_value309=string_to_string(project_name_227))),((char*)(right_value310=string_to_string(project_name_227))),((char*)(right_value311=string_to_string(project_name_227))),((char*)(right_value312=string_to_string(project_name_227))),((char*)(right_value313=string_to_string(project_name_227))),((char*)(right_value314=string_to_string(project_name_227))),((char*)(right_value315=string_to_string(project_name_debug_228))),((char*)(right_value316=string_to_string(project_name_debug_228)))))),((char*)(right_value319=xsprintf("\%s/Makefile",((char*)(right_value318=string_to_string(project_name_227)))))),(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value292;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value293);
    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value293;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value294);
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value294;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value295);
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value295;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value296);
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value296;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value297);
    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value297;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value298;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value299);
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value299;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value300);
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value300;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value301);
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value301;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value302;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value303);
    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value303;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value304);
    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value304;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value305);
    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value305;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value306);
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value306;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value307);
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value307;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value308;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value309);
    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value309;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value310);
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value310;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value311);
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value311;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value312);
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value312;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value313);
    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value313;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value314);
    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value314;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value315);
    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value315;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value316);
    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value316;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value317);
    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value317;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value318);
    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value318;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value319);
    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value319;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value320);
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value320;
    __freed_obj__ = 0;
    __result150__ = (_Bool)1;
    if(project_name_227 && !__freed_obj__) { project_name_227 = come_decrement_ref_count(project_name_227, (void*)0, (void*)0, 0, 0, 0); }
    if(project_name_debug_228 && !__freed_obj__) { project_name_debug_228 = come_decrement_ref_count(project_name_debug_228, (void*)0, (void*)0, 0, 0, 0); }
    if(cc_229 && !__freed_obj__) { cc_229 = come_decrement_ref_count(cc_229, (void*)0, (void*)0, 0, 0, 0); }
    if(install_230 && !__freed_obj__) { install_230 = come_decrement_ref_count(install_230, (void*)0, (void*)0, 0, 0, 0); }
    if(libs_231 && !__freed_obj__) { libs_231 = come_decrement_ref_count(libs_231, (void*)0, (void*)0, 0, 0, 0); }
    if(os_232 && !__freed_obj__) { os_232 = come_decrement_ref_count(os_232, (void*)0, (void*)0, 0, 0, 0); }
    if(prefix_233 && !__freed_obj__) { prefix_233 = come_decrement_ref_count(prefix_233, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_234 && !__freed_obj__) { cflags_234 = come_decrement_ref_count(cflags_234, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_debug_235 && !__freed_obj__) { cflags_debug_235 = come_decrement_ref_count(cflags_debug_235, (void*)0, (void*)0, 0, 0, 0); }
    return __result150__;
    if(project_name_227 && !__freed_obj__) { project_name_227 = come_decrement_ref_count(project_name_227, (void*)0, (void*)0, 0, 0, 0); }
    if(project_name_debug_228 && !__freed_obj__) { project_name_debug_228 = come_decrement_ref_count(project_name_debug_228, (void*)0, (void*)0, 0, 0, 0); }
    if(cc_229 && !__freed_obj__) { cc_229 = come_decrement_ref_count(cc_229, (void*)0, (void*)0, 0, 0, 0); }
    if(install_230 && !__freed_obj__) { install_230 = come_decrement_ref_count(install_230, (void*)0, (void*)0, 0, 0, 0); }
    if(libs_231 && !__freed_obj__) { libs_231 = come_decrement_ref_count(libs_231, (void*)0, (void*)0, 0, 0, 0); }
    if(os_232 && !__freed_obj__) { os_232 = come_decrement_ref_count(os_232, (void*)0, (void*)0, 0, 0, 0); }
    if(prefix_233 && !__freed_obj__) { prefix_233 = come_decrement_ref_count(prefix_233, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_234 && !__freed_obj__) { cflags_234 = come_decrement_ref_count(cflags_234, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_debug_235 && !__freed_obj__) { cflags_debug_235 = come_decrement_ref_count(cflags_debug_235, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _or_conditional2;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_or_conditional2=system("make run"),    _or_conditional2 != 0) {
        die("system");
    }
    __result151__ = (_Bool)1;
    return __result151__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _or_conditional3;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_or_conditional3=system("make debug"),    _or_conditional3 != 0) {
        die("system");
    }
    __result152__ = (_Bool)1;
    return __result152__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _or_conditional4;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_or_conditional4=system("make clean"),    _or_conditional4 != 0) {
        die("system");
    }
    __result153__ = (_Bool)1;
    return __result153__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value321;
void* right_value322;
_Bool _or_conditional5;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
    if(_or_conditional5=system(((char*)(right_value322=xsprintf("make install DESTDIR=\%s",((char*)(right_value321=charp_to_string(prefix))))))),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321),
    (right_value321 && right_value321 != __result_obj__ && !__freed_obj__) ? right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value321, 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value322),
    (right_value322 && right_value322 != __result_obj__ && !__freed_obj__) ? right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[1] = right_value322, 
    __freed_obj__ = 0, 
    _or_conditional5 != 0) {
        die("system");
    }
    __result154__ = (_Bool)1;
    return __result154__;
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional318;
void* right_value323;
void* right_value324;
struct buffer* clang_option_236;
void* right_value325;
void* right_value326;
struct buffer* cpp_option_237;
void* right_value327;
void* right_value328;
struct list$1charph* files_238;
void* right_value329;
void* right_value330;
struct list$1charph* object_files_239;
_Bool output_object_file_240;
_Bool output_cpp_file_241;
_Bool output_source_file_flag_242;
void* right_value331;
char* output_file_name_243;
_Bool verbose_244;
_Bool prohibit_common_header_245;
_Bool come_debug_246;
_Bool come_malloc_247;
_Bool come_str_248;
int i_249;
_Bool _for_condtionalA16;
_Bool _if_conditional319;
void* right_value332;
char* __dec_obj94;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value333;
_Bool _if_conditional327;
void* right_value334;
void* right_value335;
void* right_value336;
_Bool _if_conditional328;
void* right_value337;
void* right_value338;
void* right_value339;
void* right_value340;
_Bool _if_conditional329;
_Bool _if_conditional330;
void* right_value341;
void* right_value342;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value343;
_Bool _if_conditional336;
void* right_value344;
void* right_value345;
_Bool _if_conditional337;
_Bool _if_conditional338;
struct _IO_FILE* f_250;
_Bool _and_conditional1;
_Bool _or_conditional6;
struct list$1charph* o2_saved_251;
char* it_252;
_Bool _for_condtionalA17;
struct sInfo info_253;
void* right_value346;
char* __dec_obj95;
void* right_value347;
char* __dec_obj96;
void* right_value348;
char* __dec_obj97;
void* right_value349;
char* __dec_obj98;
void* right_value350;
void* right_value356;
struct map$2charphsFunph* __dec_obj100;
void* right_value357;
void* right_value363;
struct map$2charphsGenericsFunph* __dec_obj102;
void* right_value364;
void* right_value370;
struct map$2charphsClassph* __dec_obj104;
void* right_value371;
void* right_value377;
struct map$2charphsTypeph* __dec_obj106;
void* right_value378;
void* right_value379;
struct sModule* __dec_obj107;
void* right_value380;
void* right_value381;
struct list$1sRightValueObjectph* __dec_obj108;
void* right_value382;
void* right_value383;
struct list$1CVALUEph* __dec_obj109;
void* right_value384;
void* right_value385;
struct sVarTable* __dec_obj110;
void* right_value386;
void* right_value387;
struct sVarTable* lv_table_270;
void* right_value388;
void* right_value389;
struct list$1charph* __dec_obj111;
void* right_value390;
void* right_value391;
struct map$2charphsClassph* __dec_obj112;
static int n_271=0;
void* right_value392;
char* __dec_obj113;
_Bool _if_conditional375;
void* right_value393;
void* right_value394;
void* right_value395;
struct buffer* __dec_obj114;
void* right_value396;
void* right_value397;
void* right_value398;
struct buffer* __dec_obj115;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional402;
_Bool _if_conditional403;
int __result162__;
_Bool _if_conditional404;
_Bool _if_conditional405;
int __result163__;
_Bool _if_conditional406;
_Bool _if_conditional407;
int __result164__;
_Bool _if_conditional408;
_Bool _if_conditional409;
int __result165__;
_Bool _if_conditional410;
_Bool _if_conditional411;
_Bool _if_conditional412;
int __result166__;
_Bool _if_conditional413;
_Bool _if_conditional414;
int __result167__;
void* right_value399;
void* right_value400;
struct buffer* clang_option_272;
void* right_value401;
void* right_value402;
struct buffer* cpp_option_273;
void* right_value403;
void* right_value404;
struct list$1charph* files_274;
void* right_value405;
void* right_value406;
struct list$1charph* object_files_275;
_Bool output_object_file_276;
_Bool output_cpp_file_277;
_Bool output_source_file_flag_278;
char* output_file_name_279;
_Bool verbose_280;
_Bool come_debug_281;
_Bool come_malloc_282;
_Bool come_str_283;
int i_284;
_Bool _for_condtionalA30;
_Bool _if_conditional415;
void* right_value407;
char* __dec_obj116;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
void* right_value408;
_Bool _if_conditional422;
void* right_value409;
void* right_value410;
void* right_value411;
_Bool _if_conditional423;
void* right_value412;
void* right_value413;
void* right_value414;
void* right_value415;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
void* right_value416;
void* right_value417;
_Bool _if_conditional427;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
void* right_value418;
_Bool _if_conditional432;
void* right_value419;
void* right_value420;
void* right_value421;
_Bool _if_conditional433;
_Bool _if_conditional434;
struct list$1charph* o2_saved_285;
char* it_286;
_Bool _for_condtionalA31;
struct sInfo info_287;
void* right_value422;
char* __dec_obj117;
void* right_value423;
char* __dec_obj118;
void* right_value424;
char* __dec_obj119;
void* right_value425;
void* right_value426;
struct map$2charphsFunph* __dec_obj120;
void* right_value427;
void* right_value428;
struct map$2charphsGenericsFunph* __dec_obj121;
void* right_value429;
void* right_value430;
struct map$2charphsClassph* __dec_obj122;
void* right_value431;
void* right_value432;
struct map$2charphsTypeph* __dec_obj123;
void* right_value433;
void* right_value434;
struct sModule* __dec_obj124;
void* right_value435;
void* right_value436;
struct list$1sRightValueObjectph* __dec_obj125;
void* right_value437;
void* right_value438;
struct list$1CVALUEph* __dec_obj126;
void* right_value439;
void* right_value440;
struct sVarTable* __dec_obj127;
void* right_value441;
void* right_value442;
struct sVarTable* lv_table_288;
void* right_value443;
void* right_value444;
struct list$1charph* __dec_obj128;
void* right_value445;
void* right_value446;
struct map$2charphsClassph* __dec_obj129;
_Bool _if_conditional435;
void* right_value447;
void* right_value448;
void* right_value449;
struct buffer* __dec_obj130;
void* right_value450;
void* right_value451;
void* right_value452;
struct buffer* __dec_obj131;
_Bool _if_conditional436;
void* right_value453;
char* __dec_obj132;
char* __dec_obj133;
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional441;
struct sInfo info_289;
void* right_value454;
char* __dec_obj134;
void* right_value455;
char* __dec_obj135;
_Bool _if_conditional444;
void* right_value456;
char* __dec_obj136;
char* __dec_obj137;
struct __current_stack2__ __current_stack2__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&clang_option_236, 0, sizeof(struct buffer*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&cpp_option_237, 0, sizeof(struct buffer*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&files_238, 0, sizeof(struct list$1charph*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&object_files_239, 0, sizeof(struct list$1charph*));
memset(&output_object_file_240, 0, sizeof(_Bool));
memset(&output_cpp_file_241, 0, sizeof(_Bool));
memset(&output_source_file_flag_242, 0, sizeof(_Bool));
memset(&right_value331, 0, sizeof(void*));
memset(&output_file_name_243, 0, sizeof(char*));
memset(&verbose_244, 0, sizeof(_Bool));
memset(&prohibit_common_header_245, 0, sizeof(_Bool));
memset(&come_debug_246, 0, sizeof(_Bool));
memset(&come_malloc_247, 0, sizeof(_Bool));
memset(&come_str_248, 0, sizeof(_Bool));
memset(&i_249, 0, sizeof(int));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&f_250, 0, sizeof(struct _IO_FILE*));
memset(&o2_saved_251, 0, sizeof(struct list$1charph*));
memset(&it_252, 0, sizeof(char*));
memset(&info_253, 0, sizeof(struct sInfo));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&lv_table_270, 0, sizeof(struct sVarTable*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&clang_option_272, 0, sizeof(struct buffer*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&cpp_option_273, 0, sizeof(struct buffer*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&files_274, 0, sizeof(struct list$1charph*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&object_files_275, 0, sizeof(struct list$1charph*));
memset(&output_object_file_276, 0, sizeof(_Bool));
memset(&output_cpp_file_277, 0, sizeof(_Bool));
memset(&output_source_file_flag_278, 0, sizeof(_Bool));
memset(&output_file_name_279, 0, sizeof(char*));
memset(&verbose_280, 0, sizeof(_Bool));
memset(&come_debug_281, 0, sizeof(_Bool));
memset(&come_malloc_282, 0, sizeof(_Bool));
memset(&come_str_283, 0, sizeof(_Bool));
memset(&i_284, 0, sizeof(int));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&o2_saved_285, 0, sizeof(struct list$1charph*));
memset(&it_286, 0, sizeof(char*));
memset(&info_287, 0, sizeof(struct sInfo));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&right_value442, 0, sizeof(void*));
memset(&lv_table_288, 0, sizeof(struct sVarTable*));
memset(&right_value443, 0, sizeof(void*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_value447, 0, sizeof(void*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&right_value450, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
memset(&right_value453, 0, sizeof(void*));
memset(&info_289, 0, sizeof(struct sInfo));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&right_value456, 0, sizeof(void*));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(_if_conditional318=charp_operator_equals(argv[1],"header")&&argc>=3,    _if_conditional318) {
        gProgramName=argv[0];
        clang_option_236=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 619, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value323;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value324;
        __freed_obj__ = 0;
        cpp_option_237=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value326=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value325=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 620, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value325;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value326);
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value326;
        __freed_obj__ = 0;
        files_238=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value328=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value327=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 621, "struct list$1charph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value327;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value328);
        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value328;
        __freed_obj__ = 0;
        object_files_239=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value330=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value329=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 622, "struct list$1charph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value329;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value330);
        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value330;
        __freed_obj__ = 0;
        output_object_file_240=(_Bool)0;
        output_cpp_file_241=(_Bool)0;
        output_source_file_flag_242=(_Bool)0;
        output_file_name_243=(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string("common.h"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value331);
        if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value331;
        __freed_obj__ = 0;
        verbose_244=(_Bool)0;
        prohibit_common_header_245=(_Bool)0;
        come_debug_246=(_Bool)0;
        come_malloc_247=(_Bool)0;
        come_str_248=(_Bool)0;
        for(
        i_249=2 ,        0;        _for_condtionalA16=        i_249<argc ,        _for_condtionalA16;        i_249++ ,        0        ){
            if(_if_conditional319=charp_operator_equals(argv[i_249],"-o")&&i_249+1<argc,            _if_conditional319) {
                __dec_obj94=output_file_name_243;
                output_file_name_243=(char*)come_increment_ref_count(((char*)(right_value332=__builtin_string(argv[i_249+1]))));
                if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332);
                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { right_value332 = come_decrement_ref_count(right_value332, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value332;
                __freed_obj__ = 0;
                i_249++;
            }
            else {
                if(_if_conditional320=charp_operator_equals(argv[i_249],"-str"),                _if_conditional320) {
                    come_str_248=(_Bool)1;
                }
                else {
                    if(_if_conditional321=charp_operator_equals(argv[i_249],"-leak"),                    _if_conditional321) {
                        come_malloc_247=(_Bool)1;
                    }
                    else {
                        if(_if_conditional322=charp_operator_equals(argv[i_249],"-gc"),                        _if_conditional322) {
                            gComeGC=(_Bool)1;
                        }
                        else {
                            if(_if_conditional323=charp_operator_equals(argv[i_249],"-g"),                            _if_conditional323) {
                                buffer_append_str(clang_option_236,"-g ");
                            }
                            else {
                                if(_if_conditional324=charp_operator_equals(argv[i_249],"-cg"),                                _if_conditional324) {
                                    buffer_append_str(clang_option_236,"-g ");
                                    come_debug_246=(_Bool)1;
                                }
                                else {
                                    if(_if_conditional325=charp_operator_equals(argv[i_249],"-common-header"),                                    _if_conditional325) {
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional326=charp_operator_equals(argv[i_249],"-original-position"),                                        _if_conditional326) {
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            if(_if_conditional327=string_operator_equals(((char*)(right_value333=charp_operator_load_range_element(argv[i_249],0,2))),"-O"),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333),
                                            (right_value333 && right_value333 != __result_obj__ && !__freed_obj__) ? right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value333, 
                                            __freed_obj__ = 0, 
                                            _if_conditional327) {
                                                buffer_append_str(clang_option_236,((char*)(right_value335=xsprintf(" \%s ",((char*)(right_value334=charp_to_string(argv[i_249])))))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
                                                if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value334;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value335);
                                                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value335;
                                                __freed_obj__ = 0;
                                                come_debug_246=(_Bool)0;
                                            }
                                            else {
                                                if(_if_conditional328=string_operator_equals(((char*)(right_value336=charp_operator_load_range_element(argv[i_249],0,2))),"-D"),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336),
                                                (right_value336 && right_value336 != __result_obj__ && !__freed_obj__) ? right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value336, 
                                                __freed_obj__ = 0, 
                                                _if_conditional328) {
                                                    buffer_append_str(cpp_option_237,((char*)(right_value338=xsprintf(" \%s ",((char*)(right_value337=charp_to_string(argv[i_249])))))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
                                                    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value337;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value338);
                                                    if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value338;
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(clang_option_236,((char*)(right_value340=xsprintf(" \%s ",((char*)(right_value339=charp_to_string(argv[i_249])))))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339);
                                                    if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value339;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value340);
                                                    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value340;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional329=charp_operator_equals(argv[i_249],"-v"),                                                    _if_conditional329) {
                                                        buffer_append_str(clang_option_236,"-v ");
                                                        verbose_244=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional330=strlen(argv[i_249])>=2&&memcmp(argv[i_249],"-I",strlen("-I"))==0,                                                        _if_conditional330) {
                                                            buffer_append_str(cpp_option_237,((char*)(right_value342=charp_operator_add(" ",((char*)(right_value341=charp_operator_add(argv[i_249]," ")))))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                                                            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, (void*)0, (void*)0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value341;
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value342);
                                                            if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, (void*)0, (void*)0, 1, 0, 0); }
                                                            __right_value_freed_obj[1] = right_value342;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional331=charp_operator_equals(argv[i_249],"-gdwarf-4"),                                                            _if_conditional331) {
                                                                buffer_append_str(clang_option_236,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                if(_if_conditional332=charp_operator_equals(argv[i_249],"-s")||charp_operator_equals(argv[i_249],"-S"),                                                                _if_conditional332) {
                                                                    output_source_file_flag_242=(_Bool)1;
                                                                }
                                                                else {
                                                                    if(_if_conditional333=charp_operator_equals(argv[i_249],"-c"),                                                                    _if_conditional333) {
                                                                        output_object_file_240=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional334=charp_operator_equals(argv[i_249],"-E"),                                                                        _if_conditional334) {
                                                                            output_cpp_file_241=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional335=argv[i_249][0]==45,                                                                            _if_conditional335) {
                                                                                buffer_append_str(clang_option_236,((char*)(right_value343=charp_operator_add(argv[i_249]," "))));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                                                                                if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value343;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional336=strlen(argv[i_249])>2&&memcmp(argv[i_249]+strlen(argv[i_249])-2,".o",2)==0,                                                                                _if_conditional336) {
                                                                                    list$1charph_push_back(object_files_239,(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(argv[i_249])))));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value344);
                                                                                    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value344;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    list$1charph_push_back(files_238,(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string(argv[i_249])))));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
                                                                                    if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value345;
                                                                                    __freed_obj__ = 0;
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
        gComeDebug=come_debug_246;
        gComeMalloc=come_malloc_247;
        if(_if_conditional337=come_str_248,        _if_conditional337) {
            if(_if_conditional338=gComeGC,            _if_conditional338) {
                buffer_append_str(clang_option_236," -lcomelang2-str-gc -lpcre ");
            }
            else {
                buffer_append_str(clang_option_236," -lcomelang2-str -lpcre ");
            }
        }
        if(_and_conditional1=f_250=fopen(output_file_name_243,"w"),        _and_conditional1 == 0) {
            die("fopen");
        }
        fclose(f_250);
        if(_or_conditional6=truncate(output_file_name_243,0),        _or_conditional6 != 0) {
            die("truncate");
        }
        come_init_v5();
        for(
        o2_saved_251=(struct list$1charph*)come_increment_ref_count((files_238)),it_252=list$1charph_begin((o2_saved_251)) ,        0;        _for_condtionalA17=        !list$1charph_end((o2_saved_251)) ,        _for_condtionalA17;        it_252=list$1charph_next((o2_saved_251)) ,        0        ){
            memset(&info_253,0,sizeof(struct sInfo));
            __dec_obj95=info_253.base_sname;
            info_253.base_sname=(char*)come_increment_ref_count(((char*)(right_value346=__builtin_string(it_252))));
            if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
            if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value346;
            __freed_obj__ = 0;
            __dec_obj96=info_253.sname;
            info_253.sname=(char*)come_increment_ref_count(((char*)(right_value347=__builtin_string(it_252))));
            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value347;
            __freed_obj__ = 0;
            info_253.sline=1;
            info_253.err_num=0;
            __dec_obj97=info_253.clang_option;
            info_253.clang_option=(char*)come_increment_ref_count(((char*)(right_value348=buffer_to_string(clang_option_236))));
            if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value348;
            __freed_obj__ = 0;
            __dec_obj98=info_253.cpp_option;
            info_253.cpp_option=(char*)come_increment_ref_count(((char*)(right_value349=buffer_to_string(cpp_option_237))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value349;
            __freed_obj__ = 0;
            info_253.no_output_err=(_Bool)0;
            __dec_obj100=info_253.funcs;
            info_253.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value356=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value350=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 728, "struct map$2charphsFunph"))))))));
            if(__dec_obj100) { come_call_finalizer(map$2charphsFunph_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value350);
            if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value350;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value356);
            if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value356;
            __freed_obj__ = 0;
            __dec_obj102=info_253.generics_funcs;
            info_253.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value363=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value357=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 729, "struct map$2charphsGenericsFunph"))))))));
            if(__dec_obj102) { come_call_finalizer(map$2charphsGenericsFunph_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
            if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value357;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value363);
            if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value363;
            __freed_obj__ = 0;
            __dec_obj104=info_253.classes;
            info_253.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value370=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value364=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 730, "struct map$2charphsClassph"))))))));
            if(__dec_obj104) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value364;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value370);
            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value370;
            __freed_obj__ = 0;
            __dec_obj106=info_253.types;
            info_253.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value377=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value371=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 731, "struct map$2charphsTypeph"))))))));
            if(__dec_obj106) { come_call_finalizer(map$2charphsTypeph_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
            if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value371;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value377);
            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value377;
            __freed_obj__ = 0;
            __dec_obj107=info_253.module;
            info_253.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value379=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value378=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 732, "struct sModule"))))))));
            if(__dec_obj107) { come_call_finalizer(sModule_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value378;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value379);
            if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value379;
            __freed_obj__ = 0;
            __dec_obj108=info_253.right_value_objects;
            info_253.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value381=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value380=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 733, "struct list$1sRightValueObjectph"))))))));
            if(__dec_obj108) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value380);
            if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value380;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value381);
            if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value381;
            __freed_obj__ = 0;
            __dec_obj109=info_253.stack;
            info_253.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value383=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value382=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 734, "struct list$1CVALUEph"))))))));
            if(__dec_obj109) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value382);
            if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value382;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value383);
            if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value383;
            __freed_obj__ = 0;
            __dec_obj110=info_253.gv_table;
            info_253.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value385=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value384=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 735, "struct sVarTable")))),(_Bool)1,((void*)0)))));
            if(__dec_obj110) { come_call_finalizer(sVarTable_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
            if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value384;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value385);
            if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value385;
            __freed_obj__ = 0;
            lv_table_270=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value387=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value386=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 736, "struct sVarTable")))),(_Bool)0,((void*)0)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
            if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value386;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value387);
            if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value387;
            __freed_obj__ = 0;
            info_253.lv_table=lv_table_270;
            __dec_obj111=info_253.generics_type_names;
            info_253.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value389=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value388=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 738, "struct list$1charph"))))))));
            if(__dec_obj111) { come_call_finalizer(list$1charph_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value388);
            if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value388;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value389);
            if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value389;
            __freed_obj__ = 0;
            __dec_obj112=info_253.generics_classes;
            info_253.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value391=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value390=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 739, "struct map$2charphsClassph"))))))));
            if(__dec_obj112) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value390);
            if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value390;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value391);
            if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value391;
            __freed_obj__ = 0;
            info_253.verbose=verbose_244;
            info_253.output_header_file=(_Bool)1;
            info_253.num_source_files=n_271++;
            info_253.max_source_files=list$1charph_length(files_238);
            __dec_obj113=info_253.output_file_name;
            info_253.output_file_name=(char*)come_increment_ref_count(((char*)(right_value392=__builtin_string(output_file_name_243))));
            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value392);
            if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value392;
            __freed_obj__ = 0;
            init_classes(&info_253);
            init_module(&info_253);
            clear_tmp_file(&info_253);
            if(_if_conditional375=!cpp(&info_253),            _if_conditional375) {
                printf("%s %d: transpile failed\n",info_253.sname,info_253.sline);
                exit(2);
            }
            __dec_obj114=info_253.original_source;
            info_253.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value395=string_to_buffer(optional$2charphbool_value(((struct optional$2charphbool*)(right_value394=string_read(((char*)(right_value393=xsprintf("%s",it_252)))))))))));
            if(__dec_obj114) { come_call_finalizer(buffer_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value393);
            if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value393;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value394);
            if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value394;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value395);
            if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value395;
            __freed_obj__ = 0;
            __dec_obj115=info_253.source;
            info_253.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value398=string_to_buffer(optional$2charphbool_value(((struct optional$2charphbool*)(right_value397=string_read(((char*)(right_value396=xsprintf("%s.i",it_252)))))))))));
            if(__dec_obj115) { come_call_finalizer(buffer_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value396);
            if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value396;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value397);
            if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value397;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value398);
            if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value398;
            __freed_obj__ = 0;
            info_253.p=info_253.source->buf;
            info_253.head=info_253.source->buf;
            if(_if_conditional376=!output_cpp_file_241,            _if_conditional376) {
                transpile_v5(&info_253);
                if(_if_conditional377=!output_header_file(&info_253),                _if_conditional377) {
                    printf("%s %d: output source file faield\n",info_253.sname,info_253.sline);
                    exit(2);
                }
            }
            if((&info_253) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_253), (void*)0, (void*)0, 1, 0, 0, 0); }
            if(lv_table_270 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,lv_table_270, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_251 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_251, (void*)0, (void*)0, 0, 0, 0, 0); }
        come_final_v5();
        if(clang_option_236 && !__freed_obj__) { come_call_finalizer(buffer_finalize,clang_option_236, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cpp_option_237 && !__freed_obj__) { come_call_finalizer(buffer_finalize,cpp_option_237, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(files_238 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,files_238, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(object_files_239 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,object_files_239, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(output_file_name_243 && !__freed_obj__) { output_file_name_243 = come_decrement_ref_count(output_file_name_243, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional402=charp_operator_equals(argv[1],"new")&&argc==3,        _if_conditional402) {
            if(_if_conditional403=!new_project(argc,argv),            _if_conditional403) {
                __result162__ = (_Bool)0;
                return __result162__;
            }
        }
        else {
            if(_if_conditional404=charp_operator_equals(argv[1],"run")&&argc==2,            _if_conditional404) {
                if(_if_conditional405=!run_project(argc,argv),                _if_conditional405) {
                    __result163__ = (_Bool)0;
                    return __result163__;
                }
            }
            else {
                if(_if_conditional406=charp_operator_equals(argv[1],"debug")&&argc==2,                _if_conditional406) {
                    if(_if_conditional407=!debug_run_project(argc,argv),                    _if_conditional407) {
                        __result164__ = (_Bool)0;
                        return __result164__;
                    }
                }
                else {
                    if(_if_conditional408=charp_operator_equals(argv[1],"clean")&&argc==2,                    _if_conditional408) {
                        if(_if_conditional409=!clean_project(argc,argv),                        _if_conditional409) {
                            __result165__ = (_Bool)0;
                            return __result165__;
                        }
                    }
                    else {
                        if(_if_conditional410=charp_operator_equals(argv[1],"install")&&argc>=2,                        _if_conditional410) {
                            if(_if_conditional411=argc==2,                            _if_conditional411) {
                                if(_if_conditional412=!install_project(argc,argv,"/usr/local"),                                _if_conditional412) {
                                    __result166__ = (_Bool)0;
                                    return __result166__;
                                }
                            }
                            else {
                                if(_if_conditional413=argc>=3,                                _if_conditional413) {
                                    if(_if_conditional414=!install_project(argc,argv,argv[2]),                                    _if_conditional414) {
                                        __result167__ = (_Bool)0;
                                        return __result167__;
                                    }
                                }
                            }
                        }
                        else {
                            gProgramName=argv[0];
                            clang_option_272=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value400=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value399=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 811, "struct buffer"))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value399);
                            if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value399;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value400);
                            if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value400;
                            __freed_obj__ = 0;
                            cpp_option_273=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value402=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value401=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 812, "struct buffer"))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value401);
                            if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value401;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value402);
                            if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value402;
                            __freed_obj__ = 0;
                            files_274=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value404=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value403=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 813, "struct list$1charph"))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value403);
                            if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value403;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value404);
                            if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value404;
                            __freed_obj__ = 0;
                            object_files_275=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value406=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value405=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 814, "struct list$1charph"))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
                            if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value405;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value406);
                            if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value406;
                            __freed_obj__ = 0;
                            output_object_file_276=(_Bool)0;
                            output_cpp_file_277=(_Bool)0;
                            output_source_file_flag_278=(_Bool)0;
                            output_file_name_279=((void*)0);
                            verbose_280=(_Bool)0;
                            come_debug_281=(_Bool)0;
                            come_malloc_282=(_Bool)0;
                            come_str_283=(_Bool)0;
                            for(
                            i_284=1 ,                            0;                            _for_condtionalA30=                            i_284<argc ,                            _for_condtionalA30;                            i_284++ ,                            0                            ){
                                if(_if_conditional415=charp_operator_equals(argv[i_284],"-o")&&i_284+1<argc,                                _if_conditional415) {
                                    __dec_obj116=output_file_name_279;
                                    output_file_name_279=(char*)come_increment_ref_count(((char*)(right_value407=__builtin_string(argv[i_284+1]))));
                                    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value407);
                                    if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { right_value407 = come_decrement_ref_count(right_value407, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value407;
                                    __freed_obj__ = 0;
                                    i_284++;
                                }
                                else {
                                    if(_if_conditional416=charp_operator_equals(argv[i_284],"-str"),                                    _if_conditional416) {
                                        come_str_283=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional417=charp_operator_equals(argv[i_284],"-leak"),                                        _if_conditional417) {
                                            come_malloc_282=(_Bool)1;
                                        }
                                        else {
                                            if(_if_conditional418=charp_operator_equals(argv[i_284],"-gc"),                                            _if_conditional418) {
                                                gComeGC=(_Bool)1;
                                            }
                                            else {
                                                if(_if_conditional419=charp_operator_equals(argv[i_284],"-cg"),                                                _if_conditional419) {
                                                    come_debug_281=(_Bool)1;
                                                    buffer_append_str(clang_option_272,"-g ");
                                                }
                                                else {
                                                    if(_if_conditional420=charp_operator_equals(argv[i_284],"-common-header"),                                                    _if_conditional420) {
                                                        gCommonHeader=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional421=charp_operator_equals(argv[i_284],"-original-position"),                                                        _if_conditional421) {
                                                            gComeOriginalSourcePosition=(_Bool)0;
                                                        }
                                                        else {
                                                            if(_if_conditional422=string_operator_equals(((char*)(right_value408=charp_operator_load_range_element(argv[i_284],0,2))),"-O"),                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value408),
                                                            (right_value408 && right_value408 != __result_obj__ && !__freed_obj__) ? right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0, 0):0,
                                                            __right_value_freed_obj[0] = right_value408, 
                                                            __freed_obj__ = 0, 
                                                            _if_conditional422) {
                                                                buffer_append_str(clang_option_272,((char*)(right_value410=xsprintf(" \%s ",((char*)(right_value409=charp_to_string(argv[i_284])))))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value409);
                                                                if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { right_value409 = come_decrement_ref_count(right_value409, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value409;
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value410);
                                                                if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { right_value410 = come_decrement_ref_count(right_value410, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[1] = right_value410;
                                                                __freed_obj__ = 0;
                                                                come_debug_281=(_Bool)0;
                                                            }
                                                            else {
                                                                if(_if_conditional423=string_operator_equals(((char*)(right_value411=charp_operator_load_range_element(argv[i_284],0,2))),"-D"),                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value411),
                                                                (right_value411 && right_value411 != __result_obj__ && !__freed_obj__) ? right_value411 = come_decrement_ref_count(right_value411, (void*)0, (void*)0, 1, 0, 0):0,
                                                                __right_value_freed_obj[0] = right_value411, 
                                                                __freed_obj__ = 0, 
                                                                _if_conditional423) {
                                                                    buffer_append_str(cpp_option_273,((char*)(right_value413=xsprintf(" \%s ",((char*)(right_value412=charp_to_string(argv[i_284])))))));
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
                                                                    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value412;
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value413);
                                                                    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[1] = right_value413;
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_str(clang_option_272,((char*)(right_value415=xsprintf(" \%s ",((char*)(right_value414=charp_to_string(argv[i_284])))))));
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414);
                                                                    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value414;
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value415);
                                                                    if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[1] = right_value415;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional424=charp_operator_equals(argv[i_284],"-g"),                                                                    _if_conditional424) {
                                                                        buffer_append_str(clang_option_272,"-g ");
                                                                    }
                                                                    else {
                                                                        if(_if_conditional425=charp_operator_equals(argv[i_284],"-v"),                                                                        _if_conditional425) {
                                                                            buffer_append_str(clang_option_272,"-v ");
                                                                            verbose_280=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional426=strlen(argv[i_284])>=2&&memcmp(argv[i_284],"-I",strlen("-I"))==0,                                                                            _if_conditional426) {
                                                                                buffer_append_str(cpp_option_273,((char*)(right_value417=charp_operator_add(" ",((char*)(right_value416=charp_operator_add(argv[i_284]," ")))))));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value416);
                                                                                if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { right_value416 = come_decrement_ref_count(right_value416, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value416;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value417);
                                                                                if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[1] = right_value417;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional427=charp_operator_equals(argv[i_284],"-gdwarf-4"),                                                                                _if_conditional427) {
                                                                                    buffer_append_str(clang_option_272,"-gdwarf-4 ");
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional428=charp_operator_equals(argv[i_284],"-s")||charp_operator_equals(argv[i_284],"-S"),                                                                                    _if_conditional428) {
                                                                                        output_source_file_flag_278=(_Bool)1;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional429=charp_operator_equals(argv[i_284],"-c"),                                                                                        _if_conditional429) {
                                                                                            output_object_file_276=(_Bool)1;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional430=charp_operator_equals(argv[i_284],"-E"),                                                                                            _if_conditional430) {
                                                                                                output_cpp_file_277=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional431=argv[i_284][0]==45,                                                                                                _if_conditional431) {
                                                                                                    buffer_append_str(clang_option_272,((char*)(right_value418=charp_operator_add(argv[i_284]," "))));
                                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value418);
                                                                                                    if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { right_value418 = come_decrement_ref_count(right_value418, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                    __right_value_freed_obj[0] = right_value418;
                                                                                                    __freed_obj__ = 0;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional432=strlen(argv[i_284])>2&&memcmp(argv[i_284]+strlen(argv[i_284])-2,".o",2)==0,                                                                                                    _if_conditional432) {
                                                                                                        list$1charph_push_back(object_files_275,(char*)come_increment_ref_count(((char*)(right_value419=__builtin_string(argv[i_284])))));
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value419);
                                                                                                        if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value419;
                                                                                                        __freed_obj__ = 0;
                                                                                                    }
                                                                                                    else {
                                                                                                        list$1charph_push_back(files_274,(char*)come_increment_ref_count(((char*)(right_value421=string_clone(((char*)(right_value420=__builtin_string(argv[i_284]))))))));
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value420);
                                                                                                        if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { right_value420 = come_decrement_ref_count(right_value420, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value420;
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value421);
                                                                                                        if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { right_value421 = come_decrement_ref_count(right_value421, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[1] = right_value421;
                                                                                                        __freed_obj__ = 0;
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
                            gComeDebug=come_debug_281;
                            gComeMalloc=come_malloc_282;
                            if(_if_conditional433=come_str_283,                            _if_conditional433) {
                                if(_if_conditional434=gComeGC,                                _if_conditional434) {
                                    buffer_append_str(clang_option_272," -lcomelang2-str-gc -lpcre ");
                                }
                                else {
                                    buffer_append_str(clang_option_272," -lcomelang2-str -lpcre ");
                                }
                            }
                            come_init_v5();
                            for(
                            o2_saved_285=(struct list$1charph*)come_increment_ref_count((files_274)),it_286=list$1charph_begin((o2_saved_285)) ,                            0;                            _for_condtionalA31=                            !list$1charph_end((o2_saved_285)) ,                            _for_condtionalA31;                            it_286=list$1charph_next((o2_saved_285)) ,                            0                            ){
                                memset(&info_287,0,sizeof(struct sInfo));
                                __dec_obj117=info_287.sname;
                                info_287.sname=(char*)come_increment_ref_count(((char*)(right_value422=__builtin_string(it_286))));
                                if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value422);
                                if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { right_value422 = come_decrement_ref_count(right_value422, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value422;
                                __freed_obj__ = 0;
                                info_287.sline=1;
                                info_287.err_num=0;
                                __dec_obj118=info_287.clang_option;
                                info_287.clang_option=(char*)come_increment_ref_count(((char*)(right_value423=buffer_to_string(clang_option_272))));
                                if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value423);
                                if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { right_value423 = come_decrement_ref_count(right_value423, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value423;
                                __freed_obj__ = 0;
                                __dec_obj119=info_287.cpp_option;
                                info_287.cpp_option=(char*)come_increment_ref_count(((char*)(right_value424=buffer_to_string(cpp_option_273))));
                                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value424);
                                if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { right_value424 = come_decrement_ref_count(right_value424, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value424;
                                __freed_obj__ = 0;
                                info_287.no_output_err=(_Bool)0;
                                __dec_obj120=info_287.funcs;
                                info_287.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value426=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value425=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 913, "struct map$2charphsFunph"))))))));
                                if(__dec_obj120) { come_call_finalizer(map$2charphsFunph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value425);
                                if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value425;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value426);
                                if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value426;
                                __freed_obj__ = 0;
                                __dec_obj121=info_287.generics_funcs;
                                info_287.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value428=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value427=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 914, "struct map$2charphsGenericsFunph"))))))));
                                if(__dec_obj121) { come_call_finalizer(map$2charphsGenericsFunph_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value427);
                                if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value427;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value428);
                                if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value428;
                                __freed_obj__ = 0;
                                __dec_obj122=info_287.classes;
                                info_287.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value430=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value429=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 915, "struct map$2charphsClassph"))))))));
                                if(__dec_obj122) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value429);
                                if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value429;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value430);
                                if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value430;
                                __freed_obj__ = 0;
                                __dec_obj123=info_287.types;
                                info_287.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value432=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value431=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 916, "struct map$2charphsTypeph"))))))));
                                if(__dec_obj123) { come_call_finalizer(map$2charphsTypeph_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value431);
                                if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value431;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value432);
                                if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value432;
                                __freed_obj__ = 0;
                                __dec_obj124=info_287.module;
                                info_287.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value434=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value433=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 917, "struct sModule"))))))));
                                if(__dec_obj124) { come_call_finalizer(sModule_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value433);
                                if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value433;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value434);
                                if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value434;
                                __freed_obj__ = 0;
                                __dec_obj125=info_287.right_value_objects;
                                info_287.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value436=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value435=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 918, "struct list$1sRightValueObjectph"))))))));
                                if(__dec_obj125) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value435);
                                if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value435;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value436);
                                if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value436;
                                __freed_obj__ = 0;
                                __dec_obj126=info_287.stack;
                                info_287.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value438=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value437=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 919, "struct list$1CVALUEph"))))))));
                                if(__dec_obj126) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value437);
                                if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value437;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value438);
                                if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value438;
                                __freed_obj__ = 0;
                                __dec_obj127=info_287.gv_table;
                                info_287.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value440=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value439=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 920, "struct sVarTable")))),(_Bool)1,((void*)0)))));
                                if(__dec_obj127) { come_call_finalizer(sVarTable_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value439);
                                if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value439;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value440);
                                if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value440;
                                __freed_obj__ = 0;
                                lv_table_288=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value442=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value441=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 921, "struct sVarTable")))),(_Bool)0,((void*)0)))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value441);
                                if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value441;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value442);
                                if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value442;
                                __freed_obj__ = 0;
                                info_287.lv_table=lv_table_288;
                                __dec_obj128=info_287.generics_type_names;
                                info_287.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value444=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value443=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 923, "struct list$1charph"))))))));
                                if(__dec_obj128) { come_call_finalizer(list$1charph_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value443);
                                if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value443;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value444);
                                if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value444;
                                __freed_obj__ = 0;
                                __dec_obj129=info_287.generics_classes;
                                info_287.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value446=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value445=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 924, "struct map$2charphsClassph"))))))));
                                if(__dec_obj129) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value445);
                                if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value445;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value446);
                                if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value446;
                                __freed_obj__ = 0;
                                info_287.verbose=verbose_280;
                                init_classes(&info_287);
                                init_module(&info_287);
                                clear_tmp_file(&info_287);
                                if(_if_conditional435=!cpp(&info_287),                                _if_conditional435) {
                                    printf("%s %d: transpile failed\n",info_287.sname,info_287.sline);
                                    exit(2);
                                }
                                __dec_obj130=info_287.original_source;
                                info_287.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value449=string_to_buffer(optional$2charphbool_value(((struct optional$2charphbool*)(right_value448=string_read(((char*)(right_value447=xsprintf("%s",it_286)))))))))));
                                if(__dec_obj130) { come_call_finalizer(buffer_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
                                if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { right_value447 = come_decrement_ref_count(right_value447, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value447;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value448);
                                if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value448;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value449);
                                if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value449;
                                __freed_obj__ = 0;
                                __dec_obj131=info_287.source;
                                info_287.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value452=string_to_buffer(optional$2charphbool_value(((struct optional$2charphbool*)(right_value451=string_read(((char*)(right_value450=xsprintf("%s.i",it_286)))))))))));
                                if(__dec_obj131) { come_call_finalizer(buffer_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value450);
                                if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { right_value450 = come_decrement_ref_count(right_value450, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value450;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value451);
                                if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value451;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value452);
                                if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value452;
                                __freed_obj__ = 0;
                                info_287.p=info_287.source->buf;
                                info_287.head=info_287.source->buf;
                                if(_if_conditional436=output_file_name_279,                                _if_conditional436) {
                                    __dec_obj132=info_287.output_file_name;
                                    info_287.output_file_name=(char*)come_increment_ref_count(((char*)(right_value453=__builtin_string(output_file_name_279))));
                                    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value453);
                                    if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { right_value453 = come_decrement_ref_count(right_value453, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value453;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj133=info_287.output_file_name;
                                    info_287.output_file_name=((void*)0);
                                    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                                }
                                if(_if_conditional437=!output_cpp_file_277,                                _if_conditional437) {
                                    transpile_v5(&info_287);
                                    if(_if_conditional438=!output_source_file_v3(&info_287),                                    _if_conditional438) {
                                        printf("%s %d: output source file faield\n",info_287.sname,info_287.sline);
                                        exit(2);
                                    }
                                    if(_if_conditional439=info_287.err_num>0,                                    _if_conditional439) {
                                        printf("transpile error. err num %d\n",info_287.err_num);
                                        exit(2);
                                    }
                                    else {
                                        if(_if_conditional440=!compile(&info_287,output_object_file_276,object_files_275),                                        _if_conditional440) {
                                            printf("%s %d: compile faield\n",info_287.sname,info_287.sline);
                                            exit(27);
                                        }
                                    }
                                }
                                if((&info_287) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_287), (void*)0, (void*)0, 1, 0, 0, 0); }
                                if(lv_table_288 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,lv_table_288, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_285 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_285, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(_if_conditional441=!output_object_file_276&&!output_cpp_file_277&&(list$1charph_length(files_274)>0||list$1charph_length(object_files_275)>0),                            _if_conditional441) {
                                memset(&info_289,0,sizeof(struct sInfo));
                                __dec_obj134=info_289.sname;
                                info_289.sname=(char*)come_increment_ref_count(((char*)(right_value454=string_clone(list$1charphp_operator_load_element(files_274,0)))));
                                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value454);
                                if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { right_value454 = come_decrement_ref_count(right_value454, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value454;
                                __freed_obj__ = 0;
                                __dec_obj135=info_289.clang_option;
                                info_289.clang_option=(char*)come_increment_ref_count(((char*)(right_value455=buffer_to_string(clang_option_272))));
                                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value455);
                                if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { right_value455 = come_decrement_ref_count(right_value455, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value455;
                                __freed_obj__ = 0;
                                info_289.verbose=verbose_280;
                                if(_if_conditional444=output_file_name_279,                                _if_conditional444) {
                                    __dec_obj136=info_289.output_file_name;
                                    info_289.output_file_name=(char*)come_increment_ref_count(((char*)(right_value456=__builtin_string(output_file_name_279))));
                                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value456);
                                    if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { right_value456 = come_decrement_ref_count(right_value456, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value456;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj137=info_289.output_file_name;
                                    info_289.output_file_name=((void*)0);
                                    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                                }
                                __current_stack2__.info_289 = &info_289;
                                __current_stack2__.clang_option_272 = &clang_option_272;
                                __current_stack2__.cpp_option_273 = &cpp_option_273;
                                __current_stack2__.files_274 = &files_274;
                                __current_stack2__.object_files_275 = &object_files_275;
                                __current_stack2__.output_object_file_276 = &output_object_file_276;
                                __current_stack2__.output_cpp_file_277 = &output_cpp_file_277;
                                __current_stack2__.output_source_file_flag_278 = &output_source_file_flag_278;
                                __current_stack2__.output_file_name_279 = &output_file_name_279;
                                __current_stack2__.verbose_280 = &verbose_280;
                                __current_stack2__.come_debug_281 = &come_debug_281;
                                __current_stack2__.come_malloc_282 = &come_malloc_282;
                                __current_stack2__.come_str_283 = &come_str_283;
                                __current_stack2__.argc = &argc;
                                __current_stack2__.argv = &argv;
                                bool_expect(linker(&info_289,object_files_275),&__current_stack2__,(void*)method_block2_02transpilec);
                                                    if(__current_stack2__.__method_block_result_kind__ == 3)
                    {
                        return (int)__current_stack2__.__method_block_return_value__;
                    }
                                if((&info_289) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_289), (void*)0, (void*)0, 1, 0, 0, 0); }
                            }
                            come_final_v5();
                            if(clang_option_272 && !__freed_obj__) { come_call_finalizer(buffer_finalize,clang_option_272, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(cpp_option_273 && !__freed_obj__) { come_call_finalizer(buffer_finalize,cpp_option_273, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(files_274 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,files_274, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(object_files_275 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,object_files_275, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(output_file_name_279 && !__freed_obj__) { output_file_name_279 = come_decrement_ref_count(output_file_name_279, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
            }
        }
    }
    __result170__ = 0;
    return __result170__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value351;
void* right_value352;
void* right_value353;
int i_254;
_Bool _for_condtionalA18;
void* right_value354;
void* right_value355;
struct list$1charp* __dec_obj99;
struct map$2charphsFunph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&i_254, 0, sizeof(int));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
                self->keys=(char**)come_increment_ref_count(((char**)(right_value351=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1132, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351);
                if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value351;
                __freed_obj__ = 0;
                self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value352=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(1024)), "./comelang2.h", 1133, "struct sFun*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value352;
                __freed_obj__ = 0;
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value353=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1134, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value353);
                if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value353;
                __freed_obj__ = 0;
                for(
                i_254=0 ,                0;                _for_condtionalA18=                i_254<1024 ,                _for_condtionalA18;                i_254++ ,                0                ){
                    self->item_existance[i_254]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj99=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value355=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value354=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1144, "struct list$1charp"))))))));
                if(__dec_obj99) { come_call_finalizer(list$1charp_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value354;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value355);
                if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value355;
                __freed_obj__ = 0;
                self->it=0;
                __result155__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result155__;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_255;
_Bool _for_condtionalA19;
_Bool _if_conditional339;
_Bool _if_conditional340;
int i_256;
_Bool _for_condtionalA20;
_Bool _if_conditional341;
_Bool _if_conditional342;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_255, 0, sizeof(int));
memset(&i_256, 0, sizeof(int));
                    for(
                    i_255=0 ,                    0;                    _for_condtionalA19=                    i_255<self->size ,                    _for_condtionalA19;                    i_255++ ,                    0                    ){
                        if(_if_conditional339=self->item_existance[i_255],                        _if_conditional339) {
                            if(_if_conditional340=1,                            _if_conditional340) {
                                if(self->items[i_255] && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->items[i_255], (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(
                    i_256=0 ,                    0;                    _for_condtionalA20=                    i_256<self->size ,                    _for_condtionalA20;                    i_256++ ,                    0                    ){
                        if(_if_conditional341=self->item_existance[i_256],                        _if_conditional341) {
                            if(_if_conditional342=1,                            _if_conditional342) {
                                if(self->keys[i_256] && !__freed_obj__) { self->keys[i_256] = come_decrement_ref_count(self->keys[i_256], (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional343;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional343=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional343) {
                    if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value358;
void* right_value359;
void* right_value360;
int i_257;
_Bool _for_condtionalA21;
void* right_value361;
void* right_value362;
struct list$1charp* __dec_obj101;
struct map$2charphsGenericsFunph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&i_257, 0, sizeof(int));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
                self->keys=(char**)come_increment_ref_count(((char**)(right_value358=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1132, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value358);
                if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value358;
                __freed_obj__ = 0;
                self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value359=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(1024)), "./comelang2.h", 1133, "struct sGenericsFun*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
                if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value359;
                __freed_obj__ = 0;
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value360=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1134, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value360);
                if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value360;
                __freed_obj__ = 0;
                for(
                i_257=0 ,                0;                _for_condtionalA21=                i_257<1024 ,                _for_condtionalA21;                i_257++ ,                0                ){
                    self->item_existance[i_257]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj101=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value362=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value361=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1144, "struct list$1charp"))))))));
                if(__dec_obj101) { come_call_finalizer(list$1charp_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
                if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value361;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value362);
                if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value362;
                __freed_obj__ = 0;
                self->it=0;
                __result156__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result156__;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional344=self!=((void*)0)&&self->mImplType!=((void*)0),                    _if_conditional344) {
                        if(self->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional345=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                    _if_conditional345) {
                        if(self->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional346=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional346) {
                        if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional347=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional347) {
                        if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional348=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional348) {
                        if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional349=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional349) {
                        if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional350=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                    _if_conditional350) {
                        if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional351=self!=((void*)0)&&self->mBlock!=((void*)0),                    _if_conditional351) {
                        if(self->mBlock && !__freed_obj__) { self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional352=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                    _if_conditional352) {
                        if(self->mGenericsSName && !__freed_obj__) { self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_258;
_Bool _for_condtionalA22;
_Bool _if_conditional353;
_Bool _if_conditional354;
int i_259;
_Bool _for_condtionalA23;
_Bool _if_conditional355;
_Bool _if_conditional356;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_258, 0, sizeof(int));
memset(&i_259, 0, sizeof(int));
                    for(
                    i_258=0 ,                    0;                    _for_condtionalA22=                    i_258<self->size ,                    _for_condtionalA22;                    i_258++ ,                    0                    ){
                        if(_if_conditional353=self->item_existance[i_258],                        _if_conditional353) {
                            if(_if_conditional354=1,                            _if_conditional354) {
                                if(self->items[i_258] && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,self->items[i_258], (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(
                    i_259=0 ,                    0;                    _for_condtionalA23=                    i_259<self->size ,                    _for_condtionalA23;                    i_259++ ,                    0                    ){
                        if(_if_conditional355=self->item_existance[i_259],                        _if_conditional355) {
                            if(_if_conditional356=1,                            _if_conditional356) {
                                if(self->keys[i_259] && !__freed_obj__) { self->keys[i_259] = come_decrement_ref_count(self->keys[i_259], (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional357;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional357=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional357) {
                    if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value365;
void* right_value366;
void* right_value367;
int i_260;
_Bool _for_condtionalA24;
void* right_value368;
void* right_value369;
struct list$1charp* __dec_obj103;
struct map$2charphsClassph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&i_260, 0, sizeof(int));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
                self->keys=(char**)come_increment_ref_count(((char**)(right_value365=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1132, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value365;
                __freed_obj__ = 0;
                self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value366=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(1024)), "./comelang2.h", 1133, "struct sClass*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value366;
                __freed_obj__ = 0;
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value367=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1134, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
                if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value367;
                __freed_obj__ = 0;
                for(
                i_260=0 ,                0;                _for_condtionalA24=                i_260<1024 ,                _for_condtionalA24;                i_260++ ,                0                ){
                    self->item_existance[i_260]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj103=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value369=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value368=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1144, "struct list$1charp"))))))));
                if(__dec_obj103) { come_call_finalizer(list$1charp_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
                if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value368;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value369);
                if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value369;
                __freed_obj__ = 0;
                self->it=0;
                __result157__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result157__;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_261;
_Bool _for_condtionalA25;
_Bool _if_conditional358;
_Bool _if_conditional359;
int i_262;
_Bool _for_condtionalA26;
_Bool _if_conditional360;
_Bool _if_conditional361;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_261, 0, sizeof(int));
memset(&i_262, 0, sizeof(int));
                    for(
                    i_261=0 ,                    0;                    _for_condtionalA25=                    i_261<self->size ,                    _for_condtionalA25;                    i_261++ ,                    0                    ){
                        if(_if_conditional358=self->item_existance[i_261],                        _if_conditional358) {
                            if(_if_conditional359=1,                            _if_conditional359) {
                                if(self->items[i_261] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[i_261], (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(
                    i_262=0 ,                    0;                    _for_condtionalA26=                    i_262<self->size ,                    _for_condtionalA26;                    i_262++ ,                    0                    ){
                        if(_if_conditional360=self->item_existance[i_262],                        _if_conditional360) {
                            if(_if_conditional361=1,                            _if_conditional361) {
                                if(self->keys[i_262] && !__freed_obj__) { self->keys[i_262] = come_decrement_ref_count(self->keys[i_262], (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional362=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional362) {
                    if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value372;
void* right_value373;
void* right_value374;
int i_263;
_Bool _for_condtionalA27;
void* right_value375;
void* right_value376;
struct list$1charp* __dec_obj105;
struct map$2charphsTypeph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&i_263, 0, sizeof(int));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
                self->keys=(char**)come_increment_ref_count(((char**)(right_value372=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1132, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
                if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value372;
                __freed_obj__ = 0;
                self->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value373=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(1024)), "./comelang2.h", 1133, "struct sType*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
                if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value373;
                __freed_obj__ = 0;
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value374=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1134, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value374;
                __freed_obj__ = 0;
                for(
                i_263=0 ,                0;                _for_condtionalA27=                i_263<1024 ,                _for_condtionalA27;                i_263++ ,                0                ){
                    self->item_existance[i_263]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj105=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value376=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value375=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1144, "struct list$1charp"))))))));
                if(__dec_obj105) { come_call_finalizer(list$1charp_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
                if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value375;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value376);
                if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value376;
                __freed_obj__ = 0;
                self->it=0;
                __result158__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result158__;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_264;
_Bool _for_condtionalA28;
_Bool _if_conditional363;
_Bool _if_conditional364;
int i_265;
_Bool _for_condtionalA29;
_Bool _if_conditional365;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_264, 0, sizeof(int));
memset(&i_265, 0, sizeof(int));
                    for(
                    i_264=0 ,                    0;                    _for_condtionalA28=                    i_264<self->size ,                    _for_condtionalA28;                    i_264++ ,                    0                    ){
                        if(_if_conditional363=self->item_existance[i_264],                        _if_conditional363) {
                            if(_if_conditional364=1,                            _if_conditional364) {
                                if(self->items[i_264] && !__freed_obj__) { come_call_finalizer(sType_finalize,self->items[i_264], (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(
                    i_265=0 ,                    0;                    _for_condtionalA29=                    i_265<self->size ,                    _for_condtionalA29;                    i_265++ ,                    0                    ){
                        if(_if_conditional365=self->item_existance[i_265],                        _if_conditional365) {
                            if(_if_conditional366=1,                            _if_conditional366) {
                                if(self->keys[i_265] && !__freed_obj__) { self->keys[i_265] = come_decrement_ref_count(self->keys[i_265], (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional367;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional367=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional367) {
                    if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sRightValueObjectph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result159__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result159__;
                if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_266;
_Bool _while_condtional30;
struct list_item$1sRightValueObjectph* prev_it_267;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_266, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_267, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_266=self->head;
                    while(_while_condtional30=it_266!=((void*)0),                    _while_condtional30) {
                        prev_it_267=it_266;
                        it_266=it_266->next;
                        if(prev_it_267 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional368;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional368=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional368) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional369=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional369) {
                                        if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional370=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional370) {
                                        if(self->mVarName && !__freed_obj__) { self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional371=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional371) {
                                        if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result160__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result160__;
                if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_268;
_Bool _while_condtional31;
struct list_item$1CVALUEph* prev_it_269;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_268, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_269, 0, sizeof(struct list_item$1CVALUEph*));
                    it_268=self->head;
                    while(_while_condtional31=it_268!=((void*)0),                    _while_condtional31) {
                        prev_it_269=it_268;
                        it_268=it_268->next;
                        if(prev_it_269 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional372;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional372=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional372) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional373;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional373=self!=((void*)0)&&self->c_value!=((void*)0),                                    _if_conditional373) {
                                        if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional374=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional374) {
                                        if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result161__ = self->len;
                return __result161__;
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
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
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional378=self!=((void*)0)&&self->original_source!=((void*)0),                _if_conditional378) {
                    if(self->original_source && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->original_source, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional379=self!=((void*)0)&&self->source!=((void*)0),                _if_conditional379) {
                    if(self->source && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->source, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional380=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional380) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional381=self!=((void*)0)&&self->base_sname!=((void*)0),                _if_conditional381) {
                    if(self->base_sname && !__freed_obj__) { self->base_sname = come_decrement_ref_count(self->base_sname, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional382=self!=((void*)0)&&self->err_line!=((void*)0),                _if_conditional382) {
                    if(self->err_line && !__freed_obj__) { self->err_line = come_decrement_ref_count(self->err_line, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional383=self!=((void*)0)&&self->clang_option!=((void*)0),                _if_conditional383) {
                    if(self->clang_option && !__freed_obj__) { self->clang_option = come_decrement_ref_count(self->clang_option, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional384=self!=((void*)0)&&self->cpp_option!=((void*)0),                _if_conditional384) {
                    if(self->cpp_option && !__freed_obj__) { self->cpp_option = come_decrement_ref_count(self->cpp_option, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional385=self!=((void*)0)&&self->come_fun_name!=((void*)0),                _if_conditional385) {
                    if(self->come_fun_name && !__freed_obj__) { self->come_fun_name = come_decrement_ref_count(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional386=self!=((void*)0)&&self->funcs!=((void*)0),                _if_conditional386) {
                    if(self->funcs && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self->funcs, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional387=self!=((void*)0)&&self->generics_funcs!=((void*)0),                _if_conditional387) {
                    if(self->generics_funcs && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self->generics_funcs, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional388=self!=((void*)0)&&self->classes!=((void*)0),                _if_conditional388) {
                    if(self->classes && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self->classes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional389=self!=((void*)0)&&self->types!=((void*)0),                _if_conditional389) {
                    if(self->types && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self->types, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional390=self!=((void*)0)&&self->generics_classes!=((void*)0),                _if_conditional390) {
                    if(self->generics_classes && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self->generics_classes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional391=self!=((void*)0)&&self->module!=((void*)0),                _if_conditional391) {
                    if(self->module && !__freed_obj__) { come_call_finalizer(sModule_finalize,self->module, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional392=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional392) {
                    if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional393=self!=((void*)0)&&self->right_value_objects!=((void*)0),                _if_conditional393) {
                    if(self->right_value_objects && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self->right_value_objects, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional394=self!=((void*)0)&&self->generics_type!=((void*)0),                _if_conditional394) {
                    if(self->generics_type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->generics_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional395=self!=((void*)0)&&self->method_generics_types!=((void*)0),                _if_conditional395) {
                    if(self->method_generics_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional396=self!=((void*)0)&&self->stack!=((void*)0),                _if_conditional396) {
                    if(self->stack && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self->stack, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional397=self!=((void*)0)&&self->come_function_result_type!=((void*)0),                _if_conditional397) {
                    if(self->come_function_result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->come_function_result_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional398=self!=((void*)0)&&self->gv_table!=((void*)0),                _if_conditional398) {
                    if(self->gv_table && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->gv_table, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional399=self!=((void*)0)&&self->generics_type_names!=((void*)0),                _if_conditional399) {
                    if(self->generics_type_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional400=self!=((void*)0)&&self->impl_type!=((void*)0),                _if_conditional400) {
                    if(self->impl_type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->impl_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional401=self!=((void*)0)&&self->output_file_name!=((void*)0),                _if_conditional401) {
                    if(self->output_file_name && !__freed_obj__) { self->output_file_name = come_decrement_ref_count(self->output_file_name, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional442;
struct list_item$1charph* it_290;
int i_291;
_Bool _while_condtional32;
_Bool _if_conditional443;
char* __result168__;
char* default_value_292;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_290, 0, sizeof(struct list_item$1charph*));
memset(&i_291, 0, sizeof(int));
memset(&default_value_292, 0, sizeof(char*));
                                    if(_if_conditional442=position<0,                                    _if_conditional442) {
                                        position+=self->len;
                                    }
                                    it_290=self->head;
                                    i_291=0;
                                    while(_while_condtional32=it_290!=((void*)0),                                    _while_condtional32) {
                                        if(_if_conditional443=position==i_291,                                        _if_conditional443) {
                                            __result168__ = __result_obj__ = it_290->item;
                                            return __result168__;
                                        }
                                        it_290=it_290->next;
                                        i_291++;
                                    }
                                    memset(&default_value_292,0,sizeof(char*));
                                    __result169__ = __result_obj__ = default_value_292;
                                    if(default_value_292 && !__freed_obj__) { default_value_292 = come_decrement_ref_count(default_value_292, (void*)0, (void*)0, 0, 1, 0); }
                                    return __result169__;
                                    if(default_value_292 && !__freed_obj__) { default_value_292 = come_decrement_ref_count(default_value_292, (void*)0, (void*)0, 0, 0, 0); }
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    printf("%s %d: linker faield\n",(*(parent->info_289)).sname,(*(parent->info_289)).sline);
                                    exit(13);
}

