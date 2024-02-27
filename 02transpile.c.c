// source head
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short short __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
typedef int __darwin_ct_rune_t;
union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
};
typedef union anonymous_typeZ1 __mbstate_t;
typedef union anonymous_typeZ1 __darwin_mbstate_t;
typedef long int __darwin_ptrdiff_t;
typedef long int __darwin_size_t;
typedef __builtin_va_list __darwin_va_list;
typedef int __darwin_wchar_t;
typedef int __darwin_rune_t;
typedef int __darwin_wint_t;
typedef unsigned long int __darwin_clock_t;
typedef unsigned int __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
typedef long long __darwin_blkcnt_t;
typedef int __darwin_blksize_t;
typedef int __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef unsigned int __darwin_gid_t;
typedef unsigned int __darwin_id_t;
typedef unsigned long long __darwin_ino64_t;
typedef unsigned long long __darwin_ino_t;
typedef unsigned int __darwin_mach_port_name_t;
typedef unsigned int __darwin_mach_port_t;
typedef unsigned short int __darwin_mode_t;
typedef long long __darwin_off_t;
typedef int __darwin_pid_t;
typedef unsigned int __darwin_sigset_t;
typedef int __darwin_suseconds_t;
typedef unsigned int __darwin_uid_t;
typedef unsigned int __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec* __next;
};
struct _opaque_pthread_attr_t
{
    long __sig;
    char __opaque[56];
};
struct _opaque_pthread_cond_t
{
    long __sig;
    char __opaque[40];
};
struct _opaque_pthread_condattr_t
{
    long __sig;
    char __opaque[8];
};
struct _opaque_pthread_mutex_t
{
    long __sig;
    char __opaque[56];
};
struct _opaque_pthread_mutexattr_t
{
    long __sig;
    char __opaque[8];
};
struct _opaque_pthread_once_t
{
    long __sig;
    char __opaque[8];
};
struct _opaque_pthread_rwlock_t
{
    long __sig;
    char __opaque[192];
};
struct _opaque_pthread_rwlockattr_t
{
    long __sig;
    char __opaque[16];
};
struct _opaque_pthread_t
{
    long __sig;
    struct __darwin_pthread_handler_rec* __cleanup_stack;
    char __opaque[8176];
};
typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long int __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t* __darwin_pthread_t;
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;
typedef unsigned int __darwin_wctype_t;
typedef char int8_t;
typedef short short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;
typedef long long register_t;
typedef long intptr_t;
typedef unsigned long int uintptr_t;
typedef unsigned long long user_addr_t;
typedef unsigned long long user_size_t;
typedef long long user_ssize_t;
typedef long long user_long_t;
typedef unsigned long long user_ulong_t;
typedef long long user_time_t;
typedef long long user_off_t;
typedef unsigned long long syscall_arg_t;
typedef __darwin_va_list va_list;
typedef long int size_t;
typedef long long fpos_t;
struct __sbuf
{
    unsigned char* _base;
    int _size;
};
struct __sFILEX;
struct __sFILE
{
    unsigned char* _p;
    int _r;
    int _w;
    short short _flags;
    short short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void* _cookie;
    int (*_close)(void*);
    int (*_read)(void*,char*,int);
    long long (*_seek)(void*,long long,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf _ub;
    struct __sFILEX* _extra;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    long long _offset;
};
typedef struct __sFILE FILE;
extern struct __sFILE* __stdinp;
extern struct __sFILE* __stdoutp;
extern struct __sFILE* __stderrp;
typedef long long off_t;
typedef long ssize_t;
extern const int sys_nerr;
extern const char** sys_errlist;
enum anonymous_typeY2 { P_ALL
,P_PID
,P_PGID
};
typedef enum anonymous_typeY2 idtype_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int sig_atomic_t;
struct __darwin_arm_exception_state
{
    unsigned int __exception;
    unsigned int __fsr;
    unsigned int __far;
};
struct __darwin_arm_exception_state64
{
    unsigned long long __far;
    unsigned int __esr;
    unsigned int __exception;
};
struct __darwin_arm_thread_state
{
    unsigned int __r[13];
    unsigned int __sp;
    unsigned int __lr;
    unsigned int __pc;
    unsigned int __cpsr;
};
struct __darwin_arm_thread_state64
{
    unsigned long long __x[29];
    unsigned long long __fp;
    unsigned long long __lr;
    unsigned long long __sp;
    unsigned long long __pc;
    unsigned int __cpsr;
    unsigned int __pad;
};
struct __darwin_arm_vfp_state
{
    unsigned int __r[64];
    unsigned int __fpscr;
};
struct __darwin_arm_neon_state64
{
    __uint128_t __v[32];
    unsigned int __fpsr;
    unsigned int __fpcr;
};
struct __darwin_arm_neon_state
{
    __uint128_t __v[16];
    unsigned int __fpsr;
    unsigned int __fpcr;
};
struct __arm_pagein_state
{
    int __pagein_error;
};
struct __arm_legacy_debug_state
{
    unsigned int __bvr[16];
    unsigned int __bcr[16];
    unsigned int __wvr[16];
    unsigned int __wcr[16];
};
struct __darwin_arm_debug_state32
{
    unsigned int __bvr[16];
    unsigned int __bcr[16];
    unsigned int __wvr[16];
    unsigned int __wcr[16];
    unsigned long long __mdscr_el1;
};
struct __darwin_arm_debug_state64
{
    unsigned long long __bvr[16];
    unsigned long long __bcr[16];
    unsigned long long __wvr[16];
    unsigned long long __wcr[16];
    unsigned long long __mdscr_el1;
};
struct __darwin_arm_cpmu_state64
{
    unsigned long long __ctrs[16];
};
struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state __es;
    struct __darwin_arm_thread_state __ss;
    struct __darwin_arm_vfp_state __fs;
};
struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64 __es;
    struct __darwin_arm_thread_state64 __ss;
    struct __darwin_arm_neon_state64 __ns;
};
typedef struct __darwin_mcontext64* mcontext_t;
typedef struct _opaque_pthread_attr_t pthread_attr_t;
struct __darwin_sigaltstack
{
    void* ss_sp;
    long int ss_size;
    int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int uc_sigmask;
    struct __darwin_sigaltstack uc_stack;
    struct __darwin_ucontext* uc_link;
    long int uc_mcsize;
    struct __darwin_mcontext64* uc_mcontext;
};
typedef struct __darwin_ucontext ucontext_t;
typedef unsigned int sigset_t;
typedef unsigned int uid_t;
union sigval
{
int sival_int;
void* sival_ptr;
};
struct sigevent
{
    int sigev_notify;
    int sigev_signo;
    union sigval sigev_value;
    void (*sigev_notify_function)(union sigval);
    struct _opaque_pthread_attr_t* sigev_notify_attributes;
};
struct __siginfo
{
    int si_signo;
    int si_errno;
    int si_code;
    int si_pid;
    unsigned int si_uid;
    int si_status;
    void* si_addr;
    union sigval si_value;
    long si_band;
    unsigned long int __pad[7];
};
typedef struct __siginfo siginfo_t;
union __sigaction_u
{
void (*__sa_handler)(int);
void (*__sa_sigaction)(int,struct __siginfo*,void*);
};
struct __sigaction
{
    union __sigaction_u __sigaction_u;
    void (*sa_tramp)(void*,int,int,struct __siginfo*,void*);
    unsigned int sa_mask;
    int sa_flags;
};
struct sigaction
{
    union __sigaction_u __sigaction_u;
    unsigned int sa_mask;
    int sa_flags;
};
typedef void (*sig_t)(int);
struct sigvec
{
    void (*sv_handler)(int);
    int sv_mask;
    int sv_flags;
};
struct sigstack
{
    char* ss_sp;
    int ss_onstack;
};
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef char int_least8_t;
typedef short short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef char int_fast8_t;
typedef short short int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned short int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef long int intmax_t;
typedef long int uintmax_t;
struct timeval
{
    long tv_sec;
    int tv_usec;
};
typedef unsigned long long rlim_t;
struct rusage
{
    struct timeval ru_utime;
    struct timeval ru_stime;
    long ru_maxrss;
    long ru_ixrss;
    long ru_idrss;
    long ru_isrss;
    long ru_minflt;
    long ru_majflt;
    long ru_nswap;
    long ru_inblock;
    long ru_oublock;
    long ru_msgsnd;
    long ru_msgrcv;
    long ru_nsignals;
    long ru_nvcsw;
    long ru_nivcsw;
};
typedef void* rusage_info_t;
struct rusage_info_v0
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
};
struct rusage_info_v1
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
};
struct rusage_info_v2
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
};
struct rusage_info_v3
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
};
struct rusage_info_v4
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
    unsigned long long ri_logical_writes;
    unsigned long long ri_lifetime_max_phys_footprint;
    unsigned long long ri_instructions;
    unsigned long long ri_cycles;
    unsigned long long ri_billed_energy;
    unsigned long long ri_serviced_energy;
    unsigned long long ri_interval_max_phys_footprint;
    unsigned long long ri_runnable_time;
};
struct rusage_info_v5
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
    unsigned long long ri_logical_writes;
    unsigned long long ri_lifetime_max_phys_footprint;
    unsigned long long ri_instructions;
    unsigned long long ri_cycles;
    unsigned long long ri_billed_energy;
    unsigned long long ri_serviced_energy;
    unsigned long long ri_interval_max_phys_footprint;
    unsigned long long ri_runnable_time;
    unsigned long long ri_flags;
};
struct rusage_info_v6
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
    unsigned long long ri_logical_writes;
    unsigned long long ri_lifetime_max_phys_footprint;
    unsigned long long ri_instructions;
    unsigned long long ri_cycles;
    unsigned long long ri_billed_energy;
    unsigned long long ri_serviced_energy;
    unsigned long long ri_interval_max_phys_footprint;
    unsigned long long ri_runnable_time;
    unsigned long long ri_flags;
    unsigned long long ri_user_ptime;
    unsigned long long ri_system_ptime;
    unsigned long long ri_pinstructions;
    unsigned long long ri_pcycles;
    unsigned long long ri_energy_nj;
    unsigned long long ri_penergy_nj;
    unsigned long long ri_reserved[14];
};
typedef struct rusage_info_v6 rusage_info_current;
struct rlimit
{
    unsigned long long rlim_cur;
    unsigned long long rlim_max;
};
struct proc_rlimit_control_wakeupmon
{
    unsigned int wm_flags;
    int wm_rate;
};
struct anonymous_typeX3
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};
struct anonymous_typeX4
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};
union wait
{
int w_status;
struct anonymous_typeX3 w_T;
struct anonymous_typeX4 w_S;
};
typedef int ct_rune_t;
typedef int rune_t;
typedef int wchar_t;
struct anonymous_typeX5
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX5 div_t;
struct anonymous_typeX6
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX6 ldiv_t;
struct anonymous_typeX7
{
    long long quot;
    long long rem;
};
typedef struct anonymous_typeX7 lldiv_t;
extern int __mb_cur_max;
typedef unsigned long long malloc_type_id_t;
typedef struct _malloc_zone_t malloc_zone_t;
typedef int dev_t;
typedef unsigned short int mode_t;
extern char* suboptarg;
typedef long int rsize_t;
typedef int errno_t;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
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
struct accessx_descriptor
{
    unsigned int ad_name_offset;
    int ad_flags;
    int ad_pad[2];
};
typedef unsigned int gid_t;
typedef unsigned int useconds_t;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
struct fd_set
{
    int fds_bits[((((1024)%((sizeof(int)*8)))==0)?((1024)/((sizeof(int)*8))):(((1024)/((sizeof(int)*8)))+1))];
};
typedef struct fd_set fd_set;
struct timespec
{
    long tv_sec;
    long tv_nsec;
};
typedef long time_t;
typedef int suseconds_t;
typedef unsigned char uuid_t[16];
extern char* suboptarg;
struct fssearchblock;
struct searchstate;
extern int optreset;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef unsigned long long u_quad_t;
typedef long long quad_t;
typedef long long* qaddr_t;
typedef char* caddr_t;
typedef int daddr_t;
typedef unsigned int fixpt_t;
typedef long long blkcnt_t;
typedef int blksize_t;
typedef unsigned int in_addr_t;
typedef unsigned short int in_port_t;
typedef unsigned long long ino_t;
typedef unsigned long long ino64_t;
typedef int key_t;
typedef unsigned short int nlink_t;
typedef int segsz_t;
typedef int swblk_t;
typedef unsigned long int clock_t;
typedef int fd_mask;
typedef struct _opaque_pthread_cond_t pthread_cond_t;
typedef struct _opaque_pthread_condattr_t pthread_condattr_t;
typedef struct _opaque_pthread_mutex_t pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t pthread_once_t;
typedef struct _opaque_pthread_rwlock_t pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t pthread_rwlockattr_t;
typedef struct _opaque_pthread_t* pthread_t;
typedef unsigned long int pthread_key_t;
typedef unsigned int fsblkcnt_t;
typedef unsigned int fsfilcnt_t;
struct ostat
{
    unsigned short int st_dev;
    unsigned long long st_ino;
    unsigned short int st_mode;
    unsigned short int st_nlink;
    unsigned short int st_uid;
    unsigned short int st_gid;
    unsigned short int st_rdev;
    int st_size;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    int st_blksize;
    int st_blocks;
    unsigned int st_flags;
    unsigned int st_gen;
};
struct stat
{
    int st_dev;
    unsigned short int st_mode;
    unsigned short int st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};
struct _filesec;
typedef struct _filesec* filesec_t;
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
    struct sInfo* info_291;
    struct buffer** clang_option_274;
    struct buffer** cpp_option_275;
    struct list$1charph** files_276;
    struct list$1charph** object_files_277;
    _Bool* output_object_file_278;
    _Bool* output_cpp_file_279;
    _Bool* output_source_file_flag_280;
    char** output_file_name_281;
    _Bool* verbose_282;
    _Bool* come_debug_283;
    _Bool* come_malloc_284;
    _Bool* come_str_285;
    int* argc;
    char*** argv;
};

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);

int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);

int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);

void clearerr(struct __sFILE* anonymous_var_nameX35);

int fclose(struct __sFILE* anonymous_var_nameX36);

int feof(struct __sFILE* anonymous_var_nameX37);

int ferror(struct __sFILE* anonymous_var_nameX38);

int fflush(struct __sFILE* anonymous_var_nameX39);

int fgetc(struct __sFILE* anonymous_var_nameX40);

int fgetpos(struct __sFILE* anonymous_var_nameX41, long long* anonymous_var_nameX42);

char* fgets(char* anonymous_var_nameX43, int anonymous_var_nameX44, struct __sFILE* anonymous_var_nameX45);

struct __sFILE* fopen(const char* __filename, const char* __mode);

int fprintf(struct __sFILE* anonymous_var_nameX46, const char* anonymous_var_nameX47, ...);

int fputc(int anonymous_var_nameX48, struct __sFILE* anonymous_var_nameX49);

int fputs(const char* anonymous_var_nameX50, struct __sFILE* anonymous_var_nameX51);

long int fread(void* __ptr, long int __size, long int __nitems, struct __sFILE* __stream);

struct __sFILE* freopen(const char* anonymous_var_nameX52, const char* anonymous_var_nameX53, struct __sFILE* anonymous_var_nameX54);

int fscanf(struct __sFILE* anonymous_var_nameX55, const char* anonymous_var_nameX56, ...);

int fseek(struct __sFILE* anonymous_var_nameX57, long anonymous_var_nameX58, int anonymous_var_nameX59);

int fsetpos(struct __sFILE* anonymous_var_nameX60, const long long* anonymous_var_nameX61);

long ftell(struct __sFILE* anonymous_var_nameX62);

long int fwrite(const void* __ptr, long int __size, long int __nitems, struct __sFILE* __stream);

int getc(struct __sFILE* anonymous_var_nameX63);

int getchar();

char* gets(char* anonymous_var_nameX64);

void perror(const char* anonymous_var_nameX65);

int printf(const char* anonymous_var_nameX66, ...);

int putc(int anonymous_var_nameX67, struct __sFILE* anonymous_var_nameX68);

int putchar(int anonymous_var_nameX69);

int puts(const char* anonymous_var_nameX70);

int remove(const char* anonymous_var_nameX71);

int rename(const char* __old, const char* __new);

void rewind(struct __sFILE* anonymous_var_nameX72);

int scanf(const char* anonymous_var_nameX73, ...);

void setbuf(struct __sFILE* anonymous_var_nameX74, char* anonymous_var_nameX75);

int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, long int anonymous_var_nameX79);

int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...);

int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...);

struct __sFILE* tmpfile();

char* tmpnam(char* anonymous_var_nameX84);

int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);

int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89);

int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91);

int vsprintf(char* anonymous_var_nameX92, const char* anonymous_var_nameX93, va_list anonymous_var_nameX94);

char* ctermid(char* anonymous_var_nameX95);

struct __sFILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97);

int fileno(struct __sFILE* anonymous_var_nameX98);

int pclose(struct __sFILE* anonymous_var_nameX99);

struct __sFILE* popen(const char* anonymous_var_nameX100, const char* anonymous_var_nameX101);

int __srget(struct __sFILE* anonymous_var_nameX102);

int __svfscanf(struct __sFILE* anonymous_var_nameX103, const char* anonymous_var_nameX104, va_list anonymous_var_nameX105);

int __swbuf(int anonymous_var_nameX106, struct __sFILE* anonymous_var_nameX107);

void flockfile(struct __sFILE* anonymous_var_nameX108);

int ftrylockfile(struct __sFILE* anonymous_var_nameX109);

void funlockfile(struct __sFILE* anonymous_var_nameX110);

int getc_unlocked(struct __sFILE* anonymous_var_nameX111);

int getchar_unlocked();

int putc_unlocked(int anonymous_var_nameX112, struct __sFILE* anonymous_var_nameX113);

int putchar_unlocked(int anonymous_var_nameX114);

int getw(struct __sFILE* anonymous_var_nameX115);

int putw(int anonymous_var_nameX116, struct __sFILE* anonymous_var_nameX117);

char* tempnam(const char* __dir, const char* __prefix);

int fseeko(struct __sFILE* __stream, long long __offset, int __whence);

long long ftello(struct __sFILE* __stream);

int snprintf(char* __str, long int __size, const char* __format, ...);

int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118);

int vscanf(const char* __format, va_list anonymous_var_nameX119);

int vsnprintf(char* __str, long int __size, const char* __format, va_list anonymous_var_nameX120);

int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121);

int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...);

int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126);

long getdelim(char** __linep, long int* __linecapp, int __delimiter, struct __sFILE* __stream);

long getline(char** __linep, long int* __linecapp, struct __sFILE* __stream);

struct __sFILE* fmemopen(void* __buf, long int __size, const char* __mode);

struct __sFILE* open_memstream(char** __bufp, long int* __sizep);

int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...);

char* ctermid_r(char* anonymous_var_nameX129);

char* fgetln(struct __sFILE* anonymous_var_nameX130, long int* anonymous_var_nameX131);

const char* fmtcheck(const char* anonymous_var_nameX132, const char* anonymous_var_nameX133);

int fpurge(struct __sFILE* anonymous_var_nameX134);

void setbuffer(struct __sFILE* anonymous_var_nameX135, char* anonymous_var_nameX136, int anonymous_var_nameX137);

int setlinebuf(struct __sFILE* anonymous_var_nameX138);

int vasprintf(char** anonymous_var_nameX139, const char* anonymous_var_nameX140, va_list anonymous_var_nameX141);

struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));

void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);

int getpriority(int anonymous_var_nameX173, unsigned int anonymous_var_nameX174);

int getiopolicy_np(int anonymous_var_nameX175, int anonymous_var_nameX176);

int getrlimit(int anonymous_var_nameX177, struct rlimit* anonymous_var_nameX178);

int getrusage(int anonymous_var_nameX179, struct rusage* anonymous_var_nameX180);

int setpriority(int anonymous_var_nameX181, unsigned int anonymous_var_nameX182, int anonymous_var_nameX183);

int setiopolicy_np(int anonymous_var_nameX184, int anonymous_var_nameX185, int anonymous_var_nameX186);

int setrlimit(int anonymous_var_nameX187, const struct rlimit* anonymous_var_nameX188);

int wait(int* anonymous_var_nameX189);

int waitpid(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192);

int waitid(enum anonymous_typeY2 anonymous_var_nameX193, unsigned int anonymous_var_nameX194, struct __siginfo* anonymous_var_nameX195, int anonymous_var_nameX196);

int wait3(int* anonymous_var_nameX197, int anonymous_var_nameX198, struct rusage* anonymous_var_nameX199);

int wait4(int anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, struct rusage* anonymous_var_nameX203);

void* alloca(long int anonymous_var_nameX204);

void* malloc_type_malloc(long int size, unsigned long long type_id);

void* malloc_type_calloc(long int count, long int size, unsigned long long type_id);

void malloc_type_free(void* ptr, unsigned long long type_id);

void* malloc_type_realloc(void* ptr, long int size, unsigned long long type_id);

void* malloc_type_valloc(long int size, unsigned long long type_id);

void* malloc_type_aligned_alloc(long int alignment, long int size, unsigned long long type_id);

int malloc_type_posix_memalign(void** memptr, long int alignment, long int size, unsigned long long type_id);

void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, long int size, unsigned long long type_id);

void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, long int count, long int size, unsigned long long type_id);

void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long long type_id);

void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, long int size, unsigned long long type_id);

void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, long int size, unsigned long long type_id);

void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, long int alignment, long int size, unsigned long long type_id);

void* malloc(long int __size);

void* calloc(long int __count, long int __size);

void free(void* anonymous_var_nameX205);

void* realloc(void* __ptr, long int __size);

void* aligned_alloc(long int __alignment, long int __size);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

void abort();

int abs(int anonymous_var_nameX207);

int atexit(void (*anonymous_lambda_var_nameZ6)());

double atof(const char* anonymous_var_nameX208);

int atoi(const char* anonymous_var_nameX209);

long atol(const char* anonymous_var_nameX210);

long long atoll(const char* anonymous_var_nameX211);

void* bsearch(const void* __key, const void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

struct anonymous_typeX5 div(int anonymous_var_nameX214, int anonymous_var_nameX215);

void exit(int anonymous_var_nameX216);

char* getenv(const char* anonymous_var_nameX217);

long labs(long anonymous_var_nameX218);

struct anonymous_typeX6 ldiv(long anonymous_var_nameX219, long anonymous_var_nameX220);

long long llabs(long long anonymous_var_nameX221);

struct anonymous_typeX7 lldiv(long long anonymous_var_nameX222, long long anonymous_var_nameX223);

int mblen(const char* __s, long int __n);

long int mbstowcs(int* anonymous_var_nameX224, const char* anonymous_var_nameX225, long int anonymous_var_nameX226);

int mbtowc(int* anonymous_var_nameX227, const char* anonymous_var_nameX228, long int anonymous_var_nameX229);

void qsort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int rand();

void srand(unsigned int anonymous_var_nameX232);

double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234);

float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236);

long strtol(const char* __str, char** __endptr, int __base);

long double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);

long long strtoll(const char* __str, char** __endptr, int __base);

unsigned long int strtoul(const char* __str, char** __endptr, int __base);

unsigned long long strtoull(const char* __str, char** __endptr, int __base);

int system(const char* anonymous_var_nameX239);

long int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, long int anonymous_var_nameX242);

int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);

long a64l(const char* anonymous_var_nameX246);

double drand48();

char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);

double erand48(unsigned short int anonymous_var_nameX251[3]);

char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);

char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);

int grantpt(int anonymous_var_nameX262);

char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, long int anonymous_var_nameX265);

long jrand48(unsigned short int anonymous_var_nameX266[3]);

char* l64a(long anonymous_var_nameX267);

void lcong48(unsigned short int anonymous_var_nameX268[7]);

long lrand48();

long mrand48();

long nrand48(unsigned short int anonymous_var_nameX271[3]);

int posix_openpt(int anonymous_var_nameX272);

char* ptsname(int anonymous_var_nameX273);

int ptsname_r(int fildes, char* buffer, long int buflen);

int putenv(char* anonymous_var_nameX274);

long random();

int rand_r(unsigned int* anonymous_var_nameX275);

char* realpath(const char* anonymous_var_nameX276, char* anonymous_var_nameX277);

unsigned short int* seed48(unsigned short int anonymous_var_nameX278[3]);

int setenv(const char* __name, const char* __value, int __overwrite);

char* setstate(const char* anonymous_var_nameX280);

void srand48(long anonymous_var_nameX281);

void srandom(unsigned int anonymous_var_nameX282);

int unlockpt(int anonymous_var_nameX283);

int unsetenv(const char* anonymous_var_nameX284);

unsigned int arc4random();

void arc4random_addrandom(unsigned char* anonymous_var_nameX285, int anonymous_var_nameX286);

void arc4random_buf(void* __buf, long int __nbytes);

void arc4random_stir();

unsigned int arc4random_uniform(unsigned int __upper_bound);

int atexit_b(void (*anonymous_lambda_var_nameZ7)());

void* bsearch_b(const void* __key, const void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

char* cgetcap(char* anonymous_var_nameX289, const char* anonymous_var_nameX290, int anonymous_var_nameX291);

int cgetclose();

int cgetent(char** anonymous_var_nameX292, char** anonymous_var_nameX293, const char* anonymous_var_nameX294);

int cgetfirst(char** anonymous_var_nameX295, char** anonymous_var_nameX296);

int cgetmatch(const char* anonymous_var_nameX297, const char* anonymous_var_nameX298);

int cgetnext(char** anonymous_var_nameX299, char** anonymous_var_nameX300);

int cgetnum(char* anonymous_var_nameX301, const char* anonymous_var_nameX302, long* anonymous_var_nameX303);

int cgetset(const char* anonymous_var_nameX304);

int cgetstr(char* anonymous_var_nameX305, const char* anonymous_var_nameX306, char** anonymous_var_nameX307);

int cgetustr(char* anonymous_var_nameX308, const char* anonymous_var_nameX309, char** anonymous_var_nameX310);

int daemon(int anonymous_var_nameX311, int anonymous_var_nameX312);

char* devname(int anonymous_var_nameX313, unsigned short int anonymous_var_nameX314);

char* devname_r(int anonymous_var_nameX315, unsigned short int anonymous_var_nameX316, char* buf, int len);

char* getbsize(int* anonymous_var_nameX317, long* anonymous_var_nameX318);

int getloadavg(double* anonymous_var_nameX319, int anonymous_var_nameX320);

const char* getprogname();

void setprogname(const char* anonymous_var_nameX321);

int heapsort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int heapsort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int mergesort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int mergesort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void psort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void psort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void psort_r(void* __base, long int __nel, long int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*));

