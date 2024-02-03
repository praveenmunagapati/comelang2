// source head
typedef long int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long int __int64_t;
typedef unsigned long int __uint64_t;
typedef char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef unsigned short int __uint_least16_t;
typedef int __int_least32_t;
typedef unsigned int __uint_least32_t;
typedef long int __int_least64_t;
typedef unsigned long int __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
struct anonymous_typeX1
{
    int __val[2];
};
typedef struct anonymous_typeX1 __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void* __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef long int __loff_t;
typedef char* __caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
union anonymous_typeZ4
{
unsigned int __wch;
char __wchb[4];
};
struct anonymous_typeX2
{
    int __count;
    union anonymous_typeZ4 __value;
};
typedef struct anonymous_typeX2 __mbstate_t;
struct _G_fpos_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos_t __fpos_t;
struct _G_fpos64_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos64_t __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker* _markers;
    struct _IO_FILE* _chain;
    int _fileno;
    int _flags2;
    long int _old_offset;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long int _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    long int __pad5;
    int _mode;
    char _unused2[15*sizeof(int)-4*sizeof(void*)-sizeof(long int)];
};
typedef long int (*cookie_read_function_t)(void*,char*,long int);
typedef long int (*cookie_write_function_t)(void*,const char*,long int);
typedef int (*cookie_seek_function_t)(void*,long int*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long int (*read)(void*,char*,long int);
    long int (*write)(void*,const char*,long int);
    int (*seek)(void*,long int*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef __builtin_va_list va_list;
typedef long int off_t;
typedef long int off64_t;
typedef long int ssize_t;
typedef struct _G_fpos_t fpos_t;
typedef struct _G_fpos64_t fpos64_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct obstack;
typedef int wchar_t;
struct anonymous_typeX5
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX5 div_t;
struct anonymous_typeX6
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX6 ldiv_t;
struct anonymous_typeX7
{
    long long int quot;
    long long int rem;
};
typedef struct anonymous_typeX7 lldiv_t;
struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};
typedef struct __locale_struct* __locale_t;
typedef struct __locale_struct* locale_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef long int quad_t;
typedef unsigned long int u_quad_t;
typedef struct anonymous_typeX1 fsid_t;
typedef long int loff_t;
typedef unsigned long int ino_t;
typedef unsigned long int ino64_t;
typedef unsigned long int dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned long int nlink_t;
typedef unsigned int uid_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int daddr_t;
typedef char* caddr_t;
typedef int key_t;
typedef long int clock_t;
typedef int clockid_t;
typedef long int time_t;
typedef void* timer_t;
typedef unsigned int useconds_t;
typedef long int suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long int u_int64_t;
typedef int register_t;
struct anonymous_typeX8
{
    unsigned long int __val[(1024/(8*sizeof(unsigned long int)))];
};
typedef struct anonymous_typeX8 __sigset_t;
typedef struct anonymous_typeX8 sigset_t;
struct timeval
{
    long int tv_sec;
    long int tv_usec;
};
struct timespec
{
    long int tv_sec;
    long int tv_nsec;
};
typedef long int __fd_mask;
struct anonymous_typeX9
{
    long int fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX9 fd_set;
typedef long int fd_mask;
typedef long int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned long int fsblkcnt64_t;
typedef unsigned long int fsfilcnt64_t;
struct anonymous_typeX11
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ10
{
unsigned long long int __value64;
struct anonymous_typeX11 __value32;
};
typedef union anonymous_typeZ10 __atomic_wide_counter;
struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev;
    struct __pthread_internal_list* __next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short short __spins;
    short short __elision;
    struct __pthread_internal_list __list;
};
struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    char __rwelision;
    unsigned char __pad1[7];
    unsigned long int __pad2;
    unsigned int __flags;
};
struct __pthread_cond_s
{
    union anonymous_typeZ10 __wseq;
    union anonymous_typeZ10 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
struct anonymous_typeX12
{
    int __data;
};
typedef struct anonymous_typeX12 __once_flag;
typedef unsigned long int pthread_t;
union anonymous_typeZ13
{
char __size[4];
int __align;
};
typedef union anonymous_typeZ13 pthread_mutexattr_t;
union anonymous_typeZ14
{
char __size[4];
int __align;
};
typedef union anonymous_typeZ14 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
char __size[56];
long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[40];
long int __align;
};
typedef union anonymous_typeZ15 pthread_mutex_t;
union anonymous_typeZ16
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};
typedef union anonymous_typeZ16 pthread_cond_t;
union anonymous_typeZ17
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long int __align;
};
typedef union anonymous_typeZ17 pthread_rwlock_t;
union anonymous_typeZ18
{
char __size[8];
long int __align;
};
typedef union anonymous_typeZ18 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union anonymous_typeZ19
{
char __size[32];
long int __align;
};
typedef union anonymous_typeZ19 pthread_barrier_t;
union anonymous_typeZ20
{
char __size[4];
int __align;
};
typedef union anonymous_typeZ20 pthread_barrierattr_t;
struct random_data
{
    int* fptr;
    int* rptr;
    int* state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr;
};
struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
typedef int (*comparison_fn_t)(const void*,const void*);
typedef int (*__compar_d_fn_t)(const void*,const void*,void*);
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
typedef long int intptr_t;
typedef unsigned int socklen_t;
extern char** __environ;
extern char** environ;
enum { _PC_LINK_MAX
,_PC_MAX_CANON
,_PC_MAX_INPUT
,_PC_NAME_MAX
,_PC_PATH_MAX
,_PC_PIPE_BUF
,_PC_CHOWN_RESTRICTED
,_PC_NO_TRUNC
,_PC_VDISABLE
,_PC_SYNC_IO
,_PC_ASYNC_IO
,_PC_PRIO_IO
,_PC_SOCK_MAXBUF
,_PC_FILESIZEBITS
,_PC_REC_INCR_XFER_SIZE
,_PC_REC_MAX_XFER_SIZE
,_PC_REC_MIN_XFER_SIZE
,_PC_REC_XFER_ALIGN
,_PC_ALLOC_SIZE_MIN
,_PC_SYMLINK_MAX
,_PC_2_SYMLINKS
};
enum { _SC_ARG_MAX
,_SC_CHILD_MAX
,_SC_CLK_TCK
,_SC_NGROUPS_MAX
,_SC_OPEN_MAX
,_SC_STREAM_MAX
,_SC_TZNAME_MAX
,_SC_JOB_CONTROL
,_SC_SAVED_IDS
,_SC_REALTIME_SIGNALS
,_SC_PRIORITY_SCHEDULING
,_SC_TIMERS
,_SC_ASYNCHRONOUS_IO
,_SC_PRIORITIZED_IO
,_SC_SYNCHRONIZED_IO
,_SC_FSYNC
,_SC_MAPPED_FILES
,_SC_MEMLOCK
,_SC_MEMLOCK_RANGE
,_SC_MEMORY_PROTECTION
,_SC_MESSAGE_PASSING
,_SC_SEMAPHORES
,_SC_SHARED_MEMORY_OBJECTS
,_SC_AIO_LISTIO_MAX
,_SC_AIO_MAX
,_SC_AIO_PRIO_DELTA_MAX
,_SC_DELAYTIMER_MAX
,_SC_MQ_OPEN_MAX
,_SC_MQ_PRIO_MAX
,_SC_VERSION
,_SC_PAGESIZE
,_SC_RTSIG_MAX
,_SC_SEM_NSEMS_MAX
,_SC_SEM_VALUE_MAX
,_SC_SIGQUEUE_MAX
,_SC_TIMER_MAX
,_SC_BC_BASE_MAX
,_SC_BC_DIM_MAX
,_SC_BC_SCALE_MAX
,_SC_BC_STRING_MAX
,_SC_COLL_WEIGHTS_MAX
,_SC_EQUIV_CLASS_MAX
,_SC_EXPR_NEST_MAX
,_SC_LINE_MAX
,_SC_RE_DUP_MAX
,_SC_CHARCLASS_NAME_MAX
,_SC_2_VERSION
,_SC_2_C_BIND
,_SC_2_C_DEV
,_SC_2_FORT_DEV
,_SC_2_FORT_RUN
,_SC_2_SW_DEV
,_SC_2_LOCALEDEF
,_SC_PII
,_SC_PII_XTI
,_SC_PII_SOCKET
,_SC_PII_INTERNET
,_SC_PII_OSI
,_SC_POLL
,_SC_SELECT
,_SC_UIO_MAXIOV
,_SC_IOV_MAX=60,
_SC_PII_INTERNET_STREAM
,_SC_PII_INTERNET_DGRAM
,_SC_PII_OSI_COTS
,_SC_PII_OSI_CLTS
,_SC_PII_OSI_M
,_SC_T_IOV_MAX
,_SC_THREADS
,_SC_THREAD_SAFE_FUNCTIONS
,_SC_GETGR_R_SIZE_MAX
,_SC_GETPW_R_SIZE_MAX
,_SC_LOGIN_NAME_MAX
,_SC_TTY_NAME_MAX
,_SC_THREAD_DESTRUCTOR_ITERATIONS
,_SC_THREAD_KEYS_MAX
,_SC_THREAD_STACK_MIN
,_SC_THREAD_THREADS_MAX
,_SC_THREAD_ATTR_STACKADDR
,_SC_THREAD_ATTR_STACKSIZE
,_SC_THREAD_PRIORITY_SCHEDULING
,_SC_THREAD_PRIO_INHERIT
,_SC_THREAD_PRIO_PROTECT
,_SC_THREAD_PROCESS_SHARED
,_SC_NPROCESSORS_CONF
,_SC_NPROCESSORS_ONLN
,_SC_PHYS_PAGES
,_SC_AVPHYS_PAGES
,_SC_ATEXIT_MAX
,_SC_PASS_MAX
,_SC_XOPEN_VERSION
,_SC_XOPEN_XCU_VERSION
,_SC_XOPEN_UNIX
,_SC_XOPEN_CRYPT
,_SC_XOPEN_ENH_I18N
,_SC_XOPEN_SHM
,_SC_2_CHAR_TERM
,_SC_2_C_VERSION
,_SC_2_UPE
,_SC_XOPEN_XPG2
,_SC_XOPEN_XPG3
,_SC_XOPEN_XPG4
,_SC_CHAR_BIT
,_SC_CHAR_MAX
,_SC_CHAR_MIN
,_SC_INT_MAX
,_SC_INT_MIN
,_SC_LONG_BIT
,_SC_WORD_BIT
,_SC_MB_LEN_MAX
,_SC_NZERO
,_SC_SSIZE_MAX
,_SC_SCHAR_MAX
,_SC_SCHAR_MIN
,_SC_SHRT_MAX
,_SC_SHRT_MIN
,_SC_UCHAR_MAX
,_SC_UINT_MAX
,_SC_ULONG_MAX
,_SC_USHRT_MAX
,_SC_NL_ARGMAX
,_SC_NL_LANGMAX
,_SC_NL_MSGMAX
,_SC_NL_NMAX
,_SC_NL_SETMAX
,_SC_NL_TEXTMAX
,_SC_XBS5_ILP32_OFF32
,_SC_XBS5_ILP32_OFFBIG
,_SC_XBS5_LP64_OFF64
,_SC_XBS5_LPBIG_OFFBIG
,_SC_XOPEN_LEGACY
,_SC_XOPEN_REALTIME
,_SC_XOPEN_REALTIME_THREADS
,_SC_ADVISORY_INFO
,_SC_BARRIERS
,_SC_BASE
,_SC_C_LANG_SUPPORT
,_SC_C_LANG_SUPPORT_R
,_SC_CLOCK_SELECTION
,_SC_CPUTIME
,_SC_THREAD_CPUTIME
,_SC_DEVICE_IO
,_SC_DEVICE_SPECIFIC
,_SC_DEVICE_SPECIFIC_R
,_SC_FD_MGMT
,_SC_FIFO
,_SC_PIPE
,_SC_FILE_ATTRIBUTES
,_SC_FILE_LOCKING
,_SC_FILE_SYSTEM
,_SC_MONOTONIC_CLOCK
,_SC_MULTI_PROCESS
,_SC_SINGLE_PROCESS
,_SC_NETWORKING
,_SC_READER_WRITER_LOCKS
,_SC_SPIN_LOCKS
,_SC_REGEXP
,_SC_REGEX_VERSION
,_SC_SHELL
,_SC_SIGNALS
,_SC_SPAWN
,_SC_SPORADIC_SERVER
,_SC_THREAD_SPORADIC_SERVER
,_SC_SYSTEM_DATABASE
,_SC_SYSTEM_DATABASE_R
,_SC_TIMEOUTS
,_SC_TYPED_MEMORY_OBJECTS
,_SC_USER_GROUPS
,_SC_USER_GROUPS_R
,_SC_2_PBS
,_SC_2_PBS_ACCOUNTING
,_SC_2_PBS_LOCATE
,_SC_2_PBS_MESSAGE
,_SC_2_PBS_TRACK
,_SC_SYMLOOP_MAX
,_SC_STREAMS
,_SC_2_PBS_CHECKPOINT
,_SC_V6_ILP32_OFF32
,_SC_V6_ILP32_OFFBIG
,_SC_V6_LP64_OFF64
,_SC_V6_LPBIG_OFFBIG
,_SC_HOST_NAME_MAX
,_SC_TRACE
,_SC_TRACE_EVENT_FILTER
,_SC_TRACE_INHERIT
,_SC_TRACE_LOG
,_SC_LEVEL1_ICACHE_SIZE
,_SC_LEVEL1_ICACHE_ASSOC
,_SC_LEVEL1_ICACHE_LINESIZE
,_SC_LEVEL1_DCACHE_SIZE
,_SC_LEVEL1_DCACHE_ASSOC
,_SC_LEVEL1_DCACHE_LINESIZE
,_SC_LEVEL2_CACHE_SIZE
,_SC_LEVEL2_CACHE_ASSOC
,_SC_LEVEL2_CACHE_LINESIZE
,_SC_LEVEL3_CACHE_SIZE
,_SC_LEVEL3_CACHE_ASSOC
,_SC_LEVEL3_CACHE_LINESIZE
,_SC_LEVEL4_CACHE_SIZE
,_SC_LEVEL4_CACHE_ASSOC
,_SC_LEVEL4_CACHE_LINESIZE
,_SC_IPV6=185+50,
_SC_RAW_SOCKETS
,_SC_V7_ILP32_OFF32
,_SC_V7_ILP32_OFFBIG
,_SC_V7_LP64_OFF64
,_SC_V7_LPBIG_OFFBIG
,_SC_SS_REPL_MAX
,_SC_TRACE_EVENT_NAME_MAX
,_SC_TRACE_NAME_MAX
,_SC_TRACE_SYS_MAX
,_SC_TRACE_USER_EVENT_MAX
,_SC_XOPEN_STREAMS
,_SC_THREAD_ROBUST_PRIO_INHERIT
,_SC_THREAD_ROBUST_PRIO_PROTECT
,_SC_MINSIGSTKSZ
,_SC_SIGSTKSZ
};
enum { _CS_PATH
,_CS_V6_WIDTH_RESTRICTED_ENVS
,_CS_GNU_LIBC_VERSION
,_CS_GNU_LIBPTHREAD_VERSION
,_CS_V5_WIDTH_RESTRICTED_ENVS
,_CS_V7_WIDTH_RESTRICTED_ENVS
,_CS_LFS_CFLAGS=1000,
_CS_LFS_LDFLAGS
,_CS_LFS_LIBS
,_CS_LFS_LINTFLAGS
,_CS_LFS64_CFLAGS
,_CS_LFS64_LDFLAGS
,_CS_LFS64_LIBS
,_CS_LFS64_LINTFLAGS
,_CS_XBS5_ILP32_OFF32_CFLAGS=1100,
_CS_XBS5_ILP32_OFF32_LDFLAGS
,_CS_XBS5_ILP32_OFF32_LIBS
,_CS_XBS5_ILP32_OFF32_LINTFLAGS
,_CS_XBS5_ILP32_OFFBIG_CFLAGS
,_CS_XBS5_ILP32_OFFBIG_LDFLAGS
,_CS_XBS5_ILP32_OFFBIG_LIBS
,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS
,_CS_XBS5_LP64_OFF64_CFLAGS
,_CS_XBS5_LP64_OFF64_LDFLAGS
,_CS_XBS5_LP64_OFF64_LIBS
,_CS_XBS5_LP64_OFF64_LINTFLAGS
,_CS_XBS5_LPBIG_OFFBIG_CFLAGS
,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS
,_CS_XBS5_LPBIG_OFFBIG_LIBS
,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
,_CS_POSIX_V6_ILP32_OFF32_CFLAGS
,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS
,_CS_POSIX_V6_ILP32_OFF32_LIBS
,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_LIBS
,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
,_CS_POSIX_V6_LP64_OFF64_CFLAGS
,_CS_POSIX_V6_LP64_OFF64_LDFLAGS
,_CS_POSIX_V6_LP64_OFF64_LIBS
,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS
,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
,_CS_POSIX_V7_ILP32_OFF32_CFLAGS
,_CS_POSIX_V7_ILP32_OFF32_LDFLAGS
,_CS_POSIX_V7_ILP32_OFF32_LIBS
,_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_LIBS
,_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
,_CS_POSIX_V7_LP64_OFF64_CFLAGS
,_CS_POSIX_V7_LP64_OFF64_LDFLAGS
,_CS_POSIX_V7_LP64_OFF64_LIBS
,_CS_POSIX_V7_LP64_OFF64_LINTFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_LIBS
,_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
,_CS_V6_ENV
,_CS_V7_ENV
};
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
struct stat
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned long int st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    int __pad0;
    unsigned long int st_rdev;
    long int st_size;
    long int st_blksize;
    long int st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long int __glibc_reserved[3];
};
struct stat64
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned long int st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    int __pad0;
    unsigned long int st_rdev;
    long int st_size;
    long int st_blksize;
    long int st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long int __glibc_reserved[3];
};
typedef char __s8;
typedef unsigned char __u8;
typedef short short __s16;
typedef unsigned short int __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
struct anonymous_typeX21
{
    unsigned long int fds_bits[1024/(8*sizeof(long))];
};
typedef struct anonymous_typeX21 __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned short int __kernel_old_uid_t;
typedef unsigned short int __kernel_old_gid_t;
typedef unsigned long int __kernel_old_dev_t;
typedef long __kernel_long_t;
typedef unsigned long int __kernel_ulong_t;
typedef unsigned long int __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef long __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned long int __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
struct anonymous_typeX22
{
    int val[2];
};
typedef struct anonymous_typeX22 __kernel_fsid_t;
typedef long __kernel_off_t;
typedef long long __kernel_loff_t;
typedef long __kernel_old_time_t;
typedef long __kernel_time_t;
typedef long long __kernel_time64_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char* __kernel_caddr_t;
typedef unsigned short int __kernel_uid16_t;
typedef unsigned short int __kernel_gid16_t;
typedef unsigned short int __le16;
typedef unsigned short int __be16;
typedef unsigned int __le32;
typedef unsigned int __be32;
typedef unsigned long long __le64;
typedef unsigned long long __be64;
typedef unsigned short int __sum16;
typedef unsigned int __wsum;
typedef unsigned int __poll_t;
struct statx_timestamp
{
    long long tv_sec;
    unsigned int tv_nsec;
    int __reserved;
};
struct statx
{
    unsigned int stx_mask;
    unsigned int stx_blksize;
    unsigned long long stx_attributes;
    unsigned int stx_nlink;
    unsigned int stx_uid;
    unsigned int stx_gid;
    unsigned short int stx_mode;
    unsigned short int __spare0[1];
    unsigned long long stx_ino;
    unsigned long long stx_size;
    unsigned long long stx_blocks;
    unsigned long long stx_attributes_mask;
    struct statx_timestamp stx_atime;
    struct statx_timestamp stx_btime;
    struct statx_timestamp stx_ctime;
    struct statx_timestamp stx_mtime;
    unsigned int stx_rdev_major;
    unsigned int stx_rdev_minor;
    unsigned int stx_dev_major;
    unsigned int stx_dev_minor;
    unsigned long long stx_mnt_id;
    unsigned long long __spare2;
    unsigned long long __spare3[12];
};
extern char* program_invocation_name;
extern char* program_invocation_short_name;
typedef int error_t;
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
    struct sInfo* info_285;
    struct buffer** clang_option_268;
    struct buffer** cpp_option_269;
    struct list$1charph** files_270;
    struct list$1charph** object_files_271;
    _Bool* output_object_file_272;
    _Bool* output_cpp_file_273;
    _Bool* output_source_file_flag_274;
    char** output_file_name_275;
    _Bool* verbose_276;
    _Bool* come_debug_277;
    _Bool* come_malloc_278;
    _Bool* come_str_279;
    int* argc;
    char*** argv;
};

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

int remove(const char* __filename);

int rename(const char* __old, const char* __new);

int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);

int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);

int fclose(struct _IO_FILE* __stream);

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char anonymous_var_nameX1[20]);

char* tmpnam_r(char __s[20]);

char* tempnam(const char* __dir, const char* __pfx);

int fflush(struct _IO_FILE* __stream);

int fflush_unlocked(struct _IO_FILE* __stream);

int fcloseall();

struct _IO_FILE* fopen(const char* __filename, const char* __modes);

struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fopen64(const char* __filename, const char* __modes);

struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fdopen(int __fd, const char* __modes);

struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs);

struct _IO_FILE* fmemopen(void* __s, long int __len, const char* __modes);

struct _IO_FILE* open_memstream(char** __bufloc, long int* __sizeloc);

void setbuf(struct _IO_FILE* __stream, char* __buf);

int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, long int __n);

void setbuffer(struct _IO_FILE* __stream, char* __buf, long int __size);

void setlinebuf(struct _IO_FILE* __stream);

int fprintf(struct _IO_FILE* __stream, const char* __format, ...);

int printf(const char* __format, ...);

int sprintf(char* __s, const char* __format, ...);

int vfprintf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vprintf(const char* __format, va_list __arg);

int vsprintf(char* __s, const char* __format, va_list __arg);

int snprintf(char* __s, long int __maxlen, const char* __format, ...);

int vsnprintf(char* __s, long int __maxlen, const char* __format, va_list __arg);

int vasprintf(char** __ptr, const char* __f, va_list __arg);

int __asprintf(char** __ptr, const char* __fmt, ...);

int asprintf(char** __ptr, const char* __fmt, ...);

int vdprintf(int __fd, const char* __fmt, va_list __arg);

int dprintf(int __fd, const char* __fmt, ...);

int fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int scanf(const char* __format, ...);

int sscanf(const char* __s, const char* __format, ...);

int __isoc99_fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int __isoc99_scanf(const char* __format, ...);

int __isoc99_sscanf(const char* __s, const char* __format, ...);

int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vscanf(const char* __format, va_list __arg);

int vsscanf(const char* __s, const char* __format, va_list __arg);

int __isoc99_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int __isoc99_vscanf(const char* __format, va_list __arg);

int __isoc99_vsscanf(const char* __s, const char* __format, va_list __arg);

int fgetc(struct _IO_FILE* __stream);

int getc(struct _IO_FILE* __stream);

int getchar();

int getc_unlocked(struct _IO_FILE* __stream);

int getchar_unlocked();

int fgetc_unlocked(struct _IO_FILE* __stream);

int fputc(int __c, struct _IO_FILE* __stream);

int putc(int __c, struct _IO_FILE* __stream);

int putchar(int __c);

int fputc_unlocked(int __c, struct _IO_FILE* __stream);

int putc_unlocked(int __c, struct _IO_FILE* __stream);

int putchar_unlocked(int __c);

int getw(struct _IO_FILE* __stream);

int putw(int __w, struct _IO_FILE* __stream);

char* fgets(char* __s, int __n, struct _IO_FILE* __stream);

char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);

long int __getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getline(char** __lineptr, long int* __n, struct _IO_FILE* __stream);

int fputs(const char* __s, struct _IO_FILE* __stream);

int puts(const char* __s);

int ungetc(int __c, struct _IO_FILE* __stream);

long int fread(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __s);

int fputs_unlocked(const char* __s, struct _IO_FILE* __stream);

long int fread_unlocked(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite_unlocked(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

int fseek(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftell(struct _IO_FILE* __stream);

void rewind(struct _IO_FILE* __stream);

int fseeko(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello(struct _IO_FILE* __stream);

int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);

int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);

int fseeko64(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello64(struct _IO_FILE* __stream);

int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);

int fsetpos64(struct _IO_FILE* __stream, const struct _G_fpos64_t* __pos);

void clearerr(struct _IO_FILE* __stream);

int feof(struct _IO_FILE* __stream);

int ferror(struct _IO_FILE* __stream);

void clearerr_unlocked(struct _IO_FILE* __stream);

int feof_unlocked(struct _IO_FILE* __stream);

int ferror_unlocked(struct _IO_FILE* __stream);

void perror(const char* __s);

int fileno(struct _IO_FILE* __stream);

int fileno_unlocked(struct _IO_FILE* __stream);

int pclose(struct _IO_FILE* __stream);

struct _IO_FILE* popen(const char* __command, const char* __modes);

char* ctermid(char* __s);

char* cuserid(char* __s);

int obstack_printf(struct obstack* __obstack, const char* __format, ...);

int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);

void flockfile(struct _IO_FILE* __stream);

int ftrylockfile(struct _IO_FILE* __stream);

void funlockfile(struct _IO_FILE* __stream);

int __uflow(struct _IO_FILE* anonymous_var_nameX2);

int __overflow(struct _IO_FILE* anonymous_var_nameX3, int anonymous_var_nameX4);

long int __ctype_get_mb_cur_max();

double atof(const char* __nptr);

int atoi(const char* __nptr);

long int atol(const char* __nptr);

long long int atoll(const char* __nptr);

double strtod(const char* __nptr, char** __endptr);

float strtof(const char* __nptr, char** __endptr);

long double strtold(const char* __nptr, char** __endptr);

float strtof32(const char* __nptr, char** __endptr);

double strtof64(const char* __nptr, char** __endptr);

double strtof32x(const char* __nptr, char** __endptr);

long double strtof64x(const char* __nptr, char** __endptr);

long int strtol(const char* __nptr, char** __endptr, int __base);

unsigned long int strtoul(const char* __nptr, char** __endptr, int __base);

long long int strtoq(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);

long long int strtoll(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);

int strfromd(char* __dest, long int __size, const char* __format, double __f);

int strfromf(char* __dest, long int __size, const char* __format, float __f);

int strfroml(char* __dest, long int __size, const char* __format, long double __f);

int strfromf32(char* __dest, long int __size, const char* __format, float __f);

int strfromf64(char* __dest, long int __size, const char* __format, double __f);

int strfromf32x(char* __dest, long int __size, const char* __format, double __f);

int strfromf64x(char* __dest, long int __size, const char* __format, long double __f);

long int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

char* l64a(long int __n);

long int a64l(const char* __s);

int select(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, struct timeval* __timeout);

int pselect(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX8* __sigmask);

long int random();

void srandom(unsigned int __seed);

char* initstate(unsigned int __seed, char* __statebuf, long int __statelen);

char* setstate(char* __statebuf);

int random_r(struct random_data* __buf, int* __result);

int srandom_r(unsigned int __seed, struct random_data* __buf);

int initstate_r(unsigned int __seed, char* __statebuf, long int __statelen, struct random_data* __buf);

int setstate_r(char* __statebuf, struct random_data* __buf);

int rand();

void srand(unsigned int __seed);

int rand_r(unsigned int* __seed);

double drand48();

double erand48(unsigned short int __xsubi[3]);

long int lrand48();

long int nrand48(unsigned short int __xsubi[3]);

long int mrand48();

long int jrand48(unsigned short int __xsubi[3]);

void srand48(long int __seedval);

unsigned short int* seed48(unsigned short int __seed16v[3]);

void lcong48(unsigned short int __param[7]);

int drand48_r(struct drand48_data* __buffer, double* __result);

int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, double* __result);

int lrand48_r(struct drand48_data* __buffer, long int* __result);

int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int mrand48_r(struct drand48_data* __buffer, long int* __result);

int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int srand48_r(long int __seedval, struct drand48_data* __buffer);

int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer);

int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer);

void* malloc(long int __size);

void* calloc(long int __nmemb, long int __size);

void* realloc(void* __ptr, long int __size);

void free(void* __ptr);

void* reallocarray(void* __ptr, long int __nmemb, long int __size);

void* alloca(long int __size);

void* valloc(long int __size);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

void* aligned_alloc(long int __alignment, long int __size);

void abort();

int atexit(void (*__func)());

int at_quick_exit(void (*__func)());

int on_exit(void (*__func)(int,void*), void* __arg);

void exit(int __status);

void quick_exit(int __status);

void _Exit(int __status);

char* getenv(const char* __name);

char* secure_getenv(const char* __name);

int putenv(char* __string);

int setenv(const char* __name, const char* __value, int __replace);

int unsetenv(const char* __name);

int clearenv();

char* mktemp(char* __template);

int mkstemp(char* __template);

int mkstemp64(char* __template);

int mkstemps(char* __template, int __suffixlen);

int mkstemps64(char* __template, int __suffixlen);

char* mkdtemp(char* __template);

int mkostemp(char* __template, int __flags);

int mkostemp64(char* __template, int __flags);

int mkostemps(char* __template, int __suffixlen, int __flags);

int mkostemps64(char* __template, int __suffixlen, int __flags);

int system(const char* __command);

char* canonicalize_file_name(const char* __name);

char* realpath(const char* __name, char* __resolved);

void* bsearch(const void* __key, const void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort_r(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*,void*), void* __arg);

int abs(int __x);

long int labs(long int __x);

long long int llabs(long long int __x);

struct anonymous_typeX5 div(int __numer, int __denom);

struct anonymous_typeX6 ldiv(long int __numer, long int __denom);

struct anonymous_typeX7 lldiv(long long int __numer, long long int __denom);

char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* gcvt(double __value, int __ndigit, char* __buf);

char* qecvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qfcvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qgcvt(long double __value, int __ndigit, char* __buf);

int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qecvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qfcvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int mblen(const char* __s, long int __n);

int mbtowc(int* __pwc, const char* __s, long int __n);

int wctomb(char* __s, int __wchar);

long int mbstowcs(int* __pwcs, const char* __s, long int __n);

long int wcstombs(char* __s, const int* __pwcs, long int __n);

int rpmatch(const char* __response);

int getsubopt(char** __optionp, char** __tokens, char** __valuep);

int posix_openpt(int __oflag);

int grantpt(int __fd);

int unlockpt(int __fd);

char* ptsname(int __fd);

int ptsname_r(int __fd, char* __buf, long int __buflen);

int getpt();

int getloadavg(double* __loadavg, int __nelem);

void* memcpy(void* __dest, const void* __src, long int __n);

void* memmove(void* __dest, const void* __src, long int __n);

void* memccpy(void* __dest, const void* __src, int __c, long int __n);

void* memset(void* __s, int __c, long int __n);

int memcmp(const void* __s1, const void* __s2, long int __n);

int __memcmpeq(const void* __s1, const void* __s2, long int __n);

void* memchr(const void* __s, int __c, long int __n);

void* rawmemchr(const void* __s, int __c);

void* memrchr(const void* __s, int __c, long int __n);

char* strcpy(char* __dest, const char* __src);

char* strncpy(char* __dest, const char* __src, long int __n);

char* strcat(char* __dest, const char* __src);

char* strncat(char* __dest, const char* __src, long int __n);

int strcmp(const char* __s1, const char* __s2);

int strncmp(const char* __s1, const char* __s2, long int __n);

int strcoll(const char* __s1, const char* __s2);

long int strxfrm(char* __dest, const char* __src, long int __n);

int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l);

long int strxfrm_l(char* __dest, const char* __src, long int __n, struct __locale_struct* __l);

char* strdup(const char* __s);

char* strndup(const char* __string, long int __n);

char* strchr(const char* __s, int __c);

char* strrchr(const char* __s, int __c);

char* strchrnul(const char* __s, int __c);

long int strcspn(const char* __s, const char* __reject);

long int strspn(const char* __s, const char* __accept);

char* strpbrk(const char* __s, const char* __accept);

char* strstr(const char* __haystack, const char* __needle);

char* strtok(char* __s, const char* __delim);

char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strcasestr(const char* __haystack, const char* __needle);

void* memmem(const void* __haystack, long int __haystacklen, const void* __needle, long int __needlelen);

void* __mempcpy(void* __dest, const void* __src, long int __n);

void* mempcpy(void* __dest, const void* __src, long int __n);

long int strlen(const char* __s);

long int strnlen(const char* __string, long int __maxlen);

char* strerror(int __errnum);

char* strerror_r(int __errnum, char* __buf, long int __buflen);

const char* strerrordesc_np(int __err);

const char* strerrorname_np(int __err);

char* strerror_l(int __errnum, struct __locale_struct* __l);

int bcmp(const void* __s1, const void* __s2, long int __n);

void bcopy(const void* __src, void* __dest, long int __n);

void bzero(void* __s, long int __n);

char* index(const char* __s, int __c);

char* rindex(const char* __s, int __c);

int ffs(int __i);

int ffsl(long int __l);

int ffsll(long long int __ll);

int strcasecmp(const char* __s1, const char* __s2);

int strncasecmp(const char* __s1, const char* __s2, long int __n);

int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc);

int strncasecmp_l(const char* __s1, const char* __s2, long int __n, struct __locale_struct* __loc);

void explicit_bzero(void* __s, long int __n);

char* strsep(char** __stringp, const char* __delim);

char* strsignal(int __sig);

const char* sigabbrev_np(int __sig);

const char* sigdescr_np(int __sig);

char* __stpcpy(char* __dest, const char* __src);

char* stpcpy(char* __dest, const char* __src);

char* __stpncpy(char* __dest, const char* __src, long int __n);

char* stpncpy(char* __dest, const char* __src, long int __n);

int strverscmp(const char* __s1, const char* __s2);

char* strfry(char* __string);

void* memfrob(void* __s, long int __n);

char* basename(const char* __filename);

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

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_free_object(void* mem);

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

struct buffer* buffer_append(struct buffer* self, char* mem, long int size);

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

long int size_t_clone(long self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswascii(int c);

_Bool xiswalpha(int c);

_Bool xiswblank(int c);

_Bool xiswdigit(int c);

_Bool xiswalnum(int c);

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

char* size_t_to_string(long int self);

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

int access(const char* __name, int __type);

int euidaccess(const char* __name, int __type);

int eaccess(const char* __name, int __type);

int execveat(int __fd, const char* __path, char** __argv, char** __envp, int __flags);

int faccessat(int __fd, const char* __file, int __type, int __flag);

long int lseek(int __fd, long int __offset, int __whence);

long int lseek64(int __fd, long int __offset, int __whence);

int close(int __fd);

void closefrom(int __lowfd);

long int read(int __fd, void* __buf, long int __nbytes);

long int write(int __fd, const void* __buf, long int __n);

long int pread(int __fd, void* __buf, long int __nbytes, long int __offset);

long int pwrite(int __fd, const void* __buf, long int __n, long int __offset);

long int pread64(int __fd, void* __buf, long int __nbytes, long int __offset);

long int pwrite64(int __fd, const void* __buf, long int __n, long int __offset);

int pipe(int __pipedes[2]);

int pipe2(int __pipedes[2], int __flags);

unsigned int alarm(unsigned int __seconds);

unsigned int sleep(unsigned int __seconds);

unsigned int ualarm(unsigned int __value, unsigned int __interval);

int usleep(unsigned int __useconds);

int pause();

int chown(const char* __file, unsigned int __owner, unsigned int __group);

int fchown(int __fd, unsigned int __owner, unsigned int __group);

int lchown(const char* __file, unsigned int __owner, unsigned int __group);

int fchownat(int __fd, const char* __file, unsigned int __owner, unsigned int __group, int __flag);

int chdir(const char* __path);

int fchdir(int __fd);

char* getcwd(char* __buf, long int __size);

char* get_current_dir_name();

char* getwd(char* __buf);

int dup(int __fd);

int dup2(int __fd, int __fd2);

int dup3(int __fd, int __fd2, int __flags);

int execve(const char* __path, char** __argv, char** __envp);

int fexecve(int __fd, char** __argv, char** __envp);

int execv(const char* __path, char** __argv);

int execle(const char* __path, const char* __arg, ...);

int execl(const char* __path, const char* __arg, ...);

int execvp(const char* __file, char** __argv);

int execlp(const char* __file, const char* __arg, ...);

int execvpe(const char* __file, char** __argv, char** __envp);

int nice(int __inc);

void _exit(int __status);

long int pathconf(const char* __path, int __name);

long int fpathconf(int __fd, int __name);

long int sysconf(int __name);

long int confstr(int __name, char* __buf, long int __len);

int getpid();

int getppid();

int getpgrp();

int __getpgid(int __pid);

int getpgid(int __pid);

int setpgid(int __pid, int __pgid);

int setpgrp();

int setsid();

int getsid(int __pid);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int __size, unsigned int* __list);

int group_member(unsigned int __gid);

int setuid(unsigned int __uid);

int setreuid(unsigned int __ruid, unsigned int __euid);

int seteuid(unsigned int __uid);

int setgid(unsigned int __gid);

int setregid(unsigned int __rgid, unsigned int __egid);

int setegid(unsigned int __gid);

int getresuid(unsigned int* __ruid, unsigned int* __euid, unsigned int* __suid);

int getresgid(unsigned int* __rgid, unsigned int* __egid, unsigned int* __sgid);

int setresuid(unsigned int __ruid, unsigned int __euid, unsigned int __suid);

int setresgid(unsigned int __rgid, unsigned int __egid, unsigned int __sgid);

int fork();

int vfork();

int _Fork();

char* ttyname(int __fd);

int ttyname_r(int __fd, char* __buf, long int __buflen);

int isatty(int __fd);

int ttyslot();

int link(const char* __from, const char* __to);

int linkat(int __fromfd, const char* __from, int __tofd, const char* __to, int __flags);

int symlink(const char* __from, const char* __to);

long int readlink(const char* __path, char* __buf, long int __len);

int symlinkat(const char* __from, int __tofd, const char* __to);

long int readlinkat(int __fd, const char* __path, char* __buf, long int __len);

int unlink(const char* __name);

int unlinkat(int __fd, const char* __name, int __flag);

int rmdir(const char* __path);

int tcgetpgrp(int __fd);

int tcsetpgrp(int __fd, int __pgrp_id);

char* getlogin();

int getlogin_r(char* __name, long int __name_len);

int setlogin(const char* __name);

int getopt(int ___argc, char** ___argv, const char* __shortopts);

int gethostname(char* __name, long int __len);

int sethostname(const char* __name, long int __len);

int sethostid(long int __id);

int getdomainname(char* __name, long int __len);

int setdomainname(const char* __name, long int __len);

int vhangup();

int revoke(const char* __file);

int profil(unsigned short int* __sample_buffer, long int __size, long int __offset, unsigned int __scale);

int acct(const char* __name);

char* getusershell();

void endusershell();

void setusershell();

int daemon(int __nochdir, int __noclose);

int chroot(const char* __path);

char* getpass(const char* __prompt);

int fsync(int __fd);

int syncfs(int __fd);

long int gethostid();

void sync();

int getpagesize();

int getdtablesize();

int truncate(const char* __file, long int __length);

int truncate64(const char* __file, long int __length);

int ftruncate(int __fd, long int __length);

int ftruncate64(int __fd, long int __length);

int brk(void* __addr);

void* sbrk(long int __delta);

long int syscall(long int __sysno, ...);

int lockf(int __fd, int __cmd, long int __len);

int lockf64(int __fd, int __cmd, long int __len);

long int copy_file_range(int __infd, long int* __pinoff, int __outfd, long int* __poutoff, long int __length, unsigned int __flags);

int fdatasync(int __fildes);

char* crypt(const char* __key, const char* __salt);

void swab(const void* __from, void* __to, long int __n);

int getentropy(void* __buffer, long int __length);

int close_range(unsigned int __fd, unsigned int __max_fd, int __flags);

int gettid();

int stat(const char* __file, struct stat* __buf);

int fstat(int __fd, struct stat* __buf);

int stat64(const char* __file, struct stat64* __buf);

int fstat64(int __fd, struct stat64* __buf);

int fstatat(int __fd, const char* __file, struct stat* __buf, int __flag);

int fstatat64(int __fd, const char* __file, struct stat64* __buf, int __flag);

int lstat(const char* __file, struct stat* __buf);

int lstat64(const char* __file, struct stat64* __buf);

int chmod(const char* __file, unsigned int __mode);

int lchmod(const char* __file, unsigned int __mode);

int fchmod(int __fd, unsigned int __mode);

int fchmodat(int __fd, const char* __file, unsigned int __mode, int __flag);

unsigned int umask(unsigned int __mask);

unsigned int getumask();

int mkdir(const char* __path, unsigned int __mode);

int mkdirat(int __fd, const char* __path, unsigned int __mode);

int mknod(const char* __path, unsigned int __mode, unsigned long int __dev);

int mknodat(int __fd, const char* __path, unsigned int __mode, unsigned long int __dev);

int mkfifo(const char* __path, unsigned int __mode);

int mkfifoat(int __fd, const char* __path, unsigned int __mode);

int utimensat(int __fd, const char* __path, const struct timespec __times[2], int __flags);

int futimens(int __fd, const struct timespec __times[2]);

int statx(int __dirfd, const char* __path, int __flags, unsigned int __mask, struct statx* __buf);

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
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
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
static inline unsigned short int __bswap_16(unsigned short int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    return __result1__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result2__;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result3__;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result4__ = __x;
    return __result4__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result5__ = __x;
    return __result5__;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result6__ = __x;
    return __result6__;
}
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    (come_push_stackframe("./comelang2.h", 108),perror(msg),come_pop_stackframe());
    (come_push_stackframe("./comelang2.h", 109),stackframe(),come_pop_stackframe());
    (come_push_stackframe("./comelang2.h", 110),exit(4),come_pop_stackframe());
    __result7__ = (_Bool)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1999, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2001))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2001))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2002))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2002))->memory, "./comelang2.h", 2002))->buf;
    __result8__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result8__;
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
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value3, 0, sizeof(void*));
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2009, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2011))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2011))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2012))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2012))->memory, "./comelang2.h", 2012))->buf;
    __result9__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result9__;
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
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
memset(&right_value5, 0, sizeof(void*));
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2019, "struct smart_pointer$1short"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2021))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2021))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2022))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2022))->memory, "./comelang2.h", 2022))->buf;
    __result10__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result10__;
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
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
memset(&right_value7, 0, sizeof(void*));
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2029, "struct smart_pointer$1int"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2031))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2031))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2032))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2032))->memory, "./comelang2.h", 2032))->buf;
    __result11__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result11__;
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
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
memset(&right_value9, 0, sizeof(void*));
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2039, "struct smart_pointer$1long"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2041))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2041))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2042))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2042))->memory, "./comelang2.h", 2042))->buf;
    __result12__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result12__;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory!=((void*)0),        _if_conditional1) {
            if(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory!=((void*)0),        _if_conditional2) {
            if(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory!=((void*)0),        _if_conditional3) {
            if(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory!=((void*)0),        _if_conditional4) {
            if(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
        if(_if_conditional6=((struct sInfo*)come_null_check(info, "02transpile.c", 29))->writing_source_file_position,        _if_conditional6) {
            (come_push_stackframe("02transpile.c", 30),add_come_code(info,((char*)(right_value12=xsprintf("# \%s \"\%s\"\n",((char*)(right_value10=int_to_string(((struct sInfo*)come_null_check(info, "02transpile.c", 30))->sline))),((char*)(right_value11=string_to_string(((struct sInfo*)come_null_check(info, "02transpile.c", 30))->sname))))))),come_pop_stackframe());
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
            ((struct sInfo*)come_null_check(info, "02transpile.c", 31))->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
char* __exception_result_var_b1;
char* sname_5;
int sline_6;
void* right_value14;
void* right_value15;
char* __exception_result_var_b2;
char* __dec_obj6;
_Bool result_7;
void* right_value16;
char* __exception_result_var_b3;
char* __dec_obj7;
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&sname_5, 0, sizeof(char*));
memset(&sline_6, 0, sizeof(int));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&result_7, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
    sname_5=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 38),__exception_result_var_b1=((char*)(right_value13=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 38))->sname))), come_pop_stackframe(), __exception_result_var_b1));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = 0;
    sline_6=((struct sInfo*)come_null_check(info, "02transpile.c", 39))->sline;
    __dec_obj6=((struct sInfo*)come_null_check(info, "02transpile.c", 41))->sname;
    ((struct sInfo*)come_null_check(info, "02transpile.c", 41))->sname=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 41),__exception_result_var_b2=((char*)(right_value15=__builtin_string(((char*)(right_value14=((struct sNode*)come_null_check(node, "02transpile.c", 41))->sname(((struct sNode*)come_null_check(node, "02transpile.c", 41))->_protocol_obj)))))), come_pop_stackframe(), __exception_result_var_b2));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value15;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "02transpile.c", 42))->sline=((struct sNode*)come_null_check(node, "02transpile.c", 42))->sline(((struct sNode*)come_null_check(node, "02transpile.c", 42))->_protocol_obj);
    (come_push_stackframe("02transpile.c", 44),write_source_file_position_to_source(info),come_pop_stackframe());
    result_7=((struct sNode*)come_null_check(node, "02transpile.c", 46))->compile(((struct sNode*)come_null_check(node, "02transpile.c", 46))->_protocol_obj,info);
    __dec_obj7=((struct sInfo*)come_null_check(info, "02transpile.c", 48))->sname;
    ((struct sInfo*)come_null_check(info, "02transpile.c", 48))->sname=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 48),__exception_result_var_b3=((char*)(right_value16=__builtin_string(sname_5))), come_pop_stackframe(), __exception_result_var_b3));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value16;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "02transpile.c", 49))->sline=sline_6;
    __result13__ = result_7;
    if(sname_5 && !__freed_obj__) { sname_5 = come_decrement_ref_count(sname_5, (void*)0, (void*)0, 0, 0, 0); }
    return __result13__;
    if(sname_5 && !__freed_obj__) { sname_5 = come_decrement_ref_count(sname_5, (void*)0, (void*)0, 0, 0, 0); }
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
char* msg2_8;
va_list args_9;
int __exception_result_var_b4;
int __exception_result_var_b5;
_Bool _if_conditional8;
int n_10;
void* right_value17;
char* __exception_result_var_b6;
void* right_value18;
struct list$1charph* __exception_result_var_b7;
void* right_value24;
struct list$1charph* __exception_result_var_b10;
struct __current_stack1__ __current_stack1__;
void* right_value31;
struct list$1voidp* __exception_result_var_b14;
void* right_value35;
char* __exception_result_var_b27;
void* right_value36;
struct optional$2charphbool* __exception_result_var_b28;
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
    if(_if_conditional7=!((struct sInfo*)come_null_check(info, "02transpile.c", 56))->no_output_err,    _if_conditional7) {
        (come_push_stackframe("02transpile.c", 60),__builtin_va_start(args_9,msg),come_pop_stackframe());
        (come_push_stackframe("02transpile.c", 61),__exception_result_var_b4=vasprintf(&msg2_8,msg,args_9), come_pop_stackframe(), __exception_result_var_b4);
        (come_push_stackframe("02transpile.c", 62),__builtin_va_end(args_9),come_pop_stackframe());
        (come_push_stackframe("02transpile.c", 64),__exception_result_var_b5=printf("%s %d: %s\n",((struct sInfo*)come_null_check(info, "02transpile.c", 64))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 64))->sline,msg2_8), come_pop_stackframe(), __exception_result_var_b5);
        ((struct sInfo*)come_null_check(info, "02transpile.c", 65))->err_num++;
        (come_push_stackframe("02transpile.c", 66),stackframe(),come_pop_stackframe());
        if(_if_conditional8=((struct sInfo*)come_null_check(info, "02transpile.c", 68))->come_fun,        _if_conditional8) {
            n_10=((struct sInfo*)come_null_check(info, "02transpile.c", 69))->sline-5;
            __current_stack1__.n_10 = &n_10;
            __current_stack1__.msg2_8 = &msg2_8;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            optional$2charphbool_value((come_push_stackframe("02transpile.c", 70),__exception_result_var_b28=((struct optional$2charphbool*)(right_value36=string_puts(((char*)come_null_check((come_push_stackframe("02transpile.c", 70),__exception_result_var_b27=((char*)(right_value35=list$1voidp_join(((struct list$1voidp*)come_null_check((come_push_stackframe("02transpile.c", 70),__exception_result_var_b14=((struct list$1voidp*)(right_value31=list$1charph_map(((struct list$1charph*)come_null_check((come_push_stackframe("02transpile.c", 70),__exception_result_var_b10=((struct list$1charph*)(right_value24=list$1charph_sublist(((struct list$1charph*)come_null_check((come_push_stackframe("02transpile.c", 70),__exception_result_var_b7=((struct list$1charph*)(right_value18=string_split_char(((char*)come_null_check((come_push_stackframe("02transpile.c", 70),__exception_result_var_b6=((char*)(right_value17=buffer_to_string(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 70))->original_source, "02transpile.c", 70))))), come_pop_stackframe(), __exception_result_var_b6), "02transpile.c", 70)),10))), come_pop_stackframe(), __exception_result_var_b7), "02transpile.c", 70)),n_10,n_10+10))), come_pop_stackframe(), __exception_result_var_b10), "02transpile.c", 70)),&__current_stack1__,(void*)method_block1_02transpilec))), come_pop_stackframe(), __exception_result_var_b14), "02transpile.c", 70)),"\n"))), come_pop_stackframe(), __exception_result_var_b27), "02transpile.c", 70))))), come_pop_stackframe(), __exception_result_var_b28));
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
        (come_push_stackframe("02transpile.c", 73),free(msg2_8),come_pop_stackframe());
        if((&args_9) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_9), (void*)0, (void*)0, 1, 0, 0, 0); }
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value19;
void* right_value20;
struct list$1charph* __exception_result_var_b8;
struct list$1charph* result_13;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
struct list_item$1charph* it_14;
int i_15;
_Bool _while_condtional2;
_Bool _if_conditional14;
struct list$1charph* __exception_result_var_b9;
struct list$1charph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1charph*));
memset(&it_14, 0, sizeof(struct list_item$1charph*));
memset(&i_15, 0, sizeof(int));
                result_13=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 698),__exception_result_var_b8=((struct list$1charph*)(right_value20=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value19=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 698, "struct list$1charph"))), "./comelang2.h", 698)))))), come_pop_stackframe(), __exception_result_var_b8));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value19;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value20;
                __freed_obj__ = 0;
                if(_if_conditional10=begin<0,                _if_conditional10) {
                    begin+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 701))->len;
                }
                if(_if_conditional11=tail<0,                _if_conditional11) {
                    tail+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 705))->len+1;
                }
                if(_if_conditional12=begin<0,                _if_conditional12) {
                    begin=0;
                }
                if(_if_conditional13=tail>=((struct list$1charph*)come_null_check(self, "./comelang2.h", 712))->len,                _if_conditional13) {
                    tail=((struct list$1charph*)come_null_check(self, "./comelang2.h", 713))->len;
                }
                it_14=((struct list$1charph*)come_null_check(self, "./comelang2.h", 716))->head;
                i_15=0;
                while(_while_condtional2=it_14!=((void*)0),                _while_condtional2) {
                    if(_if_conditional14=i_15>=begin&&i_15<tail,                    _if_conditional14) {
                        (come_push_stackframe("./comelang2.h", 720),__exception_result_var_b9=list$1charph_push_back(((struct list$1charph*)come_null_check(result_13, "./comelang2.h", 720)),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_14, "./comelang2.h", 720))->item)), come_pop_stackframe(), __exception_result_var_b9);
                    }
                    it_14=((struct list_item$1charph*)come_null_check(it_14, "./comelang2.h", 722))->next;
                    i_15++;
                }
                __result16__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result16__;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 161))->len=0;
                    __result14__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result14__;
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
                        it_11=((struct list$1charph*)come_null_check(self, "./comelang2.h", 178))->head;
                        while(_while_condtional1=it_11!=((void*)0),                        _while_condtional1) {
                            prev_it_12=it_11;
                            it_11=((struct list_item$1charph*)come_null_check(it_11, "./comelang2.h", 181))->next;
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
                                if(_if_conditional9=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                                _if_conditional9) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
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
struct list$1charph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1charph*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1charph*));
memset(&right_value23, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional15=((struct list$1charph*)come_null_check(self, "./comelang2.h", 280))->len==0,                            _if_conditional15) {
                                litem_16=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value21=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 281, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value21;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_16, "./comelang2.h", 283))->prev=((void*)0);
                                ((struct list_item$1charph*)come_null_check(litem_16, "./comelang2.h", 284))->next=((void*)0);
                                __dec_obj8=((struct list_item$1charph*)come_null_check(litem_16, "./comelang2.h", 285))->item;
                                ((struct list_item$1charph*)come_null_check(litem_16, "./comelang2.h", 285))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 287))->tail=litem_16;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->head=litem_16;
                            }
                            else {
                                if(_if_conditional16=((struct list$1charph*)come_null_check(self, "./comelang2.h", 290))->len==1,                                _if_conditional16) {
                                    litem_17=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value22=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 291, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                                    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value22;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_17, "./comelang2.h", 293))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 293))->head;
                                    ((struct list_item$1charph*)come_null_check(litem_17, "./comelang2.h", 294))->next=((void*)0);
                                    __dec_obj9=((struct list_item$1charph*)come_null_check(litem_17, "./comelang2.h", 295))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_17, "./comelang2.h", 295))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 297))->tail=litem_17;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->head, "./comelang2.h", 298))->next=litem_17;
                                }
                                else {
                                    litem_18=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value23=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 301, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                                    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value23;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_18, "./comelang2.h", 303))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 303))->tail;
                                    ((struct list_item$1charph*)come_null_check(litem_18, "./comelang2.h", 304))->next=((void*)0);
                                    __dec_obj10=((struct list_item$1charph*)come_null_check(litem_18, "./comelang2.h", 305))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_18, "./comelang2.h", 305))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 307))->tail, "./comelang2.h", 307))->next=litem_18;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 308))->tail=litem_18;
                                }
                            }
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 311))->len++;
                            __result15__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result15__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value25;
void* right_value26;
struct list$1voidp* __exception_result_var_b11;
struct list$1voidp* result_21;
struct list_item$1charph* it_22;
_Bool _while_condtional4;
struct list$1voidp* __exception_result_var_b12;
_Bool _if_conditional19;
struct list$1voidp* __result19__;
struct list$1voidp* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct list$1voidp*));
memset(&it_22, 0, sizeof(struct list_item$1charph*));
                result_21=(struct list$1voidp*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 988),__exception_result_var_b11=((struct list$1voidp*)(right_value26=list$1voidp_initialize((struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)come_null_check(((struct list$1voidp*)(right_value25=(struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang2.h", 988, "struct list$1voidp"))), "./comelang2.h", 988)))))), come_pop_stackframe(), __exception_result_var_b11));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value25;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value26;
                __freed_obj__ = 0;
                it_22=((struct list$1charph*)come_null_check(self, "./comelang2.h", 990))->head;
                while(_while_condtional4=it_22!=((void*)0),                _while_condtional4) {
                    (come_push_stackframe("./comelang2.h", 992),__exception_result_var_b12=list$1voidp_push_back(((struct list$1voidp*)come_null_check(result_21, "./comelang2.h", 992)),block(parent,((struct list_item$1charph*)come_null_check(it_22, "./comelang2.h", 992))->item)), come_pop_stackframe(), __exception_result_var_b12);
                    if(_if_conditional19=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 994))->__method_block_result_kind__!=0,                    _if_conditional19) {
                        __result19__ = __result_obj__ = result_21;
                        if(result_21 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result19__;
                    }
                    it_22=((struct list_item$1charph*)come_null_check(it_22, "./comelang2.h", 998))->next;
                }
                __result20__ = __result_obj__ = result_21;
                if(result_21 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result20__;
                if(result_21 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1voidp* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 161))->len=0;
                    __result17__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result17__;
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
                        it_19=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 178))->head;
                        while(_while_condtional3=it_19!=((void*)0),                        _while_condtional3) {
                            prev_it_20=it_19;
                            it_19=((struct list_item$1voidp*)come_null_check(it_19, "./comelang2.h", 181))->next;
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
struct list$1voidp* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1voidp*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1voidp*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1voidp*));
                        if(_if_conditional17=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 280))->len==0,                        _if_conditional17) {
                            litem_23=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value27=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 281, "struct list_item$1voidp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value27;
                            __freed_obj__ = 0;
                            ((struct list_item$1voidp*)come_null_check(litem_23, "./comelang2.h", 283))->prev=((void*)0);
                            ((struct list_item$1voidp*)come_null_check(litem_23, "./comelang2.h", 284))->next=((void*)0);
                            ((struct list_item$1voidp*)come_null_check(litem_23, "./comelang2.h", 285))->item=item;
                            ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 287))->tail=litem_23;
                            ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 288))->head=litem_23;
                        }
                        else {
                            if(_if_conditional18=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 290))->len==1,                            _if_conditional18) {
                                litem_24=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value28=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 291, "struct list_item$1voidp"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value28;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_24, "./comelang2.h", 293))->prev=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 293))->head;
                                ((struct list_item$1voidp*)come_null_check(litem_24, "./comelang2.h", 294))->next=((void*)0);
                                ((struct list_item$1voidp*)come_null_check(litem_24, "./comelang2.h", 295))->item=item;
                                ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 297))->tail=litem_24;
                                ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 298))->head, "./comelang2.h", 298))->next=litem_24;
                            }
                            else {
                                litem_25=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value29=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 301, "struct list_item$1voidp"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value29;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_25, "./comelang2.h", 303))->prev=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 303))->tail;
                                ((struct list_item$1voidp*)come_null_check(litem_25, "./comelang2.h", 304))->next=((void*)0);
                                ((struct list_item$1voidp*)come_null_check(litem_25, "./comelang2.h", 305))->item=item;
                                ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 307))->tail, "./comelang2.h", 307))->next=litem_25;
                                ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 308))->tail=litem_25;
                            }
                        }
                        ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 311))->len++;
                        __result18__ = __result_obj__ = self;
                        return __result18__;
}

void* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value30;
char* __exception_result_var_b13;
void* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
                __result21__ = __result_obj__ = (come_push_stackframe("02transpile.c", 71),__exception_result_var_b13=((char*)(right_value30=xsprintf("%d %s",++(*(parent->n_10)),it))), come_pop_stackframe(), __exception_result_var_b13);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value30;
                __freed_obj__ = 0;
                return __result21__;
}

static char* list$1voidp_join(struct list$1voidp* self, char* sep){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value32;
void* right_value33;
struct buffer* __exception_result_var_b15;
struct buffer* buf_26;
int n_27;
void* __exception_result_var_b18;
void* it_30;
_Bool __exception_result_var_b19;
_Bool _for_condtionalA1;
void* __exception_result_var_b22;
struct buffer* __exception_result_var_b23;
int __exception_result_var_b24;
_Bool _if_conditional24;
struct buffer* __exception_result_var_b25;
void* right_value34;
char* __exception_result_var_b26;
char* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&buf_26, 0, sizeof(struct buffer*));
memset(&n_27, 0, sizeof(int));
memset(&it_30, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
                buf_26=(struct buffer*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 1091),__exception_result_var_b15=((struct buffer*)(right_value33=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1091, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b15));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value33;
                __freed_obj__ = 0;
                n_27=0;
                for(
                it_30=(come_push_stackframe("./comelang2.h", 1094),__exception_result_var_b18=list$1voidp_begin(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1094))), come_pop_stackframe(), __exception_result_var_b18) ,                0;                _for_condtionalA1=                !(come_push_stackframe("./comelang2.h", 1094),__exception_result_var_b19=list$1voidp_end(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1094))), come_pop_stackframe(), __exception_result_var_b19) ,                _for_condtionalA1;                it_30=(come_push_stackframe("./comelang2.h", 1094),__exception_result_var_b22=list$1voidp_next(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1094))), come_pop_stackframe(), __exception_result_var_b22) ,                0                ){
                    (come_push_stackframe("./comelang2.h", 1095),__exception_result_var_b23=buffer_append_str(((struct buffer*)come_null_check(buf_26, "./comelang2.h", 1095)),it_30), come_pop_stackframe(), __exception_result_var_b23);
                    if(_if_conditional24=n_27<(come_push_stackframe("./comelang2.h", 1097),__exception_result_var_b24=list$1voidp_length(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1097))), come_pop_stackframe(), __exception_result_var_b24)-1,                    _if_conditional24) {
                        (come_push_stackframe("./comelang2.h", 1098),__exception_result_var_b25=buffer_append_str(((struct buffer*)come_null_check(buf_26, "./comelang2.h", 1098)),sep), come_pop_stackframe(), __exception_result_var_b25);
                    }
                    n_27++;
                }
                __result30__ = __result_obj__ = (come_push_stackframe("./comelang2.h", 1104),__exception_result_var_b26=((char*)(right_value34=buffer_to_string(((struct buffer*)come_null_check(buf_26, "./comelang2.h", 1104))))), come_pop_stackframe(), __exception_result_var_b26);
                if(buf_26 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_26, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value34);
                if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value34;
                __freed_obj__ = 0;
                return __result30__;
                if(buf_26 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_26, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void* list$1voidp_begin(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
void* result_28;
void* __exception_result_var_b16;
void* __result22__;
_Bool _if_conditional21;
void* __result23__;
void* result_29;
void* __exception_result_var_b17;
void* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_28, 0, sizeof(void*));
memset(&result_29, 0, sizeof(void*));
                    if(_if_conditional20=self==((void*)0),                    _if_conditional20) {
                        (come_push_stackframe("./comelang2.h", 342),__exception_result_var_b16=memset(&result_28,0,sizeof(void*)), come_pop_stackframe(), __exception_result_var_b16);
                        __result22__ = __result_obj__ = result_28;
                        return __result22__;
                    }
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 345))->it=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 345))->head;
                    if(_if_conditional21=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 347))->it,                    _if_conditional21) {
                        __result23__ = __result_obj__ = ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 348))->it, "./comelang2.h", 348))->item;
                        return __result23__;
                    }
                    (come_push_stackframe("./comelang2.h", 352),__exception_result_var_b17=memset(&result_29,0,sizeof(void*)), come_pop_stackframe(), __exception_result_var_b17);
                    __result24__ = __result_obj__ = result_29;
                    return __result24__;
}

static _Bool list$1voidp_end(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result25__ = self==((void*)0)||((struct list$1voidp*)come_null_check(self, "./comelang2.h", 375))->it==((void*)0);
                    return __result25__;
}

static void* list$1voidp_next(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
void* result_31;
void* __exception_result_var_b20;
void* __result26__;
_Bool _if_conditional23;
void* __result27__;
void* result_32;
void* __exception_result_var_b21;
void* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_31, 0, sizeof(void*));
memset(&result_32, 0, sizeof(void*));
                    if(_if_conditional22=self==((void*)0)||((struct list$1voidp*)come_null_check(self, "./comelang2.h", 357))->it==((void*)0),                    _if_conditional22) {
                        (come_push_stackframe("./comelang2.h", 359),__exception_result_var_b20=memset(&result_31,0,sizeof(void*)), come_pop_stackframe(), __exception_result_var_b20);
                        __result26__ = __result_obj__ = result_31;
                        return __result26__;
                    }
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 363))->it=((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 363))->it, "./comelang2.h", 363))->next;
                    if(_if_conditional23=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 365))->it,                    _if_conditional23) {
                        __result27__ = __result_obj__ = ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 366))->it, "./comelang2.h", 366))->item;
                        return __result27__;
                    }
                    (come_push_stackframe("./comelang2.h", 370),__exception_result_var_b21=memset(&result_32,0,sizeof(void*)), come_pop_stackframe(), __exception_result_var_b21);
                    __result28__ = __result_obj__ = result_32;
                    return __result28__;
}

static int list$1voidp_length(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result29__ = ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 419))->len;
                        return __result29__;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
char* default_value_33;
void* __exception_result_var_b29;
char* __result31__;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_33, 0, sizeof(char*));
                if(_if_conditional25=self==((void*)0),                _if_conditional25) {
                    (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b29=memset(&default_value_33,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b29);
                    __result31__ = __result_obj__ = default_value_33;
                    return __result31__;
                }
                else {
                    __result32__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                    return __result32__;
                }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional26=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1!=((void*)0),                _if_conditional26) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
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
int __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result33__ = 0;
    return __result33__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value37;
char* __exception_result_var_b30;
char* output_file_name_34;
void* right_value38;
char* __exception_result_var_b31;
void* right_value39;
struct optional$2intbool* __exception_result_var_b32;
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&output_file_name_34, 0, sizeof(char*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
    output_file_name_34=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 84),__exception_result_var_b30=((char*)(right_value37=xsprintf("%s.c",((struct sInfo*)come_null_check(info, "02transpile.c", 84))->sname))), come_pop_stackframe(), __exception_result_var_b30));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value37;
    __freed_obj__ = 0;
    optional$2intbool_value((come_push_stackframe("02transpile.c", 88),__exception_result_var_b32=((struct optional$2intbool*)(right_value39=string_write(((char*)come_null_check((come_push_stackframe("02transpile.c", 88),__exception_result_var_b31=((char*)(right_value38=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))), come_pop_stackframe(), __exception_result_var_b31), "02transpile.c", 88)),output_file_name_34,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b32));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value38;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value39);
    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value39;
    __freed_obj__ = 0;
    __result36__ = (_Bool)1;
    if(output_file_name_34 && !__freed_obj__) { output_file_name_34 = come_decrement_ref_count(output_file_name_34, (void*)0, (void*)0, 0, 0, 0); }
    return __result36__;
    if(output_file_name_34 && !__freed_obj__) { output_file_name_34 = come_decrement_ref_count(output_file_name_34, (void*)0, (void*)0, 0, 0, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
int default_value_35;
void* __exception_result_var_b33;
int __result34__;
int __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_35, 0, sizeof(int));
        if(_if_conditional27=self==((void*)0),        _if_conditional27) {
            (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b33=memset(&default_value_35,0,sizeof(int)), come_pop_stackframe(), __exception_result_var_b33);
            __result34__ = default_value_35;
            return __result34__;
        }
        else {
            __result35__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 67))->v1;
            return __result35__;
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
int __exception_result_var_b34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&input_file_name_36, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
    input_file_name_36=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "02transpile.c", 95))->sname);
    (come_push_stackframe("02transpile.c", 97),__exception_result_var_b34=system(((char*)(right_value41=xsprintf("rm -f \%s.*",((char*)(right_value40=string_to_string(input_file_name_36))))))), come_pop_stackframe(), __exception_result_var_b34);
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
char* __exception_result_var_b35;
char* __dec_obj11;
void* right_value43;
char* __exception_result_var_b36;
char* __dec_obj12;
void* right_value44;
char* __exception_result_var_b37;
char* cmd_39;
_Bool exist_common_h_40;
struct _IO_FILE* __exception_result_var_b38;
struct _IO_FILE* f_41;
_Bool _if_conditional29;
_Bool __exception_result_var_b39;
_Bool _if_conditional30;
_Bool _if_conditional31;
int __exception_result_var_b40;
_Bool _if_conditional32;
int __exception_result_var_b41;
int rc_42;
_Bool _if_conditional33;
void* right_value45;
char* __exception_result_var_b42;
void* right_value46;
char* __exception_result_var_b43;
char* cmd2_43;
_Bool _if_conditional34;
int __exception_result_var_b44;
int __exception_result_var_b45;
int rc_44;
_Bool _if_conditional35;
int __exception_result_var_b46;
void* right_value47;
char* __exception_result_var_b47;
char* command2_45;
_Bool _if_conditional36;
int __exception_result_var_b48;
int __exception_result_var_b49;
char* __exception_result_var_b50;
void* right_value48;
char* __exception_result_var_b51;
void* right_value49;
char* __exception_result_var_b52;
char* cmd3_46;
_Bool _if_conditional37;
int __exception_result_var_b53;
int __exception_result_var_b54;
void* right_value50;
char* __exception_result_var_b55;
char* command2_47;
_Bool _if_conditional38;
int __exception_result_var_b56;
int __exception_result_var_b57;
_Bool _if_conditional39;
void* right_value51;
char* __exception_result_var_b58;
void* right_value52;
char* __exception_result_var_b59;
char* cmd4_48;
void* right_value53;
char* __exception_result_var_b60;
char* command_49;
_Bool _if_conditional40;
int __exception_result_var_b61;
int __exception_result_var_b62;
void* right_value54;
char* __exception_result_var_b63;
char* command2_50;
_Bool _if_conditional41;
int __exception_result_var_b64;
int __exception_result_var_b65;
_Bool _if_conditional42;
int __exception_result_var_b66;
_Bool __result37__;
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
memset(&right_value50, 0, sizeof(void*));
memset(&command2_47, 0, sizeof(char*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&cmd4_48, 0, sizeof(char*));
memset(&right_value53, 0, sizeof(void*));
memset(&command_49, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&command2_50, 0, sizeof(char*));
    input_file_name_37=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "02transpile.c", 102))->sname);
    if(_if_conditional28=!((struct sInfo*)come_null_check(info, "02transpile.c", 105))->output_header_file&&((struct sInfo*)come_null_check(info, "02transpile.c", 105))->output_file_name,    _if_conditional28) {
        __dec_obj11=output_file_name_38;
        output_file_name_38=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 106),__exception_result_var_b35=((char*)(right_value42=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 106))->output_file_name,".i"))), come_pop_stackframe(), __exception_result_var_b35));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value42;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj12=output_file_name_38;
        output_file_name_38=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 109),__exception_result_var_b36=((char*)(right_value43=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 109))->sname,".i"))), come_pop_stackframe(), __exception_result_var_b36));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value43;
        __freed_obj__ = 0;
    }
    cmd_39=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 112),__exception_result_var_b37=((char*)(right_value44=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))), come_pop_stackframe(), __exception_result_var_b37));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = 0;
    exist_common_h_40=(_Bool)0;
    {
        f_41=(come_push_stackframe("02transpile.c", 116),__exception_result_var_b38=fopen("common.h","r"), come_pop_stackframe(), __exception_result_var_b38);
        if(_if_conditional29=f_41,        _if_conditional29) {
            exist_common_h_40=(_Bool)1;
        }
        if(_if_conditional30=(come_push_stackframe("02transpile.c", 120),__exception_result_var_b39=string_operator_equals(((struct sInfo*)come_null_check(info, "02transpile.c", 120))->output_file_name,"common.h"), come_pop_stackframe(), __exception_result_var_b39),        _if_conditional30) {
            exist_common_h_40=(_Bool)0;
        }
        if(_if_conditional31=f_41,        _if_conditional31) {
            (come_push_stackframe("02transpile.c", 124),__exception_result_var_b40=fclose(f_41), come_pop_stackframe(), __exception_result_var_b40);
        }
    }
    if(_if_conditional32=!gCommonHeader,    _if_conditional32) {
        exist_common_h_40=(_Bool)0;
    }
    rc_42=(come_push_stackframe("02transpile.c", 133),__exception_result_var_b41=system(cmd_39), come_pop_stackframe(), __exception_result_var_b41);
    if(_if_conditional33=rc_42==0,    _if_conditional33) {
        cmd2_43=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 135),__exception_result_var_b43=((char*)(right_value46=xsprintf("/opt/homebrew/opt/llvm/bin/clang-cpp -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -U__GNUC__ %s %s > %s 2> %s.cpp.out",((struct sInfo*)come_null_check(info, "02transpile.c", 135))->cpp_option,"/usr/local/","/usr/local/",exist_common_h_40?(come_push_stackframe("02transpile.c", 135),__exception_result_var_b42=((char*)(right_value45=__builtin_string(" -include common.h "))), come_pop_stackframe(), __exception_result_var_b42):"",input_file_name_37,output_file_name_38,output_file_name_38))), come_pop_stackframe(), __exception_result_var_b43));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value46;
        __freed_obj__ = 0;
        if(_if_conditional34=((struct sInfo*)come_null_check(info, "02transpile.c", 136))->verbose,        _if_conditional34) {
            (come_push_stackframe("02transpile.c", 136),__exception_result_var_b44=puts(cmd2_43), come_pop_stackframe(), __exception_result_var_b44);
        }
        rc_44=(come_push_stackframe("02transpile.c", 138),__exception_result_var_b45=system(cmd2_43), come_pop_stackframe(), __exception_result_var_b45);
        if(_if_conditional35=rc_44!=0,        _if_conditional35) {
            (come_push_stackframe("02transpile.c", 141),__exception_result_var_b46=printf("failed to cpp(2) (%s)\n",cmd2_43), come_pop_stackframe(), __exception_result_var_b46);
            (come_push_stackframe("02transpile.c", 142),exit(5),come_pop_stackframe());
        }
        command2_45=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 145),__exception_result_var_b47=((char*)(right_value47=xsprintf("grep error\\: %s.cpp.out",output_file_name_38))), come_pop_stackframe(), __exception_result_var_b47));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value47;
        __freed_obj__ = 0;
        if(_if_conditional36=((struct sInfo*)come_null_check(info, "02transpile.c", 147))->verbose,        _if_conditional36) {
            (come_push_stackframe("02transpile.c", 147),__exception_result_var_b48=puts(command2_45), come_pop_stackframe(), __exception_result_var_b48);
        }
        (void)(come_push_stackframe("02transpile.c", 148),__exception_result_var_b49=system(command2_45), come_pop_stackframe(), __exception_result_var_b49);
        if(cmd2_43 && !__freed_obj__) { cmd2_43 = come_decrement_ref_count(cmd2_43, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_45 && !__freed_obj__) { command2_45 = come_decrement_ref_count(command2_45, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        cmd3_46=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 152),__exception_result_var_b52=((char*)(right_value49=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",((struct sInfo*)come_null_check(info, "02transpile.c", 152))->cpp_option,(come_push_stackframe("02transpile.c", 152),__exception_result_var_b50=getenv("HOME"), come_pop_stackframe(), __exception_result_var_b50),"/usr/local/","/usr/local/",exist_common_h_40?(come_push_stackframe("02transpile.c", 152),__exception_result_var_b51=((char*)(right_value48=__builtin_string(" -include common.h "))), come_pop_stackframe(), __exception_result_var_b51):"",input_file_name_37,output_file_name_38,output_file_name_38))), come_pop_stackframe(), __exception_result_var_b52));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value48;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value49;
        __freed_obj__ = 0;
        if(_if_conditional37=((struct sInfo*)come_null_check(info, "02transpile.c", 154))->verbose,        _if_conditional37) {
            (come_push_stackframe("02transpile.c", 154),__exception_result_var_b53=puts(cmd3_46), come_pop_stackframe(), __exception_result_var_b53);
        }
        rc_42=(come_push_stackframe("02transpile.c", 155),__exception_result_var_b54=system(cmd3_46), come_pop_stackframe(), __exception_result_var_b54);
        command2_47=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 157),__exception_result_var_b55=((char*)(right_value50=xsprintf("grep error\\: %s.cpp.out",output_file_name_38))), come_pop_stackframe(), __exception_result_var_b55));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value50;
        __freed_obj__ = 0;
        if(_if_conditional38=((struct sInfo*)come_null_check(info, "02transpile.c", 159))->verbose,        _if_conditional38) {
            (come_push_stackframe("02transpile.c", 159),__exception_result_var_b56=puts(command2_47), come_pop_stackframe(), __exception_result_var_b56);
        }
        (void)(come_push_stackframe("02transpile.c", 160),__exception_result_var_b57=system(command2_47), come_pop_stackframe(), __exception_result_var_b57);
        if(_if_conditional39=rc_42!=0,        _if_conditional39) {
            cmd4_48=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 163),__exception_result_var_b59=((char*)(right_value52=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",((struct sInfo*)come_null_check(info, "02transpile.c", 163))->cpp_option,"/usr/local/","/usr/local/",exist_common_h_40?(come_push_stackframe("02transpile.c", 163),__exception_result_var_b58=((char*)(right_value51=__builtin_string(" -include common.h "))), come_pop_stackframe(), __exception_result_var_b58):"",input_file_name_37,output_file_name_38,output_file_name_38))), come_pop_stackframe(), __exception_result_var_b59));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value52;
            __freed_obj__ = 0;
            command_49=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 164),__exception_result_var_b60=((char*)(right_value53=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_38,input_file_name_37,((struct sInfo*)come_null_check(info, "02transpile.c", 164))->clang_option,input_file_name_37))), come_pop_stackframe(), __exception_result_var_b60));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value53;
            __freed_obj__ = 0;
            if(_if_conditional40=((struct sInfo*)come_null_check(info, "02transpile.c", 166))->verbose,            _if_conditional40) {
                (come_push_stackframe("02transpile.c", 166),__exception_result_var_b61=puts(cmd4_48), come_pop_stackframe(), __exception_result_var_b61);
            }
            rc_42=(come_push_stackframe("02transpile.c", 167),__exception_result_var_b62=system(cmd4_48), come_pop_stackframe(), __exception_result_var_b62);
            command2_50=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 169),__exception_result_var_b63=((char*)(right_value54=xsprintf("grep error\\: %s.cpp.out",output_file_name_38))), come_pop_stackframe(), __exception_result_var_b63));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value54);
            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value54;
            __freed_obj__ = 0;
            if(_if_conditional41=((struct sInfo*)come_null_check(info, "02transpile.c", 171))->verbose,            _if_conditional41) {
                (come_push_stackframe("02transpile.c", 171),__exception_result_var_b64=puts(command2_50), come_pop_stackframe(), __exception_result_var_b64);
            }
            (void)(come_push_stackframe("02transpile.c", 172),__exception_result_var_b65=system(command2_50), come_pop_stackframe(), __exception_result_var_b65);
            if(_if_conditional42=rc_42!=0,            _if_conditional42) {
                (come_push_stackframe("02transpile.c", 175),__exception_result_var_b66=printf("failed to cpp(2) (%s)\n",cmd4_48), come_pop_stackframe(), __exception_result_var_b66);
                (come_push_stackframe("02transpile.c", 176),exit(5),come_pop_stackframe());
            }
            if(cmd4_48 && !__freed_obj__) { cmd4_48 = come_decrement_ref_count(cmd4_48, (void*)0, (void*)0, 0, 0, 0); }
            if(command_49 && !__freed_obj__) { command_49 = come_decrement_ref_count(command_49, (void*)0, (void*)0, 0, 0, 0); }
            if(command2_50 && !__freed_obj__) { command2_50 = come_decrement_ref_count(command2_50, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(cmd3_46 && !__freed_obj__) { cmd3_46 = come_decrement_ref_count(cmd3_46, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_47 && !__freed_obj__) { command2_47 = come_decrement_ref_count(command2_47, (void*)0, (void*)0, 0, 0, 0); }
    }
    __result37__ = (_Bool)1;
    if(input_file_name_37 && !__freed_obj__) { input_file_name_37 = come_decrement_ref_count(input_file_name_37, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_38 && !__freed_obj__) { output_file_name_38 = come_decrement_ref_count(output_file_name_38, (void*)0, (void*)0, 0, 0, 0); }
    if(cmd_39 && !__freed_obj__) { cmd_39 = come_decrement_ref_count(cmd_39, (void*)0, (void*)0, 0, 0, 0); }
    return __result37__;
    if(input_file_name_37 && !__freed_obj__) { input_file_name_37 = come_decrement_ref_count(input_file_name_37, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_38 && !__freed_obj__) { output_file_name_38 = come_decrement_ref_count(output_file_name_38, (void*)0, (void*)0, 0, 0, 0); }
    if(cmd_39 && !__freed_obj__) { cmd_39 = come_decrement_ref_count(cmd_39, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value55;
char* __exception_result_var_b67;
char* input_file_name_51;
char* output_file_name_52;
_Bool _if_conditional43;
void* right_value56;
char* __exception_result_var_b68;
char* __dec_obj13;
void* right_value57;
char* __exception_result_var_b69;
char* __dec_obj14;
void* right_value58;
char* __exception_result_var_b70;
char* command_53;
_Bool _if_conditional44;
int __exception_result_var_b71;
int __exception_result_var_b72;
int rc_54;
void* right_value59;
char* __exception_result_var_b73;
char* command2_55;
_Bool _if_conditional45;
int __exception_result_var_b74;
int __exception_result_var_b75;
_Bool _if_conditional46;
int __exception_result_var_b76;
_Bool __result38__;
_Bool _if_conditional47;
void* right_value60;
char* __exception_result_var_b77;
struct list$1charph* __exception_result_var_b78;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&input_file_name_51, 0, sizeof(char*));
memset(&output_file_name_52, 0, sizeof(char*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&command_53, 0, sizeof(char*));
memset(&rc_54, 0, sizeof(int));
memset(&right_value59, 0, sizeof(void*));
memset(&command2_55, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
    input_file_name_51=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 186),__exception_result_var_b67=((char*)(right_value55=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 186))->sname,".c"))), come_pop_stackframe(), __exception_result_var_b67));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value55;
    __freed_obj__ = 0;
    output_file_name_52=((void*)0);
    if(_if_conditional43=((struct sInfo*)come_null_check(info, "02transpile.c", 189))->output_file_name,    _if_conditional43) {
        __dec_obj13=output_file_name_52;
        output_file_name_52=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 190),__exception_result_var_b68=((char*)(right_value56=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 190))->output_file_name))), come_pop_stackframe(), __exception_result_var_b68));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value56;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj14=output_file_name_52;
        output_file_name_52=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 193),__exception_result_var_b69=((char*)(right_value57=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 193))->sname,".o"))), come_pop_stackframe(), __exception_result_var_b69));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = 0;
    }
    command_53=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 196),__exception_result_var_b70=((char*)(right_value58=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_52,input_file_name_51,((struct sInfo*)come_null_check(info, "02transpile.c", 196))->clang_option,input_file_name_51))), come_pop_stackframe(), __exception_result_var_b70));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value58;
    __freed_obj__ = 0;
    if(_if_conditional44=((struct sInfo*)come_null_check(info, "02transpile.c", 198))->verbose,    _if_conditional44) {
        (come_push_stackframe("02transpile.c", 198),__exception_result_var_b71=puts(command_53), come_pop_stackframe(), __exception_result_var_b71);
    }
    rc_54=(come_push_stackframe("02transpile.c", 199),__exception_result_var_b72=system(command_53), come_pop_stackframe(), __exception_result_var_b72);
    command2_55=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 201),__exception_result_var_b73=((char*)(right_value59=xsprintf("grep error\\: %s.out",input_file_name_51))), come_pop_stackframe(), __exception_result_var_b73));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value59;
    __freed_obj__ = 0;
    if(_if_conditional45=((struct sInfo*)come_null_check(info, "02transpile.c", 203))->verbose,    _if_conditional45) {
        (come_push_stackframe("02transpile.c", 203),__exception_result_var_b74=puts(command2_55), come_pop_stackframe(), __exception_result_var_b74);
    }
    (void)(come_push_stackframe("02transpile.c", 204),__exception_result_var_b75=system(command2_55), come_pop_stackframe(), __exception_result_var_b75);
    if(_if_conditional46=rc_54!=0,    _if_conditional46) {
        (come_push_stackframe("02transpile.c", 207),__exception_result_var_b76=printf("%s %d: clang is faild\n",((struct sInfo*)come_null_check(info, "02transpile.c", 207))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 207))->sline), come_pop_stackframe(), __exception_result_var_b76);
        __result38__ = (_Bool)0;
        if(input_file_name_51 && !__freed_obj__) { input_file_name_51 = come_decrement_ref_count(input_file_name_51, (void*)0, (void*)0, 0, 0, 0); }
        if(output_file_name_52 && !__freed_obj__) { output_file_name_52 = come_decrement_ref_count(output_file_name_52, (void*)0, (void*)0, 0, 0, 0); }
        if(command_53 && !__freed_obj__) { command_53 = come_decrement_ref_count(command_53, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_55 && !__freed_obj__) { command2_55 = come_decrement_ref_count(command2_55, (void*)0, (void*)0, 0, 0, 0); }
        return __result38__;
    }
    if(_if_conditional47=!output_object_file,    _if_conditional47) {
        (come_push_stackframe("02transpile.c", 212),__exception_result_var_b78=list$1charph_push_back(((struct list$1charph*)come_null_check(object_files, "02transpile.c", 212)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 212),__exception_result_var_b77=((char*)(right_value60=__builtin_string(output_file_name_52))), come_pop_stackframe(), __exception_result_var_b77))), come_pop_stackframe(), __exception_result_var_b78);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value60;
        __freed_obj__ = 0;
    }
    __result39__ = (_Bool)1;
    if(input_file_name_51 && !__freed_obj__) { input_file_name_51 = come_decrement_ref_count(input_file_name_51, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_52 && !__freed_obj__) { output_file_name_52 = come_decrement_ref_count(output_file_name_52, (void*)0, (void*)0, 0, 0, 0); }
    if(command_53 && !__freed_obj__) { command_53 = come_decrement_ref_count(command_53, (void*)0, (void*)0, 0, 0, 0); }
    if(command2_55 && !__freed_obj__) { command2_55 = come_decrement_ref_count(command2_55, (void*)0, (void*)0, 0, 0, 0); }
    return __result39__;
    if(input_file_name_51 && !__freed_obj__) { input_file_name_51 = come_decrement_ref_count(input_file_name_51, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_52 && !__freed_obj__) { output_file_name_52 = come_decrement_ref_count(output_file_name_52, (void*)0, (void*)0, 0, 0, 0); }
    if(command_53 && !__freed_obj__) { command_53 = come_decrement_ref_count(command_53, (void*)0, (void*)0, 0, 0, 0); }
    if(command2_55 && !__freed_obj__) { command2_55 = come_decrement_ref_count(command2_55, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* output_file_name_56;
_Bool _if_conditional48;
void* right_value61;
char* __exception_result_var_b79;
char* __dec_obj15;
void* right_value62;
char* __exception_result_var_b80;
char* __dec_obj16;
void* right_value63;
void* right_value64;
struct buffer* __exception_result_var_b81;
struct buffer* command_57;
char* __exception_result_var_b82;
void* right_value65;
char* __exception_result_var_b83;
struct buffer* __exception_result_var_b84;
struct list$1charph* o2_saved_58;
char* __exception_result_var_b87;
char* it_61;
_Bool __exception_result_var_b88;
_Bool _for_condtionalA2;
char* __exception_result_var_b91;
void* right_value66;
char* __exception_result_var_b92;
struct buffer* __exception_result_var_b93;
_Bool _if_conditional53;
struct buffer* __exception_result_var_b94;
struct buffer* __exception_result_var_b95;
void* right_value67;
char* __exception_result_var_b96;
char* cmd_64;
int __exception_result_var_b97;
int rc_65;
_Bool _if_conditional54;
struct buffer* __exception_result_var_b98;
void* right_value68;
char* __exception_result_var_b99;
struct buffer* __exception_result_var_b100;
_Bool _if_conditional55;
void* right_value69;
char* __exception_result_var_b101;
struct buffer* __exception_result_var_b102;
_Bool _if_conditional56;
void* right_value70;
char* __exception_result_var_b103;
int __exception_result_var_b104;
void* right_value71;
char* __exception_result_var_b105;
int __exception_result_var_b106;
_Bool _if_conditional57;
int __exception_result_var_b107;
_Bool __result47__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_56, 0, sizeof(char*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&command_57, 0, sizeof(struct buffer*));
memset(&right_value65, 0, sizeof(void*));
memset(&o2_saved_58, 0, sizeof(struct list$1charph*));
memset(&it_61, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&cmd_64, 0, sizeof(char*));
memset(&rc_65, 0, sizeof(int));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
    output_file_name_56=((void*)0);
    if(_if_conditional48=((struct sInfo*)come_null_check(info, "02transpile.c", 221))->output_file_name,    _if_conditional48) {
        __dec_obj15=output_file_name_56;
        output_file_name_56=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 222),__exception_result_var_b79=((char*)(right_value61=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 222))->output_file_name))), come_pop_stackframe(), __exception_result_var_b79));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value61;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj16=output_file_name_56;
        output_file_name_56=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 225),__exception_result_var_b80=((char*)(right_value62=xnoextname(((struct sInfo*)come_null_check(info, "02transpile.c", 225))->sname))), come_pop_stackframe(), __exception_result_var_b80));
        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value62;
        __freed_obj__ = 0;
    }
    command_57=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 228),__exception_result_var_b81=((struct buffer*)(right_value64=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value63=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 228, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b81));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value63;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value64;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 230),__exception_result_var_b84=buffer_append_str(((struct buffer*)come_null_check(command_57, "02transpile.c", 230)),(come_push_stackframe("02transpile.c", 230),__exception_result_var_b83=((char*)(right_value65=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_56,(come_push_stackframe("02transpile.c", 230),__exception_result_var_b82=getenv("HOME"), come_pop_stackframe(), __exception_result_var_b82),"/usr/local/"))), come_pop_stackframe(), __exception_result_var_b83)), come_pop_stackframe(), __exception_result_var_b84);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value65;
    __freed_obj__ = 0;
    for(
    o2_saved_58=(object_files),it_61=(come_push_stackframe("02transpile.c", 232),__exception_result_var_b87=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_58), "02transpile.c", 232))), come_pop_stackframe(), __exception_result_var_b87) ,    0;    _for_condtionalA2=    !(come_push_stackframe("02transpile.c", 232),__exception_result_var_b88=list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_58), "02transpile.c", 232))), come_pop_stackframe(), __exception_result_var_b88) ,    _for_condtionalA2;    it_61=(come_push_stackframe("02transpile.c", 232),__exception_result_var_b91=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_58), "02transpile.c", 232))), come_pop_stackframe(), __exception_result_var_b91) ,    0    ){
        (come_push_stackframe("02transpile.c", 233),__exception_result_var_b93=buffer_append_str(((struct buffer*)come_null_check(command_57, "02transpile.c", 233)),(come_push_stackframe("02transpile.c", 233),__exception_result_var_b92=((char*)(right_value66=xsprintf("%s ",it_61))), come_pop_stackframe(), __exception_result_var_b92)), come_pop_stackframe(), __exception_result_var_b93);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value66;
        __freed_obj__ = 0;
    }
    if(_if_conditional53=gComeGC,    _if_conditional53) {
        (come_push_stackframe("02transpile.c", 237),__exception_result_var_b94=buffer_append_str(((struct buffer*)come_null_check(command_57, "02transpile.c", 237)),"-L/usr/local/lib -lcomelang2-gc "), come_pop_stackframe(), __exception_result_var_b94);
    }
    else {
        (come_push_stackframe("02transpile.c", 240),__exception_result_var_b95=buffer_append_str(((struct buffer*)come_null_check(command_57, "02transpile.c", 240)),"-L/usr/local/lib -lcomelang2 "), come_pop_stackframe(), __exception_result_var_b95);
    }
    cmd_64=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 242),__exception_result_var_b96=((char*)(right_value67=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))), come_pop_stackframe(), __exception_result_var_b96));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value67;
    __freed_obj__ = 0;
    rc_65=(come_push_stackframe("02transpile.c", 244),__exception_result_var_b97=system(cmd_64), come_pop_stackframe(), __exception_result_var_b97);
    if(_if_conditional54=rc_65==0,    _if_conditional54) {
        (come_push_stackframe("02transpile.c", 246),__exception_result_var_b98=buffer_append_str(((struct buffer*)come_null_check(command_57, "02transpile.c", 246))," -L/opt/homebrew/opt/pcre/lib "), come_pop_stackframe(), __exception_result_var_b98);
    }
    (come_push_stackframe("02transpile.c", 248),__exception_result_var_b100=buffer_append_str(((struct buffer*)come_null_check(command_57, "02transpile.c", 248)),(come_push_stackframe("02transpile.c", 248),__exception_result_var_b99=((char*)(right_value68=xsprintf(" %s ",((struct sInfo*)come_null_check(info, "02transpile.c", 248))->clang_option))), come_pop_stackframe(), __exception_result_var_b99)), come_pop_stackframe(), __exception_result_var_b100);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value68;
    __freed_obj__ = 0;
    if(_if_conditional55=gComeGC,    _if_conditional55) {
        (come_push_stackframe("02transpile.c", 251),__exception_result_var_b102=buffer_append_str(((struct buffer*)come_null_check(command_57, "02transpile.c", 251)),(come_push_stackframe("02transpile.c", 251),__exception_result_var_b101=((char*)(right_value69=xsprintf(" -lgc "))), come_pop_stackframe(), __exception_result_var_b101)), come_pop_stackframe(), __exception_result_var_b102);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value69;
        __freed_obj__ = 0;
    }
    if(_if_conditional56=((struct sInfo*)come_null_check(info, "02transpile.c", 254))->verbose,    _if_conditional56) {
        (come_push_stackframe("02transpile.c", 254),__exception_result_var_b104=puts((come_push_stackframe("02transpile.c", 254),__exception_result_var_b103=((char*)(right_value70=buffer_to_string(((struct buffer*)come_null_check(command_57, "02transpile.c", 254))))), come_pop_stackframe(), __exception_result_var_b103)), come_pop_stackframe(), __exception_result_var_b104);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value70;
        __freed_obj__ = 0;
    }
    rc_65=(come_push_stackframe("02transpile.c", 255),__exception_result_var_b106=system((come_push_stackframe("02transpile.c", 255),__exception_result_var_b105=((char*)(right_value71=buffer_to_string(((struct buffer*)come_null_check(command_57, "02transpile.c", 255))))), come_pop_stackframe(), __exception_result_var_b105)), come_pop_stackframe(), __exception_result_var_b106);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value71;
    __freed_obj__ = 0;
    if(_if_conditional57=rc_65!=0,    _if_conditional57) {
        (come_push_stackframe("02transpile.c", 258),__exception_result_var_b107=printf("%s %d: clang is faild\n",((struct sInfo*)come_null_check(info, "02transpile.c", 258))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 258))->sline), come_pop_stackframe(), __exception_result_var_b107);
        __result47__ = (_Bool)0;
        if(output_file_name_56 && !__freed_obj__) { output_file_name_56 = come_decrement_ref_count(output_file_name_56, (void*)0, (void*)0, 0, 0, 0); }
        if(command_57 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_57, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cmd_64 && !__freed_obj__) { cmd_64 = come_decrement_ref_count(cmd_64, (void*)0, (void*)0, 0, 0, 0); }
        return __result47__;
    }
    __result48__ = (_Bool)1;
    if(output_file_name_56 && !__freed_obj__) { output_file_name_56 = come_decrement_ref_count(output_file_name_56, (void*)0, (void*)0, 0, 0, 0); }
    if(command_57 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(cmd_64 && !__freed_obj__) { cmd_64 = come_decrement_ref_count(cmd_64, (void*)0, (void*)0, 0, 0, 0); }
    return __result48__;
    if(output_file_name_56 && !__freed_obj__) { output_file_name_56 = come_decrement_ref_count(output_file_name_56, (void*)0, (void*)0, 0, 0, 0); }
    if(command_57 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(cmd_64 && !__freed_obj__) { cmd_64 = come_decrement_ref_count(cmd_64, (void*)0, (void*)0, 0, 0, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
char* result_59;
void* __exception_result_var_b85;
char* __result40__;
_Bool _if_conditional50;
char* __result41__;
char* result_60;
void* __exception_result_var_b86;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_59, 0, sizeof(char*));
memset(&result_60, 0, sizeof(char*));
        if(_if_conditional49=self==((void*)0),        _if_conditional49) {
            (come_push_stackframe("./comelang2.h", 342),__exception_result_var_b85=memset(&result_59,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b85);
            __result40__ = __result_obj__ = result_59;
            return __result40__;
        }
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 345))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 345))->head;
        if(_if_conditional50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 347))->it,        _if_conditional50) {
            __result41__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 348))->it, "./comelang2.h", 348))->item;
            return __result41__;
        }
        (come_push_stackframe("./comelang2.h", 352),__exception_result_var_b86=memset(&result_60,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b86);
        __result42__ = __result_obj__ = result_60;
        return __result42__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result43__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 375))->it==((void*)0);
        return __result43__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
char* result_62;
void* __exception_result_var_b89;
char* __result44__;
_Bool _if_conditional52;
char* __result45__;
char* result_63;
void* __exception_result_var_b90;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_62, 0, sizeof(char*));
memset(&result_63, 0, sizeof(char*));
        if(_if_conditional51=self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it==((void*)0),        _if_conditional51) {
            (come_push_stackframe("./comelang2.h", 359),__exception_result_var_b89=memset(&result_62,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b89);
            __result44__ = __result_obj__ = result_62;
            return __result44__;
        }
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 363))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 363))->it, "./comelang2.h", 363))->next;
        if(_if_conditional52=((struct list$1charph*)come_null_check(self, "./comelang2.h", 365))->it,        _if_conditional52) {
            __result45__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it, "./comelang2.h", 366))->item;
            return __result45__;
        }
        (come_push_stackframe("./comelang2.h", 370),__exception_result_var_b90=memset(&result_63,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b90);
        __result46__ = __result_obj__ = result_63;
        return __result46__;
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value72;
void* right_value73;
struct buffer* __exception_result_var_b108;
struct buffer* __dec_obj17;
void* right_value74;
void* right_value75;
struct buffer* __exception_result_var_b109;
struct buffer* __dec_obj18;
char* __dec_obj19;
char* __dec_obj20;
struct sModule* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
    __dec_obj17=((struct sModule*)come_null_check(self, "02transpile.c", 267))->mSourceHead;
    ((struct sModule*)come_null_check(self, "02transpile.c", 267))->mSourceHead=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 267),__exception_result_var_b108=((struct buffer*)(right_value73=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value72=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 267, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b108));
    if(__dec_obj17) { come_call_finalizer(buffer_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value72;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value73;
    __freed_obj__ = 0;
    __dec_obj18=((struct sModule*)come_null_check(self, "02transpile.c", 268))->mSource;
    ((struct sModule*)come_null_check(self, "02transpile.c", 268))->mSource=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 268),__exception_result_var_b109=((struct buffer*)(right_value75=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 268, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b109));
    if(__dec_obj18) { come_call_finalizer(buffer_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value74;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value75;
    __freed_obj__ = 0;
    __dec_obj19=((struct sModule*)come_null_check(self, "02transpile.c", 269))->mLastCode;
    ((struct sModule*)come_null_check(self, "02transpile.c", 269))->mLastCode=((void*)0);
    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
    __dec_obj20=((struct sModule*)come_null_check(self, "02transpile.c", 270))->mLastCode2;
    ((struct sModule*)come_null_check(self, "02transpile.c", 270))->mLastCode2=((void*)0);
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
    __result49__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result49__;
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
        if(_if_conditional58=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 0))->mSourceHead!=((void*)0),        _if_conditional58) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 0))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sModule*)come_null_check(self, "sModule_finalize", 0))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional59=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSource!=((void*)0),        _if_conditional59) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional60=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode!=((void*)0),        _if_conditional60) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional61=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2!=((void*)0),        _if_conditional61) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2 && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2 = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional62=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3!=((void*)0),        _if_conditional62) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3 && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3 = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3, (void*)0, (void*)0, 0, 0, 0); }
        }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value76;
void* right_value82;
struct map$2charphsVarph* __exception_result_var_b111;
struct map$2charphsVarph* __dec_obj22;
static int id_75=0;
struct sVarTable* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
    __dec_obj22=((struct sVarTable*)come_null_check(self, "02transpile.c", 277))->mVars;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 277))->mVars=(struct map$2charphsVarph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 277),__exception_result_var_b111=((struct map$2charphsVarph*)(right_value82=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value76=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02transpile.c", 277, "struct map$2charphsVarph"))))))), come_pop_stackframe(), __exception_result_var_b111));
    if(__dec_obj22) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value76;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value82;
    __freed_obj__ = 0;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 278))->mGlobal=global;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 279))->mParent=parent;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 281))->mID=++id_75;
    __result52__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result52__;
    if(self && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value77;
void* right_value78;
void* right_value79;
int i_70;
_Bool _for_condtionalA3;
void* right_value80;
void* right_value81;
struct list$1charp* __exception_result_var_b110;
struct list$1charp* __dec_obj21;
struct map$2charphsVarph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&i_70, 0, sizeof(int));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1131))->keys=(char**)come_increment_ref_count(((char**)(right_value77=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1131, "char*"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value77;
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1132))->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value78=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1132, "struct sVar*"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value78;
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1133))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value79=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1133, "_Bool"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value79;
        __freed_obj__ = 0;
        for(
        i_70=0 ,        0;        _for_condtionalA3=        i_70<1024 ,        _for_condtionalA3;        i_70++ ,        0        ){
            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1137))->item_existance[i_70]=(_Bool)0;
        }
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1140))->size=1024;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1141))->len=0;
        __dec_obj21=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1143))->key_list;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1143))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 1143),__exception_result_var_b110=((struct list$1charp*)(right_value81=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value80=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1143, "struct list$1charp"))))))), come_pop_stackframe(), __exception_result_var_b110));
        if(__dec_obj21) { come_call_finalizer(list$1charp_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value80;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value81;
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1145))->it=0;
        __result51__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result51__;
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
            if(_if_conditional63=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName!=((void*)0),            _if_conditional63) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional64=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName!=((void*)0),            _if_conditional64) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional65=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType!=((void*)0),            _if_conditional65) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional81=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName!=((void*)0),            _if_conditional81) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
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
                    if(_if_conditional66=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType!=((void*)0),                    _if_conditional66) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional68=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType!=((void*)0),                    _if_conditional68) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName!=((void*)0),                    _if_conditional69) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional70=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes!=((void*)0),                    _if_conditional70) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional72=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum!=((void*)0),                    _if_conditional72) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes!=((void*)0),                    _if_conditional74) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional75=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames!=((void*)0),                    _if_conditional75) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType!=((void*)0),                    _if_conditional76) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas!=((void*)0),                    _if_conditional77) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum!=((void*)0),                    _if_conditional78) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional79=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName!=((void*)0),                    _if_conditional79) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional80=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName!=((void*)0),                    _if_conditional80) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional67=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1!=((void*)0),                            _if_conditional67) {
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_66;
_Bool _while_condtional5;
struct list_item$1sTypeph* prev_it_67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_66, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_67, 0, sizeof(struct list_item$1sTypeph*));
                            it_66=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 178))->head;
                            while(_while_condtional5=it_66!=((void*)0),                            _while_condtional5) {
                                prev_it_67=it_66;
                                it_66=((struct list_item$1sTypeph*)come_null_check(it_66, "./comelang2.h", 181))->next;
                                if(prev_it_67 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional71=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item!=((void*)0),                                    _if_conditional71) {
                                        if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_68;
_Bool _while_condtional6;
struct list_item$1sNodeph* prev_it_69;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_69, 0, sizeof(struct list_item$1sNodeph*));
                            it_68=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 178))->head;
                            while(_while_condtional6=it_68!=((void*)0),                            _while_condtional6) {
                                prev_it_69=it_68;
                                it_68=((struct list_item$1sNodeph*)come_null_check(it_68, "./comelang2.h", 181))->next;
                                if(prev_it_69 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional73;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional73=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item!=((void*)0),                                    _if_conditional73) {
                                        if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 161))->len=0;
            __result50__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result50__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_71;
_Bool _while_condtional7;
struct list_item$1charp* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_71, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_72, 0, sizeof(struct list_item$1charp*));
                it_71=((struct list$1charp*)come_null_check(self, "./comelang2.h", 178))->head;
                while(_while_condtional7=it_71!=((void*)0),                _while_condtional7) {
                    prev_it_72=it_71;
                    it_71=((struct list_item$1charp*)come_null_check(it_71, "./comelang2.h", 181))->next;
                    if(prev_it_72 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_72, (void*)0, (void*)0, 0, 0, 0, 0); }
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
int i_73;
_Bool _for_condtionalA4;
_Bool _if_conditional82;
_Bool _if_conditional83;
int i_74;
_Bool _for_condtionalA5;
_Bool _if_conditional84;
_Bool _if_conditional85;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_73, 0, sizeof(int));
memset(&i_74, 0, sizeof(int));
            for(
            i_73=0 ,            0;            _for_condtionalA4=            i_73<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1174))->size ,            _for_condtionalA4;            i_73++ ,            0            ){
                if(_if_conditional82=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1175))->item_existance[i_73],                _if_conditional82) {
                    if(_if_conditional83=1,                    _if_conditional83) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->items[i_73] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->items[i_73], (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
            }
            (come_push_stackframe("./comelang2.h", 1181),come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->items),come_pop_stackframe());
            for(
            i_74=0 ,            0;            _for_condtionalA5=            i_74<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1183))->size ,            _for_condtionalA5;            i_74++ ,            0            ){
                if(_if_conditional84=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1184))->item_existance[i_74],                _if_conditional84) {
                    if(_if_conditional85=1,                    _if_conditional85) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_74] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_74] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_74], (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
            (come_push_stackframe("./comelang2.h", 1190),come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->keys),come_pop_stackframe());
            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1192))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1192))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1194))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1194))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1194))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional86=self!=((void*)0)&&((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list!=((void*)0),        _if_conditional86) {
            if(((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(((struct sVarTable*)come_null_check(self, "02transpile.c", 288))->mVars && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,((struct sVarTable*)come_null_check(self, "02transpile.c", 288))->mVars, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int pointer_num_76;
char* p_77;
_Bool _while_condtional8;
_Bool __exception_result_var_b112;
_Bool _if_conditional87;
_Bool _while_condtional9;
void* right_value83;
char* __exception_result_var_b113;
void* right_value84;
char* __exception_result_var_b114;
char* name2_78;
struct sClass* __exception_result_var_b119;
struct sClass* klass_83;
struct sClass* __exception_result_var_b120;
struct sClass* generics_class_84;
_Bool _if_conditional93;
int __exception_result_var_b121;
_Bool _if_conditional94;
void* right_value88;
struct sClass* klass2_85;
void* right_value89;
char* __exception_result_var_b122;
char* __dec_obj23;
void* right_value90;
char* __exception_result_var_b123;
char* __dec_obj24;
void* right_value101;
char* __exception_result_var_b155;
struct map$2charphsClassph* __exception_result_var_b156;
void* right_value102;
char* __exception_result_var_b157;
struct sClass* __exception_result_var_b158;
void* right_value103;
void* right_value143;
struct tuple1$1sTypeph* __exception_result_var_b165;
struct tuple1$1sTypeph* __dec_obj50;
void* right_value144;
void* right_value145;
struct tuple1$1sTypeph* __exception_result_var_b166;
struct tuple1$1sTypeph* __dec_obj51;
void* right_value146;
void* right_value147;
struct list$1sTypeph* __exception_result_var_b167;
struct list$1sTypeph* __dec_obj52;
void* right_value148;
void* right_value149;
struct list$1sNodeph* __exception_result_var_b168;
struct list$1sNodeph* __dec_obj53;
void* right_value150;
void* right_value151;
struct list$1sTypeph* __exception_result_var_b169;
struct list$1sTypeph* __dec_obj54;
void* right_value152;
void* right_value153;
struct list$1charph* __exception_result_var_b170;
struct list$1charph* __dec_obj55;
struct tuple1$1sTypeph* __dec_obj56;
struct sNode* __dec_obj57;
void* right_value154;
char* __exception_result_var_b171;
char* __dec_obj58;
struct sType* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&pointer_num_76, 0, sizeof(int));
memset(&p_77, 0, sizeof(char*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&name2_78, 0, sizeof(char*));
memset(&klass_83, 0, sizeof(struct sClass*));
memset(&generics_class_84, 0, sizeof(struct sClass*));
memset(&right_value88, 0, sizeof(void*));
memset(&klass2_85, 0, sizeof(struct sClass*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
    pointer_num_76=0;
    p_77=name;
    while(_while_condtional8=*p_77,    _while_condtional8) {
        if(_if_conditional87=(come_push_stackframe("02transpile.c", 296),__exception_result_var_b112=xisalpha(*p_77), come_pop_stackframe(), __exception_result_var_b112),        _if_conditional87) {
            p_77++;
        }
        else {
            break;
        }
    }
    while(_while_condtional9=*p_77==42,    _while_condtional9) {
        pointer_num_76++;
        p_77++;
    }
    name2_78=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 308),__exception_result_var_b114=((char*)(right_value84=string_substring(((char*)come_null_check((come_push_stackframe("02transpile.c", 308),__exception_result_var_b113=((char*)(right_value83=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b113), "02transpile.c", 308)),0,-pointer_num_76-1))), come_pop_stackframe(), __exception_result_var_b114));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value84;
    __freed_obj__ = 0;
    klass_83=(come_push_stackframe("02transpile.c", 310),__exception_result_var_b119=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 310))->classes,name2_78), come_pop_stackframe(), __exception_result_var_b119);
    generics_class_84=(come_push_stackframe("02transpile.c", 311),__exception_result_var_b120=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 311))->generics_classes,name2_78), come_pop_stackframe(), __exception_result_var_b120);
    if(_if_conditional93=klass_83==((void*)0)&&generics_class_84==((void*)0),    _if_conditional93) {
        (come_push_stackframe("02transpile.c", 314),__exception_result_var_b121=printf("%s %d: class not found(%s)(1)\n",((struct sInfo*)come_null_check(info, "02transpile.c", 314))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 314))->sline,name2_78), come_pop_stackframe(), __exception_result_var_b121);
    }
    if(_if_conditional94=klass_83,    _if_conditional94) {
        ((struct sType*)come_null_check(self, "02transpile.c", 317))->mClass=klass_83;
    }
    else {
        klass2_85=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value88=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 320, "struct sClass"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value88;
        __freed_obj__ = 0;
        __dec_obj23=((struct sClass*)come_null_check(klass2_85, "02transpile.c", 321))->mName;
        ((struct sClass*)come_null_check(klass2_85, "02transpile.c", 321))->mName=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 321),__exception_result_var_b122=((char*)(right_value89=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b122));
        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value89;
        __freed_obj__ = 0;
        __dec_obj24=((struct sClass*)come_null_check(klass2_85, "02transpile.c", 322))->mDeclareSName;
        ((struct sClass*)come_null_check(klass2_85, "02transpile.c", 322))->mDeclareSName=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 322),__exception_result_var_b123=((char*)(right_value90=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 322))->sname))), come_pop_stackframe(), __exception_result_var_b123));
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value90;
        __freed_obj__ = 0;
        (come_push_stackframe("02transpile.c", 324),__exception_result_var_b156=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 324))->classes, "02transpile.c", 324)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 324),__exception_result_var_b155=((char*)(right_value101=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b155)),(struct sClass*)come_increment_ref_count(klass2_85)), come_pop_stackframe(), __exception_result_var_b156);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value101);
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value101;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(self, "02transpile.c", 326))->mClass=(come_push_stackframe("02transpile.c", 326),__exception_result_var_b158=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 326))->classes,(come_push_stackframe("02transpile.c", 326),__exception_result_var_b157=((char*)(right_value102=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b157)), come_pop_stackframe(), __exception_result_var_b158);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value102;
        __freed_obj__ = 0;
        if(klass2_85 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass2_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __dec_obj50=((struct sType*)come_null_check(self, "02transpile.c", 329))->mNoSolvedGenericsType;
    ((struct sType*)come_null_check(self, "02transpile.c", 329))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 329),__exception_result_var_b165=((struct tuple1$1sTypeph*)(right_value143=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value103=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 329, "struct tuple1$1sTypeph")))),((void*)0)))), come_pop_stackframe(), __exception_result_var_b165));
    if(__dec_obj50) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value103;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value143;
    __freed_obj__ = 0;
    __dec_obj51=((struct sType*)come_null_check(self, "02transpile.c", 330))->mOriginalLoadVarType;
    ((struct sType*)come_null_check(self, "02transpile.c", 330))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 330),__exception_result_var_b166=((struct tuple1$1sTypeph*)(right_value145=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value144=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 330, "struct tuple1$1sTypeph")))),((void*)0)))), come_pop_stackframe(), __exception_result_var_b166));
    if(__dec_obj51) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value144;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value145;
    __freed_obj__ = 0;
    __dec_obj52=((struct sType*)come_null_check(self, "02transpile.c", 331))->mGenericsTypes;
    ((struct sType*)come_null_check(self, "02transpile.c", 331))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 331),__exception_result_var_b167=((struct list$1sTypeph*)(right_value147=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value146=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 331, "struct list$1sTypeph"))))))), come_pop_stackframe(), __exception_result_var_b167));
    if(__dec_obj52) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value146;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value147;
    __freed_obj__ = 0;
    __dec_obj53=((struct sType*)come_null_check(self, "02transpile.c", 332))->mArrayNum;
    ((struct sType*)come_null_check(self, "02transpile.c", 332))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 332),__exception_result_var_b168=((struct list$1sNodeph*)(right_value149=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value148=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02transpile.c", 332, "struct list$1sNodeph"))))))), come_pop_stackframe(), __exception_result_var_b168));
    if(__dec_obj53) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value148;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value149;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 333))->mOmitArrayNum=(_Bool)0;
    __dec_obj54=((struct sType*)come_null_check(self, "02transpile.c", 334))->mParamTypes;
    ((struct sType*)come_null_check(self, "02transpile.c", 334))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 334),__exception_result_var_b169=((struct list$1sTypeph*)(right_value151=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value150=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 334, "struct list$1sTypeph"))))))), come_pop_stackframe(), __exception_result_var_b169));
    if(__dec_obj54) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value150;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value151;
    __freed_obj__ = 0;
    __dec_obj55=((struct sType*)come_null_check(self, "02transpile.c", 335))->mParamNames;
    ((struct sType*)come_null_check(self, "02transpile.c", 335))->mParamNames=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 335),__exception_result_var_b170=((struct list$1charph*)(right_value153=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value152=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 335, "struct list$1charph"))))))), come_pop_stackframe(), __exception_result_var_b170));
    if(__dec_obj55) { come_call_finalizer(list$1charph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value152;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value153;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 336))->mVarArgs=(_Bool)0;
    __dec_obj56=((struct sType*)come_null_check(self, "02transpile.c", 337))->mResultType;
    ((struct sType*)come_null_check(self, "02transpile.c", 337))->mResultType=((void*)0);
    if(__dec_obj56) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
    ((struct sType*)come_null_check(self, "02transpile.c", 338))->mUnsigned=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 339))->mConstant=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 340))->mRegister=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 341))->mVolatile=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 342))->mStatic=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 343))->mRestrict=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 344))->mImmutable=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 345))->mLongLong=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 346))->mHeap=heap;
    ((struct sType*)come_null_check(self, "02transpile.c", 347))->mDummyHeap=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 348))->mNoHeap=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 349))->mRefference=(_Bool)0;
    ((struct sType*)come_null_check(self, "02transpile.c", 351))->mPointerNum=pointer_num_76;
    ((struct sType*)come_null_check(self, "02transpile.c", 352))->mNoArrayPointerNum=0;
    __dec_obj57=((struct sType*)come_null_check(self, "02transpile.c", 353))->mSizeNum;
    ((struct sType*)come_null_check(self, "02transpile.c", 353))->mSizeNum=((void*)0);
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
    ((struct sType*)come_null_check(self, "02transpile.c", 355))->mDynamicArrayNum=0;
    ((struct sType*)come_null_check(self, "02transpile.c", 356))->mTypeOfExpression=0;
    __dec_obj58=((struct sType*)come_null_check(self, "02transpile.c", 358))->mOriginalTypeName;
    ((struct sType*)come_null_check(self, "02transpile.c", 358))->mOriginalTypeName=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 358),__exception_result_var_b171=((char*)(right_value154=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b171));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value154;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 359))->mOriginalPointerNum=0;
    ((struct sType*)come_null_check(self, "02transpile.c", 361))->mFunctionParam=(_Bool)0;
    __result106__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name2_78 && !__freed_obj__) { name2_78 = come_decrement_ref_count(name2_78, (void*)0, (void*)0, 0, 0, 0); }
    return __result106__;
    if(self && !__freed_obj__) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name2_78 && !__freed_obj__) { name2_78 = come_decrement_ref_count(name2_78, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_79;
void* __exception_result_var_b115;
unsigned int __exception_result_var_b116;
unsigned int hash_80;
unsigned int it_81;
_Bool _while_condtional10;
_Bool _if_conditional88;
void* right_value85;
struct optional$2boolbool* __exception_result_var_b117;
_Bool _if_conditional90;
struct sClass* __result55__;
_Bool _if_conditional91;
_Bool _if_conditional92;
struct sClass* __result56__;
struct sClass* __result57__;
void* right_value86;
void* right_value87;
struct sClass* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_79, 0, sizeof(struct sClass*));
memset(&hash_80, 0, sizeof(unsigned int));
memset(&it_81, 0, sizeof(unsigned int));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
        (come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b115=memset(&default_value_79,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b115);
        hash_80=(come_push_stackframe("./comelang2.h", 1596),__exception_result_var_b116=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1596))), come_pop_stackframe(), __exception_result_var_b116)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1596))->size;
        it_81=hash_80;
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            if(_if_conditional88=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1600))->item_existance[it_81],            _if_conditional88) {
                if(_if_conditional90=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1602),__exception_result_var_b117=((struct optional$2boolbool*)(right_value85=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1602))->keys[it_81], "./comelang2.h", 1602)),key))), come_pop_stackframe(), __exception_result_var_b117)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85),
                (right_value85 && right_value85 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value85, 
                __freed_obj__ = 0, 
                _if_conditional90) {
                    __result55__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1604))->items[it_81];
                    return __result55__;
                }
                it_81++;
                if(_if_conditional91=it_81>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1609))->size,                _if_conditional91) {
                    it_81=0;
                }
                else {
                    if(_if_conditional92=it_81==hash_80,                    _if_conditional92) {
                        __result56__ = __result_obj__ = default_value_79;
                        return __result56__;
                    }
                }
            }
            else {
                __result57__ = __result_obj__ = default_value_79;
                return __result57__;
            }
        }
        __result59__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1621), ((struct optional$2sClasspbool*)(right_value87=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value86=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1621, "struct optional$2sClasspbool"))),default_value_79,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value86;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value87;
        __freed_obj__ = 0;
        return __result59__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional89;
_Bool default_value_82;
void* __exception_result_var_b118;
_Bool __result53__;
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_82, 0, sizeof(_Bool));
                    if(_if_conditional89=self==((void*)0),                    _if_conditional89) {
                        (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b118=memset(&default_value_82,0,sizeof(_Bool)), come_pop_stackframe(), __exception_result_var_b118);
                        __result53__ = default_value_82;
                        return __result53__;
                    }
                    else {
                        __result54__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                        return __result54__;
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
struct optional$2sClasspbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
            ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
            __result58__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result58__;
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
            if(_if_conditional95=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName!=((void*)0),            _if_conditional95) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional96=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields!=((void*)0),            _if_conditional96) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional100=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName!=((void*)0),            _if_conditional100) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_86;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_87;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_86, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_87, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_86=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 178))->head;
                    while(_while_condtional11=it_86!=((void*)0),                    _while_condtional11) {
                        prev_it_87=it_86;
                        it_86=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_86, "./comelang2.h", 181))->next;
                        if(prev_it_87 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional97=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item!=((void*)0),                            _if_conditional97) {
                                if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                    if(_if_conditional98=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1!=((void*)0),                                    _if_conditional98) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional99=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2!=((void*)0),                                    _if_conditional99) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
unsigned int __exception_result_var_b138;
unsigned int hash_105;
unsigned int it_106;
_Bool _while_condtional14;
_Bool _if_conditional113;
void* right_value95;
struct optional$2boolbool* __exception_result_var_b139;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct list$1charp* __exception_result_var_b143;
struct list$1charp* __exception_result_var_b144;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
int __exception_result_var_b145;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool same_key_exist_123;
char* __exception_result_var_b148;
char* it2_126;
_Bool __exception_result_var_b149;
_Bool _for_condtionalA7;
char* __exception_result_var_b152;
void* right_value97;
struct optional$2boolbool* __exception_result_var_b153;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct list$1charp* __exception_result_var_b154;
struct map$2charphsClassph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_105, 0, sizeof(unsigned int));
memset(&it_106, 0, sizeof(unsigned int));
memset(&right_value95, 0, sizeof(void*));
memset(&same_key_exist_123, 0, sizeof(_Bool));
memset(&it2_126, 0, sizeof(char*));
memset(&right_value97, 0, sizeof(void*));
            if(_if_conditional101=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1431))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1431))->size,            _if_conditional101) {
                (come_push_stackframe("./comelang2.h", 1432),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1432))),come_pop_stackframe());
            }
            hash_105=(come_push_stackframe("./comelang2.h", 1434),__exception_result_var_b138=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1434))), come_pop_stackframe(), __exception_result_var_b138)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->size;
            it_106=hash_105;
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                if(_if_conditional113=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->item_existance[it_106],                _if_conditional113) {
                    if(_if_conditional114=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1440),__exception_result_var_b139=((struct optional$2boolbool*)(right_value95=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1440))->keys[it_106], "./comelang2.h", 1440)),key))), come_pop_stackframe(), __exception_result_var_b139)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95),
                    (right_value95 && right_value95 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value95, 
                    __freed_obj__ = 0, 
                    _if_conditional114) {
                        if(_if_conditional115=1,                        _if_conditional115) {
                            (come_push_stackframe("./comelang2.h", 1443),__exception_result_var_b143=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->key_list, "./comelang2.h", 1443)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->keys[it_106]), come_pop_stackframe(), __exception_result_var_b143);
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1444))->keys[it_106] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1444))->keys[it_106] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1444))->keys[it_106], (void*)0, (void*)0, 0, 0, 0); }
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1445))->keys[it_106]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            (come_push_stackframe("./comelang2.h", 1448),__exception_result_var_b144=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1448))->key_list, "./comelang2.h", 1448)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1448))->keys[it_106]), come_pop_stackframe(), __exception_result_var_b144);
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1449))->keys[it_106]=key;
                        }
                        if(_if_conditional135=1,                        _if_conditional135) {
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1452))->items[it_106] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1452))->items[it_106], (void*)0, (void*)0, 0, 0, 0, 0); }
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1453))->items[it_106]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1456))->items[it_106]=item;
                        }
                        break;
                    }
                    it_106++;
                    if(_if_conditional136=it_106>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1463))->size,                    _if_conditional136) {
                        it_106=0;
                    }
                    else {
                        if(_if_conditional137=it_106==hash_105,                        _if_conditional137) {
                            (come_push_stackframe("./comelang2.h", 1467),__exception_result_var_b145=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b145);
                            (come_push_stackframe("./comelang2.h", 1468),stackframe(),come_pop_stackframe());
                            (come_push_stackframe("./comelang2.h", 1469),exit(2),come_pop_stackframe());
                        }
                    }
                }
                else {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->item_existance[it_106]=(_Bool)1;
                    if(_if_conditional138=1,                    _if_conditional138) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1475))->keys[it_106]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1478))->keys[it_106]=key;
                    }
                    if(_if_conditional139=1,                    _if_conditional139) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1481))->items[it_106]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1484))->items[it_106]=item;
                    }
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1487))->len++;
                    break;
                }
            }
            same_key_exist_123=(_Bool)0;
            for(
            it2_126=(come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b148=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1494))->key_list, "./comelang2.h", 1494))), come_pop_stackframe(), __exception_result_var_b148) ,            0;            _for_condtionalA7=            !(come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b149=list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1494))->key_list, "./comelang2.h", 1494))), come_pop_stackframe(), __exception_result_var_b149) ,            _for_condtionalA7;            it2_126=(come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b152=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1494))->key_list, "./comelang2.h", 1494))), come_pop_stackframe(), __exception_result_var_b152) ,            0            ){
                if(_if_conditional144=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1496),__exception_result_var_b153=((struct optional$2boolbool*)(right_value97=string_equals(((char*)come_null_check(it2_126, "./comelang2.h", 1496)),key))), come_pop_stackframe(), __exception_result_var_b153)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97),
                (right_value97 && right_value97 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value97, 
                __freed_obj__ = 0, 
                _if_conditional144) {
                    same_key_exist_123=(_Bool)1;
                }
            }
            if(_if_conditional145=!same_key_exist_123,            _if_conditional145) {
                (come_push_stackframe("./comelang2.h", 1502),__exception_result_var_b154=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1502))->key_list, "./comelang2.h", 1502)),key), come_pop_stackframe(), __exception_result_var_b154);
            }
            __result83__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result83__;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_88;
void* right_value91;
char** keys_89;
void* right_value92;
struct sClass** items_90;
void* right_value93;
_Bool* item_existance_91;
int len_92;
char* __exception_result_var_b126;
char* it_95;
_Bool __exception_result_var_b127;
_Bool _for_condtionalA6;
char* __exception_result_var_b130;
struct sClass* default_value_98;
void* __exception_result_var_b131;
struct sClass* __exception_result_var_b134;
struct sClass* it2_101;
unsigned int __exception_result_var_b135;
unsigned int hash_102;
int n_103;
_Bool _while_condtional13;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
int __exception_result_var_b136;
struct sClass* default_value_104;
struct sClass* __exception_result_var_b137;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_88, 0, sizeof(int));
memset(&right_value91, 0, sizeof(void*));
memset(&keys_89, 0, sizeof(char**));
memset(&right_value92, 0, sizeof(void*));
memset(&items_90, 0, sizeof(struct sClass**));
memset(&right_value93, 0, sizeof(void*));
memset(&item_existance_91, 0, sizeof(_Bool*));
memset(&len_92, 0, sizeof(int));
memset(&it_95, 0, sizeof(char*));
memset(&default_value_98, 0, sizeof(struct sClass*));
memset(&it2_101, 0, sizeof(struct sClass*));
memset(&hash_102, 0, sizeof(unsigned int));
memset(&n_103, 0, sizeof(int));
memset(&default_value_104, 0, sizeof(struct sClass*));
                    size_88=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1378))->size*10;
                    keys_89=(char**)come_increment_ref_count(((char**)(right_value91=(char**)come_calloc(1, sizeof(char*)*(1*(size_88)), "./comelang2.h", 1379, "char*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value91;
                    __freed_obj__ = 0;
                    items_90=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value92=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_88)), "./comelang2.h", 1380, "struct sClass*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92);
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value92;
                    __freed_obj__ = 0;
                    item_existance_91=(_Bool*)come_increment_ref_count(((_Bool*)(right_value93=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_88)), "./comelang2.h", 1381, "_Bool"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value93);
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value93;
                    __freed_obj__ = 0;
                    len_92=0;
                    for(
                    it_95=(come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b126=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1385))), come_pop_stackframe(), __exception_result_var_b126) ,                    0;                    _for_condtionalA6=                    !(come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b127=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1385))), come_pop_stackframe(), __exception_result_var_b127) ,                    _for_condtionalA6;                    it_95=(come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b130=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1385))), come_pop_stackframe(), __exception_result_var_b130) ,                    0                    ){
                        (come_push_stackframe("./comelang2.h", 1387),__exception_result_var_b131=memset(&default_value_98,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b131);
                        it2_101=(come_push_stackframe("./comelang2.h", 1388),__exception_result_var_b134=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1388)),it_95,default_value_98), come_pop_stackframe(), __exception_result_var_b134);
                        hash_102=(come_push_stackframe("./comelang2.h", 1389),__exception_result_var_b135=string_get_hash_key(((char*)come_null_check(it_95, "./comelang2.h", 1389))), come_pop_stackframe(), __exception_result_var_b135)%size_88;
                        n_103=hash_102;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional110=item_existance_91[n_103],                            _if_conditional110) {
                                n_103++;
                                if(_if_conditional111=n_103>=size_88,                                _if_conditional111) {
                                    n_103=0;
                                }
                                else {
                                    if(_if_conditional112=n_103==hash_102,                                    _if_conditional112) {
                                        (come_push_stackframe("./comelang2.h", 1401),__exception_result_var_b136=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b136);
                                        (come_push_stackframe("./comelang2.h", 1402),stackframe(),come_pop_stackframe());
                                        (come_push_stackframe("./comelang2.h", 1403),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                item_existance_91[n_103]=(_Bool)1;
                                keys_89[n_103]=it_95;
                                items_90[n_103]=(come_push_stackframe("./comelang2.h", 1410),__exception_result_var_b137=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1410)),it_95,default_value_104), come_pop_stackframe(), __exception_result_var_b137);
                                len_92++;
                                break;
                            }
                        }
                    }
                    (come_push_stackframe("./comelang2.h", 1418),come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1418))->items),come_pop_stackframe());
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1419))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1419))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1419))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    (come_push_stackframe("./comelang2.h", 1420),come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1420))->keys),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422))->keys=keys_89;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1423))->items=items_90;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->item_existance=item_existance_91;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1426))->size=size_88;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1427))->len=len_92;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
char* result_93;
void* __exception_result_var_b124;
char* __result60__;
_Bool _if_conditional103;
char* __result61__;
char* result_94;
void* __exception_result_var_b125;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_93, 0, sizeof(char*));
memset(&result_94, 0, sizeof(char*));
                        if(_if_conditional102=self==((void*)0),                        _if_conditional102) {
                            (come_push_stackframe("./comelang2.h", 1342),__exception_result_var_b124=memset(&result_93,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b124);
                            __result60__ = __result_obj__ = result_93;
                            return __result60__;
                        }
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->head;
                        if(_if_conditional103=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1347))->key_list, "./comelang2.h", 1347))->it,                        _if_conditional103) {
                            __result61__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1348))->key_list, "./comelang2.h", 1348))->it, "./comelang2.h", 1348))->item;
                            return __result61__;
                        }
                        (come_push_stackframe("./comelang2.h", 1352),__exception_result_var_b125=memset(&result_94,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b125);
                        __result62__ = __result_obj__ = result_94;
                        return __result62__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result63__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1374))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1374))->key_list, "./comelang2.h", 1374))->it==((void*)0);
                        return __result63__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
char* result_96;
void* __exception_result_var_b128;
char* __result64__;
_Bool _if_conditional105;
char* __result65__;
char* result_97;
void* __exception_result_var_b129;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_96, 0, sizeof(char*));
memset(&result_97, 0, sizeof(char*));
                        if(_if_conditional104=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1357))->key_list, "./comelang2.h", 1357))->it==((void*)0),                        _if_conditional104) {
                            (come_push_stackframe("./comelang2.h", 1359),__exception_result_var_b128=memset(&result_96,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b128);
                            __result64__ = __result_obj__ = result_96;
                            return __result64__;
                        }
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it, "./comelang2.h", 1362))->next;
                        if(_if_conditional105=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1364))->key_list, "./comelang2.h", 1364))->it,                        _if_conditional105) {
                            __result65__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it, "./comelang2.h", 1365))->item;
                            return __result65__;
                        }
                        (come_push_stackframe("./comelang2.h", 1369),__exception_result_var_b129=memset(&result_97,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b129);
                        __result66__ = __result_obj__ = result_97;
                        return __result66__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b132;
unsigned int hash_99;
unsigned int it_100;
_Bool _while_condtional12;
_Bool _if_conditional106;
void* right_value94;
struct optional$2boolbool* __exception_result_var_b133;
_Bool _if_conditional107;
struct sClass* __result67__;
_Bool _if_conditional108;
_Bool _if_conditional109;
struct sClass* __result68__;
struct sClass* __result69__;
struct sClass* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_99, 0, sizeof(unsigned int));
memset(&it_100, 0, sizeof(unsigned int));
memset(&right_value94, 0, sizeof(void*));
                            hash_99=(come_push_stackframe("./comelang2.h", 1267),__exception_result_var_b132=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1267))), come_pop_stackframe(), __exception_result_var_b132)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1267))->size;
                            it_100=hash_99;
                            while(_while_condtional12=(_Bool)1,                            _while_condtional12) {
                                if(_if_conditional106=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1271))->item_existance[it_100],                                _if_conditional106) {
                                    if(_if_conditional107=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1273),__exception_result_var_b133=((struct optional$2boolbool*)(right_value94=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1273))->keys[it_100], "./comelang2.h", 1273)),key))), come_pop_stackframe(), __exception_result_var_b133)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94),
                                    (right_value94 && right_value94 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value94, 
                                    __freed_obj__ = 0, 
                                    _if_conditional107) {
                                        __result67__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1275))->items[it_100];
                                        return __result67__;
                                    }
                                    it_100++;
                                    if(_if_conditional108=it_100>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1280))->size,                                    _if_conditional108) {
                                        it_100=0;
                                    }
                                    else {
                                        if(_if_conditional109=it_100==hash_99,                                        _if_conditional109) {
                                            __result68__ = __result_obj__ = default_value;
                                            return __result68__;
                                        }
                                    }
                                }
                                else {
                                    __result69__ = __result_obj__ = default_value;
                                    return __result69__;
                                }
                            }
                            __result70__ = __result_obj__ = default_value;
                            return __result70__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_107;
struct list_item$1charp* it_108;
_Bool _while_condtional15;
void* right_value96;
struct optional$2boolbool* __exception_result_var_b140;
_Bool _if_conditional116;
struct list$1charp* __exception_result_var_b142;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_107, 0, sizeof(int));
memset(&it_108, 0, sizeof(struct list_item$1charp*));
memset(&right_value96, 0, sizeof(void*));
                                it2_107=0;
                                it_108=((struct list$1charp*)come_null_check(self, "./comelang2.h", 501))->head;
                                while(_while_condtional15=it_108!=((void*)0),                                _while_condtional15) {
                                    if(_if_conditional116=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 503),__exception_result_var_b140=((struct optional$2boolbool*)(right_value96=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_108, "./comelang2.h", 503))->item, "./comelang2.h", 503)),item))), come_pop_stackframe(), __exception_result_var_b140)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96),
                                    (right_value96 && right_value96 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value96, 
                                    __freed_obj__ = 0, 
                                    _if_conditional116) {
                                        (come_push_stackframe("./comelang2.h", 504),__exception_result_var_b142=list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 504)),it2_107,it2_107+1), come_pop_stackframe(), __exception_result_var_b142);
                                        break;
                                    }
                                    it2_107++;
                                    it_108=((struct list_item$1charp*)come_null_check(it_108, "./comelang2.h", 509))->next;
                                }
                                __result74__ = __result_obj__ = self;
                                return __result74__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
int tmp_109;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct list$1charp* __result71__;
_Bool _if_conditional123;
struct list$1charp* __exception_result_var_b141;
_Bool _if_conditional124;
struct list_item$1charp* it_112;
int i_113;
_Bool _while_condtional17;
_Bool _if_conditional125;
struct list_item$1charp* prev_it_114;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct list_item$1charp* it_115;
int i_116;
_Bool _while_condtional18;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct list_item$1charp* prev_it_117;
struct list_item$1charp* it_118;
struct list_item$1charp* head_prev_it_119;
struct list_item$1charp* tail_it_120;
int i_121;
_Bool _while_condtional19;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
struct list_item$1charp* prev_it_122;
_Bool _if_conditional133;
_Bool _if_conditional134;
struct list$1charp* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_109, 0, sizeof(int));
memset(&it_112, 0, sizeof(struct list_item$1charp*));
memset(&i_113, 0, sizeof(int));
memset(&prev_it_114, 0, sizeof(struct list_item$1charp*));
memset(&it_115, 0, sizeof(struct list_item$1charp*));
memset(&i_116, 0, sizeof(int));
memset(&prev_it_117, 0, sizeof(struct list_item$1charp*));
memset(&it_118, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_119, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_120, 0, sizeof(struct list_item$1charp*));
memset(&i_121, 0, sizeof(int));
memset(&prev_it_122, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional117=head<0,                                            _if_conditional117) {
                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 517))->len;
                                            }
                                            if(_if_conditional118=tail<0,                                            _if_conditional118) {
                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 520))->len+1;
                                            }
                                            if(_if_conditional119=head>tail,                                            _if_conditional119) {
                                                tmp_109=tail;
                                                tail=head;
                                                head=tmp_109;
                                            }
                                            if(_if_conditional120=head<0,                                            _if_conditional120) {
                                                head=0;
                                            }
                                            if(_if_conditional121=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 533))->len,                                            _if_conditional121) {
                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 534))->len;
                                            }
                                            if(_if_conditional122=head==tail,                                            _if_conditional122) {
                                                __result71__ = __result_obj__ = self;
                                                return __result71__;
                                            }
                                            if(_if_conditional123=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 541))->len,                                            _if_conditional123) {
                                                (come_push_stackframe("./comelang2.h", 543),__exception_result_var_b141=list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 543))), come_pop_stackframe(), __exception_result_var_b141);
                                            }
                                            else {
                                                if(_if_conditional124=head==0,                                                _if_conditional124) {
                                                    it_112=((struct list$1charp*)come_null_check(self, "./comelang2.h", 546))->head;
                                                    i_113=0;
                                                    while(_while_condtional17=it_112!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional125=i_113<tail,                                                        _if_conditional125) {
                                                            prev_it_114=it_112;
                                                            it_112=((struct list_item$1charp*)come_null_check(it_112, "./comelang2.h", 552))->next;
                                                            i_113++;
                                                            if(prev_it_114 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 557))->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional126=i_113==tail,                                                            _if_conditional126) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 560))->head=it_112;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 561))->head, "./comelang2.h", 561))->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_112=((struct list_item$1charp*)come_null_check(it_112, "./comelang2.h", 565))->next;
                                                                i_113++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional127=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 570))->len,                                                    _if_conditional127) {
                                                        it_115=((struct list$1charp*)come_null_check(self, "./comelang2.h", 571))->head;
                                                        i_116=0;
                                                        while(_while_condtional18=it_115!=((void*)0),                                                        _while_condtional18) {
                                                            if(_if_conditional128=i_116==head,                                                            _if_conditional128) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 575))->tail=((struct list_item$1charp*)come_null_check(it_115, "./comelang2.h", 575))->prev;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 576))->tail, "./comelang2.h", 576))->next=((void*)0);
                                                            }
                                                            if(_if_conditional129=i_116>=head,                                                            _if_conditional129) {
                                                                prev_it_117=it_115;
                                                                it_115=((struct list_item$1charp*)come_null_check(it_115, "./comelang2.h", 582))->next;
                                                                i_116++;
                                                                if(prev_it_117 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->len--;
                                                            }
                                                            else {
                                                                it_115=((struct list_item$1charp*)come_null_check(it_115, "./comelang2.h", 590))->next;
                                                                i_116++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_118=((struct list$1charp*)come_null_check(self, "./comelang2.h", 596))->head;
                                                        head_prev_it_119=((void*)0);
                                                        tail_it_120=((void*)0);
                                                        i_121=0;
                                                        while(_while_condtional19=it_118!=((void*)0),                                                        _while_condtional19) {
                                                            if(_if_conditional130=i_121==head,                                                            _if_conditional130) {
                                                                head_prev_it_119=((struct list_item$1charp*)come_null_check(it_118, "./comelang2.h", 605))->prev;
                                                            }
                                                            if(_if_conditional131=i_121==tail,                                                            _if_conditional131) {
                                                                tail_it_120=it_118;
                                                            }
                                                            if(_if_conditional132=i_121>=head&&i_121<tail,                                                            _if_conditional132) {
                                                                prev_it_122=it_118;
                                                                it_118=((struct list_item$1charp*)come_null_check(it_118, "./comelang2.h", 615))->next;
                                                                i_121++;
                                                                if(prev_it_122 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 620))->len--;
                                                            }
                                                            else {
                                                                it_118=((struct list_item$1charp*)come_null_check(it_118, "./comelang2.h", 623))->next;
                                                                i_121++;
                                                            }
                                                        }
                                                        if(_if_conditional133=head_prev_it_119!=((void*)0),                                                        _if_conditional133) {
                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_119, "./comelang2.h", 629))->next=tail_it_120;
                                                        }
                                                        if(_if_conditional134=tail_it_120!=((void*)0),                                                        _if_conditional134) {
                                                            ((struct list_item$1charp*)come_null_check(tail_it_120, "./comelang2.h", 632))->prev=head_prev_it_119;
                                                        }
                                                    }
                                                }
                                            }
                                            __result73__ = __result_obj__ = self;
                                            return __result73__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_110;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_111;
struct list$1charp* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_110, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*));
                                                    it_110=((struct list$1charp*)come_null_check(self, "./comelang2.h", 485))->head;
                                                    while(_while_condtional16=it_110!=((void*)0),                                                    _while_condtional16) {
                                                        prev_it_111=it_110;
                                                        it_110=((struct list_item$1charp*)come_null_check(it_110, "./comelang2.h", 488))->next;
                                                        if(prev_it_111 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_111, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head=((void*)0);
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 493))->tail=((void*)0);
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 495))->len=0;
                                                    __result72__ = __result_obj__ = self;
                                                    return __result72__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
char* result_124;
void* __exception_result_var_b146;
char* __result75__;
_Bool _if_conditional141;
char* __result76__;
char* result_125;
void* __exception_result_var_b147;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                if(_if_conditional140=self==((void*)0),                _if_conditional140) {
                    (come_push_stackframe("./comelang2.h", 342),__exception_result_var_b146=memset(&result_124,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b146);
                    __result75__ = __result_obj__ = result_124;
                    return __result75__;
                }
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 345))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 345))->head;
                if(_if_conditional141=((struct list$1charp*)come_null_check(self, "./comelang2.h", 347))->it,                _if_conditional141) {
                    __result76__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 348))->it, "./comelang2.h", 348))->item;
                    return __result76__;
                }
                (come_push_stackframe("./comelang2.h", 352),__exception_result_var_b147=memset(&result_125,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b147);
                __result77__ = __result_obj__ = result_125;
                return __result77__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result78__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 375))->it==((void*)0);
                return __result78__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
char* result_127;
void* __exception_result_var_b150;
char* __result79__;
_Bool _if_conditional143;
char* __result80__;
char* result_128;
void* __exception_result_var_b151;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_127, 0, sizeof(char*));
memset(&result_128, 0, sizeof(char*));
                if(_if_conditional142=self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it==((void*)0),                _if_conditional142) {
                    (come_push_stackframe("./comelang2.h", 359),__exception_result_var_b150=memset(&result_127,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b150);
                    __result79__ = __result_obj__ = result_127;
                    return __result79__;
                }
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 363))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 363))->it, "./comelang2.h", 363))->next;
                if(_if_conditional143=((struct list$1charp*)come_null_check(self, "./comelang2.h", 365))->it,                _if_conditional143) {
                    __result80__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it, "./comelang2.h", 366))->item;
                    return __result80__;
                }
                (come_push_stackframe("./comelang2.h", 370),__exception_result_var_b151=memset(&result_128,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b151);
                __result81__ = __result_obj__ = result_128;
                return __result81__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional146;
void* right_value98;
struct list_item$1charp* litem_129;
_Bool _if_conditional147;
void* right_value99;
struct list_item$1charp* litem_130;
void* right_value100;
struct list_item$1charp* litem_131;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_129, 0, sizeof(struct list_item$1charp*));
memset(&right_value99, 0, sizeof(void*));
memset(&litem_130, 0, sizeof(struct list_item$1charp*));
memset(&right_value100, 0, sizeof(void*));
memset(&litem_131, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional146=((struct list$1charp*)come_null_check(self, "./comelang2.h", 280))->len==0,                    _if_conditional146) {
                        litem_129=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 281, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value98;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_129, "./comelang2.h", 283))->prev=((void*)0);
                        ((struct list_item$1charp*)come_null_check(litem_129, "./comelang2.h", 284))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(litem_129, "./comelang2.h", 285))->item=item;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 287))->tail=litem_129;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->head=litem_129;
                    }
                    else {
                        if(_if_conditional147=((struct list$1charp*)come_null_check(self, "./comelang2.h", 290))->len==1,                        _if_conditional147) {
                            litem_130=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 291, "struct list_item$1charp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value99;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_130, "./comelang2.h", 293))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 293))->head;
                            ((struct list_item$1charp*)come_null_check(litem_130, "./comelang2.h", 294))->next=((void*)0);
                            ((struct list_item$1charp*)come_null_check(litem_130, "./comelang2.h", 295))->item=item;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 297))->tail=litem_130;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->head, "./comelang2.h", 298))->next=litem_130;
                        }
                        else {
                            litem_131=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value100=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 301, "struct list_item$1charp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value100;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_131, "./comelang2.h", 303))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 303))->tail;
                            ((struct list_item$1charp*)come_null_check(litem_131, "./comelang2.h", 304))->next=((void*)0);
                            ((struct list_item$1charp*)come_null_check(litem_131, "./comelang2.h", 305))->item=item;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 307))->tail, "./comelang2.h", 307))->next=litem_131;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 308))->tail=litem_131;
                        }
                    }
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 311))->len++;
                    __result82__ = __result_obj__ = self;
                    return __result82__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value142;
struct sType* __dec_obj49;
struct tuple1$1sTypeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value142, 0, sizeof(void*));
        __dec_obj49=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1784))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1784))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(v1))));
        if(__dec_obj49) { come_call_finalizer(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value142;
        __freed_obj__ = 0;
        __result105__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result105__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
struct sType* __result84__;
void* right_value104;
struct sType* result_132;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value107;
struct tuple1$1sTypeph* __dec_obj26;
_Bool _if_conditional154;
void* right_value110;
struct tuple1$1sTypeph* __dec_obj28;
_Bool _if_conditional157;
void* right_value111;
char* __dec_obj29;
_Bool _if_conditional158;
void* right_value118;
struct list$1sTypeph* __dec_obj33;
_Bool _if_conditional162;
void* right_value126;
struct list$1sNodeph* __dec_obj37;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value127;
struct list$1sTypeph* __dec_obj38;
_Bool _if_conditional177;
void* right_value134;
struct list$1charph* __dec_obj42;
_Bool _if_conditional181;
void* right_value137;
struct tuple1$1sTypeph* __dec_obj44;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value138;
struct sNode* __dec_obj45;
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
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value139;
struct sNode* __dec_obj46;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value140;
char* __dec_obj47;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value141;
char* __dec_obj48;
struct sType* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value104, 0, sizeof(void*));
memset(&result_132, 0, sizeof(struct sType*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
            if(_if_conditional148=self==(void*)0,            _if_conditional148) {
                __result84__ = __result_obj__ = (void*)0;
                return __result84__;
            }
            result_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value104;
            __freed_obj__ = 0;
            if(_if_conditional149=self!=((void*)0),            _if_conditional149) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            }
            if(_if_conditional150=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType!=((void*)0),            _if_conditional150) {
                __dec_obj26=((struct sType*)come_null_check(result_132, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_132, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value107=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj26) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107;
                __freed_obj__ = 0;
            }
            if(_if_conditional154=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType!=((void*)0),            _if_conditional154) {
                __dec_obj28=((struct sType*)come_null_check(result_132, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_132, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj28) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value110;
                __freed_obj__ = 0;
            }
            if(_if_conditional157=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName!=((void*)0),            _if_conditional157) {
                __dec_obj29=((struct sType*)come_null_check(result_132, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_132, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value111=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value111;
                __freed_obj__ = 0;
            }
            if(_if_conditional158=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes!=((void*)0),            _if_conditional158) {
                __dec_obj33=((struct sType*)come_null_check(result_132, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_132, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value118=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj33) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value118;
                __freed_obj__ = 0;
            }
            if(_if_conditional162=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum!=((void*)0),            _if_conditional162) {
                __dec_obj37=((struct sType*)come_null_check(result_132, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_132, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value126=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj37) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value126;
                __freed_obj__ = 0;
            }
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            }
            if(_if_conditional176=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes!=((void*)0),            _if_conditional176) {
                __dec_obj38=((struct sType*)come_null_check(result_132, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_132, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value127=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj38) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value127;
                __freed_obj__ = 0;
            }
            if(_if_conditional177=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames!=((void*)0),            _if_conditional177) {
                __dec_obj42=((struct sType*)come_null_check(result_132, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_132, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj42) { come_call_finalizer(list$1charph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value134;
                __freed_obj__ = 0;
            }
            if(_if_conditional181=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType!=((void*)0),            _if_conditional181) {
                __dec_obj44=((struct sType*)come_null_check(result_132, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_132, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value137=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj44) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value137;
                __freed_obj__ = 0;
            }
            if(_if_conditional184=self!=((void*)0),            _if_conditional184) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            }
            if(_if_conditional185=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas!=((void*)0),            _if_conditional185) {
                __dec_obj45=((struct sType*)come_null_check(result_132, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_132, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value138;
                __freed_obj__ = 0;
            }
            if(_if_conditional186=self!=((void*)0),            _if_conditional186) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            }
            if(_if_conditional187=self!=((void*)0),            _if_conditional187) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            }
            if(_if_conditional188=self!=((void*)0),            _if_conditional188) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            }
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            }
            if(_if_conditional190=self!=((void*)0),            _if_conditional190) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            }
            if(_if_conditional191=self!=((void*)0),            _if_conditional191) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            }
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            }
            if(_if_conditional193=self!=((void*)0),            _if_conditional193) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            }
            if(_if_conditional194=self!=((void*)0),            _if_conditional194) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            }
            if(_if_conditional195=self!=((void*)0),            _if_conditional195) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            }
            if(_if_conditional196=self!=((void*)0),            _if_conditional196) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            }
            if(_if_conditional197=self!=((void*)0),            _if_conditional197) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            }
            if(_if_conditional198=self!=((void*)0),            _if_conditional198) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            }
            if(_if_conditional199=self!=((void*)0),            _if_conditional199) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            }
            if(_if_conditional200=self!=((void*)0),            _if_conditional200) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            }
            if(_if_conditional201=self!=((void*)0),            _if_conditional201) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            }
            if(_if_conditional202=self!=((void*)0),            _if_conditional202) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            }
            if(_if_conditional203=self!=((void*)0),            _if_conditional203) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            }
            if(_if_conditional204=self!=((void*)0),            _if_conditional204) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            }
            if(_if_conditional205=self!=((void*)0),            _if_conditional205) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            }
            if(_if_conditional206=self!=((void*)0),            _if_conditional206) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            }
            if(_if_conditional207=self!=((void*)0),            _if_conditional207) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional208=self!=((void*)0),            _if_conditional208) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            }
            if(_if_conditional209=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum!=((void*)0),            _if_conditional209) {
                __dec_obj46=((struct sType*)come_null_check(result_132, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_132, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value139=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value139;
                __freed_obj__ = 0;
            }
            if(_if_conditional210=self!=((void*)0),            _if_conditional210) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            }
            if(_if_conditional211=self!=((void*)0),            _if_conditional211) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            }
            if(_if_conditional212=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName!=((void*)0),            _if_conditional212) {
                __dec_obj47=((struct sType*)come_null_check(result_132, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_132, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value140=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value140;
                __freed_obj__ = 0;
            }
            if(_if_conditional213=self!=((void*)0),            _if_conditional213) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            }
            if(_if_conditional214=self!=((void*)0),            _if_conditional214) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            }
            if(_if_conditional215=self!=((void*)0),            _if_conditional215) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            }
            if(_if_conditional216=self!=((void*)0),            _if_conditional216) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            }
            if(_if_conditional217=self!=((void*)0),            _if_conditional217) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            }
            if(_if_conditional218=self!=((void*)0),            _if_conditional218) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            }
            if(_if_conditional219=self!=((void*)0),            _if_conditional219) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            }
            if(_if_conditional220=self!=((void*)0),            _if_conditional220) {
                ((struct sType*)come_null_check(result_132, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            }
            if(_if_conditional221=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName!=((void*)0),            _if_conditional221) {
                __dec_obj48=((struct sType*)come_null_check(result_132, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_132, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value141=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value141;
                __freed_obj__ = 0;
            }
            __result104__ = __result_obj__ = result_132;
            if(result_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_132, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result104__;
            if(result_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_132, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional152=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1!=((void*)0),                        _if_conditional152) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional159;
struct list$1sTypeph* __result89__;
void* right_value112;
void* right_value113;
struct list$1sTypeph* __exception_result_var_b159;
struct list$1sTypeph* result_135;
struct list_item$1sTypeph* it_136;
_Bool _while_condtional20;
void* right_value117;
struct list$1sTypeph* __exception_result_var_b160;
struct list$1sTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&result_135, 0, sizeof(struct list$1sTypeph*));
memset(&it_136, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value117, 0, sizeof(void*));
                    if(_if_conditional159=self==((void*)0),                    _if_conditional159) {
                        __result89__ = __result_obj__ = ((void*)0);
                        return __result89__;
                    }
                    result_135=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 197),__exception_result_var_b159=((struct list$1sTypeph*)(right_value113=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value112=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 197, "struct list$1sTypeph"))), "./comelang2.h", 197)))))), come_pop_stackframe(), __exception_result_var_b159));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value112;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value113);
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value113;
                    __freed_obj__ = 0;
                    it_136=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 199))->head;
                    while(_while_condtional20=it_136!=((void*)0),                    _while_condtional20) {
                        (come_push_stackframe("./comelang2.h", 201),__exception_result_var_b160=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_135, "./comelang2.h", 201)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_136, "./comelang2.h", 201))->item))))), come_pop_stackframe(), __exception_result_var_b160);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value117;
                        __freed_obj__ = 0;
                        it_136=((struct list_item$1sTypeph*)come_null_check(it_136, "./comelang2.h", 203))->next;
                    }
                    __result92__ = __result_obj__ = result_135;
                    if(result_135 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_135, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result92__;
                    if(result_135 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_135, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 161))->len=0;
                        __result90__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result90__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional160;
void* right_value114;
struct list_item$1sTypeph* litem_137;
struct sType* __dec_obj30;
_Bool _if_conditional161;
void* right_value115;
struct list_item$1sTypeph* litem_138;
struct sType* __dec_obj31;
void* right_value116;
struct list_item$1sTypeph* litem_139;
struct sType* __dec_obj32;
struct list$1sTypeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_137, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value115, 0, sizeof(void*));
memset(&litem_138, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value116, 0, sizeof(void*));
memset(&litem_139, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional160=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 210))->len==0,                            _if_conditional160) {
                                litem_137=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value114=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 211, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value114;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_137, "./comelang2.h", 213))->prev=((void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(litem_137, "./comelang2.h", 214))->next=((void*)0);
                                __dec_obj30=((struct list_item$1sTypeph*)come_null_check(litem_137, "./comelang2.h", 215))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_137, "./comelang2.h", 215))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 217))->tail=litem_137;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->head=litem_137;
                            }
                            else {
                                if(_if_conditional161=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 220))->len==1,                                _if_conditional161) {
                                    litem_138=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value115=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 221, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value115;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_138, "./comelang2.h", 223))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 223))->head;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_138, "./comelang2.h", 224))->next=((void*)0);
                                    __dec_obj31=((struct list_item$1sTypeph*)come_null_check(litem_138, "./comelang2.h", 225))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_138, "./comelang2.h", 225))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 227))->tail=litem_138;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->head, "./comelang2.h", 228))->next=litem_138;
                                }
                                else {
                                    litem_139=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value116=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 231, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value116;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_139, "./comelang2.h", 233))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 233))->tail;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_139, "./comelang2.h", 234))->next=((void*)0);
                                    __dec_obj32=((struct list_item$1sTypeph*)come_null_check(litem_139, "./comelang2.h", 235))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_139, "./comelang2.h", 235))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->tail, "./comelang2.h", 237))->next=litem_139;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 238))->tail=litem_139;
                                }
                            }
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 241))->len++;
                            __result91__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result91__;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
struct list$1sNodeph* __result93__;
void* right_value119;
void* right_value120;
struct list$1sNodeph* __exception_result_var_b161;
struct list$1sNodeph* result_140;
struct list_item$1sNodeph* it_141;
_Bool _while_condtional21;
void* right_value125;
struct list$1sNodeph* __exception_result_var_b162;
struct list$1sNodeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct list$1sNodeph*));
memset(&it_141, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value125, 0, sizeof(void*));
                    if(_if_conditional163=self==((void*)0),                    _if_conditional163) {
                        __result93__ = __result_obj__ = ((void*)0);
                        return __result93__;
                    }
                    result_140=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 197),__exception_result_var_b161=((struct list$1sNodeph*)(right_value120=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value119=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 197, "struct list$1sNodeph"))), "./comelang2.h", 197)))))), come_pop_stackframe(), __exception_result_var_b161));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value119;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value120);
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value120;
                    __freed_obj__ = 0;
                    it_141=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 199))->head;
                    while(_while_condtional21=it_141!=((void*)0),                    _while_condtional21) {
                        (come_push_stackframe("./comelang2.h", 201),__exception_result_var_b162=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_140, "./comelang2.h", 201)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_141, "./comelang2.h", 201))->item))))), come_pop_stackframe(), __exception_result_var_b162);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value125;
                        __freed_obj__ = 0;
                        it_141=((struct list_item$1sNodeph*)come_null_check(it_141, "./comelang2.h", 203))->next;
                    }
                    __result98__ = __result_obj__ = result_140;
                    if(result_140 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_140, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result98__;
                    if(result_140 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_140, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 161))->len=0;
                        __result94__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result94__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional164;
void* right_value121;
struct list_item$1sNodeph* litem_142;
struct sNode* __dec_obj34;
_Bool _if_conditional165;
void* right_value122;
struct list_item$1sNodeph* litem_143;
struct sNode* __dec_obj35;
void* right_value123;
struct list_item$1sNodeph* litem_144;
struct sNode* __dec_obj36;
struct list$1sNodeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&litem_142, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value122, 0, sizeof(void*));
memset(&litem_143, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value123, 0, sizeof(void*));
memset(&litem_144, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional164=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 210))->len==0,                            _if_conditional164) {
                                litem_142=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value121=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 211, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                                if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value121;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_142, "./comelang2.h", 213))->prev=((void*)0);
                                ((struct list_item$1sNodeph*)come_null_check(litem_142, "./comelang2.h", 214))->next=((void*)0);
                                __dec_obj34=((struct list_item$1sNodeph*)come_null_check(litem_142, "./comelang2.h", 215))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_142, "./comelang2.h", 215))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0); }
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 217))->tail=litem_142;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->head=litem_142;
                            }
                            else {
                                if(_if_conditional165=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 220))->len==1,                                _if_conditional165) {
                                    litem_143=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value122=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 221, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value122;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_143, "./comelang2.h", 223))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 223))->head;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_143, "./comelang2.h", 224))->next=((void*)0);
                                    __dec_obj35=((struct list_item$1sNodeph*)come_null_check(litem_143, "./comelang2.h", 225))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_143, "./comelang2.h", 225))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0); }
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 227))->tail=litem_143;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->head, "./comelang2.h", 228))->next=litem_143;
                                }
                                else {
                                    litem_144=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value123=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 231, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value123;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_144, "./comelang2.h", 233))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 233))->tail;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_144, "./comelang2.h", 234))->next=((void*)0);
                                    __dec_obj36=((struct list_item$1sNodeph*)come_null_check(litem_144, "./comelang2.h", 235))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_144, "./comelang2.h", 235))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0); }
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->tail, "./comelang2.h", 237))->next=litem_144;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 238))->tail=litem_144;
                                }
                            }
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 241))->len++;
                            __result95__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            return __result95__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional166;
struct sNode* __result96__;
void* right_value124;
struct sNode* result_145;
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value124, 0, sizeof(void*));
memset(&result_145, 0, sizeof(struct sNode*));
                            if(_if_conditional166=self==(void*)0,                            _if_conditional166) {
                                __result96__ = __result_obj__ = (void*)0;
                                return __result96__;
                            }
                            result_145=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value124;
                            __freed_obj__ = 0;
                            if(_if_conditional167=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone!=((void*)0),                            _if_conditional167) {
                                ((struct sNode*)come_null_check(result_145, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            }
                            if(_if_conditional168=self!=((void*)0),                            _if_conditional168) {
                                ((struct sNode*)come_null_check(result_145, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            }
                            if(_if_conditional169=self!=((void*)0),                            _if_conditional169) {
                                ((struct sNode*)come_null_check(result_145, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            }
                            if(_if_conditional170=self!=((void*)0),                            _if_conditional170) {
                                ((struct sNode*)come_null_check(result_145, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            }
                            if(_if_conditional171=self!=((void*)0),                            _if_conditional171) {
                                ((struct sNode*)come_null_check(result_145, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            }
                            if(_if_conditional172=self!=((void*)0),                            _if_conditional172) {
                                ((struct sNode*)come_null_check(result_145, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            }
                            if(_if_conditional173=self!=((void*)0),                            _if_conditional173) {
                                ((struct sNode*)come_null_check(result_145, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            }
                            if(_if_conditional174=self!=((void*)0),                            _if_conditional174) {
                                ((struct sNode*)come_null_check(result_145, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                            }
                            __result97__ = __result_obj__ = result_145;
                            if(result_145 && !__freed_obj__) { result_145 = come_decrement_ref_count(result_145, ((struct sNode*)result_145)->finalize, ((struct sNode*)result_145)->_protocol_obj, 0, 1, 0); } 
                            return __result97__;
                            if(result_145 && !__freed_obj__) { result_145 = come_decrement_ref_count(result_145, ((struct sNode*)result_145)->finalize, ((struct sNode*)result_145)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
struct list$1charph* __result99__;
void* right_value128;
void* right_value129;
struct list$1charph* __exception_result_var_b163;
struct list$1charph* result_146;
struct list_item$1charph* it_147;
_Bool _while_condtional22;
void* right_value133;
struct list$1charph* __exception_result_var_b164;
struct list$1charph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&result_146, 0, sizeof(struct list$1charph*));
memset(&it_147, 0, sizeof(struct list_item$1charph*));
memset(&right_value133, 0, sizeof(void*));
                    if(_if_conditional178=self==((void*)0),                    _if_conditional178) {
                        __result99__ = __result_obj__ = ((void*)0);
                        return __result99__;
                    }
                    result_146=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 197),__exception_result_var_b163=((struct list$1charph*)(right_value129=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value128=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 197, "struct list$1charph"))), "./comelang2.h", 197)))))), come_pop_stackframe(), __exception_result_var_b163));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value128;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value129);
                    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value129;
                    __freed_obj__ = 0;
                    it_147=((struct list$1charph*)come_null_check(self, "./comelang2.h", 199))->head;
                    while(_while_condtional22=it_147!=((void*)0),                    _while_condtional22) {
                        (come_push_stackframe("./comelang2.h", 201),__exception_result_var_b164=list$1charph_add(((struct list$1charph*)come_null_check(result_146, "./comelang2.h", 201)),(char*)come_increment_ref_count(((char*)(right_value133=string_clone(((struct list_item$1charph*)come_null_check(it_147, "./comelang2.h", 201))->item))))), come_pop_stackframe(), __exception_result_var_b164);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value133;
                        __freed_obj__ = 0;
                        it_147=((struct list_item$1charph*)come_null_check(it_147, "./comelang2.h", 203))->next;
                    }
                    __result101__ = __result_obj__ = result_146;
                    if(result_146 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_146, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result101__;
                    if(result_146 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_146, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional179;
void* right_value130;
struct list_item$1charph* litem_148;
char* __dec_obj39;
_Bool _if_conditional180;
void* right_value131;
struct list_item$1charph* litem_149;
char* __dec_obj40;
void* right_value132;
struct list_item$1charph* litem_150;
char* __dec_obj41;
struct list$1charph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value130, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
memset(&right_value131, 0, sizeof(void*));
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
memset(&right_value132, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional179=((struct list$1charph*)come_null_check(self, "./comelang2.h", 210))->len==0,                            _if_conditional179) {
                                litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value130=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 211, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value130;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_148, "./comelang2.h", 213))->prev=((void*)0);
                                ((struct list_item$1charph*)come_null_check(litem_148, "./comelang2.h", 214))->next=((void*)0);
                                __dec_obj39=((struct list_item$1charph*)come_null_check(litem_148, "./comelang2.h", 215))->item;
                                ((struct list_item$1charph*)come_null_check(litem_148, "./comelang2.h", 215))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 217))->tail=litem_148;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->head=litem_148;
                            }
                            else {
                                if(_if_conditional180=((struct list$1charph*)come_null_check(self, "./comelang2.h", 220))->len==1,                                _if_conditional180) {
                                    litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value131=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 221, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value131;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_149, "./comelang2.h", 223))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 223))->head;
                                    ((struct list_item$1charph*)come_null_check(litem_149, "./comelang2.h", 224))->next=((void*)0);
                                    __dec_obj40=((struct list_item$1charph*)come_null_check(litem_149, "./comelang2.h", 225))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_149, "./comelang2.h", 225))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 227))->tail=litem_149;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->head, "./comelang2.h", 228))->next=litem_149;
                                }
                                else {
                                    litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value132=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 231, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                                    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value132;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_150, "./comelang2.h", 233))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 233))->tail;
                                    ((struct list_item$1charph*)come_null_check(litem_150, "./comelang2.h", 234))->next=((void*)0);
                                    __dec_obj41=((struct list_item$1charph*)come_null_check(litem_150, "./comelang2.h", 235))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_150, "./comelang2.h", 235))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->tail, "./comelang2.h", 237))->next=litem_150;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 238))->tail=litem_150;
                                }
                            }
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 241))->len++;
                            __result100__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result100__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
struct tuple1$1sTypeph* __result102__;
void* right_value135;
struct tuple1$1sTypeph* result_151;
_Bool _if_conditional183;
void* right_value136;
struct sType* __dec_obj43;
struct tuple1$1sTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value135, 0, sizeof(void*));
memset(&result_151, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value136, 0, sizeof(void*));
                    if(_if_conditional182=self==(void*)0,                    _if_conditional182) {
                        __result102__ = __result_obj__ = (void*)0;
                        return __result102__;
                    }
                    result_151=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value135=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value135;
                    __freed_obj__ = 0;
                    if(_if_conditional183=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1!=((void*)0),                    _if_conditional183) {
                        __dec_obj43=((struct tuple1$1sTypeph*)come_null_check(result_151, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_151, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value136;
                        __freed_obj__ = 0;
                    }
                    __result103__ = __result_obj__ = result_151;
                    if(result_151 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_151, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result103__;
                    if(result_151 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_151, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value155;
char* __exception_result_var_b172;
char* __dec_obj59;
void* right_value156;
void* right_value157;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b173;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
void* right_value158;
char* __exception_result_var_b174;
char* __dec_obj61;
struct sClass* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
    ((struct sClass*)come_null_check(self, "02transpile.c", 368))->mNumber=number;
    ((struct sClass*)come_null_check(self, "02transpile.c", 369))->mStruct=struct_;
    ((struct sClass*)come_null_check(self, "02transpile.c", 370))->mUnion=union_;
    ((struct sClass*)come_null_check(self, "02transpile.c", 371))->mGenerics=generics;
    ((struct sClass*)come_null_check(self, "02transpile.c", 372))->mMethodGenerics=method_generics;
    ((struct sClass*)come_null_check(self, "02transpile.c", 373))->mEnum=(_Bool)0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 374))->mProtocol=protocol_;
    ((struct sClass*)come_null_check(self, "02transpile.c", 375))->mFloat=float_;
    ((struct sClass*)come_null_check(self, "02transpile.c", 376))->mEnum=enum_;
    __dec_obj59=((struct sClass*)come_null_check(self, "02transpile.c", 378))->mName;
    ((struct sClass*)come_null_check(self, "02transpile.c", 378))->mName=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 378),__exception_result_var_b172=((char*)(right_value155=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b172));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value155;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 380))->mGenericsNum=generics_num;
    ((struct sClass*)come_null_check(self, "02transpile.c", 381))->mMethodGenericsNum=method_generics_num;
    __dec_obj60=((struct sClass*)come_null_check(self, "02transpile.c", 383))->mFields;
    ((struct sClass*)come_null_check(self, "02transpile.c", 383))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 383),__exception_result_var_b173=((struct list$1tuple2$2charphsTypephph*)(right_value157=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value156=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02transpile.c", 383, "struct list$1tuple2$2charphsTypephph"))))))), come_pop_stackframe(), __exception_result_var_b173));
    if(__dec_obj60) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value156;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value157;
    __freed_obj__ = 0;
    __dec_obj61=((struct sClass*)come_null_check(self, "02transpile.c", 385))->mDeclareSName;
    ((struct sClass*)come_null_check(self, "02transpile.c", 385))->mDeclareSName=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 385),__exception_result_var_b174=((char*)(right_value158=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 385))->sname))), come_pop_stackframe(), __exception_result_var_b174));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value158;
    __freed_obj__ = 0;
    __result108__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result108__;
    if(self && !__freed_obj__) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 161))->len=0;
        __result107__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result107__;
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
char* __dec_obj62;
struct sType* __dec_obj63;
struct list$1sTypeph* __dec_obj64;
struct list$1charph* __dec_obj65;
struct list$1charph* __dec_obj66;
void* right_value159;
void* right_value160;
struct sType* __exception_result_var_b175;
struct sType* __dec_obj67;
struct list$1sTypeph* o2_saved_152;
struct sType* __exception_result_var_b178;
struct sType* it_155;
_Bool __exception_result_var_b179;
_Bool _for_condtionalA8;
struct sType* __exception_result_var_b182;
void* right_value164;
struct list$1sTypeph* __exception_result_var_b183;
struct list$1charph* o2_saved_161;
char* __exception_result_var_b184;
char* it_162;
_Bool __exception_result_var_b185;
_Bool _for_condtionalA9;
char* __exception_result_var_b186;
void* right_value165;
struct list$1charph* __exception_result_var_b187;
void* right_value166;
void* right_value167;
struct tuple1$1sTypeph* __exception_result_var_b188;
struct tuple1$1sTypeph* __dec_obj71;
void* right_value168;
void* right_value169;
struct buffer* __exception_result_var_b189;
struct buffer* __dec_obj72;
void* right_value170;
void* right_value171;
struct buffer* __exception_result_var_b190;
struct buffer* __dec_obj73;
void* right_value172;
void* right_value173;
struct buffer* __exception_result_var_b191;
struct buffer* __dec_obj74;
void* right_value174;
void* right_value175;
struct buffer* __exception_result_var_b192;
struct buffer* __dec_obj75;
void* right_value192;
struct sBlock* __dec_obj79;
char* __dec_obj80;
void* right_value193;
char* __exception_result_var_b226;
char* __dec_obj81;
struct sFun* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&o2_saved_152, 0, sizeof(struct list$1sTypeph*));
memset(&it_155, 0, sizeof(struct sType*));
memset(&right_value164, 0, sizeof(void*));
memset(&o2_saved_161, 0, sizeof(struct list$1charph*));
memset(&it_162, 0, sizeof(char*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    __dec_obj62=((struct sFun*)come_null_check(self, "02transpile.c", 392))->mName;
    ((struct sFun*)come_null_check(self, "02transpile.c", 392))->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
    __dec_obj63=((struct sFun*)come_null_check(self, "02transpile.c", 393))->mResultType;
    ((struct sFun*)come_null_check(self, "02transpile.c", 393))->mResultType=(struct sType*)come_increment_ref_count(result_type);
    if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj64=((struct sFun*)come_null_check(self, "02transpile.c", 394))->mParamTypes;
    ((struct sFun*)come_null_check(self, "02transpile.c", 394))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    if(__dec_obj64) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj65=((struct sFun*)come_null_check(self, "02transpile.c", 395))->mParamNames;
    ((struct sFun*)come_null_check(self, "02transpile.c", 395))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    if(__dec_obj65) { come_call_finalizer(list$1charph_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj66=((struct sFun*)come_null_check(self, "02transpile.c", 396))->mParamDefaultParametors;
    ((struct sFun*)come_null_check(self, "02transpile.c", 396))->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    if(__dec_obj66) { come_call_finalizer(list$1charph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
    ((struct sFun*)come_null_check(self, "02transpile.c", 397))->mExternal=external;
    ((struct sFun*)come_null_check(self, "02transpile.c", 398))->mVarArgs=var_args;
    ((struct sFun*)come_null_check(self, "02transpile.c", 399))->mStatic=static_;
    __dec_obj67=((struct sFun*)come_null_check(self, "02transpile.c", 401))->mLambdaType;
    ((struct sFun*)come_null_check(self, "02transpile.c", 401))->mLambdaType=(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 401),__exception_result_var_b175=((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value159=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 401, "struct sType")))),"lambda",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b175));
    if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value159;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value160;
    __freed_obj__ = 0;
    for(
    o2_saved_152=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_155=(come_push_stackframe("02transpile.c", 403),__exception_result_var_b178=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_152), "02transpile.c", 403))), come_pop_stackframe(), __exception_result_var_b178) ,    0;    _for_condtionalA8=    !(come_push_stackframe("02transpile.c", 403),__exception_result_var_b179=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_152), "02transpile.c", 403))), come_pop_stackframe(), __exception_result_var_b179) ,    _for_condtionalA8;    it_155=(come_push_stackframe("02transpile.c", 403),__exception_result_var_b182=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_152), "02transpile.c", 403))), come_pop_stackframe(), __exception_result_var_b182) ,    0    ){
        (come_push_stackframe("02transpile.c", 404),__exception_result_var_b183=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 404))->mLambdaType, "02transpile.c", 404))->mParamTypes, "02transpile.c", 404)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(it_155))))), come_pop_stackframe(), __exception_result_var_b183);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value164;
        __freed_obj__ = 0;
    }
    if(o2_saved_152 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    for(
    o2_saved_161=(struct list$1charph*)come_increment_ref_count((param_names)),it_162=(come_push_stackframe("02transpile.c", 407),__exception_result_var_b184=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_161), "02transpile.c", 407))), come_pop_stackframe(), __exception_result_var_b184) ,    0;    _for_condtionalA9=    !(come_push_stackframe("02transpile.c", 407),__exception_result_var_b185=list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_161), "02transpile.c", 407))), come_pop_stackframe(), __exception_result_var_b185) ,    _for_condtionalA9;    it_162=(come_push_stackframe("02transpile.c", 407),__exception_result_var_b186=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_161), "02transpile.c", 407))), come_pop_stackframe(), __exception_result_var_b186) ,    0    ){
        (come_push_stackframe("02transpile.c", 408),__exception_result_var_b187=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 408))->mLambdaType, "02transpile.c", 408))->mParamNames, "02transpile.c", 408)),(char*)come_increment_ref_count(((char*)(right_value165=string_clone(it_162))))), come_pop_stackframe(), __exception_result_var_b187);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value165;
        __freed_obj__ = 0;
    }
    if(o2_saved_161 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj71=((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 411))->mLambdaType, "02transpile.c", 411))->mResultType;
    ((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 411))->mLambdaType, "02transpile.c", 411))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 411),__exception_result_var_b188=((struct tuple1$1sTypeph*)(right_value167=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value166=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 411, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type)))), come_pop_stackframe(), __exception_result_var_b188));
    if(__dec_obj71) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value166;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value167;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 412))->mLambdaType, "02transpile.c", 412))->mVarArgs=var_args;
    __dec_obj72=((struct sFun*)come_null_check(self, "02transpile.c", 414))->mSource;
    ((struct sFun*)come_null_check(self, "02transpile.c", 414))->mSource=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 414),__exception_result_var_b189=((struct buffer*)(right_value169=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value168=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 414, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b189));
    if(__dec_obj72) { come_call_finalizer(buffer_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value168;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value169;
    __freed_obj__ = 0;
    __dec_obj73=((struct sFun*)come_null_check(self, "02transpile.c", 415))->mSourceHead;
    ((struct sFun*)come_null_check(self, "02transpile.c", 415))->mSourceHead=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 415),__exception_result_var_b190=((struct buffer*)(right_value171=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 415, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b190));
    if(__dec_obj73) { come_call_finalizer(buffer_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value170;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value171;
    __freed_obj__ = 0;
    __dec_obj74=((struct sFun*)come_null_check(self, "02transpile.c", 416))->mSourceHead2;
    ((struct sFun*)come_null_check(self, "02transpile.c", 416))->mSourceHead2=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 416),__exception_result_var_b191=((struct buffer*)(right_value173=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 416, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b191));
    if(__dec_obj74) { come_call_finalizer(buffer_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value172;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value173;
    __freed_obj__ = 0;
    __dec_obj75=((struct sFun*)come_null_check(self, "02transpile.c", 417))->mSourceDefer;
    ((struct sFun*)come_null_check(self, "02transpile.c", 417))->mSourceDefer=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 417),__exception_result_var_b192=((struct buffer*)(right_value175=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 417, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b192));
    if(__dec_obj75) { come_call_finalizer(buffer_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value174;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value175;
    __freed_obj__ = 0;
    __dec_obj79=((struct sFun*)come_null_check(self, "02transpile.c", 419))->mBlock;
    ((struct sFun*)come_null_check(self, "02transpile.c", 419))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value192=sBlock_clone(block))));
    if(__dec_obj79) { come_call_finalizer(sBlock_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value192;
    __freed_obj__ = 0;
    __dec_obj80=((struct sFun*)come_null_check(self, "02transpile.c", 421))->mComeHeader;
    ((struct sFun*)come_null_check(self, "02transpile.c", 421))->mComeHeader=(char*)come_increment_ref_count(come_header);
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
    __dec_obj81=((struct sFun*)come_null_check(self, "02transpile.c", 423))->mDeclareSName;
    ((struct sFun*)come_null_check(self, "02transpile.c", 423))->mDeclareSName=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 423),__exception_result_var_b226=((char*)(right_value193=__builtin_string(declare_sname))), come_pop_stackframe(), __exception_result_var_b226));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value193;
    __freed_obj__ = 0;
    __result137__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(come_header && !__freed_obj__) { come_header = come_decrement_ref_count(come_header, (void*)0, (void*)0, 0, 1, 0); }
    if(declare_sname && !__freed_obj__) { declare_sname = come_decrement_ref_count(declare_sname, (void*)0, (void*)0, 0, 1, 0); }
    return __result137__;
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
_Bool _if_conditional222;
struct sType* result_153;
void* __exception_result_var_b176;
struct sType* __result109__;
_Bool _if_conditional223;
struct sType* __result110__;
struct sType* result_154;
void* __exception_result_var_b177;
struct sType* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_153, 0, sizeof(struct sType*));
memset(&result_154, 0, sizeof(struct sType*));
        if(_if_conditional222=self==((void*)0),        _if_conditional222) {
            (come_push_stackframe("./comelang2.h", 342),__exception_result_var_b176=memset(&result_153,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b176);
            __result109__ = __result_obj__ = result_153;
            return __result109__;
        }
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 345))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 345))->head;
        if(_if_conditional223=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 347))->it,        _if_conditional223) {
            __result110__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 348))->it, "./comelang2.h", 348))->item;
            return __result110__;
        }
        (come_push_stackframe("./comelang2.h", 352),__exception_result_var_b177=memset(&result_154,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b177);
        __result111__ = __result_obj__ = result_154;
        return __result111__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result112__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 375))->it==((void*)0);
        return __result112__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional224;
struct sType* result_156;
void* __exception_result_var_b180;
struct sType* __result113__;
_Bool _if_conditional225;
struct sType* __result114__;
struct sType* result_157;
void* __exception_result_var_b181;
struct sType* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_156, 0, sizeof(struct sType*));
memset(&result_157, 0, sizeof(struct sType*));
        if(_if_conditional224=self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it==((void*)0),        _if_conditional224) {
            (come_push_stackframe("./comelang2.h", 359),__exception_result_var_b180=memset(&result_156,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b180);
            __result113__ = __result_obj__ = result_156;
            return __result113__;
        }
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 363))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 363))->it, "./comelang2.h", 363))->next;
        if(_if_conditional225=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 365))->it,        _if_conditional225) {
            __result114__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it, "./comelang2.h", 366))->item;
            return __result114__;
        }
        (come_push_stackframe("./comelang2.h", 370),__exception_result_var_b181=memset(&result_157,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b181);
        __result115__ = __result_obj__ = result_157;
        return __result115__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
void* right_value161;
struct list_item$1sTypeph* litem_158;
struct sType* __dec_obj68;
_Bool _if_conditional227;
void* right_value162;
struct list_item$1sTypeph* litem_159;
struct sType* __dec_obj69;
void* right_value163;
struct list_item$1sTypeph* litem_160;
struct sType* __dec_obj70;
struct list$1sTypeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
memset(&litem_158, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value162, 0, sizeof(void*));
memset(&litem_159, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value163, 0, sizeof(void*));
memset(&litem_160, 0, sizeof(struct list_item$1sTypeph*));
            if(_if_conditional226=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 280))->len==0,            _if_conditional226) {
                litem_158=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value161=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 281, "struct list_item$1sTypeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value161;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_158, "./comelang2.h", 283))->prev=((void*)0);
                ((struct list_item$1sTypeph*)come_null_check(litem_158, "./comelang2.h", 284))->next=((void*)0);
                __dec_obj68=((struct list_item$1sTypeph*)come_null_check(litem_158, "./comelang2.h", 285))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_158, "./comelang2.h", 285))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 287))->tail=litem_158;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->head=litem_158;
            }
            else {
                if(_if_conditional227=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 290))->len==1,                _if_conditional227) {
                    litem_159=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value162=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 291, "struct list_item$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
                    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value162;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_159, "./comelang2.h", 293))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 293))->head;
                    ((struct list_item$1sTypeph*)come_null_check(litem_159, "./comelang2.h", 294))->next=((void*)0);
                    __dec_obj69=((struct list_item$1sTypeph*)come_null_check(litem_159, "./comelang2.h", 295))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_159, "./comelang2.h", 295))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 297))->tail=litem_159;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->head, "./comelang2.h", 298))->next=litem_159;
                }
                else {
                    litem_160=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value163=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 301, "struct list_item$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value163;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_160, "./comelang2.h", 303))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 303))->tail;
                    ((struct list_item$1sTypeph*)come_null_check(litem_160, "./comelang2.h", 304))->next=((void*)0);
                    __dec_obj70=((struct list_item$1sTypeph*)come_null_check(litem_160, "./comelang2.h", 305))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_160, "./comelang2.h", 305))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj70) { come_call_finalizer(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 307))->tail, "./comelang2.h", 307))->next=litem_160;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 308))->tail=litem_160;
                }
            }
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 311))->len++;
            __result116__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result116__;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
struct sBlock* __result117__;
void* right_value176;
struct sBlock* result_163;
_Bool _if_conditional231;
void* right_value180;
struct list$1sNodeph* __dec_obj76;
_Bool _if_conditional233;
void* right_value191;
struct sVarTable* __dec_obj78;
struct sBlock* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value176, 0, sizeof(void*));
memset(&result_163, 0, sizeof(struct sBlock*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
        if(_if_conditional228=self==(void*)0,        _if_conditional228) {
            __result117__ = __result_obj__ = (void*)0;
            return __result117__;
        }
        result_163=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value176=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value176;
        __freed_obj__ = 0;
        if(_if_conditional231=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 4))->mNodes!=((void*)0),        _if_conditional231) {
            __dec_obj76=((struct sBlock*)come_null_check(result_163, "sBlock_clone", 4))->mNodes;
            ((struct sBlock*)come_null_check(result_163, "sBlock_clone", 4))->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value180=list$1sNodephp_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 4))->mNodes))));
            if(__dec_obj76) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value180;
            __freed_obj__ = 0;
        }
        if(_if_conditional233=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mVarTable!=((void*)0),        _if_conditional233) {
            __dec_obj78=((struct sBlock*)come_null_check(result_163, "sBlock_clone", 5))->mVarTable;
            ((struct sBlock*)come_null_check(result_163, "sBlock_clone", 5))->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value191=sVarTable_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mVarTable))));
            if(__dec_obj78) { come_call_finalizer(sVarTable_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
            if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value191;
            __freed_obj__ = 0;
        }
        __result136__ = __result_obj__ = result_163;
        if(result_163 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_163, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result136__;
        if(result_163 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_163, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional229;
_Bool _if_conditional230;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional229=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes!=((void*)0),            _if_conditional229) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional230=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable!=((void*)0),            _if_conditional230) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
struct list$1sNodeph* __result118__;
void* right_value177;
void* right_value178;
struct list$1sNodeph* __exception_result_var_b193;
struct list$1sNodeph* result_164;
struct list_item$1sNodeph* it_165;
_Bool _while_condtional23;
void* right_value179;
struct list$1sNodeph* __exception_result_var_b194;
struct list$1sNodeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct list$1sNodeph*));
memset(&it_165, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value179, 0, sizeof(void*));
                if(_if_conditional232=self==((void*)0),                _if_conditional232) {
                    __result118__ = __result_obj__ = ((void*)0);
                    return __result118__;
                }
                result_164=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 197),__exception_result_var_b193=((struct list$1sNodeph*)(right_value178=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value177=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 197, "struct list$1sNodeph"))), "./comelang2.h", 197)))))), come_pop_stackframe(), __exception_result_var_b193));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value177;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value178);
                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value178;
                __freed_obj__ = 0;
                it_165=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 199))->head;
                while(_while_condtional23=it_165!=((void*)0),                _while_condtional23) {
                    (come_push_stackframe("./comelang2.h", 201),__exception_result_var_b194=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_164, "./comelang2.h", 201)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_165, "./comelang2.h", 201))->item))))), come_pop_stackframe(), __exception_result_var_b194);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value179;
                    __freed_obj__ = 0;
                    it_165=((struct list_item$1sNodeph*)come_null_check(it_165, "./comelang2.h", 203))->next;
                }
                __result119__ = __result_obj__ = result_164;
                if(result_164 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_164, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result119__;
                if(result_164 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
struct sVarTable* __result120__;
void* right_value181;
struct sVarTable* result_166;
_Bool _if_conditional235;
void* right_value190;
struct map$2charphsVarph* __dec_obj77;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
struct sVarTable* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
memset(&result_166, 0, sizeof(struct sVarTable*));
memset(&right_value190, 0, sizeof(void*));
                if(_if_conditional234=self==(void*)0,                _if_conditional234) {
                    __result120__ = __result_obj__ = (void*)0;
                    return __result120__;
                }
                result_166=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value181=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value181;
                __freed_obj__ = 0;
                if(_if_conditional235=self!=((void*)0)&&((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4))->mVars!=((void*)0),                _if_conditional235) {
                    __dec_obj77=((struct sVarTable*)come_null_check(result_166, "sVarTable_clone", 4))->mVars;
                    ((struct sVarTable*)come_null_check(result_166, "sVarTable_clone", 4))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value190=map$2charphsVarphp_clone(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4))->mVars))));
                    if(__dec_obj77) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value190;
                    __freed_obj__ = 0;
                }
                if(_if_conditional259=self!=((void*)0),                _if_conditional259) {
                    ((struct sVarTable*)come_null_check(result_166, "sVarTable_clone", 5))->mGlobal=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mGlobal;
                }
                if(_if_conditional260=self!=((void*)0),                _if_conditional260) {
                    ((struct sVarTable*)come_null_check(result_166, "sVarTable_clone", 6))->mParent=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 6))->mParent;
                }
                if(_if_conditional261=self!=((void*)0),                _if_conditional261) {
                    ((struct sVarTable*)come_null_check(result_166, "sVarTable_clone", 7))->mID=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 7))->mID;
                }
                __result135__ = __result_obj__ = result_166;
                if(result_166 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_166, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result135__;
                if(result_166 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_166, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional236;
struct map$2charphsVarph* __result121__;
void* right_value182;
void* right_value183;
struct map$2charphsVarph* __exception_result_var_b195;
struct map$2charphsVarph* result_167;
char* __exception_result_var_b198;
char* it_170;
_Bool __exception_result_var_b199;
_Bool _for_condtionalA10;
char* __exception_result_var_b202;
struct sVar* default_value_173;
void* __exception_result_var_b203;
struct sVar* __exception_result_var_b206;
struct sVar* it2_176;
struct map$2charphsVarph* __exception_result_var_b225;
struct map$2charphsVarph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&result_167, 0, sizeof(struct map$2charphsVarph*));
memset(&it_170, 0, sizeof(char*));
memset(&default_value_173, 0, sizeof(struct sVar*));
memset(&it2_176, 0, sizeof(struct sVar*));
                        if(_if_conditional236=self==((void*)0),                        _if_conditional236) {
                            __result121__ = __result_obj__ = ((void*)0);
                            return __result121__;
                        }
                        result_167=(struct map$2charphsVarph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 1224),__exception_result_var_b195=((struct map$2charphsVarph*)(right_value183=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value182=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1224, "struct map$2charphsVarph"))))))), come_pop_stackframe(), __exception_result_var_b195));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value182;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
                        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value183;
                        __freed_obj__ = 0;
                        for(
                        it_170=(come_push_stackframe("./comelang2.h", 1226),__exception_result_var_b198=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))), come_pop_stackframe(), __exception_result_var_b198) ,                        0;                        _for_condtionalA10=                        !(come_push_stackframe("./comelang2.h", 1226),__exception_result_var_b199=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))), come_pop_stackframe(), __exception_result_var_b199) ,                        _for_condtionalA10;                        it_170=(come_push_stackframe("./comelang2.h", 1226),__exception_result_var_b202=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))), come_pop_stackframe(), __exception_result_var_b202) ,                        0                        ){
                            (come_push_stackframe("./comelang2.h", 1228),__exception_result_var_b203=memset(&default_value_173,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b203);
                            it2_176=(come_push_stackframe("./comelang2.h", 1230),__exception_result_var_b206=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1230)),it_170,default_value_173), come_pop_stackframe(), __exception_result_var_b206);
                            (come_push_stackframe("./comelang2.h", 1232),__exception_result_var_b225=map$2charphsVarph_insert2(((struct map$2charphsVarph*)come_null_check(result_167, "./comelang2.h", 1232)),it_170,it2_176), come_pop_stackframe(), __exception_result_var_b225);
                        }
                        __result134__ = __result_obj__ = result_167;
                        if(result_167 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_167, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result134__;
                        if(result_167 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_167, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional237;
char* result_168;
void* __exception_result_var_b196;
char* __result122__;
_Bool _if_conditional238;
char* __result123__;
char* result_169;
void* __exception_result_var_b197;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_168, 0, sizeof(char*));
memset(&result_169, 0, sizeof(char*));
                            if(_if_conditional237=self==((void*)0),                            _if_conditional237) {
                                (come_push_stackframe("./comelang2.h", 1342),__exception_result_var_b196=memset(&result_168,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b196);
                                __result122__ = __result_obj__ = result_168;
                                return __result122__;
                            }
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->head;
                            if(_if_conditional238=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1347))->key_list, "./comelang2.h", 1347))->it,                            _if_conditional238) {
                                __result123__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1348))->key_list, "./comelang2.h", 1348))->it, "./comelang2.h", 1348))->item;
                                return __result123__;
                            }
                            (come_push_stackframe("./comelang2.h", 1352),__exception_result_var_b197=memset(&result_169,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b197);
                            __result124__ = __result_obj__ = result_169;
                            return __result124__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result125__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1374))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1374))->key_list, "./comelang2.h", 1374))->it==((void*)0);
                            return __result125__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional239;
char* result_171;
void* __exception_result_var_b200;
char* __result126__;
_Bool _if_conditional240;
char* __result127__;
char* result_172;
void* __exception_result_var_b201;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_171, 0, sizeof(char*));
memset(&result_172, 0, sizeof(char*));
                            if(_if_conditional239=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1357))->key_list, "./comelang2.h", 1357))->it==((void*)0),                            _if_conditional239) {
                                (come_push_stackframe("./comelang2.h", 1359),__exception_result_var_b200=memset(&result_171,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b200);
                                __result126__ = __result_obj__ = result_171;
                                return __result126__;
                            }
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it, "./comelang2.h", 1362))->next;
                            if(_if_conditional240=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1364))->key_list, "./comelang2.h", 1364))->it,                            _if_conditional240) {
                                __result127__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it, "./comelang2.h", 1365))->item;
                                return __result127__;
                            }
                            (come_push_stackframe("./comelang2.h", 1369),__exception_result_var_b201=memset(&result_172,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b201);
                            __result128__ = __result_obj__ = result_172;
                            return __result128__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b204;
unsigned int hash_174;
unsigned int it_175;
_Bool _while_condtional24;
_Bool _if_conditional241;
void* right_value184;
struct optional$2boolbool* __exception_result_var_b205;
_Bool _if_conditional242;
struct sVar* __result129__;
_Bool _if_conditional243;
_Bool _if_conditional244;
struct sVar* __result130__;
struct sVar* __result131__;
struct sVar* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_174, 0, sizeof(unsigned int));
memset(&it_175, 0, sizeof(unsigned int));
memset(&right_value184, 0, sizeof(void*));
                                hash_174=(come_push_stackframe("./comelang2.h", 1267),__exception_result_var_b204=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1267))), come_pop_stackframe(), __exception_result_var_b204)%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1267))->size;
                                it_175=hash_174;
                                while(_while_condtional24=(_Bool)1,                                _while_condtional24) {
                                    if(_if_conditional241=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1271))->item_existance[it_175],                                    _if_conditional241) {
                                        if(_if_conditional242=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1273),__exception_result_var_b205=((struct optional$2boolbool*)(right_value184=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1273))->keys[it_175], "./comelang2.h", 1273)),key))), come_pop_stackframe(), __exception_result_var_b205)),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184),
                                        (right_value184 && right_value184 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value184, 
                                        __freed_obj__ = 0, 
                                        _if_conditional242) {
                                            __result129__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1275))->items[it_175];
                                            return __result129__;
                                        }
                                        it_175++;
                                        if(_if_conditional243=it_175>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1280))->size,                                        _if_conditional243) {
                                            it_175=0;
                                        }
                                        else {
                                            if(_if_conditional244=it_175==hash_174,                                            _if_conditional244) {
                                                __result130__ = __result_obj__ = default_value;
                                                return __result130__;
                                            }
                                        }
                                    }
                                    else {
                                        __result131__ = __result_obj__ = default_value;
                                        return __result131__;
                                    }
                                }
                                __result132__ = __result_obj__ = default_value;
                                return __result132__;
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional245;
unsigned int __exception_result_var_b215;
unsigned int hash_188;
int it_189;
_Bool _while_condtional26;
_Bool _if_conditional249;
void* right_value188;
struct optional$2boolbool* __exception_result_var_b216;
_Bool _if_conditional250;
_Bool _if_conditional251;
struct list$1charp* __exception_result_var_b217;
struct list$1charp* __exception_result_var_b218;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
int __exception_result_var_b219;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool same_key_exist_190;
char* __exception_result_var_b220;
char* it2_191;
_Bool __exception_result_var_b221;
_Bool _for_condtionalA12;
char* __exception_result_var_b222;
void* right_value189;
struct optional$2boolbool* __exception_result_var_b223;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct list$1charp* __exception_result_var_b224;
struct map$2charphsVarph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_188, 0, sizeof(unsigned int));
memset(&it_189, 0, sizeof(int));
memset(&right_value188, 0, sizeof(void*));
memset(&same_key_exist_190, 0, sizeof(_Bool));
memset(&it2_191, 0, sizeof(char*));
memset(&right_value189, 0, sizeof(void*));
                                if(_if_conditional245=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1508))->len*2>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1508))->size,                                _if_conditional245) {
                                    (come_push_stackframe("./comelang2.h", 1509),map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))),come_pop_stackframe());
                                }
                                hash_188=(come_push_stackframe("./comelang2.h", 1511),__exception_result_var_b215=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1511))), come_pop_stackframe(), __exception_result_var_b215)%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1511))->size;
                                it_189=hash_188;
                                while(_while_condtional26=(_Bool)1,                                _while_condtional26) {
                                    if(_if_conditional249=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1515))->item_existance[it_189],                                    _if_conditional249) {
                                        if(_if_conditional250=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1517),__exception_result_var_b216=((struct optional$2boolbool*)(right_value188=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1517))->keys[it_189], "./comelang2.h", 1517)),key))), come_pop_stackframe(), __exception_result_var_b216)),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188),
                                        (right_value188 && right_value188 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value188, 
                                        __freed_obj__ = 0, 
                                        _if_conditional250) {
                                            if(_if_conditional251=1,                                            _if_conditional251) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1520))->keys[it_189] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1520))->keys[it_189] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1520))->keys[it_189], (void*)0, (void*)0, 0, 0, 0); }
                                                (come_push_stackframe("./comelang2.h", 1521),__exception_result_var_b217=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1521))->key_list, "./comelang2.h", 1521)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1521))->keys[it_189]), come_pop_stackframe(), __exception_result_var_b217);
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1522))->keys[it_189]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                (come_push_stackframe("./comelang2.h", 1525),__exception_result_var_b218=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1525))->key_list, "./comelang2.h", 1525)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1525))->keys[it_189]), come_pop_stackframe(), __exception_result_var_b218);
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1526))->keys[it_189]=key;
                                            }
                                            if(_if_conditional252=1,                                            _if_conditional252) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1529))->items[it_189] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1529))->items[it_189], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1530))->items[it_189]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1533))->items[it_189]=item;
                                            }
                                            break;
                                        }
                                        it_189++;
                                        if(_if_conditional253=it_189>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1540))->size,                                        _if_conditional253) {
                                            it_189=0;
                                        }
                                        else {
                                            if(_if_conditional254=it_189==hash_188,                                            _if_conditional254) {
                                                (come_push_stackframe("./comelang2.h", 1544),__exception_result_var_b219=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b219);
                                                (come_push_stackframe("./comelang2.h", 1545),stackframe(),come_pop_stackframe());
                                                (come_push_stackframe("./comelang2.h", 1546),exit(2),come_pop_stackframe());
                                            }
                                        }
                                    }
                                    else {
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1550))->item_existance[it_189]=(_Bool)1;
                                        if(_if_conditional255=1,                                        _if_conditional255) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1552))->keys[it_189]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1555))->keys[it_189]=key;
                                        }
                                        if(_if_conditional256=1,                                        _if_conditional256) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1558))->items[it_189]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1561))->items[it_189]=item;
                                        }
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1564))->len++;
                                        break;
                                    }
                                }
                                same_key_exist_190=(_Bool)0;
                                for(
                                it2_191=(come_push_stackframe("./comelang2.h", 1571),__exception_result_var_b220=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1571))->key_list, "./comelang2.h", 1571))), come_pop_stackframe(), __exception_result_var_b220) ,                                0;                                _for_condtionalA12=                                !(come_push_stackframe("./comelang2.h", 1571),__exception_result_var_b221=list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1571))->key_list, "./comelang2.h", 1571))), come_pop_stackframe(), __exception_result_var_b221) ,                                _for_condtionalA12;                                it2_191=(come_push_stackframe("./comelang2.h", 1571),__exception_result_var_b222=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1571))->key_list, "./comelang2.h", 1571))), come_pop_stackframe(), __exception_result_var_b222) ,                                0                                ){
                                    if(_if_conditional257=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1573),__exception_result_var_b223=((struct optional$2boolbool*)(right_value189=string_equals(((char*)come_null_check(it2_191, "./comelang2.h", 1573)),key))), come_pop_stackframe(), __exception_result_var_b223)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189),
                                    (right_value189 && right_value189 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value189, 
                                    __freed_obj__ = 0, 
                                    _if_conditional257) {
                                        same_key_exist_190=(_Bool)1;
                                    }
                                }
                                if(_if_conditional258=!same_key_exist_190,                                _if_conditional258) {
                                    (come_push_stackframe("./comelang2.h", 1579),__exception_result_var_b224=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1579))->key_list, "./comelang2.h", 1579)),key), come_pop_stackframe(), __exception_result_var_b224);
                                }
                                __result133__ = __result_obj__ = self;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result133__;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_177;
void* right_value185;
char** keys_178;
void* right_value186;
struct sVar** items_179;
void* right_value187;
_Bool* item_existance_180;
int len_181;
char* __exception_result_var_b207;
char* it_182;
_Bool __exception_result_var_b208;
_Bool _for_condtionalA11;
char* __exception_result_var_b209;
struct sVar* default_value_183;
void* __exception_result_var_b210;
struct sVar* __exception_result_var_b211;
struct sVar* it2_184;
unsigned int __exception_result_var_b212;
unsigned int hash_185;
int n_186;
_Bool _while_condtional25;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
int __exception_result_var_b213;
struct sVar* default_value_187;
struct sVar* __exception_result_var_b214;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_177, 0, sizeof(int));
memset(&right_value185, 0, sizeof(void*));
memset(&keys_178, 0, sizeof(char**));
memset(&right_value186, 0, sizeof(void*));
memset(&items_179, 0, sizeof(struct sVar**));
memset(&right_value187, 0, sizeof(void*));
memset(&item_existance_180, 0, sizeof(_Bool*));
memset(&len_181, 0, sizeof(int));
memset(&it_182, 0, sizeof(char*));
memset(&default_value_183, 0, sizeof(struct sVar*));
memset(&it2_184, 0, sizeof(struct sVar*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&n_186, 0, sizeof(int));
memset(&default_value_187, 0, sizeof(struct sVar*));
                                        size_177=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1378))->size*10;
                                        keys_178=(char**)come_increment_ref_count(((char**)(right_value185=(char**)come_calloc(1, sizeof(char*)*(1*(size_177)), "./comelang2.h", 1379, "char*"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                                        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value185;
                                        __freed_obj__ = 0;
                                        items_179=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value186=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_177)), "./comelang2.h", 1380, "struct sVar*"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value186);
                                        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value186;
                                        __freed_obj__ = 0;
                                        item_existance_180=(_Bool*)come_increment_ref_count(((_Bool*)(right_value187=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_177)), "./comelang2.h", 1381, "_Bool"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value187);
                                        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value187;
                                        __freed_obj__ = 0;
                                        len_181=0;
                                        for(
                                        it_182=(come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b207=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1385))), come_pop_stackframe(), __exception_result_var_b207) ,                                        0;                                        _for_condtionalA11=                                        !(come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b208=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1385))), come_pop_stackframe(), __exception_result_var_b208) ,                                        _for_condtionalA11;                                        it_182=(come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b209=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1385))), come_pop_stackframe(), __exception_result_var_b209) ,                                        0                                        ){
                                            (come_push_stackframe("./comelang2.h", 1387),__exception_result_var_b210=memset(&default_value_183,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b210);
                                            it2_184=(come_push_stackframe("./comelang2.h", 1388),__exception_result_var_b211=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1388)),it_182,default_value_183), come_pop_stackframe(), __exception_result_var_b211);
                                            hash_185=(come_push_stackframe("./comelang2.h", 1389),__exception_result_var_b212=string_get_hash_key(((char*)come_null_check(it_182, "./comelang2.h", 1389))), come_pop_stackframe(), __exception_result_var_b212)%size_177;
                                            n_186=hash_185;
                                            while(_while_condtional25=(_Bool)1,                                            _while_condtional25) {
                                                if(_if_conditional246=item_existance_180[n_186],                                                _if_conditional246) {
                                                    n_186++;
                                                    if(_if_conditional247=n_186>=size_177,                                                    _if_conditional247) {
                                                        n_186=0;
                                                    }
                                                    else {
                                                        if(_if_conditional248=n_186==hash_185,                                                        _if_conditional248) {
                                                            (come_push_stackframe("./comelang2.h", 1401),__exception_result_var_b213=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b213);
                                                            (come_push_stackframe("./comelang2.h", 1402),stackframe(),come_pop_stackframe());
                                                            (come_push_stackframe("./comelang2.h", 1403),exit(2),come_pop_stackframe());
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_180[n_186]=(_Bool)1;
                                                    keys_178[n_186]=it_182;
                                                    items_179[n_186]=(come_push_stackframe("./comelang2.h", 1410),__exception_result_var_b214=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1410)),it_182,default_value_187), come_pop_stackframe(), __exception_result_var_b214);
                                                    len_181++;
                                                    break;
                                                }
                                            }
                                        }
                                        (come_push_stackframe("./comelang2.h", 1418),come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1418))->items),come_pop_stackframe());
                                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1419))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1419))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1419))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                        (come_push_stackframe("./comelang2.h", 1420),come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1420))->keys),come_pop_stackframe());
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1422))->keys=keys_178;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1423))->items=items_179;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1424))->item_existance=item_existance_180;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1426))->size=size_177;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1427))->len=len_181;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
_Bool _if_conditional274;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional262=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName!=((void*)0),        _if_conditional262) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional263=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType!=((void*)0),        _if_conditional263) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional264=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes!=((void*)0),        _if_conditional264) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional265=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames!=((void*)0),        _if_conditional265) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional266=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors!=((void*)0),        _if_conditional266) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional267=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType!=((void*)0),        _if_conditional267) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional268=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock!=((void*)0),        _if_conditional268) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional269=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource!=((void*)0),        _if_conditional269) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional270=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead!=((void*)0),        _if_conditional270) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional271=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2!=((void*)0),        _if_conditional271) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional272=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer!=((void*)0),        _if_conditional272) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional273=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader!=((void*)0),        _if_conditional273) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional274=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName!=((void*)0),        _if_conditional274) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

void init_classes(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value194;
char* __exception_result_var_b227;
void* right_value195;
void* right_value196;
struct sClass* __exception_result_var_b228;
struct map$2charphsClassph* __exception_result_var_b229;
void* right_value197;
char* __exception_result_var_b230;
void* right_value198;
void* right_value199;
struct sClass* __exception_result_var_b231;
struct map$2charphsClassph* __exception_result_var_b232;
void* right_value200;
char* __exception_result_var_b233;
void* right_value201;
void* right_value202;
struct sClass* __exception_result_var_b234;
struct map$2charphsClassph* __exception_result_var_b235;
void* right_value203;
char* __exception_result_var_b236;
void* right_value204;
void* right_value205;
struct sClass* __exception_result_var_b237;
struct map$2charphsClassph* __exception_result_var_b238;
void* right_value206;
char* __exception_result_var_b239;
void* right_value207;
void* right_value208;
struct sClass* __exception_result_var_b240;
struct map$2charphsClassph* __exception_result_var_b241;
void* right_value209;
char* __exception_result_var_b242;
void* right_value210;
void* right_value211;
struct sClass* __exception_result_var_b243;
struct map$2charphsClassph* __exception_result_var_b244;
void* right_value212;
char* __exception_result_var_b245;
void* right_value213;
void* right_value214;
struct sClass* __exception_result_var_b246;
struct map$2charphsClassph* __exception_result_var_b247;
void* right_value215;
char* __exception_result_var_b248;
void* right_value216;
void* right_value217;
struct sClass* __exception_result_var_b249;
struct map$2charphsClassph* __exception_result_var_b250;
void* right_value218;
char* __exception_result_var_b251;
void* right_value219;
void* right_value220;
struct sClass* __exception_result_var_b252;
struct map$2charphsClassph* __exception_result_var_b253;
void* right_value221;
char* __exception_result_var_b254;
void* right_value222;
void* right_value223;
struct sClass* __exception_result_var_b255;
struct map$2charphsClassph* __exception_result_var_b256;
void* right_value224;
char* __exception_result_var_b257;
void* right_value225;
void* right_value226;
struct sClass* __exception_result_var_b258;
struct map$2charphsClassph* __exception_result_var_b259;
int i_192;
_Bool _for_condtionalA13;
void* right_value227;
char* __exception_result_var_b260;
char* generics_type_193;
void* right_value228;
void* right_value229;
struct sClass* __exception_result_var_b261;
struct map$2charphsClassph* __exception_result_var_b262;
int __exception_result_var_b263;
int __exception_result_var_b264;
int rc_195;
_Bool _if_conditional275;
void* right_value230;
char* __exception_result_var_b265;
void* right_value231;
void* right_value232;
struct sClass* __exception_result_var_b266;
struct map$2charphsClassph* __exception_result_var_b267;
void* right_value233;
char* __exception_result_var_b268;
char* type_name_196;
void* right_value234;
void* right_value235;
struct sType* __exception_result_var_b269;
struct sType* type_197;
void* right_value236;
char* __exception_result_var_b270;
char* __dec_obj82;
void* right_value243;
char* __exception_result_var_b295;
struct map$2charphsTypeph* __exception_result_var_b296;
void* right_value244;
void* right_value245;
struct sClass* __exception_result_var_b297;
struct sClass* klass_219;
void* right_value249;
void* right_value252;
char* __exception_result_var_b298;
void* right_value253;
void* right_value254;
struct sType* __exception_result_var_b299;
void* right_value255;
struct tuple2$2charphsTypeph* __exception_result_var_b300;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b301;
void* right_value256;
void* right_value257;
char* __exception_result_var_b302;
void* right_value258;
void* right_value259;
struct sType* __exception_result_var_b303;
void* right_value260;
struct tuple2$2charphsTypeph* __exception_result_var_b304;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b305;
void* right_value261;
void* right_value262;
char* __exception_result_var_b306;
void* right_value263;
void* right_value264;
struct sType* __exception_result_var_b307;
void* right_value265;
struct tuple2$2charphsTypeph* __exception_result_var_b308;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b309;
void* right_value266;
void* right_value267;
char* __exception_result_var_b310;
void* right_value268;
void* right_value269;
struct sType* __exception_result_var_b311;
void* right_value270;
struct tuple2$2charphsTypeph* __exception_result_var_b312;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b313;
void* right_value271;
void* right_value272;
char* __exception_result_var_b314;
void* right_value273;
void* right_value274;
struct sType* __exception_result_var_b315;
void* right_value275;
struct tuple2$2charphsTypeph* __exception_result_var_b316;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b317;
void* right_value276;
char* __exception_result_var_b318;
struct map$2charphsClassph* __exception_result_var_b319;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&i_192, 0, sizeof(int));
memset(&right_value227, 0, sizeof(void*));
memset(&generics_type_193, 0, sizeof(char*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&rc_195, 0, sizeof(int));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&type_name_196, 0, sizeof(char*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&type_197, 0, sizeof(struct sType*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&klass_219, 0, sizeof(struct sClass*));
memset(&right_value249, 0, sizeof(void*));
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
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
    (come_push_stackframe("02transpile.c", 430),__exception_result_var_b229=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 430))->classes, "02transpile.c", 430)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 430),__exception_result_var_b227=((char*)(right_value194=__builtin_string("int"))), come_pop_stackframe(), __exception_result_var_b227)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 430),__exception_result_var_b228=((struct sClass*)(right_value196=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value195=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 430, "struct sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b228))), come_pop_stackframe(), __exception_result_var_b229);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value194;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value195;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value196;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 431),__exception_result_var_b232=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 431))->classes, "02transpile.c", 431)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 431),__exception_result_var_b230=((char*)(right_value197=__builtin_string("short"))), come_pop_stackframe(), __exception_result_var_b230)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 431),__exception_result_var_b231=((struct sClass*)(right_value199=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value198=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 431, "struct sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b231))), come_pop_stackframe(), __exception_result_var_b232);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value197;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value198;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value199;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 432),__exception_result_var_b235=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 432))->classes, "02transpile.c", 432)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 432),__exception_result_var_b233=((char*)(right_value200=__builtin_string("long"))), come_pop_stackframe(), __exception_result_var_b233)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 432),__exception_result_var_b234=((struct sClass*)(right_value202=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value201=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 432, "struct sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b234))), come_pop_stackframe(), __exception_result_var_b235);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value200;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value201;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value202;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 433),__exception_result_var_b238=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 433))->classes, "02transpile.c", 433)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 433),__exception_result_var_b236=((char*)(right_value203=__builtin_string("char"))), come_pop_stackframe(), __exception_result_var_b236)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 433),__exception_result_var_b237=((struct sClass*)(right_value205=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value204=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 433, "struct sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b237))), come_pop_stackframe(), __exception_result_var_b238);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value203;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value204;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value205;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 434),__exception_result_var_b241=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 434))->classes, "02transpile.c", 434)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 434),__exception_result_var_b239=((char*)(right_value206=__builtin_string("bool"))), come_pop_stackframe(), __exception_result_var_b239)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 434),__exception_result_var_b240=((struct sClass*)(right_value208=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value207=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 434, "struct sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b240))), come_pop_stackframe(), __exception_result_var_b241);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value206;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value207;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value208;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 435),__exception_result_var_b244=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 435))->classes, "02transpile.c", 435)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 435),__exception_result_var_b242=((char*)(right_value209=__builtin_string("_Bool"))), come_pop_stackframe(), __exception_result_var_b242)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 435),__exception_result_var_b243=((struct sClass*)(right_value211=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value210=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 435, "struct sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b243))), come_pop_stackframe(), __exception_result_var_b244);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value209;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value210;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value211;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 436),__exception_result_var_b247=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 436))->classes, "02transpile.c", 436)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 436),__exception_result_var_b245=((char*)(right_value212=__builtin_string("void"))), come_pop_stackframe(), __exception_result_var_b245)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 436),__exception_result_var_b246=((struct sClass*)(right_value214=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value213=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 436, "struct sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b246))), come_pop_stackframe(), __exception_result_var_b247);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value212;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value213;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value214;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 437),__exception_result_var_b250=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 437))->classes, "02transpile.c", 437)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 437),__exception_result_var_b248=((char*)(right_value215=__builtin_string("float"))), come_pop_stackframe(), __exception_result_var_b248)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 437),__exception_result_var_b249=((struct sClass*)(right_value217=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value216=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 437, "struct sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b249))), come_pop_stackframe(), __exception_result_var_b250);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value215;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value216;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value217;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 438),__exception_result_var_b253=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 438))->classes, "02transpile.c", 438)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 438),__exception_result_var_b251=((char*)(right_value218=__builtin_string("double"))), come_pop_stackframe(), __exception_result_var_b251)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 438),__exception_result_var_b252=((struct sClass*)(right_value220=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value219=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 438, "struct sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b252))), come_pop_stackframe(), __exception_result_var_b253);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value218;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value219;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value220;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 439),__exception_result_var_b256=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 439))->classes, "02transpile.c", 439)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 439),__exception_result_var_b254=((char*)(right_value221=__builtin_string("lambda"))), come_pop_stackframe(), __exception_result_var_b254)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 439),__exception_result_var_b255=((struct sClass*)(right_value223=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value222=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 439, "struct sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b255))), come_pop_stackframe(), __exception_result_var_b256);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value221;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value222;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value223;
    __freed_obj__ = 0;
    (come_push_stackframe("02transpile.c", 440),__exception_result_var_b259=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 440))->classes, "02transpile.c", 440)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 440),__exception_result_var_b257=((char*)(right_value224=__builtin_string("__uint128_t"))), come_pop_stackframe(), __exception_result_var_b257)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 440),__exception_result_var_b258=((struct sClass*)(right_value226=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value225=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 440, "struct sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b258))), come_pop_stackframe(), __exception_result_var_b259);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value224;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value225;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value226;
    __freed_obj__ = 0;
    for(
    i_192=0 ,    0;    _for_condtionalA13=    i_192<12 ,    _for_condtionalA13;    i_192++ ,    0    ){
        generics_type_193=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 442),__exception_result_var_b260=((char*)(right_value227=xsprintf("generics_type%d",i_192))), come_pop_stackframe(), __exception_result_var_b260));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value227;
        __freed_obj__ = 0;
        (come_push_stackframe("02transpile.c", 443),__exception_result_var_b262=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 443))->classes, "02transpile.c", 443)),(char*)come_increment_ref_count(generics_type_193),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 443),__exception_result_var_b261=((struct sClass*)(right_value229=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value228=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 443, "struct sClass")))),generics_type_193,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_192,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b261))), come_pop_stackframe(), __exception_result_var_b262);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value228);
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value228;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value229;
        __freed_obj__ = 0;
        if(generics_type_193 && !__freed_obj__) { generics_type_193 = come_decrement_ref_count(generics_type_193, (void*)0, (void*)0, 0, 0, 0); }
    }
    char cmd_194[1024];
    memset(&cmd_194, 0, sizeof(char)    *(1024)    );
    (come_push_stackframe("02transpile.c", 447),__exception_result_var_b263=snprintf(cmd_194,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"), come_pop_stackframe(), __exception_result_var_b263);
    rc_195=(come_push_stackframe("02transpile.c", 449),__exception_result_var_b264=system(cmd_194), come_pop_stackframe(), __exception_result_var_b264);
    if(_if_conditional275=rc_195==0,    _if_conditional275) {
        (come_push_stackframe("02transpile.c", 451),__exception_result_var_b267=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 451))->classes, "02transpile.c", 451)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 451),__exception_result_var_b265=((char*)(right_value230=__builtin_string("__builtin_va_list"))), come_pop_stackframe(), __exception_result_var_b265)),(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 451),__exception_result_var_b266=((struct sClass*)(right_value232=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value231=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 451, "struct sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b266))), come_pop_stackframe(), __exception_result_var_b267);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value230;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value231;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value232);
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value232;
        __freed_obj__ = 0;
        type_name_196=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 453),__exception_result_var_b268=((char*)(right_value233=__builtin_string("__builtin_va_list"))), come_pop_stackframe(), __exception_result_var_b268));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value233);
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value233;
        __freed_obj__ = 0;
        type_197=(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 455),__exception_result_var_b269=((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 455, "struct sType")))),"__builtin_va_list",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b269));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value234);
        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value234;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value235);
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value235;
        __freed_obj__ = 0;
        __dec_obj82=((struct sType*)come_null_check(type_197, "02transpile.c", 456))->mOriginalTypeName;
        ((struct sType*)come_null_check(type_197, "02transpile.c", 456))->mOriginalTypeName=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 456),__exception_result_var_b270=((char*)(right_value236=__builtin_string("__builtin_va_list"))), come_pop_stackframe(), __exception_result_var_b270));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value236);
        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value236;
        __freed_obj__ = 0;
        (come_push_stackframe("02transpile.c", 458),__exception_result_var_b296=map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 458))->types, "02transpile.c", 458)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 458),__exception_result_var_b295=((char*)(right_value243=__builtin_string(type_name_196))), come_pop_stackframe(), __exception_result_var_b295)),(struct sType*)come_increment_ref_count(type_197)), come_pop_stackframe(), __exception_result_var_b296);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value243);
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value243;
        __freed_obj__ = 0;
        if(type_name_196 && !__freed_obj__) { type_name_196 = come_decrement_ref_count(type_name_196, (void*)0, (void*)0, 0, 0, 0); }
        if(type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        klass_219=(struct sClass*)come_increment_ref_count((come_push_stackframe("02transpile.c", 463),__exception_result_var_b297=((struct sClass*)(right_value245=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value244=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 463, "struct sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b297));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value244;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value245;
        __freed_obj__ = 0;
        (come_push_stackframe("02transpile.c", 465),__exception_result_var_b301=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_219, "02transpile.c", 465))->mFields, "02transpile.c", 465)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 465),__exception_result_var_b300=((struct tuple2$2charphsTypeph*)(right_value255=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value249=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 465, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 465),__exception_result_var_b298=((char*)(right_value252=__builtin_string("v1"))), come_pop_stackframe(), __exception_result_var_b298)),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 465),__exception_result_var_b299=((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 465, "struct sType")))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b299))))), come_pop_stackframe(), __exception_result_var_b300))), come_pop_stackframe(), __exception_result_var_b301);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value249;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value252;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value253;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value254;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value255;
        __freed_obj__ = 0;
        (come_push_stackframe("02transpile.c", 466),__exception_result_var_b305=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_219, "02transpile.c", 466))->mFields, "02transpile.c", 466)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 466),__exception_result_var_b304=((struct tuple2$2charphsTypeph*)(right_value260=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value256=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 466, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 466),__exception_result_var_b302=((char*)(right_value257=__builtin_string("v2"))), come_pop_stackframe(), __exception_result_var_b302)),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 466),__exception_result_var_b303=((struct sType*)(right_value259=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value258=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 466, "struct sType")))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b303))))), come_pop_stackframe(), __exception_result_var_b304))), come_pop_stackframe(), __exception_result_var_b305);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value256;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value257;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value258;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value259);
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value259;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value260;
        __freed_obj__ = 0;
        (come_push_stackframe("02transpile.c", 467),__exception_result_var_b309=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_219, "02transpile.c", 467))->mFields, "02transpile.c", 467)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 467),__exception_result_var_b308=((struct tuple2$2charphsTypeph*)(right_value265=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value261=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 467, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 467),__exception_result_var_b306=((char*)(right_value262=__builtin_string("v3"))), come_pop_stackframe(), __exception_result_var_b306)),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 467),__exception_result_var_b307=((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 467, "struct sType")))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b307))))), come_pop_stackframe(), __exception_result_var_b308))), come_pop_stackframe(), __exception_result_var_b309);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value261;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value262;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value263;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value264;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value265;
        __freed_obj__ = 0;
        (come_push_stackframe("02transpile.c", 468),__exception_result_var_b313=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_219, "02transpile.c", 468))->mFields, "02transpile.c", 468)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 468),__exception_result_var_b312=((struct tuple2$2charphsTypeph*)(right_value270=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value266=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 468, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 468),__exception_result_var_b310=((char*)(right_value267=__builtin_string("v4"))), come_pop_stackframe(), __exception_result_var_b310)),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 468),__exception_result_var_b311=((struct sType*)(right_value269=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value268=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 468, "struct sType")))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b311))))), come_pop_stackframe(), __exception_result_var_b312))), come_pop_stackframe(), __exception_result_var_b313);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value266;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value267;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value268;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value269;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value270);
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value270;
        __freed_obj__ = 0;
        (come_push_stackframe("02transpile.c", 469),__exception_result_var_b317=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_219, "02transpile.c", 469))->mFields, "02transpile.c", 469)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 469),__exception_result_var_b316=((struct tuple2$2charphsTypeph*)(right_value275=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value271=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 469, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 469),__exception_result_var_b314=((char*)(right_value272=__builtin_string("v5"))), come_pop_stackframe(), __exception_result_var_b314)),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 469),__exception_result_var_b315=((struct sType*)(right_value274=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value273=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 469, "struct sType")))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b315))))), come_pop_stackframe(), __exception_result_var_b316))), come_pop_stackframe(), __exception_result_var_b317);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value271;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value272);
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value272;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value273;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value274;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value275;
        __freed_obj__ = 0;
        (come_push_stackframe("02transpile.c", 471),__exception_result_var_b319=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 471))->classes, "02transpile.c", 471)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 471),__exception_result_var_b318=((char*)(right_value276=__builtin_string("__builtin_va_list"))), come_pop_stackframe(), __exception_result_var_b318)),(struct sClass*)come_increment_ref_count(klass_219)), come_pop_stackframe(), __exception_result_var_b319);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value276);
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value276;
        __freed_obj__ = 0;
        if(klass_219 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_219, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional276;
unsigned int __exception_result_var_b285;
unsigned int hash_215;
unsigned int it_216;
_Bool _while_condtional29;
_Bool _if_conditional288;
void* right_value241;
struct optional$2boolbool* __exception_result_var_b286;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct list$1charp* __exception_result_var_b287;
struct list$1charp* __exception_result_var_b288;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
int __exception_result_var_b289;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool same_key_exist_217;
char* __exception_result_var_b290;
char* it2_218;
_Bool __exception_result_var_b291;
_Bool _for_condtionalA15;
char* __exception_result_var_b292;
void* right_value242;
struct optional$2boolbool* __exception_result_var_b293;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list$1charp* __exception_result_var_b294;
struct map$2charphsTypeph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_215, 0, sizeof(unsigned int));
memset(&it_216, 0, sizeof(unsigned int));
memset(&right_value241, 0, sizeof(void*));
memset(&same_key_exist_217, 0, sizeof(_Bool));
memset(&it2_218, 0, sizeof(char*));
memset(&right_value242, 0, sizeof(void*));
            if(_if_conditional276=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1431))->len*10>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1431))->size,            _if_conditional276) {
                (come_push_stackframe("./comelang2.h", 1432),map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1432))),come_pop_stackframe());
            }
            hash_215=(come_push_stackframe("./comelang2.h", 1434),__exception_result_var_b285=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1434))), come_pop_stackframe(), __exception_result_var_b285)%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->size;
            it_216=hash_215;
            while(_while_condtional29=(_Bool)1,            _while_condtional29) {
                if(_if_conditional288=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->item_existance[it_216],                _if_conditional288) {
                    if(_if_conditional289=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1440),__exception_result_var_b286=((struct optional$2boolbool*)(right_value241=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1440))->keys[it_216], "./comelang2.h", 1440)),key))), come_pop_stackframe(), __exception_result_var_b286)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241),
                    (right_value241 && right_value241 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value241, 
                    __freed_obj__ = 0, 
                    _if_conditional289) {
                        if(_if_conditional290=1,                        _if_conditional290) {
                            (come_push_stackframe("./comelang2.h", 1443),__exception_result_var_b287=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1443))->key_list, "./comelang2.h", 1443)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1443))->keys[it_216]), come_pop_stackframe(), __exception_result_var_b287);
                            if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1444))->keys[it_216] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1444))->keys[it_216] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1444))->keys[it_216], (void*)0, (void*)0, 0, 0, 0); }
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1445))->keys[it_216]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            (come_push_stackframe("./comelang2.h", 1448),__exception_result_var_b288=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1448))->key_list, "./comelang2.h", 1448)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1448))->keys[it_216]), come_pop_stackframe(), __exception_result_var_b288);
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1449))->keys[it_216]=key;
                        }
                        if(_if_conditional291=1,                        _if_conditional291) {
                            if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1452))->items[it_216] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1452))->items[it_216], (void*)0, (void*)0, 0, 0, 0, 0); }
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1453))->items[it_216]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1456))->items[it_216]=item;
                        }
                        break;
                    }
                    it_216++;
                    if(_if_conditional292=it_216>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1463))->size,                    _if_conditional292) {
                        it_216=0;
                    }
                    else {
                        if(_if_conditional293=it_216==hash_215,                        _if_conditional293) {
                            (come_push_stackframe("./comelang2.h", 1467),__exception_result_var_b289=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b289);
                            (come_push_stackframe("./comelang2.h", 1468),stackframe(),come_pop_stackframe());
                            (come_push_stackframe("./comelang2.h", 1469),exit(2),come_pop_stackframe());
                        }
                    }
                }
                else {
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1473))->item_existance[it_216]=(_Bool)1;
                    if(_if_conditional294=1,                    _if_conditional294) {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1475))->keys[it_216]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1478))->keys[it_216]=key;
                    }
                    if(_if_conditional295=1,                    _if_conditional295) {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1481))->items[it_216]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1484))->items[it_216]=item;
                    }
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1487))->len++;
                    break;
                }
            }
            same_key_exist_217=(_Bool)0;
            for(
            it2_218=(come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b290=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1494))->key_list, "./comelang2.h", 1494))), come_pop_stackframe(), __exception_result_var_b290) ,            0;            _for_condtionalA15=            !(come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b291=list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1494))->key_list, "./comelang2.h", 1494))), come_pop_stackframe(), __exception_result_var_b291) ,            _for_condtionalA15;            it2_218=(come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b292=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1494))->key_list, "./comelang2.h", 1494))), come_pop_stackframe(), __exception_result_var_b292) ,            0            ){
                if(_if_conditional296=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1496),__exception_result_var_b293=((struct optional$2boolbool*)(right_value242=string_equals(((char*)come_null_check(it2_218, "./comelang2.h", 1496)),key))), come_pop_stackframe(), __exception_result_var_b293)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242),
                (right_value242 && right_value242 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value242, 
                __freed_obj__ = 0, 
                _if_conditional296) {
                    same_key_exist_217=(_Bool)1;
                }
            }
            if(_if_conditional297=!same_key_exist_217,            _if_conditional297) {
                (come_push_stackframe("./comelang2.h", 1502),__exception_result_var_b294=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1502))->key_list, "./comelang2.h", 1502)),key), come_pop_stackframe(), __exception_result_var_b294);
            }
            __result149__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result149__;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_198;
void* right_value237;
char** keys_199;
void* right_value238;
struct sType** items_200;
void* right_value239;
_Bool* item_existance_201;
int len_202;
char* __exception_result_var_b273;
char* it_205;
_Bool __exception_result_var_b274;
_Bool _for_condtionalA14;
char* __exception_result_var_b277;
struct sType* default_value_208;
void* __exception_result_var_b278;
struct sType* __exception_result_var_b281;
struct sType* it2_211;
unsigned int __exception_result_var_b282;
unsigned int hash_212;
int n_213;
_Bool _while_condtional28;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
int __exception_result_var_b283;
struct sType* default_value_214;
struct sType* __exception_result_var_b284;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_198, 0, sizeof(int));
memset(&right_value237, 0, sizeof(void*));
memset(&keys_199, 0, sizeof(char**));
memset(&right_value238, 0, sizeof(void*));
memset(&items_200, 0, sizeof(struct sType**));
memset(&right_value239, 0, sizeof(void*));
memset(&item_existance_201, 0, sizeof(_Bool*));
memset(&len_202, 0, sizeof(int));
memset(&it_205, 0, sizeof(char*));
memset(&default_value_208, 0, sizeof(struct sType*));
memset(&it2_211, 0, sizeof(struct sType*));
memset(&hash_212, 0, sizeof(unsigned int));
memset(&n_213, 0, sizeof(int));
memset(&default_value_214, 0, sizeof(struct sType*));
                    size_198=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1378))->size*10;
                    keys_199=(char**)come_increment_ref_count(((char**)(right_value237=(char**)come_calloc(1, sizeof(char*)*(1*(size_198)), "./comelang2.h", 1379, "char*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
                    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value237;
                    __freed_obj__ = 0;
                    items_200=(struct sType**)come_increment_ref_count(((struct sType**)(right_value238=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_198)), "./comelang2.h", 1380, "struct sType*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value238);
                    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value238;
                    __freed_obj__ = 0;
                    item_existance_201=(_Bool*)come_increment_ref_count(((_Bool*)(right_value239=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_198)), "./comelang2.h", 1381, "_Bool"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value239);
                    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value239;
                    __freed_obj__ = 0;
                    len_202=0;
                    for(
                    it_205=(come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b273=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1385))), come_pop_stackframe(), __exception_result_var_b273) ,                    0;                    _for_condtionalA14=                    !(come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b274=map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1385))), come_pop_stackframe(), __exception_result_var_b274) ,                    _for_condtionalA14;                    it_205=(come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b277=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1385))), come_pop_stackframe(), __exception_result_var_b277) ,                    0                    ){
                        (come_push_stackframe("./comelang2.h", 1387),__exception_result_var_b278=memset(&default_value_208,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b278);
                        it2_211=(come_push_stackframe("./comelang2.h", 1388),__exception_result_var_b281=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1388)),it_205,default_value_208), come_pop_stackframe(), __exception_result_var_b281);
                        hash_212=(come_push_stackframe("./comelang2.h", 1389),__exception_result_var_b282=string_get_hash_key(((char*)come_null_check(it_205, "./comelang2.h", 1389))), come_pop_stackframe(), __exception_result_var_b282)%size_198;
                        n_213=hash_212;
                        while(_while_condtional28=(_Bool)1,                        _while_condtional28) {
                            if(_if_conditional285=item_existance_201[n_213],                            _if_conditional285) {
                                n_213++;
                                if(_if_conditional286=n_213>=size_198,                                _if_conditional286) {
                                    n_213=0;
                                }
                                else {
                                    if(_if_conditional287=n_213==hash_212,                                    _if_conditional287) {
                                        (come_push_stackframe("./comelang2.h", 1401),__exception_result_var_b283=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b283);
                                        (come_push_stackframe("./comelang2.h", 1402),stackframe(),come_pop_stackframe());
                                        (come_push_stackframe("./comelang2.h", 1403),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                item_existance_201[n_213]=(_Bool)1;
                                keys_199[n_213]=it_205;
                                items_200[n_213]=(come_push_stackframe("./comelang2.h", 1410),__exception_result_var_b284=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1410)),it_205,default_value_214), come_pop_stackframe(), __exception_result_var_b284);
                                len_202++;
                                break;
                            }
                        }
                    }
                    (come_push_stackframe("./comelang2.h", 1418),come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1418))->items),come_pop_stackframe());
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1419))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1419))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1419))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    (come_push_stackframe("./comelang2.h", 1420),come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1420))->keys),come_pop_stackframe());
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1422))->keys=keys_199;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1423))->items=items_200;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->item_existance=item_existance_201;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1426))->size=size_198;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1427))->len=len_202;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional277;
char* result_203;
void* __exception_result_var_b271;
char* __result138__;
_Bool _if_conditional278;
char* __result139__;
char* result_204;
void* __exception_result_var_b272;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_203, 0, sizeof(char*));
memset(&result_204, 0, sizeof(char*));
                        if(_if_conditional277=self==((void*)0),                        _if_conditional277) {
                            (come_push_stackframe("./comelang2.h", 1342),__exception_result_var_b271=memset(&result_203,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b271);
                            __result138__ = __result_obj__ = result_203;
                            return __result138__;
                        }
                        ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->head;
                        if(_if_conditional278=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1347))->key_list, "./comelang2.h", 1347))->it,                        _if_conditional278) {
                            __result139__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1348))->key_list, "./comelang2.h", 1348))->it, "./comelang2.h", 1348))->item;
                            return __result139__;
                        }
                        (come_push_stackframe("./comelang2.h", 1352),__exception_result_var_b272=memset(&result_204,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b272);
                        __result140__ = __result_obj__ = result_204;
                        return __result140__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result141__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1374))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1374))->key_list, "./comelang2.h", 1374))->it==((void*)0);
                        return __result141__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional279;
char* result_206;
void* __exception_result_var_b275;
char* __result142__;
_Bool _if_conditional280;
char* __result143__;
char* result_207;
void* __exception_result_var_b276;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_206, 0, sizeof(char*));
memset(&result_207, 0, sizeof(char*));
                        if(_if_conditional279=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1357))->key_list, "./comelang2.h", 1357))->it==((void*)0),                        _if_conditional279) {
                            (come_push_stackframe("./comelang2.h", 1359),__exception_result_var_b275=memset(&result_206,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b275);
                            __result142__ = __result_obj__ = result_206;
                            return __result142__;
                        }
                        ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it, "./comelang2.h", 1362))->next;
                        if(_if_conditional280=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1364))->key_list, "./comelang2.h", 1364))->it,                        _if_conditional280) {
                            __result143__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it, "./comelang2.h", 1365))->item;
                            return __result143__;
                        }
                        (come_push_stackframe("./comelang2.h", 1369),__exception_result_var_b276=memset(&result_207,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b276);
                        __result144__ = __result_obj__ = result_207;
                        return __result144__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b279;
unsigned int hash_209;
unsigned int it_210;
_Bool _while_condtional27;
_Bool _if_conditional281;
void* right_value240;
struct optional$2boolbool* __exception_result_var_b280;
_Bool _if_conditional282;
struct sType* __result145__;
_Bool _if_conditional283;
_Bool _if_conditional284;
struct sType* __result146__;
struct sType* __result147__;
struct sType* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_209, 0, sizeof(unsigned int));
memset(&it_210, 0, sizeof(unsigned int));
memset(&right_value240, 0, sizeof(void*));
                            hash_209=(come_push_stackframe("./comelang2.h", 1267),__exception_result_var_b279=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1267))), come_pop_stackframe(), __exception_result_var_b279)%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1267))->size;
                            it_210=hash_209;
                            while(_while_condtional27=(_Bool)1,                            _while_condtional27) {
                                if(_if_conditional281=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1271))->item_existance[it_210],                                _if_conditional281) {
                                    if(_if_conditional282=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1273),__exception_result_var_b280=((struct optional$2boolbool*)(right_value240=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1273))->keys[it_210], "./comelang2.h", 1273)),key))), come_pop_stackframe(), __exception_result_var_b280)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240),
                                    (right_value240 && right_value240 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value240, 
                                    __freed_obj__ = 0, 
                                    _if_conditional282) {
                                        __result145__ = __result_obj__ = ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1275))->items[it_210];
                                        return __result145__;
                                    }
                                    it_210++;
                                    if(_if_conditional283=it_210>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1280))->size,                                    _if_conditional283) {
                                        it_210=0;
                                    }
                                    else {
                                        if(_if_conditional284=it_210==hash_209,                                        _if_conditional284) {
                                            __result146__ = __result_obj__ = default_value;
                                            return __result146__;
                                        }
                                    }
                                }
                                else {
                                    __result147__ = __result_obj__ = default_value;
                                    return __result147__;
                                }
                            }
                            __result148__ = __result_obj__ = default_value;
                            return __result148__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional298;
void* right_value246;
struct list_item$1tuple2$2charphsTypephph* litem_220;
struct tuple2$2charphsTypeph* __dec_obj83;
_Bool _if_conditional301;
void* right_value247;
struct list_item$1tuple2$2charphsTypephph* litem_221;
struct tuple2$2charphsTypeph* __dec_obj84;
void* right_value248;
struct list_item$1tuple2$2charphsTypephph* litem_222;
struct tuple2$2charphsTypeph* __dec_obj85;
struct list$1tuple2$2charphsTypephph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value246, 0, sizeof(void*));
memset(&litem_220, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value247, 0, sizeof(void*));
memset(&litem_221, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value248, 0, sizeof(void*));
memset(&litem_222, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional298=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 280))->len==0,            _if_conditional298) {
                litem_220=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value246=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 281, "struct list_item$1tuple2$2charphsTypephph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value246;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_220, "./comelang2.h", 283))->prev=((void*)0);
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_220, "./comelang2.h", 284))->next=((void*)0);
                __dec_obj83=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_220, "./comelang2.h", 285))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_220, "./comelang2.h", 285))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj83) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 287))->tail=litem_220;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->head=litem_220;
            }
            else {
                if(_if_conditional301=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 290))->len==1,                _if_conditional301) {
                    litem_221=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value247=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 291, "struct list_item$1tuple2$2charphsTypephph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value247;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_221, "./comelang2.h", 293))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 293))->head;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_221, "./comelang2.h", 294))->next=((void*)0);
                    __dec_obj84=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_221, "./comelang2.h", 295))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_221, "./comelang2.h", 295))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj84) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 297))->tail=litem_221;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 298))->head, "./comelang2.h", 298))->next=litem_221;
                }
                else {
                    litem_222=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value248=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 301, "struct list_item$1tuple2$2charphsTypephph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
                    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value248;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_222, "./comelang2.h", 303))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 303))->tail;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_222, "./comelang2.h", 304))->next=((void*)0);
                    __dec_obj85=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_222, "./comelang2.h", 305))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_222, "./comelang2.h", 305))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj85) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 307))->tail, "./comelang2.h", 307))->next=litem_222;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 308))->tail=litem_222;
                }
            }
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 311))->len++;
            __result150__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result150__;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional299;
_Bool _if_conditional300;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional299=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1!=((void*)0),                    _if_conditional299) {
                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional300=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2!=((void*)0),                    _if_conditional300) {
                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value250;
char* __dec_obj86;
void* right_value251;
struct sType* __dec_obj87;
struct tuple2$2charphsTypeph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
            __dec_obj86=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1816))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1816))->v1=(char*)come_increment_ref_count(((char*)(right_value250=string_clone(v1))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
            if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value250;
            __freed_obj__ = 0;
            __dec_obj87=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1817))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1817))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(v2))));
            if(__dec_obj87) { come_call_finalizer(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value251;
            __freed_obj__ = 0;
            __result151__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result151__;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
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
void* right_value277;
char* __exception_result_var_b320;
char* project_name_223;
void* right_value278;
char* __exception_result_var_b321;
void* right_value279;
char* __exception_result_var_b322;
void* right_value280;
char* __exception_result_var_b323;
char* project_name_debug_224;
void* right_value281;
char* __exception_result_var_b324;
char* cc_225;
void* right_value282;
char* __exception_result_var_b325;
char* install_226;
void* right_value283;
char* __exception_result_var_b326;
char* libs_227;
void* right_value284;
char* __exception_result_var_b327;
char* os_228;
void* right_value285;
char* __exception_result_var_b328;
char* prefix_229;
void* right_value286;
char* __exception_result_var_b329;
char* cflags_230;
void* right_value287;
char* __exception_result_var_b330;
char* cflags_debug_231;
int __exception_result_var_b331;
_Bool _or_conditional1;
_Bool __exception_result_var_b332;
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
struct optional$2intbool* __exception_result_var_b333;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value277, 0, sizeof(void*));
memset(&project_name_223, 0, sizeof(char*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&project_name_debug_224, 0, sizeof(char*));
memset(&right_value281, 0, sizeof(void*));
memset(&cc_225, 0, sizeof(char*));
memset(&right_value282, 0, sizeof(void*));
memset(&install_226, 0, sizeof(char*));
memset(&right_value283, 0, sizeof(void*));
memset(&libs_227, 0, sizeof(char*));
memset(&right_value284, 0, sizeof(void*));
memset(&os_228, 0, sizeof(char*));
memset(&right_value285, 0, sizeof(void*));
memset(&prefix_229, 0, sizeof(char*));
memset(&right_value286, 0, sizeof(void*));
memset(&cflags_230, 0, sizeof(char*));
memset(&right_value287, 0, sizeof(void*));
memset(&cflags_debug_231, 0, sizeof(char*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
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
    project_name_223=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 481),__exception_result_var_b320=((char*)(right_value277=__builtin_string(argv[2]))), come_pop_stackframe(), __exception_result_var_b320));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value277;
    __freed_obj__ = 0;
    project_name_debug_224=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 482),__exception_result_var_b323=((char*)(right_value280=string_operator_add((come_push_stackframe("02transpile.c", 482),__exception_result_var_b321=((char*)(right_value278=__builtin_string(argv[2]))), come_pop_stackframe(), __exception_result_var_b321),(come_push_stackframe("02transpile.c", 482),__exception_result_var_b322=((char*)(right_value279=__builtin_string("-debug"))), come_pop_stackframe(), __exception_result_var_b322)))), come_pop_stackframe(), __exception_result_var_b323));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value278;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value279);
    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value279;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value280);
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value280;
    __freed_obj__ = 0;
    cc_225=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 483),__exception_result_var_b324=((char*)(right_value281=__builtin_string("comelang2"))), come_pop_stackframe(), __exception_result_var_b324));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value281);
    if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value281;
    __freed_obj__ = 0;
    install_226=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 484),__exception_result_var_b325=((char*)(right_value282=__builtin_string("install"))), come_pop_stackframe(), __exception_result_var_b325));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value282);
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value282;
    __freed_obj__ = 0;
    libs_227=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 485),__exception_result_var_b326=((char*)(right_value283=__builtin_string("-lpcre"))), come_pop_stackframe(), __exception_result_var_b326));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value283);
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value283;
    __freed_obj__ = 0;
    os_228=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 486),__exception_result_var_b327=((char*)(right_value284=__builtin_string("linux"))), come_pop_stackframe(), __exception_result_var_b327));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value284;
    __freed_obj__ = 0;
    prefix_229=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 487),__exception_result_var_b328=((char*)(right_value285=__builtin_string("/usr/local/"))), come_pop_stackframe(), __exception_result_var_b328));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value285);
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value285;
    __freed_obj__ = 0;
    cflags_230=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 488),__exception_result_var_b329=((char*)(right_value286=__builtin_string(" -common-header -O2 "))), come_pop_stackframe(), __exception_result_var_b329));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value286);
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value286;
    __freed_obj__ = 0;
    cflags_debug_231=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 489),__exception_result_var_b330=((char*)(right_value287=__builtin_string(" -common-header -gdwarf-4 -cg "))), come_pop_stackframe(), __exception_result_var_b330));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value287);
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value287;
    __freed_obj__ = 0;
    if(_or_conditional1=(come_push_stackframe("02transpile.c", 491),__exception_result_var_b331=mkdir(project_name_223,(256|128|64)|((256|128|64)>>3)|((256>>3)>>3)|((64>>3)>>3)), come_pop_stackframe(), __exception_result_var_b331),    _or_conditional1 != 0) {
        (come_push_stackframe("02transpile.c", 491),__exception_result_var_b332=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b332);
    }
    optional$2intbool_value((come_push_stackframe("02transpile.c", 580),__exception_result_var_b333=((struct optional$2intbool*)(right_value316=charp_write(((char*)come_null_check(((char*)(right_value313=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: common.h \%s\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c header\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader:\n\tcomelang2 header $(SINGLE_SRCS)\n\ncommon.h: *.c\n\tbash -c 'shopt -s extglob; comelang2 header !(*.c).c'\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm *.log\n\t./\%s\n\ndebug: \%s\n\trm *.log\n\t./\%s\n",((char*)(right_value288=string_to_string(prefix_229))),((char*)(right_value289=string_to_string(project_name_223))),((char*)(right_value290=string_to_string(project_name_223))),((char*)(right_value291=string_to_string(project_name_223))),((char*)(right_value292=string_to_string(project_name_223))),((char*)(right_value293=string_to_string(cc_225))),((char*)(right_value294=string_to_string(install_226))),((char*)(right_value295=string_to_string(cflags_230))),((char*)(right_value296=string_to_string(cflags_debug_231))),((char*)(right_value297=string_to_string(libs_227))),((char*)(right_value298=string_to_string(os_228))),((char*)(right_value299=string_to_string(prefix_229))),((char*)(right_value300=string_to_string(project_name_223))),((char*)(right_value301=string_to_string(project_name_debug_224))),((char*)(right_value302=string_to_string(project_name_223))),((char*)(right_value303=string_to_string(project_name_223))),((char*)(right_value304=string_to_string(project_name_223))),((char*)(right_value305=string_to_string(project_name_223))),((char*)(right_value306=string_to_string(project_name_223))),((char*)(right_value307=string_to_string(project_name_223))),((char*)(right_value308=string_to_string(project_name_223))),((char*)(right_value309=string_to_string(project_name_223))),((char*)(right_value310=string_to_string(project_name_223))),((char*)(right_value311=string_to_string(project_name_debug_224))),((char*)(right_value312=string_to_string(project_name_debug_224)))))), "02transpile.c", 580)),((char*)(right_value315=xsprintf("\%s/Makefile",((char*)(right_value314=string_to_string(project_name_223)))))),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b333));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value288);
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value288;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value289);
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value289;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value290);
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value290;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value291);
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value291;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value292);
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value292;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value293);
    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value293;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value294);
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value294;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value295);
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value295;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value296);
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value296;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value297);
    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value297;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value298;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value299);
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value299;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value300);
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value300;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value301);
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value301;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value302;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value303);
    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value303;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value304);
    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value304;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value305);
    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value305;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value306);
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value306;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value307);
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value307;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value308;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value309);
    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value309;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value310);
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[33] = right_value310;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value311);
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[34] = right_value311;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 35, right_value312);
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[35] = right_value312;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 36, right_value313);
    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[36] = right_value313;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 37, right_value314);
    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[37] = right_value314;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 38, right_value315);
    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[38] = right_value315;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 39, right_value316);
    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[39] = right_value316;
    __freed_obj__ = 0;
    __result152__ = (_Bool)1;
    if(project_name_223 && !__freed_obj__) { project_name_223 = come_decrement_ref_count(project_name_223, (void*)0, (void*)0, 0, 0, 0); }
    if(project_name_debug_224 && !__freed_obj__) { project_name_debug_224 = come_decrement_ref_count(project_name_debug_224, (void*)0, (void*)0, 0, 0, 0); }
    if(cc_225 && !__freed_obj__) { cc_225 = come_decrement_ref_count(cc_225, (void*)0, (void*)0, 0, 0, 0); }
    if(install_226 && !__freed_obj__) { install_226 = come_decrement_ref_count(install_226, (void*)0, (void*)0, 0, 0, 0); }
    if(libs_227 && !__freed_obj__) { libs_227 = come_decrement_ref_count(libs_227, (void*)0, (void*)0, 0, 0, 0); }
    if(os_228 && !__freed_obj__) { os_228 = come_decrement_ref_count(os_228, (void*)0, (void*)0, 0, 0, 0); }
    if(prefix_229 && !__freed_obj__) { prefix_229 = come_decrement_ref_count(prefix_229, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_230 && !__freed_obj__) { cflags_230 = come_decrement_ref_count(cflags_230, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_debug_231 && !__freed_obj__) { cflags_debug_231 = come_decrement_ref_count(cflags_debug_231, (void*)0, (void*)0, 0, 0, 0); }
    return __result152__;
    if(project_name_223 && !__freed_obj__) { project_name_223 = come_decrement_ref_count(project_name_223, (void*)0, (void*)0, 0, 0, 0); }
    if(project_name_debug_224 && !__freed_obj__) { project_name_debug_224 = come_decrement_ref_count(project_name_debug_224, (void*)0, (void*)0, 0, 0, 0); }
    if(cc_225 && !__freed_obj__) { cc_225 = come_decrement_ref_count(cc_225, (void*)0, (void*)0, 0, 0, 0); }
    if(install_226 && !__freed_obj__) { install_226 = come_decrement_ref_count(install_226, (void*)0, (void*)0, 0, 0, 0); }
    if(libs_227 && !__freed_obj__) { libs_227 = come_decrement_ref_count(libs_227, (void*)0, (void*)0, 0, 0, 0); }
    if(os_228 && !__freed_obj__) { os_228 = come_decrement_ref_count(os_228, (void*)0, (void*)0, 0, 0, 0); }
    if(prefix_229 && !__freed_obj__) { prefix_229 = come_decrement_ref_count(prefix_229, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_230 && !__freed_obj__) { cflags_230 = come_decrement_ref_count(cflags_230, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_debug_231 && !__freed_obj__) { cflags_debug_231 = come_decrement_ref_count(cflags_debug_231, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b334;
_Bool _or_conditional2;
_Bool __exception_result_var_b335;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_or_conditional2=(come_push_stackframe("02transpile.c", 587),__exception_result_var_b334=system("make run"), come_pop_stackframe(), __exception_result_var_b334),    _or_conditional2 != 0) {
        (come_push_stackframe("02transpile.c", 587),__exception_result_var_b335=die("system"), come_pop_stackframe(), __exception_result_var_b335);
    }
    __result153__ = (_Bool)1;
    return __result153__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b336;
_Bool _or_conditional3;
_Bool __exception_result_var_b337;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_or_conditional3=(come_push_stackframe("02transpile.c", 594),__exception_result_var_b336=system("make debug"), come_pop_stackframe(), __exception_result_var_b336),    _or_conditional3 != 0) {
        (come_push_stackframe("02transpile.c", 594),__exception_result_var_b337=die("system"), come_pop_stackframe(), __exception_result_var_b337);
    }
    __result154__ = (_Bool)1;
    return __result154__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b338;
_Bool _or_conditional4;
_Bool __exception_result_var_b339;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_or_conditional4=(come_push_stackframe("02transpile.c", 601),__exception_result_var_b338=system("make clean"), come_pop_stackframe(), __exception_result_var_b338),    _or_conditional4 != 0) {
        (come_push_stackframe("02transpile.c", 601),__exception_result_var_b339=die("system"), come_pop_stackframe(), __exception_result_var_b339);
    }
    __result155__ = (_Bool)1;
    return __result155__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value317;
void* right_value318;
int __exception_result_var_b340;
_Bool _or_conditional5;
_Bool __exception_result_var_b341;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
    if(_or_conditional5=(come_push_stackframe("02transpile.c", 608),__exception_result_var_b340=system(((char*)(right_value318=xsprintf("make install DESTDIR=\%s",((char*)(right_value317=charp_to_string(prefix))))))), come_pop_stackframe(), __exception_result_var_b340),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317),
    (right_value317 && right_value317 != __result_obj__ && !__freed_obj__) ? right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value317, 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value318),
    (right_value318 && right_value318 != __result_obj__ && !__freed_obj__) ? right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[1] = right_value318, 
    __freed_obj__ = 0, 
    _or_conditional5 != 0) {
        (come_push_stackframe("02transpile.c", 608),__exception_result_var_b341=die("system"), come_pop_stackframe(), __exception_result_var_b341);
    }
    __result156__ = (_Bool)1;
    return __result156__;
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b342;
_Bool _if_conditional302;
void* right_value319;
void* right_value320;
struct buffer* __exception_result_var_b343;
struct buffer* clang_option_232;
void* right_value321;
void* right_value322;
struct buffer* __exception_result_var_b344;
struct buffer* cpp_option_233;
void* right_value323;
void* right_value324;
struct list$1charph* __exception_result_var_b345;
struct list$1charph* files_234;
void* right_value325;
void* right_value326;
struct list$1charph* __exception_result_var_b346;
struct list$1charph* object_files_235;
_Bool output_object_file_236;
_Bool output_cpp_file_237;
_Bool output_source_file_flag_238;
void* right_value327;
char* __exception_result_var_b347;
char* output_file_name_239;
_Bool verbose_240;
_Bool prohibit_common_header_241;
_Bool come_debug_242;
_Bool come_malloc_243;
_Bool come_str_244;
int i_245;
_Bool _for_condtionalA16;
_Bool __exception_result_var_b348;
_Bool _if_conditional303;
void* right_value328;
char* __exception_result_var_b349;
char* __dec_obj88;
_Bool __exception_result_var_b350;
_Bool _if_conditional304;
_Bool __exception_result_var_b351;
_Bool _if_conditional305;
_Bool __exception_result_var_b352;
_Bool _if_conditional306;
_Bool __exception_result_var_b353;
_Bool _if_conditional307;
struct buffer* __exception_result_var_b354;
_Bool __exception_result_var_b355;
_Bool _if_conditional308;
struct buffer* __exception_result_var_b356;
_Bool __exception_result_var_b357;
_Bool _if_conditional309;
_Bool __exception_result_var_b358;
_Bool _if_conditional310;
void* right_value329;
char* __exception_result_var_b359;
_Bool __exception_result_var_b360;
_Bool _if_conditional311;
void* right_value330;
void* right_value331;
struct buffer* __exception_result_var_b361;
void* right_value332;
char* __exception_result_var_b362;
_Bool __exception_result_var_b363;
_Bool _if_conditional312;
void* right_value333;
void* right_value334;
struct buffer* __exception_result_var_b364;
void* right_value335;
void* right_value336;
struct buffer* __exception_result_var_b365;
_Bool __exception_result_var_b366;
_Bool _if_conditional313;
struct buffer* __exception_result_var_b367;
long int __exception_result_var_b368;
long int __exception_result_var_b369;
int __exception_result_var_b370;
_Bool _if_conditional314;
void* right_value337;
char* __exception_result_var_b371;
void* right_value338;
char* __exception_result_var_b372;
struct buffer* __exception_result_var_b373;
_Bool __exception_result_var_b374;
_Bool _if_conditional315;
struct buffer* __exception_result_var_b375;
_Bool __exception_result_var_b376;
_Bool __exception_result_var_b377;
_Bool _if_conditional316;
_Bool __exception_result_var_b378;
_Bool _if_conditional317;
_Bool __exception_result_var_b379;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value339;
char* __exception_result_var_b380;
struct buffer* __exception_result_var_b381;
long int __exception_result_var_b382;
long int __exception_result_var_b383;
int __exception_result_var_b384;
_Bool _if_conditional320;
void* right_value340;
char* __exception_result_var_b385;
struct list$1charph* __exception_result_var_b386;
void* right_value341;
char* __exception_result_var_b387;
struct list$1charph* __exception_result_var_b388;
_Bool _if_conditional321;
_Bool _if_conditional322;
struct buffer* __exception_result_var_b389;
struct buffer* __exception_result_var_b390;
struct _IO_FILE* __exception_result_var_b391;
struct _IO_FILE* f_246;
_Bool _and_conditional1;
_Bool __exception_result_var_b392;
int __exception_result_var_b393;
int __exception_result_var_b394;
_Bool _or_conditional6;
_Bool __exception_result_var_b395;
struct list$1charph* o2_saved_247;
char* __exception_result_var_b396;
char* it_248;
_Bool __exception_result_var_b397;
_Bool _for_condtionalA17;
char* __exception_result_var_b398;
struct sInfo info_249;
void* __exception_result_var_b399;
void* right_value342;
char* __exception_result_var_b400;
char* __dec_obj89;
void* right_value343;
char* __exception_result_var_b401;
char* __dec_obj90;
void* right_value344;
char* __exception_result_var_b402;
char* __dec_obj91;
void* right_value345;
char* __exception_result_var_b403;
char* __dec_obj92;
void* right_value346;
void* right_value352;
struct map$2charphsFunph* __exception_result_var_b405;
struct map$2charphsFunph* __dec_obj94;
void* right_value353;
void* right_value359;
struct map$2charphsGenericsFunph* __exception_result_var_b407;
struct map$2charphsGenericsFunph* __dec_obj96;
void* right_value360;
void* right_value366;
struct map$2charphsClassph* __exception_result_var_b409;
struct map$2charphsClassph* __dec_obj98;
void* right_value367;
void* right_value373;
struct map$2charphsTypeph* __exception_result_var_b411;
struct map$2charphsTypeph* __dec_obj100;
void* right_value374;
void* right_value375;
struct sModule* __exception_result_var_b412;
struct sModule* __dec_obj101;
void* right_value376;
void* right_value377;
struct list$1sRightValueObjectph* __exception_result_var_b413;
struct list$1sRightValueObjectph* __dec_obj102;
void* right_value378;
void* right_value379;
struct list$1CVALUEph* __exception_result_var_b414;
struct list$1CVALUEph* __dec_obj103;
void* right_value380;
void* right_value381;
struct sVarTable* __exception_result_var_b415;
struct sVarTable* __dec_obj104;
void* right_value382;
void* right_value383;
struct sVarTable* __exception_result_var_b416;
struct sVarTable* lv_table_266;
void* right_value384;
void* right_value385;
struct list$1charph* __exception_result_var_b417;
struct list$1charph* __dec_obj105;
void* right_value386;
void* right_value387;
struct map$2charphsClassph* __exception_result_var_b418;
struct map$2charphsClassph* __dec_obj106;
static int n_267=0;
int __exception_result_var_b419;
void* right_value388;
char* __exception_result_var_b420;
char* __dec_obj107;
_Bool __exception_result_var_b421;
_Bool _if_conditional359;
int __exception_result_var_b422;
void* right_value389;
char* __exception_result_var_b423;
void* right_value390;
struct optional$2charphbool* __exception_result_var_b424;
void* right_value391;
struct buffer* __exception_result_var_b425;
struct buffer* __dec_obj108;
void* right_value392;
char* __exception_result_var_b426;
void* right_value393;
struct optional$2charphbool* __exception_result_var_b427;
void* right_value394;
struct buffer* __exception_result_var_b428;
struct buffer* __dec_obj109;
_Bool _if_conditional360;
int __exception_result_var_b429;
_Bool __exception_result_var_b430;
_Bool _if_conditional361;
int __exception_result_var_b431;
_Bool __exception_result_var_b432;
_Bool _if_conditional385;
_Bool __exception_result_var_b433;
_Bool _if_conditional386;
int __result164__;
_Bool __exception_result_var_b434;
_Bool _if_conditional387;
_Bool __exception_result_var_b435;
_Bool _if_conditional388;
int __result165__;
_Bool __exception_result_var_b436;
_Bool _if_conditional389;
_Bool __exception_result_var_b437;
_Bool _if_conditional390;
int __result166__;
_Bool __exception_result_var_b438;
_Bool _if_conditional391;
_Bool __exception_result_var_b439;
_Bool _if_conditional392;
int __result167__;
_Bool __exception_result_var_b440;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool __exception_result_var_b441;
_Bool _if_conditional395;
int __result168__;
_Bool _if_conditional396;
_Bool __exception_result_var_b442;
_Bool _if_conditional397;
int __result169__;
void* right_value395;
void* right_value396;
struct buffer* __exception_result_var_b443;
struct buffer* clang_option_268;
void* right_value397;
void* right_value398;
struct buffer* __exception_result_var_b444;
struct buffer* cpp_option_269;
void* right_value399;
void* right_value400;
struct list$1charph* __exception_result_var_b445;
struct list$1charph* files_270;
void* right_value401;
void* right_value402;
struct list$1charph* __exception_result_var_b446;
struct list$1charph* object_files_271;
_Bool output_object_file_272;
_Bool output_cpp_file_273;
_Bool output_source_file_flag_274;
char* output_file_name_275;
_Bool verbose_276;
_Bool come_debug_277;
_Bool come_malloc_278;
_Bool come_str_279;
int i_280;
_Bool _for_condtionalA30;
_Bool __exception_result_var_b447;
_Bool _if_conditional398;
void* right_value403;
char* __exception_result_var_b448;
char* __dec_obj110;
_Bool __exception_result_var_b449;
_Bool _if_conditional399;
_Bool __exception_result_var_b450;
_Bool _if_conditional400;
_Bool __exception_result_var_b451;
_Bool _if_conditional401;
_Bool __exception_result_var_b452;
_Bool _if_conditional402;
struct buffer* __exception_result_var_b453;
_Bool __exception_result_var_b454;
_Bool _if_conditional403;
_Bool __exception_result_var_b455;
_Bool _if_conditional404;
void* right_value404;
char* __exception_result_var_b456;
_Bool __exception_result_var_b457;
_Bool _if_conditional405;
void* right_value405;
void* right_value406;
struct buffer* __exception_result_var_b458;
void* right_value407;
char* __exception_result_var_b459;
_Bool __exception_result_var_b460;
_Bool _if_conditional406;
void* right_value408;
void* right_value409;
struct buffer* __exception_result_var_b461;
void* right_value410;
void* right_value411;
struct buffer* __exception_result_var_b462;
_Bool __exception_result_var_b463;
_Bool _if_conditional407;
struct buffer* __exception_result_var_b464;
_Bool __exception_result_var_b465;
_Bool _if_conditional408;
struct buffer* __exception_result_var_b466;
long int __exception_result_var_b467;
long int __exception_result_var_b468;
int __exception_result_var_b469;
_Bool _if_conditional409;
void* right_value412;
char* __exception_result_var_b470;
void* right_value413;
char* __exception_result_var_b471;
struct buffer* __exception_result_var_b472;
_Bool __exception_result_var_b473;
_Bool _if_conditional410;
struct buffer* __exception_result_var_b474;
_Bool __exception_result_var_b475;
_Bool __exception_result_var_b476;
_Bool _if_conditional411;
_Bool __exception_result_var_b477;
_Bool _if_conditional412;
_Bool __exception_result_var_b478;
_Bool _if_conditional413;
_Bool _if_conditional414;
void* right_value414;
char* __exception_result_var_b479;
struct buffer* __exception_result_var_b480;
long int __exception_result_var_b481;
long int __exception_result_var_b482;
int __exception_result_var_b483;
_Bool _if_conditional415;
void* right_value415;
char* __exception_result_var_b484;
struct list$1charph* __exception_result_var_b485;
void* right_value416;
char* __exception_result_var_b486;
void* right_value417;
struct list$1charph* __exception_result_var_b487;
_Bool _if_conditional416;
_Bool _if_conditional417;
struct buffer* __exception_result_var_b488;
struct buffer* __exception_result_var_b489;
struct list$1charph* o2_saved_281;
char* __exception_result_var_b490;
char* it_282;
_Bool __exception_result_var_b491;
_Bool _for_condtionalA31;
char* __exception_result_var_b492;
struct sInfo info_283;
void* __exception_result_var_b493;
void* right_value418;
char* __exception_result_var_b494;
char* __dec_obj111;
void* right_value419;
char* __exception_result_var_b495;
char* __dec_obj112;
void* right_value420;
char* __exception_result_var_b496;
char* __dec_obj113;
void* right_value421;
void* right_value422;
struct map$2charphsFunph* __exception_result_var_b497;
struct map$2charphsFunph* __dec_obj114;
void* right_value423;
void* right_value424;
struct map$2charphsGenericsFunph* __exception_result_var_b498;
struct map$2charphsGenericsFunph* __dec_obj115;
void* right_value425;
void* right_value426;
struct map$2charphsClassph* __exception_result_var_b499;
struct map$2charphsClassph* __dec_obj116;
void* right_value427;
void* right_value428;
struct map$2charphsTypeph* __exception_result_var_b500;
struct map$2charphsTypeph* __dec_obj117;
void* right_value429;
void* right_value430;
struct sModule* __exception_result_var_b501;
struct sModule* __dec_obj118;
void* right_value431;
void* right_value432;
struct list$1sRightValueObjectph* __exception_result_var_b502;
struct list$1sRightValueObjectph* __dec_obj119;
void* right_value433;
void* right_value434;
struct list$1CVALUEph* __exception_result_var_b503;
struct list$1CVALUEph* __dec_obj120;
void* right_value435;
void* right_value436;
struct sVarTable* __exception_result_var_b504;
struct sVarTable* __dec_obj121;
void* right_value437;
void* right_value438;
struct sVarTable* __exception_result_var_b505;
struct sVarTable* lv_table_284;
void* right_value439;
void* right_value440;
struct list$1charph* __exception_result_var_b506;
struct list$1charph* __dec_obj122;
void* right_value441;
void* right_value442;
struct map$2charphsClassph* __exception_result_var_b507;
struct map$2charphsClassph* __dec_obj123;
_Bool __exception_result_var_b508;
_Bool _if_conditional418;
int __exception_result_var_b509;
void* right_value443;
char* __exception_result_var_b510;
void* right_value444;
struct optional$2charphbool* __exception_result_var_b511;
void* right_value445;
struct buffer* __exception_result_var_b512;
struct buffer* __dec_obj124;
void* right_value446;
char* __exception_result_var_b513;
void* right_value447;
struct optional$2charphbool* __exception_result_var_b514;
void* right_value448;
struct buffer* __exception_result_var_b515;
struct buffer* __dec_obj125;
_Bool _if_conditional419;
void* right_value449;
char* __exception_result_var_b516;
char* __dec_obj126;
char* __dec_obj127;
_Bool _if_conditional420;
int __exception_result_var_b517;
_Bool __exception_result_var_b518;
_Bool _if_conditional421;
int __exception_result_var_b519;
_Bool _if_conditional422;
int __exception_result_var_b520;
_Bool __exception_result_var_b521;
_Bool _if_conditional423;
int __exception_result_var_b522;
int __exception_result_var_b523;
int __exception_result_var_b524;
_Bool _if_conditional424;
struct sInfo info_285;
void* __exception_result_var_b525;
char* __exception_result_var_b527;
void* right_value450;
char* __dec_obj128;
void* right_value451;
char* __exception_result_var_b528;
char* __dec_obj129;
_Bool _if_conditional427;
void* right_value452;
char* __exception_result_var_b529;
char* __dec_obj130;
char* __dec_obj131;
_Bool __exception_result_var_b530;
struct __current_stack2__ __current_stack2__;
_Bool __exception_result_var_b532;
int __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&clang_option_232, 0, sizeof(struct buffer*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&cpp_option_233, 0, sizeof(struct buffer*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&files_234, 0, sizeof(struct list$1charph*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&object_files_235, 0, sizeof(struct list$1charph*));
memset(&output_object_file_236, 0, sizeof(_Bool));
memset(&output_cpp_file_237, 0, sizeof(_Bool));
memset(&output_source_file_flag_238, 0, sizeof(_Bool));
memset(&right_value327, 0, sizeof(void*));
memset(&output_file_name_239, 0, sizeof(char*));
memset(&verbose_240, 0, sizeof(_Bool));
memset(&prohibit_common_header_241, 0, sizeof(_Bool));
memset(&come_debug_242, 0, sizeof(_Bool));
memset(&come_malloc_243, 0, sizeof(_Bool));
memset(&come_str_244, 0, sizeof(_Bool));
memset(&i_245, 0, sizeof(int));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
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
memset(&f_246, 0, sizeof(struct _IO_FILE*));
memset(&o2_saved_247, 0, sizeof(struct list$1charph*));
memset(&it_248, 0, sizeof(char*));
memset(&info_249, 0, sizeof(struct sInfo));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&lv_table_266, 0, sizeof(struct sVarTable*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&clang_option_268, 0, sizeof(struct buffer*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&cpp_option_269, 0, sizeof(struct buffer*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&files_270, 0, sizeof(struct list$1charph*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&object_files_271, 0, sizeof(struct list$1charph*));
memset(&output_object_file_272, 0, sizeof(_Bool));
memset(&output_cpp_file_273, 0, sizeof(_Bool));
memset(&output_source_file_flag_274, 0, sizeof(_Bool));
memset(&output_file_name_275, 0, sizeof(char*));
memset(&verbose_276, 0, sizeof(_Bool));
memset(&come_debug_277, 0, sizeof(_Bool));
memset(&come_malloc_278, 0, sizeof(_Bool));
memset(&come_str_279, 0, sizeof(_Bool));
memset(&i_280, 0, sizeof(int));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
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
memset(&o2_saved_281, 0, sizeof(struct list$1charph*));
memset(&it_282, 0, sizeof(char*));
memset(&info_283, 0, sizeof(struct sInfo));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
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
memset(&lv_table_284, 0, sizeof(struct sVarTable*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_value447, 0, sizeof(void*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&info_285, 0, sizeof(struct sInfo));
memset(&right_value450, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(_if_conditional302=(come_push_stackframe("02transpile.c", 615),__exception_result_var_b342=charp_operator_equals(argv[1],"header"), come_pop_stackframe(), __exception_result_var_b342)&&argc>=3,    _if_conditional302) {
        gProgramName=argv[0];
        clang_option_232=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 618),__exception_result_var_b343=((struct buffer*)(right_value320=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 618, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b343));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319);
        if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value319;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value320);
        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value320;
        __freed_obj__ = 0;
        cpp_option_233=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 619),__exception_result_var_b344=((struct buffer*)(right_value322=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value321=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 619, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b344));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value321);
        if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value321;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value322);
        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value322;
        __freed_obj__ = 0;
        files_234=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 620),__exception_result_var_b345=((struct list$1charph*)(right_value324=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value323=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 620, "struct list$1charph"))))))), come_pop_stackframe(), __exception_result_var_b345));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value323);
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value323;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value324;
        __freed_obj__ = 0;
        object_files_235=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 621),__exception_result_var_b346=((struct list$1charph*)(right_value326=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 621, "struct list$1charph"))))))), come_pop_stackframe(), __exception_result_var_b346));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value325;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value326);
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value326;
        __freed_obj__ = 0;
        output_object_file_236=(_Bool)0;
        output_cpp_file_237=(_Bool)0;
        output_source_file_flag_238=(_Bool)0;
        output_file_name_239=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 625),__exception_result_var_b347=((char*)(right_value327=__builtin_string("common.h"))), come_pop_stackframe(), __exception_result_var_b347));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value327);
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value327;
        __freed_obj__ = 0;
        verbose_240=(_Bool)0;
        prohibit_common_header_241=(_Bool)0;
        come_debug_242=(_Bool)0;
        come_malloc_243=(_Bool)0;
        come_str_244=(_Bool)0;
        for(
        i_245=2 ,        0;        _for_condtionalA16=        i_245<argc ,        _for_condtionalA16;        i_245++ ,        0        ){
            if(_if_conditional303=(come_push_stackframe("02transpile.c", 632),__exception_result_var_b348=charp_operator_equals(argv[i_245],"-o"), come_pop_stackframe(), __exception_result_var_b348)&&i_245+1<argc,            _if_conditional303) {
                __dec_obj88=output_file_name_239;
                output_file_name_239=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 633),__exception_result_var_b349=((char*)(right_value328=__builtin_string(argv[i_245+1]))), come_pop_stackframe(), __exception_result_var_b349));
                if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
                if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value328;
                __freed_obj__ = 0;
                i_245++;
            }
            else {
                if(_if_conditional304=(come_push_stackframe("02transpile.c", 636),__exception_result_var_b350=charp_operator_equals(argv[i_245],"-str"), come_pop_stackframe(), __exception_result_var_b350),                _if_conditional304) {
                    come_str_244=(_Bool)1;
                }
                else {
                    if(_if_conditional305=(come_push_stackframe("02transpile.c", 639),__exception_result_var_b351=charp_operator_equals(argv[i_245],"-leak"), come_pop_stackframe(), __exception_result_var_b351),                    _if_conditional305) {
                        come_malloc_243=(_Bool)1;
                    }
                    else {
                        if(_if_conditional306=(come_push_stackframe("02transpile.c", 642),__exception_result_var_b352=charp_operator_equals(argv[i_245],"-gc"), come_pop_stackframe(), __exception_result_var_b352),                        _if_conditional306) {
                            gComeGC=(_Bool)1;
                        }
                        else {
                            if(_if_conditional307=(come_push_stackframe("02transpile.c", 645),__exception_result_var_b353=charp_operator_equals(argv[i_245],"-g"), come_pop_stackframe(), __exception_result_var_b353),                            _if_conditional307) {
                                (come_push_stackframe("02transpile.c", 646),__exception_result_var_b354=buffer_append_str(((struct buffer*)come_null_check(clang_option_232, "02transpile.c", 646)),"-g "), come_pop_stackframe(), __exception_result_var_b354);
                            }
                            else {
                                if(_if_conditional308=(come_push_stackframe("02transpile.c", 648),__exception_result_var_b355=charp_operator_equals(argv[i_245],"-cg"), come_pop_stackframe(), __exception_result_var_b355),                                _if_conditional308) {
                                    (come_push_stackframe("02transpile.c", 649),__exception_result_var_b356=buffer_append_str(((struct buffer*)come_null_check(clang_option_232, "02transpile.c", 649)),"-g "), come_pop_stackframe(), __exception_result_var_b356);
                                    come_debug_242=(_Bool)1;
                                }
                                else {
                                    if(_if_conditional309=(come_push_stackframe("02transpile.c", 652),__exception_result_var_b357=charp_operator_equals(argv[i_245],"-common-header"), come_pop_stackframe(), __exception_result_var_b357),                                    _if_conditional309) {
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional310=(come_push_stackframe("02transpile.c", 655),__exception_result_var_b358=charp_operator_equals(argv[i_245],"-original-position"), come_pop_stackframe(), __exception_result_var_b358),                                        _if_conditional310) {
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            if(_if_conditional311=(come_push_stackframe("02transpile.c", 658),__exception_result_var_b360=string_operator_equals((come_push_stackframe("02transpile.c", 658),__exception_result_var_b359=((char*)(right_value329=charp_operator_load_range_element(argv[i_245],0,2))), come_pop_stackframe(), __exception_result_var_b359),"-O"), come_pop_stackframe(), __exception_result_var_b360),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329),
                                            (right_value329 && right_value329 != __result_obj__ && !__freed_obj__) ? right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value329, 
                                            __freed_obj__ = 0, 
                                            _if_conditional311) {
                                                (come_push_stackframe("02transpile.c", 659),__exception_result_var_b361=buffer_append_str(((struct buffer*)come_null_check(clang_option_232, "02transpile.c", 659)),((char*)(right_value331=xsprintf(" \%s ",((char*)(right_value330=charp_to_string(argv[i_245]))))))), come_pop_stackframe(), __exception_result_var_b361);
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
                                                if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value330;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value331);
                                                if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value331;
                                                __freed_obj__ = 0;
                                                come_debug_242=(_Bool)0;
                                            }
                                            else {
                                                if(_if_conditional312=(come_push_stackframe("02transpile.c", 662),__exception_result_var_b363=string_operator_equals((come_push_stackframe("02transpile.c", 662),__exception_result_var_b362=((char*)(right_value332=charp_operator_load_range_element(argv[i_245],0,2))), come_pop_stackframe(), __exception_result_var_b362),"-D"), come_pop_stackframe(), __exception_result_var_b363),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332),
                                                (right_value332 && right_value332 != __result_obj__ && !__freed_obj__) ? right_value332 = come_decrement_ref_count(right_value332, (void*)0, (void*)0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value332, 
                                                __freed_obj__ = 0, 
                                                _if_conditional312) {
                                                    (come_push_stackframe("02transpile.c", 663),__exception_result_var_b364=buffer_append_str(((struct buffer*)come_null_check(cpp_option_233, "02transpile.c", 663)),((char*)(right_value334=xsprintf(" \%s ",((char*)(right_value333=charp_to_string(argv[i_245]))))))), come_pop_stackframe(), __exception_result_var_b364);
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
                                                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value333;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value334);
                                                    if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value334;
                                                    __freed_obj__ = 0;
                                                    (come_push_stackframe("02transpile.c", 664),__exception_result_var_b365=buffer_append_str(((struct buffer*)come_null_check(clang_option_232, "02transpile.c", 664)),((char*)(right_value336=xsprintf(" \%s ",((char*)(right_value335=charp_to_string(argv[i_245]))))))), come_pop_stackframe(), __exception_result_var_b365);
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value335);
                                                    if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value335;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value336);
                                                    if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[3] = right_value336;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional313=(come_push_stackframe("02transpile.c", 666),__exception_result_var_b366=charp_operator_equals(argv[i_245],"-v"), come_pop_stackframe(), __exception_result_var_b366),                                                    _if_conditional313) {
                                                        (come_push_stackframe("02transpile.c", 667),__exception_result_var_b367=buffer_append_str(((struct buffer*)come_null_check(clang_option_232, "02transpile.c", 667)),"-v "), come_pop_stackframe(), __exception_result_var_b367);
                                                        verbose_240=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional314=(come_push_stackframe("02transpile.c", 670),__exception_result_var_b368=strlen(argv[i_245]), come_pop_stackframe(), __exception_result_var_b368)>=2&&(come_push_stackframe("02transpile.c", 670),__exception_result_var_b370=memcmp(argv[i_245],"-I",(come_push_stackframe("02transpile.c", 670),__exception_result_var_b369=strlen("-I"), come_pop_stackframe(), __exception_result_var_b369)), come_pop_stackframe(), __exception_result_var_b370)==0,                                                        _if_conditional314) {
                                                            (come_push_stackframe("02transpile.c", 671),__exception_result_var_b373=buffer_append_str(((struct buffer*)come_null_check(cpp_option_233, "02transpile.c", 671)),(come_push_stackframe("02transpile.c", 671),__exception_result_var_b372=((char*)(right_value338=charp_operator_add(" ",(come_push_stackframe("02transpile.c", 671),__exception_result_var_b371=((char*)(right_value337=charp_operator_add(argv[i_245]," "))), come_pop_stackframe(), __exception_result_var_b371)))), come_pop_stackframe(), __exception_result_var_b372)), come_pop_stackframe(), __exception_result_var_b373);
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
                                                            if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value337;
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value338);
                                                            if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
                                                            __right_value_freed_obj[1] = right_value338;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional315=(come_push_stackframe("02transpile.c", 673),__exception_result_var_b374=charp_operator_equals(argv[i_245],"-gdwarf-4"), come_pop_stackframe(), __exception_result_var_b374),                                                            _if_conditional315) {
                                                                (come_push_stackframe("02transpile.c", 674),__exception_result_var_b375=buffer_append_str(((struct buffer*)come_null_check(clang_option_232, "02transpile.c", 674)),"-gdwarf-4 "), come_pop_stackframe(), __exception_result_var_b375);
                                                            }
                                                            else {
                                                                if(_if_conditional316=(come_push_stackframe("02transpile.c", 676),__exception_result_var_b376=charp_operator_equals(argv[i_245],"-s"), come_pop_stackframe(), __exception_result_var_b376)||(come_push_stackframe("02transpile.c", 676),__exception_result_var_b377=charp_operator_equals(argv[i_245],"-S"), come_pop_stackframe(), __exception_result_var_b377),                                                                _if_conditional316) {
                                                                    output_source_file_flag_238=(_Bool)1;
                                                                }
                                                                else {
                                                                    if(_if_conditional317=(come_push_stackframe("02transpile.c", 679),__exception_result_var_b378=charp_operator_equals(argv[i_245],"-c"), come_pop_stackframe(), __exception_result_var_b378),                                                                    _if_conditional317) {
                                                                        output_object_file_236=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional318=(come_push_stackframe("02transpile.c", 682),__exception_result_var_b379=charp_operator_equals(argv[i_245],"-E"), come_pop_stackframe(), __exception_result_var_b379),                                                                        _if_conditional318) {
                                                                            output_cpp_file_237=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional319=argv[i_245][0]==45,                                                                            _if_conditional319) {
                                                                                (come_push_stackframe("02transpile.c", 686),__exception_result_var_b381=buffer_append_str(((struct buffer*)come_null_check(clang_option_232, "02transpile.c", 686)),(come_push_stackframe("02transpile.c", 686),__exception_result_var_b380=((char*)(right_value339=charp_operator_add(argv[i_245]," "))), come_pop_stackframe(), __exception_result_var_b380)), come_pop_stackframe(), __exception_result_var_b381);
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339);
                                                                                if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value339;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional320=(come_push_stackframe("02transpile.c", 688),__exception_result_var_b382=strlen(argv[i_245]), come_pop_stackframe(), __exception_result_var_b382)>2&&(come_push_stackframe("02transpile.c", 688),__exception_result_var_b384=memcmp(argv[i_245]+(come_push_stackframe("02transpile.c", 688),__exception_result_var_b383=strlen(argv[i_245]), come_pop_stackframe(), __exception_result_var_b383)-2,".o",2), come_pop_stackframe(), __exception_result_var_b384)==0,                                                                                _if_conditional320) {
                                                                                    (come_push_stackframe("02transpile.c", 689),__exception_result_var_b386=list$1charph_push_back(((struct list$1charph*)come_null_check(object_files_235, "02transpile.c", 689)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 689),__exception_result_var_b385=((char*)(right_value340=__builtin_string(argv[i_245]))), come_pop_stackframe(), __exception_result_var_b385))), come_pop_stackframe(), __exception_result_var_b386);
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
                                                                                    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value340;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    (come_push_stackframe("02transpile.c", 692),__exception_result_var_b388=list$1charph_push_back(((struct list$1charph*)come_null_check(files_234, "02transpile.c", 692)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 692),__exception_result_var_b387=((char*)(right_value341=__builtin_string(argv[i_245]))), come_pop_stackframe(), __exception_result_var_b387))), come_pop_stackframe(), __exception_result_var_b388);
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                                                                                    if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value341;
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
        gComeDebug=come_debug_242;
        gComeMalloc=come_malloc_243;
        if(_if_conditional321=come_str_244,        _if_conditional321) {
            if(_if_conditional322=gComeGC,            _if_conditional322) {
                (come_push_stackframe("02transpile.c", 701),__exception_result_var_b389=buffer_append_str(((struct buffer*)come_null_check(clang_option_232, "02transpile.c", 701))," -lcomelang2-str-gc -lpcre "), come_pop_stackframe(), __exception_result_var_b389);
            }
            else {
                (come_push_stackframe("02transpile.c", 704),__exception_result_var_b390=buffer_append_str(((struct buffer*)come_null_check(clang_option_232, "02transpile.c", 704))," -lcomelang2-str -lpcre "), come_pop_stackframe(), __exception_result_var_b390);
            }
        }
        if(_and_conditional1=f_246=(come_push_stackframe("02transpile.c", 708),__exception_result_var_b391=fopen(output_file_name_239,"w"), come_pop_stackframe(), __exception_result_var_b391),        _and_conditional1 == 0) {
            (come_push_stackframe("02transpile.c", 708),__exception_result_var_b392=die("fopen"), come_pop_stackframe(), __exception_result_var_b392);
        }
        (come_push_stackframe("02transpile.c", 709),__exception_result_var_b393=fclose(f_246), come_pop_stackframe(), __exception_result_var_b393);
        if(_or_conditional6=(come_push_stackframe("02transpile.c", 711),__exception_result_var_b394=truncate(output_file_name_239,0), come_pop_stackframe(), __exception_result_var_b394),        _or_conditional6 != 0) {
            (come_push_stackframe("02transpile.c", 711),__exception_result_var_b395=die("truncate"), come_pop_stackframe(), __exception_result_var_b395);
        }
        (come_push_stackframe("02transpile.c", 713),come_init_v5(),come_pop_stackframe());
        for(
        o2_saved_247=(struct list$1charph*)come_increment_ref_count((files_234)),it_248=(come_push_stackframe("02transpile.c", 715),__exception_result_var_b396=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_247), "02transpile.c", 715))), come_pop_stackframe(), __exception_result_var_b396) ,        0;        _for_condtionalA17=        !(come_push_stackframe("02transpile.c", 715),__exception_result_var_b397=list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_247), "02transpile.c", 715))), come_pop_stackframe(), __exception_result_var_b397) ,        _for_condtionalA17;        it_248=(come_push_stackframe("02transpile.c", 715),__exception_result_var_b398=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_247), "02transpile.c", 715))), come_pop_stackframe(), __exception_result_var_b398) ,        0        ){
            (come_push_stackframe("02transpile.c", 718),__exception_result_var_b399=memset(&info_249,0,sizeof(struct sInfo)), come_pop_stackframe(), __exception_result_var_b399);
            __dec_obj89=info_249.base_sname;
            info_249.base_sname=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 720),__exception_result_var_b400=((char*)(right_value342=__builtin_string(it_248))), come_pop_stackframe(), __exception_result_var_b400));
            if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
            if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value342;
            __freed_obj__ = 0;
            __dec_obj90=info_249.sname;
            info_249.sname=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 721),__exception_result_var_b401=((char*)(right_value343=__builtin_string(it_248))), come_pop_stackframe(), __exception_result_var_b401));
            if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value343);
            if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value343;
            __freed_obj__ = 0;
            info_249.sline=1;
            info_249.err_num=0;
            __dec_obj91=info_249.clang_option;
            info_249.clang_option=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 724),__exception_result_var_b402=((char*)(right_value344=buffer_to_string(((struct buffer*)come_null_check(clang_option_232, "02transpile.c", 724))))), come_pop_stackframe(), __exception_result_var_b402));
            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value344);
            if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value344;
            __freed_obj__ = 0;
            __dec_obj92=info_249.cpp_option;
            info_249.cpp_option=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 725),__exception_result_var_b403=((char*)(right_value345=buffer_to_string(((struct buffer*)come_null_check(cpp_option_233, "02transpile.c", 725))))), come_pop_stackframe(), __exception_result_var_b403));
            if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value345);
            if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value345;
            __freed_obj__ = 0;
            info_249.no_output_err=(_Bool)0;
            __dec_obj94=info_249.funcs;
            info_249.funcs=(struct map$2charphsFunph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 727),__exception_result_var_b405=((struct map$2charphsFunph*)(right_value352=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value346=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 727, "struct map$2charphsFunph"))))))), come_pop_stackframe(), __exception_result_var_b405));
            if(__dec_obj94) { come_call_finalizer(map$2charphsFunph_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value346);
            if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value346;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value352);
            if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value352;
            __freed_obj__ = 0;
            __dec_obj96=info_249.generics_funcs;
            info_249.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 728),__exception_result_var_b407=((struct map$2charphsGenericsFunph*)(right_value359=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value353=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 728, "struct map$2charphsGenericsFunph"))))))), come_pop_stackframe(), __exception_result_var_b407));
            if(__dec_obj96) { come_call_finalizer(map$2charphsGenericsFunph_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value353);
            if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value353;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value359);
            if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value359;
            __freed_obj__ = 0;
            __dec_obj98=info_249.classes;
            info_249.classes=(struct map$2charphsClassph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 729),__exception_result_var_b409=((struct map$2charphsClassph*)(right_value366=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value360=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 729, "struct map$2charphsClassph"))))))), come_pop_stackframe(), __exception_result_var_b409));
            if(__dec_obj98) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value360);
            if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value360;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value366);
            if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[9] = right_value366;
            __freed_obj__ = 0;
            __dec_obj100=info_249.types;
            info_249.types=(struct map$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 730),__exception_result_var_b411=((struct map$2charphsTypeph*)(right_value373=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value367=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 730, "struct map$2charphsTypeph"))))))), come_pop_stackframe(), __exception_result_var_b411));
            if(__dec_obj100) { come_call_finalizer(map$2charphsTypeph_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value367);
            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[10] = right_value367;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value373);
            if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[11] = right_value373;
            __freed_obj__ = 0;
            __dec_obj101=info_249.module;
            info_249.module=(struct sModule*)come_increment_ref_count((come_push_stackframe("02transpile.c", 731),__exception_result_var_b412=((struct sModule*)(right_value375=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value374=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 731, "struct sModule"))))))), come_pop_stackframe(), __exception_result_var_b412));
            if(__dec_obj101) { come_call_finalizer(sModule_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value374);
            if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[12] = right_value374;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value375);
            if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[13] = right_value375;
            __freed_obj__ = 0;
            __dec_obj102=info_249.right_value_objects;
            info_249.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 732),__exception_result_var_b413=((struct list$1sRightValueObjectph*)(right_value377=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value376=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 732, "struct list$1sRightValueObjectph"))))))), come_pop_stackframe(), __exception_result_var_b413));
            if(__dec_obj102) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value376);
            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[14] = right_value376;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value377);
            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[15] = right_value377;
            __freed_obj__ = 0;
            __dec_obj103=info_249.stack;
            info_249.stack=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 733),__exception_result_var_b414=((struct list$1CVALUEph*)(right_value379=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value378=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 733, "struct list$1CVALUEph"))))))), come_pop_stackframe(), __exception_result_var_b414));
            if(__dec_obj103) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value378);
            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[16] = right_value378;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value379);
            if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[17] = right_value379;
            __freed_obj__ = 0;
            __dec_obj104=info_249.gv_table;
            info_249.gv_table=(struct sVarTable*)come_increment_ref_count((come_push_stackframe("02transpile.c", 734),__exception_result_var_b415=((struct sVarTable*)(right_value381=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value380=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 734, "struct sVarTable")))),(_Bool)1,((void*)0)))), come_pop_stackframe(), __exception_result_var_b415));
            if(__dec_obj104) { come_call_finalizer(sVarTable_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value380);
            if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[18] = right_value380;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value381);
            if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[19] = right_value381;
            __freed_obj__ = 0;
            lv_table_266=(struct sVarTable*)come_increment_ref_count((come_push_stackframe("02transpile.c", 735),__exception_result_var_b416=((struct sVarTable*)(right_value383=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value382=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 735, "struct sVarTable")))),(_Bool)0,((void*)0)))), come_pop_stackframe(), __exception_result_var_b416));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value382);
            if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[20] = right_value382;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value383);
            if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[21] = right_value383;
            __freed_obj__ = 0;
            info_249.lv_table=lv_table_266;
            __dec_obj105=info_249.generics_type_names;
            info_249.generics_type_names=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 737),__exception_result_var_b417=((struct list$1charph*)(right_value385=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value384=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 737, "struct list$1charph"))))))), come_pop_stackframe(), __exception_result_var_b417));
            if(__dec_obj105) { come_call_finalizer(list$1charph_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value384);
            if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[22] = right_value384;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value385);
            if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[23] = right_value385;
            __freed_obj__ = 0;
            __dec_obj106=info_249.generics_classes;
            info_249.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 738),__exception_result_var_b418=((struct map$2charphsClassph*)(right_value387=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value386=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 738, "struct map$2charphsClassph"))))))), come_pop_stackframe(), __exception_result_var_b418));
            if(__dec_obj106) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value386);
            if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[24] = right_value386;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value387);
            if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[25] = right_value387;
            __freed_obj__ = 0;
            info_249.verbose=verbose_240;
            info_249.output_header_file=(_Bool)1;
            info_249.num_source_files=n_267++;
            info_249.max_source_files=(come_push_stackframe("02transpile.c", 744),__exception_result_var_b419=list$1charph_length(((struct list$1charph*)come_null_check(files_234, "02transpile.c", 744))), come_pop_stackframe(), __exception_result_var_b419);
            __dec_obj107=info_249.output_file_name;
            info_249.output_file_name=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 746),__exception_result_var_b420=((char*)(right_value388=__builtin_string(output_file_name_239))), come_pop_stackframe(), __exception_result_var_b420));
            if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value388);
            if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[26] = right_value388;
            __freed_obj__ = 0;
            (come_push_stackframe("02transpile.c", 748),init_classes(&info_249),come_pop_stackframe());
            (come_push_stackframe("02transpile.c", 749),init_module(&info_249),come_pop_stackframe());
            (come_push_stackframe("02transpile.c", 751),clear_tmp_file(&info_249),come_pop_stackframe());
            if(_if_conditional359=!(come_push_stackframe("02transpile.c", 753),__exception_result_var_b421=cpp(&info_249), come_pop_stackframe(), __exception_result_var_b421),            _if_conditional359) {
                (come_push_stackframe("02transpile.c", 754),__exception_result_var_b422=printf("%s %d: transpile failed\n",info_249.sname,info_249.sline), come_pop_stackframe(), __exception_result_var_b422);
                (come_push_stackframe("02transpile.c", 755),exit(2),come_pop_stackframe());
            }
            __dec_obj108=info_249.original_source;
            info_249.original_source=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 758),__exception_result_var_b425=((struct buffer*)(right_value391=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 758),__exception_result_var_b424=((struct optional$2charphbool*)(right_value390=string_read(((char*)come_null_check((come_push_stackframe("02transpile.c", 758),__exception_result_var_b423=((char*)(right_value389=xsprintf("%s",it_248))), come_pop_stackframe(), __exception_result_var_b423), "02transpile.c", 758))))), come_pop_stackframe(), __exception_result_var_b424)), "02transpile.c", 758))))), come_pop_stackframe(), __exception_result_var_b425));
            if(__dec_obj108) { come_call_finalizer(buffer_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value389);
            if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[27] = right_value389;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value390);
            if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[28] = right_value390;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value391);
            if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[29] = right_value391;
            __freed_obj__ = 0;
            __dec_obj109=info_249.source;
            info_249.source=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 759),__exception_result_var_b428=((struct buffer*)(right_value394=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 759),__exception_result_var_b427=((struct optional$2charphbool*)(right_value393=string_read(((char*)come_null_check((come_push_stackframe("02transpile.c", 759),__exception_result_var_b426=((char*)(right_value392=xsprintf("%s.i",it_248))), come_pop_stackframe(), __exception_result_var_b426), "02transpile.c", 759))))), come_pop_stackframe(), __exception_result_var_b427)), "02transpile.c", 759))))), come_pop_stackframe(), __exception_result_var_b428));
            if(__dec_obj109) { come_call_finalizer(buffer_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value392);
            if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[30] = right_value392;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value393);
            if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[31] = right_value393;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value394);
            if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[32] = right_value394;
            __freed_obj__ = 0;
            info_249.p=((struct buffer*)come_null_check(info_249.source, "02transpile.c", 760))->buf;
            info_249.head=((struct buffer*)come_null_check(info_249.source, "02transpile.c", 761))->buf;
            if(_if_conditional360=!output_cpp_file_237,            _if_conditional360) {
                (come_push_stackframe("02transpile.c", 764),__exception_result_var_b429=transpile_v5(&info_249), come_pop_stackframe(), __exception_result_var_b429);
                if(_if_conditional361=!(come_push_stackframe("02transpile.c", 766),__exception_result_var_b430=output_header_file(&info_249), come_pop_stackframe(), __exception_result_var_b430),                _if_conditional361) {
                    (come_push_stackframe("02transpile.c", 767),__exception_result_var_b431=printf("%s %d: output source file faield\n",info_249.sname,info_249.sline), come_pop_stackframe(), __exception_result_var_b431);
                    (come_push_stackframe("02transpile.c", 768),exit(2),come_pop_stackframe());
                }
            }
            if((&info_249) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_249), (void*)0, (void*)0, 1, 0, 0, 0); }
            if(lv_table_266 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,lv_table_266, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_247 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_247, (void*)0, (void*)0, 0, 0, 0, 0); }
        (come_push_stackframe("02transpile.c", 773),come_final_v5(),come_pop_stackframe());
        if(clang_option_232 && !__freed_obj__) { come_call_finalizer(buffer_finalize,clang_option_232, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cpp_option_233 && !__freed_obj__) { come_call_finalizer(buffer_finalize,cpp_option_233, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(files_234 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,files_234, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(object_files_235 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,object_files_235, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(output_file_name_239 && !__freed_obj__) { output_file_name_239 = come_decrement_ref_count(output_file_name_239, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional385=(come_push_stackframe("02transpile.c", 775),__exception_result_var_b432=charp_operator_equals(argv[1],"new"), come_pop_stackframe(), __exception_result_var_b432)&&argc==3,        _if_conditional385) {
            if(_if_conditional386=!(come_push_stackframe("02transpile.c", 776),__exception_result_var_b433=new_project(argc,argv), come_pop_stackframe(), __exception_result_var_b433),            _if_conditional386) {
                __result164__ = (_Bool)0;
                return __result164__;
            }
        }
        else {
            if(_if_conditional387=(come_push_stackframe("02transpile.c", 780),__exception_result_var_b434=charp_operator_equals(argv[1],"run"), come_pop_stackframe(), __exception_result_var_b434)&&argc==2,            _if_conditional387) {
                if(_if_conditional388=!(come_push_stackframe("02transpile.c", 781),__exception_result_var_b435=run_project(argc,argv), come_pop_stackframe(), __exception_result_var_b435),                _if_conditional388) {
                    __result165__ = (_Bool)0;
                    return __result165__;
                }
            }
            else {
                if(_if_conditional389=(come_push_stackframe("02transpile.c", 785),__exception_result_var_b436=charp_operator_equals(argv[1],"debug"), come_pop_stackframe(), __exception_result_var_b436)&&argc==2,                _if_conditional389) {
                    if(_if_conditional390=!(come_push_stackframe("02transpile.c", 786),__exception_result_var_b437=debug_run_project(argc,argv), come_pop_stackframe(), __exception_result_var_b437),                    _if_conditional390) {
                        __result166__ = (_Bool)0;
                        return __result166__;
                    }
                }
                else {
                    if(_if_conditional391=(come_push_stackframe("02transpile.c", 790),__exception_result_var_b438=charp_operator_equals(argv[1],"clean"), come_pop_stackframe(), __exception_result_var_b438)&&argc==2,                    _if_conditional391) {
                        if(_if_conditional392=!(come_push_stackframe("02transpile.c", 791),__exception_result_var_b439=clean_project(argc,argv), come_pop_stackframe(), __exception_result_var_b439),                        _if_conditional392) {
                            __result167__ = (_Bool)0;
                            return __result167__;
                        }
                    }
                    else {
                        if(_if_conditional393=(come_push_stackframe("02transpile.c", 795),__exception_result_var_b440=charp_operator_equals(argv[1],"install"), come_pop_stackframe(), __exception_result_var_b440)&&argc>=2,                        _if_conditional393) {
                            if(_if_conditional394=argc==2,                            _if_conditional394) {
                                if(_if_conditional395=!(come_push_stackframe("02transpile.c", 797),__exception_result_var_b441=install_project(argc,argv,"/usr/local"), come_pop_stackframe(), __exception_result_var_b441),                                _if_conditional395) {
                                    __result168__ = (_Bool)0;
                                    return __result168__;
                                }
                            }
                            else {
                                if(_if_conditional396=argc>=3,                                _if_conditional396) {
                                    if(_if_conditional397=!(come_push_stackframe("02transpile.c", 802),__exception_result_var_b442=install_project(argc,argv,argv[2]), come_pop_stackframe(), __exception_result_var_b442),                                    _if_conditional397) {
                                        __result169__ = (_Bool)0;
                                        return __result169__;
                                    }
                                }
                            }
                        }
                        else {
                            gProgramName=argv[0];
                            clang_option_268=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 810),__exception_result_var_b443=((struct buffer*)(right_value396=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value395=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 810, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b443));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value395);
                            if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value395;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value396);
                            if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value396;
                            __freed_obj__ = 0;
                            cpp_option_269=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 811),__exception_result_var_b444=((struct buffer*)(right_value398=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value397=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 811, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b444));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value397);
                            if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value397;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value398);
                            if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value398;
                            __freed_obj__ = 0;
                            files_270=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 812),__exception_result_var_b445=((struct list$1charph*)(right_value400=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value399=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 812, "struct list$1charph"))))))), come_pop_stackframe(), __exception_result_var_b445));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value399);
                            if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value399;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value400);
                            if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[5] = right_value400;
                            __freed_obj__ = 0;
                            object_files_271=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 813),__exception_result_var_b446=((struct list$1charph*)(right_value402=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value401=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 813, "struct list$1charph"))))))), come_pop_stackframe(), __exception_result_var_b446));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value401);
                            if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[6] = right_value401;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value402);
                            if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[7] = right_value402;
                            __freed_obj__ = 0;
                            output_object_file_272=(_Bool)0;
                            output_cpp_file_273=(_Bool)0;
                            output_source_file_flag_274=(_Bool)0;
                            output_file_name_275=((void*)0);
                            verbose_276=(_Bool)0;
                            come_debug_277=(_Bool)0;
                            come_malloc_278=(_Bool)0;
                            come_str_279=(_Bool)0;
                            for(
                            i_280=1 ,                            0;                            _for_condtionalA30=                            i_280<argc ,                            _for_condtionalA30;                            i_280++ ,                            0                            ){
                                if(_if_conditional398=(come_push_stackframe("02transpile.c", 823),__exception_result_var_b447=charp_operator_equals(argv[i_280],"-o"), come_pop_stackframe(), __exception_result_var_b447)&&i_280+1<argc,                                _if_conditional398) {
                                    __dec_obj110=output_file_name_275;
                                    output_file_name_275=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 824),__exception_result_var_b448=((char*)(right_value403=__builtin_string(argv[i_280+1]))), come_pop_stackframe(), __exception_result_var_b448));
                                    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value403);
                                    if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { right_value403 = come_decrement_ref_count(right_value403, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value403;
                                    __freed_obj__ = 0;
                                    i_280++;
                                }
                                else {
                                    if(_if_conditional399=(come_push_stackframe("02transpile.c", 827),__exception_result_var_b449=charp_operator_equals(argv[i_280],"-str"), come_pop_stackframe(), __exception_result_var_b449),                                    _if_conditional399) {
                                        come_str_279=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional400=(come_push_stackframe("02transpile.c", 830),__exception_result_var_b450=charp_operator_equals(argv[i_280],"-leak"), come_pop_stackframe(), __exception_result_var_b450),                                        _if_conditional400) {
                                            come_malloc_278=(_Bool)1;
                                        }
                                        else {
                                            if(_if_conditional401=(come_push_stackframe("02transpile.c", 833),__exception_result_var_b451=charp_operator_equals(argv[i_280],"-gc"), come_pop_stackframe(), __exception_result_var_b451),                                            _if_conditional401) {
                                                gComeGC=(_Bool)1;
                                            }
                                            else {
                                                if(_if_conditional402=(come_push_stackframe("02transpile.c", 836),__exception_result_var_b452=charp_operator_equals(argv[i_280],"-cg"), come_pop_stackframe(), __exception_result_var_b452),                                                _if_conditional402) {
                                                    come_debug_277=(_Bool)1;
                                                    (come_push_stackframe("02transpile.c", 838),__exception_result_var_b453=buffer_append_str(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 838)),"-g "), come_pop_stackframe(), __exception_result_var_b453);
                                                }
                                                else {
                                                    if(_if_conditional403=(come_push_stackframe("02transpile.c", 840),__exception_result_var_b454=charp_operator_equals(argv[i_280],"-common-header"), come_pop_stackframe(), __exception_result_var_b454),                                                    _if_conditional403) {
                                                        gCommonHeader=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional404=(come_push_stackframe("02transpile.c", 843),__exception_result_var_b455=charp_operator_equals(argv[i_280],"-original-position"), come_pop_stackframe(), __exception_result_var_b455),                                                        _if_conditional404) {
                                                            gComeOriginalSourcePosition=(_Bool)0;
                                                        }
                                                        else {
                                                            if(_if_conditional405=(come_push_stackframe("02transpile.c", 846),__exception_result_var_b457=string_operator_equals((come_push_stackframe("02transpile.c", 846),__exception_result_var_b456=((char*)(right_value404=charp_operator_load_range_element(argv[i_280],0,2))), come_pop_stackframe(), __exception_result_var_b456),"-O"), come_pop_stackframe(), __exception_result_var_b457),                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value404),
                                                            (right_value404 && right_value404 != __result_obj__ && !__freed_obj__) ? right_value404 = come_decrement_ref_count(right_value404, (void*)0, (void*)0, 1, 0, 0):0,
                                                            __right_value_freed_obj[0] = right_value404, 
                                                            __freed_obj__ = 0, 
                                                            _if_conditional405) {
                                                                (come_push_stackframe("02transpile.c", 847),__exception_result_var_b458=buffer_append_str(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 847)),((char*)(right_value406=xsprintf(" \%s ",((char*)(right_value405=charp_to_string(argv[i_280]))))))), come_pop_stackframe(), __exception_result_var_b458);
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
                                                                if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { right_value405 = come_decrement_ref_count(right_value405, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value405;
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value406);
                                                                if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[1] = right_value406;
                                                                __freed_obj__ = 0;
                                                                come_debug_277=(_Bool)0;
                                                            }
                                                            else {
                                                                if(_if_conditional406=(come_push_stackframe("02transpile.c", 850),__exception_result_var_b460=string_operator_equals((come_push_stackframe("02transpile.c", 850),__exception_result_var_b459=((char*)(right_value407=charp_operator_load_range_element(argv[i_280],0,2))), come_pop_stackframe(), __exception_result_var_b459),"-D"), come_pop_stackframe(), __exception_result_var_b460),                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value407),
                                                                (right_value407 && right_value407 != __result_obj__ && !__freed_obj__) ? right_value407 = come_decrement_ref_count(right_value407, (void*)0, (void*)0, 1, 0, 0):0,
                                                                __right_value_freed_obj[0] = right_value407, 
                                                                __freed_obj__ = 0, 
                                                                _if_conditional406) {
                                                                    (come_push_stackframe("02transpile.c", 851),__exception_result_var_b461=buffer_append_str(((struct buffer*)come_null_check(cpp_option_269, "02transpile.c", 851)),((char*)(right_value409=xsprintf(" \%s ",((char*)(right_value408=charp_to_string(argv[i_280]))))))), come_pop_stackframe(), __exception_result_var_b461);
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value408);
                                                                    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value408;
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value409);
                                                                    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { right_value409 = come_decrement_ref_count(right_value409, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[1] = right_value409;
                                                                    __freed_obj__ = 0;
                                                                    (come_push_stackframe("02transpile.c", 852),__exception_result_var_b462=buffer_append_str(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 852)),((char*)(right_value411=xsprintf(" \%s ",((char*)(right_value410=charp_to_string(argv[i_280]))))))), come_pop_stackframe(), __exception_result_var_b462);
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value410);
                                                                    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { right_value410 = come_decrement_ref_count(right_value410, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[2] = right_value410;
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value411);
                                                                    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { right_value411 = come_decrement_ref_count(right_value411, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[3] = right_value411;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional407=(come_push_stackframe("02transpile.c", 854),__exception_result_var_b463=charp_operator_equals(argv[i_280],"-g"), come_pop_stackframe(), __exception_result_var_b463),                                                                    _if_conditional407) {
                                                                        (come_push_stackframe("02transpile.c", 855),__exception_result_var_b464=buffer_append_str(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 855)),"-g "), come_pop_stackframe(), __exception_result_var_b464);
                                                                    }
                                                                    else {
                                                                        if(_if_conditional408=(come_push_stackframe("02transpile.c", 857),__exception_result_var_b465=charp_operator_equals(argv[i_280],"-v"), come_pop_stackframe(), __exception_result_var_b465),                                                                        _if_conditional408) {
                                                                            (come_push_stackframe("02transpile.c", 858),__exception_result_var_b466=buffer_append_str(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 858)),"-v "), come_pop_stackframe(), __exception_result_var_b466);
                                                                            verbose_276=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional409=(come_push_stackframe("02transpile.c", 861),__exception_result_var_b467=strlen(argv[i_280]), come_pop_stackframe(), __exception_result_var_b467)>=2&&(come_push_stackframe("02transpile.c", 861),__exception_result_var_b469=memcmp(argv[i_280],"-I",(come_push_stackframe("02transpile.c", 861),__exception_result_var_b468=strlen("-I"), come_pop_stackframe(), __exception_result_var_b468)), come_pop_stackframe(), __exception_result_var_b469)==0,                                                                            _if_conditional409) {
                                                                                (come_push_stackframe("02transpile.c", 862),__exception_result_var_b472=buffer_append_str(((struct buffer*)come_null_check(cpp_option_269, "02transpile.c", 862)),(come_push_stackframe("02transpile.c", 862),__exception_result_var_b471=((char*)(right_value413=charp_operator_add(" ",(come_push_stackframe("02transpile.c", 862),__exception_result_var_b470=((char*)(right_value412=charp_operator_add(argv[i_280]," "))), come_pop_stackframe(), __exception_result_var_b470)))), come_pop_stackframe(), __exception_result_var_b471)), come_pop_stackframe(), __exception_result_var_b472);
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
                                                                                if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value412;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value413);
                                                                                if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[1] = right_value413;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional410=(come_push_stackframe("02transpile.c", 864),__exception_result_var_b473=charp_operator_equals(argv[i_280],"-gdwarf-4"), come_pop_stackframe(), __exception_result_var_b473),                                                                                _if_conditional410) {
                                                                                    (come_push_stackframe("02transpile.c", 865),__exception_result_var_b474=buffer_append_str(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 865)),"-gdwarf-4 "), come_pop_stackframe(), __exception_result_var_b474);
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional411=(come_push_stackframe("02transpile.c", 867),__exception_result_var_b475=charp_operator_equals(argv[i_280],"-s"), come_pop_stackframe(), __exception_result_var_b475)||(come_push_stackframe("02transpile.c", 867),__exception_result_var_b476=charp_operator_equals(argv[i_280],"-S"), come_pop_stackframe(), __exception_result_var_b476),                                                                                    _if_conditional411) {
                                                                                        output_source_file_flag_274=(_Bool)1;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional412=(come_push_stackframe("02transpile.c", 870),__exception_result_var_b477=charp_operator_equals(argv[i_280],"-c"), come_pop_stackframe(), __exception_result_var_b477),                                                                                        _if_conditional412) {
                                                                                            output_object_file_272=(_Bool)1;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional413=(come_push_stackframe("02transpile.c", 873),__exception_result_var_b478=charp_operator_equals(argv[i_280],"-E"), come_pop_stackframe(), __exception_result_var_b478),                                                                                            _if_conditional413) {
                                                                                                output_cpp_file_273=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional414=argv[i_280][0]==45,                                                                                                _if_conditional414) {
                                                                                                    (come_push_stackframe("02transpile.c", 877),__exception_result_var_b480=buffer_append_str(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 877)),(come_push_stackframe("02transpile.c", 877),__exception_result_var_b479=((char*)(right_value414=charp_operator_add(argv[i_280]," "))), come_pop_stackframe(), __exception_result_var_b479)), come_pop_stackframe(), __exception_result_var_b480);
                                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414);
                                                                                                    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                    __right_value_freed_obj[0] = right_value414;
                                                                                                    __freed_obj__ = 0;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional415=(come_push_stackframe("02transpile.c", 879),__exception_result_var_b481=strlen(argv[i_280]), come_pop_stackframe(), __exception_result_var_b481)>2&&(come_push_stackframe("02transpile.c", 879),__exception_result_var_b483=memcmp(argv[i_280]+(come_push_stackframe("02transpile.c", 879),__exception_result_var_b482=strlen(argv[i_280]), come_pop_stackframe(), __exception_result_var_b482)-2,".o",2), come_pop_stackframe(), __exception_result_var_b483)==0,                                                                                                    _if_conditional415) {
                                                                                                        (come_push_stackframe("02transpile.c", 880),__exception_result_var_b485=list$1charph_push_back(((struct list$1charph*)come_null_check(object_files_271, "02transpile.c", 880)),(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 880),__exception_result_var_b484=((char*)(right_value415=__builtin_string(argv[i_280]))), come_pop_stackframe(), __exception_result_var_b484))), come_pop_stackframe(), __exception_result_var_b485);
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value415);
                                                                                                        if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value415;
                                                                                                        __freed_obj__ = 0;
                                                                                                    }
                                                                                                    else {
                                                                                                        (come_push_stackframe("02transpile.c", 883),__exception_result_var_b487=list$1charph_push_back(((struct list$1charph*)come_null_check(files_270, "02transpile.c", 883)),(char*)come_increment_ref_count(((char*)(right_value417=string_clone((come_push_stackframe("02transpile.c", 883),__exception_result_var_b486=((char*)(right_value416=__builtin_string(argv[i_280]))), come_pop_stackframe(), __exception_result_var_b486)))))), come_pop_stackframe(), __exception_result_var_b487);
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value416);
                                                                                                        if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { right_value416 = come_decrement_ref_count(right_value416, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value416;
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value417);
                                                                                                        if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[1] = right_value417;
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
                            gComeDebug=come_debug_277;
                            gComeMalloc=come_malloc_278;
                            if(_if_conditional416=come_str_279,                            _if_conditional416) {
                                if(_if_conditional417=gComeGC,                                _if_conditional417) {
                                    (come_push_stackframe("02transpile.c", 892),__exception_result_var_b488=buffer_append_str(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 892))," -lcomelang2-str-gc -lpcre "), come_pop_stackframe(), __exception_result_var_b488);
                                }
                                else {
                                    (come_push_stackframe("02transpile.c", 895),__exception_result_var_b489=buffer_append_str(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 895))," -lcomelang2-str -lpcre "), come_pop_stackframe(), __exception_result_var_b489);
                                }
                            }
                            (come_push_stackframe("02transpile.c", 899),come_init_v5(),come_pop_stackframe());
                            for(
                            o2_saved_281=(struct list$1charph*)come_increment_ref_count((files_270)),it_282=(come_push_stackframe("02transpile.c", 901),__exception_result_var_b490=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_281), "02transpile.c", 901))), come_pop_stackframe(), __exception_result_var_b490) ,                            0;                            _for_condtionalA31=                            !(come_push_stackframe("02transpile.c", 901),__exception_result_var_b491=list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_281), "02transpile.c", 901))), come_pop_stackframe(), __exception_result_var_b491) ,                            _for_condtionalA31;                            it_282=(come_push_stackframe("02transpile.c", 901),__exception_result_var_b492=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_281), "02transpile.c", 901))), come_pop_stackframe(), __exception_result_var_b492) ,                            0                            ){
                                (come_push_stackframe("02transpile.c", 904),__exception_result_var_b493=memset(&info_283,0,sizeof(struct sInfo)), come_pop_stackframe(), __exception_result_var_b493);
                                __dec_obj111=info_283.sname;
                                info_283.sname=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 906),__exception_result_var_b494=((char*)(right_value418=__builtin_string(it_282))), come_pop_stackframe(), __exception_result_var_b494));
                                if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value418);
                                if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { right_value418 = come_decrement_ref_count(right_value418, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value418;
                                __freed_obj__ = 0;
                                info_283.sline=1;
                                info_283.err_num=0;
                                __dec_obj112=info_283.clang_option;
                                info_283.clang_option=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 909),__exception_result_var_b495=((char*)(right_value419=buffer_to_string(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 909))))), come_pop_stackframe(), __exception_result_var_b495));
                                if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value419);
                                if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value419;
                                __freed_obj__ = 0;
                                __dec_obj113=info_283.cpp_option;
                                info_283.cpp_option=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 910),__exception_result_var_b496=((char*)(right_value420=buffer_to_string(((struct buffer*)come_null_check(cpp_option_269, "02transpile.c", 910))))), come_pop_stackframe(), __exception_result_var_b496));
                                if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value420);
                                if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { right_value420 = come_decrement_ref_count(right_value420, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value420;
                                __freed_obj__ = 0;
                                info_283.no_output_err=(_Bool)0;
                                __dec_obj114=info_283.funcs;
                                info_283.funcs=(struct map$2charphsFunph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 912),__exception_result_var_b497=((struct map$2charphsFunph*)(right_value422=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value421=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 912, "struct map$2charphsFunph"))))))), come_pop_stackframe(), __exception_result_var_b497));
                                if(__dec_obj114) { come_call_finalizer(map$2charphsFunph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value421);
                                if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value421;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value422);
                                if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[4] = right_value422;
                                __freed_obj__ = 0;
                                __dec_obj115=info_283.generics_funcs;
                                info_283.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 913),__exception_result_var_b498=((struct map$2charphsGenericsFunph*)(right_value424=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value423=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 913, "struct map$2charphsGenericsFunph"))))))), come_pop_stackframe(), __exception_result_var_b498));
                                if(__dec_obj115) { come_call_finalizer(map$2charphsGenericsFunph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value423);
                                if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[5] = right_value423;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value424);
                                if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[6] = right_value424;
                                __freed_obj__ = 0;
                                __dec_obj116=info_283.classes;
                                info_283.classes=(struct map$2charphsClassph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 914),__exception_result_var_b499=((struct map$2charphsClassph*)(right_value426=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value425=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 914, "struct map$2charphsClassph"))))))), come_pop_stackframe(), __exception_result_var_b499));
                                if(__dec_obj116) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value425);
                                if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[7] = right_value425;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value426);
                                if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[8] = right_value426;
                                __freed_obj__ = 0;
                                __dec_obj117=info_283.types;
                                info_283.types=(struct map$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 915),__exception_result_var_b500=((struct map$2charphsTypeph*)(right_value428=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value427=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 915, "struct map$2charphsTypeph"))))))), come_pop_stackframe(), __exception_result_var_b500));
                                if(__dec_obj117) { come_call_finalizer(map$2charphsTypeph_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value427);
                                if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[9] = right_value427;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value428);
                                if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[10] = right_value428;
                                __freed_obj__ = 0;
                                __dec_obj118=info_283.module;
                                info_283.module=(struct sModule*)come_increment_ref_count((come_push_stackframe("02transpile.c", 916),__exception_result_var_b501=((struct sModule*)(right_value430=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value429=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 916, "struct sModule"))))))), come_pop_stackframe(), __exception_result_var_b501));
                                if(__dec_obj118) { come_call_finalizer(sModule_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value429);
                                if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[11] = right_value429;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value430);
                                if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[12] = right_value430;
                                __freed_obj__ = 0;
                                __dec_obj119=info_283.right_value_objects;
                                info_283.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 917),__exception_result_var_b502=((struct list$1sRightValueObjectph*)(right_value432=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value431=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 917, "struct list$1sRightValueObjectph"))))))), come_pop_stackframe(), __exception_result_var_b502));
                                if(__dec_obj119) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value431);
                                if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[13] = right_value431;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value432);
                                if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[14] = right_value432;
                                __freed_obj__ = 0;
                                __dec_obj120=info_283.stack;
                                info_283.stack=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 918),__exception_result_var_b503=((struct list$1CVALUEph*)(right_value434=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value433=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 918, "struct list$1CVALUEph"))))))), come_pop_stackframe(), __exception_result_var_b503));
                                if(__dec_obj120) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value433);
                                if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[15] = right_value433;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value434);
                                if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[16] = right_value434;
                                __freed_obj__ = 0;
                                __dec_obj121=info_283.gv_table;
                                info_283.gv_table=(struct sVarTable*)come_increment_ref_count((come_push_stackframe("02transpile.c", 919),__exception_result_var_b504=((struct sVarTable*)(right_value436=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value435=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 919, "struct sVarTable")))),(_Bool)1,((void*)0)))), come_pop_stackframe(), __exception_result_var_b504));
                                if(__dec_obj121) { come_call_finalizer(sVarTable_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value435);
                                if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[17] = right_value435;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value436);
                                if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[18] = right_value436;
                                __freed_obj__ = 0;
                                lv_table_284=(struct sVarTable*)come_increment_ref_count((come_push_stackframe("02transpile.c", 920),__exception_result_var_b505=((struct sVarTable*)(right_value438=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value437=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 920, "struct sVarTable")))),(_Bool)0,((void*)0)))), come_pop_stackframe(), __exception_result_var_b505));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value437);
                                if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[19] = right_value437;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value438);
                                if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[20] = right_value438;
                                __freed_obj__ = 0;
                                info_283.lv_table=lv_table_284;
                                __dec_obj122=info_283.generics_type_names;
                                info_283.generics_type_names=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 922),__exception_result_var_b506=((struct list$1charph*)(right_value440=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value439=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 922, "struct list$1charph"))))))), come_pop_stackframe(), __exception_result_var_b506));
                                if(__dec_obj122) { come_call_finalizer(list$1charph_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value439);
                                if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[21] = right_value439;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value440);
                                if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[22] = right_value440;
                                __freed_obj__ = 0;
                                __dec_obj123=info_283.generics_classes;
                                info_283.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count((come_push_stackframe("02transpile.c", 923),__exception_result_var_b507=((struct map$2charphsClassph*)(right_value442=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value441=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 923, "struct map$2charphsClassph"))))))), come_pop_stackframe(), __exception_result_var_b507));
                                if(__dec_obj123) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value441);
                                if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[23] = right_value441;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value442);
                                if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[24] = right_value442;
                                __freed_obj__ = 0;
                                info_283.verbose=verbose_276;
                                (come_push_stackframe("02transpile.c", 926),init_classes(&info_283),come_pop_stackframe());
                                (come_push_stackframe("02transpile.c", 927),init_module(&info_283),come_pop_stackframe());
                                (come_push_stackframe("02transpile.c", 929),clear_tmp_file(&info_283),come_pop_stackframe());
                                if(_if_conditional418=!(come_push_stackframe("02transpile.c", 931),__exception_result_var_b508=cpp(&info_283), come_pop_stackframe(), __exception_result_var_b508),                                _if_conditional418) {
                                    (come_push_stackframe("02transpile.c", 932),__exception_result_var_b509=printf("%s %d: transpile failed\n",info_283.sname,info_283.sline), come_pop_stackframe(), __exception_result_var_b509);
                                    (come_push_stackframe("02transpile.c", 933),exit(2),come_pop_stackframe());
                                }
                                __dec_obj124=info_283.original_source;
                                info_283.original_source=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 936),__exception_result_var_b512=((struct buffer*)(right_value445=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 936),__exception_result_var_b511=((struct optional$2charphbool*)(right_value444=string_read(((char*)come_null_check((come_push_stackframe("02transpile.c", 936),__exception_result_var_b510=((char*)(right_value443=xsprintf("%s",it_282))), come_pop_stackframe(), __exception_result_var_b510), "02transpile.c", 936))))), come_pop_stackframe(), __exception_result_var_b511)), "02transpile.c", 936))))), come_pop_stackframe(), __exception_result_var_b512));
                                if(__dec_obj124) { come_call_finalizer(buffer_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value443);
                                if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { right_value443 = come_decrement_ref_count(right_value443, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[25] = right_value443;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value444);
                                if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[26] = right_value444;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value445);
                                if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[27] = right_value445;
                                __freed_obj__ = 0;
                                __dec_obj125=info_283.source;
                                info_283.source=(struct buffer*)come_increment_ref_count((come_push_stackframe("02transpile.c", 937),__exception_result_var_b515=((struct buffer*)(right_value448=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 937),__exception_result_var_b514=((struct optional$2charphbool*)(right_value447=string_read(((char*)come_null_check((come_push_stackframe("02transpile.c", 937),__exception_result_var_b513=((char*)(right_value446=xsprintf("%s.i",it_282))), come_pop_stackframe(), __exception_result_var_b513), "02transpile.c", 937))))), come_pop_stackframe(), __exception_result_var_b514)), "02transpile.c", 937))))), come_pop_stackframe(), __exception_result_var_b515));
                                if(__dec_obj125) { come_call_finalizer(buffer_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value446);
                                if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { right_value446 = come_decrement_ref_count(right_value446, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[28] = right_value446;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value447);
                                if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[29] = right_value447;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value448);
                                if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[30] = right_value448;
                                __freed_obj__ = 0;
                                info_283.p=((struct buffer*)come_null_check(info_283.source, "02transpile.c", 938))->buf;
                                info_283.head=((struct buffer*)come_null_check(info_283.source, "02transpile.c", 939))->buf;
                                if(_if_conditional419=output_file_name_275,                                _if_conditional419) {
                                    __dec_obj126=info_283.output_file_name;
                                    info_283.output_file_name=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 942),__exception_result_var_b516=((char*)(right_value449=__builtin_string(output_file_name_275))), come_pop_stackframe(), __exception_result_var_b516));
                                    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value449);
                                    if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { right_value449 = come_decrement_ref_count(right_value449, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value449;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj127=info_283.output_file_name;
                                    info_283.output_file_name=((void*)0);
                                    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                                }
                                if(_if_conditional420=!output_cpp_file_273,                                _if_conditional420) {
                                    (come_push_stackframe("02transpile.c", 949),__exception_result_var_b517=transpile_v5(&info_283), come_pop_stackframe(), __exception_result_var_b517);
                                    if(_if_conditional421=!(come_push_stackframe("02transpile.c", 951),__exception_result_var_b518=output_source_file_v3(&info_283), come_pop_stackframe(), __exception_result_var_b518),                                    _if_conditional421) {
                                        (come_push_stackframe("02transpile.c", 952),__exception_result_var_b519=printf("%s %d: output source file faield\n",info_283.sname,info_283.sline), come_pop_stackframe(), __exception_result_var_b519);
                                        (come_push_stackframe("02transpile.c", 953),exit(2),come_pop_stackframe());
                                    }
                                    if(_if_conditional422=info_283.err_num>0,                                    _if_conditional422) {
                                        (come_push_stackframe("02transpile.c", 957),__exception_result_var_b520=printf("transpile error. err num %d\n",info_283.err_num), come_pop_stackframe(), __exception_result_var_b520);
                                        (come_push_stackframe("02transpile.c", 959),exit(2),come_pop_stackframe());
                                    }
                                    else {
                                        if(_if_conditional423=!(come_push_stackframe("02transpile.c", 962),__exception_result_var_b521=compile(&info_283,output_object_file_272,object_files_271), come_pop_stackframe(), __exception_result_var_b521),                                        _if_conditional423) {
                                            (come_push_stackframe("02transpile.c", 963),__exception_result_var_b522=printf("%s %d: compile faield\n",info_283.sname,info_283.sline), come_pop_stackframe(), __exception_result_var_b522);
                                            (come_push_stackframe("02transpile.c", 964),exit(27),come_pop_stackframe());
                                        }
                                    }
                                }
                                if((&info_283) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_283), (void*)0, (void*)0, 1, 0, 0, 0); }
                                if(lv_table_284 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,lv_table_284, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_281 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_281, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(_if_conditional424=!output_object_file_272&&!output_cpp_file_273&&((come_push_stackframe("02transpile.c", 972),__exception_result_var_b523=list$1charph_length(((struct list$1charph*)come_null_check(files_270, "02transpile.c", 972))), come_pop_stackframe(), __exception_result_var_b523)>0||(come_push_stackframe("02transpile.c", 972),__exception_result_var_b524=list$1charph_length(((struct list$1charph*)come_null_check(object_files_271, "02transpile.c", 972))), come_pop_stackframe(), __exception_result_var_b524)>0),                            _if_conditional424) {
                                (come_push_stackframe("02transpile.c", 975),__exception_result_var_b525=memset(&info_285,0,sizeof(struct sInfo)), come_pop_stackframe(), __exception_result_var_b525);
                                __dec_obj128=info_285.sname;
                                info_285.sname=(char*)come_increment_ref_count(((char*)(right_value450=string_clone((come_push_stackframe("02transpile.c", 977),__exception_result_var_b527=list$1charphp_operator_load_element(files_270,0), come_pop_stackframe(), __exception_result_var_b527)))));
                                if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value450);
                                if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { right_value450 = come_decrement_ref_count(right_value450, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value450;
                                __freed_obj__ = 0;
                                __dec_obj129=info_285.clang_option;
                                info_285.clang_option=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 978),__exception_result_var_b528=((char*)(right_value451=buffer_to_string(((struct buffer*)come_null_check(clang_option_268, "02transpile.c", 978))))), come_pop_stackframe(), __exception_result_var_b528));
                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value451);
                                if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { right_value451 = come_decrement_ref_count(right_value451, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value451;
                                __freed_obj__ = 0;
                                info_285.verbose=verbose_276;
                                if(_if_conditional427=output_file_name_275,                                _if_conditional427) {
                                    __dec_obj130=info_285.output_file_name;
                                    info_285.output_file_name=(char*)come_increment_ref_count((come_push_stackframe("02transpile.c", 982),__exception_result_var_b529=((char*)(right_value452=__builtin_string(output_file_name_275))), come_pop_stackframe(), __exception_result_var_b529));
                                    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value452);
                                    if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value452;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj131=info_285.output_file_name;
                                    info_285.output_file_name=((void*)0);
                                    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                                }
                                __current_stack2__.info_285 = &info_285;
                                __current_stack2__.clang_option_268 = &clang_option_268;
                                __current_stack2__.cpp_option_269 = &cpp_option_269;
                                __current_stack2__.files_270 = &files_270;
                                __current_stack2__.object_files_271 = &object_files_271;
                                __current_stack2__.output_object_file_272 = &output_object_file_272;
                                __current_stack2__.output_cpp_file_273 = &output_cpp_file_273;
                                __current_stack2__.output_source_file_flag_274 = &output_source_file_flag_274;
                                __current_stack2__.output_file_name_275 = &output_file_name_275;
                                __current_stack2__.verbose_276 = &verbose_276;
                                __current_stack2__.come_debug_277 = &come_debug_277;
                                __current_stack2__.come_malloc_278 = &come_malloc_278;
                                __current_stack2__.come_str_279 = &come_str_279;
                                __current_stack2__.argc = &argc;
                                __current_stack2__.argv = &argv;
                                (come_push_stackframe("02transpile.c", 992),__exception_result_var_b532=bool_expect((come_push_stackframe("02transpile.c", 988),__exception_result_var_b530=linker(&info_285,object_files_271), come_pop_stackframe(), __exception_result_var_b530),&__current_stack2__,(void*)method_block2_02transpilec), come_pop_stackframe(), __exception_result_var_b532);
                                                    if(__current_stack2__.__method_block_result_kind__ == 3)
                    {
                        return (int)__current_stack2__.__method_block_return_value__;
                    }
                                if((&info_285) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_285), (void*)0, (void*)0, 1, 0, 0, 0); }
                            }
                            (come_push_stackframe("02transpile.c", 994),come_final_v5(),come_pop_stackframe());
                            if(clang_option_268 && !__freed_obj__) { come_call_finalizer(buffer_finalize,clang_option_268, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(cpp_option_269 && !__freed_obj__) { come_call_finalizer(buffer_finalize,cpp_option_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(files_270 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,files_270, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(object_files_271 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,object_files_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(output_file_name_275 && !__freed_obj__) { output_file_name_275 = come_decrement_ref_count(output_file_name_275, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
            }
        }
    }
    __result172__ = 0;
    return __result172__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value347;
void* right_value348;
void* right_value349;
int i_250;
_Bool _for_condtionalA18;
void* right_value350;
void* right_value351;
struct list$1charp* __exception_result_var_b404;
struct list$1charp* __dec_obj93;
struct map$2charphsFunph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&i_250, 0, sizeof(int));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1131))->keys=(char**)come_increment_ref_count(((char**)(right_value347=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1131, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
                if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value347;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1132))->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value348=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(1024)), "./comelang2.h", 1132, "struct sFun*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value348);
                if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value348;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1133))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value349=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1133, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value349);
                if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value349;
                __freed_obj__ = 0;
                for(
                i_250=0 ,                0;                _for_condtionalA18=                i_250<1024 ,                _for_condtionalA18;                i_250++ ,                0                ){
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1137))->item_existance[i_250]=(_Bool)0;
                }
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1140))->size=1024;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1141))->len=0;
                __dec_obj93=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1143))->key_list;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1143))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 1143),__exception_result_var_b404=((struct list$1charp*)(right_value351=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value350=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1143, "struct list$1charp"))))))), come_pop_stackframe(), __exception_result_var_b404));
                if(__dec_obj93) { come_call_finalizer(list$1charp_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value350);
                if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value350;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value351);
                if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value351;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1145))->it=0;
                __result157__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result157__;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_251;
_Bool _for_condtionalA19;
_Bool _if_conditional323;
_Bool _if_conditional324;
int i_252;
_Bool _for_condtionalA20;
_Bool _if_conditional325;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_251, 0, sizeof(int));
memset(&i_252, 0, sizeof(int));
                    for(
                    i_251=0 ,                    0;                    _for_condtionalA19=                    i_251<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1174))->size ,                    _for_condtionalA19;                    i_251++ ,                    0                    ){
                        if(_if_conditional323=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1175))->item_existance[i_251],                        _if_conditional323) {
                            if(_if_conditional324=1,                            _if_conditional324) {
                                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->items[i_251] && !__freed_obj__) { come_call_finalizer(sFun_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->items[i_251], (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                        }
                    }
                    (come_push_stackframe("./comelang2.h", 1181),come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1181))->items),come_pop_stackframe());
                    for(
                    i_252=0 ,                    0;                    _for_condtionalA20=                    i_252<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1183))->size ,                    _for_condtionalA20;                    i_252++ ,                    0                    ){
                        if(_if_conditional325=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1184))->item_existance[i_252],                        _if_conditional325) {
                            if(_if_conditional326=1,                            _if_conditional326) {
                                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_252] && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_252] = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_252], (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                    }
                    (come_push_stackframe("./comelang2.h", 1190),come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1190))->keys),come_pop_stackframe());
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1192))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1192))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1194))->item_existance && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1194))->item_existance = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1194))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional327;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional327=self!=((void*)0)&&((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 0))->key_list!=((void*)0),                _if_conditional327) {
                    if(((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value354;
void* right_value355;
void* right_value356;
int i_253;
_Bool _for_condtionalA21;
void* right_value357;
void* right_value358;
struct list$1charp* __exception_result_var_b406;
struct list$1charp* __dec_obj95;
struct map$2charphsGenericsFunph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&i_253, 0, sizeof(int));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1131))->keys=(char**)come_increment_ref_count(((char**)(right_value354=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1131, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value354;
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1132))->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value355=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(1024)), "./comelang2.h", 1132, "struct sGenericsFun*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value355);
                if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value355;
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1133))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value356=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1133, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value356);
                if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value356;
                __freed_obj__ = 0;
                for(
                i_253=0 ,                0;                _for_condtionalA21=                i_253<1024 ,                _for_condtionalA21;                i_253++ ,                0                ){
                    ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1137))->item_existance[i_253]=(_Bool)0;
                }
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1140))->size=1024;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1141))->len=0;
                __dec_obj95=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1143))->key_list;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1143))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 1143),__exception_result_var_b406=((struct list$1charp*)(right_value358=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value357=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1143, "struct list$1charp"))))))), come_pop_stackframe(), __exception_result_var_b406));
                if(__dec_obj95) { come_call_finalizer(list$1charp_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value357);
                if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value357;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value358);
                if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value358;
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1145))->it=0;
                __result158__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result158__;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional328=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType!=((void*)0),                    _if_conditional328) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional329=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames!=((void*)0),                    _if_conditional329) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional330=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName!=((void*)0),                    _if_conditional330) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional331=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType!=((void*)0),                    _if_conditional331) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional332=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes!=((void*)0),                    _if_conditional332) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional333=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames!=((void*)0),                    _if_conditional333) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional334=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors!=((void*)0),                    _if_conditional334) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional335=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock!=((void*)0),                    _if_conditional335) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional336=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName!=((void*)0),                    _if_conditional336) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_254;
_Bool _for_condtionalA22;
_Bool _if_conditional337;
_Bool _if_conditional338;
int i_255;
_Bool _for_condtionalA23;
_Bool _if_conditional339;
_Bool _if_conditional340;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_254, 0, sizeof(int));
memset(&i_255, 0, sizeof(int));
                    for(
                    i_254=0 ,                    0;                    _for_condtionalA22=                    i_254<((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1174))->size ,                    _for_condtionalA22;                    i_254++ ,                    0                    ){
                        if(_if_conditional337=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1175))->item_existance[i_254],                        _if_conditional337) {
                            if(_if_conditional338=1,                            _if_conditional338) {
                                if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->items[i_254] && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->items[i_254], (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                        }
                    }
                    (come_push_stackframe("./comelang2.h", 1181),come_free_object((char*)((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1181))->items),come_pop_stackframe());
                    for(
                    i_255=0 ,                    0;                    _for_condtionalA23=                    i_255<((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1183))->size ,                    _for_condtionalA23;                    i_255++ ,                    0                    ){
                        if(_if_conditional339=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1184))->item_existance[i_255],                        _if_conditional339) {
                            if(_if_conditional340=1,                            _if_conditional340) {
                                if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_255] && !__freed_obj__) { ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_255] = come_decrement_ref_count(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_255], (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                    }
                    (come_push_stackframe("./comelang2.h", 1190),come_free_object((char*)((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1190))->keys),come_pop_stackframe());
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1192))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1192))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1194))->item_existance && !__freed_obj__) { ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1194))->item_existance = come_decrement_ref_count(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1194))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional341=self!=((void*)0)&&((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 0))->key_list!=((void*)0),                _if_conditional341) {
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value361;
void* right_value362;
void* right_value363;
int i_256;
_Bool _for_condtionalA24;
void* right_value364;
void* right_value365;
struct list$1charp* __exception_result_var_b408;
struct list$1charp* __dec_obj97;
struct map$2charphsClassph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&i_256, 0, sizeof(int));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1131))->keys=(char**)come_increment_ref_count(((char**)(right_value361=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1131, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
                if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value361;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1132))->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value362=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(1024)), "./comelang2.h", 1132, "struct sClass*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value362);
                if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value362;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1133))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value363=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1133, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value363);
                if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value363;
                __freed_obj__ = 0;
                for(
                i_256=0 ,                0;                _for_condtionalA24=                i_256<1024 ,                _for_condtionalA24;                i_256++ ,                0                ){
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1137))->item_existance[i_256]=(_Bool)0;
                }
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1140))->size=1024;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1141))->len=0;
                __dec_obj97=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1143))->key_list;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1143))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 1143),__exception_result_var_b408=((struct list$1charp*)(right_value365=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value364=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1143, "struct list$1charp"))))))), come_pop_stackframe(), __exception_result_var_b408));
                if(__dec_obj97) { come_call_finalizer(list$1charp_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value364);
                if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value364;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value365);
                if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value365;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1145))->it=0;
                __result159__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result159__;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_257;
_Bool _for_condtionalA25;
_Bool _if_conditional342;
_Bool _if_conditional343;
int i_258;
_Bool _for_condtionalA26;
_Bool _if_conditional344;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_257, 0, sizeof(int));
memset(&i_258, 0, sizeof(int));
                    for(
                    i_257=0 ,                    0;                    _for_condtionalA25=                    i_257<((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1174))->size ,                    _for_condtionalA25;                    i_257++ ,                    0                    ){
                        if(_if_conditional342=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1175))->item_existance[i_257],                        _if_conditional342) {
                            if(_if_conditional343=1,                            _if_conditional343) {
                                if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->items[i_257] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->items[i_257], (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                        }
                    }
                    (come_push_stackframe("./comelang2.h", 1181),come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1181))->items),come_pop_stackframe());
                    for(
                    i_258=0 ,                    0;                    _for_condtionalA26=                    i_258<((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1183))->size ,                    _for_condtionalA26;                    i_258++ ,                    0                    ){
                        if(_if_conditional344=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1184))->item_existance[i_258],                        _if_conditional344) {
                            if(_if_conditional345=1,                            _if_conditional345) {
                                if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_258] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_258] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_258], (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                    }
                    (come_push_stackframe("./comelang2.h", 1190),come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1190))->keys),come_pop_stackframe());
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1192))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1192))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1194))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1194))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1194))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional346=self!=((void*)0)&&((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 0))->key_list!=((void*)0),                _if_conditional346) {
                    if(((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value368;
void* right_value369;
void* right_value370;
int i_259;
_Bool _for_condtionalA27;
void* right_value371;
void* right_value372;
struct list$1charp* __exception_result_var_b410;
struct list$1charp* __dec_obj99;
struct map$2charphsTypeph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&i_259, 0, sizeof(int));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1131))->keys=(char**)come_increment_ref_count(((char**)(right_value368=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1131, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
                if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value368;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1132))->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value369=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(1024)), "./comelang2.h", 1132, "struct sType*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value369);
                if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value369;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1133))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value370=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1133, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value370);
                if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value370;
                __freed_obj__ = 0;
                for(
                i_259=0 ,                0;                _for_condtionalA27=                i_259<1024 ,                _for_condtionalA27;                i_259++ ,                0                ){
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1137))->item_existance[i_259]=(_Bool)0;
                }
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1140))->size=1024;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1141))->len=0;
                __dec_obj99=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1143))->key_list;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1143))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 1143),__exception_result_var_b410=((struct list$1charp*)(right_value372=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value371=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1143, "struct list$1charp"))))))), come_pop_stackframe(), __exception_result_var_b410));
                if(__dec_obj99) { come_call_finalizer(list$1charp_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value371);
                if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value371;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value372);
                if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value372;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1145))->it=0;
                __result160__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result160__;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_260;
_Bool _for_condtionalA28;
_Bool _if_conditional347;
_Bool _if_conditional348;
int i_261;
_Bool _for_condtionalA29;
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_260, 0, sizeof(int));
memset(&i_261, 0, sizeof(int));
                    for(
                    i_260=0 ,                    0;                    _for_condtionalA28=                    i_260<((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1174))->size ,                    _for_condtionalA28;                    i_260++ ,                    0                    ){
                        if(_if_conditional347=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1175))->item_existance[i_260],                        _if_conditional347) {
                            if(_if_conditional348=1,                            _if_conditional348) {
                                if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->items[i_260] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->items[i_260], (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                        }
                    }
                    (come_push_stackframe("./comelang2.h", 1181),come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1181))->items),come_pop_stackframe());
                    for(
                    i_261=0 ,                    0;                    _for_condtionalA29=                    i_261<((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1183))->size ,                    _for_condtionalA29;                    i_261++ ,                    0                    ){
                        if(_if_conditional349=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1184))->item_existance[i_261],                        _if_conditional349) {
                            if(_if_conditional350=1,                            _if_conditional350) {
                                if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_261] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_261] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1186))->keys[i_261], (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                    }
                    (come_push_stackframe("./comelang2.h", 1190),come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1190))->keys),come_pop_stackframe());
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1192))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1192))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1194))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1194))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1194))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional351;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional351=self!=((void*)0)&&((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 0))->key_list!=((void*)0),                _if_conditional351) {
                    if(((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sRightValueObjectph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 161))->len=0;
                __result161__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result161__;
                if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_262;
_Bool _while_condtional30;
struct list_item$1sRightValueObjectph* prev_it_263;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_262, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_263, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_262=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 178))->head;
                    while(_while_condtional30=it_262!=((void*)0),                    _while_condtional30) {
                        prev_it_263=it_262;
                        it_262=((struct list_item$1sRightValueObjectph*)come_null_check(it_262, "./comelang2.h", 181))->next;
                        if(prev_it_263 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional352=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item!=((void*)0),                            _if_conditional352) {
                                if(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional353=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType!=((void*)0),                                    _if_conditional353) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional354=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName!=((void*)0),                                    _if_conditional354) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional355=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName!=((void*)0),                                    _if_conditional355) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
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
struct list$1CVALUEph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 161))->len=0;
                __result162__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result162__;
                if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_264;
_Bool _while_condtional31;
struct list_item$1CVALUEph* prev_it_265;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_264, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_265, 0, sizeof(struct list_item$1CVALUEph*));
                    it_264=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 178))->head;
                    while(_while_condtional31=it_264!=((void*)0),                    _while_condtional31) {
                        prev_it_265=it_264;
                        it_264=((struct list_item$1CVALUEph*)come_null_check(it_264, "./comelang2.h", 181))->next;
                        if(prev_it_265 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_265, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional356;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional356=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item!=((void*)0),                            _if_conditional356) {
                                if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional357=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value!=((void*)0),                                    _if_conditional357) {
                                        if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional358=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type!=((void*)0),                                    _if_conditional358) {
                                        if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
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
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result163__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 419))->len;
                return __result163__;
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional362=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->original_source!=((void*)0),                _if_conditional362) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->original_source && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->original_source, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional363=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->source!=((void*)0),                _if_conditional363) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->source && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->source, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional364=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname!=((void*)0),                _if_conditional364) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional365=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname!=((void*)0),                _if_conditional365) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional366=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line!=((void*)0),                _if_conditional366) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional367=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option!=((void*)0),                _if_conditional367) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional368=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option!=((void*)0),                _if_conditional368) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional369=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->funcs!=((void*)0),                _if_conditional369) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->funcs && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->funcs, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional370=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->generics_funcs!=((void*)0),                _if_conditional370) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->generics_funcs && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->generics_funcs, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional371=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->classes!=((void*)0),                _if_conditional371) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->classes && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->classes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional372=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->types!=((void*)0),                _if_conditional372) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->types && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->types, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional373=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->generics_classes!=((void*)0),                _if_conditional373) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->generics_classes && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->generics_classes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional374=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->module!=((void*)0),                _if_conditional374) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->module && !__freed_obj__) { come_call_finalizer(sModule_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->module, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional375=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->type!=((void*)0),                _if_conditional375) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional376=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->right_value_objects!=((void*)0),                _if_conditional376) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->right_value_objects && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->right_value_objects, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional377=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->generics_type!=((void*)0),                _if_conditional377) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->generics_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->generics_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional378=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->method_generics_types!=((void*)0),                _if_conditional378) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->method_generics_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional379=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->stack!=((void*)0),                _if_conditional379) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->stack && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->stack, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional380=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->come_function_result_type!=((void*)0),                _if_conditional380) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->come_function_result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->come_function_result_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional381=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->gv_table!=((void*)0),                _if_conditional381) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->gv_table && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->gv_table, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional382=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->generics_type_names!=((void*)0),                _if_conditional382) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->generics_type_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional383=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->impl_type!=((void*)0),                _if_conditional383) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->impl_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->impl_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional384=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name!=((void*)0),                _if_conditional384) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional425;
struct list_item$1charph* it_286;
int i_287;
_Bool _while_condtional32;
_Bool _if_conditional426;
char* __result170__;
char* default_value_288;
void* __exception_result_var_b526;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_286, 0, sizeof(struct list_item$1charph*));
memset(&i_287, 0, sizeof(int));
memset(&default_value_288, 0, sizeof(char*));
                                    if(_if_conditional425=position<0,                                    _if_conditional425) {
                                        position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 744))->len;
                                    }
                                    it_286=((struct list$1charph*)come_null_check(self, "./comelang2.h", 747))->head;
                                    i_287=0;
                                    while(_while_condtional32=it_286!=((void*)0),                                    _while_condtional32) {
                                        if(_if_conditional426=position==i_287,                                        _if_conditional426) {
                                            __result170__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(it_286, "./comelang2.h", 751))->item;
                                            return __result170__;
                                        }
                                        it_286=((struct list_item$1charph*)come_null_check(it_286, "./comelang2.h", 753))->next;
                                        i_287++;
                                    }
                                    (come_push_stackframe("./comelang2.h", 758),__exception_result_var_b526=memset(&default_value_288,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b526);
                                    __result171__ = __result_obj__ = default_value_288;
                                    if(default_value_288 && !__freed_obj__) { default_value_288 = come_decrement_ref_count(default_value_288, (void*)0, (void*)0, 0, 1, 0); }
                                    return __result171__;
                                    if(default_value_288 && !__freed_obj__) { default_value_288 = come_decrement_ref_count(default_value_288, (void*)0, (void*)0, 0, 0, 0); }
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b531;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    (come_push_stackframe("02transpile.c", 990),__exception_result_var_b531=printf("%s %d: linker faield\n",(*(parent->info_285)).sname,(*(parent->info_285)).sline), come_pop_stackframe(), __exception_result_var_b531);
                                    (come_push_stackframe("02transpile.c", 991),exit(13),come_pop_stackframe());
}