void qsort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void qsort_r(void* __base, long int __nel, long int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));

int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);

int rpmatch(const char* anonymous_var_nameX344);

int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);

void sranddev();

void srandomdev();

void* reallocf(void* __ptr, long int __size);

long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp);

long long strtoq(const char* __str, char** __endptr, int __base);

unsigned long long strtouq(const char* __str, char** __endptr, int __base);

void* memchr(const void* __s, int __c, long int __n);

int memcmp(const void* __s1, const void* __s2, long int __n);

void* memcpy(void* __dst, const void* __src, long int __n);

void* memmove(void* __dst, const void* __src, long int __len);

void* memset(void* __b, int __c, long int __len);

char* strcat(char* __s1, const char* __s2);

char* strchr(const char* __s, int __c);

int strcmp(const char* __s1, const char* __s2);

int strcoll(const char* __s1, const char* __s2);

char* strcpy(char* __dst, const char* __src);

long int strcspn(const char* __s, const char* __charset);

char* strerror(int __errnum);

long int strlen(const char* __s);

char* strncat(char* __s1, const char* __s2, long int __n);

int strncmp(const char* __s1, const char* __s2, long int __n);

char* strncpy(char* __dst, const char* __src, long int __n);

char* strpbrk(const char* __s, const char* __charset);

char* strrchr(const char* __s, int __c);

long int strspn(const char* __s, const char* __charset);

char* strstr(const char* __big, const char* __little);

char* strtok(char* __str, const char* __sep);

long int strxfrm(char* __s1, const char* __s2, long int __n);

char* strtok_r(char* __str, const char* __sep, char** __lasts);

int strerror_r(int __errnum, char* __strerrbuf, long int __buflen);

char* strdup(const char* __s1);

void* memccpy(void* __dst, const void* __src, int __c, long int __n);

char* stpcpy(char* __dst, const char* __src);

char* stpncpy(char* __dst, const char* __src, long int __n);

char* strndup(const char* __s1, long int __n);

long int strnlen(const char* __s1, long int __n);

char* strsignal(int __sig);

int memset_s(void* __s, long int __smax, int __c, long int __n);

void* memmem(const void* __big, long int __big_len, const void* __little, long int __little_len);

void memset_pattern4(void* __b, const void* __pattern4, long int __len);

void memset_pattern8(void* __b, const void* __pattern8, long int __len);

void memset_pattern16(void* __b, const void* __pattern16, long int __len);

char* strcasestr(const char* __big, const char* __little);

char* strnstr(const char* __big, const char* __little, long int __len);

long int strlcat(char* __dst, const char* __source, long int __size);

long int strlcpy(char* __dst, const char* __source, long int __size);

void strmode(int __mode, char* __bp);

char* strsep(char** __stringp, const char* __delim);

int timingsafe_bcmp(const void* __b1, const void* __b2, long int __len);

int strsignal_r(int __sig, char* __strsignalbuf, long int __buflen);

int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, long int anonymous_var_nameX350);

void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, long int anonymous_var_nameX353);

void bzero(void* anonymous_var_nameX354, long int anonymous_var_nameX355);

char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);

char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);

int ffs(int anonymous_var_nameX360);

int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);

int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, long int anonymous_var_nameX365);

int ffsl(long anonymous_var_nameX366);

int ffsll(long long anonymous_var_nameX367);

int fls(int anonymous_var_nameX368);

int flsl(long anonymous_var_nameX369);

int flsll(long long anonymous_var_nameX370);

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

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

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

struct buffer* buffer_append(struct buffer* self, char* mem, long int size);

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

int FILE_write(struct __sFILE* f, char* str);

char* FILE_read(struct __sFILE* f);

int FILE_fclose(struct __sFILE* f);

int* FILE_fprintf(struct __sFILE* f, const char* msg, ...);

struct list$1charph* FILE_readlines(struct __sFILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));

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

int getattrlistbulk(int anonymous_var_nameX447, void* anonymous_var_nameX448, void* anonymous_var_nameX449, long int anonymous_var_nameX450, unsigned long long anonymous_var_nameX451);

int getattrlistat(int anonymous_var_nameX452, const char* anonymous_var_nameX453, void* anonymous_var_nameX454, void* anonymous_var_nameX455, long int anonymous_var_nameX456, unsigned long int anonymous_var_nameX457);

int setattrlistat(int anonymous_var_nameX458, const char* anonymous_var_nameX459, void* anonymous_var_nameX460, void* anonymous_var_nameX461, long int anonymous_var_nameX462, unsigned int anonymous_var_nameX463);

long freadlink(int anonymous_var_nameX464, char* anonymous_var_nameX465, long int anonymous_var_nameX466);

int faccessat(int anonymous_var_nameX467, const char* anonymous_var_nameX468, int anonymous_var_nameX469, int anonymous_var_nameX470);

int fchownat(int anonymous_var_nameX471, const char* anonymous_var_nameX472, unsigned int anonymous_var_nameX473, unsigned int anonymous_var_nameX474, int anonymous_var_nameX475);

int linkat(int anonymous_var_nameX476, const char* anonymous_var_nameX477, int anonymous_var_nameX478, const char* anonymous_var_nameX479, int anonymous_var_nameX480);

long readlinkat(int anonymous_var_nameX481, const char* anonymous_var_nameX482, char* anonymous_var_nameX483, long int anonymous_var_nameX484);

int symlinkat(const char* anonymous_var_nameX485, int anonymous_var_nameX486, const char* anonymous_var_nameX487);

int unlinkat(int anonymous_var_nameX488, const char* anonymous_var_nameX489, int anonymous_var_nameX490);

void _exit(int anonymous_var_nameX491);

int access(const char* anonymous_var_nameX492, int anonymous_var_nameX493);

unsigned int alarm(unsigned int anonymous_var_nameX494);

int chdir(const char* anonymous_var_nameX495);

int chown(const char* anonymous_var_nameX496, unsigned int anonymous_var_nameX497, unsigned int anonymous_var_nameX498);

int close(int anonymous_var_nameX499);

int dup(int anonymous_var_nameX500);

int dup2(int anonymous_var_nameX501, int anonymous_var_nameX502);

int execl(const char* __path, const char* __arg0, ...);

int execle(const char* __path, const char* __arg0, ...);

int execlp(const char* __file, const char* __arg0, ...);

int execv(const char* __path, char** __argv);

int execve(const char* __file, char** __argv, char** __envp);

int execvp(const char* __file, char** __argv);

int fork();

long fpathconf(int anonymous_var_nameX503, int anonymous_var_nameX504);

char* getcwd(char* anonymous_var_nameX505, long int anonymous_var_nameX506);

unsigned int getegid();

unsigned int geteuid();

unsigned int getgid();

int getgroups(int anonymous_var_nameX507, unsigned int* anonymous_var_nameX508);

char* getlogin();

int getpgrp();

int getpid();

int getppid();

unsigned int getuid();

int isatty(int anonymous_var_nameX509);

int link(const char* anonymous_var_nameX510, const char* anonymous_var_nameX511);

long long lseek(int anonymous_var_nameX512, long long anonymous_var_nameX513, int anonymous_var_nameX514);

long pathconf(const char* anonymous_var_nameX515, int anonymous_var_nameX516);

int pause();

int pipe(int anonymous_var_nameX517[2]);

long read(int anonymous_var_nameX518, void* anonymous_var_nameX519, long int anonymous_var_nameX520);

int rmdir(const char* anonymous_var_nameX521);

int setgid(unsigned int anonymous_var_nameX522);

int setpgid(int anonymous_var_nameX523, int anonymous_var_nameX524);

int setsid();

int setuid(unsigned int anonymous_var_nameX525);

unsigned int sleep(unsigned int anonymous_var_nameX526);

long sysconf(int anonymous_var_nameX527);

int tcgetpgrp(int anonymous_var_nameX528);

int tcsetpgrp(int anonymous_var_nameX529, int anonymous_var_nameX530);

char* ttyname(int anonymous_var_nameX531);

int ttyname_r(int anonymous_var_nameX532, char* anonymous_var_nameX533, long int anonymous_var_nameX534);

int unlink(const char* anonymous_var_nameX535);

long write(int __fd, const void* __buf, long int __nbyte);

long int confstr(int anonymous_var_nameX536, char* anonymous_var_nameX537, long int anonymous_var_nameX538);

int getopt(int anonymous_var_nameX539, char** anonymous_var_nameX540, const char* anonymous_var_nameX541);

void* brk(const void* anonymous_var_nameX542);

int chroot(const char* anonymous_var_nameX543);

char* crypt(const char* anonymous_var_nameX544, const char* anonymous_var_nameX545);

void encrypt(char* anonymous_var_nameX546, int anonymous_var_nameX547);

int fchdir(int anonymous_var_nameX548);

long gethostid();

int getpgid(int anonymous_var_nameX549);

int getsid(int anonymous_var_nameX550);

int getdtablesize();

int getpagesize();

char* getpass(const char* anonymous_var_nameX551);

char* getwd(char* anonymous_var_nameX552);

int lchown(const char* anonymous_var_nameX553, unsigned int anonymous_var_nameX554, unsigned int anonymous_var_nameX555);

int lockf(int anonymous_var_nameX556, int anonymous_var_nameX557, long long anonymous_var_nameX558);

int nice(int anonymous_var_nameX559);

long pread(int __fd, void* __buf, long int __nbyte, long long __offset);

long pwrite(int __fd, const void* __buf, long int __nbyte, long long __offset);

void* sbrk(int anonymous_var_nameX560);

int setpgrp();

int setregid(unsigned int anonymous_var_nameX561, unsigned int anonymous_var_nameX562);

int setreuid(unsigned int anonymous_var_nameX563, unsigned int anonymous_var_nameX564);

void swab(const void* anonymous_var_nameX565, void* anonymous_var_nameX566, long anonymous_var_nameX567);

void sync();

int truncate(const char* anonymous_var_nameX568, long long anonymous_var_nameX569);

unsigned int ualarm(unsigned int anonymous_var_nameX570, unsigned int anonymous_var_nameX571);

int usleep(unsigned int anonymous_var_nameX572);

int vfork();

int fsync(int anonymous_var_nameX573);

int ftruncate(int anonymous_var_nameX574, long long anonymous_var_nameX575);

int getlogin_r(char* anonymous_var_nameX576, long int anonymous_var_nameX577);

int fchown(int anonymous_var_nameX578, unsigned int anonymous_var_nameX579, unsigned int anonymous_var_nameX580);

int gethostname(char* anonymous_var_nameX581, long int anonymous_var_nameX582);

long readlink(const char* anonymous_var_nameX583, char* anonymous_var_nameX584, long int anonymous_var_nameX585);

int setegid(unsigned int anonymous_var_nameX586);

int seteuid(unsigned int anonymous_var_nameX587);

int symlink(const char* anonymous_var_nameX588, const char* anonymous_var_nameX589);

int __darwin_check_fd_set_overflow(int anonymous_var_nameX590, const void* anonymous_var_nameX591, int anonymous_var_nameX592);

int pselect(int anonymous_var_nameX923, struct fd_set* anonymous_var_nameX924, struct fd_set* anonymous_var_nameX925, struct fd_set* anonymous_var_nameX926, const struct timespec* anonymous_var_nameX927, const unsigned int* anonymous_var_nameX928);

int select(int anonymous_var_nameX929, struct fd_set* anonymous_var_nameX930, struct fd_set* anonymous_var_nameX931, struct fd_set* anonymous_var_nameX932, struct timeval* anonymous_var_nameX933);

void _Exit(int anonymous_var_nameX934);

int accessx_np(const struct accessx_descriptor* anonymous_var_nameX935, long int anonymous_var_nameX936, int* anonymous_var_nameX937, unsigned int anonymous_var_nameX938);

int acct(const char* anonymous_var_nameX939);

int add_profil(char* anonymous_var_nameX940, long int anonymous_var_nameX941, unsigned long int anonymous_var_nameX942, unsigned int anonymous_var_nameX943);

void endusershell();

int execvP(const char* __file, const char* __searchpath, char** __argv);

char* fflagstostr(unsigned long int anonymous_var_nameX944);

int getdomainname(char* anonymous_var_nameX945, int anonymous_var_nameX946);

int getgrouplist(const char* anonymous_var_nameX947, int anonymous_var_nameX948, int* anonymous_var_nameX949, int* anonymous_var_nameX950);

int gethostuuid(unsigned char anonymous_var_nameX951[16], const struct timespec* anonymous_var_nameX952);

unsigned short int getmode(const void* anonymous_var_nameX953, unsigned short int anonymous_var_nameX954);

int getpeereid(int anonymous_var_nameX955, unsigned int* anonymous_var_nameX956, unsigned int* anonymous_var_nameX957);

int getsgroups_np(int* anonymous_var_nameX958, unsigned char anonymous_var_nameX959[16]);

char* getusershell();

int getwgroups_np(int* anonymous_var_nameX960, unsigned char anonymous_var_nameX961[16]);

int initgroups(const char* anonymous_var_nameX962, int anonymous_var_nameX963);

int issetugid();

char* mkdtemp(char* anonymous_var_nameX964);

int mkpath_np(const char* path, unsigned short int omode);

int mkpathat_np(int dfd, const char* path, unsigned short int omode);

int mkstemp(char* anonymous_var_nameX968);

int mkstemps(char* anonymous_var_nameX969, int anonymous_var_nameX970);

char* mktemp(char* anonymous_var_nameX971);

int mkostemp(char* path, int oflags);

int mkostemps(char* path, int slen, int oflags);

int mkstemp_dprotected_np(char* path, int dpclass, int dpflags);

char* mkdtempat_np(int dfd, char* path);

int mkstempsat_np(int dfd, char* path, int slen);

int mkostempsat_np(int dfd, char* path, int slen, int oflags);

int nfssvc(int anonymous_var_nameX972, void* anonymous_var_nameX973);

int profil(char* anonymous_var_nameX974, long int anonymous_var_nameX975, unsigned long int anonymous_var_nameX976, unsigned int anonymous_var_nameX977);

int pthread_setugid_np(unsigned int anonymous_var_nameX978, unsigned int anonymous_var_nameX979);

int pthread_getugid_np(unsigned int* anonymous_var_nameX980, unsigned int* anonymous_var_nameX981);

int reboot(int anonymous_var_nameX982);

int revoke(const char* anonymous_var_nameX983);

int rcmd(char** anonymous_var_nameX984, int anonymous_var_nameX985, const char* anonymous_var_nameX986, const char* anonymous_var_nameX987, const char* anonymous_var_nameX988, int* anonymous_var_nameX989);

int rcmd_af(char** anonymous_var_nameX990, int anonymous_var_nameX991, const char* anonymous_var_nameX992, const char* anonymous_var_nameX993, const char* anonymous_var_nameX994, int* anonymous_var_nameX995, int anonymous_var_nameX996);

int rresvport(int* anonymous_var_nameX997);

int rresvport_af(int* anonymous_var_nameX998, int anonymous_var_nameX999);

int iruserok(unsigned long int anonymous_var_nameX1000, int anonymous_var_nameX1001, const char* anonymous_var_nameX1002, const char* anonymous_var_nameX1003);

int iruserok_sa(const void* anonymous_var_nameX1004, int anonymous_var_nameX1005, int anonymous_var_nameX1006, const char* anonymous_var_nameX1007, const char* anonymous_var_nameX1008);

int ruserok(const char* anonymous_var_nameX1009, int anonymous_var_nameX1010, const char* anonymous_var_nameX1011, const char* anonymous_var_nameX1012);

int setdomainname(const char* anonymous_var_nameX1013, int anonymous_var_nameX1014);

int setgroups(int anonymous_var_nameX1015, const unsigned int* anonymous_var_nameX1016);

void sethostid(long anonymous_var_nameX1017);

int sethostname(const char* anonymous_var_nameX1018, int anonymous_var_nameX1019);

void setkey(const char* anonymous_var_nameX1020);

int setlogin(const char* anonymous_var_nameX1021);

void* setmode(const char* anonymous_var_nameX1022);

int setrgid(unsigned int anonymous_var_nameX1023);

int setruid(unsigned int anonymous_var_nameX1024);

int setsgroups_np(int anonymous_var_nameX1025, const unsigned char anonymous_var_nameX1026[16]);

void setusershell();

int setwgroups_np(int anonymous_var_nameX1027, const unsigned char anonymous_var_nameX1028[16]);

int strtofflags(char** anonymous_var_nameX1029, unsigned long int* anonymous_var_nameX1030, unsigned long int* anonymous_var_nameX1031);

int swapon(const char* anonymous_var_nameX1032);

int ttyslot();

int undelete(const char* anonymous_var_nameX1033);

int unwhiteout(const char* anonymous_var_nameX1034);

void* valloc(long int anonymous_var_nameX1035);

int syscall(int anonymous_var_nameX1036, ...);

int getsubopt(char** anonymous_var_nameX1037, char** anonymous_var_nameX1038, char** anonymous_var_nameX1039);

int fgetattrlist(int anonymous_var_nameX1040, void* anonymous_var_nameX1041, void* anonymous_var_nameX1042, long int anonymous_var_nameX1043, unsigned int anonymous_var_nameX1044);

int fsetattrlist(int anonymous_var_nameX1045, void* anonymous_var_nameX1046, void* anonymous_var_nameX1047, long int anonymous_var_nameX1048, unsigned int anonymous_var_nameX1049);

int getattrlist(const char* anonymous_var_nameX1050, void* anonymous_var_nameX1051, void* anonymous_var_nameX1052, long int anonymous_var_nameX1053, unsigned int anonymous_var_nameX1054);

int setattrlist(const char* anonymous_var_nameX1055, void* anonymous_var_nameX1056, void* anonymous_var_nameX1057, long int anonymous_var_nameX1058, unsigned int anonymous_var_nameX1059);

int exchangedata(const char* anonymous_var_nameX1060, const char* anonymous_var_nameX1061, unsigned int anonymous_var_nameX1062);

int getdirentriesattr(int anonymous_var_nameX1063, void* anonymous_var_nameX1064, void* anonymous_var_nameX1065, long int anonymous_var_nameX1066, unsigned int* anonymous_var_nameX1067, unsigned int* anonymous_var_nameX1068, unsigned int* anonymous_var_nameX1069, unsigned int anonymous_var_nameX1070);

int searchfs(const char* anonymous_var_nameX1071, struct fssearchblock* anonymous_var_nameX1072, unsigned long int* anonymous_var_nameX1073, unsigned int anonymous_var_nameX1074, unsigned int anonymous_var_nameX1075, struct searchstate* anonymous_var_nameX1076);

int fsctl(const char* anonymous_var_nameX1077, unsigned long int anonymous_var_nameX1078, void* anonymous_var_nameX1079, unsigned int anonymous_var_nameX1080);

int ffsctl(int anonymous_var_nameX1081, unsigned long int anonymous_var_nameX1082, void* anonymous_var_nameX1083, unsigned int anonymous_var_nameX1084);

int fsync_volume_np(int anonymous_var_nameX1085, int anonymous_var_nameX1086);

int sync_volume_np(const char* anonymous_var_nameX1087, int anonymous_var_nameX1088);

int chmod(const char* anonymous_var_nameX1089, unsigned short int anonymous_var_nameX1090);

int fchmod(int anonymous_var_nameX1091, unsigned short int anonymous_var_nameX1092);

int fstat(int anonymous_var_nameX1093, struct stat* anonymous_var_nameX1094);

int lstat(const char* anonymous_var_nameX1095, struct stat* anonymous_var_nameX1096);

int mkdir(const char* anonymous_var_nameX1097, unsigned short int anonymous_var_nameX1098);

int mkfifo(const char* anonymous_var_nameX1099, unsigned short int anonymous_var_nameX1100);

int stat(const char* anonymous_var_nameX1101, struct stat* anonymous_var_nameX1102);

int mknod(const char* anonymous_var_nameX1103, unsigned short int anonymous_var_nameX1104, int anonymous_var_nameX1105);

unsigned short int umask(unsigned short int anonymous_var_nameX1106);

int fchmodat(int anonymous_var_nameX1107, const char* anonymous_var_nameX1108, unsigned short int anonymous_var_nameX1109, int anonymous_var_nameX1110);

int fstatat(int anonymous_var_nameX1111, const char* anonymous_var_nameX1112, struct stat* anonymous_var_nameX1113, int anonymous_var_nameX1114);

int mkdirat(int anonymous_var_nameX1115, const char* anonymous_var_nameX1116, unsigned short int anonymous_var_nameX1117);

int mkfifoat(int anonymous_var_nameX1118, const char* anonymous_var_nameX1119, unsigned short int anonymous_var_nameX1120);

int mknodat(int anonymous_var_nameX1121, const char* anonymous_var_nameX1122, unsigned short int anonymous_var_nameX1123, int anonymous_var_nameX1124);

int futimens(int __fd, const struct timespec __times[2]);

int utimensat(int __fd, const char* __path, const struct timespec __times[2], int __flag);

int chflags(const char* anonymous_var_nameX1125, unsigned int anonymous_var_nameX1126);

int chmodx_np(const char* anonymous_var_nameX1127, struct _filesec* anonymous_var_nameX1128);

int fchflags(int anonymous_var_nameX1129, unsigned int anonymous_var_nameX1130);

int fchmodx_np(int anonymous_var_nameX1131, struct _filesec* anonymous_var_nameX1132);

int fstatx_np(int anonymous_var_nameX1133, struct stat* anonymous_var_nameX1134, struct _filesec* anonymous_var_nameX1135);

int lchflags(const char* anonymous_var_nameX1136, unsigned int anonymous_var_nameX1137);

int lchmod(const char* anonymous_var_nameX1138, unsigned short int anonymous_var_nameX1139);

int lstatx_np(const char* anonymous_var_nameX1140, struct stat* anonymous_var_nameX1141, struct _filesec* anonymous_var_nameX1142);

int mkdirx_np(const char* anonymous_var_nameX1143, struct _filesec* anonymous_var_nameX1144);

int mkfifox_np(const char* anonymous_var_nameX1145, struct _filesec* anonymous_var_nameX1146);

int statx_np(const char* anonymous_var_nameX1147, struct stat* anonymous_var_nameX1148, struct _filesec* anonymous_var_nameX1149);

int umaskx_np(struct _filesec* anonymous_var_nameX1150);

int* __error();

void come_init_v2();

void come_final_v2();

static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);

void err_msg(struct sInfo* info, char* msg, ...);

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1934, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1944, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang2.h", 1954, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang2.h", 1964, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang2.h", 1974, "struct smart_pointer$1long"))));
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
static inline int __darwin_check_fd_set(int _a, const void* _b){
void* __result_obj__;
_Bool _if_conditional5;
int __result7__;
int __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional5=(unsigned long int)&__darwin_check_fd_set_overflow!=(unsigned long int)0,    _if_conditional5) {
        __result7__ = __darwin_check_fd_set_overflow(_a,_b,0);
        return __result7__;
    }
    else {
        __result8__ = 1;
        return __result8__;
    }
}
static inline int __darwin_fd_isset(int _fd, const struct fd_set* _p){
void* __result_obj__;
_Bool _if_conditional6;
int __result9__;
int __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional6=__darwin_check_fd_set(_fd,(const void*)_p),    _if_conditional6) {
        __result9__ = _p->fds_bits[(unsigned long int)_fd/(sizeof(int)*8)]&((int)(((unsigned long int)1)<<((unsigned long int)_fd%(sizeof(int)*8))));
        return __result9__;
    }
    __result10__ = 0;
    return __result10__;
}
static inline void __darwin_fd_set(int _fd, struct fd_set* _p){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional7=__darwin_check_fd_set(_fd,(const void*)_p),    _if_conditional7) {
        (_p->fds_bits[(unsigned long int)_fd/(sizeof(int)*8)]|=((int)(((unsigned long int)1)<<((unsigned long int)_fd%(sizeof(int)*8)))));
    }
}
static inline void __darwin_fd_clr(int _fd, struct fd_set* _p){
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional8=__darwin_check_fd_set(_fd,(const void*)_p),    _if_conditional8) {
        (_p->fds_bits[(unsigned long int)_fd/(sizeof(int)*8)]&=~((int)(((unsigned long int)1)<<((unsigned long int)_fd%(sizeof(int)*8)))));
    }
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
_Bool _if_conditional9;
_Bool _if_conditional10;
void* right_value10;
void* right_value11;
void* right_value12;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
right_value12 = (void*)0;
    if(gComeOriginalSourcePosition) {
        if(info->writing_source_file_position) {
            add_come_code(info,((char*)(right_value12=xsprintf("# \%s \"\%s\"\n",((char*)(right_value10=int_to_string(info->sline))),((char*)(right_value11=string_to_string(info->sname)))))));
            right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
_Bool __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
memset(&sname_5, 0, sizeof(char*));
memset(&sline_6, 0, sizeof(int));
right_value14 = (void*)0;
right_value15 = (void*)0;
memset(&result_7, 0, sizeof(_Bool));
right_value16 = (void*)0;
    sname_5=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(info->sname))));
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_6=info->sline;
    __dec_obj6=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value15=__builtin_string(((char*)(right_value14=node->sname(node->_protocol_obj)))))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=node->sline(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_7=node->compile(node->_protocol_obj,info);
    __dec_obj7=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value16=__builtin_string(sname_5))));
    __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_6;
    __result11__ = result_7;
    sname_5 = come_decrement_ref_count2(sname_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result11__;
    sname_5 = come_decrement_ref_count2(sname_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool _if_conditional11;
char* msg2_8;
va_list args_9;
_Bool _if_conditional12;
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
    if(_if_conditional11=!info->no_output_err,    _if_conditional11) {
        __builtin_va_start(args_9,msg);
        vasprintf(&msg2_8,msg,args_9);
        __builtin_va_end(args_9);
        printf("%s %d: %s\n",info->sname,info->sline,msg2_8);
        info->err_num++;
        stackframe();
        if(info->come_fun) {
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
            right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1voidpp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        free(msg2_8);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
void* right_value19;
void* right_value20;
struct list$1charph* result_15;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
struct list_item$1charph* it_16;
int i_17;
_Bool _while_condtional3;
_Bool _if_conditional18;
struct list$1charph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
right_value20 = (void*)0;
memset(&result_15, 0, sizeof(struct list$1charph*));
memset(&it_16, 0, sizeof(struct list_item$1charph*));
memset(&i_17, 0, sizeof(int));
                result_15=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value20=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value19=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 642, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional14=begin<0,                _if_conditional14) {
                    begin+=self->len;
                }
                if(_if_conditional15=tail<0,                _if_conditional15) {
                    tail+=self->len+1;
                }
                if(_if_conditional16=begin<0,                _if_conditional16) {
                    begin=0;
                }
                if(_if_conditional17=tail>=self->len,                _if_conditional17) {
                    tail=self->len;
                }
                it_16=self->head;
                i_17=0;
                while(_while_condtional3=it_16!=((void*)0),                _while_condtional3) {
                    if(_if_conditional18=i_17>=begin&&i_17<tail,                    _if_conditional18) {
                        list$1charph_push_back(result_15,(char*)come_increment_ref_count(it_16->item));
                    }
                    it_16=it_16->next;
                    i_17++;
                }
                __result14__ = __result_obj__ = result_15;
                come_call_finalizer2(list$1charphp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result14__;
                come_call_finalizer2(list$1charphp_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result12__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result12__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional13) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_13;
_Bool _while_condtional2;
struct list_item$1charph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1charph*));
                        it_13=self->head;
                        while(_while_condtional2=it_13!=((void*)0),                        _while_condtional2) {
                            prev_it_14=it_13;
                            it_13=it_13->next;
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional19;
void* right_value21;
struct list_item$1charph* litem_18;
char* __dec_obj8;
_Bool _if_conditional20;
void* right_value22;
struct list_item$1charph* litem_19;
char* __dec_obj9;
void* right_value23;
struct list_item$1charph* litem_20;
char* __dec_obj10;
struct list$1charph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1charph*));
right_value22 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1charph*));
right_value23 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional19=self->len==0,                            _if_conditional19) {
                                litem_18=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value21=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_18->prev=((void*)0);
                                litem_18->next=((void*)0);
                                __dec_obj8=litem_18->item;
                                litem_18->item=(char*)come_increment_ref_count(item);
                                __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_18;
                                self->head=litem_18;
                            }
                            else {
                                if(_if_conditional20=self->len==1,                                _if_conditional20) {
                                    litem_19=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value22=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_19->prev=self->head;
                                    litem_19->next=((void*)0);
                                    __dec_obj9=litem_19->item;
                                    litem_19->item=(char*)come_increment_ref_count(item);
                                    __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_19;
                                    self->head->next=litem_19;
                                }
                                else {
                                    litem_20=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value23=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_20->prev=self->tail;
                                    litem_20->next=((void*)0);
                                    __dec_obj10=litem_20->item;
                                    litem_20->item=(char*)come_increment_ref_count(item);
                                    __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_20;
                                    self->tail=litem_20;
                                }
                            }
                            self->len++;
                            __result13__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result13__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*)){
void* __result_obj__;
void* right_value25;
void* right_value26;
struct list$1voidp* result_23;
struct list_item$1charph* it_24;
_Bool _while_condtional5;
_Bool _if_conditional23;
struct list$1voidp* __result17__;
struct list$1voidp* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
right_value26 = (void*)0;
memset(&result_23, 0, sizeof(struct list$1voidp*));
memset(&it_24, 0, sizeof(struct list_item$1charph*));
                result_23=(struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value26=list$1voidp_initialize((struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value25=(struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "/usr/local/include/comelang2.h", 923, "struct list$1voidp"))))))));
                come_call_finalizer2(list$1voidpp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1voidpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_24=self->head;
                while(_while_condtional5=it_24!=((void*)0),                _while_condtional5) {
                    list$1voidp_push_back(result_23,block(parent,it_24->item));
                    if(_if_conditional23=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                    _if_conditional23) {
                        __result17__ = __result_obj__ = result_23;
                        come_call_finalizer2(list$1voidpp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result17__;
                    }
                    it_24=it_24->next;
                }
                __result18__ = __result_obj__ = result_23;
                come_call_finalizer2(list$1voidpp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result18__;
                come_call_finalizer2(list$1voidpp_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self){
void* __result_obj__;
struct list$1voidp* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result15__ = __result_obj__ = self;
                    come_call_finalizer2(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result15__;
                    come_call_finalizer2(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1voidpp_finalize(struct list$1voidp* self){
void* __result_obj__;
struct list_item$1voidp* it_21;
_Bool _while_condtional4;
struct list_item$1voidp* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_21, 0, sizeof(struct list_item$1voidp*));
memset(&prev_it_22, 0, sizeof(struct list_item$1voidp*));
                        it_21=self->head;
                        while(_while_condtional4=it_21!=((void*)0),                        _while_condtional4) {
                            prev_it_22=it_21;
                            it_21=it_21->next;
                            come_call_finalizer2(list_item$1voidpp_finalize,prev_it_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__;
_Bool _if_conditional21;
void* right_value27;
struct list_item$1voidp* litem_25;
_Bool _if_conditional22;
void* right_value28;
struct list_item$1voidp* litem_26;
void* right_value29;
struct list_item$1voidp* litem_27;
struct list$1voidp* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1voidp*));
right_value28 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1voidp*));
right_value29 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1voidp*));
                        if(_if_conditional21=self->len==0,                        _if_conditional21) {
                            litem_25=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value27=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1voidp"))));
                            come_call_finalizer2(list_item$1voidpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_25->prev=((void*)0);
                            litem_25->next=((void*)0);
                            litem_25->item=item;
                            self->tail=litem_25;
                            self->head=litem_25;
                        }
                        else {
                            if(_if_conditional22=self->len==1,                            _if_conditional22) {
                                litem_26=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value28=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1voidp"))));
                                come_call_finalizer2(list_item$1voidpp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_26->prev=self->head;
                                litem_26->next=((void*)0);
                                litem_26->item=item;
                                self->tail=litem_26;
                                self->head->next=litem_26;
                            }
                            else {
                                litem_27=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value29=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1voidp"))));
                                come_call_finalizer2(list_item$1voidpp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->tail;
                                litem_27->next=((void*)0);
                                litem_27->item=item;
                                self->tail->next=litem_27;
                                self->tail=litem_27;
                            }
                        }
                        self->len++;
                        __result16__ = __result_obj__ = self;
                        return __result16__;
}

void* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* right_value30;
void* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
                __result19__ = __result_obj__ = ((char*)(right_value30=xsprintf("%d %s",++(*(parent->n_10)),it)));
                right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result19__;
}

static char* list$1voidp_join(struct list$1voidp* self, char* sep){
void* __result_obj__;
void* right_value32;
void* right_value33;
struct buffer* buf_28;
int n_29;
void* it_32;
_Bool _if_conditional28;
void* right_value34;
char* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&buf_28, 0, sizeof(struct buffer*));
memset(&n_29, 0, sizeof(int));
memset(&it_32, 0, sizeof(void*));
right_value34 = (void*)0;
                buf_28=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value33=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 1026, "struct buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                n_29=0;
                for(                it_32=list$1voidp_begin(self);                !list$1voidp_end(self);                it_32=list$1voidp_next(self)                ){
                    buffer_append_str(buf_28,it_32);
                    if(_if_conditional28=n_29<list$1voidp_length(self)-1,                    _if_conditional28) {
                        buffer_append_str(buf_28,sep);
                    }
                    n_29++;
                }
                __result28__ = __result_obj__ = ((char*)(right_value34=buffer_to_string(buf_28)));
                come_call_finalizer2(buffer_finalize,buf_28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result28__;
                come_call_finalizer2(buffer_finalize,buf_28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void* list$1voidp_begin(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional24;
void* result_30;
void* __result20__;
_Bool _if_conditional25;
void* __result21__;
void* result_31;
void* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_30, 0, sizeof(void*));
memset(&result_31, 0, sizeof(void*));
                    if(_if_conditional24=self==((void*)0),                    _if_conditional24) {
                        memset(&result_30,0,sizeof(void*));
                        __result20__ = __result_obj__ = result_30;
                        return __result20__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result21__ = __result_obj__ = self->it->item;
                        return __result21__;
                    }
                    memset(&result_31,0,sizeof(void*));
                    __result22__ = __result_obj__ = result_31;
                    return __result22__;
}

static _Bool list$1voidp_end(struct list$1voidp* self){
void* __result_obj__;
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result23__ = self==((void*)0)||self->it==((void*)0);
                    return __result23__;
}

static void* list$1voidp_next(struct list$1voidp* self){
void* __result_obj__;
_Bool _if_conditional26;
void* result_33;
void* __result24__;
_Bool _if_conditional27;
void* __result25__;
void* result_34;
void* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_33, 0, sizeof(void*));
memset(&result_34, 0, sizeof(void*));
                    if(_if_conditional26=self==((void*)0)||self->it==((void*)0),                    _if_conditional26) {
                        memset(&result_33,0,sizeof(void*));
                        __result24__ = __result_obj__ = result_33;
                        return __result24__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result25__ = __result_obj__ = self->it->item;
                        return __result25__;
                    }
                    memset(&result_34,0,sizeof(void*));
                    __result26__ = __result_obj__ = result_34;
                    return __result26__;
}

static int list$1voidp_length(struct list$1voidp* self){
void* __result_obj__;
int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result27__ = self->len;
                        return __result27__;
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    __result29__ = 0;
    return __result29__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
void* right_value37;
char* output_file_name_35;
void* right_value38;
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
memset(&output_file_name_35, 0, sizeof(char*));
right_value38 = (void*)0;
    output_file_name_35=(char*)come_increment_ref_count(((char*)(right_value37=xsprintf("%s.c",info->sname))));
    right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    string_write(((char*)(right_value38=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_35,(_Bool)0);
    right_value38 = come_decrement_ref_count2(right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result30__ = (_Bool)1;
    output_file_name_35 = come_decrement_ref_count2(output_file_name_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result30__;
    output_file_name_35 = come_decrement_ref_count2(output_file_name_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_36;
void* right_value39;
void* right_value40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_36, 0, sizeof(char*));
right_value39 = (void*)0;
right_value40 = (void*)0;
    input_file_name_36=(char*)come_increment_ref_count(info->sname);
    system(((char*)(right_value40=xsprintf("rm -f \%s.*",((char*)(right_value39=string_to_string(input_file_name_36)))))));
    right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    input_file_name_36 = come_decrement_ref_count2(input_file_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
char* input_file_name_37;
char* output_file_name_38;
_Bool _if_conditional29;
void* right_value41;
char* __dec_obj11;
void* right_value42;
char* __dec_obj12;
void* right_value43;
char* cmd_39;
_Bool exist_common_h_40;
struct __sFILE* f_41;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
int rc_42;
_Bool _if_conditional34;
void* right_value44;
void* right_value45;
char* cmd2_43;
_Bool _if_conditional35;
int rc_44;
_Bool _if_conditional36;
void* right_value46;
char* command2_45;
_Bool _if_conditional37;
void* right_value47;
void* right_value48;
char* cmd3_46;
_Bool _if_conditional38;
int rc_47;
void* right_value49;
char* command2_48;
_Bool _if_conditional39;
_Bool _if_conditional40;
void* right_value50;
void* right_value51;
char* cmd4_49;
void* right_value52;
char* command_50;
_Bool _if_conditional41;
void* right_value53;
char* command2_51;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_37, 0, sizeof(char*));
memset(&output_file_name_38, 0, sizeof(char*));
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
memset(&cmd_39, 0, sizeof(char*));
memset(&exist_common_h_40, 0, sizeof(_Bool));
memset(&f_41, 0, sizeof(struct __sFILE*));
memset(&rc_42, 0, sizeof(int));
right_value44 = (void*)0;
right_value45 = (void*)0;
memset(&cmd2_43, 0, sizeof(char*));
memset(&rc_44, 0, sizeof(int));
right_value46 = (void*)0;
memset(&command2_45, 0, sizeof(char*));
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&cmd3_46, 0, sizeof(char*));
memset(&rc_47, 0, sizeof(int));
right_value49 = (void*)0;
memset(&command2_48, 0, sizeof(char*));
right_value50 = (void*)0;
right_value51 = (void*)0;
memset(&cmd4_49, 0, sizeof(char*));
right_value52 = (void*)0;
memset(&command_50, 0, sizeof(char*));
right_value53 = (void*)0;
memset(&command2_51, 0, sizeof(char*));
    input_file_name_37=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional29=!info->output_header_file&&info->output_file_name,    _if_conditional29) {
        __dec_obj11=output_file_name_38;
        output_file_name_38=(char*)come_increment_ref_count(((char*)(right_value41=string_operator_add(info->output_file_name,".i"))));
        __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj12=output_file_name_38;
        output_file_name_38=(char*)come_increment_ref_count(((char*)(right_value42=string_operator_add(info->sname,".i"))));
        __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    cmd_39=(char*)come_increment_ref_count(((char*)(right_value43=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    exist_common_h_40=(_Bool)0;
    {
        f_41=fopen("common.h","r");
        if(f_41) {
            exist_common_h_40=(_Bool)1;
        }
        if(_if_conditional31=string_operator_equals(info->output_file_name,"common.h"),        _if_conditional31) {
            exist_common_h_40=(_Bool)0;
        }
        if(f_41) {
            fclose(f_41);
        }
    }
    if(_if_conditional33=!gCommonHeader,    _if_conditional33) {
        exist_common_h_40=(_Bool)0;
    }
    rc_42=system(cmd_39);
    if(_if_conditional34=rc_42==0,    _if_conditional34) {
        cmd2_43=(char*)come_increment_ref_count(((char*)(right_value45=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_40?((char*)(right_value44=__builtin_string(" -include common.h "))):"",input_file_name_37,output_file_name_38,output_file_name_38))));
        right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(cmd2_43);
        }
        rc_44=system(cmd2_43);
        if(_if_conditional36=rc_44!=0,        _if_conditional36) {
            printf("failed to cpp(2) (%s)\n",cmd2_43);
            exit(5);
        }
        command2_45=(char*)come_increment_ref_count(((char*)(right_value46=xsprintf("grep error\\: %s.cpp.out",output_file_name_38))));
        right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(command2_45);
        }
        (void)system(command2_45);
        cmd2_43 = come_decrement_ref_count2(cmd2_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_45 = come_decrement_ref_count2(command2_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        cmd3_46=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_40?((char*)(right_value47=__builtin_string(" -include common.h "))):"",input_file_name_37,output_file_name_38,output_file_name_38))));
        right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(cmd3_46);
        }
        rc_47=system(cmd3_46);
        command2_48=(char*)come_increment_ref_count(((char*)(right_value49=xsprintf("grep error\\: %s.cpp.out",output_file_name_38))));
        right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(command2_48);
        }
        (void)system(command2_48);
        if(_if_conditional40=rc_47!=0,        _if_conditional40) {
            cmd4_49=(char*)come_increment_ref_count(((char*)(right_value51=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_40?((char*)(right_value50=__builtin_string(" -include common.h "))):"",input_file_name_37,output_file_name_38,output_file_name_38))));
            right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            command_50=(char*)come_increment_ref_count(((char*)(right_value52=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_38,input_file_name_37,info->clang_option,input_file_name_37))));
            right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(info->verbose) {
                puts(cmd4_49);
            }
            rc_47=system(cmd4_49);
            command2_51=(char*)come_increment_ref_count(((char*)(right_value53=xsprintf("grep error\\: %s.cpp.out",output_file_name_38))));
            right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(info->verbose) {
                puts(command2_51);
            }
            (void)system(command2_51);
            if(_if_conditional43=rc_47!=0,            _if_conditional43) {
                printf("failed to cpp(2) (%s)\n",cmd4_49);
                exit(5);
            }
            cmd4_49 = come_decrement_ref_count2(cmd4_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_50 = come_decrement_ref_count2(command_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_51 = come_decrement_ref_count2(command2_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_46 = come_decrement_ref_count2(cmd3_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_48 = come_decrement_ref_count2(command2_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result31__ = (_Bool)1;
    input_file_name_37 = come_decrement_ref_count2(input_file_name_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_38 = come_decrement_ref_count2(output_file_name_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_39 = come_decrement_ref_count2(cmd_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result31__;
    input_file_name_37 = come_decrement_ref_count2(input_file_name_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_38 = come_decrement_ref_count2(output_file_name_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_39 = come_decrement_ref_count2(cmd_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
void* right_value54;
char* input_file_name_52;
char* output_file_name_53;
_Bool _if_conditional44;
void* right_value55;
char* __dec_obj13;
void* right_value56;
char* __dec_obj14;
void* right_value57;
char* command_54;
_Bool _if_conditional45;
int rc_55;
void* right_value58;
char* command2_56;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool __result32__;
_Bool _if_conditional48;
void* right_value59;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
memset(&input_file_name_52, 0, sizeof(char*));
memset(&output_file_name_53, 0, sizeof(char*));
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&command_54, 0, sizeof(char*));
memset(&rc_55, 0, sizeof(int));
right_value58 = (void*)0;
memset(&command2_56, 0, sizeof(char*));
right_value59 = (void*)0;
    input_file_name_52=(char*)come_increment_ref_count(((char*)(right_value54=string_operator_add(info->sname,".c"))));
    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    output_file_name_53=((void*)0);
    if(info->output_file_name) {
        __dec_obj13=output_file_name_53;
        output_file_name_53=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(info->output_file_name))));
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj14=output_file_name_53;
        output_file_name_53=(char*)come_increment_ref_count(((char*)(right_value56=string_operator_add(info->sname,".o"))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    command_54=(char*)come_increment_ref_count(((char*)(right_value57=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_53,input_file_name_52,info->clang_option,input_file_name_52))));
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(info->verbose) {
        puts(command_54);
    }
    rc_55=system(command_54);
    command2_56=(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("grep error\\: %s.out",input_file_name_52))));
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(info->verbose) {
        puts(command2_56);
    }
    (void)system(command2_56);
    if(_if_conditional47=rc_55!=0,    _if_conditional47) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result32__ = (_Bool)0;
        input_file_name_52 = come_decrement_ref_count2(input_file_name_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_53 = come_decrement_ref_count2(output_file_name_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_54 = come_decrement_ref_count2(command_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_56 = come_decrement_ref_count2(command2_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result32__;
    }
    if(_if_conditional48=!output_object_file,    _if_conditional48) {
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value59=__builtin_string(output_file_name_53)))));
        right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result33__ = (_Bool)1;
    input_file_name_52 = come_decrement_ref_count2(input_file_name_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_53 = come_decrement_ref_count2(output_file_name_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_54 = come_decrement_ref_count2(command_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_56 = come_decrement_ref_count2(command2_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result33__;
    input_file_name_52 = come_decrement_ref_count2(input_file_name_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_53 = come_decrement_ref_count2(output_file_name_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_54 = come_decrement_ref_count2(command_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_56 = come_decrement_ref_count2(command2_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
char* output_file_name_57;
_Bool _if_conditional49;
void* right_value60;
char* __dec_obj15;
void* right_value61;
char* __dec_obj16;
void* right_value62;
void* right_value63;
struct buffer* command_58;
void* right_value64;
struct list$1charph* o2_saved_59;
char* it_62;
void* right_value65;
_Bool _if_conditional54;
void* right_value66;
char* cmd_65;
int rc_66;
_Bool _if_conditional55;
void* right_value67;
_Bool _if_conditional56;
void* right_value68;
_Bool _if_conditional57;
void* right_value69;
void* right_value70;
_Bool _if_conditional58;
_Bool __result41__;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_57, 0, sizeof(char*));
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
memset(&command_58, 0, sizeof(struct buffer*));
right_value64 = (void*)0;
memset(&o2_saved_59, 0, sizeof(struct list$1charph*));
memset(&it_62, 0, sizeof(char*));
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&cmd_65, 0, sizeof(char*));
memset(&rc_66, 0, sizeof(int));
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
    output_file_name_57=((void*)0);
    if(info->output_file_name) {
        __dec_obj15=output_file_name_57;
        output_file_name_57=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(info->output_file_name))));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj16=output_file_name_57;
        output_file_name_57=(char*)come_increment_ref_count(((char*)(right_value61=xnoextname(info->sname))));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    command_58=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value63=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value62=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 229, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(command_58,((char*)(right_value64=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_57,getenv("HOME"),"/usr/local/"))));
    right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    o2_saved_59=(object_files),it_62=list$1charph_begin((o2_saved_59));    !list$1charph_end((o2_saved_59));    it_62=list$1charph_next((o2_saved_59))    ){
        buffer_append_str(command_58,((char*)(right_value65=xsprintf("%s ",it_62))));
        right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(gComeGC) {
        buffer_append_str(command_58,"-L/usr/local/lib -lcomelang2-gc ");
    }
    else {
        buffer_append_str(command_58,"-L/usr/local/lib -lcomelang2 ");
    }
    cmd_65=(char*)come_increment_ref_count(((char*)(right_value66=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    rc_66=system(cmd_65);
    if(_if_conditional55=rc_66==0,    _if_conditional55) {
        buffer_append_str(command_58," -L/opt/homebrew/opt/pcre/lib ");
    }
    buffer_append_str(command_58,((char*)(right_value67=xsprintf(" %s ",info->clang_option))));
    right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(gComeGC) {
        buffer_append_str(command_58,((char*)(right_value68=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(info->verbose) {
        puts(((char*)(right_value69=buffer_to_string(command_58))));
        right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    rc_66=system(((char*)(right_value70=buffer_to_string(command_58))));
    right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional58=rc_66!=0,    _if_conditional58) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result41__ = (_Bool)0;
        output_file_name_57 = come_decrement_ref_count2(output_file_name_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,command_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        cmd_65 = come_decrement_ref_count2(cmd_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result41__;
    }
    __result42__ = (_Bool)1;
    output_file_name_57 = come_decrement_ref_count2(output_file_name_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,command_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    cmd_65 = come_decrement_ref_count2(cmd_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result42__;
    output_file_name_57 = come_decrement_ref_count2(output_file_name_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,command_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    cmd_65 = come_decrement_ref_count2(cmd_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional50;
char* result_60;
char* __result34__;
_Bool _if_conditional51;
char* __result35__;
char* result_61;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_60, 0, sizeof(char*));
memset(&result_61, 0, sizeof(char*));
        if(_if_conditional50=self==((void*)0),        _if_conditional50) {
            memset(&result_60,0,sizeof(char*));
            __result34__ = __result_obj__ = result_60;
            return __result34__;
        }
        self->it=self->head;
        if(self->it) {
            __result35__ = __result_obj__ = self->it->item;
            return __result35__;
        }
        memset(&result_61,0,sizeof(char*));
        __result36__ = __result_obj__ = result_61;
        return __result36__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
        __result37__ = self==((void*)0)||self->it==((void*)0);
        return __result37__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional52;
char* result_63;
char* __result38__;
_Bool _if_conditional53;
char* __result39__;
char* result_64;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_63, 0, sizeof(char*));
memset(&result_64, 0, sizeof(char*));
        if(_if_conditional52=self==((void*)0)||self->it==((void*)0),        _if_conditional52) {
            memset(&result_63,0,sizeof(char*));
            __result38__ = __result_obj__ = result_63;
            return __result38__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result39__ = __result_obj__ = self->it->item;
            return __result39__;
        }
        memset(&result_64,0,sizeof(char*));
        __result40__ = __result_obj__ = result_64;
        return __result40__;
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
struct sModule* __result43__;
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
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj20=self->mLastCode2;
    self->mLastCode2=((void*)0);
    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result43__ = __result_obj__ = self;
    come_call_finalizer2(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result43__;
    come_call_finalizer2(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional59=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional59) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional60=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional60) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional61=self!=((void*)0)&&self->mLastCode!=((void*)0),        _if_conditional61) {
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional62=self!=((void*)0)&&self->mLastCode2!=((void*)0),        _if_conditional62) {
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional63=self!=((void*)0)&&self->mLastCode3!=((void*)0),        _if_conditional63) {
            self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
void* right_value75;
void* right_value81;
struct map$2charphsVarph* __dec_obj22;
static int id_76=0;
struct sVarTable* __result46__;
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
    self->mID=++id_76;
    __result46__ = __result_obj__ = self;
    come_call_finalizer2(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result46__;
    come_call_finalizer2(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value76;
void* right_value77;
void* right_value78;
int i_71;
void* right_value79;
void* right_value80;
struct list$1charp* __dec_obj21;
struct map$2charphsVarph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
memset(&i_71, 0, sizeof(int));
right_value79 = (void*)0;
right_value80 = (void*)0;
        self->keys=(char**)come_increment_ref_count(((char**)(right_value76=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1066, "char*"))));
        right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value77=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "/usr/local/include/comelang2.h", 1067, "struct sVar*"))));
        come_call_finalizer2(sVar_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value78=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1068, "_Bool"))));
        right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_71=0;        i_71<1024;        i_71++        ){
            self->item_existance[i_71]=(_Bool)0;
        }
        self->size=1024;
        self->len=0;
        __dec_obj21=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value80=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value79=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1078, "struct list$1charp"))))))));
        come_call_finalizer2(list$1charp_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charpp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charpp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self->it=0;
        __result45__ = __result_obj__ = self;
        come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result45__;
        come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional82;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional64=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional64) {
                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional65=self!=((void*)0)&&self->mCValueName!=((void*)0),            _if_conditional65) {
                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional66=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional66) {
                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional82=self!=((void*)0)&&self->mFunName!=((void*)0),            _if_conditional82) {
                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional67;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional73;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional67=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional67) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional69=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional69) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional70=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional70) {
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional71=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional71) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional73=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional73) {
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional75=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional75) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional76=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional76) {
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional77=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional77) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional78=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional78) {
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional79=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional79) {
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional80=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional80) {
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional81=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional81) {
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional68;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional68=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional68) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_67;
_Bool _while_condtional6;
struct list_item$1sTypeph* prev_it_68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_67, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_68, 0, sizeof(struct list_item$1sTypeph*));
                            it_67=self->head;
                            while(_while_condtional6=it_67!=((void*)0),                            _while_condtional6) {
                                prev_it_68=it_67;
                                it_67=it_67->next;
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional72=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional72) {
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_69;
_Bool _while_condtional7;
struct list_item$1sNodeph* prev_it_70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_70, 0, sizeof(struct list_item$1sNodeph*));
                            it_69=self->head;
                            while(_while_condtional7=it_69!=((void*)0),                            _while_condtional7) {
                                prev_it_70=it_69;
                                it_69=it_69->next;
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional74;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional74=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional74) {
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result44__ = __result_obj__ = self;
            come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result44__;
            come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_72;
_Bool _while_condtional8;
struct list_item$1charp* prev_it_73;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_72, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_73, 0, sizeof(struct list_item$1charp*));
                it_72=self->head;
                while(_while_condtional8=it_72!=((void*)0),                _while_condtional8) {
                    prev_it_73=it_72;
                    it_72=it_72->next;
                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
int i_74;
_Bool _if_conditional83;
_Bool _if_conditional84;
int i_75;
_Bool _if_conditional85;
_Bool _if_conditional86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_74, 0, sizeof(int));
memset(&i_75, 0, sizeof(int));
            for(            i_74=0;            i_74<self->size;            i_74++            ){
                if(_if_conditional83=self->item_existance[i_74],                _if_conditional83) {
                    if(_if_conditional84=1,                    _if_conditional84) {
                        come_call_finalizer2(sVar_finalize,self->items[i_74], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_75=0;            i_75<self->size;            i_75++            ){
                if(_if_conditional85=self->item_existance[i_75],                _if_conditional85) {
                    if(_if_conditional86=1,                    _if_conditional86) {
                        self->keys[i_75] = come_decrement_ref_count2(self->keys[i_75], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional87;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional87=self!=((void*)0)&&self->key_list!=((void*)0),        _if_conditional87) {
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
int pointer_num_77;
char* p_78;
_Bool _while_condtional9;
_Bool _if_conditional88;
_Bool _while_condtional10;
void* right_value82;
void* right_value83;
char* name2_79;
void* right_value84;
struct sClass* klass_85;
void* right_value85;
struct sClass* generics_class_86;
_Bool _if_conditional99;
_Bool _if_conditional100;
void* right_value86;
struct sClass* klass2_87;
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
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pointer_num_77, 0, sizeof(int));
memset(&p_78, 0, sizeof(char*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&name2_79, 0, sizeof(char*));
right_value84 = (void*)0;
memset(&klass_85, 0, sizeof(struct sClass*));
right_value85 = (void*)0;
memset(&generics_class_86, 0, sizeof(struct sClass*));
right_value86 = (void*)0;
memset(&klass2_87, 0, sizeof(struct sClass*));
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
    pointer_num_77=0;
    p_78=name;
    while(_while_condtional9=*p_78,    _while_condtional9) {
        if(_if_conditional88=xisalpha(*p_78),        _if_conditional88) {
            p_78++;
        }
        else {
            break;
        }
    }
    while(_while_condtional10=*p_78==42,    _while_condtional10) {
        pointer_num_77++;
        p_78++;
    }
    name2_79=(char*)come_increment_ref_count(((char*)(right_value83=string_substring(((char*)(right_value82=__builtin_string(name))),0,-pointer_num_77-1))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_85=((struct sClass*)(right_value84=map$2charphsClassphp_operator_load_element(info->classes,name2_79)));
    come_call_finalizer2(sClass_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    generics_class_86=((struct sClass*)(right_value85=map$2charphsClassphp_operator_load_element(info->generics_classes,name2_79)));
    come_call_finalizer2(sClass_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional99=klass_85==((void*)0)&&generics_class_86==((void*)0),    _if_conditional99) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_79);
    }
    if(klass_85) {
        self->mClass=klass_85;
    }
    else {
        klass2_87=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value86=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 321, "struct sClass"))));
        come_call_finalizer2(sClass_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj23=klass2_87->mName;
        klass2_87->mName=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(name))));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj24=klass2_87->mDeclareSName;
        klass2_87->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(info->sname))));
        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string(name)))),(struct sClass*)come_increment_ref_count(klass2_87));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->mClass=((struct sClass*)(right_value99=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value98=__builtin_string(name))))));
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,klass2_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    self->mPointerNum=pointer_num_77;
    self->mNoArrayPointerNum=0;
    __dec_obj33=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
    self->mDynamicArrayNum=0;
    self->mTypeOfExpression=0;
    __dec_obj34=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=__builtin_string(""))));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mOriginalPointerNum=0;
    self->mFunctionParam=(_Bool)0;
    __result78__ = __result_obj__ = self;
    come_call_finalizer2(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name2_79 = come_decrement_ref_count2(name2_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result78__;
    come_call_finalizer2(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name2_79 = come_decrement_ref_count2(name2_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_80;
unsigned int hash_81;
unsigned int it_82;
_Bool _while_condtional11;
_Bool _if_conditional89;
_Bool _if_conditional90;
struct sClass* __result47__;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sClass* __result48__;
struct sClass* __result49__;
struct sClass* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_80, 0, sizeof(struct sClass*));
memset(&hash_81, 0, sizeof(unsigned int));
memset(&it_82, 0, sizeof(unsigned int));
        memset(&default_value_80,0,sizeof(struct sClass*));
        hash_81=string_get_hash_key(((char*)key))%self->size;
        it_82=hash_81;
        while(_while_condtional11=(_Bool)1,        _while_condtional11) {
            if(_if_conditional89=self->item_existance[it_82],            _if_conditional89) {
                if(_if_conditional90=string_equals(self->keys[it_82],key),                _if_conditional90) {
                    __result47__ = __result_obj__ = self->items[it_82];
                    come_call_finalizer2(sClass_finalize,default_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result47__;
                }
                it_82++;
                if(_if_conditional97=it_82>=self->size,                _if_conditional97) {
                    it_82=0;
                }
                else {
                    if(_if_conditional98=it_82==hash_81,                    _if_conditional98) {
                        __result48__ = __result_obj__ = default_value_80;
                        come_call_finalizer2(sClass_finalize,default_value_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result48__;
                    }
                }
            }
            else {
                __result49__ = __result_obj__ = default_value_80;
                come_call_finalizer2(sClass_finalize,default_value_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result49__;
            }
        }
        __result50__ = __result_obj__ = default_value_80;
        come_call_finalizer2(sClass_finalize,default_value_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result50__;
        come_call_finalizer2(sClass_finalize,default_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional96;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional91=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional91) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional92=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional92) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional96=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional96) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_83;
_Bool _while_condtional12;
struct list_item$1tuple2$2charphsTypephph* prev_it_84;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_83, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_84, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_83=self->head;
                                while(_while_condtional12=it_83!=((void*)0),                                _while_condtional12) {
                                    prev_it_84=it_83;
                                    it_83=it_83->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional93;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional93=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional93) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional94;
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional94=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional94) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional95=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional95) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional101;
unsigned int hash_105;
unsigned int it_106;
_Bool _while_condtional15;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool same_key_exist_123;
char* it2_126;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct map$2charphsClassph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_105, 0, sizeof(unsigned int));
memset(&it_106, 0, sizeof(unsigned int));
memset(&same_key_exist_123, 0, sizeof(_Bool));
memset(&it2_126, 0, sizeof(char*));
            if(_if_conditional101=self->len*10>=self->size,            _if_conditional101) {
                map$2charphsClassph_rehash(self);
            }
            hash_105=string_get_hash_key(key)%self->size;
            it_106=hash_105;
            while(_while_condtional15=(_Bool)1,            _while_condtional15) {
                if(_if_conditional113=self->item_existance[it_106],                _if_conditional113) {
                    if(_if_conditional114=string_equals(self->keys[it_106],key),                    _if_conditional114) {
                        if(_if_conditional115=1,                        _if_conditional115) {
                            list$1charp_remove(self->key_list,self->keys[it_106]);
                            self->keys[it_106] = come_decrement_ref_count2(self->keys[it_106], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_106]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_106]);
                            self->keys[it_106]=key;
                        }
                        if(_if_conditional135=1,                        _if_conditional135) {
                            come_call_finalizer2(sClass_finalize,self->items[it_106], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_106]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_106]=item;
                        }
                        break;
                    }
                    it_106++;
                    if(_if_conditional136=it_106>=self->size,                    _if_conditional136) {
                        it_106=0;
                    }
                    else {
                        if(_if_conditional137=it_106==hash_105,                        _if_conditional137) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_106]=(_Bool)1;
                    if(_if_conditional138=1,                    _if_conditional138) {
                        self->keys[it_106]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_106]=key;
                    }
                    if(_if_conditional139=1,                    _if_conditional139) {
                        self->items[it_106]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_106]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_123=(_Bool)0;
            for(            it2_126=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_126=list$1charp_next(self->key_list)            ){
                if(_if_conditional144=string_equals(it2_126,key),                _if_conditional144) {
                    same_key_exist_123=(_Bool)1;
                }
            }
            if(_if_conditional145=!same_key_exist_123,            _if_conditional145) {
                list$1charp_push_back(self->key_list,key);
            }
            __result74__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result74__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_88;
void* right_value89;
char** keys_89;
void* right_value90;
struct sClass** items_90;
void* right_value91;
_Bool* item_existance_91;
int len_92;
char* it_95;
struct sClass* default_value_98;
void* right_value92;
struct sClass* it2_101;
unsigned int hash_102;
int n_103;
_Bool _while_condtional14;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct sClass* default_value_104;
void* right_value93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_88, 0, sizeof(int));
right_value89 = (void*)0;
memset(&keys_89, 0, sizeof(char**));
right_value90 = (void*)0;
memset(&items_90, 0, sizeof(struct sClass**));
right_value91 = (void*)0;
memset(&item_existance_91, 0, sizeof(_Bool*));
memset(&len_92, 0, sizeof(int));
memset(&it_95, 0, sizeof(char*));
memset(&default_value_98, 0, sizeof(struct sClass*));
right_value92 = (void*)0;
memset(&it2_101, 0, sizeof(struct sClass*));
memset(&hash_102, 0, sizeof(unsigned int));
memset(&n_103, 0, sizeof(int));
memset(&default_value_104, 0, sizeof(struct sClass*));
right_value93 = (void*)0;
                    size_88=self->size*10;
                    keys_89=(char**)come_increment_ref_count(((char**)(right_value89=(char**)come_calloc(1, sizeof(char*)*(1*(size_88)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_90=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value90=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_88)), "/usr/local/include/comelang2.h", 1315, "struct sClass*"))));
                    come_call_finalizer2(sClass_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_91=(_Bool*)come_increment_ref_count(((_Bool*)(right_value91=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_88)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_92=0;
                    for(                    it_95=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_95=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_98,0,sizeof(struct sClass*));
                        it2_101=((struct sClass*)(right_value92=map$2charphsClassph_at(self,it_95,default_value_98)));
                        come_call_finalizer2(sClass_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_102=string_get_hash_key(it_95)%size_88;
                        n_103=hash_102;
                        while(_while_condtional14=(_Bool)1,                        _while_condtional14) {
                            if(_if_conditional110=item_existance_91[n_103],                            _if_conditional110) {
                                n_103++;
                                if(_if_conditional111=n_103>=size_88,                                _if_conditional111) {
                                    n_103=0;
                                }
                                else {
                                    if(_if_conditional112=n_103==hash_102,                                    _if_conditional112) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_91[n_103]=(_Bool)1;
                                keys_89[n_103]=it_95;
                                items_90[n_103]=((struct sClass*)(right_value93=map$2charphsClassph_at(self,it_95,default_value_104)));
                                come_call_finalizer2(sClass_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                len_92++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_89;
                    self->items=items_90;
                    self->item_existance=item_existance_91;
                    self->size=size_88;
                    self->len=len_92;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional102;
char* result_93;
char* __result51__;
_Bool _if_conditional103;
char* __result52__;
char* result_94;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(char*));
memset(&result_94, 0, sizeof(char*));
                        if(_if_conditional102=self==((void*)0),                        _if_conditional102) {
                            memset(&result_93,0,sizeof(char*));
                            __result51__ = __result_obj__ = result_93;
                            return __result51__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result52__ = __result_obj__ = self->key_list->it->item;
                            return __result52__;
                        }
                        memset(&result_94,0,sizeof(char*));
                        __result53__ = __result_obj__ = result_94;
                        return __result53__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result54__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result54__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional104;
char* result_96;
char* __result55__;
_Bool _if_conditional105;
char* __result56__;
char* result_97;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_96, 0, sizeof(char*));
memset(&result_97, 0, sizeof(char*));
                        if(_if_conditional104=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional104) {
                            memset(&result_96,0,sizeof(char*));
                            __result55__ = __result_obj__ = result_96;
                            return __result55__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result56__ = __result_obj__ = self->key_list->it->item;
                            return __result56__;
                        }
                        memset(&result_97,0,sizeof(char*));
                        __result57__ = __result_obj__ = result_97;
                        return __result57__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_99;
unsigned int it_100;
_Bool _while_condtional13;
_Bool _if_conditional106;
_Bool _if_conditional107;
struct sClass* __result58__;
_Bool _if_conditional108;
_Bool _if_conditional109;
struct sClass* __result59__;
struct sClass* __result60__;
struct sClass* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_99, 0, sizeof(unsigned int));
memset(&it_100, 0, sizeof(unsigned int));
                            hash_99=string_get_hash_key(((char*)key))%self->size;
                            it_100=hash_99;
                            while(_while_condtional13=(_Bool)1,                            _while_condtional13) {
                                if(_if_conditional106=self->item_existance[it_100],                                _if_conditional106) {
                                    if(_if_conditional107=string_equals(self->keys[it_100],key),                                    _if_conditional107) {
                                        __result58__ = __result_obj__ = self->items[it_100];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result58__;
                                    }
                                    it_100++;
                                    if(_if_conditional108=it_100>=self->size,                                    _if_conditional108) {
                                        it_100=0;
                                    }
                                    else {
                                        if(_if_conditional109=it_100==hash_99,                                        _if_conditional109) {
                                            __result59__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result59__;
                                        }
                                    }
                                }
                                else {
                                    __result60__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result60__;
                                }
                            }
                            __result61__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result61__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_107;
struct list_item$1charp* it_108;
_Bool _while_condtional16;
_Bool _if_conditional116;
struct list$1charp* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_107, 0, sizeof(int));
memset(&it_108, 0, sizeof(struct list_item$1charp*));
                                it2_107=0;
                                it_108=self->head;
                                while(_while_condtional16=it_108!=((void*)0),                                _while_condtional16) {
                                    if(_if_conditional116=string_equals(it_108->item,item),                                    _if_conditional116) {
                                        list$1charp_delete(self,it2_107,it2_107+1);
                                        break;
                                    }
                                    it2_107++;
                                    it_108=it_108->next;
                                }
                                __result65__ = __result_obj__ = self;
                                return __result65__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
int tmp_109;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct list$1charp* __result62__;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct list_item$1charp* it_112;
int i_113;
_Bool _while_condtional18;
_Bool _if_conditional125;
struct list_item$1charp* prev_it_114;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct list_item$1charp* it_115;
int i_116;
_Bool _while_condtional19;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct list_item$1charp* prev_it_117;
struct list_item$1charp* it_118;
struct list_item$1charp* head_prev_it_119;
struct list_item$1charp* tail_it_120;
int i_121;
_Bool _while_condtional20;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
struct list_item$1charp* prev_it_122;
_Bool _if_conditional133;
_Bool _if_conditional134;
struct list$1charp* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
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
                                                head+=self->len;
                                            }
                                            if(_if_conditional118=tail<0,                                            _if_conditional118) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional119=head>tail,                                            _if_conditional119) {
                                                tmp_109=tail;
                                                tail=head;
                                                head=tmp_109;
                                            }
                                            if(_if_conditional120=head<0,                                            _if_conditional120) {
                                                head=0;
                                            }
                                            if(_if_conditional121=tail>self->len,                                            _if_conditional121) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional122=head==tail,                                            _if_conditional122) {
                                                __result62__ = __result_obj__ = self;
                                                return __result62__;
                                            }
                                            if(_if_conditional123=head==0&&tail==self->len,                                            _if_conditional123) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional124=head==0,                                                _if_conditional124) {
                                                    it_112=self->head;
                                                    i_113=0;
                                                    while(_while_condtional18=it_112!=((void*)0),                                                    _while_condtional18) {
                                                        if(_if_conditional125=i_113<tail,                                                        _if_conditional125) {
                                                            prev_it_114=it_112;
                                                            it_112=it_112->next;
                                                            i_113++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional126=i_113==tail,                                                            _if_conditional126) {
                                                                self->head=it_112;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_112=it_112->next;
                                                                i_113++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional127=tail==self->len,                                                    _if_conditional127) {
                                                        it_115=self->head;
                                                        i_116=0;
                                                        while(_while_condtional19=it_115!=((void*)0),                                                        _while_condtional19) {
                                                            if(_if_conditional128=i_116==head,                                                            _if_conditional128) {
                                                                self->tail=it_115->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional129=i_116>=head,                                                            _if_conditional129) {
                                                                prev_it_117=it_115;
                                                                it_115=it_115->next;
                                                                i_116++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_115=it_115->next;
                                                                i_116++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_118=self->head;
                                                        head_prev_it_119=((void*)0);
                                                        tail_it_120=((void*)0);
                                                        i_121=0;
                                                        while(_while_condtional20=it_118!=((void*)0),                                                        _while_condtional20) {
                                                            if(_if_conditional130=i_121==head,                                                            _if_conditional130) {
                                                                head_prev_it_119=it_118->prev;
                                                            }
                                                            if(_if_conditional131=i_121==tail,                                                            _if_conditional131) {
                                                                tail_it_120=it_118;
                                                            }
                                                            if(_if_conditional132=i_121>=head&&i_121<tail,                                                            _if_conditional132) {
                                                                prev_it_122=it_118;
                                                                it_118=it_118->next;
                                                                i_121++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_118=it_118->next;
                                                                i_121++;
                                                            }
                                                        }
                                                        if(_if_conditional133=head_prev_it_119!=((void*)0),                                                        _if_conditional133) {
                                                            head_prev_it_119->next=tail_it_120;
                                                        }
                                                        if(_if_conditional134=tail_it_120!=((void*)0),                                                        _if_conditional134) {
                                                            tail_it_120->prev=head_prev_it_119;
                                                        }
                                                    }
                                                }
                                            }
                                            __result64__ = __result_obj__ = self;
                                            return __result64__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_110;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_111;
struct list$1charp* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_110, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*));
                                                    it_110=self->head;
                                                    while(_while_condtional17=it_110!=((void*)0),                                                    _while_condtional17) {
                                                        prev_it_111=it_110;
                                                        it_110=it_110->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result63__ = __result_obj__ = self;
                                                    return __result63__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional140;
char* result_124;
char* __result66__;
_Bool _if_conditional141;
char* __result67__;
char* result_125;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                if(_if_conditional140=self==((void*)0),                _if_conditional140) {
                    memset(&result_124,0,sizeof(char*));
                    __result66__ = __result_obj__ = result_124;
                    return __result66__;
                }
                self->it=self->head;
                if(self->it) {
                    __result67__ = __result_obj__ = self->it->item;
                    return __result67__;
                }
                memset(&result_125,0,sizeof(char*));
                __result68__ = __result_obj__ = result_125;
                return __result68__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                __result69__ = self==((void*)0)||self->it==((void*)0);
                return __result69__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional142;
char* result_127;
char* __result70__;
_Bool _if_conditional143;
char* __result71__;
char* result_128;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(char*));
memset(&result_128, 0, sizeof(char*));
                if(_if_conditional142=self==((void*)0)||self->it==((void*)0),                _if_conditional142) {
                    memset(&result_127,0,sizeof(char*));
                    __result70__ = __result_obj__ = result_127;
                    return __result70__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result71__ = __result_obj__ = self->it->item;
                    return __result71__;
                }
                memset(&result_128,0,sizeof(char*));
                __result72__ = __result_obj__ = result_128;
                return __result72__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional146;
void* right_value94;
struct list_item$1charp* litem_129;
_Bool _if_conditional147;
void* right_value95;
struct list_item$1charp* litem_130;
void* right_value96;
struct list_item$1charp* litem_131;
struct list$1charp* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1charp*));
right_value95 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1charp*));
right_value96 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional146=self->len==0,                    _if_conditional146) {
                        litem_129=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value94=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_129->prev=((void*)0);
                        litem_129->next=((void*)0);
                        litem_129->item=item;
                        self->tail=litem_129;
                        self->head=litem_129;
                    }
                    else {
                        if(_if_conditional147=self->len==1,                        _if_conditional147) {
                            litem_130=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_130->prev=self->head;
                            litem_130->next=((void*)0);
                            litem_130->item=item;
                            self->tail=litem_130;
                            self->head->next=litem_130;
                        }
                        else {
                            litem_131=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_131->prev=self->tail;
                            litem_131->next=((void*)0);
                            litem_131->item=item;
                            self->tail->next=litem_131;
                            self->tail=litem_131;
                        }
                    }
                    self->len++;
                    __result73__ = __result_obj__ = self;
                    return __result73__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj25;
struct tuple1$1sTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj25=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __result75__ = __result_obj__ = self;
        come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result75__;
        come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional148;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional148=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional148) {
            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result76__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result76__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result77__ = __result_obj__ = self;
        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result77__;
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
struct sClass* __result80__;
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
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj36=self->mFields;
    self->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value115=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value114=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02transpile.c", 384, "struct list$1tuple2$2charphsTypephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj37=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(info->sname))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result80__ = __result_obj__ = self;
    come_call_finalizer2(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result80__;
    come_call_finalizer2(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result79__ = __result_obj__ = self;
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result79__;
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
struct list$1sTypeph* o2_saved_132;
struct sType* it_135;
void* right_value156;
struct list$1charph* o2_saved_159;
char* it_160;
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
struct sFun* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&o2_saved_132, 0, sizeof(struct list$1sTypeph*));
memset(&it_135, 0, sizeof(struct sType*));
right_value156 = (void*)0;
memset(&o2_saved_159, 0, sizeof(struct list$1charph*));
memset(&it_160, 0, sizeof(char*));
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
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    for(    o2_saved_132=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_135=list$1sTypeph_begin((o2_saved_132));    !list$1sTypeph_end((o2_saved_132));    it_135=list$1sTypeph_next((o2_saved_132))    ){
        list$1sTypeph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(it_135)))));
        come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_159=(struct list$1charph*)come_increment_ref_count((param_names)),it_160=list$1charph_begin((o2_saved_159));    !list$1charph_end((o2_saved_159));    it_160=list$1charph_next((o2_saved_159))    ){
        list$1charph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(((char*)(right_value157=string_clone(it_160)))));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj83=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(declare_sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result124__ = __result_obj__ = self;
    come_call_finalizer2(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result124__;
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
_Bool _if_conditional149;
struct sType* result_133;
struct sType* __result81__;
_Bool _if_conditional150;
struct sType* __result82__;
struct sType* result_134;
struct sType* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_133, 0, sizeof(struct sType*));
memset(&result_134, 0, sizeof(struct sType*));
        if(_if_conditional149=self==((void*)0),        _if_conditional149) {
            memset(&result_133,0,sizeof(struct sType*));
            __result81__ = __result_obj__ = result_133;
            return __result81__;
        }
        self->it=self->head;
        if(self->it) {
            __result82__ = __result_obj__ = self->it->item;
            return __result82__;
        }
        memset(&result_134,0,sizeof(struct sType*));
        __result83__ = __result_obj__ = result_134;
        return __result83__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
        __result84__ = self==((void*)0)||self->it==((void*)0);
        return __result84__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional151;
struct sType* result_136;
struct sType* __result85__;
_Bool _if_conditional152;
struct sType* __result86__;
struct sType* result_137;
struct sType* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_136, 0, sizeof(struct sType*));
memset(&result_137, 0, sizeof(struct sType*));
        if(_if_conditional151=self==((void*)0)||self->it==((void*)0),        _if_conditional151) {
            memset(&result_136,0,sizeof(struct sType*));
            __result85__ = __result_obj__ = result_136;
            return __result85__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result86__ = __result_obj__ = self->it->item;
            return __result86__;
        }
        memset(&result_137,0,sizeof(struct sType*));
        __result87__ = __result_obj__ = result_137;
        return __result87__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional153;
void* right_value119;
struct list_item$1sTypeph* litem_138;
struct sType* __dec_obj44;
_Bool _if_conditional154;
void* right_value120;
struct list_item$1sTypeph* litem_139;
struct sType* __dec_obj45;
void* right_value121;
struct list_item$1sTypeph* litem_140;
struct sType* __dec_obj46;
struct list$1sTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1sTypeph*));
right_value120 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1sTypeph*));
right_value121 = (void*)0;
memset(&litem_140, 0, sizeof(struct list_item$1sTypeph*));
            if(_if_conditional153=self->len==0,            _if_conditional153) {
                litem_138=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value119=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_138->prev=((void*)0);
                litem_138->next=((void*)0);
                __dec_obj44=litem_138->item;
                litem_138->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_138;
                self->head=litem_138;
            }
            else {
                if(_if_conditional154=self->len==1,                _if_conditional154) {
                    litem_139=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value120=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_139->prev=self->head;
                    litem_139->next=((void*)0);
                    __dec_obj45=litem_139->item;
                    litem_139->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_139;
                    self->head->next=litem_139;
                }
                else {
                    litem_140=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value121=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_140->prev=self->tail;
                    litem_140->next=((void*)0);
                    __dec_obj46=litem_140->item;
                    litem_140->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_140;
                    self->tail=litem_140;
                }
            }
            self->len++;
            __result88__ = __result_obj__ = self;
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result88__;
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional155;
struct sType* __result89__;
void* right_value122;
struct sType* result_141;
_Bool _if_conditional156;
_Bool _if_conditional157;
void* right_value125;
struct tuple1$1sTypeph* __dec_obj48;
_Bool _if_conditional160;
void* right_value126;
struct tuple1$1sTypeph* __dec_obj49;
_Bool _if_conditional161;
void* right_value127;
char* __dec_obj50;
_Bool _if_conditional162;
void* right_value134;
struct list$1sTypeph* __dec_obj54;
_Bool _if_conditional166;
void* right_value142;
struct list$1sNodeph* __dec_obj58;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value143;
struct list$1sTypeph* __dec_obj59;
_Bool _if_conditional181;
void* right_value150;
struct list$1charph* __dec_obj63;
_Bool _if_conditional185;
void* right_value151;
struct tuple1$1sTypeph* __dec_obj64;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value152;
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
void* right_value153;
struct sNode* __dec_obj66;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value154;
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
void* right_value155;
char* __dec_obj68;
struct sType* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&result_141, 0, sizeof(struct sType*));
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
            if(_if_conditional155=self==(void*)0,            _if_conditional155) {
                __result89__ = __result_obj__ = (void*)0;
                return __result89__;
            }
            result_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional156=self!=((void*)0),            _if_conditional156) {
                result_141->mClass=self->mClass;
            }
            if(_if_conditional157=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional157) {
                __dec_obj48=result_141->mNoSolvedGenericsType;
                result_141->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional160=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional160) {
                __dec_obj49=result_141->mOriginalLoadVarType;
                result_141->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value126=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional161=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional161) {
                __dec_obj50=result_141->mGenericsName;
                result_141->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(self->mGenericsName))));
                __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional162=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional162) {
                __dec_obj54=result_141->mGenericsTypes;
                result_141->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value134=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional166=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional166) {
                __dec_obj58=result_141->mArrayNum;
                result_141->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value142=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional179=self!=((void*)0),            _if_conditional179) {
                result_141->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional180=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional180) {
                __dec_obj59=result_141->mParamTypes;
                result_141->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value143=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional181=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional181) {
                __dec_obj63=result_141->mParamNames;
                result_141->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional185=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional185) {
                __dec_obj64=result_141->mResultType;
                result_141->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value151=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional186=self!=((void*)0),            _if_conditional186) {
                result_141->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional187=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional187) {
                __dec_obj65=result_141->mAlignas;
                result_141->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=sNode_clone(self->mAlignas))));
                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional188=self!=((void*)0),            _if_conditional188) {
                result_141->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                result_141->mShort=self->mShort;
            }
            if(_if_conditional190=self!=((void*)0),            _if_conditional190) {
                result_141->mLong=self->mLong;
            }
            if(_if_conditional191=self!=((void*)0),            _if_conditional191) {
                result_141->mLongLong=self->mLongLong;
            }
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                result_141->mConstant=self->mConstant;
            }
            if(_if_conditional193=self!=((void*)0),            _if_conditional193) {
                result_141->mRegister=self->mRegister;
            }
            if(_if_conditional194=self!=((void*)0),            _if_conditional194) {
                result_141->mVolatile=self->mVolatile;
            }
            if(_if_conditional195=self!=((void*)0),            _if_conditional195) {
                result_141->mStatic=self->mStatic;
            }
            if(_if_conditional196=self!=((void*)0),            _if_conditional196) {
                result_141->mExtern=self->mExtern;
            }
            if(_if_conditional197=self!=((void*)0),            _if_conditional197) {
                result_141->mRestrict=self->mRestrict;
            }
            if(_if_conditional198=self!=((void*)0),            _if_conditional198) {
                result_141->mImmutable=self->mImmutable;
            }
            if(_if_conditional199=self!=((void*)0),            _if_conditional199) {
                result_141->mHeap=self->mHeap;
            }
            if(_if_conditional200=self!=((void*)0),            _if_conditional200) {
                result_141->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional201=self!=((void*)0),            _if_conditional201) {
                result_141->mDelegate=self->mDelegate;
            }
            if(_if_conditional202=self!=((void*)0),            _if_conditional202) {
                result_141->mShare=self->mShare;
            }
            if(_if_conditional203=self!=((void*)0),            _if_conditional203) {
                result_141->mClone=self->mClone;
            }
            if(_if_conditional204=self!=((void*)0),            _if_conditional204) {
                result_141->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional205=self!=((void*)0),            _if_conditional205) {
                result_141->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional206=self!=((void*)0),            _if_conditional206) {
                result_141->mRefference=self->mRefference;
            }
            if(_if_conditional207=self!=((void*)0),            _if_conditional207) {
                result_141->mException=self->mException;
            }
            if(_if_conditional208=self!=((void*)0),            _if_conditional208) {
                result_141->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional209=self!=((void*)0),            _if_conditional209) {
                result_141->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional210=self!=((void*)0),            _if_conditional210) {
                result_141->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional211=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional211) {
                __dec_obj66=result_141->mSizeNum;
                result_141->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(self->mSizeNum))));
                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional212=self!=((void*)0),            _if_conditional212) {
                result_141->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional213=self!=((void*)0),            _if_conditional213) {
                result_141->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional214=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional214) {
                __dec_obj67=result_141->mOriginalTypeName;
                result_141->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value154=string_clone(self->mOriginalTypeName))));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional215=self!=((void*)0),            _if_conditional215) {
                result_141->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional216=self!=((void*)0),            _if_conditional216) {
                result_141->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional217=self!=((void*)0),            _if_conditional217) {
                result_141->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional218=self!=((void*)0),            _if_conditional218) {
                result_141->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional219=self!=((void*)0),            _if_conditional219) {
                result_141->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional220=self!=((void*)0),            _if_conditional220) {
                result_141->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional221=self!=((void*)0),            _if_conditional221) {
                result_141->mInline=self->mInline;
            }
            if(_if_conditional222=self!=((void*)0),            _if_conditional222) {
                result_141->mNullValue=self->mNullValue;
            }
            if(_if_conditional223=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional223) {
                __dec_obj68=result_141->mAsmName;
                result_141->mAsmName=(char*)come_increment_ref_count(((char*)(right_value155=string_clone(self->mAsmName))));
                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result103__ = __result_obj__ = result_141;
            come_call_finalizer2(sType_finalize,result_141, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result103__;
            come_call_finalizer2(sType_finalize,result_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional158;
struct tuple1$1sTypeph* __result90__;
void* right_value123;
struct tuple1$1sTypeph* result_142;
_Bool _if_conditional159;
void* right_value124;
struct sType* __dec_obj47;
struct tuple1$1sTypeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&result_142, 0, sizeof(struct tuple1$1sTypeph*));
right_value124 = (void*)0;
                    if(_if_conditional158=self==(void*)0,                    _if_conditional158) {
                        __result90__ = __result_obj__ = (void*)0;
                        return __result90__;
                    }
                    result_142=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value123=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional159=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional159) {
                        __dec_obj47=result_142->v1;
                        result_142->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    __result91__ = __result_obj__ = result_142;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_142, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result91__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional163;
struct list$1sTypeph* __result92__;
void* right_value128;
void* right_value129;
struct list$1sTypeph* result_143;
struct list_item$1sTypeph* it_144;
_Bool _while_condtional21;
void* right_value133;
struct list$1sTypeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&result_143, 0, sizeof(struct list$1sTypeph*));
memset(&it_144, 0, sizeof(struct list_item$1sTypeph*));
right_value133 = (void*)0;
                    if(_if_conditional163=self==((void*)0),                    _if_conditional163) {
                        __result92__ = __result_obj__ = ((void*)0);
                        return __result92__;
                    }
                    result_143=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value129=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value128=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_144=self->head;
                    while(_while_condtional21=it_144!=((void*)0),                    _while_condtional21) {
                        list$1sTypeph_add(result_143,(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(it_144->item)))));
                        come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_144=it_144->next;
                    }
                    __result94__ = __result_obj__ = result_143;
                    come_call_finalizer2(list$1sTypephp_finalize,result_143, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result94__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional164;
void* right_value130;
struct list_item$1sTypeph* litem_145;
struct sType* __dec_obj51;
_Bool _if_conditional165;
void* right_value131;
struct list_item$1sTypeph* litem_146;
struct sType* __dec_obj52;
void* right_value132;
struct list_item$1sTypeph* litem_147;
struct sType* __dec_obj53;
struct list$1sTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&litem_145, 0, sizeof(struct list_item$1sTypeph*));
right_value131 = (void*)0;
memset(&litem_146, 0, sizeof(struct list_item$1sTypeph*));
right_value132 = (void*)0;
memset(&litem_147, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional164=self->len==0,                            _if_conditional164) {
                                litem_145=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_145->prev=((void*)0);
                                litem_145->next=((void*)0);
                                __dec_obj51=litem_145->item;
                                litem_145->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_145;
                                self->head=litem_145;
                            }
                            else {
                                if(_if_conditional165=self->len==1,                                _if_conditional165) {
                                    litem_146=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value131=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_146->prev=self->head;
                                    litem_146->next=((void*)0);
                                    __dec_obj52=litem_146->item;
                                    litem_146->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_146;
                                    self->head->next=litem_146;
                                }
                                else {
                                    litem_147=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value132=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_147->prev=self->tail;
                                    litem_147->next=((void*)0);
                                    __dec_obj53=litem_147->item;
                                    litem_147->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_147;
                                    self->tail=litem_147;
                                }
                            }
                            self->len++;
                            __result93__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result93__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional167;
struct list$1sNodeph* __result95__;
void* right_value135;
void* right_value136;
struct list$1sNodeph* result_148;
struct list_item$1sNodeph* it_149;
_Bool _while_condtional22;
void* right_value141;
struct list$1sNodeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&result_148, 0, sizeof(struct list$1sNodeph*));
memset(&it_149, 0, sizeof(struct list_item$1sNodeph*));
right_value141 = (void*)0;
                    if(_if_conditional167=self==((void*)0),                    _if_conditional167) {
                        __result95__ = __result_obj__ = ((void*)0);
                        return __result95__;
                    }
                    result_148=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value136=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value135=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_149=self->head;
                    while(_while_condtional22=it_149!=((void*)0),                    _while_condtional22) {
                        list$1sNodeph_add(result_148,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=sNode_clone(it_149->item)))));
                        if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_149=it_149->next;
                    }
                    __result99__ = __result_obj__ = result_148;
                    come_call_finalizer2(list$1sNodephp_finalize,result_148, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result99__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional168;
void* right_value137;
struct list_item$1sNodeph* litem_150;
struct sNode* __dec_obj55;
_Bool _if_conditional169;
void* right_value138;
struct list_item$1sNodeph* litem_151;
struct sNode* __dec_obj56;
void* right_value139;
struct list_item$1sNodeph* litem_152;
struct sNode* __dec_obj57;
struct list$1sNodeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1sNodeph*));
right_value138 = (void*)0;
memset(&litem_151, 0, sizeof(struct list_item$1sNodeph*));
right_value139 = (void*)0;
memset(&litem_152, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional168=self->len==0,                            _if_conditional168) {
                                litem_150=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value137=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_150->prev=((void*)0);
                                litem_150->next=((void*)0);
                                __dec_obj55=litem_150->item;
                                litem_150->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_150;
                                self->head=litem_150;
                            }
                            else {
                                if(_if_conditional169=self->len==1,                                _if_conditional169) {
                                    litem_151=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value138=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_151->prev=self->head;
                                    litem_151->next=((void*)0);
                                    __dec_obj56=litem_151->item;
                                    litem_151->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_151;
                                    self->head->next=litem_151;
                                }
                                else {
                                    litem_152=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value139=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_152->prev=self->tail;
                                    litem_152->next=((void*)0);
                                    __dec_obj57=litem_152->item;
                                    litem_152->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_152;
                                    self->tail=litem_152;
                                }
                            }
                            self->len++;
                            __result96__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result96__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional170;
struct sNode* __result97__;
void* right_value140;
struct sNode* result_153;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
struct sNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
memset(&result_153, 0, sizeof(struct sNode*));
                            if(_if_conditional170=self==(void*)0,                            _if_conditional170) {
                                __result97__ = __result_obj__ = (void*)0;
                                return __result97__;
                            }
                            result_153=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                            if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional171=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional171) {
                                result_153->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional172=self!=((void*)0),                            _if_conditional172) {
                                result_153->finalize=self->finalize;
                            }
                            if(_if_conditional173=self!=((void*)0),                            _if_conditional173) {
                                result_153->clone=self->clone;
                            }
                            if(_if_conditional174=self!=((void*)0),                            _if_conditional174) {
                                result_153->compile=self->compile;
                            }
                            if(_if_conditional175=self!=((void*)0),                            _if_conditional175) {
                                result_153->sline=self->sline;
                            }
                            if(_if_conditional176=self!=((void*)0),                            _if_conditional176) {
                                result_153->sname=self->sname;
                            }
                            if(_if_conditional177=self!=((void*)0),                            _if_conditional177) {
                                result_153->terminated=self->terminated;
                            }
                            if(_if_conditional178=self!=((void*)0),                            _if_conditional178) {
                                result_153->kind=self->kind;
                            }
                            __result98__ = __result_obj__ = result_153;
                            if(result_153) { result_153 = come_decrement_ref_count2(result_153, ((struct sNode*)result_153)->finalize, ((struct sNode*)result_153)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result98__;
                            if(result_153) { result_153 = come_decrement_ref_count2(result_153, ((struct sNode*)result_153)->finalize, ((struct sNode*)result_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional182;
struct list$1charph* __result100__;
void* right_value144;
void* right_value145;
struct list$1charph* result_154;
struct list_item$1charph* it_155;
_Bool _while_condtional23;
void* right_value149;
struct list$1charph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&result_154, 0, sizeof(struct list$1charph*));
memset(&it_155, 0, sizeof(struct list_item$1charph*));
right_value149 = (void*)0;
                    if(_if_conditional182=self==((void*)0),                    _if_conditional182) {
                        __result100__ = __result_obj__ = ((void*)0);
                        return __result100__;
                    }
                    result_154=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value144=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_155=self->head;
                    while(_while_condtional23=it_155!=((void*)0),                    _while_condtional23) {
                        list$1charph_add(result_154,(char*)come_increment_ref_count(((char*)(right_value149=string_clone(it_155->item)))));
                        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_155=it_155->next;
                    }
                    __result102__ = __result_obj__ = result_154;
                    come_call_finalizer2(list$1charphp_finalize,result_154, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result102__;
                    come_call_finalizer2(list$1charphp_finalize,result_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional183;
void* right_value146;
struct list_item$1charph* litem_156;
char* __dec_obj60;
_Bool _if_conditional184;
void* right_value147;
struct list_item$1charph* litem_157;
char* __dec_obj61;
void* right_value148;
struct list_item$1charph* litem_158;
char* __dec_obj62;
struct list$1charph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charph*));
right_value147 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charph*));
right_value148 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional183=self->len==0,                            _if_conditional183) {
                                litem_156=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_156->prev=((void*)0);
                                litem_156->next=((void*)0);
                                __dec_obj60=litem_156->item;
                                litem_156->item=(char*)come_increment_ref_count(item);
                                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_156;
                                self->head=litem_156;
                            }
                            else {
                                if(_if_conditional184=self->len==1,                                _if_conditional184) {
                                    litem_157=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value147=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_157->prev=self->head;
                                    litem_157->next=((void*)0);
                                    __dec_obj61=litem_157->item;
                                    litem_157->item=(char*)come_increment_ref_count(item);
                                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_157;
                                    self->head->next=litem_157;
                                }
                                else {
                                    litem_158=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value148=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_158->prev=self->tail;
                                    litem_158->next=((void*)0);
                                    __dec_obj62=litem_158->item;
                                    litem_158->item=(char*)come_increment_ref_count(item);
                                    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_158;
                                    self->tail=litem_158;
                                }
                            }
                            self->len++;
                            __result101__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result101__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional224;
struct sBlock* __result104__;
void* right_value168;
struct sBlock* result_161;
_Bool _if_conditional227;
void* right_value169;
struct list$1sNodeph* __dec_obj74;
_Bool _if_conditional228;
void* right_value186;
struct sVarTable* __dec_obj80;
struct sBlock* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&result_161, 0, sizeof(struct sBlock*));
right_value169 = (void*)0;
right_value186 = (void*)0;
        if(_if_conditional224=self==(void*)0,        _if_conditional224) {
            __result104__ = __result_obj__ = (void*)0;
            return __result104__;
        }
        result_161=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value168=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional227=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional227) {
            __dec_obj74=result_161->mNodes;
            result_161->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value169=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional228=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional228) {
            __dec_obj80=result_161->mVarTable;
            result_161->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value186=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result123__ = __result_obj__ = result_161;
        come_call_finalizer2(sBlock_finalize,result_161, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result123__;
        come_call_finalizer2(sBlock_finalize,result_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional225=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional225) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional226=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional226) {
                come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional229;
struct sVarTable* __result105__;
void* right_value170;
struct sVarTable* result_162;
_Bool _if_conditional230;
void* right_value185;
struct map$2charphsVarph* __dec_obj79;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct sVarTable* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
memset(&result_162, 0, sizeof(struct sVarTable*));
right_value185 = (void*)0;
                if(_if_conditional229=self==(void*)0,                _if_conditional229) {
                    __result105__ = __result_obj__ = (void*)0;
                    return __result105__;
                }
                result_162=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value170=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional230=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional230) {
                    __dec_obj79=result_162->mVars;
                    result_162->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value185=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional264=self!=((void*)0),                _if_conditional264) {
                    result_162->mGlobal=self->mGlobal;
                }
                if(_if_conditional265=self!=((void*)0),                _if_conditional265) {
                    result_162->mParent=self->mParent;
                }
                if(_if_conditional266=self!=((void*)0),                _if_conditional266) {
                    result_162->mID=self->mID;
                }
                __result122__ = __result_obj__ = result_162;
                come_call_finalizer2(sVarTable_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result122__;
                come_call_finalizer2(sVarTable_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional231;
struct map$2charphsVarph* __result106__;
void* right_value171;
void* right_value172;
struct map$2charphsVarph* result_163;
char* it_166;
struct sVar* default_value_169;
void* right_value173;
struct sVar* it2_172;
void* right_value184;
struct map$2charphsVarph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&result_163, 0, sizeof(struct map$2charphsVarph*));
memset(&it_166, 0, sizeof(char*));
memset(&default_value_169, 0, sizeof(struct sVar*));
right_value173 = (void*)0;
memset(&it2_172, 0, sizeof(struct sVar*));
right_value184 = (void*)0;
                        if(_if_conditional231=self==((void*)0),                        _if_conditional231) {
                            __result106__ = __result_obj__ = ((void*)0);
                            return __result106__;
                        }
                        result_163=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value172=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value171=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang2.h", 1159, "struct map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(                        it_166=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_166=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_169,0,sizeof(struct sVar*));
                            it2_172=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value173=map$2charphsVarph_at(self,it_166,default_value_169))));
                            come_call_finalizer2(sVar_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            map$2charphsVarph_insert2(result_163,it_166,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value184=sVar_clone(it2_172)))));
                            come_call_finalizer2(sVar_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sVar_finalize,it2_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        __result121__ = __result_obj__ = result_163;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_163, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result121__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional232;
char* result_164;
char* __result107__;
_Bool _if_conditional233;
char* __result108__;
char* result_165;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(char*));
memset(&result_165, 0, sizeof(char*));
                            if(_if_conditional232=self==((void*)0),                            _if_conditional232) {
                                memset(&result_164,0,sizeof(char*));
                                __result107__ = __result_obj__ = result_164;
                                return __result107__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result108__ = __result_obj__ = self->key_list->it->item;
                                return __result108__;
                            }
                            memset(&result_165,0,sizeof(char*));
                            __result109__ = __result_obj__ = result_165;
                            return __result109__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result110__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result110__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional234;
char* result_167;
char* __result111__;
_Bool _if_conditional235;
char* __result112__;
char* result_168;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_167, 0, sizeof(char*));
memset(&result_168, 0, sizeof(char*));
                            if(_if_conditional234=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional234) {
                                memset(&result_167,0,sizeof(char*));
                                __result111__ = __result_obj__ = result_167;
                                return __result111__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result112__ = __result_obj__ = self->key_list->it->item;
                                return __result112__;
                            }
                            memset(&result_168,0,sizeof(char*));
                            __result113__ = __result_obj__ = result_168;
                            return __result113__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_170;
unsigned int it_171;
_Bool _while_condtional24;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct sVar* __result114__;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct sVar* __result115__;
struct sVar* __result116__;
struct sVar* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_170, 0, sizeof(unsigned int));
memset(&it_171, 0, sizeof(unsigned int));
                                hash_170=string_get_hash_key(((char*)key))%self->size;
                                it_171=hash_170;
                                while(_while_condtional24=(_Bool)1,                                _while_condtional24) {
                                    if(_if_conditional236=self->item_existance[it_171],                                    _if_conditional236) {
                                        if(_if_conditional237=string_equals(self->keys[it_171],key),                                        _if_conditional237) {
                                            __result114__ = __result_obj__ = self->items[it_171];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result114__;
                                        }
                                        it_171++;
                                        if(_if_conditional238=it_171>=self->size,                                        _if_conditional238) {
                                            it_171=0;
                                        }
                                        else {
                                            if(_if_conditional239=it_171==hash_170,                                            _if_conditional239) {
                                                __result115__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result115__;
                                            }
                                        }
                                    }
                                    else {
                                        __result116__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result116__;
                                    }
                                }
                                __result117__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result117__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional240;
unsigned int hash_184;
int it_185;
_Bool _while_condtional26;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool same_key_exist_186;
char* it2_187;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct map$2charphsVarph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_184, 0, sizeof(unsigned int));
memset(&it_185, 0, sizeof(int));
memset(&same_key_exist_186, 0, sizeof(_Bool));
memset(&it2_187, 0, sizeof(char*));
                                if(_if_conditional240=self->len*2>=self->size,                                _if_conditional240) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_184=string_get_hash_key(key)%self->size;
                                it_185=hash_184;
                                while(_while_condtional26=(_Bool)1,                                _while_condtional26) {
                                    if(_if_conditional244=self->item_existance[it_185],                                    _if_conditional244) {
                                        if(_if_conditional245=string_equals(self->keys[it_185],key),                                        _if_conditional245) {
                                            if(_if_conditional246=1,                                            _if_conditional246) {
                                                self->keys[it_185] = come_decrement_ref_count2(self->keys[it_185], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_185]);
                                                self->keys[it_185]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_185]);
                                                self->keys[it_185]=key;
                                            }
                                            if(_if_conditional247=1,                                            _if_conditional247) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_185], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->items[it_185]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_185]=item;
                                            }
                                            break;
                                        }
                                        it_185++;
                                        if(_if_conditional248=it_185>=self->size,                                        _if_conditional248) {
                                            it_185=0;
                                        }
                                        else {
                                            if(_if_conditional249=it_185==hash_184,                                            _if_conditional249) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_185]=(_Bool)1;
                                        if(_if_conditional250=1,                                        _if_conditional250) {
                                            self->keys[it_185]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_185]=key;
                                        }
                                        if(_if_conditional251=1,                                        _if_conditional251) {
                                            self->items[it_185]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_185]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_186=(_Bool)0;
                                for(                                it2_187=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_187=list$1charp_next(self->key_list)                                ){
                                    if(_if_conditional252=string_equals(it2_187,key),                                    _if_conditional252) {
                                        same_key_exist_186=(_Bool)1;
                                    }
                                }
                                if(_if_conditional253=!same_key_exist_186,                                _if_conditional253) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result118__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result118__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_173;
void* right_value174;
char** keys_174;
void* right_value175;
struct sVar** items_175;
void* right_value176;
_Bool* item_existance_176;
int len_177;
char* it_178;
struct sVar* default_value_179;
void* right_value177;
struct sVar* it2_180;
unsigned int hash_181;
int n_182;
_Bool _while_condtional25;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct sVar* default_value_183;
void* right_value178;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_173, 0, sizeof(int));
right_value174 = (void*)0;
memset(&keys_174, 0, sizeof(char**));
right_value175 = (void*)0;
memset(&items_175, 0, sizeof(struct sVar**));
right_value176 = (void*)0;
memset(&item_existance_176, 0, sizeof(_Bool*));
memset(&len_177, 0, sizeof(int));
memset(&it_178, 0, sizeof(char*));
memset(&default_value_179, 0, sizeof(struct sVar*));
right_value177 = (void*)0;
memset(&it2_180, 0, sizeof(struct sVar*));
memset(&hash_181, 0, sizeof(unsigned int));
memset(&n_182, 0, sizeof(int));
memset(&default_value_183, 0, sizeof(struct sVar*));
right_value178 = (void*)0;
                                        size_173=self->size*10;
                                        keys_174=(char**)come_increment_ref_count(((char**)(right_value174=(char**)come_calloc(1, sizeof(char*)*(1*(size_173)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                                        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_175=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value175=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_173)), "/usr/local/include/comelang2.h", 1315, "struct sVar*"))));
                                        come_call_finalizer2(sVar_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_176=(_Bool*)come_increment_ref_count(((_Bool*)(right_value176=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_173)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                                        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_177=0;
                                        for(                                        it_178=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_178=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_179,0,sizeof(struct sVar*));
                                            it2_180=((struct sVar*)(right_value177=map$2charphsVarph_at(self,it_178,default_value_179)));
                                            come_call_finalizer2(sVar_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            hash_181=string_get_hash_key(it_178)%size_173;
                                            n_182=hash_181;
                                            while(_while_condtional25=(_Bool)1,                                            _while_condtional25) {
                                                if(_if_conditional241=item_existance_176[n_182],                                                _if_conditional241) {
                                                    n_182++;
                                                    if(_if_conditional242=n_182>=size_173,                                                    _if_conditional242) {
                                                        n_182=0;
                                                    }
                                                    else {
                                                        if(_if_conditional243=n_182==hash_181,                                                        _if_conditional243) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_176[n_182]=(_Bool)1;
                                                    keys_174[n_182]=it_178;
                                                    items_175[n_182]=((struct sVar*)(right_value178=map$2charphsVarph_at(self,it_178,default_value_183)));
                                                    come_call_finalizer2(sVar_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    len_177++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_free((char*)self->keys);
                                        self->keys=keys_174;
                                        self->items=items_175;
                                        self->item_existance=item_existance_176;
                                        self->size=size_173;
                                        self->len=len_177;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional254;
struct sVar* __result119__;
void* right_value179;
struct sVar* result_188;
_Bool _if_conditional255;
void* right_value180;
char* __dec_obj75;
_Bool _if_conditional256;
void* right_value181;
char* __dec_obj76;
_Bool _if_conditional257;
void* right_value182;
struct sType* __dec_obj77;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value183;
char* __dec_obj78;
struct sVar* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
memset(&result_188, 0, sizeof(struct sVar*));
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
                                if(_if_conditional254=self==(void*)0,                                _if_conditional254) {
                                    __result119__ = __result_obj__ = (void*)0;
                                    return __result119__;
                                }
                                result_188=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value179=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar"))));
                                come_call_finalizer2(sVar_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional255=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional255) {
                                    __dec_obj75=result_188->mName;
                                    result_188->mName=(char*)come_increment_ref_count(((char*)(right_value180=string_clone(self->mName))));
                                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional256=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional256) {
                                    __dec_obj76=result_188->mCValueName;
                                    result_188->mCValueName=(char*)come_increment_ref_count(((char*)(right_value181=string_clone(self->mCValueName))));
                                    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional257=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional257) {
                                    __dec_obj77=result_188->mType;
                                    result_188->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(self->mType))));
                                    come_call_finalizer2(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional258=self!=((void*)0),                                _if_conditional258) {
                                    result_188->mBlockLevel=self->mBlockLevel;
                                }
                                if(_if_conditional259=self!=((void*)0),                                _if_conditional259) {
                                    result_188->mGlobal=self->mGlobal;
                                }
                                if(_if_conditional260=self!=((void*)0),                                _if_conditional260) {
                                    result_188->mAllocaValue=self->mAllocaValue;
                                }
                                if(_if_conditional261=self!=((void*)0),                                _if_conditional261) {
                                    result_188->mFunctionParam=self->mFunctionParam;
                                }
                                if(_if_conditional262=self!=((void*)0),                                _if_conditional262) {
                                    result_188->mNoFree=self->mNoFree;
                                }
                                if(_if_conditional263=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional263) {
                                    __dec_obj78=result_188->mFunName;
                                    result_188->mFunName=(char*)come_increment_ref_count(((char*)(right_value183=string_clone(self->mFunName))));
                                    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result120__ = __result_obj__ = result_188;
                                come_call_finalizer2(sVar_finalize,result_188, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result120__;
                                come_call_finalizer2(sVar_finalize,result_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional267=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional267) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional268=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional268) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional269=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional269) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional270=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional270) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional271=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional271) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional272=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional272) {
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional273=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional273) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional274=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional274) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional275=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional275) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional276=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional276) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional277=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional277) {
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional278=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional278) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional279=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional279) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
int i_189;
void* right_value222;
char* generics_type_190;
void* right_value223;
void* right_value224;
int i_191;
void* right_value225;
char* generics_type_192;
void* right_value226;
void* right_value227;
int rc_194;
_Bool _if_conditional280;
void* right_value228;
void* right_value229;
void* right_value230;
void* right_value231;
char* type_name_195;
void* right_value232;
void* right_value233;
struct sType* type_196;
void* right_value234;
char* __dec_obj84;
void* right_value240;
void* right_value241;
void* right_value242;
struct sClass* klass_218;
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
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value285;
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
memset(&i_189, 0, sizeof(int));
right_value222 = (void*)0;
memset(&generics_type_190, 0, sizeof(char*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&i_191, 0, sizeof(int));
right_value225 = (void*)0;
memset(&generics_type_192, 0, sizeof(char*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&rc_194, 0, sizeof(int));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&type_name_195, 0, sizeof(char*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&type_196, 0, sizeof(struct sType*));
right_value234 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&klass_218, 0, sizeof(struct sClass*));
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
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value285 = (void*)0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value191=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value190=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 431, "struct sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value194=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 432, "struct sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value197=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 433, "struct sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value200=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 434, "struct sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value203=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 435, "struct sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 436, "struct sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value209=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 437, "struct sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value212=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 438, "struct sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value215=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 439, "struct sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value218=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 440, "struct sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value221=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 441, "struct sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_189=0;    i_189<12;    i_189++    ){
        generics_type_190=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("generics_type%d",i_189))));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_190),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value224=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 444, "struct sClass")))),generics_type_190,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_189,-1,(_Bool)0,info)))));
        come_call_finalizer2(sClass_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        generics_type_190 = come_decrement_ref_count2(generics_type_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_191=0;    i_191<7;    i_191++    ){
        generics_type_192=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("mgenerics_type%d",i_191))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_192),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value227=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 448, "struct sClass")))),generics_type_192,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_191,(_Bool)0,info)))));
        come_call_finalizer2(sClass_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        generics_type_192 = come_decrement_ref_count2(generics_type_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    char cmd_193[1024];
    memset(&cmd_193, 0, sizeof(char)    *(1024)    );
    snprintf(cmd_193,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    rc_194=system(cmd_193);
    if(_if_conditional280=rc_194==0,    _if_conditional280) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value230=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value229=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 456, "struct sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type_name_195=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("__builtin_va_list"))));
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 460, "struct sType")))),"__builtin_va_list",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj84=type_196->mOriginalTypeName;
        type_196->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string("__builtin_va_list"))));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(type_name_195)))),(struct sType*)come_increment_ref_count(type_196));
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_195 = come_decrement_ref_count2(type_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_218=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value242=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value241=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 468, "struct sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_218->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value250=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value246=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 470, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 470, "struct sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_218->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value255=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value251=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 471, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 471, "struct sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_218->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value260=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value256=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 472, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value258=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 472, "struct sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_218->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value265=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value261=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 473, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 473, "struct sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_218->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value270=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value266=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 474, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value268=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 474, "struct sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value285=sClass_clone(klass_218)))));
        right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,klass_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional281;
unsigned int hash_214;
unsigned int it_215;
_Bool _while_condtional29;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool same_key_exist_216;
char* it2_217;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct map$2charphsTypeph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_214, 0, sizeof(unsigned int));
memset(&it_215, 0, sizeof(unsigned int));
memset(&same_key_exist_216, 0, sizeof(_Bool));
memset(&it2_217, 0, sizeof(char*));
            if(_if_conditional281=self->len*10>=self->size,            _if_conditional281) {
                map$2charphsTypeph_rehash(self);
            }
            hash_214=string_get_hash_key(key)%self->size;
            it_215=hash_214;
            while(_while_condtional29=(_Bool)1,            _while_condtional29) {
                if(_if_conditional293=self->item_existance[it_215],                _if_conditional293) {
                    if(_if_conditional294=string_equals(self->keys[it_215],key),                    _if_conditional294) {
                        if(_if_conditional295=1,                        _if_conditional295) {
                            list$1charp_remove(self->key_list,self->keys[it_215]);
                            self->keys[it_215] = come_decrement_ref_count2(self->keys[it_215], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_215]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_215]);
                            self->keys[it_215]=key;
                        }
                        if(_if_conditional296=1,                        _if_conditional296) {
                            come_call_finalizer2(sType_finalize,self->items[it_215], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_215]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_215]=item;
                        }
                        break;
                    }
                    it_215++;
                    if(_if_conditional297=it_215>=self->size,                    _if_conditional297) {
                        it_215=0;
                    }
                    else {
                        if(_if_conditional298=it_215==hash_214,                        _if_conditional298) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_215]=(_Bool)1;
                    if(_if_conditional299=1,                    _if_conditional299) {
                        self->keys[it_215]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_215]=key;
                    }
                    if(_if_conditional300=1,                    _if_conditional300) {
                        self->items[it_215]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_215]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_216=(_Bool)0;
            for(            it2_217=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_217=list$1charp_next(self->key_list)            ){
                if(_if_conditional301=string_equals(it2_217,key),                _if_conditional301) {
                    same_key_exist_216=(_Bool)1;
                }
            }
            if(_if_conditional302=!same_key_exist_216,            _if_conditional302) {
                list$1charp_push_back(self->key_list,key);
            }
            __result136__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result136__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_197;
void* right_value235;
char** keys_198;
void* right_value236;
struct sType** items_199;
void* right_value237;
_Bool* item_existance_200;
int len_201;
char* it_204;
struct sType* default_value_207;
void* right_value238;
struct sType* it2_210;
unsigned int hash_211;
int n_212;
_Bool _while_condtional28;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
struct sType* default_value_213;
void* right_value239;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_197, 0, sizeof(int));
right_value235 = (void*)0;
memset(&keys_198, 0, sizeof(char**));
right_value236 = (void*)0;
memset(&items_199, 0, sizeof(struct sType**));
right_value237 = (void*)0;
memset(&item_existance_200, 0, sizeof(_Bool*));
memset(&len_201, 0, sizeof(int));
memset(&it_204, 0, sizeof(char*));
memset(&default_value_207, 0, sizeof(struct sType*));
right_value238 = (void*)0;
memset(&it2_210, 0, sizeof(struct sType*));
memset(&hash_211, 0, sizeof(unsigned int));
memset(&n_212, 0, sizeof(int));
memset(&default_value_213, 0, sizeof(struct sType*));
right_value239 = (void*)0;
                    size_197=self->size*10;
                    keys_198=(char**)come_increment_ref_count(((char**)(right_value235=(char**)come_calloc(1, sizeof(char*)*(1*(size_197)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_199=(struct sType**)come_increment_ref_count(((struct sType**)(right_value236=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_197)), "/usr/local/include/comelang2.h", 1315, "struct sType*"))));
                    come_call_finalizer2(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_200=(_Bool*)come_increment_ref_count(((_Bool*)(right_value237=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_197)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_201=0;
                    for(                    it_204=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_204=map$2charphsTypeph_next(self)                    ){
                        memset(&default_value_207,0,sizeof(struct sType*));
                        it2_210=((struct sType*)(right_value238=map$2charphsTypeph_at(self,it_204,default_value_207)));
                        come_call_finalizer2(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_211=string_get_hash_key(it_204)%size_197;
                        n_212=hash_211;
                        while(_while_condtional28=(_Bool)1,                        _while_condtional28) {
                            if(_if_conditional290=item_existance_200[n_212],                            _if_conditional290) {
                                n_212++;
                                if(_if_conditional291=n_212>=size_197,                                _if_conditional291) {
                                    n_212=0;
                                }
                                else {
                                    if(_if_conditional292=n_212==hash_211,                                    _if_conditional292) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_200[n_212]=(_Bool)1;
                                keys_198[n_212]=it_204;
                                items_199[n_212]=((struct sType*)(right_value239=map$2charphsTypeph_at(self,it_204,default_value_213)));
                                come_call_finalizer2(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                len_201++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_198;
                    self->items=items_199;
                    self->item_existance=item_existance_200;
                    self->size=size_197;
                    self->len=len_201;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional282;
char* result_202;
char* __result125__;
_Bool _if_conditional283;
char* __result126__;
char* result_203;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_202, 0, sizeof(char*));
memset(&result_203, 0, sizeof(char*));
                        if(_if_conditional282=self==((void*)0),                        _if_conditional282) {
                            memset(&result_202,0,sizeof(char*));
                            __result125__ = __result_obj__ = result_202;
                            return __result125__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result126__ = __result_obj__ = self->key_list->it->item;
                            return __result126__;
                        }
                        memset(&result_203,0,sizeof(char*));
                        __result127__ = __result_obj__ = result_203;
                        return __result127__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result128__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result128__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional284;
char* result_205;
char* __result129__;
_Bool _if_conditional285;
char* __result130__;
char* result_206;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_205, 0, sizeof(char*));
memset(&result_206, 0, sizeof(char*));
                        if(_if_conditional284=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional284) {
                            memset(&result_205,0,sizeof(char*));
                            __result129__ = __result_obj__ = result_205;
                            return __result129__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result130__ = __result_obj__ = self->key_list->it->item;
                            return __result130__;
                        }
                        memset(&result_206,0,sizeof(char*));
                        __result131__ = __result_obj__ = result_206;
                        return __result131__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_208;
unsigned int it_209;
_Bool _while_condtional27;
_Bool _if_conditional286;
_Bool _if_conditional287;
struct sType* __result132__;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct sType* __result133__;
struct sType* __result134__;
struct sType* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_208, 0, sizeof(unsigned int));
memset(&it_209, 0, sizeof(unsigned int));
                            hash_208=string_get_hash_key(((char*)key))%self->size;
                            it_209=hash_208;
                            while(_while_condtional27=(_Bool)1,                            _while_condtional27) {
                                if(_if_conditional286=self->item_existance[it_209],                                _if_conditional286) {
                                    if(_if_conditional287=string_equals(self->keys[it_209],key),                                    _if_conditional287) {
                                        __result132__ = __result_obj__ = self->items[it_209];
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result132__;
                                    }
                                    it_209++;
                                    if(_if_conditional288=it_209>=self->size,                                    _if_conditional288) {
                                        it_209=0;
                                    }
                                    else {
                                        if(_if_conditional289=it_209==hash_208,                                        _if_conditional289) {
                                            __result133__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result133__;
                                        }
                                    }
                                }
                                else {
                                    __result134__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result134__;
                                }
                            }
                            __result135__ = __result_obj__ = default_value;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result135__;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional303;
void* right_value243;
struct list_item$1tuple2$2charphsTypephph* litem_219;
struct tuple2$2charphsTypeph* __dec_obj85;
_Bool _if_conditional306;
void* right_value244;
struct list_item$1tuple2$2charphsTypephph* litem_220;
struct tuple2$2charphsTypeph* __dec_obj86;
void* right_value245;
struct list_item$1tuple2$2charphsTypephph* litem_221;
struct tuple2$2charphsTypeph* __dec_obj87;
struct list$1tuple2$2charphsTypephph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
memset(&litem_219, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value244 = (void*)0;
memset(&litem_220, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value245 = (void*)0;
memset(&litem_221, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional303=self->len==0,            _if_conditional303) {
                litem_219=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value243=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_219->prev=((void*)0);
                litem_219->next=((void*)0);
                __dec_obj85=litem_219->item;
                litem_219->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_219;
                self->head=litem_219;
            }
            else {
                if(_if_conditional306=self->len==1,                _if_conditional306) {
                    litem_220=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value244=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_220->prev=self->head;
                    litem_220->next=((void*)0);
                    __dec_obj86=litem_220->item;
                    litem_220->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_220;
                    self->head->next=litem_220;
                }
                else {
                    litem_221=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value245=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_221->prev=self->tail;
                    litem_221->next=((void*)0);
                    __dec_obj87=litem_221->item;
                    litem_221->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_221;
                    self->tail=litem_221;
                }
            }
            self->len++;
            __result137__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result137__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional304;
_Bool _if_conditional305;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional304=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional304) {
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional305=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional305) {
                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj88;
struct sType* __dec_obj89;
struct tuple2$2charphsTypeph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj88=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj89=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __result138__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result138__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional307;
struct sClass* __result139__;
void* right_value272;
struct sClass* result_222;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value273;
char* __dec_obj90;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value283;
struct list$1tuple2$2charphsTypephph* __dec_obj96;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value284;
char* __dec_obj97;
struct sClass* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value272 = (void*)0;
memset(&result_222, 0, sizeof(struct sClass*));
right_value273 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
            if(_if_conditional307=self==(void*)0,            _if_conditional307) {
                __result139__ = __result_obj__ = (void*)0;
                return __result139__;
            }
            result_222=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value272=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
            come_call_finalizer2(sClass_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional308=self!=((void*)0),            _if_conditional308) {
                result_222->mStruct=self->mStruct;
            }
            if(_if_conditional309=self!=((void*)0),            _if_conditional309) {
                result_222->mFloat=self->mFloat;
            }
            if(_if_conditional310=self!=((void*)0),            _if_conditional310) {
                result_222->mUnion=self->mUnion;
            }
            if(_if_conditional311=self!=((void*)0),            _if_conditional311) {
                result_222->mGenerics=self->mGenerics;
            }
            if(_if_conditional312=self!=((void*)0),            _if_conditional312) {
                result_222->mMethodGenerics=self->mMethodGenerics;
            }
            if(_if_conditional313=self!=((void*)0),            _if_conditional313) {
                result_222->mEnum=self->mEnum;
            }
            if(_if_conditional314=self!=((void*)0),            _if_conditional314) {
                result_222->mProtocol=self->mProtocol;
            }
            if(_if_conditional315=self!=((void*)0),            _if_conditional315) {
                result_222->mNumber=self->mNumber;
            }
            if(_if_conditional316=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional316) {
                __dec_obj90=result_222->mName;
                result_222->mName=(char*)come_increment_ref_count(((char*)(right_value273=string_clone(self->mName))));
                __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional317=self!=((void*)0),            _if_conditional317) {
                result_222->mGenericsNum=self->mGenericsNum;
            }
            if(_if_conditional318=self!=((void*)0),            _if_conditional318) {
                result_222->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(_if_conditional319=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional319) {
                __dec_obj96=result_222->mFields;
                result_222->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value283=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional326=self!=((void*)0),            _if_conditional326) {
                result_222->mOutputed=self->mOutputed;
            }
            if(_if_conditional327=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional327) {
                __dec_obj97=result_222->mDeclareSName;
                result_222->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value284=string_clone(self->mDeclareSName))));
                __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result145__ = __result_obj__ = result_222;
            come_call_finalizer2(sClass_finalize,result_222, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result145__;
            come_call_finalizer2(sClass_finalize,result_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional320;
struct list$1tuple2$2charphsTypephph* __result140__;
void* right_value274;
void* right_value275;
struct list$1tuple2$2charphsTypephph* result_223;
struct list_item$1tuple2$2charphsTypephph* it_224;
_Bool _while_condtional30;
void* right_value282;
struct list$1tuple2$2charphsTypephph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&result_223, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_224, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value282 = (void*)0;
                    if(_if_conditional320=self==((void*)0),                    _if_conditional320) {
                        __result140__ = __result_obj__ = ((void*)0);
                        return __result140__;
                    }
                    result_223=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value275=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value274=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_224=self->head;
                    while(_while_condtional30=it_224!=((void*)0),                    _while_condtional30) {
                        list$1tuple2$2charphsTypephph_add(result_223,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value282=tuple2$2charphsTypephp_clone(it_224->item)))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_224=it_224->next;
                    }
                    __result144__ = __result_obj__ = result_223;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_223, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result144__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional321;
void* right_value276;
struct list_item$1tuple2$2charphsTypephph* litem_225;
struct tuple2$2charphsTypeph* __dec_obj91;
_Bool _if_conditional322;
void* right_value277;
struct list_item$1tuple2$2charphsTypephph* litem_226;
struct tuple2$2charphsTypeph* __dec_obj92;
void* right_value278;
struct list_item$1tuple2$2charphsTypephph* litem_227;
struct tuple2$2charphsTypeph* __dec_obj93;
struct list$1tuple2$2charphsTypephph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&litem_225, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value277 = (void*)0;
memset(&litem_226, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value278 = (void*)0;
memset(&litem_227, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional321=self->len==0,                            _if_conditional321) {
                                litem_225=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value276=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_225->prev=((void*)0);
                                litem_225->next=((void*)0);
                                __dec_obj91=litem_225->item;
                                litem_225->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_225;
                                self->head=litem_225;
                            }
                            else {
                                if(_if_conditional322=self->len==1,                                _if_conditional322) {
                                    litem_226=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value277=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_226->prev=self->head;
                                    litem_226->next=((void*)0);
                                    __dec_obj92=litem_226->item;
                                    litem_226->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_226;
                                    self->head->next=litem_226;
                                }
                                else {
                                    litem_227=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value278=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_227->prev=self->tail;
                                    litem_227->next=((void*)0);
                                    __dec_obj93=litem_227->item;
                                    litem_227->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_227;
                                    self->tail=litem_227;
                                }
                            }
                            self->len++;
                            __result141__ = __result_obj__ = self;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result141__;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional323;
struct tuple2$2charphsTypeph* __result142__;
void* right_value279;
struct tuple2$2charphsTypeph* result_228;
_Bool _if_conditional324;
void* right_value280;
char* __dec_obj94;
_Bool _if_conditional325;
void* right_value281;
struct sType* __dec_obj95;
struct tuple2$2charphsTypeph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
memset(&result_228, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value280 = (void*)0;
right_value281 = (void*)0;
                            if(_if_conditional323=self==(void*)0,                            _if_conditional323) {
                                __result142__ = __result_obj__ = (void*)0;
                                return __result142__;
                            }
                            result_228=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value279=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional324=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional324) {
                                __dec_obj94=result_228->v1;
                                result_228->v1=(char*)come_increment_ref_count(((char*)(right_value280=string_clone(self->v1))));
                                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional325=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional325) {
                                __dec_obj95=result_228->v2;
                                result_228->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=sType_clone(self->v2))));
                                come_call_finalizer2(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                            __result143__ = __result_obj__ = result_228;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_228, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result143__;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void init_module(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
void* right_value286;
char* project_name_229;
void* right_value287;
void* right_value288;
void* right_value289;
char* project_name_debug_230;
void* right_value290;
char* cc_231;
void* right_value291;
char* install_232;
void* right_value292;
char* libs_233;
void* right_value293;
char* os_234;
void* right_value294;
char* prefix_235;
void* right_value295;
char* cflags_236;
void* right_value296;
char* cflags_debug_237;
_Bool _or_conditional1;
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
void* right_value322;
void* right_value323;
void* right_value324;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
memset(&project_name_229, 0, sizeof(char*));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&project_name_debug_230, 0, sizeof(char*));
right_value290 = (void*)0;
memset(&cc_231, 0, sizeof(char*));
right_value291 = (void*)0;
memset(&install_232, 0, sizeof(char*));
right_value292 = (void*)0;
memset(&libs_233, 0, sizeof(char*));
right_value293 = (void*)0;
memset(&os_234, 0, sizeof(char*));
right_value294 = (void*)0;
memset(&prefix_235, 0, sizeof(char*));
right_value295 = (void*)0;
memset(&cflags_236, 0, sizeof(char*));
right_value296 = (void*)0;
memset(&cflags_debug_237, 0, sizeof(char*));
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
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
    project_name_229=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string(argv[2]))));
    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    project_name_debug_230=(char*)come_increment_ref_count(((char*)(right_value289=string_operator_add(((char*)(right_value287=__builtin_string(argv[2]))),((char*)(right_value288=__builtin_string("-debug")))))));
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cc_231=(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string("comelang2"))));
    right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    install_232=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string("install"))));
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    libs_233=(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string("-lpcre"))));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    os_234=(char*)come_increment_ref_count(((char*)(right_value293=__builtin_string("linux"))));
    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    prefix_235=(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string("/usr/local/"))));
    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cflags_236=(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string(" -common-header -O2 "))));
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cflags_debug_237=(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_or_conditional1=mkdir(project_name_229,448|56|4|1),    _or_conditional1 != 0) {
        die("mkdir error");
    }
    charp_write(((char*)(right_value322=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: common.h \%s\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c header\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader:\n\tcomelang2 header $(SINGLE_SRCS)\n\ncommon.h: *.c\n\tbash -c 'shopt -s extglob; comelang2 header !(*.c).c'\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm *.log\n\t./\%s\n\ndebug: \%s\n\trm *.log\n\t./\%s\n",((char*)(right_value297=string_to_string(prefix_235))),((char*)(right_value298=string_to_string(project_name_229))),((char*)(right_value299=string_to_string(project_name_229))),((char*)(right_value300=string_to_string(project_name_229))),((char*)(right_value301=string_to_string(project_name_229))),((char*)(right_value302=string_to_string(cc_231))),((char*)(right_value303=string_to_string(install_232))),((char*)(right_value304=string_to_string(cflags_236))),((char*)(right_value305=string_to_string(cflags_debug_237))),((char*)(right_value306=string_to_string(libs_233))),((char*)(right_value307=string_to_string(os_234))),((char*)(right_value308=string_to_string(prefix_235))),((char*)(right_value309=string_to_string(project_name_229))),((char*)(right_value310=string_to_string(project_name_debug_230))),((char*)(right_value311=string_to_string(project_name_229))),((char*)(right_value312=string_to_string(project_name_229))),((char*)(right_value313=string_to_string(project_name_229))),((char*)(right_value314=string_to_string(project_name_229))),((char*)(right_value315=string_to_string(project_name_229))),((char*)(right_value316=string_to_string(project_name_229))),((char*)(right_value317=string_to_string(project_name_229))),((char*)(right_value318=string_to_string(project_name_229))),((char*)(right_value319=string_to_string(project_name_229))),((char*)(right_value320=string_to_string(project_name_debug_230))),((char*)(right_value321=string_to_string(project_name_debug_230)))))),((char*)(right_value324=xsprintf("\%s/Makefile",((char*)(right_value323=string_to_string(project_name_229)))))),(_Bool)0);
    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result146__ = (_Bool)1;
    project_name_229 = come_decrement_ref_count2(project_name_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_230 = come_decrement_ref_count2(project_name_debug_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_231 = come_decrement_ref_count2(cc_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_232 = come_decrement_ref_count2(install_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_233 = come_decrement_ref_count2(libs_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_234 = come_decrement_ref_count2(os_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_235 = come_decrement_ref_count2(prefix_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_236 = come_decrement_ref_count2(cflags_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_237 = come_decrement_ref_count2(cflags_debug_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result146__;
    project_name_229 = come_decrement_ref_count2(project_name_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_230 = come_decrement_ref_count2(project_name_debug_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_231 = come_decrement_ref_count2(cc_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_232 = come_decrement_ref_count2(install_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_233 = come_decrement_ref_count2(libs_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_234 = come_decrement_ref_count2(os_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_235 = come_decrement_ref_count2(prefix_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_236 = come_decrement_ref_count2(cflags_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_237 = come_decrement_ref_count2(cflags_debug_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional2;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional2=system("make run"),    _or_conditional2 != 0) {
        die("system");
    }
    __result147__ = (_Bool)1;
    return __result147__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional3;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional3=system("make debug"),    _or_conditional3 != 0) {
        die("system");
    }
    __result148__ = (_Bool)1;
    return __result148__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional4;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional4=system("make clean"),    _or_conditional4 != 0) {
        die("system");
    }
    __result149__ = (_Bool)1;
    return __result149__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
void* right_value325;
void* right_value326;
_Bool _or_conditional5;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value325 = (void*)0;
right_value326 = (void*)0;
    if(_or_conditional5=system(((char*)(right_value326=xsprintf("make install DESTDIR=\%s",((char*)(right_value325=charp_to_string(prefix))))))),    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _or_conditional5 != 0) {
        die("system");
    }
    __result150__ = (_Bool)1;
    return __result150__;
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool _if_conditional328;
void* right_value327;
void* right_value328;
struct buffer* clang_option_238;
void* right_value329;
void* right_value330;
struct buffer* cpp_option_239;
void* right_value331;
void* right_value332;
struct list$1charph* files_240;
void* right_value333;
void* right_value334;
struct list$1charph* object_files_241;
_Bool output_object_file_242;
_Bool output_cpp_file_243;
_Bool output_source_file_flag_244;
void* right_value335;
char* output_file_name_245;
_Bool verbose_246;
_Bool prohibit_common_header_247;
_Bool come_debug_248;
_Bool come_malloc_249;
_Bool come_str_250;
int i_251;
_Bool _if_conditional329;
void* right_value336;
char* __dec_obj98;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
void* right_value337;
_Bool _if_conditional337;
void* right_value338;
void* right_value339;
void* right_value340;
_Bool _if_conditional338;
void* right_value341;
void* right_value342;
void* right_value343;
void* right_value344;
_Bool _if_conditional339;
_Bool _if_conditional340;
void* right_value345;
void* right_value346;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
void* right_value347;
_Bool _if_conditional346;
void* right_value348;
void* right_value349;
_Bool _if_conditional347;
_Bool _if_conditional348;
struct __sFILE* f_252;
_Bool _and_conditional1;
_Bool _or_conditional6;
struct list$1charph* o2_saved_253;
char* it_254;
struct sInfo info_255;
void* right_value350;
char* __dec_obj99;
void* right_value351;
char* __dec_obj100;
void* right_value352;
char* __dec_obj101;
void* right_value353;
char* __dec_obj102;
void* right_value354;
void* right_value360;
struct map$2charphsFunph* __dec_obj104;
void* right_value361;
void* right_value367;
struct map$2charphsGenericsFunph* __dec_obj106;
void* right_value368;
void* right_value374;
struct map$2charphsClassph* __dec_obj108;
void* right_value375;
void* right_value381;
struct map$2charphsTypeph* __dec_obj110;
void* right_value382;
void* right_value383;
struct sModule* __dec_obj111;
void* right_value384;
void* right_value385;
struct list$1sRightValueObjectph* __dec_obj112;
void* right_value386;
void* right_value387;
struct list$1CVALUEph* __dec_obj113;
void* right_value388;
void* right_value389;
struct sVarTable* __dec_obj114;
void* right_value390;
void* right_value391;
struct sVarTable* lv_table_272;
void* right_value392;
void* right_value393;
struct list$1charph* __dec_obj115;
void* right_value394;
void* right_value395;
struct map$2charphsClassph* __dec_obj116;
static int n_273=0;
void* right_value396;
char* __dec_obj117;
_Bool _if_conditional386;
void* right_value397;
void* right_value398;
void* right_value399;
struct buffer* __dec_obj118;
void* right_value400;
void* right_value401;
void* right_value402;
struct buffer* __dec_obj119;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional415;
_Bool _if_conditional416;
int __result158__;
_Bool _if_conditional417;
_Bool _if_conditional418;
int __result159__;
_Bool _if_conditional419;
_Bool _if_conditional420;
int __result160__;
_Bool _if_conditional421;
_Bool _if_conditional422;
int __result161__;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
int __result162__;
_Bool _if_conditional426;
_Bool _if_conditional427;
int __result163__;
void* right_value403;
void* right_value404;
struct buffer* clang_option_274;
void* right_value405;
void* right_value406;
struct buffer* cpp_option_275;
void* right_value407;
void* right_value408;
struct list$1charph* files_276;
void* right_value409;
void* right_value410;
struct list$1charph* object_files_277;
_Bool output_object_file_278;
_Bool output_cpp_file_279;
_Bool output_source_file_flag_280;
char* output_file_name_281;
_Bool verbose_282;
_Bool come_debug_283;
_Bool come_malloc_284;
_Bool come_str_285;
int i_286;
_Bool _if_conditional428;
void* right_value411;
char* __dec_obj120;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value412;
_Bool _if_conditional435;
void* right_value413;
void* right_value414;
void* right_value415;
_Bool _if_conditional436;
void* right_value416;
void* right_value417;
void* right_value418;
void* right_value419;
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool _if_conditional439;
void* right_value420;
void* right_value421;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
_Bool _if_conditional444;
void* right_value422;
_Bool _if_conditional445;
void* right_value423;
void* right_value424;
void* right_value425;
_Bool _if_conditional446;
_Bool _if_conditional447;
struct list$1charph* o2_saved_287;
char* it_288;
struct sInfo info_289;
void* right_value426;
char* __dec_obj121;
void* right_value427;
char* __dec_obj122;
void* right_value428;
char* __dec_obj123;
void* right_value429;
void* right_value430;
struct map$2charphsFunph* __dec_obj124;
void* right_value431;
void* right_value432;
struct map$2charphsGenericsFunph* __dec_obj125;
void* right_value433;
void* right_value434;
struct map$2charphsClassph* __dec_obj126;
void* right_value435;
void* right_value436;
struct map$2charphsTypeph* __dec_obj127;
void* right_value437;
void* right_value438;
struct sModule* __dec_obj128;
void* right_value439;
void* right_value440;
struct list$1sRightValueObjectph* __dec_obj129;
void* right_value441;
void* right_value442;
struct list$1CVALUEph* __dec_obj130;
void* right_value443;
void* right_value444;
struct sVarTable* __dec_obj131;
void* right_value445;
void* right_value446;
struct sVarTable* lv_table_290;
void* right_value447;
void* right_value448;
struct list$1charph* __dec_obj132;
void* right_value449;
void* right_value450;
struct map$2charphsClassph* __dec_obj133;
_Bool _if_conditional448;
void* right_value451;
void* right_value452;
void* right_value453;
struct buffer* __dec_obj134;
void* right_value454;
void* right_value455;
void* right_value456;
struct buffer* __dec_obj135;
_Bool _if_conditional449;
void* right_value457;
char* __dec_obj136;
char* __dec_obj137;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
struct sInfo info_291;
void* right_value458;
void* right_value459;
char* __dec_obj138;
void* right_value460;
char* __dec_obj139;
_Bool _if_conditional457;
void* right_value461;
char* __dec_obj140;
char* __dec_obj141;
struct __current_stack2__ __current_stack2__;
int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&clang_option_238, 0, sizeof(struct buffer*));
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&cpp_option_239, 0, sizeof(struct buffer*));
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&files_240, 0, sizeof(struct list$1charph*));
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&object_files_241, 0, sizeof(struct list$1charph*));
memset(&output_object_file_242, 0, sizeof(_Bool));
memset(&output_cpp_file_243, 0, sizeof(_Bool));
memset(&output_source_file_flag_244, 0, sizeof(_Bool));
right_value335 = (void*)0;
memset(&output_file_name_245, 0, sizeof(char*));
memset(&verbose_246, 0, sizeof(_Bool));
memset(&prohibit_common_header_247, 0, sizeof(_Bool));
memset(&come_debug_248, 0, sizeof(_Bool));
memset(&come_malloc_249, 0, sizeof(_Bool));
memset(&come_str_250, 0, sizeof(_Bool));
memset(&i_251, 0, sizeof(int));
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
memset(&f_252, 0, sizeof(struct __sFILE*));
memset(&o2_saved_253, 0, sizeof(struct list$1charph*));
memset(&it_254, 0, sizeof(char*));
memset(&info_255, 0, sizeof(struct sInfo));
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
memset(&lv_table_272, 0, sizeof(struct sVarTable*));
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
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
memset(&clang_option_274, 0, sizeof(struct buffer*));
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&cpp_option_275, 0, sizeof(struct buffer*));
right_value407 = (void*)0;
right_value408 = (void*)0;
memset(&files_276, 0, sizeof(struct list$1charph*));
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&object_files_277, 0, sizeof(struct list$1charph*));
memset(&output_object_file_278, 0, sizeof(_Bool));
memset(&output_cpp_file_279, 0, sizeof(_Bool));
memset(&output_source_file_flag_280, 0, sizeof(_Bool));
memset(&output_file_name_281, 0, sizeof(char*));
memset(&verbose_282, 0, sizeof(_Bool));
memset(&come_debug_283, 0, sizeof(_Bool));
memset(&come_malloc_284, 0, sizeof(_Bool));
memset(&come_str_285, 0, sizeof(_Bool));
memset(&i_286, 0, sizeof(int));
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
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
memset(&o2_saved_287, 0, sizeof(struct list$1charph*));
memset(&it_288, 0, sizeof(char*));
memset(&info_289, 0, sizeof(struct sInfo));
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
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
memset(&lv_table_290, 0, sizeof(struct sVarTable*));
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
memset(&info_291, 0, sizeof(struct sInfo));
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(_if_conditional328=charp_operator_equals(argv[1],"header")&&argc>=3,    _if_conditional328) {
        gProgramName=argv[0];
        clang_option_238=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value328=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value327=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 623, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        cpp_option_239=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value330=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value329=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 624, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        files_240=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value332=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value331=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 625, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        object_files_241=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value334=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value333=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 626, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        output_object_file_242=(_Bool)0;
        output_cpp_file_243=(_Bool)0;
        output_source_file_flag_244=(_Bool)0;
        output_file_name_245=(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string("common.h"))));
        right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        verbose_246=(_Bool)0;
        prohibit_common_header_247=(_Bool)0;
        come_debug_248=(_Bool)0;
        come_malloc_249=(_Bool)0;
        come_str_250=(_Bool)0;
        for(        i_251=2;        i_251<argc;        i_251++        ){
            if(_if_conditional329=charp_operator_equals(argv[i_251],"-o")&&i_251+1<argc,            _if_conditional329) {
                __dec_obj98=output_file_name_245;
                output_file_name_245=(char*)come_increment_ref_count(((char*)(right_value336=__builtin_string(argv[i_251+1]))));
                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                i_251++;
            }
            else {
                if(_if_conditional330=charp_operator_equals(argv[i_251],"-str"),                _if_conditional330) {
                    come_str_250=(_Bool)1;
                }
                else {
                    if(_if_conditional331=charp_operator_equals(argv[i_251],"-leak"),                    _if_conditional331) {
                        come_malloc_249=(_Bool)1;
                    }
                    else {
                        if(_if_conditional332=charp_operator_equals(argv[i_251],"-gc"),                        _if_conditional332) {
                            gComeGC=(_Bool)1;
                        }
                        else {
                            if(_if_conditional333=charp_operator_equals(argv[i_251],"-g"),                            _if_conditional333) {
                                buffer_append_str(clang_option_238,"-g ");
                            }
                            else {
                                if(_if_conditional334=charp_operator_equals(argv[i_251],"-cg"),                                _if_conditional334) {
                                    buffer_append_str(clang_option_238,"-g ");
                                    come_debug_248=(_Bool)1;
                                }
                                else {
                                    if(_if_conditional335=charp_operator_equals(argv[i_251],"-common-header"),                                    _if_conditional335) {
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional336=charp_operator_equals(argv[i_251],"-original-position"),                                        _if_conditional336) {
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            if(_if_conditional337=string_operator_equals(((char*)(right_value337=charp_operator_load_range_element(argv[i_251],0,2))),"-O"),                                            right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                            _if_conditional337) {
                                                buffer_append_str(clang_option_238,((char*)(right_value339=xsprintf(" \%s ",((char*)(right_value338=charp_to_string(argv[i_251])))))));
                                                right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                come_debug_248=(_Bool)0;
                                            }
                                            else {
                                                if(_if_conditional338=string_operator_equals(((char*)(right_value340=charp_operator_load_range_element(argv[i_251],0,2))),"-D"),                                                right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                _if_conditional338) {
                                                    buffer_append_str(cpp_option_239,((char*)(right_value342=xsprintf(" \%s ",((char*)(right_value341=charp_to_string(argv[i_251])))))));
                                                    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    buffer_append_str(clang_option_238,((char*)(right_value344=xsprintf(" \%s ",((char*)(right_value343=charp_to_string(argv[i_251])))))));
                                                    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    if(_if_conditional339=charp_operator_equals(argv[i_251],"-v"),                                                    _if_conditional339) {
                                                        buffer_append_str(clang_option_238,"-v ");
                                                        verbose_246=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional340=strlen(argv[i_251])>=2&&memcmp(argv[i_251],"-I",strlen("-I"))==0,                                                        _if_conditional340) {
                                                            buffer_append_str(cpp_option_239,((char*)(right_value346=charp_operator_add(" ",((char*)(right_value345=charp_operator_add(argv[i_251]," ")))))));
                                                            right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            if(_if_conditional341=charp_operator_equals(argv[i_251],"-gdwarf-4"),                                                            _if_conditional341) {
                                                                buffer_append_str(clang_option_238,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                if(_if_conditional342=charp_operator_equals(argv[i_251],"-s")||charp_operator_equals(argv[i_251],"-S"),                                                                _if_conditional342) {
                                                                    output_source_file_flag_244=(_Bool)1;
                                                                }
                                                                else {
                                                                    if(_if_conditional343=charp_operator_equals(argv[i_251],"-c"),                                                                    _if_conditional343) {
                                                                        output_object_file_242=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional344=charp_operator_equals(argv[i_251],"-E"),                                                                        _if_conditional344) {
                                                                            output_cpp_file_243=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional345=argv[i_251][0]==45,                                                                            _if_conditional345) {
                                                                                buffer_append_str(clang_option_238,((char*)(right_value347=charp_operator_add(argv[i_251]," "))));
                                                                                right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                if(_if_conditional346=strlen(argv[i_251])>2&&memcmp(argv[i_251]+strlen(argv[i_251])-2,".o",2)==0,                                                                                _if_conditional346) {
                                                                                    list$1charph_push_back(object_files_241,(char*)come_increment_ref_count(((char*)(right_value348=__builtin_string(argv[i_251])))));
                                                                                    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    list$1charph_push_back(files_240,(char*)come_increment_ref_count(((char*)(right_value349=__builtin_string(argv[i_251])))));
                                                                                    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
        gComeDebug=come_debug_248;
        gComeMalloc=come_malloc_249;
        if(come_str_250) {
            if(gComeGC) {
                buffer_append_str(clang_option_238," -lcomelang2-str-gc -lpcre ");
            }
            else {
                buffer_append_str(clang_option_238," -lcomelang2-str -lpcre ");
            }
        }
        if(_and_conditional1=f_252=fopen(output_file_name_245,"w"),        _and_conditional1 == 0) {
            die("fopen");
        }
        fclose(f_252);
        if(_or_conditional6=truncate(output_file_name_245,0),        _or_conditional6 != 0) {
            die("truncate");
        }
        come_init_v5();
        for(        o2_saved_253=(struct list$1charph*)come_increment_ref_count((files_240)),it_254=list$1charph_begin((o2_saved_253));        !list$1charph_end((o2_saved_253));        it_254=list$1charph_next((o2_saved_253))        ){
            memset(&info_255,0,sizeof(struct sInfo));
            __dec_obj99=info_255.base_sname;
            info_255.base_sname=(char*)come_increment_ref_count(((char*)(right_value350=__builtin_string(it_254))));
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj100=info_255.sname;
            info_255.sname=(char*)come_increment_ref_count(((char*)(right_value351=__builtin_string(it_254))));
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info_255.sline=1;
            info_255.err_num=0;
            __dec_obj101=info_255.clang_option;
            info_255.clang_option=(char*)come_increment_ref_count(((char*)(right_value352=buffer_to_string(clang_option_238))));
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj102=info_255.cpp_option;
            info_255.cpp_option=(char*)come_increment_ref_count(((char*)(right_value353=buffer_to_string(cpp_option_239))));
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info_255.no_output_err=(_Bool)0;
            __dec_obj104=info_255.funcs;
            info_255.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value360=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value354=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 732, "struct map$2charphsFunph"))))))));
            come_call_finalizer2(map$2charphsFunph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphsFunphp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(map$2charphsFunphp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj106=info_255.generics_funcs;
            info_255.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value367=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value361=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 733, "struct map$2charphsGenericsFunph"))))))));
            come_call_finalizer2(map$2charphsGenericsFunph_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj108=info_255.classes;
            info_255.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value374=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value368=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 734, "struct map$2charphsClassph"))))))));
            come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphsClassphp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(map$2charphsClassphp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj110=info_255.types;
            info_255.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value381=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value375=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 735, "struct map$2charphsTypeph"))))))));
            come_call_finalizer2(map$2charphsTypeph_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphsTypephp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(map$2charphsTypephp_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj111=info_255.module;
            info_255.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value383=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value382=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 736, "struct sModule"))))))));
            come_call_finalizer2(sModule_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sModule_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sModule_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj112=info_255.right_value_objects;
            info_255.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value385=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value384=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 737, "struct list$1sRightValueObjectph"))))))));
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj113=info_255.stack;
            info_255.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value387=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value386=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 738, "struct list$1CVALUEph"))))))));
            come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj114=info_255.gv_table;
            info_255.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value389=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value388=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 739, "struct sVarTable")))),(_Bool)1,((void*)0)))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sVarTable_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            lv_table_272=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value391=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value390=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 740, "struct sVarTable")))),(_Bool)0,((void*)0)))));
            come_call_finalizer2(sVarTable_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sVarTable_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info_255.lv_table=lv_table_272;
            __dec_obj115=info_255.generics_type_names;
            info_255.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value393=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value392=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 742, "struct list$1charph"))))))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj116=info_255.generics_classes;
            info_255.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value395=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value394=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 743, "struct map$2charphsClassph"))))))));
            come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphsClassphp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(map$2charphsClassphp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info_255.verbose=verbose_246;
            info_255.output_header_file=(_Bool)1;
            info_255.num_source_files=n_273++;
            info_255.max_source_files=list$1charph_length(files_240);
            __dec_obj117=info_255.output_file_name;
            info_255.output_file_name=(char*)come_increment_ref_count(((char*)(right_value396=__builtin_string(output_file_name_245))));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            init_classes(&info_255);
            init_module(&info_255);
            clear_tmp_file(&info_255);
            if(_if_conditional386=!cpp(&info_255),            _if_conditional386) {
                printf("%s %d: transpile failed\n",info_255.sname,info_255.sline);
                exit(2);
            }
            __dec_obj118=info_255.original_source;
            info_255.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value399=string_to_buffer(((char*)(right_value398=string_read(((char*)(right_value397=xsprintf("%s",it_254))))))))));
            come_call_finalizer2(buffer_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj119=info_255.source;
            info_255.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value402=string_to_buffer(((char*)(right_value401=string_read(((char*)(right_value400=xsprintf("%s.i",it_254))))))))));
            come_call_finalizer2(buffer_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info_255.p=info_255.source->buf;
            info_255.head=info_255.source->buf;
            if(_if_conditional387=!output_cpp_file_243,            _if_conditional387) {
                transpile_v5(&info_255);
                if(_if_conditional388=!output_header_file(&info_255),                _if_conditional388) {
                    printf("%s %d: output source file faield\n",info_255.sname,info_255.sline);
                    exit(2);
                }
            }
            come_call_finalizer2(sInfo_finalize,(&info_255), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,lv_table_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1charphp_finalize,o2_saved_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_final_v5();
        come_call_finalizer2(buffer_finalize,clang_option_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,cpp_option_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,files_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,object_files_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        output_file_name_245 = come_decrement_ref_count2(output_file_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional415=charp_operator_equals(argv[1],"new")&&argc==3,        _if_conditional415) {
            if(_if_conditional416=!new_project(argc,argv),            _if_conditional416) {
                __result158__ = (_Bool)0;
                return __result158__;
            }
        }
        else {
            if(_if_conditional417=charp_operator_equals(argv[1],"run")&&argc==2,            _if_conditional417) {
                if(_if_conditional418=!run_project(argc,argv),                _if_conditional418) {
                    __result159__ = (_Bool)0;
                    return __result159__;
                }
            }
            else {
                if(_if_conditional419=charp_operator_equals(argv[1],"debug")&&argc==2,                _if_conditional419) {
                    if(_if_conditional420=!debug_run_project(argc,argv),                    _if_conditional420) {
                        __result160__ = (_Bool)0;
                        return __result160__;
                    }
                }
                else {
                    if(_if_conditional421=charp_operator_equals(argv[1],"clean")&&argc==2,                    _if_conditional421) {
                        if(_if_conditional422=!clean_project(argc,argv),                        _if_conditional422) {
                            __result161__ = (_Bool)0;
                            return __result161__;
                        }
                    }
                    else {
                        if(_if_conditional423=charp_operator_equals(argv[1],"install")&&argc>=2,                        _if_conditional423) {
                            if(_if_conditional424=argc==2,                            _if_conditional424) {
                                if(_if_conditional425=!install_project(argc,argv,"/usr/local"),                                _if_conditional425) {
                                    __result162__ = (_Bool)0;
                                    return __result162__;
                                }
                            }
                            else {
                                if(_if_conditional426=argc>=3,                                _if_conditional426) {
                                    if(_if_conditional427=!install_project(argc,argv,argv[2]),                                    _if_conditional427) {
                                        __result163__ = (_Bool)0;
                                        return __result163__;
                                    }
                                }
                            }
                        }
                        else {
                            gProgramName=argv[0];
                            clang_option_274=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value404=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value403=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 815, "struct buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            cpp_option_275=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value406=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value405=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 816, "struct buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            files_276=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value408=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value407=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 817, "struct list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            object_files_277=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value410=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value409=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 818, "struct list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            output_object_file_278=(_Bool)0;
                            output_cpp_file_279=(_Bool)0;
                            output_source_file_flag_280=(_Bool)0;
                            output_file_name_281=((void*)0);
                            verbose_282=(_Bool)0;
                            come_debug_283=(_Bool)0;
                            come_malloc_284=(_Bool)0;
                            come_str_285=(_Bool)0;
                            for(                            i_286=1;                            i_286<argc;                            i_286++                            ){
                                if(_if_conditional428=charp_operator_equals(argv[i_286],"-o")&&i_286+1<argc,                                _if_conditional428) {
                                    __dec_obj120=output_file_name_281;
                                    output_file_name_281=(char*)come_increment_ref_count(((char*)(right_value411=__builtin_string(argv[i_286+1]))));
                                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    i_286++;
                                }
                                else {
                                    if(_if_conditional429=charp_operator_equals(argv[i_286],"-str"),                                    _if_conditional429) {
                                        come_str_285=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional430=charp_operator_equals(argv[i_286],"-leak"),                                        _if_conditional430) {
                                            come_malloc_284=(_Bool)1;
                                        }
                                        else {
                                            if(_if_conditional431=charp_operator_equals(argv[i_286],"-gc"),                                            _if_conditional431) {
                                                gComeGC=(_Bool)1;
                                            }
                                            else {
                                                if(_if_conditional432=charp_operator_equals(argv[i_286],"-cg"),                                                _if_conditional432) {
                                                    come_debug_283=(_Bool)1;
                                                    buffer_append_str(clang_option_274,"-g ");
                                                }
                                                else {
                                                    if(_if_conditional433=charp_operator_equals(argv[i_286],"-common-header"),                                                    _if_conditional433) {
                                                        gCommonHeader=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional434=charp_operator_equals(argv[i_286],"-original-position"),                                                        _if_conditional434) {
                                                            gComeOriginalSourcePosition=(_Bool)0;
                                                        }
                                                        else {
                                                            if(_if_conditional435=string_operator_equals(((char*)(right_value412=charp_operator_load_range_element(argv[i_286],0,2))),"-O"),                                                            right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                            _if_conditional435) {
                                                                buffer_append_str(clang_option_274,((char*)(right_value414=xsprintf(" \%s ",((char*)(right_value413=charp_to_string(argv[i_286])))))));
                                                                right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                come_debug_283=(_Bool)0;
                                                            }
                                                            else {
                                                                if(_if_conditional436=string_operator_equals(((char*)(right_value415=charp_operator_load_range_element(argv[i_286],0,2))),"-D"),                                                                right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                _if_conditional436) {
                                                                    buffer_append_str(cpp_option_275,((char*)(right_value417=xsprintf(" \%s ",((char*)(right_value416=charp_to_string(argv[i_286])))))));
                                                                    right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    buffer_append_str(clang_option_274,((char*)(right_value419=xsprintf(" \%s ",((char*)(right_value418=charp_to_string(argv[i_286])))))));
                                                                    right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    if(_if_conditional437=charp_operator_equals(argv[i_286],"-g"),                                                                    _if_conditional437) {
                                                                        buffer_append_str(clang_option_274,"-g ");
                                                                    }
                                                                    else {
                                                                        if(_if_conditional438=charp_operator_equals(argv[i_286],"-v"),                                                                        _if_conditional438) {
                                                                            buffer_append_str(clang_option_274,"-v ");
                                                                            verbose_282=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional439=strlen(argv[i_286])>=2&&memcmp(argv[i_286],"-I",strlen("-I"))==0,                                                                            _if_conditional439) {
                                                                                buffer_append_str(cpp_option_275,((char*)(right_value421=charp_operator_add(" ",((char*)(right_value420=charp_operator_add(argv[i_286]," ")))))));
                                                                                right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                if(_if_conditional440=charp_operator_equals(argv[i_286],"-gdwarf-4"),                                                                                _if_conditional440) {
                                                                                    buffer_append_str(clang_option_274,"-gdwarf-4 ");
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional441=charp_operator_equals(argv[i_286],"-s")||charp_operator_equals(argv[i_286],"-S"),                                                                                    _if_conditional441) {
                                                                                        output_source_file_flag_280=(_Bool)1;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional442=charp_operator_equals(argv[i_286],"-c"),                                                                                        _if_conditional442) {
                                                                                            output_object_file_278=(_Bool)1;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional443=charp_operator_equals(argv[i_286],"-E"),                                                                                            _if_conditional443) {
                                                                                                output_cpp_file_279=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional444=argv[i_286][0]==45,                                                                                                _if_conditional444) {
                                                                                                    buffer_append_str(clang_option_274,((char*)(right_value422=charp_operator_add(argv[i_286]," "))));
                                                                                                    right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional445=strlen(argv[i_286])>2&&memcmp(argv[i_286]+strlen(argv[i_286])-2,".o",2)==0,                                                                                                    _if_conditional445) {
                                                                                                        list$1charph_push_back(object_files_277,(char*)come_increment_ref_count(((char*)(right_value423=__builtin_string(argv[i_286])))));
                                                                                                        right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    else {
                                                                                                        list$1charph_push_back(files_276,(char*)come_increment_ref_count(((char*)(right_value425=string_clone(((char*)(right_value424=__builtin_string(argv[i_286]))))))));
                                                                                                        right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                            gComeDebug=come_debug_283;
                            gComeMalloc=come_malloc_284;
                            if(come_str_285) {
                                if(gComeGC) {
                                    buffer_append_str(clang_option_274," -lcomelang2-str-gc -lpcre ");
                                }
                                else {
                                    buffer_append_str(clang_option_274," -lcomelang2-str -lpcre ");
                                }
                            }
                            come_init_v5();
                            for(                            o2_saved_287=(struct list$1charph*)come_increment_ref_count((files_276)),it_288=list$1charph_begin((o2_saved_287));                            !list$1charph_end((o2_saved_287));                            it_288=list$1charph_next((o2_saved_287))                            ){
                                memset(&info_289,0,sizeof(struct sInfo));
                                __dec_obj121=info_289.sname;
                                info_289.sname=(char*)come_increment_ref_count(((char*)(right_value426=__builtin_string(it_288))));
                                __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                info_289.sline=1;
                                info_289.err_num=0;
                                __dec_obj122=info_289.clang_option;
                                info_289.clang_option=(char*)come_increment_ref_count(((char*)(right_value427=buffer_to_string(clang_option_274))));
                                __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj123=info_289.cpp_option;
                                info_289.cpp_option=(char*)come_increment_ref_count(((char*)(right_value428=buffer_to_string(cpp_option_275))));
                                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                info_289.no_output_err=(_Bool)0;
                                __dec_obj124=info_289.funcs;
                                info_289.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value430=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value429=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 917, "struct map$2charphsFunph"))))))));
                                come_call_finalizer2(map$2charphsFunph_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsFunphp_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsFunphp_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj125=info_289.generics_funcs;
                                info_289.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value432=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value431=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 918, "struct map$2charphsGenericsFunph"))))))));
                                come_call_finalizer2(map$2charphsGenericsFunph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj126=info_289.classes;
                                info_289.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value434=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value433=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 919, "struct map$2charphsClassph"))))))));
                                come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj127=info_289.types;
                                info_289.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value436=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value435=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 920, "struct map$2charphsTypeph"))))))));
                                come_call_finalizer2(map$2charphsTypeph_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsTypephp_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsTypephp_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj128=info_289.module;
                                info_289.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value438=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value437=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 921, "struct sModule"))))))));
                                come_call_finalizer2(sModule_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sModule_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sModule_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj129=info_289.right_value_objects;
                                info_289.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value440=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value439=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 922, "struct list$1sRightValueObjectph"))))))));
                                come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj130=info_289.stack;
                                info_289.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value442=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value441=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 923, "struct list$1CVALUEph"))))))));
                                come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1CVALUEphp_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1CVALUEphp_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj131=info_289.gv_table;
                                info_289.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value444=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value443=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 924, "struct sVarTable")))),(_Bool)1,((void*)0)))));
                                come_call_finalizer2(sVarTable_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sVarTable_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sVarTable_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                lv_table_290=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value446=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value445=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 925, "struct sVarTable")))),(_Bool)0,((void*)0)))));
                                come_call_finalizer2(sVarTable_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sVarTable_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                info_289.lv_table=lv_table_290;
                                __dec_obj132=info_289.generics_type_names;
                                info_289.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value448=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value447=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 927, "struct list$1charph"))))))));
                                come_call_finalizer2(list$1charph_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1charphp_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1charphp_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj133=info_289.generics_classes;
                                info_289.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value450=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value449=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 928, "struct map$2charphsClassph"))))))));
                                come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(map$2charphsClassphp_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                info_289.verbose=verbose_282;
                                init_classes(&info_289);
                                init_module(&info_289);
                                clear_tmp_file(&info_289);
                                if(_if_conditional448=!cpp(&info_289),                                _if_conditional448) {
                                    printf("%s %d: transpile failed\n",info_289.sname,info_289.sline);
                                    exit(2);
                                }
                                __dec_obj134=info_289.original_source;
                                info_289.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value453=string_to_buffer(((char*)(right_value452=string_read(((char*)(right_value451=xsprintf("%s",it_288))))))))));
                                come_call_finalizer2(buffer_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                right_value451 = come_decrement_ref_count2(right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value452 = come_decrement_ref_count2(right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                __dec_obj135=info_289.source;
                                info_289.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value456=string_to_buffer(((char*)(right_value455=string_read(((char*)(right_value454=xsprintf("%s.i",it_288))))))))));
                                come_call_finalizer2(buffer_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                right_value454 = come_decrement_ref_count2(right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value455 = come_decrement_ref_count2(right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                info_289.p=info_289.source->buf;
                                info_289.head=info_289.source->buf;
                                if(output_file_name_281) {
                                    __dec_obj136=info_289.output_file_name;
                                    info_289.output_file_name=(char*)come_increment_ref_count(((char*)(right_value457=__builtin_string(output_file_name_281))));
                                    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value457 = come_decrement_ref_count2(right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    __dec_obj137=info_289.output_file_name;
                                    info_289.output_file_name=((void*)0);
                                    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                if(_if_conditional450=!output_cpp_file_279,                                _if_conditional450) {
                                    transpile_v5(&info_289);
                                    if(_if_conditional451=!output_source_file_v3(&info_289),                                    _if_conditional451) {
                                        printf("%s %d: output source file faield\n",info_289.sname,info_289.sline);
                                        exit(2);
                                    }
                                    if(_if_conditional452=info_289.err_num>0,                                    _if_conditional452) {
                                        printf("transpile error. err num %d\n",info_289.err_num);
                                        exit(2);
                                    }
                                    else {
                                        if(_if_conditional453=!compile(&info_289,output_object_file_278,object_files_277),                                        _if_conditional453) {
                                            printf("%s %d: compile faield\n",info_289.sname,info_289.sline);
                                            exit(27);
                                        }
                                    }
                                }
                                come_call_finalizer2(sInfo_finalize,(&info_289), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sVarTable_finalize,lv_table_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1charphp_finalize,o2_saved_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            if(_if_conditional454=!output_object_file_278&&!output_cpp_file_279&&(list$1charph_length(files_276)>0||list$1charph_length(object_files_277)>0),                            _if_conditional454) {
                                memset(&info_291,0,sizeof(struct sInfo));
                                __dec_obj138=info_291.sname;
                                info_291.sname=(char*)come_increment_ref_count(((char*)(right_value459=string_clone(((char*)(right_value458=list$1charphp_operator_load_element(files_276,0)))))));
                                __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value458 = come_decrement_ref_count2(right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value459 = come_decrement_ref_count2(right_value459, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj139=info_291.clang_option;
                                info_291.clang_option=(char*)come_increment_ref_count(((char*)(right_value460=buffer_to_string(clang_option_274))));
                                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value460 = come_decrement_ref_count2(right_value460, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                info_291.verbose=verbose_282;
                                if(output_file_name_281) {
                                    __dec_obj140=info_291.output_file_name;
                                    info_291.output_file_name=(char*)come_increment_ref_count(((char*)(right_value461=__builtin_string(output_file_name_281))));
                                    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value461 = come_decrement_ref_count2(right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    __dec_obj141=info_291.output_file_name;
                                    info_291.output_file_name=((void*)0);
                                    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                __current_stack2__.info_291 = &info_291;
                                __current_stack2__.clang_option_274 = &clang_option_274;
                                __current_stack2__.cpp_option_275 = &cpp_option_275;
                                __current_stack2__.files_276 = &files_276;
                                __current_stack2__.object_files_277 = &object_files_277;
                                __current_stack2__.output_object_file_278 = &output_object_file_278;
                                __current_stack2__.output_cpp_file_279 = &output_cpp_file_279;
                                __current_stack2__.output_source_file_flag_280 = &output_source_file_flag_280;
                                __current_stack2__.output_file_name_281 = &output_file_name_281;
                                __current_stack2__.verbose_282 = &verbose_282;
                                __current_stack2__.come_debug_283 = &come_debug_283;
                                __current_stack2__.come_malloc_284 = &come_malloc_284;
                                __current_stack2__.come_str_285 = &come_str_285;
                                __current_stack2__.argc = &argc;
                                __current_stack2__.argv = &argv;
                                bool_expect(linker(&info_291,object_files_277),&__current_stack2__,(void*)method_block2_02transpilec);
                                                    if(__current_stack2__.__method_block_result_kind__ == 3)
                    {
                        return (int)__current_stack2__.__method_block_return_value__;
                    }
                                come_call_finalizer2(sInfo_finalize,(&info_291), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
                            }
                            come_final_v5();
                            come_call_finalizer2(buffer_finalize,clang_option_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,cpp_option_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,files_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,object_files_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            output_file_name_281 = come_decrement_ref_count2(output_file_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    __result166__ = 0;
    return __result166__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
void* right_value355;
void* right_value356;
void* right_value357;
int i_256;
void* right_value358;
void* right_value359;
struct list$1charp* __dec_obj103;
struct map$2charphsFunph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
memset(&i_256, 0, sizeof(int));
right_value358 = (void*)0;
right_value359 = (void*)0;
                self->keys=(char**)come_increment_ref_count(((char**)(right_value355=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1066, "char*"))));
                right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value356=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(1024)), "/usr/local/include/comelang2.h", 1067, "struct sFun*"))));
                come_call_finalizer2(sFun_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value357=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1068, "_Bool"))));
                right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_256=0;                i_256<1024;                i_256++                ){
                    self->item_existance[i_256]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj103=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value359=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value358=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1078, "struct list$1charp"))))))));
                come_call_finalizer2(list$1charp_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charpp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charpp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->it=0;
                __result151__ = __result_obj__ = self;
                come_call_finalizer2(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result151__;
                come_call_finalizer2(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_257;
_Bool _if_conditional349;
_Bool _if_conditional350;
int i_258;
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_257, 0, sizeof(int));
memset(&i_258, 0, sizeof(int));
                    for(                    i_257=0;                    i_257<self->size;                    i_257++                    ){
                        if(_if_conditional349=self->item_existance[i_257],                        _if_conditional349) {
                            if(_if_conditional350=1,                            _if_conditional350) {
                                come_call_finalizer2(sFun_finalize,self->items[i_257], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(                    i_258=0;                    i_258<self->size;                    i_258++                    ){
                        if(_if_conditional351=self->item_existance[i_258],                        _if_conditional351) {
                            if(_if_conditional352=1,                            _if_conditional352) {
                                self->keys[i_258] = come_decrement_ref_count2(self->keys[i_258], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional353;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional353=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional353) {
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* right_value362;
void* right_value363;
void* right_value364;
int i_259;
void* right_value365;
void* right_value366;
struct list$1charp* __dec_obj105;
struct map$2charphsGenericsFunph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&i_259, 0, sizeof(int));
right_value365 = (void*)0;
right_value366 = (void*)0;
                self->keys=(char**)come_increment_ref_count(((char**)(right_value362=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1066, "char*"))));
                right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value363=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(1024)), "/usr/local/include/comelang2.h", 1067, "struct sGenericsFun*"))));
                come_call_finalizer2(sGenericsFun_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value364=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1068, "_Bool"))));
                right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_259=0;                i_259<1024;                i_259++                ){
                    self->item_existance[i_259]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj105=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value366=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value365=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1078, "struct list$1charp"))))))));
                come_call_finalizer2(list$1charp_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charpp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charpp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->it=0;
                __result152__ = __result_obj__ = self;
                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result152__;
                come_call_finalizer2(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional354=self!=((void*)0)&&self->mImplType!=((void*)0),                    _if_conditional354) {
                        come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional355=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                    _if_conditional355) {
                        come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional356=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                    _if_conditional356) {
                        come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional357=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional357) {
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional358=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional358) {
                        come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional359=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional359) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional360=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional360) {
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional361=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                    _if_conditional361) {
                        come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional362=self!=((void*)0)&&self->mBlock!=((void*)0),                    _if_conditional362) {
                        self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional363=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                    _if_conditional363) {
                        self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_260;
_Bool _if_conditional364;
_Bool _if_conditional365;
int i_261;
_Bool _if_conditional366;
_Bool _if_conditional367;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_260, 0, sizeof(int));
memset(&i_261, 0, sizeof(int));
                    for(                    i_260=0;                    i_260<self->size;                    i_260++                    ){
                        if(_if_conditional364=self->item_existance[i_260],                        _if_conditional364) {
                            if(_if_conditional365=1,                            _if_conditional365) {
                                come_call_finalizer2(sGenericsFun_finalize,self->items[i_260], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(                    i_261=0;                    i_261<self->size;                    i_261++                    ){
                        if(_if_conditional366=self->item_existance[i_261],                        _if_conditional366) {
                            if(_if_conditional367=1,                            _if_conditional367) {
                                self->keys[i_261] = come_decrement_ref_count2(self->keys[i_261], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional368;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional368=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional368) {
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value369;
void* right_value370;
void* right_value371;
int i_262;
void* right_value372;
void* right_value373;
struct list$1charp* __dec_obj107;
struct map$2charphsClassph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
memset(&i_262, 0, sizeof(int));
right_value372 = (void*)0;
right_value373 = (void*)0;
                self->keys=(char**)come_increment_ref_count(((char**)(right_value369=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1066, "char*"))));
                right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value370=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(1024)), "/usr/local/include/comelang2.h", 1067, "struct sClass*"))));
                come_call_finalizer2(sClass_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value371=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1068, "_Bool"))));
                right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_262=0;                i_262<1024;                i_262++                ){
                    self->item_existance[i_262]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj107=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value373=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value372=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1078, "struct list$1charp"))))))));
                come_call_finalizer2(list$1charp_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charpp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charpp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->it=0;
                __result153__ = __result_obj__ = self;
                come_call_finalizer2(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result153__;
                come_call_finalizer2(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_263;
_Bool _if_conditional369;
_Bool _if_conditional370;
int i_264;
_Bool _if_conditional371;
_Bool _if_conditional372;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_263, 0, sizeof(int));
memset(&i_264, 0, sizeof(int));
                    for(                    i_263=0;                    i_263<self->size;                    i_263++                    ){
                        if(_if_conditional369=self->item_existance[i_263],                        _if_conditional369) {
                            if(_if_conditional370=1,                            _if_conditional370) {
                                come_call_finalizer2(sClass_finalize,self->items[i_263], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(                    i_264=0;                    i_264<self->size;                    i_264++                    ){
                        if(_if_conditional371=self->item_existance[i_264],                        _if_conditional371) {
                            if(_if_conditional372=1,                            _if_conditional372) {
                                self->keys[i_264] = come_decrement_ref_count2(self->keys[i_264], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional373=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional373) {
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* right_value376;
void* right_value377;
void* right_value378;
int i_265;
void* right_value379;
void* right_value380;
struct list$1charp* __dec_obj109;
struct map$2charphsTypeph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
memset(&i_265, 0, sizeof(int));
right_value379 = (void*)0;
right_value380 = (void*)0;
                self->keys=(char**)come_increment_ref_count(((char**)(right_value376=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1066, "char*"))));
                right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                self->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value377=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(1024)), "/usr/local/include/comelang2.h", 1067, "struct sType*"))));
                come_call_finalizer2(sType_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value378=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1068, "_Bool"))));
                right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_265=0;                i_265<1024;                i_265++                ){
                    self->item_existance[i_265]=(_Bool)0;
                }
                self->size=1024;
                self->len=0;
                __dec_obj109=self->key_list;
                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value380=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value379=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1078, "struct list$1charp"))))))));
                come_call_finalizer2(list$1charp_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charpp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charpp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                self->it=0;
                __result154__ = __result_obj__ = self;
                come_call_finalizer2(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result154__;
                come_call_finalizer2(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_266;
_Bool _if_conditional374;
_Bool _if_conditional375;
int i_267;
_Bool _if_conditional376;
_Bool _if_conditional377;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_266, 0, sizeof(int));
memset(&i_267, 0, sizeof(int));
                    for(                    i_266=0;                    i_266<self->size;                    i_266++                    ){
                        if(_if_conditional374=self->item_existance[i_266],                        _if_conditional374) {
                            if(_if_conditional375=1,                            _if_conditional375) {
                                come_call_finalizer2(sType_finalize,self->items[i_266], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(                    i_267=0;                    i_267<self->size;                    i_267++                    ){
                        if(_if_conditional376=self->item_existance[i_267],                        _if_conditional376) {
                            if(_if_conditional377=1,                            _if_conditional377) {
                                self->keys[i_267] = come_decrement_ref_count2(self->keys[i_267], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional378=self!=((void*)0)&&self->key_list!=((void*)0),                _if_conditional378) {
                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result155__ = __result_obj__ = self;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result155__;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_268;
_Bool _while_condtional31;
struct list_item$1sRightValueObjectph* prev_it_269;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_268, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_269, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_268=self->head;
                    while(_while_condtional31=it_268!=((void*)0),                    _while_condtional31) {
                        prev_it_269=it_268;
                        it_268=it_268->next;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional379;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional379=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional379) {
                                come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional380=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional380) {
                                        come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional381=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional381) {
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional382=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional382) {
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result156__ = __result_obj__ = self;
                come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result156__;
                come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_270;
_Bool _while_condtional32;
struct list_item$1CVALUEph* prev_it_271;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_270, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_271, 0, sizeof(struct list_item$1CVALUEph*));
                    it_270=self->head;
                    while(_while_condtional32=it_270!=((void*)0),                    _while_condtional32) {
                        prev_it_271=it_270;
                        it_270=it_270->next;
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional383;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional383=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional383) {
                                come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional384;
_Bool _if_conditional385;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional384=self!=((void*)0)&&self->c_value!=((void*)0),                                    _if_conditional384) {
                                        self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional385=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional385) {
                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
                __result157__ = self->len;
                return __result157__;
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
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
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional389=self!=((void*)0)&&self->original_source!=((void*)0),                _if_conditional389) {
                    come_call_finalizer2(buffer_finalize,self->original_source, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional390=self!=((void*)0)&&self->source!=((void*)0),                _if_conditional390) {
                    come_call_finalizer2(buffer_finalize,self->source, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional391) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional392=self!=((void*)0)&&self->base_sname!=((void*)0),                _if_conditional392) {
                    self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional393=self!=((void*)0)&&self->err_line!=((void*)0),                _if_conditional393) {
                    self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional394=self!=((void*)0)&&self->clang_option!=((void*)0),                _if_conditional394) {
                    self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional395=self!=((void*)0)&&self->cpp_option!=((void*)0),                _if_conditional395) {
                    self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional396=self!=((void*)0)&&self->come_fun_name!=((void*)0),                _if_conditional396) {
                    self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional397=self!=((void*)0)&&self->funcs!=((void*)0),                _if_conditional397) {
                    come_call_finalizer2(map$2charphsFunphp_finalize,self->funcs, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional398=self!=((void*)0)&&self->generics_funcs!=((void*)0),                _if_conditional398) {
                    come_call_finalizer2(map$2charphsGenericsFunphp_finalize,self->generics_funcs, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional399=self!=((void*)0)&&self->classes!=((void*)0),                _if_conditional399) {
                    come_call_finalizer2(map$2charphsClassphp_finalize,self->classes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional400=self!=((void*)0)&&self->types!=((void*)0),                _if_conditional400) {
                    come_call_finalizer2(map$2charphsTypephp_finalize,self->types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional401=self!=((void*)0)&&self->generics_classes!=((void*)0),                _if_conditional401) {
                    come_call_finalizer2(map$2charphsClassphp_finalize,self->generics_classes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional402=self!=((void*)0)&&self->module!=((void*)0),                _if_conditional402) {
                    come_call_finalizer2(sModule_finalize,self->module, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional403=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional403) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional404=self!=((void*)0)&&self->right_value_objects!=((void*)0),                _if_conditional404) {
                    come_call_finalizer2(list$1sRightValueObjectphp_finalize,self->right_value_objects, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional405=self!=((void*)0)&&self->generics_type!=((void*)0),                _if_conditional405) {
                    come_call_finalizer2(sType_finalize,self->generics_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional406=self!=((void*)0)&&self->method_generics_types!=((void*)0),                _if_conditional406) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional407=self!=((void*)0)&&self->stack!=((void*)0),                _if_conditional407) {
                    come_call_finalizer2(list$1CVALUEphp_finalize,self->stack, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional408=self!=((void*)0)&&self->come_function_result_type!=((void*)0),                _if_conditional408) {
                    come_call_finalizer2(sType_finalize,self->come_function_result_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional409=self!=((void*)0)&&self->gv_table!=((void*)0),                _if_conditional409) {
                    come_call_finalizer2(sVarTable_finalize,self->gv_table, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional410=self!=((void*)0)&&self->generics_type_names!=((void*)0),                _if_conditional410) {
                    come_call_finalizer2(list$1charphp_finalize,self->generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional411=self!=((void*)0)&&self->method_generics_type_names!=((void*)0),                _if_conditional411) {
                    come_call_finalizer2(list$1charphp_finalize,self->method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional412=self!=((void*)0)&&self->impl_type!=((void*)0),                _if_conditional412) {
                    come_call_finalizer2(sType_finalize,self->impl_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional413=self!=((void*)0)&&self->output_file_name!=((void*)0),                _if_conditional413) {
                    self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional414=self!=((void*)0)&&self->function_result_type!=((void*)0),                _if_conditional414) {
                    come_call_finalizer2(sType_finalize,self->function_result_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional455;
struct list_item$1charph* it_292;
int i_293;
_Bool _while_condtional33;
_Bool _if_conditional456;
char* __result164__;
char* default_value_294;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_292, 0, sizeof(struct list_item$1charph*));
memset(&i_293, 0, sizeof(int));
memset(&default_value_294, 0, sizeof(char*));
                                    if(_if_conditional455=position<0,                                    _if_conditional455) {
                                        position+=self->len;
                                    }
                                    it_292=self->head;
                                    i_293=0;
                                    while(_while_condtional33=it_292!=((void*)0),                                    _while_condtional33) {
                                        if(_if_conditional456=position==i_293,                                        _if_conditional456) {
                                            __result164__ = __result_obj__ = it_292->item;
                                            return __result164__;
                                        }
                                        it_292=it_292->next;
                                        i_293++;
                                    }
                                    memset(&default_value_294,0,sizeof(char*));
                                    __result165__ = __result_obj__ = default_value_294;
                                    default_value_294 = come_decrement_ref_count2(default_value_294, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result165__;
                                    default_value_294 = come_decrement_ref_count2(default_value_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                                    printf("%s %d: linker faield\n",(*(parent->info_291)).sname,(*(parent->info_291)).sline);
                                    exit(13);
}

